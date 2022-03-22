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
#define STATE_COUNT 1333
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 31
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
  sym_trigger_name = 207,
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
  sym_role_with_option = 231,
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
  sym_compact_storage = 249,
  sym_clustering_order = 250,
  sym_create_trigger = 251,
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
  [sym_trigger_name] = "trigger_name",
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
  [sym_trigger_name] = sym_trigger_name,
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
  [sym_trigger_name] = {
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
    [4] = anon_alias_sym_type,
  },
  [36] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [37] = {
    [2] = anon_alias_sym_ttl,
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
    [0] = anon_alias_sym_param_name,
  },
  [42] = {
    [5] = anon_alias_sym_role,
  },
  [43] = {
    [1] = anon_alias_sym_password,
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
    [2] = anon_alias_sym_password,
  },
  [48] = {
    [2] = anon_alias_sym_login,
  },
  [49] = {
    [2] = anon_alias_sym_user,
  },
  [50] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [51] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [52] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [54] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
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
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [62] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [63] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [64] = {
    [2] = anon_alias_sym_key,
  },
  [65] = {
    [2] = anon_alias_sym_entry,
  },
  [66] = {
    [2] = anon_alias_sym_full,
  },
  [67] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [68] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [69] = {
    [0] = anon_alias_sym_primary_key,
  },
  [70] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [71] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [72] = {
    [4] = anon_alias_sym_column,
  },
  [73] = {
    [2] = anon_alias_sym_value,
  },
  [74] = {
    [0] = anon_alias_sym_partition_key,
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
          lookahead == 'b') ADVANCE(44);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
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
          lookahead == 'p') ADVANCE(46);
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
          lookahead == 'k') ADVANCE(800);
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
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
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
    case 45:
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
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 47:
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
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
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
          lookahead == 'e') ADVANCE(51);
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
          lookahead == 'l') ADVANCE(50);
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
          lookahead == 'n') ADVANCE(53);
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
          lookahead == 'm') ADVANCE(52);
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
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
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
          lookahead == 't') ADVANCE(49);
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
          lookahead == 's') ADVANCE(911);
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
          lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
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
          lookahead == 'i') ADVANCE(798);
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
          lookahead == 'l') ADVANCE(799);
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
          lookahead == 'n') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
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
          lookahead == 'r') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
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
          lookahead == 's') ADVANCE(912);
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
          lookahead == 's') ADVANCE(915);
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
          lookahead == 't') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(889);
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
          lookahead == 't') ADVANCE(801);
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
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 554},
  [62] = {.lex_state = 554},
  [63] = {.lex_state = 554},
  [64] = {.lex_state = 554},
  [65] = {.lex_state = 554},
  [66] = {.lex_state = 554},
  [67] = {.lex_state = 554},
  [68] = {.lex_state = 554},
  [69] = {.lex_state = 554},
  [70] = {.lex_state = 554},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 554},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 554},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 554},
  [91] = {.lex_state = 554},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 554},
  [94] = {.lex_state = 553},
  [95] = {.lex_state = 554},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 554},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 553},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 554},
  [108] = {.lex_state = 554},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 554},
  [111] = {.lex_state = 554},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 553},
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
  [146] = {.lex_state = 554},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 553},
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
  [200] = {.lex_state = 554},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 554},
  [205] = {.lex_state = 554},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 554},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 554},
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
  [224] = {.lex_state = 554},
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
  [385] = {.lex_state = 1},
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
  [397] = {.lex_state = 553},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 553},
  [400] = {.lex_state = 553},
  [401] = {.lex_state = 553},
  [402] = {.lex_state = 553},
  [403] = {.lex_state = 553},
  [404] = {.lex_state = 553},
  [405] = {.lex_state = 553},
  [406] = {.lex_state = 553},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 553},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 553},
  [414] = {.lex_state = 553},
  [415] = {.lex_state = 43},
  [416] = {.lex_state = 54},
  [417] = {.lex_state = 54},
  [418] = {.lex_state = 553},
  [419] = {.lex_state = 553},
  [420] = {.lex_state = 554},
  [421] = {.lex_state = 553},
  [422] = {.lex_state = 553},
  [423] = {.lex_state = 553},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 553},
  [426] = {.lex_state = 43},
  [427] = {.lex_state = 553},
  [428] = {.lex_state = 553},
  [429] = {.lex_state = 43},
  [430] = {.lex_state = 553},
  [431] = {.lex_state = 553},
  [432] = {.lex_state = 553},
  [433] = {.lex_state = 554},
  [434] = {.lex_state = 19},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 19},
  [438] = {.lex_state = 19},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 10},
  [444] = {.lex_state = 14},
  [445] = {.lex_state = 554},
  [446] = {.lex_state = 554},
  [447] = {.lex_state = 14},
  [448] = {.lex_state = 14},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 554},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 12},
  [455] = {.lex_state = 54},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 25},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 554},
  [469] = {.lex_state = 10},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 17},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 10},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 17},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 18},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 18},
  [486] = {.lex_state = 18},
  [487] = {.lex_state = 18},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 18},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 18},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 18},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 18},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 22},
  [517] = {.lex_state = 18},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 18},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 18},
  [525] = {.lex_state = 22},
  [526] = {.lex_state = 18},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 18},
  [530] = {.lex_state = 18},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 18},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 10},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 554},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 10},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 554},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 21},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 554},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
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
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
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
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 21},
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
  [629] = {.lex_state = 21},
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
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 21},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 23},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 10},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
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
  [673] = {.lex_state = 26},
  [674] = {.lex_state = 10},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 21},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 553},
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 21},
  [687] = {.lex_state = 10},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 10},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 10},
  [695] = {.lex_state = 21},
  [696] = {.lex_state = 21},
  [697] = {.lex_state = 21},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 21},
  [700] = {.lex_state = 21},
  [701] = {.lex_state = 21},
  [702] = {.lex_state = 21},
  [703] = {.lex_state = 21},
  [704] = {.lex_state = 21},
  [705] = {.lex_state = 21},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 21},
  [729] = {.lex_state = 10},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 21},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 554},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 10},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 21},
  [773] = {.lex_state = 21},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 28},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 28},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 16},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 10},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 554},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 10},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 554},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 10},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 553},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 10},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 10},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 10},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 554},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 10},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 10},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 10},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 10},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 10},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 10},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 10},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 10},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 10},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 10},
  [998] = {.lex_state = 10},
  [999] = {.lex_state = 10},
  [1000] = {.lex_state = 10},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 553},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 554},
  [1007] = {.lex_state = 554},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 43},
  [1010] = {.lex_state = 554},
  [1011] = {.lex_state = 10},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 10},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
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
  [1032] = {.lex_state = 10},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 10},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 553},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 10},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 10},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 10},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 0},
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
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 553},
  [1099] = {.lex_state = 553},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 554},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 10},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 10},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 10},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 10},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 10},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 553},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 553},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 553},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 553},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 10},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 553},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 10},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 10},
  [1162] = {.lex_state = 10},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 553},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 10},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 10},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 553},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 10},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 10},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 553},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 10},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 10},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 553},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 553},
  [1224] = {.lex_state = 553},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 10},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 10},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 553},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 553},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 10},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 10},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 10},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 10},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 553},
  [1278] = {.lex_state = 10},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 553},
  [1283] = {.lex_state = 10},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 10},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 553},
  [1288] = {.lex_state = 10},
  [1289] = {.lex_state = 10},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 10},
  [1294] = {.lex_state = 10},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 10},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 10},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 10},
  [1309] = {.lex_state = 10},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 553},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 10},
  [1318] = {.lex_state = 10},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 554},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 10},
  [1332] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1329),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(260),
    [sym_delete_statement] = STATE(260),
    [sym_begin_batch] = STATE(564),
    [sym_insert_statement] = STATE(260),
    [sym_truncate] = STATE(260),
    [sym_create_index] = STATE(260),
    [sym_drop_index] = STATE(260),
    [sym_update] = STATE(260),
    [sym_use] = STATE(260),
    [sym_grant] = STATE(260),
    [sym_revoke] = STATE(260),
    [sym_list_roles] = STATE(260),
    [sym_list_permissions] = STATE(260),
    [sym_drop_aggregate] = STATE(260),
    [sym_drop_materialized_view] = STATE(260),
    [sym_drop_function] = STATE(260),
    [sym_drop_keyspace] = STATE(260),
    [sym_drop_role] = STATE(260),
    [sym_drop_table] = STATE(260),
    [sym_drop_trigger] = STATE(260),
    [sym_drop_type] = STATE(260),
    [sym_drop_user] = STATE(260),
    [sym_create_aggregate] = STATE(260),
    [sym_create_materialized_view] = STATE(260),
    [sym_create_function] = STATE(260),
    [sym_create_keyspace] = STATE(260),
    [sym_create_role] = STATE(260),
    [sym_create_table] = STATE(260),
    [sym_create_trigger] = STATE(260),
    [sym_create_type] = STATE(260),
    [sym_create_user] = STATE(260),
    [sym_alter_materialized_view] = STATE(260),
    [sym_alter_keyspace] = STATE(260),
    [sym_alter_role] = STATE(260),
    [sym_alter_table] = STATE(260),
    [sym_alter_type] = STATE(260),
    [sym_alter_user] = STATE(260),
    [sym_apply_batch] = STATE(260),
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
    STATE(564), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(260), 37,
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
    STATE(564), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(260), 37,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1232), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(929), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1105), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1270), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1138), 1,
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
    STATE(71), 1,
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
  [495] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(848), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1276), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1167), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1163), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1157), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(344), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(626), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(834), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1153), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(879), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1125), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1320), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(239), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1114), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1110), 1,
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
    STATE(71), 1,
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
  [1055] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1284), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(919), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(923), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(559), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(934), 1,
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
    STATE(71), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1091), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1084), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1079), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1074), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1071), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1070), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1065), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1201), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1046), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1040), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(954), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(160), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(958), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(238), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1036), 1,
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
    STATE(71), 1,
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
  [1858] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1194), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1015), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(518), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(821), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(554), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(989), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(985), 1,
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
  [2103] = 2,
    STATE(645), 1,
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
  [2135] = 2,
    STATE(829), 1,
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
  [2167] = 1,
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
  [2229] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(67), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2260] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
  [2291] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2318] = 1,
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
  [2345] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
  [2376] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(64), 1,
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
  [2407] = 8,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(90), 1,
      sym_where_spec,
    STATE(107), 1,
      sym_order_spec,
    STATE(204), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2447] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_where_spec,
    STATE(110), 1,
      sym_order_spec,
    STATE(210), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2487] = 3,
    ACTIONS(126), 1,
      anon_sym_LT,
    STATE(92), 1,
      sym_data_type_definition,
    ACTIONS(124), 21,
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
  [2517] = 1,
    ACTIONS(128), 23,
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
  [2543] = 3,
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
  [2573] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(108), 1,
      sym_order_spec,
    STATE(208), 1,
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
  [2613] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(86), 1,
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
  [2642] = 1,
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
  [2667] = 1,
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
  [2692] = 1,
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
  [2717] = 1,
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
  [2742] = 1,
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
  [2767] = 1,
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
  [2792] = 1,
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
  [2892] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
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
  [2945] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(108), 1,
      sym_order_spec,
    STATE(208), 1,
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
  [2979] = 1,
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
  [3003] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(110), 1,
      sym_order_spec,
    STATE(210), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(111), 1,
      sym_order_spec,
    STATE(224), 1,
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
  [3119] = 2,
    ACTIONS(175), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3144] = 1,
    ACTIONS(177), 20,
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
    ACTIONS(193), 1,
      aux_sym_relation_element_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3267] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3289] = 4,
    ACTIONS(197), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(322), 1,
      sym_using_ttl_timestamp,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3317] = 9,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(616), 1,
      sym_expression,
    STATE(1141), 1,
      sym_expression_list,
    STATE(831), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3355] = 3,
    STATE(291), 1,
      sym_user_super_user,
    ACTIONS(213), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(211), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3381] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3403] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3425] = 4,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(221), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3453] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(210), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3481] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(224), 1,
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
  [3509] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3531] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(208), 1,
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
  [3559] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(227), 1,
      aux_sym_select_statement_token4,
    STATE(200), 1,
      sym_limit_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3587] = 4,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(231), 1,
      aux_sym_delete_statement_token2,
    STATE(325), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3615] = 9,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(616), 1,
      sym_expression,
    STATE(860), 1,
      sym_expression_list,
    STATE(831), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3653] = 2,
    ACTIONS(235), 1,
      aux_sym_privilege_token2,
    ACTIONS(233), 18,
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
  [3677] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3699] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(239), 17,
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
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_role_with_repeat1,
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
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_alter_type_add_repeat1,
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
  [3819] = 1,
    ACTIONS(257), 18,
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
  [3840] = 1,
    ACTIONS(239), 18,
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
  [3861] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_alter_table_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3886] = 3,
    ACTIONS(265), 1,
      aux_sym_delete_statement_token2,
    STATE(309), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3911] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3932] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
      aux_sym_table_options_repeat1,
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
  [3957] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [3982] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4007] = 3,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(301), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4032] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4057] = 3,
    ACTIONS(289), 1,
      aux_sym_delete_statement_token2,
    STATE(276), 1,
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
  [4082] = 3,
    ACTIONS(293), 1,
      aux_sym_delete_statement_token2,
    STATE(300), 1,
      sym_if_spec,
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
  [4107] = 3,
    ACTIONS(297), 1,
      aux_sym_delete_statement_token2,
    STATE(283), 1,
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
  [4132] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4157] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(323), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4182] = 3,
    ACTIONS(307), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4207] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4230] = 3,
    ACTIONS(315), 1,
      aux_sym_delete_statement_token2,
    STATE(386), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4255] = 2,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(317), 17,
      ts_builtin_sym_end,
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
  [4278] = 3,
    ACTIONS(323), 1,
      aux_sym_delete_statement_token2,
    STATE(356), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4303] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(339), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4328] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(337), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4353] = 3,
    ACTIONS(331), 1,
      aux_sym_delete_statement_token2,
    STATE(245), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4378] = 3,
    ACTIONS(335), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(333), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4403] = 3,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4428] = 1,
    ACTIONS(344), 18,
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
  [4449] = 3,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_alter_table_add_repeat1,
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
  [4474] = 3,
    ACTIONS(353), 1,
      aux_sym_delete_statement_token2,
    STATE(264), 1,
      sym_if_spec,
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
  [4499] = 3,
    ACTIONS(357), 1,
      aux_sym_relation_elements_token1,
    STATE(149), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4524] = 1,
    ACTIONS(360), 18,
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
  [4545] = 1,
    ACTIONS(362), 18,
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
  [4566] = 8,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(727), 1,
      sym_expression,
    STATE(831), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4601] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(126), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4626] = 1,
    ACTIONS(233), 18,
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
  [4647] = 3,
    ACTIONS(368), 1,
      aux_sym_materialized_view_options_token1,
    STATE(273), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4672] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_alter_table_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4697] = 3,
    ACTIONS(374), 1,
      aux_sym_delete_statement_token2,
    STATE(318), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4722] = 1,
    ACTIONS(376), 18,
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
  [4743] = 3,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(299), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4768] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_type_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4793] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(130), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4818] = 3,
    ACTIONS(388), 1,
      aux_sym_relation_elements_token1,
    STATE(162), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4843] = 3,
    ACTIONS(393), 1,
      aux_sym_delete_statement_token2,
    STATE(393), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4868] = 3,
    ACTIONS(397), 1,
      aux_sym_relation_elements_token1,
    STATE(162), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4893] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_alter_type_add_repeat1,
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
  [4918] = 3,
    ACTIONS(403), 1,
      aux_sym_delete_statement_token2,
    STATE(247), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4943] = 1,
    ACTIONS(405), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4964] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(389), 1,
      sym_materialized_view_options,
    ACTIONS(407), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4989] = 3,
    ACTIONS(411), 1,
      aux_sym_delete_statement_token2,
    STATE(382), 1,
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
  [5014] = 1,
    ACTIONS(413), 18,
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
  [5035] = 3,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(307), 1,
      sym_using_ttl_timestamp,
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
  [5060] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(277), 1,
      sym_materialized_view_options,
    ACTIONS(417), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5085] = 3,
    ACTIONS(368), 1,
      aux_sym_materialized_view_options_token1,
    STATE(285), 1,
      sym_role_with,
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
  [5110] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(267), 1,
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
  [5135] = 3,
    ACTIONS(425), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5160] = 3,
    ACTIONS(430), 1,
      aux_sym_relation_elements_token1,
    STATE(149), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5185] = 3,
    ACTIONS(434), 1,
      aux_sym_list_roles_token2,
    ACTIONS(436), 1,
      aux_sym_list_roles_token3,
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
  [5210] = 3,
    ACTIONS(440), 1,
      aux_sym_create_index_token3,
    ACTIONS(442), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5235] = 3,
    ACTIONS(446), 1,
      aux_sym_materialized_view_options_token1,
    STATE(288), 1,
      sym_with_element,
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
  [5260] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(335), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5285] = 3,
    ACTIONS(303), 1,
      aux_sym_materialized_view_options_token1,
    STATE(269), 1,
      sym_materialized_view_options,
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
  [5310] = 1,
    ACTIONS(452), 18,
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
  [5331] = 3,
    ACTIONS(456), 1,
      aux_sym_delete_statement_token2,
    STATE(327), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5356] = 3,
    ACTIONS(430), 1,
      aux_sym_relation_elements_token1,
    STATE(176), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5381] = 1,
    ACTIONS(460), 18,
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
  [5402] = 3,
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
  [5427] = 3,
    ACTIONS(468), 1,
      aux_sym_relation_elements_token1,
    STATE(187), 1,
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
  [5452] = 1,
    ACTIONS(471), 18,
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
  [5473] = 3,
    ACTIONS(250), 1,
      aux_sym_relation_elements_token1,
    STATE(187), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5498] = 1,
    ACTIONS(475), 18,
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
  [5519] = 3,
    ACTIONS(368), 1,
      aux_sym_materialized_view_options_token1,
    STATE(306), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5544] = 3,
    ACTIONS(481), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5569] = 3,
    ACTIONS(446), 1,
      aux_sym_materialized_view_options_token1,
    STATE(352), 1,
      sym_with_element,
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
  [5594] = 1,
    ACTIONS(485), 17,
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
  [5614] = 1,
    ACTIONS(487), 17,
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
  [5634] = 1,
    ACTIONS(489), 17,
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
  [5654] = 1,
    ACTIONS(491), 17,
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
  [5674] = 1,
    ACTIONS(493), 17,
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
  [5694] = 1,
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
  [5714] = 2,
    ACTIONS(497), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5736] = 1,
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
  [5756] = 1,
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
  [5776] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5798] = 2,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5820] = 1,
    ACTIONS(507), 17,
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
  [5840] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5860] = 1,
    ACTIONS(509), 17,
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
  [5880] = 2,
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
  [5902] = 1,
    ACTIONS(346), 17,
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
  [5922] = 2,
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
  [5944] = 1,
    ACTIONS(511), 17,
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
  [5964] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5986] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6006] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6028] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6050] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6072] = 2,
    ACTIONS(533), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6094] = 2,
    ACTIONS(537), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6116] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6138] = 1,
    ACTIONS(355), 17,
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
  [6158] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6178] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6200] = 1,
    ACTIONS(333), 17,
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
  [6220] = 2,
    ACTIONS(227), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6242] = 2,
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
  [6264] = 1,
    ACTIONS(553), 17,
      ts_builtin_sym_end,
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
  [6284] = 2,
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
  [6306] = 1,
    ACTIONS(559), 17,
      ts_builtin_sym_end,
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
  [6326] = 1,
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
  [6346] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6368] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6390] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6412] = 1,
    ACTIONS(575), 17,
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
  [6432] = 1,
    ACTIONS(386), 17,
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
  [6452] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6474] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6496] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6518] = 1,
    ACTIONS(589), 17,
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
  [6538] = 1,
    ACTIONS(591), 17,
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
  [6558] = 1,
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
  [6578] = 2,
    ACTIONS(597), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6600] = 1,
    ACTIONS(599), 17,
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
  [6620] = 1,
    ACTIONS(601), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6640] = 1,
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
  [6659] = 1,
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
  [6678] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6697] = 1,
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
  [6716] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6735] = 1,
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
  [6754] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6773] = 1,
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
  [6792] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6811] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6830] = 1,
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
  [6849] = 1,
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
  [6868] = 1,
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
  [6887] = 1,
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
  [6906] = 1,
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
  [6925] = 1,
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
  [6944] = 2,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    ACTIONS(631), 15,
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
  [6965] = 1,
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
  [6984] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7003] = 1,
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
  [7022] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7041] = 1,
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
  [7060] = 1,
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
  [7079] = 1,
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
  [7098] = 1,
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
  [7117] = 1,
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
  [7136] = 1,
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
  [7155] = 1,
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
  [7174] = 1,
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
  [7193] = 1,
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
  [7212] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7231] = 1,
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
  [7250] = 1,
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
  [7269] = 1,
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
  [7288] = 1,
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
  [7307] = 1,
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
  [7326] = 1,
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
  [7345] = 1,
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
  [7364] = 1,
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
  [7383] = 1,
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
  [7402] = 1,
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
  [7421] = 1,
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
  [7440] = 1,
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
  [7459] = 1,
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
  [7478] = 1,
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
  [7497] = 1,
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
  [7516] = 1,
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
  [7535] = 1,
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
  [7554] = 1,
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
  [7573] = 1,
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
  [7592] = 1,
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
  [7611] = 1,
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
  [7630] = 1,
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
  [7649] = 1,
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
  [7668] = 1,
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
  [7687] = 1,
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
  [7706] = 1,
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
  [7725] = 1,
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
  [7744] = 1,
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
  [7763] = 1,
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
  [7782] = 1,
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
  [7801] = 1,
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
  [7820] = 1,
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
  [7839] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7858] = 1,
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
  [7877] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7896] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7915] = 1,
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
  [7934] = 1,
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
  [7953] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7972] = 1,
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
  [7991] = 1,
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
  [8010] = 1,
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
  [8029] = 1,
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
  [8048] = 1,
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
  [8067] = 1,
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
  [8086] = 1,
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
  [8105] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8124] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8143] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8162] = 1,
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
  [8181] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8200] = 1,
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
  [8219] = 1,
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
  [8238] = 1,
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
  [8257] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8276] = 1,
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
  [8295] = 1,
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
  [8314] = 1,
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
  [8333] = 1,
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
  [8352] = 1,
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
  [8371] = 1,
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
  [8390] = 1,
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
  [8409] = 1,
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
  [8428] = 1,
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
  [8447] = 1,
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
  [8466] = 1,
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
  [8485] = 1,
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
  [8504] = 1,
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
  [8523] = 1,
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
  [8542] = 1,
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
  [8561] = 1,
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
  [8580] = 1,
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
  [8599] = 1,
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
  [8618] = 1,
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
  [8637] = 1,
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
  [8656] = 1,
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
  [8675] = 1,
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
  [8694] = 1,
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
  [8713] = 1,
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
  [8732] = 1,
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
  [8751] = 1,
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
  [8770] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8789] = 1,
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
  [8808] = 1,
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
  [8827] = 1,
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
  [8846] = 1,
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
  [8865] = 1,
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
  [8884] = 1,
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
  [8903] = 1,
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
  [8922] = 1,
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
  [8941] = 1,
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
  [8960] = 1,
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
  [8979] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8998] = 1,
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
  [9017] = 1,
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
  [9036] = 1,
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
  [9055] = 1,
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
  [9074] = 1,
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
  [9093] = 1,
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
  [9112] = 1,
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
  [9131] = 1,
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
  [9150] = 1,
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
  [9169] = 1,
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
  [9188] = 1,
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
  [9207] = 1,
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
  [9226] = 1,
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
  [9245] = 1,
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
  [9264] = 1,
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
  [9283] = 1,
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
  [9302] = 1,
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
  [9321] = 9,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(849), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(788), 1,
      sym_constant,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(533), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9356] = 1,
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
  [9375] = 1,
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
  [9394] = 1,
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
  [9413] = 1,
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
  [9432] = 1,
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
  [9451] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9470] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9489] = 1,
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
  [9508] = 1,
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
  [9527] = 1,
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
  [9546] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9565] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(360), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9593] = 1,
    ACTIONS(869), 15,
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
  [9611] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(305), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9639] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(724), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9667] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(388), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9695] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(315), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9723] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(319), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9751] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(395), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9779] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(334), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9807] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(342), 1,
      sym_init_cond_definition,
    STATE(170), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9835] = 8,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(871), 1,
      anon_sym_STAR,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1137), 1,
      sym_function_args,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(651), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9866] = 9,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(677), 1,
      sym_constant,
    STATE(678), 1,
      sym_init_cond_list,
    STATE(679), 1,
      sym_init_cond_hash_item,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9899] = 7,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1133), 1,
      sym_function_args,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(651), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9927] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(879), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(835), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9952] = 5,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(722), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9975] = 6,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(881), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(847), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(83), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(203), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10000] = 5,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(883), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(82), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10022] = 5,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(504), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10044] = 4,
    ACTIONS(889), 1,
      aux_sym_privilege_token1,
    ACTIONS(891), 1,
      aux_sym_resource_token4,
    STATE(178), 1,
      sym_privilege,
    ACTIONS(887), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10064] = 11,
    ACTIONS(893), 1,
      aux_sym_truncate_token2,
    ACTIONS(895), 1,
      aux_sym_create_index_token2,
    ACTIONS(897), 1,
      aux_sym_resource_token2,
    ACTIONS(899), 1,
      aux_sym_resource_token5,
    ACTIONS(901), 1,
      aux_sym_resource_token6,
    ACTIONS(903), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(905), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(907), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(909), 1,
      aux_sym_drop_type_token1,
    ACTIONS(911), 1,
      aux_sym_drop_user_token1,
    ACTIONS(913), 1,
      aux_sym_create_aggregate_token1,
  [10098] = 10,
    ACTIONS(915), 1,
      aux_sym_truncate_token2,
    ACTIONS(917), 1,
      aux_sym_create_index_token2,
    ACTIONS(919), 1,
      aux_sym_resource_token2,
    ACTIONS(921), 1,
      aux_sym_resource_token5,
    ACTIONS(923), 1,
      aux_sym_resource_token6,
    ACTIONS(925), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(927), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(929), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(931), 1,
      aux_sym_drop_type_token1,
    ACTIONS(933), 1,
      aux_sym_drop_user_token1,
  [10129] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(81), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10148] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(182), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10167] = 6,
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
  [10190] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(766), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10209] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(579), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10228] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(79), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10247] = 6,
    ACTIONS(947), 1,
      aux_sym_drop_index_token1,
    ACTIONS(949), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(951), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(953), 1,
      aux_sym_alter_table_rename_token1,
    STATE(270), 1,
      sym_alter_table_operation,
    STATE(271), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10270] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(972), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10289] = 3,
    ACTIONS(889), 1,
      aux_sym_privilege_token1,
    STATE(1300), 1,
      sym_privilege,
    ACTIONS(887), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10306] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(677), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10325] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(221), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10344] = 3,
    ACTIONS(889), 1,
      aux_sym_privilege_token1,
    STATE(1299), 1,
      sym_privilege,
    ACTIONS(887), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10361] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(506), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10380] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(594), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10399] = 4,
    ACTIONS(205), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(788), 1,
      sym_constant,
    ACTIONS(203), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10418] = 5,
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
  [10438] = 6,
    ACTIONS(955), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(957), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(959), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(1251), 1,
      sym_index_column_spec,
    STATE(838), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10459] = 6,
    ACTIONS(963), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(278), 1,
      sym_table_options,
    STATE(885), 1,
      sym_table_option_name,
    STATE(153), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10480] = 6,
    ACTIONS(963), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(294), 1,
      sym_table_options,
    STATE(885), 1,
      sym_table_option_name,
    STATE(153), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10501] = 6,
    ACTIONS(955), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(957), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(959), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(850), 1,
      sym_index_column_spec,
    STATE(838), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10522] = 6,
    ACTIONS(955), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(957), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(959), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(911), 1,
      sym_index_column_spec,
    STATE(838), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10543] = 6,
    ACTIONS(963), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(376), 1,
      sym_table_options,
    STATE(885), 1,
      sym_table_option_name,
    STATE(153), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10564] = 6,
    ACTIONS(969), 1,
      anon_sym_DOT,
    ACTIONS(971), 1,
      aux_sym_privilege_token3,
    ACTIONS(973), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(975), 1,
      aux_sym_alter_table_rename_token1,
    STATE(279), 1,
      sym_alter_type_operation,
    STATE(280), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10585] = 6,
    ACTIONS(963), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(251), 1,
      sym_table_options,
    STATE(885), 1,
      sym_table_option_name,
    STATE(153), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10606] = 6,
    ACTIONS(955), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(957), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(959), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(840), 1,
      sym_index_column_spec,
    STATE(838), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10627] = 6,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(456), 1,
      sym_function_call,
    STATE(761), 1,
      sym_column_not_null,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10647] = 7,
    ACTIONS(981), 1,
      aux_sym_truncate_token2,
    ACTIONS(983), 1,
      aux_sym_privilege_token1,
    ACTIONS(985), 1,
      aux_sym_resource_token2,
    ACTIONS(987), 1,
      aux_sym_resource_token5,
    ACTIONS(989), 1,
      aux_sym_resource_token6,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(217), 1,
      sym_resource,
  [10669] = 3,
    ACTIONS(997), 1,
      aux_sym_relation_element_token1,
    ACTIONS(993), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(995), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10683] = 3,
    ACTIONS(1003), 1,
      aux_sym_relation_element_token1,
    ACTIONS(999), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1001), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10697] = 7,
    ACTIONS(981), 1,
      aux_sym_truncate_token2,
    ACTIONS(983), 1,
      aux_sym_privilege_token1,
    ACTIONS(985), 1,
      aux_sym_resource_token2,
    ACTIONS(987), 1,
      aux_sym_resource_token5,
    ACTIONS(989), 1,
      aux_sym_resource_token6,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(984), 1,
      sym_resource,
  [10719] = 7,
    ACTIONS(981), 1,
      aux_sym_truncate_token2,
    ACTIONS(983), 1,
      aux_sym_privilege_token1,
    ACTIONS(985), 1,
      aux_sym_resource_token2,
    ACTIONS(987), 1,
      aux_sym_resource_token5,
    ACTIONS(989), 1,
      aux_sym_resource_token6,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(986), 1,
      sym_resource,
  [10741] = 5,
    ACTIONS(971), 1,
      aux_sym_privilege_token3,
    ACTIONS(973), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(975), 1,
      aux_sym_alter_table_rename_token1,
    STATE(250), 1,
      sym_alter_type_operation,
    STATE(280), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10759] = 6,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(75), 1,
      sym_relation_element,
    STATE(95), 1,
      sym_relation_elements,
    STATE(456), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10779] = 7,
    ACTIONS(1007), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1009), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1011), 1,
      anon_sym_STAR,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(689), 1,
      sym_select_elements,
  [10801] = 5,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(1015), 1,
      aux_sym__decimal_literal_token1,
    STATE(793), 1,
      sym__decimal_literal,
    STATE(794), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10819] = 5,
    ACTIONS(963), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(885), 1,
      sym_table_option_name,
    STATE(223), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10837] = 6,
    ACTIONS(1011), 1,
      anon_sym_STAR,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1017), 1,
      aux_sym_select_statement_token3,
    STATE(545), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [10856] = 6,
    ACTIONS(1019), 1,
      aux_sym_truncate_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token2,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1027), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1029), 1,
      aux_sym_drop_user_token1,
  [10875] = 2,
    ACTIONS(1031), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1033), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10886] = 5,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(456), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10903] = 1,
    ACTIONS(1035), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10911] = 5,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(234), 1,
      sym_table_option_item,
    STATE(359), 1,
      sym_clustering_order,
    STATE(885), 1,
      sym_table_option_name,
  [10927] = 1,
    ACTIONS(1037), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10935] = 5,
    ACTIONS(1039), 1,
      sym__string_literal,
    ACTIONS(1041), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1043), 1,
      aux_sym_create_index_token3,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(1252), 1,
      sym_index_name,
  [10951] = 1,
    ACTIONS(1047), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10959] = 1,
    ACTIONS(1049), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10967] = 5,
    ACTIONS(1051), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(502), 1,
      sym_from_spec,
    STATE(575), 1,
      sym_delete_column_item,
    STATE(691), 1,
      sym_delete_column_list,
  [10983] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(101), 1,
      sym_insert_values_spec,
    STATE(628), 1,
      sym_insert_column_spec,
  [10999] = 5,
    ACTIONS(1061), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1063), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1067), 1,
      aux_sym_role_with_option_token4,
    STATE(199), 1,
      sym_role_with_option,
  [11015] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(112), 1,
      sym_insert_values_spec,
    STATE(667), 1,
      sym_insert_column_spec,
  [11031] = 3,
    ACTIONS(1071), 1,
      anon_sym_LBRACE,
    ACTIONS(1069), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(242), 2,
      sym_option_hash,
      sym_table_option_value,
  [11043] = 5,
    ACTIONS(1011), 1,
      anon_sym_STAR,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [11059] = 5,
    ACTIONS(1061), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1063), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1067), 1,
      aux_sym_role_with_option_token4,
    STATE(119), 1,
      sym_role_with_option,
  [11075] = 5,
    ACTIONS(1011), 1,
      anon_sym_STAR,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(747), 1,
      sym_select_elements,
  [11091] = 5,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(234), 1,
      sym_table_option_item,
    STATE(314), 1,
      sym_clustering_order,
    STATE(885), 1,
      sym_table_option_name,
  [11107] = 1,
    ACTIONS(1075), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11115] = 3,
    ACTIONS(1079), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(601), 1,
      sym_using_timestamp_spec,
    ACTIONS(1077), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11127] = 1,
    ACTIONS(1081), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11135] = 3,
    ACTIONS(1079), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(635), 1,
      sym_using_timestamp_spec,
    ACTIONS(1083), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11147] = 4,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1087), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      aux_sym_select_element_token1,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11161] = 4,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(908), 1,
      sym_primary_key_definition,
    STATE(909), 2,
      sym_compound_key,
      sym_composite_key,
  [11175] = 5,
    ACTIONS(1051), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(499), 1,
      sym_from_spec,
    STATE(575), 1,
      sym_delete_column_item,
    STATE(744), 1,
      sym_delete_column_list,
  [11191] = 5,
    ACTIONS(965), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(967), 1,
      sym_object_name,
    STATE(127), 1,
      sym_table_option_item,
    STATE(249), 1,
      sym_clustering_order,
    STATE(885), 1,
      sym_table_option_name,
  [11207] = 3,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1098), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11219] = 1,
    ACTIONS(1100), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11227] = 4,
    ACTIONS(1102), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1104), 1,
      sym_object_name,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11240] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(496), 1,
      aux_sym_update_repeat1,
  [11253] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1108), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11266] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1110), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11279] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11292] = 3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1117), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11303] = 4,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_function_args_repeat1,
  [11316] = 1,
    ACTIONS(1123), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11323] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11336] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1125), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11349] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      sym_where_spec,
    STATE(491), 1,
      aux_sym_update_repeat1,
  [11362] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11375] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1129), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11386] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11399] = 4,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1131), 1,
      anon_sym_DOT,
    ACTIONS(1133), 1,
      aux_sym_update_token2,
    STATE(969), 1,
      sym_using_ttl_timestamp,
  [11412] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11425] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1079), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_where_spec,
    STATE(757), 1,
      sym_using_timestamp_spec,
  [11438] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(498), 1,
      aux_sym_update_repeat1,
  [11451] = 4,
    ACTIONS(1039), 1,
      sym__string_literal,
    ACTIONS(1045), 1,
      sym_object_name,
    ACTIONS(1135), 1,
      aux_sym_create_index_token3,
    STATE(852), 1,
      sym_index_name,
  [11464] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1079), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(124), 1,
      sym_where_spec,
    STATE(713), 1,
      sym_using_timestamp_spec,
  [11477] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1137), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11490] = 4,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_COLON,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
    STATE(615), 1,
      aux_sym_assignment_set_repeat1,
  [11503] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11516] = 1,
    ACTIONS(1098), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11523] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1145), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11536] = 4,
    ACTIONS(1147), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1149), 1,
      aux_sym_create_materialized_view_token1,
    STATE(630), 1,
      aux_sym_relation_elements_repeat1,
    STATE(633), 1,
      aux_sym_materialized_view_where_repeat1,
  [11549] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(494), 1,
      aux_sym_update_repeat1,
  [11562] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11575] = 4,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1151), 1,
      anon_sym_DOT,
    ACTIONS(1153), 1,
      aux_sym_update_token2,
    STATE(1176), 1,
      sym_using_ttl_timestamp,
  [11588] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1155), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11601] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1157), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11612] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1159), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11625] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      sym_where_spec,
    STATE(510), 1,
      aux_sym_update_repeat1,
  [11638] = 4,
    ACTIONS(1161), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1163), 1,
      sym_object_name,
    STATE(742), 1,
      sym_column_definition,
    STATE(1216), 1,
      sym_primary_key_element,
  [11651] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1165), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11664] = 3,
    ACTIONS(1169), 1,
      aux_sym_create_materialized_view_token1,
    STATE(748), 1,
      sym_primary_key_column,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11675] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11688] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1079), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(183), 1,
      sym_where_spec,
    STATE(688), 1,
      sym_using_timestamp_spec,
  [11701] = 4,
    ACTIONS(1147), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1171), 1,
      aux_sym_create_materialized_view_token1,
    STATE(508), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(581), 1,
      aux_sym_relation_elements_repeat1,
  [11714] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1173), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11727] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(519), 1,
      aux_sym_update_repeat1,
  [11740] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1175), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11753] = 4,
    ACTIONS(1161), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1163), 1,
      sym_object_name,
    STATE(742), 1,
      sym_column_definition,
    STATE(1218), 1,
      sym_primary_key_element,
  [11766] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1177), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11779] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11792] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      sym_where_spec,
    STATE(505), 1,
      aux_sym_update_repeat1,
  [11805] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1179), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11818] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1181), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11831] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(527), 1,
      aux_sym_update_repeat1,
  [11844] = 4,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      aux_sym_delete_statement_token3,
    STATE(184), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [11857] = 2,
    ACTIONS(1185), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1187), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11866] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [11876] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      aux_sym_column_definition_list_repeat1,
  [11886] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1033), 1,
      sym_return_mode,
  [11896] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_create_type_repeat1,
  [11906] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      aux_sym_from_spec_token1,
    STATE(656), 1,
      aux_sym_select_elements_repeat1,
  [11916] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [11926] = 3,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      aux_sym_where_spec_token1,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [11936] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(509), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [11946] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_clustering_key_list_repeat1,
  [11956] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(875), 1,
      sym_return_mode,
  [11966] = 3,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    ACTIONS(1225), 1,
      sym_object_name,
    STATE(668), 1,
      sym_param,
  [11976] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_from_spec_token1,
    STATE(538), 1,
      aux_sym_select_elements_repeat1,
  [11986] = 3,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RBRACE,
    STATE(546), 1,
      aux_sym_assignment_map_repeat1,
  [11996] = 2,
    ACTIONS(1234), 1,
      aux_sym_resource_token1,
    ACTIONS(1236), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12004] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(531), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [12014] = 3,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_create_type_repeat1,
  [12024] = 3,
    ACTIONS(1243), 1,
      anon_sym_DOT,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    STATE(1051), 1,
      sym_materialized_view_where,
  [12034] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_relation_element_repeat2,
  [12044] = 3,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(555), 1,
      sym_function_call,
    STATE(752), 1,
      sym_select_element,
  [12054] = 3,
    ACTIONS(1249), 1,
      sym_object_name,
    STATE(161), 1,
      sym_alter_type_rename_item,
    STATE(355), 1,
      sym_alter_type_rename_list,
  [12064] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [12074] = 2,
    ACTIONS(1255), 1,
      aux_sym_select_element_token1,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12082] = 3,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1257), 1,
      aux_sym_update_token2,
    STATE(894), 1,
      sym_using_ttl_timestamp,
  [12092] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      sym_param,
  [12102] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(500), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [12112] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_create_type_repeat1,
  [12122] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(528), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [12132] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1063), 1,
      sym_return_mode,
  [12142] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12152] = 3,
    ACTIONS(1015), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1265), 1,
      sym__string_literal,
    STATE(1121), 1,
      sym__decimal_literal,
  [12162] = 3,
    ACTIONS(1267), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1269), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1271), 1,
      aux_sym_update_token1,
  [12172] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1067), 1,
      sym_return_mode,
  [12182] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_function_args_repeat1,
  [12192] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_GT,
    STATE(620), 1,
      aux_sym_data_type_definition_repeat1,
  [12202] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      aux_sym_relation_element_repeat1,
  [12212] = 2,
    ACTIONS(1283), 1,
      anon_sym_LBRACK,
    ACTIONS(1281), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12220] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_clustering_key_list_repeat1,
  [12230] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_clustering_key_list_repeat1,
  [12240] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(515), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [12250] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      aux_sym_relation_element_repeat2,
  [12260] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1081), 1,
      sym_return_mode,
  [12270] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      aux_sym_from_spec_token1,
    STATE(577), 1,
      aux_sym_delete_column_list_repeat1,
  [12280] = 3,
    ACTIONS(1295), 1,
      sym_object_name,
    STATE(234), 1,
      sym_table_option_item,
    STATE(885), 1,
      sym_table_option_name,
  [12290] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      aux_sym_from_spec_token1,
    STATE(636), 1,
      aux_sym_delete_column_list_repeat1,
  [12300] = 3,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1299), 1,
      anon_sym_DOT,
    STATE(1096), 1,
      sym_materialized_view_where,
  [12310] = 3,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    STATE(671), 1,
      aux_sym_assignment_map_repeat1,
  [12320] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12330] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1149), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [12340] = 1,
    ACTIONS(1307), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12346] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RBRACE,
    STATE(609), 1,
      aux_sym_option_hash_repeat1,
  [12356] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1267), 1,
      sym_return_mode,
  [12366] = 3,
    ACTIONS(1313), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1315), 1,
      sym_object_name,
    STATE(735), 1,
      sym_user_name,
  [12376] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      sym_param,
  [12386] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12396] = 3,
    ACTIONS(1015), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1321), 1,
      sym__string_literal,
    STATE(804), 1,
      sym__decimal_literal,
  [12406] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
    STATE(670), 1,
      aux_sym_replication_list_repeat1,
  [12416] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_create_type_repeat1,
  [12426] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      sym_param,
  [12436] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1107), 1,
      sym_return_mode,
  [12446] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(843), 1,
      sym_return_mode,
  [12456] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RBRACK,
    STATE(619), 1,
      aux_sym_assignment_set_repeat1,
  [12466] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(921), 1,
      sym_return_mode,
  [12476] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12486] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_function_repeat1,
  [12496] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(925), 1,
      sym_return_mode,
  [12506] = 3,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      aux_sym_expression_list_repeat1,
  [12516] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_function_repeat1,
  [12526] = 1,
    ACTIONS(1083), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12532] = 3,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(613), 1,
      sym_column_definition,
    STATE(1225), 1,
      sym_column_definition_list,
  [12542] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(839), 1,
      sym_return_mode,
  [12552] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1345), 1,
      anon_sym_RBRACE,
    STATE(589), 1,
      aux_sym_replication_list_repeat1,
  [12562] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      aux_sym_column_definition_list_repeat1,
  [12572] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      sym_param,
  [12582] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1112), 1,
      sym_return_mode,
  [12592] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12602] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
    STATE(643), 1,
      aux_sym_option_hash_repeat1,
  [12612] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1012), 1,
      sym_return_mode,
  [12622] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12632] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_clustering_key_list_repeat1,
  [12642] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_column_definition_list_repeat1,
  [12652] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      aux_sym_expression_list_repeat1,
  [12662] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RBRACE,
    STATE(481), 1,
      aux_sym_assignment_set_repeat1,
  [12672] = 3,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_expression_list_repeat1,
  [12682] = 3,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(613), 1,
      sym_column_definition,
    STATE(953), 1,
      sym_column_definition_list,
  [12692] = 3,
    ACTIONS(1374), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1376), 1,
      sym_object_name,
    STATE(1258), 1,
      sym_table_name,
  [12702] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RBRACK,
    STATE(481), 1,
      aux_sym_assignment_set_repeat1,
  [12712] = 3,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_GT,
    STATE(620), 1,
      aux_sym_data_type_definition_repeat1,
  [12722] = 3,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1385), 1,
      anon_sym_DOT,
    STATE(943), 1,
      sym_materialized_view_where,
  [12732] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      aux_sym_create_function_repeat1,
  [12742] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_param,
  [12752] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1147), 1,
      sym_return_mode,
  [12762] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_function_repeat1,
  [12772] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_type_repeat1,
  [12782] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_init_cond_hash_repeat1,
  [12792] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(112), 1,
      sym_insert_values_spec,
  [12802] = 3,
    ACTIONS(1400), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1402), 1,
      sym_object_name,
    STATE(1245), 1,
      sym_keyspace_name,
  [12812] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1404), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [12822] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1126), 1,
      sym_return_mode,
  [12832] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12842] = 3,
    ACTIONS(1411), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1414), 1,
      aux_sym_create_materialized_view_token1,
    STATE(633), 1,
      aux_sym_materialized_view_where_repeat1,
  [12852] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1008), 1,
      sym_return_mode,
  [12862] = 1,
    ACTIONS(1416), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12868] = 3,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      aux_sym_from_spec_token1,
    STATE(636), 1,
      aux_sym_delete_column_list_repeat1,
  [12878] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1150), 1,
      sym_return_mode,
  [12888] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_create_type_repeat1,
  [12898] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [12908] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12918] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(872), 1,
      sym_return_mode,
  [12928] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      aux_sym_create_function_repeat1,
  [12938] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RBRACE,
    STATE(643), 1,
      aux_sym_option_hash_repeat1,
  [12948] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_relation_element_repeat1,
  [12958] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1441), 1,
      anon_sym_GT,
    STATE(567), 1,
      aux_sym_data_type_definition_repeat1,
  [12968] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_create_type_repeat1,
  [12978] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(484), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [12988] = 3,
    ACTIONS(1445), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1447), 1,
      sym_object_name,
    STATE(1221), 1,
      sym_trigger_name,
  [12998] = 3,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_function_args_repeat1,
  [13008] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      sym_param,
  [13018] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_function_args_repeat1,
  [13028] = 3,
    ACTIONS(1376), 1,
      sym_object_name,
    ACTIONS(1456), 1,
      aux_sym_truncate_token2,
    STATE(326), 1,
      sym_table_name,
  [13038] = 2,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13046] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(987), 1,
      sym_return_mode,
  [13056] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_create_type_repeat1,
  [13066] = 3,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    ACTIONS(1463), 1,
      aux_sym_from_spec_token1,
    STATE(656), 1,
      aux_sym_select_elements_repeat1,
  [13076] = 3,
    ACTIONS(1225), 1,
      sym_object_name,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_param,
  [13086] = 3,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1467), 1,
      anon_sym_DOT,
    STATE(1182), 1,
      sym_materialized_view_where,
  [13096] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1016), 1,
      sym_return_mode,
  [13106] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      aux_sym_create_function_repeat1,
  [13116] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(951), 1,
      sym_return_mode,
  [13126] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(493), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [13136] = 3,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_init_cond_hash_repeat1,
  [13146] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(1191), 1,
      sym_return_mode,
  [13156] = 2,
    ACTIONS(1475), 1,
      anon_sym_DOT,
    ACTIONS(1477), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [13164] = 3,
    ACTIONS(199), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1479), 1,
      aux_sym_update_token2,
    STATE(1077), 1,
      sym_using_ttl_timestamp,
  [13174] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [13184] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_create_function_repeat1,
  [13194] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(982), 1,
      sym_return_mode,
  [13204] = 3,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    STATE(670), 1,
      aux_sym_replication_list_repeat1,
  [13214] = 3,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RBRACE,
    STATE(546), 1,
      aux_sym_assignment_map_repeat1,
  [13224] = 3,
    ACTIONS(1198), 1,
      aux_sym_create_function_token1,
    ACTIONS(1200), 1,
      aux_sym_return_mode_token1,
    STATE(956), 1,
      sym_return_mode,
  [13234] = 3,
    ACTIONS(1490), 1,
      sym__string_literal,
    ACTIONS(1492), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1494), 1,
      sym_object_name,
  [13244] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(523), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [13254] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      aux_sym_relation_element_repeat2,
  [13264] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_relation_element_repeat2,
  [13274] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      aux_sym_assignment_set_repeat1,
  [13284] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13294] = 3,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_init_cond_hash_repeat1,
  [13304] = 3,
    ACTIONS(1315), 1,
      sym_object_name,
    ACTIONS(1504), 1,
      aux_sym_delete_statement_token2,
    STATE(379), 1,
      sym_user_name,
  [13314] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_function_repeat1,
  [13324] = 2,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    ACTIONS(1510), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [13332] = 3,
    ACTIONS(1219), 1,
      sym_object_name,
    STATE(786), 1,
      sym_assignment_element,
    STATE(1003), 1,
      sym_indexed_column,
  [13342] = 2,
    ACTIONS(1514), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1512), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13350] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_assignment_set_repeat1,
  [13360] = 3,
    ACTIONS(1447), 1,
      sym_object_name,
    ACTIONS(1518), 1,
      aux_sym_delete_statement_token2,
    STATE(1190), 1,
      sym_trigger_name,
  [13370] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1048), 1,
      sym_column_list,
  [13377] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(133), 1,
      sym_where_spec,
  [13384] = 2,
    ACTIONS(1522), 1,
      aux_sym_from_spec_token1,
    STATE(69), 1,
      sym_from_spec,
  [13391] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(93), 1,
      sym_table_name,
  [13398] = 2,
    ACTIONS(1522), 1,
      aux_sym_from_spec_token1,
    STATE(499), 1,
      sym_from_spec,
  [13405] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(465), 1,
      sym_table_name,
  [13412] = 2,
    ACTIONS(1526), 1,
      anon_sym_DOT,
    ACTIONS(1528), 1,
      aux_sym_select_element_token1,
  [13419] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(295), 1,
      sym_table_name,
  [13426] = 2,
    ACTIONS(1530), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1532), 1,
      sym_object_name,
  [13433] = 2,
    ACTIONS(1534), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1536), 1,
      sym_object_name,
  [13440] = 2,
    ACTIONS(1538), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1540), 1,
      sym_object_name,
  [13447] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1326), 1,
      sym_column_list,
  [13454] = 2,
    ACTIONS(1542), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1544), 1,
      sym_object_name,
  [13461] = 2,
    ACTIONS(1546), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1548), 1,
      sym_object_name,
  [13468] = 2,
    ACTIONS(1550), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1552), 1,
      sym_object_name,
  [13475] = 2,
    ACTIONS(1554), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1556), 1,
      sym_object_name,
  [13482] = 2,
    ACTIONS(1558), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1560), 1,
      sym_object_name,
  [13489] = 2,
    ACTIONS(1562), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1564), 1,
      sym_object_name,
  [13496] = 2,
    ACTIONS(1566), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1568), 1,
      sym_object_name,
  [13503] = 2,
    ACTIONS(1570), 1,
      sym__string_literal,
    STATE(246), 1,
      sym_trigger_class,
  [13510] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(424), 1,
      sym_table_name,
  [13517] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(1175), 1,
      sym_keyspace_name,
  [13524] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(743), 1,
      sym_user_name,
  [13531] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1304), 1,
      sym_column_list,
  [13538] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1303), 1,
      sym_column_list,
  [13545] = 2,
    ACTIONS(1522), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [13552] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(192), 1,
      sym_where_spec,
  [13559] = 2,
    ACTIONS(1576), 1,
      sym__string_literal,
    STATE(583), 1,
      sym_option_hash_item,
  [13566] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(758), 1,
      sym_delete_column_item,
  [13573] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(573), 1,
      sym_assignment_tuple,
  [13580] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_assignment_tuple,
  [13587] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1286), 1,
      sym_column_list,
  [13594] = 1,
    ACTIONS(1409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13599] = 1,
    ACTIONS(1398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13604] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(1093), 1,
      sym_table_name,
  [13611] = 1,
    ACTIONS(1430), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13616] = 2,
    ACTIONS(1580), 1,
      sym__string_literal,
    STATE(604), 1,
      sym_replication_list_item,
  [13623] = 1,
    ACTIONS(1582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13628] = 2,
    ACTIONS(1584), 1,
      anon_sym_DOT,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
  [13635] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [13642] = 1,
    ACTIONS(1368), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13647] = 2,
    ACTIONS(1592), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1594), 1,
      sym_object_name,
  [13654] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1262), 1,
      sym_column_list,
  [13661] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(1215), 1,
      sym_table_name,
  [13668] = 2,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    STATE(1259), 1,
      sym_materialized_view_where,
  [13675] = 1,
    ACTIONS(1596), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13680] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(720), 1,
      sym_init_cond_hash_item,
  [13687] = 2,
    ACTIONS(1600), 1,
      anon_sym_DOT,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [13694] = 2,
    ACTIONS(1604), 1,
      aux_sym_materialized_view_options_token1,
    STATE(265), 1,
      sym_user_with,
  [13701] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(742), 1,
      sym_column_definition,
  [13708] = 2,
    ACTIONS(1606), 1,
      aux_sym_resource_token5,
    ACTIONS(1608), 1,
      aux_sym_drop_aggregate_token1,
  [13715] = 2,
    ACTIONS(1610), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1612), 1,
      sym_object_name,
  [13722] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1228), 1,
      sym_column_list,
  [13729] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1227), 1,
      sym_column_list,
  [13736] = 2,
    ACTIONS(1614), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1616), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13743] = 1,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13748] = 2,
    ACTIONS(1604), 1,
      aux_sym_materialized_view_options_token1,
    STATE(281), 1,
      sym_user_with,
  [13755] = 2,
    ACTIONS(1522), 1,
      aux_sym_from_spec_token1,
    STATE(520), 1,
      sym_from_spec,
  [13762] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(467), 1,
      sym_table_name,
  [13769] = 2,
    ACTIONS(1618), 1,
      aux_sym_durable_writes_token1,
    STATE(311), 1,
      sym_durable_writes,
  [13776] = 2,
    ACTIONS(1522), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [13783] = 1,
    ACTIONS(1620), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13788] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(761), 1,
      sym_column_not_null,
  [13795] = 1,
    ACTIONS(1624), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13800] = 2,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    STATE(1183), 1,
      sym_materialized_view_where,
  [13807] = 1,
    ACTIONS(1463), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13812] = 1,
    ACTIONS(1626), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13817] = 1,
    ACTIONS(1628), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13822] = 2,
    ACTIONS(1015), 1,
      aux_sym__decimal_literal_token1,
    STATE(205), 1,
      sym__decimal_literal,
  [13829] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13834] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(183), 1,
      sym_where_spec,
  [13841] = 1,
    ACTIONS(1421), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13846] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(962), 1,
      sym_column_list,
  [13853] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1148), 1,
      sym_column_list,
  [13860] = 1,
    ACTIONS(1414), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13865] = 2,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    STATE(1143), 1,
      sym_materialized_view_where,
  [13872] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(952), 1,
      sym_table_name,
  [13879] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [13886] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1123), 1,
      sym_clustering_key_list,
  [13893] = 1,
    ACTIONS(1634), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13898] = 2,
    ACTIONS(1636), 1,
      anon_sym_DOT,
    ACTIONS(1638), 1,
      aux_sym_select_element_token1,
  [13905] = 2,
    ACTIONS(1570), 1,
      sym__string_literal,
    STATE(354), 1,
      sym_trigger_class,
  [13912] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(863), 1,
      sym_column_list,
  [13919] = 2,
    ACTIONS(1640), 1,
      aux_sym_role_with_option_token1,
    STATE(103), 1,
      sym_user_password,
  [13926] = 2,
    ACTIONS(1249), 1,
      sym_object_name,
    STATE(206), 1,
      sym_alter_type_rename_item,
  [13933] = 2,
    ACTIONS(1642), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1644), 1,
      sym_object_name,
  [13940] = 2,
    ACTIONS(1646), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1648), 1,
      sym_object_name,
  [13947] = 2,
    ACTIONS(1650), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_replication_list,
  [13954] = 2,
    ACTIONS(1652), 1,
      sym__string_literal,
    ACTIONS(1654), 1,
      sym_object_name,
  [13961] = 2,
    ACTIONS(1656), 1,
      sym_object_name,
    STATE(209), 1,
      sym_alter_table_column_definition,
  [13968] = 2,
    ACTIONS(1658), 1,
      sym__string_literal,
    ACTIONS(1660), 1,
      sym_object_name,
  [13975] = 2,
    ACTIONS(1662), 1,
      anon_sym_DOT,
    ACTIONS(1664), 1,
      anon_sym_LPAREN,
  [13982] = 2,
    ACTIONS(1666), 1,
      sym_object_name,
    STATE(895), 1,
      sym_trigger_name,
  [13989] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(378), 1,
      sym_table_name,
  [13996] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(381), 1,
      sym_user_name,
  [14003] = 2,
    ACTIONS(1668), 1,
      anon_sym_EQ,
    ACTIONS(1670), 1,
      anon_sym_LBRACK,
  [14010] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [14017] = 2,
    ACTIONS(1245), 1,
      aux_sym_where_spec_token1,
    STATE(1052), 1,
      sym_materialized_view_where,
  [14024] = 2,
    ACTIONS(1676), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1678), 1,
      sym_object_name,
  [14031] = 1,
    ACTIONS(1217), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14036] = 2,
    ACTIONS(1656), 1,
      sym_object_name,
    STATE(156), 1,
      sym_alter_table_column_definition,
  [14043] = 1,
    ACTIONS(1185), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14048] = 1,
    ACTIONS(1680), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14053] = 2,
    ACTIONS(1618), 1,
      aux_sym_durable_writes_token1,
    STATE(255), 1,
      sym_durable_writes,
  [14060] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1030), 1,
      sym_clustering_key_list,
  [14067] = 1,
    ACTIONS(1682), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14072] = 1,
    ACTIONS(1684), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14077] = 1,
    ACTIONS(1686), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14082] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(371), 1,
      sym_table_name,
  [14089] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(854), 1,
      sym_table_name,
  [14096] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(1085), 1,
      sym_keyspace_name,
  [14103] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(521), 1,
      sym_column_not_null,
  [14110] = 2,
    ACTIONS(1618), 1,
      aux_sym_durable_writes_token1,
    STATE(258), 1,
      sym_durable_writes,
  [14117] = 2,
    ACTIONS(1688), 1,
      sym__string_literal,
    ACTIONS(1690), 1,
      sym_object_name,
  [14124] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14129] = 1,
    ACTIONS(1692), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14134] = 1,
    ACTIONS(1486), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14139] = 1,
    ACTIONS(1694), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14144] = 2,
    ACTIONS(1666), 1,
      sym_object_name,
    STATE(907), 1,
      sym_trigger_name,
  [14151] = 1,
    ACTIONS(1696), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [14156] = 2,
    ACTIONS(1604), 1,
      aux_sym_materialized_view_options_token1,
    STATE(343), 1,
      sym_user_with,
  [14163] = 2,
    ACTIONS(1698), 1,
      anon_sym_COMMA,
    ACTIONS(1700), 1,
      anon_sym_RPAREN,
  [14170] = 2,
    ACTIONS(1702), 1,
      anon_sym_DOT,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
  [14177] = 2,
    ACTIONS(1706), 1,
      sym_object_name,
    STATE(976), 1,
      sym_partition_key_list,
  [14184] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(1301), 1,
      sym_column_list,
  [14191] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(807), 1,
      sym_user_name,
  [14198] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14205] = 2,
    ACTIONS(1708), 1,
      anon_sym_DOT,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
  [14212] = 2,
    ACTIONS(1712), 1,
      anon_sym_DOT,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
  [14219] = 2,
    ACTIONS(1015), 1,
      aux_sym__decimal_literal_token1,
    STATE(983), 1,
      sym__decimal_literal,
  [14226] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(675), 1,
      sym_assignment_tuple,
  [14233] = 2,
    ACTIONS(1716), 1,
      anon_sym_DOT,
    ACTIONS(1718), 1,
      anon_sym_LPAREN,
  [14240] = 2,
    ACTIONS(1071), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_option_hash,
  [14247] = 2,
    ACTIONS(1225), 1,
      sym_object_name,
    STATE(719), 1,
      sym_param,
  [14254] = 1,
    ACTIONS(1720), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14259] = 2,
    ACTIONS(1650), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_replication_list,
  [14266] = 2,
    ACTIONS(1580), 1,
      sym__string_literal,
    STATE(803), 1,
      sym_replication_list_item,
  [14273] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14280] = 2,
    ACTIONS(1650), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_replication_list,
  [14287] = 1,
    ACTIONS(1726), 2,
      sym__string_literal,
      sym__float_literal,
  [14292] = 2,
    ACTIONS(1576), 1,
      sym__string_literal,
    STATE(801), 1,
      sym_option_hash_item,
  [14299] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(1222), 1,
      sym_table_name,
  [14306] = 1,
    ACTIONS(1383), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14311] = 2,
    ACTIONS(1520), 1,
      sym_object_name,
    STATE(939), 1,
      sym_column_list,
  [14318] = 1,
    ACTIONS(1728), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14323] = 1,
    ACTIONS(1730), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14328] = 2,
    ACTIONS(1732), 1,
      sym_object_name,
    STATE(220), 1,
      sym_if_condition,
  [14335] = 1,
    ACTIONS(1734), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14340] = 1,
    ACTIONS(1452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14345] = 1,
    ACTIONS(1736), 1,
      sym_object_name,
  [14349] = 1,
    ACTIONS(1738), 1,
      sym__code_block,
  [14353] = 1,
    ACTIONS(1740), 1,
      anon_sym_RPAREN,
  [14357] = 1,
    ACTIONS(1742), 1,
      aux_sym_create_function_token1,
  [14361] = 1,
    ACTIONS(1744), 1,
      anon_sym_RPAREN,
  [14365] = 1,
    ACTIONS(1746), 1,
      anon_sym_RPAREN,
  [14369] = 1,
    ACTIONS(1748), 1,
      anon_sym_LPAREN,
  [14373] = 1,
    ACTIONS(1750), 1,
      aux_sym_create_function_token1,
  [14377] = 1,
    ACTIONS(1752), 1,
      anon_sym_LPAREN,
  [14381] = 1,
    ACTIONS(1754), 1,
      aux_sym_return_mode_token2,
  [14385] = 1,
    ACTIONS(1756), 1,
      aux_sym_create_function_token1,
  [14389] = 1,
    ACTIONS(1758), 1,
      sym_object_name,
  [14393] = 1,
    ACTIONS(1760), 1,
      aux_sym_create_function_token2,
  [14397] = 1,
    ACTIONS(1762), 1,
      anon_sym_LPAREN,
  [14401] = 1,
    ACTIONS(1764), 1,
      anon_sym_RPAREN,
  [14405] = 1,
    ACTIONS(1766), 1,
      aux_sym_create_index_token3,
  [14409] = 1,
    ACTIONS(1768), 1,
      aux_sym_create_index_token3,
  [14413] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [14417] = 1,
    ACTIONS(1772), 1,
      anon_sym_LPAREN,
  [14421] = 1,
    ACTIONS(1774), 1,
      aux_sym_create_aggregate_token3,
  [14425] = 1,
    ACTIONS(1776), 1,
      sym_object_name,
  [14429] = 1,
    ACTIONS(1778), 1,
      aux_sym_delete_statement_token3,
  [14433] = 1,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
  [14437] = 1,
    ACTIONS(1782), 1,
      aux_sym_insert_statement_token3,
  [14441] = 1,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [14445] = 1,
    ACTIONS(1786), 1,
      aux_sym_select_element_token1,
  [14449] = 1,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
  [14453] = 1,
    ACTIONS(1790), 1,
      aux_sym_from_spec_token1,
  [14457] = 1,
    ACTIONS(1792), 1,
      sym__string_literal,
  [14461] = 1,
    ACTIONS(1794), 1,
      sym_object_name,
  [14465] = 1,
    ACTIONS(1796), 1,
      aux_sym_constant_token2,
  [14469] = 1,
    ACTIONS(1798), 1,
      sym__boolean_literal,
  [14473] = 1,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
  [14477] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [14481] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [14485] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [14489] = 1,
    ACTIONS(1806), 1,
      aux_sym_create_function_token1,
  [14493] = 1,
    ACTIONS(1808), 1,
      aux_sym_select_statement_token5,
  [14497] = 1,
    ACTIONS(1810), 1,
      anon_sym_EQ,
  [14501] = 1,
    ACTIONS(1812), 1,
      aux_sym_create_function_token1,
  [14505] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14509] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14513] = 1,
    ACTIONS(1818), 1,
      aux_sym_grant_token2,
  [14517] = 1,
    ACTIONS(1820), 1,
      anon_sym_RPAREN,
  [14521] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [14525] = 1,
    ACTIONS(1824), 1,
      aux_sym_drop_type_token1,
  [14529] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [14533] = 1,
    ACTIONS(1828), 1,
      anon_sym_EQ,
  [14537] = 1,
    ACTIONS(1830), 1,
      aux_sym_grant_token2,
  [14541] = 1,
    ACTIONS(1832), 1,
      anon_sym_EQ,
  [14545] = 1,
    ACTIONS(1834), 1,
      anon_sym_EQ,
  [14549] = 1,
    ACTIONS(1836), 1,
      aux_sym_order_spec_token1,
  [14553] = 1,
    ACTIONS(1838), 1,
      aux_sym_compact_storage_token2,
  [14557] = 1,
    ACTIONS(1840), 1,
      aux_sym_compact_storage_token2,
  [14561] = 1,
    ACTIONS(1842), 1,
      sym_object_name,
  [14565] = 1,
    ACTIONS(1844), 1,
      sym_object_name,
  [14569] = 1,
    ACTIONS(1846), 1,
      anon_sym_EQ,
  [14573] = 1,
    ACTIONS(1848), 1,
      sym_object_name,
  [14577] = 1,
    ACTIONS(1850), 1,
      aux_sym_update_token2,
  [14581] = 1,
    ACTIONS(1852), 1,
      aux_sym_create_index_token3,
  [14585] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [14589] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [14593] = 1,
    ACTIONS(1858), 1,
      aux_sym_create_aggregate_token3,
  [14597] = 1,
    ACTIONS(1860), 1,
      aux_sym_insert_statement_token3,
  [14601] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14605] = 1,
    ACTIONS(1864), 1,
      aux_sym_insert_statement_token3,
  [14609] = 1,
    ACTIONS(1866), 1,
      sym__string_literal,
  [14613] = 1,
    ACTIONS(1868), 1,
      aux_sym_select_element_token1,
  [14617] = 1,
    ACTIONS(1870), 1,
      anon_sym_LPAREN,
  [14621] = 1,
    ACTIONS(1872), 1,
      sym_object_name,
  [14625] = 1,
    ACTIONS(1874), 1,
      aux_sym_select_statement_token5,
  [14629] = 1,
    ACTIONS(1876), 1,
      aux_sym_using_timestamp_spec_token1,
  [14633] = 1,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
  [14637] = 1,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
  [14641] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [14645] = 1,
    ACTIONS(1884), 1,
      anon_sym_RPAREN,
  [14649] = 1,
    ACTIONS(1886), 1,
      aux_sym_delete_statement_token3,
  [14653] = 1,
    ACTIONS(1888), 1,
      sym_object_name,
  [14657] = 1,
    ACTIONS(1890), 1,
      aux_sym_delete_statement_token3,
  [14661] = 1,
    ACTIONS(1892), 1,
      aux_sym_select_statement_token1,
  [14665] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [14669] = 1,
    ACTIONS(1896), 1,
      sym__boolean_literal,
  [14673] = 1,
    ACTIONS(1898), 1,
      aux_sym_delete_statement_token3,
  [14677] = 1,
    ACTIONS(1900), 1,
      anon_sym_RPAREN,
  [14681] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [14685] = 1,
    ACTIONS(1904), 1,
      aux_sym_create_function_token1,
  [14689] = 1,
    ACTIONS(1906), 1,
      sym_object_name,
  [14693] = 1,
    ACTIONS(1908), 1,
      aux_sym_create_function_token2,
  [14697] = 1,
    ACTIONS(1910), 1,
      anon_sym_EQ,
  [14701] = 1,
    ACTIONS(1912), 1,
      aux_sym_create_function_token1,
  [14705] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [14709] = 1,
    ACTIONS(1916), 1,
      aux_sym_select_element_token1,
  [14713] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [14717] = 1,
    ACTIONS(1920), 1,
      aux_sym_create_function_token2,
  [14721] = 1,
    ACTIONS(1922), 1,
      sym__boolean_literal,
  [14725] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [14729] = 1,
    ACTIONS(1926), 1,
      anon_sym_EQ,
  [14733] = 1,
    ACTIONS(1928), 1,
      anon_sym_EQ,
  [14737] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [14741] = 1,
    ACTIONS(1932), 1,
      sym_object_name,
  [14745] = 1,
    ACTIONS(1934), 1,
      aux_sym_create_aggregate_token4,
  [14749] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_aggregate_token5,
  [14753] = 1,
    ACTIONS(1938), 1,
      aux_sym_select_statement_token1,
  [14757] = 1,
    ACTIONS(1940), 1,
      aux_sym_from_spec_token1,
  [14761] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [14765] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [14769] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [14773] = 1,
    ACTIONS(1948), 1,
      aux_sym_create_materialized_view_token1,
  [14777] = 1,
    ACTIONS(1950), 1,
      anon_sym_EQ,
  [14781] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [14785] = 1,
    ACTIONS(1954), 1,
      anon_sym_LPAREN,
  [14789] = 1,
    ACTIONS(1956), 1,
      sym_object_name,
  [14793] = 1,
    ACTIONS(1958), 1,
      anon_sym_LPAREN,
  [14797] = 1,
    ACTIONS(1960), 1,
      sym_object_name,
  [14801] = 1,
    ACTIONS(1962), 1,
      sym_object_name,
  [14805] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [14809] = 1,
    ACTIONS(1966), 1,
      anon_sym_LPAREN,
  [14813] = 1,
    ACTIONS(1968), 1,
      anon_sym_RPAREN,
  [14817] = 1,
    ACTIONS(1970), 1,
      aux_sym_create_function_token2,
  [14821] = 1,
    ACTIONS(1972), 1,
      sym_object_name,
  [14825] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_function_token1,
  [14829] = 1,
    ACTIONS(1976), 1,
      anon_sym_LPAREN,
  [14833] = 1,
    ACTIONS(1978), 1,
      anon_sym_RPAREN,
  [14837] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_aggregate_token3,
  [14841] = 1,
    ACTIONS(1982), 1,
      aux_sym_create_aggregate_token4,
  [14845] = 1,
    ACTIONS(1984), 1,
      aux_sym_insert_statement_token3,
  [14849] = 1,
    ACTIONS(1986), 1,
      anon_sym_RPAREN,
  [14853] = 1,
    ACTIONS(1988), 1,
      anon_sym_EQ,
  [14857] = 1,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
  [14861] = 1,
    ACTIONS(1992), 1,
      anon_sym_LPAREN,
  [14865] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14869] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14873] = 1,
    ACTIONS(1998), 1,
      aux_sym_select_statement_token5,
  [14877] = 1,
    ACTIONS(2000), 1,
      aux_sym_update_token2,
  [14881] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [14885] = 1,
    ACTIONS(2004), 1,
      sym_object_name,
  [14889] = 1,
    ACTIONS(2006), 1,
      anon_sym_COLON,
  [14893] = 1,
    ACTIONS(2008), 1,
      sym_object_name,
  [14897] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [14901] = 1,
    ACTIONS(2012), 1,
      aux_sym_create_keyspace_token1,
  [14905] = 1,
    ACTIONS(2014), 1,
      anon_sym_RPAREN,
  [14909] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [14913] = 1,
    ACTIONS(2018), 1,
      anon_sym_RPAREN,
  [14917] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [14921] = 1,
    ACTIONS(2022), 1,
      aux_sym_using_ttl_timestamp_token1,
  [14925] = 1,
    ACTIONS(2024), 1,
      aux_sym_using_timestamp_spec_token2,
  [14929] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token1,
  [14933] = 1,
    ACTIONS(2028), 1,
      anon_sym_RBRACK,
  [14937] = 1,
    ACTIONS(2030), 1,
      aux_sym_from_spec_token1,
  [14941] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_function_token2,
  [14945] = 1,
    ACTIONS(2034), 1,
      aux_sym_grant_token2,
  [14949] = 1,
    ACTIONS(2036), 1,
      aux_sym_create_function_token1,
  [14953] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [14957] = 1,
    ACTIONS(2040), 1,
      aux_sym_create_function_token2,
  [14961] = 1,
    ACTIONS(2042), 1,
      sym_object_name,
  [14965] = 1,
    ACTIONS(2044), 1,
      sym__code_block,
  [14969] = 1,
    ACTIONS(2046), 1,
      aux_sym_select_element_token1,
  [14973] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [14977] = 1,
    ACTIONS(2050), 1,
      aux_sym_create_aggregate_token3,
  [14981] = 1,
    ACTIONS(2052), 1,
      aux_sym_create_aggregate_token4,
  [14985] = 1,
    ACTIONS(2054), 1,
      aux_sym_create_keyspace_token1,
  [14989] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [14993] = 1,
    ACTIONS(2058), 1,
      sym_object_name,
  [14997] = 1,
    ACTIONS(2060), 1,
      sym_object_name,
  [15001] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15005] = 1,
    ACTIONS(2064), 1,
      aux_sym_create_aggregate_token3,
  [15009] = 1,
    ACTIONS(945), 1,
      aux_sym_column_not_null_token1,
  [15013] = 1,
    ACTIONS(2066), 1,
      anon_sym_EQ,
  [15017] = 1,
    ACTIONS(2068), 1,
      aux_sym_relation_contains_key_token2,
  [15021] = 1,
    ACTIONS(2070), 1,
      sym_object_name,
  [15025] = 1,
    ACTIONS(2072), 1,
      aux_sym__decimal_literal_token1,
  [15029] = 1,
    ACTIONS(2074), 1,
      aux_sym__decimal_literal_token1,
  [15033] = 1,
    ACTIONS(2076), 1,
      aux_sym_create_function_token1,
  [15037] = 1,
    ACTIONS(2078), 1,
      aux_sym_resource_token2,
  [15041] = 1,
    ACTIONS(2080), 1,
      aux_sym__decimal_literal_token1,
  [15045] = 1,
    ACTIONS(2082), 1,
      sym_object_name,
  [15049] = 1,
    ACTIONS(2084), 1,
      aux_sym_create_function_token1,
  [15053] = 1,
    ACTIONS(2086), 1,
      sym_object_name,
  [15057] = 1,
    ACTIONS(2088), 1,
      sym_object_name,
  [15061] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_function_token2,
  [15065] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_function_token1,
  [15069] = 1,
    ACTIONS(2094), 1,
      aux_sym_delete_statement_token3,
  [15073] = 1,
    ACTIONS(2096), 1,
      aux_sym_create_aggregate_token3,
  [15077] = 1,
    ACTIONS(2098), 1,
      sym_object_name,
  [15081] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [15085] = 1,
    ACTIONS(2102), 1,
      sym_object_name,
  [15089] = 1,
    ACTIONS(2104), 1,
      sym_object_name,
  [15093] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15097] = 1,
    ACTIONS(2108), 1,
      sym_object_name,
  [15101] = 1,
    ACTIONS(2110), 1,
      sym_object_name,
  [15105] = 1,
    ACTIONS(2112), 1,
      sym_object_name,
  [15109] = 1,
    ACTIONS(2114), 1,
      aux_sym_order_spec_token2,
  [15113] = 1,
    ACTIONS(2116), 1,
      anon_sym_COMMA,
  [15117] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15121] = 1,
    ACTIONS(2120), 1,
      anon_sym_RPAREN,
  [15125] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15129] = 1,
    ACTIONS(2124), 1,
      sym_object_name,
  [15133] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_function_token1,
  [15137] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [15141] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [15145] = 1,
    ACTIONS(2132), 1,
      aux_sym_create_function_token2,
  [15149] = 1,
    ACTIONS(2134), 1,
      anon_sym_LPAREN,
  [15153] = 1,
    ACTIONS(2136), 1,
      aux_sym_select_element_token1,
  [15157] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15161] = 1,
    ACTIONS(2140), 1,
      aux_sym_create_function_token2,
  [15165] = 1,
    ACTIONS(2142), 1,
      aux_sym_delete_statement_token3,
  [15169] = 1,
    ACTIONS(2144), 1,
      sym__code_block,
  [15173] = 1,
    ACTIONS(2146), 1,
      aux_sym_select_element_token1,
  [15177] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15181] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15185] = 1,
    ACTIONS(2152), 1,
      aux_sym_create_aggregate_token5,
  [15189] = 1,
    ACTIONS(2154), 1,
      aux_sym_create_aggregate_token6,
  [15193] = 1,
    ACTIONS(2156), 1,
      aux_sym_from_spec_token1,
  [15197] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15201] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [15205] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_materialized_view_token1,
  [15209] = 1,
    ACTIONS(2164), 1,
      aux_sym_create_materialized_view_token1,
  [15213] = 1,
    ACTIONS(2166), 1,
      aux_sym_insert_statement_token3,
  [15217] = 1,
    ACTIONS(2168), 1,
      aux_sym_delete_statement_token3,
  [15221] = 1,
    ACTIONS(2170), 1,
      sym_object_name,
  [15225] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15229] = 1,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
  [15233] = 1,
    ACTIONS(2176), 1,
      aux_sym_delete_statement_token3,
  [15237] = 1,
    ACTIONS(2178), 1,
      aux_sym_select_statement_token1,
  [15241] = 1,
    ACTIONS(2180), 1,
      aux_sym_insert_statement_token3,
  [15245] = 1,
    ACTIONS(2182), 1,
      sym_object_name,
  [15249] = 1,
    ACTIONS(2184), 1,
      aux_sym_delete_statement_token3,
  [15253] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_function_token1,
  [15257] = 1,
    ACTIONS(2188), 1,
      aux_sym_delete_statement_token3,
  [15261] = 1,
    ACTIONS(2190), 1,
      aux_sym_create_function_token2,
  [15265] = 1,
    ACTIONS(2192), 1,
      sym_object_name,
  [15269] = 1,
    ACTIONS(2194), 1,
      aux_sym_create_function_token1,
  [15273] = 1,
    ACTIONS(2196), 1,
      aux_sym_select_element_token1,
  [15277] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15281] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_function_token2,
  [15285] = 1,
    ACTIONS(2202), 1,
      anon_sym_RPAREN,
  [15289] = 1,
    ACTIONS(2204), 1,
      sym_object_name,
  [15293] = 1,
    ACTIONS(2206), 1,
      aux_sym_create_aggregate_token4,
  [15297] = 1,
    ACTIONS(2208), 1,
      aux_sym_create_aggregate_token5,
  [15301] = 1,
    ACTIONS(2210), 1,
      aux_sym_delete_statement_token3,
  [15305] = 1,
    ACTIONS(2212), 1,
      anon_sym_RPAREN,
  [15309] = 1,
    ACTIONS(2214), 1,
      aux_sym_update_token2,
  [15313] = 1,
    ACTIONS(2216), 1,
      aux_sym_delete_statement_token3,
  [15317] = 1,
    ACTIONS(2218), 1,
      aux_sym_create_function_token2,
  [15321] = 1,
    ACTIONS(2220), 1,
      aux_sym_delete_statement_token3,
  [15325] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_function_token1,
  [15329] = 1,
    ACTIONS(2224), 1,
      aux_sym_select_element_token1,
  [15333] = 1,
    ACTIONS(2226), 1,
      sym_object_name,
  [15337] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_function_token2,
  [15341] = 1,
    ACTIONS(2230), 1,
      aux_sym_materialized_view_options_token1,
  [15345] = 1,
    ACTIONS(2232), 1,
      aux_sym_select_element_token1,
  [15349] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15353] = 1,
    ACTIONS(2236), 1,
      aux_sym_select_statement_token5,
  [15357] = 1,
    ACTIONS(2238), 1,
      sym__code_block,
  [15361] = 1,
    ACTIONS(2240), 1,
      aux_sym_create_aggregate_token4,
  [15365] = 1,
    ACTIONS(2242), 1,
      aux_sym_create_aggregate_token5,
  [15369] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15373] = 1,
    ACTIONS(2246), 1,
      anon_sym_LPAREN,
  [15377] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15381] = 1,
    ACTIONS(2250), 1,
      sym_object_name,
  [15385] = 1,
    ACTIONS(2252), 1,
      aux_sym_create_materialized_view_token1,
  [15389] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_aggregate_token4,
  [15393] = 1,
    ACTIONS(2256), 1,
      aux_sym_relation_contains_key_token2,
  [15397] = 1,
    ACTIONS(2258), 1,
      aux_sym_relation_contains_key_token2,
  [15401] = 1,
    ACTIONS(2260), 1,
      aux_sym_constant_token2,
  [15405] = 1,
    ACTIONS(2262), 1,
      aux_sym_delete_statement_token3,
  [15409] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_aggregate_token3,
  [15413] = 1,
    ACTIONS(2266), 1,
      aux_sym_delete_statement_token3,
  [15417] = 1,
    ACTIONS(2268), 1,
      anon_sym_LPAREN,
  [15421] = 1,
    ACTIONS(2270), 1,
      anon_sym_RPAREN,
  [15425] = 1,
    ACTIONS(2272), 1,
      anon_sym_LPAREN,
  [15429] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token1,
  [15433] = 1,
    ACTIONS(2276), 1,
      anon_sym_LPAREN,
  [15437] = 1,
    ACTIONS(2278), 1,
      anon_sym_COLON,
  [15441] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_function_token2,
  [15445] = 1,
    ACTIONS(2282), 1,
      aux_sym__decimal_literal_token1,
  [15449] = 1,
    ACTIONS(2284), 1,
      aux_sym_create_function_token1,
  [15453] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [15457] = 1,
    ACTIONS(2288), 1,
      aux_sym_create_function_token2,
  [15461] = 1,
    ACTIONS(2290), 1,
      sym_object_name,
  [15465] = 1,
    ACTIONS(2292), 1,
      sym__code_block,
  [15469] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_element_token1,
  [15473] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15477] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_aggregate_token3,
  [15481] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_aggregate_token4,
  [15485] = 1,
    ACTIONS(2302), 1,
      anon_sym_RBRACK,
  [15489] = 1,
    ACTIONS(2304), 1,
      sym_object_name,
  [15493] = 1,
    ACTIONS(2306), 1,
      anon_sym_RPAREN,
  [15497] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [15501] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_function_token2,
  [15505] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_function_token1,
  [15509] = 1,
    ACTIONS(2314), 1,
      sym__code_block,
  [15513] = 1,
    ACTIONS(2316), 1,
      aux_sym_select_element_token1,
  [15517] = 1,
    ACTIONS(2318), 1,
      sym_object_name,
  [15521] = 1,
    ACTIONS(2320), 1,
      aux_sym_order_spec_token2,
  [15525] = 1,
    ACTIONS(2322), 1,
      sym__code_block,
  [15529] = 1,
    ACTIONS(2324), 1,
      aux_sym_select_element_token1,
  [15533] = 1,
    ACTIONS(2326), 1,
      anon_sym_RPAREN,
  [15537] = 1,
    ACTIONS(2328), 1,
      aux_sym_select_statement_token5,
  [15541] = 1,
    ACTIONS(2330), 1,
      sym_object_name,
  [15545] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_aggregate_token6,
  [15549] = 1,
    ACTIONS(2334), 1,
      anon_sym_RPAREN,
  [15553] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_function_token2,
  [15557] = 1,
    ACTIONS(2338), 1,
      aux_sym_return_mode_token2,
  [15561] = 1,
    ACTIONS(2340), 1,
      aux_sym_constant_token2,
  [15565] = 1,
    ACTIONS(2342), 1,
      anon_sym_RPAREN,
  [15569] = 1,
    ACTIONS(2344), 1,
      aux_sym_relation_contains_key_token2,
  [15573] = 1,
    ACTIONS(2346), 1,
      aux_sym_create_materialized_view_token1,
  [15577] = 1,
    ACTIONS(2348), 1,
      anon_sym_LPAREN,
  [15581] = 1,
    ACTIONS(2350), 1,
      anon_sym_LPAREN,
  [15585] = 1,
    ACTIONS(2352), 1,
      aux_sym_delete_statement_token3,
  [15589] = 1,
    ACTIONS(2354), 1,
      aux_sym_create_function_token1,
  [15593] = 1,
    ACTIONS(2356), 1,
      anon_sym_RPAREN,
  [15597] = 1,
    ACTIONS(2358), 1,
      aux_sym_relation_contains_key_token2,
  [15601] = 1,
    ACTIONS(2360), 1,
      aux_sym_create_function_token1,
  [15605] = 1,
    ACTIONS(2362), 1,
      anon_sym_LPAREN,
  [15609] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [15613] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_function_token2,
  [15617] = 1,
    ACTIONS(2368), 1,
      aux_sym_relation_contains_key_token2,
  [15621] = 1,
    ACTIONS(2370), 1,
      aux_sym_select_element_token1,
  [15625] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [15629] = 1,
    ACTIONS(2374), 1,
      aux_sym_create_function_token2,
  [15633] = 1,
    ACTIONS(2376), 1,
      sym_object_name,
  [15637] = 1,
    ACTIONS(2378), 1,
      sym__code_block,
  [15641] = 1,
    ACTIONS(2380), 1,
      aux_sym_select_element_token1,
  [15645] = 1,
    ACTIONS(2382), 1,
      sym_object_name,
  [15649] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [15653] = 1,
    ACTIONS(2386), 1,
      aux_sym_create_aggregate_token5,
  [15657] = 1,
    ACTIONS(2388), 1,
      aux_sym_create_aggregate_token6,
  [15661] = 1,
    ACTIONS(2390), 1,
      aux_sym_select_element_token1,
  [15665] = 1,
    ACTIONS(2392), 1,
      sym_object_name,
  [15669] = 1,
    ACTIONS(2394), 1,
      aux_sym_create_function_token2,
  [15673] = 1,
    ACTIONS(2396), 1,
      anon_sym_COLON,
  [15677] = 1,
    ACTIONS(2398), 1,
      sym__code_block,
  [15681] = 1,
    ACTIONS(2400), 1,
      aux_sym_select_element_token1,
  [15685] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [15689] = 1,
    ACTIONS(2404), 1,
      sym__code_block,
  [15693] = 1,
    ACTIONS(2406), 1,
      aux_sym_create_aggregate_token5,
  [15697] = 1,
    ACTIONS(2408), 1,
      aux_sym_create_aggregate_token6,
  [15701] = 1,
    ACTIONS(2410), 1,
      aux_sym_materialized_view_options_token1,
  [15705] = 1,
    ACTIONS(2412), 1,
      aux_sym_update_token2,
  [15709] = 1,
    ACTIONS(2414), 1,
      anon_sym_COLON,
  [15713] = 1,
    ACTIONS(2416), 1,
      anon_sym_EQ,
  [15717] = 1,
    ACTIONS(2418), 1,
      sym_object_name,
  [15721] = 1,
    ACTIONS(2420), 1,
      aux_sym_delete_statement_token3,
  [15725] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [15729] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_materialized_view_token1,
  [15733] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_materialized_view_token1,
  [15737] = 1,
    ACTIONS(2428), 1,
      anon_sym_LPAREN,
  [15741] = 1,
    ACTIONS(2430), 1,
      aux_sym_relation_contains_key_token2,
  [15745] = 1,
    ACTIONS(2432), 1,
      anon_sym_RPAREN,
  [15749] = 1,
    ACTIONS(2434), 1,
      anon_sym_RPAREN,
  [15753] = 1,
    ACTIONS(2436), 1,
      aux_sym_delete_statement_token3,
  [15757] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_function_token2,
  [15761] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_index_token3,
  [15765] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_function_token1,
  [15769] = 1,
    ACTIONS(2444), 1,
      aux_sym_select_element_token1,
  [15773] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [15777] = 1,
    ACTIONS(2448), 1,
      aux_sym_create_function_token2,
  [15781] = 1,
    ACTIONS(2450), 1,
      sym__code_block,
  [15785] = 1,
    ACTIONS(2452), 1,
      aux_sym_select_element_token1,
  [15789] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [15793] = 1,
    ACTIONS(2456), 1,
      aux_sym_delete_statement_token3,
  [15797] = 1,
    ACTIONS(2458), 1,
      sym__code_block,
  [15801] = 1,
    ACTIONS(2460), 1,
      aux_sym_create_aggregate_token4,
  [15805] = 1,
    ACTIONS(2462), 1,
      aux_sym_create_aggregate_token5,
  [15809] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [15813] = 1,
    ACTIONS(2466), 1,
      sym_object_name,
  [15817] = 1,
    ACTIONS(2468), 1,
      sym__code_block,
  [15821] = 1,
    ACTIONS(2470), 1,
      aux_sym_select_element_token1,
  [15825] = 1,
    ACTIONS(2472), 1,
      sym_object_name,
  [15829] = 1,
    ACTIONS(2474), 1,
      aux_sym_delete_statement_token3,
  [15833] = 1,
    ACTIONS(2476), 1,
      sym__code_block,
  [15837] = 1,
    ACTIONS(2478), 1,
      aux_sym_delete_statement_token3,
  [15841] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [15845] = 1,
    ACTIONS(2482), 1,
      aux_sym_insert_statement_token2,
  [15849] = 1,
    ACTIONS(2484), 1,
      aux_sym_delete_statement_token3,
  [15853] = 1,
    ACTIONS(2486), 1,
      aux_sym_delete_statement_token3,
  [15857] = 1,
    ACTIONS(2488), 1,
      aux_sym_delete_statement_token3,
  [15861] = 1,
    ACTIONS(2490), 1,
      anon_sym_LPAREN,
  [15865] = 1,
    ACTIONS(2492), 1,
      anon_sym_RPAREN,
  [15869] = 1,
    ACTIONS(2494), 1,
      aux_sym_insert_statement_token3,
  [15873] = 1,
    ACTIONS(2496), 1,
      anon_sym_RPAREN,
  [15877] = 1,
    ACTIONS(2498), 1,
      anon_sym_LPAREN,
  [15881] = 1,
    ACTIONS(2500), 1,
      aux_sym_insert_statement_token3,
  [15885] = 1,
    ACTIONS(2502), 1,
      aux_sym_using_timestamp_spec_token1,
  [15889] = 1,
    ACTIONS(2504), 1,
      anon_sym_LPAREN,
  [15893] = 1,
    ACTIONS(2506), 1,
      aux_sym_relation_contains_key_token2,
  [15897] = 1,
    ACTIONS(2508), 1,
      aux_sym_relation_contains_key_token2,
  [15901] = 1,
    ACTIONS(2510), 1,
      anon_sym_RPAREN,
  [15905] = 1,
    ACTIONS(2512), 1,
      anon_sym_LPAREN,
  [15909] = 1,
    ACTIONS(2514), 1,
      anon_sym_RPAREN,
  [15913] = 1,
    ACTIONS(2516), 1,
      anon_sym_RPAREN,
  [15917] = 1,
    ACTIONS(2518), 1,
      aux_sym_insert_statement_token3,
  [15921] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [15925] = 1,
    ACTIONS(2522), 1,
      sym_object_name,
  [15929] = 1,
    ACTIONS(2524), 1,
      aux_sym_create_function_token2,
  [15933] = 1,
    ACTIONS(2526), 1,
      sym_object_name,
  [15937] = 1,
    ACTIONS(2528), 1,
      sym__code_block,
  [15941] = 1,
    ACTIONS(2530), 1,
      aux_sym_select_element_token1,
  [15945] = 1,
    ACTIONS(2532), 1,
      sym_object_name,
  [15949] = 1,
    ACTIONS(2534), 1,
      aux_sym_insert_statement_token3,
  [15953] = 1,
    ACTIONS(2536), 1,
      sym__code_block,
  [15957] = 1,
    ACTIONS(2538), 1,
      aux_sym_select_element_token1,
  [15961] = 1,
    ACTIONS(2540), 1,
      aux_sym_insert_statement_token3,
  [15965] = 1,
    ACTIONS(2542), 1,
      sym_object_name,
  [15969] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [15973] = 1,
    ACTIONS(2546), 1,
      aux_sym_create_aggregate_token6,
  [15977] = 1,
    ACTIONS(2548), 1,
      aux_sym_insert_statement_token3,
  [15981] = 1,
    ACTIONS(2550), 1,
      aux_sym_materialized_view_options_token1,
  [15985] = 1,
    ACTIONS(2552), 1,
      sym__code_block,
  [15989] = 1,
    ACTIONS(2554), 1,
      aux_sym_select_element_token1,
  [15993] = 1,
    ACTIONS(2556), 1,
      aux_sym_materialized_view_options_token1,
  [15997] = 1,
    ACTIONS(2558), 1,
      aux_sym_create_aggregate_token6,
  [16001] = 1,
    ACTIONS(2560), 1,
      aux_sym_insert_statement_token3,
  [16005] = 1,
    ACTIONS(2562), 1,
      anon_sym_RPAREN,
  [16009] = 1,
    ACTIONS(2564), 1,
      aux_sym_create_index_token3,
  [16013] = 1,
    ACTIONS(2566), 1,
      aux_sym_create_keyspace_token1,
  [16017] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16021] = 1,
    ACTIONS(2570), 1,
      aux_sym_insert_statement_token3,
  [16025] = 1,
    ACTIONS(2572), 1,
      aux_sym_create_index_token3,
  [16029] = 1,
    ACTIONS(2574), 1,
      aux_sym_create_index_token3,
  [16033] = 1,
    ACTIONS(2576), 1,
      anon_sym_LPAREN,
  [16037] = 1,
    ACTIONS(2578), 1,
      aux_sym_create_materialized_view_token1,
  [16041] = 1,
    ACTIONS(2580), 1,
      anon_sym_LPAREN,
  [16045] = 1,
    ACTIONS(2582), 1,
      anon_sym_LPAREN,
  [16049] = 1,
    ACTIONS(2584), 1,
      anon_sym_RPAREN,
  [16053] = 1,
    ACTIONS(2586), 1,
      aux_sym_constant_token2,
  [16057] = 1,
    ACTIONS(2588), 1,
      aux_sym_insert_statement_token3,
  [16061] = 1,
    ACTIONS(2590), 1,
      sym_object_name,
  [16065] = 1,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
  [16069] = 1,
    ACTIONS(2594), 1,
      aux_sym_create_function_token1,
  [16073] = 1,
    ACTIONS(2596), 1,
      aux_sym_select_element_token1,
  [16077] = 1,
    ACTIONS(2598), 1,
      sym_object_name,
  [16081] = 1,
    ACTIONS(2600), 1,
      aux_sym_create_function_token2,
  [16085] = 1,
    ACTIONS(2602), 1,
      aux_sym_using_timestamp_spec_token2,
  [16089] = 1,
    ACTIONS(2604), 1,
      sym__code_block,
  [16093] = 1,
    ACTIONS(2606), 1,
      aux_sym_select_element_token1,
  [16097] = 1,
    ACTIONS(2608), 1,
      sym_object_name,
  [16101] = 1,
    ACTIONS(2610), 1,
      sym__code_block,
  [16105] = 1,
    ACTIONS(2612), 1,
      aux_sym_create_aggregate_token5,
  [16109] = 1,
    ACTIONS(2614), 1,
      aux_sym_create_aggregate_token6,
  [16113] = 1,
    ACTIONS(2616), 1,
      sym_object_name,
  [16117] = 1,
    ACTIONS(2618), 1,
      anon_sym_STAR,
  [16121] = 1,
    ACTIONS(2620), 1,
      sym__code_block,
  [16125] = 1,
    ACTIONS(2622), 1,
      aux_sym_select_statement_token5,
  [16129] = 1,
    ACTIONS(2624), 1,
      aux_sym_relation_contains_key_token2,
  [16133] = 1,
    ACTIONS(2626), 1,
      sym_object_name,
  [16137] = 1,
    ACTIONS(2628), 1,
      anon_sym_RPAREN,
  [16141] = 1,
    ACTIONS(2630), 1,
      sym_object_name,
  [16145] = 1,
    ACTIONS(2632), 1,
      anon_sym_RPAREN,
  [16149] = 1,
    ACTIONS(2634), 1,
      aux_sym_insert_statement_token2,
  [16153] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16157] = 1,
    ACTIONS(2638), 1,
      sym_object_name,
  [16161] = 1,
    ACTIONS(2640), 1,
      aux_sym_drop_materialized_view_token2,
  [16165] = 1,
    ACTIONS(2642), 1,
      sym__code_block,
  [16169] = 1,
    ACTIONS(2644), 1,
      aux_sym_select_element_token1,
  [16173] = 1,
    ACTIONS(2646), 1,
      sym_object_name,
  [16177] = 1,
    ACTIONS(2648), 1,
      sym_object_name,
  [16181] = 1,
    ACTIONS(2650), 1,
      sym__code_block,
  [16185] = 1,
    ACTIONS(2652), 1,
      aux_sym_delete_statement_token3,
  [16189] = 1,
    ACTIONS(2654), 1,
      sym_object_name,
  [16193] = 1,
    ACTIONS(2656), 1,
      aux_sym_select_statement_token1,
  [16197] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_index_token3,
  [16201] = 1,
    ACTIONS(2660), 1,
      aux_sym_create_index_token3,
  [16205] = 1,
    ACTIONS(2662), 1,
      aux_sym_from_spec_token1,
  [16209] = 1,
    ACTIONS(2664), 1,
      anon_sym_LPAREN,
  [16213] = 1,
    ACTIONS(2666), 1,
      anon_sym_RPAREN,
  [16217] = 1,
    ACTIONS(2668), 1,
      anon_sym_RPAREN,
  [16221] = 1,
    ACTIONS(2670), 1,
      aux_sym_drop_materialized_view_token2,
  [16225] = 1,
    ACTIONS(2672), 1,
      sym_object_name,
  [16229] = 1,
    ACTIONS(2674), 1,
      aux_sym_insert_statement_token3,
  [16233] = 1,
    ACTIONS(2676), 1,
      sym_object_name,
  [16237] = 1,
    ACTIONS(2678), 1,
      sym_object_name,
  [16241] = 1,
    ACTIONS(2680), 1,
      sym_object_name,
  [16245] = 1,
    ACTIONS(2682), 1,
      aux_sym_create_aggregate_token2,
  [16249] = 1,
    ACTIONS(2684), 1,
      sym__code_block,
  [16253] = 1,
    ACTIONS(2686), 1,
      aux_sym_select_element_token1,
  [16257] = 1,
    ACTIONS(2688), 1,
      anon_sym_LPAREN,
  [16261] = 1,
    ACTIONS(2690), 1,
      aux_sym_create_aggregate_token6,
  [16265] = 1,
    ACTIONS(2692), 1,
      aux_sym_drop_materialized_view_token2,
  [16269] = 1,
    ACTIONS(2694), 1,
      sym_object_name,
  [16273] = 1,
    ACTIONS(2696), 1,
      sym_object_name,
  [16277] = 1,
    ACTIONS(2698), 1,
      anon_sym_LPAREN,
  [16281] = 1,
    ACTIONS(2700), 1,
      anon_sym_RPAREN,
  [16285] = 1,
    ACTIONS(2702), 1,
      sym_object_name,
  [16289] = 1,
    ACTIONS(2704), 1,
      aux_sym__decimal_literal_token1,
  [16293] = 1,
    ACTIONS(2706), 1,
      aux_sym_begin_batch_token4,
  [16297] = 1,
    ACTIONS(2708), 1,
      sym__code_block,
  [16301] = 1,
    ACTIONS(2710), 1,
      anon_sym_LPAREN,
  [16305] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16309] = 1,
    ACTIONS(2714), 1,
      sym_object_name,
  [16313] = 1,
    ACTIONS(2716), 1,
      anon_sym_EQ,
  [16317] = 1,
    ACTIONS(2718), 1,
      ts_builtin_sym_end,
  [16321] = 1,
    ACTIONS(2720), 1,
      aux_sym_begin_batch_token4,
  [16325] = 1,
    ACTIONS(2722), 1,
      sym_object_name,
  [16329] = 1,
    ACTIONS(2724), 1,
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
  [SMALL_STATE(60)] = 2135,
  [SMALL_STATE(61)] = 2167,
  [SMALL_STATE(62)] = 2197,
  [SMALL_STATE(63)] = 2229,
  [SMALL_STATE(64)] = 2260,
  [SMALL_STATE(65)] = 2291,
  [SMALL_STATE(66)] = 2318,
  [SMALL_STATE(67)] = 2345,
  [SMALL_STATE(68)] = 2376,
  [SMALL_STATE(69)] = 2407,
  [SMALL_STATE(70)] = 2447,
  [SMALL_STATE(71)] = 2487,
  [SMALL_STATE(72)] = 2517,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2573,
  [SMALL_STATE(75)] = 2613,
  [SMALL_STATE(76)] = 2642,
  [SMALL_STATE(77)] = 2667,
  [SMALL_STATE(78)] = 2692,
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
  [SMALL_STATE(89)] = 2979,
  [SMALL_STATE(90)] = 3003,
  [SMALL_STATE(91)] = 3037,
  [SMALL_STATE(92)] = 3071,
  [SMALL_STATE(93)] = 3095,
  [SMALL_STATE(94)] = 3119,
  [SMALL_STATE(95)] = 3144,
  [SMALL_STATE(96)] = 3167,
  [SMALL_STATE(97)] = 3192,
  [SMALL_STATE(98)] = 3217,
  [SMALL_STATE(99)] = 3242,
  [SMALL_STATE(100)] = 3267,
  [SMALL_STATE(101)] = 3289,
  [SMALL_STATE(102)] = 3317,
  [SMALL_STATE(103)] = 3355,
  [SMALL_STATE(104)] = 3381,
  [SMALL_STATE(105)] = 3403,
  [SMALL_STATE(106)] = 3425,
  [SMALL_STATE(107)] = 3453,
  [SMALL_STATE(108)] = 3481,
  [SMALL_STATE(109)] = 3509,
  [SMALL_STATE(110)] = 3531,
  [SMALL_STATE(111)] = 3559,
  [SMALL_STATE(112)] = 3587,
  [SMALL_STATE(113)] = 3615,
  [SMALL_STATE(114)] = 3653,
  [SMALL_STATE(115)] = 3677,
  [SMALL_STATE(116)] = 3699,
  [SMALL_STATE(117)] = 3725,
  [SMALL_STATE(118)] = 3747,
  [SMALL_STATE(119)] = 3769,
  [SMALL_STATE(120)] = 3794,
  [SMALL_STATE(121)] = 3819,
  [SMALL_STATE(122)] = 3840,
  [SMALL_STATE(123)] = 3861,
  [SMALL_STATE(124)] = 3886,
  [SMALL_STATE(125)] = 3911,
  [SMALL_STATE(126)] = 3932,
  [SMALL_STATE(127)] = 3957,
  [SMALL_STATE(128)] = 3982,
  [SMALL_STATE(129)] = 4007,
  [SMALL_STATE(130)] = 4032,
  [SMALL_STATE(131)] = 4057,
  [SMALL_STATE(132)] = 4082,
  [SMALL_STATE(133)] = 4107,
  [SMALL_STATE(134)] = 4132,
  [SMALL_STATE(135)] = 4157,
  [SMALL_STATE(136)] = 4182,
  [SMALL_STATE(137)] = 4207,
  [SMALL_STATE(138)] = 4230,
  [SMALL_STATE(139)] = 4255,
  [SMALL_STATE(140)] = 4278,
  [SMALL_STATE(141)] = 4303,
  [SMALL_STATE(142)] = 4328,
  [SMALL_STATE(143)] = 4353,
  [SMALL_STATE(144)] = 4378,
  [SMALL_STATE(145)] = 4403,
  [SMALL_STATE(146)] = 4428,
  [SMALL_STATE(147)] = 4449,
  [SMALL_STATE(148)] = 4474,
  [SMALL_STATE(149)] = 4499,
  [SMALL_STATE(150)] = 4524,
  [SMALL_STATE(151)] = 4545,
  [SMALL_STATE(152)] = 4566,
  [SMALL_STATE(153)] = 4601,
  [SMALL_STATE(154)] = 4626,
  [SMALL_STATE(155)] = 4647,
  [SMALL_STATE(156)] = 4672,
  [SMALL_STATE(157)] = 4697,
  [SMALL_STATE(158)] = 4722,
  [SMALL_STATE(159)] = 4743,
  [SMALL_STATE(160)] = 4768,
  [SMALL_STATE(161)] = 4793,
  [SMALL_STATE(162)] = 4818,
  [SMALL_STATE(163)] = 4843,
  [SMALL_STATE(164)] = 4868,
  [SMALL_STATE(165)] = 4893,
  [SMALL_STATE(166)] = 4918,
  [SMALL_STATE(167)] = 4943,
  [SMALL_STATE(168)] = 4964,
  [SMALL_STATE(169)] = 4989,
  [SMALL_STATE(170)] = 5014,
  [SMALL_STATE(171)] = 5035,
  [SMALL_STATE(172)] = 5060,
  [SMALL_STATE(173)] = 5085,
  [SMALL_STATE(174)] = 5110,
  [SMALL_STATE(175)] = 5135,
  [SMALL_STATE(176)] = 5160,
  [SMALL_STATE(177)] = 5185,
  [SMALL_STATE(178)] = 5210,
  [SMALL_STATE(179)] = 5235,
  [SMALL_STATE(180)] = 5260,
  [SMALL_STATE(181)] = 5285,
  [SMALL_STATE(182)] = 5310,
  [SMALL_STATE(183)] = 5331,
  [SMALL_STATE(184)] = 5356,
  [SMALL_STATE(185)] = 5381,
  [SMALL_STATE(186)] = 5402,
  [SMALL_STATE(187)] = 5427,
  [SMALL_STATE(188)] = 5452,
  [SMALL_STATE(189)] = 5473,
  [SMALL_STATE(190)] = 5498,
  [SMALL_STATE(191)] = 5519,
  [SMALL_STATE(192)] = 5544,
  [SMALL_STATE(193)] = 5569,
  [SMALL_STATE(194)] = 5594,
  [SMALL_STATE(195)] = 5614,
  [SMALL_STATE(196)] = 5634,
  [SMALL_STATE(197)] = 5654,
  [SMALL_STATE(198)] = 5674,
  [SMALL_STATE(199)] = 5694,
  [SMALL_STATE(200)] = 5714,
  [SMALL_STATE(201)] = 5736,
  [SMALL_STATE(202)] = 5756,
  [SMALL_STATE(203)] = 5776,
  [SMALL_STATE(204)] = 5798,
  [SMALL_STATE(205)] = 5820,
  [SMALL_STATE(206)] = 5840,
  [SMALL_STATE(207)] = 5860,
  [SMALL_STATE(208)] = 5880,
  [SMALL_STATE(209)] = 5902,
  [SMALL_STATE(210)] = 5922,
  [SMALL_STATE(211)] = 5944,
  [SMALL_STATE(212)] = 5964,
  [SMALL_STATE(213)] = 5986,
  [SMALL_STATE(214)] = 6006,
  [SMALL_STATE(215)] = 6028,
  [SMALL_STATE(216)] = 6050,
  [SMALL_STATE(217)] = 6072,
  [SMALL_STATE(218)] = 6094,
  [SMALL_STATE(219)] = 6116,
  [SMALL_STATE(220)] = 6138,
  [SMALL_STATE(221)] = 6158,
  [SMALL_STATE(222)] = 6178,
  [SMALL_STATE(223)] = 6200,
  [SMALL_STATE(224)] = 6220,
  [SMALL_STATE(225)] = 6242,
  [SMALL_STATE(226)] = 6264,
  [SMALL_STATE(227)] = 6284,
  [SMALL_STATE(228)] = 6306,
  [SMALL_STATE(229)] = 6326,
  [SMALL_STATE(230)] = 6346,
  [SMALL_STATE(231)] = 6368,
  [SMALL_STATE(232)] = 6390,
  [SMALL_STATE(233)] = 6412,
  [SMALL_STATE(234)] = 6432,
  [SMALL_STATE(235)] = 6452,
  [SMALL_STATE(236)] = 6474,
  [SMALL_STATE(237)] = 6496,
  [SMALL_STATE(238)] = 6518,
  [SMALL_STATE(239)] = 6538,
  [SMALL_STATE(240)] = 6558,
  [SMALL_STATE(241)] = 6578,
  [SMALL_STATE(242)] = 6600,
  [SMALL_STATE(243)] = 6620,
  [SMALL_STATE(244)] = 6640,
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
  [SMALL_STATE(261)] = 6965,
  [SMALL_STATE(262)] = 6984,
  [SMALL_STATE(263)] = 7003,
  [SMALL_STATE(264)] = 7022,
  [SMALL_STATE(265)] = 7041,
  [SMALL_STATE(266)] = 7060,
  [SMALL_STATE(267)] = 7079,
  [SMALL_STATE(268)] = 7098,
  [SMALL_STATE(269)] = 7117,
  [SMALL_STATE(270)] = 7136,
  [SMALL_STATE(271)] = 7155,
  [SMALL_STATE(272)] = 7174,
  [SMALL_STATE(273)] = 7193,
  [SMALL_STATE(274)] = 7212,
  [SMALL_STATE(275)] = 7231,
  [SMALL_STATE(276)] = 7250,
  [SMALL_STATE(277)] = 7269,
  [SMALL_STATE(278)] = 7288,
  [SMALL_STATE(279)] = 7307,
  [SMALL_STATE(280)] = 7326,
  [SMALL_STATE(281)] = 7345,
  [SMALL_STATE(282)] = 7364,
  [SMALL_STATE(283)] = 7383,
  [SMALL_STATE(284)] = 7402,
  [SMALL_STATE(285)] = 7421,
  [SMALL_STATE(286)] = 7440,
  [SMALL_STATE(287)] = 7459,
  [SMALL_STATE(288)] = 7478,
  [SMALL_STATE(289)] = 7497,
  [SMALL_STATE(290)] = 7516,
  [SMALL_STATE(291)] = 7535,
  [SMALL_STATE(292)] = 7554,
  [SMALL_STATE(293)] = 7573,
  [SMALL_STATE(294)] = 7592,
  [SMALL_STATE(295)] = 7611,
  [SMALL_STATE(296)] = 7630,
  [SMALL_STATE(297)] = 7649,
  [SMALL_STATE(298)] = 7668,
  [SMALL_STATE(299)] = 7687,
  [SMALL_STATE(300)] = 7706,
  [SMALL_STATE(301)] = 7725,
  [SMALL_STATE(302)] = 7744,
  [SMALL_STATE(303)] = 7763,
  [SMALL_STATE(304)] = 7782,
  [SMALL_STATE(305)] = 7801,
  [SMALL_STATE(306)] = 7820,
  [SMALL_STATE(307)] = 7839,
  [SMALL_STATE(308)] = 7858,
  [SMALL_STATE(309)] = 7877,
  [SMALL_STATE(310)] = 7896,
  [SMALL_STATE(311)] = 7915,
  [SMALL_STATE(312)] = 7934,
  [SMALL_STATE(313)] = 7953,
  [SMALL_STATE(314)] = 7972,
  [SMALL_STATE(315)] = 7991,
  [SMALL_STATE(316)] = 8010,
  [SMALL_STATE(317)] = 8029,
  [SMALL_STATE(318)] = 8048,
  [SMALL_STATE(319)] = 8067,
  [SMALL_STATE(320)] = 8086,
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
  [SMALL_STATE(386)] = 9356,
  [SMALL_STATE(387)] = 9375,
  [SMALL_STATE(388)] = 9394,
  [SMALL_STATE(389)] = 9413,
  [SMALL_STATE(390)] = 9432,
  [SMALL_STATE(391)] = 9451,
  [SMALL_STATE(392)] = 9470,
  [SMALL_STATE(393)] = 9489,
  [SMALL_STATE(394)] = 9508,
  [SMALL_STATE(395)] = 9527,
  [SMALL_STATE(396)] = 9546,
  [SMALL_STATE(397)] = 9565,
  [SMALL_STATE(398)] = 9593,
  [SMALL_STATE(399)] = 9611,
  [SMALL_STATE(400)] = 9639,
  [SMALL_STATE(401)] = 9667,
  [SMALL_STATE(402)] = 9695,
  [SMALL_STATE(403)] = 9723,
  [SMALL_STATE(404)] = 9751,
  [SMALL_STATE(405)] = 9779,
  [SMALL_STATE(406)] = 9807,
  [SMALL_STATE(407)] = 9835,
  [SMALL_STATE(408)] = 9866,
  [SMALL_STATE(409)] = 9899,
  [SMALL_STATE(410)] = 9927,
  [SMALL_STATE(411)] = 9952,
  [SMALL_STATE(412)] = 9975,
  [SMALL_STATE(413)] = 10000,
  [SMALL_STATE(414)] = 10022,
  [SMALL_STATE(415)] = 10044,
  [SMALL_STATE(416)] = 10064,
  [SMALL_STATE(417)] = 10098,
  [SMALL_STATE(418)] = 10129,
  [SMALL_STATE(419)] = 10148,
  [SMALL_STATE(420)] = 10167,
  [SMALL_STATE(421)] = 10190,
  [SMALL_STATE(422)] = 10209,
  [SMALL_STATE(423)] = 10228,
  [SMALL_STATE(424)] = 10247,
  [SMALL_STATE(425)] = 10270,
  [SMALL_STATE(426)] = 10289,
  [SMALL_STATE(427)] = 10306,
  [SMALL_STATE(428)] = 10325,
  [SMALL_STATE(429)] = 10344,
  [SMALL_STATE(430)] = 10361,
  [SMALL_STATE(431)] = 10380,
  [SMALL_STATE(432)] = 10399,
  [SMALL_STATE(433)] = 10418,
  [SMALL_STATE(434)] = 10438,
  [SMALL_STATE(435)] = 10459,
  [SMALL_STATE(436)] = 10480,
  [SMALL_STATE(437)] = 10501,
  [SMALL_STATE(438)] = 10522,
  [SMALL_STATE(439)] = 10543,
  [SMALL_STATE(440)] = 10564,
  [SMALL_STATE(441)] = 10585,
  [SMALL_STATE(442)] = 10606,
  [SMALL_STATE(443)] = 10627,
  [SMALL_STATE(444)] = 10647,
  [SMALL_STATE(445)] = 10669,
  [SMALL_STATE(446)] = 10683,
  [SMALL_STATE(447)] = 10697,
  [SMALL_STATE(448)] = 10719,
  [SMALL_STATE(449)] = 10741,
  [SMALL_STATE(450)] = 10759,
  [SMALL_STATE(451)] = 10779,
  [SMALL_STATE(452)] = 10801,
  [SMALL_STATE(453)] = 10819,
  [SMALL_STATE(454)] = 10837,
  [SMALL_STATE(455)] = 10856,
  [SMALL_STATE(456)] = 10875,
  [SMALL_STATE(457)] = 10886,
  [SMALL_STATE(458)] = 10903,
  [SMALL_STATE(459)] = 10911,
  [SMALL_STATE(460)] = 10927,
  [SMALL_STATE(461)] = 10935,
  [SMALL_STATE(462)] = 10951,
  [SMALL_STATE(463)] = 10959,
  [SMALL_STATE(464)] = 10967,
  [SMALL_STATE(465)] = 10983,
  [SMALL_STATE(466)] = 10999,
  [SMALL_STATE(467)] = 11015,
  [SMALL_STATE(468)] = 11031,
  [SMALL_STATE(469)] = 11043,
  [SMALL_STATE(470)] = 11059,
  [SMALL_STATE(471)] = 11075,
  [SMALL_STATE(472)] = 11091,
  [SMALL_STATE(473)] = 11107,
  [SMALL_STATE(474)] = 11115,
  [SMALL_STATE(475)] = 11127,
  [SMALL_STATE(476)] = 11135,
  [SMALL_STATE(477)] = 11147,
  [SMALL_STATE(478)] = 11161,
  [SMALL_STATE(479)] = 11175,
  [SMALL_STATE(480)] = 11191,
  [SMALL_STATE(481)] = 11207,
  [SMALL_STATE(482)] = 11219,
  [SMALL_STATE(483)] = 11227,
  [SMALL_STATE(484)] = 11240,
  [SMALL_STATE(485)] = 11253,
  [SMALL_STATE(486)] = 11266,
  [SMALL_STATE(487)] = 11279,
  [SMALL_STATE(488)] = 11292,
  [SMALL_STATE(489)] = 11303,
  [SMALL_STATE(490)] = 11316,
  [SMALL_STATE(491)] = 11323,
  [SMALL_STATE(492)] = 11336,
  [SMALL_STATE(493)] = 11349,
  [SMALL_STATE(494)] = 11362,
  [SMALL_STATE(495)] = 11375,
  [SMALL_STATE(496)] = 11386,
  [SMALL_STATE(497)] = 11399,
  [SMALL_STATE(498)] = 11412,
  [SMALL_STATE(499)] = 11425,
  [SMALL_STATE(500)] = 11438,
  [SMALL_STATE(501)] = 11451,
  [SMALL_STATE(502)] = 11464,
  [SMALL_STATE(503)] = 11477,
  [SMALL_STATE(504)] = 11490,
  [SMALL_STATE(505)] = 11503,
  [SMALL_STATE(506)] = 11516,
  [SMALL_STATE(507)] = 11523,
  [SMALL_STATE(508)] = 11536,
  [SMALL_STATE(509)] = 11549,
  [SMALL_STATE(510)] = 11562,
  [SMALL_STATE(511)] = 11575,
  [SMALL_STATE(512)] = 11588,
  [SMALL_STATE(513)] = 11601,
  [SMALL_STATE(514)] = 11612,
  [SMALL_STATE(515)] = 11625,
  [SMALL_STATE(516)] = 11638,
  [SMALL_STATE(517)] = 11651,
  [SMALL_STATE(518)] = 11664,
  [SMALL_STATE(519)] = 11675,
  [SMALL_STATE(520)] = 11688,
  [SMALL_STATE(521)] = 11701,
  [SMALL_STATE(522)] = 11714,
  [SMALL_STATE(523)] = 11727,
  [SMALL_STATE(524)] = 11740,
  [SMALL_STATE(525)] = 11753,
  [SMALL_STATE(526)] = 11766,
  [SMALL_STATE(527)] = 11779,
  [SMALL_STATE(528)] = 11792,
  [SMALL_STATE(529)] = 11805,
  [SMALL_STATE(530)] = 11818,
  [SMALL_STATE(531)] = 11831,
  [SMALL_STATE(532)] = 11844,
  [SMALL_STATE(533)] = 11857,
  [SMALL_STATE(534)] = 11866,
  [SMALL_STATE(535)] = 11876,
  [SMALL_STATE(536)] = 11886,
  [SMALL_STATE(537)] = 11896,
  [SMALL_STATE(538)] = 11906,
  [SMALL_STATE(539)] = 11916,
  [SMALL_STATE(540)] = 11926,
  [SMALL_STATE(541)] = 11936,
  [SMALL_STATE(542)] = 11946,
  [SMALL_STATE(543)] = 11956,
  [SMALL_STATE(544)] = 11966,
  [SMALL_STATE(545)] = 11976,
  [SMALL_STATE(546)] = 11986,
  [SMALL_STATE(547)] = 11996,
  [SMALL_STATE(548)] = 12004,
  [SMALL_STATE(549)] = 12014,
  [SMALL_STATE(550)] = 12024,
  [SMALL_STATE(551)] = 12034,
  [SMALL_STATE(552)] = 12044,
  [SMALL_STATE(553)] = 12054,
  [SMALL_STATE(554)] = 12064,
  [SMALL_STATE(555)] = 12074,
  [SMALL_STATE(556)] = 12082,
  [SMALL_STATE(557)] = 12092,
  [SMALL_STATE(558)] = 12102,
  [SMALL_STATE(559)] = 12112,
  [SMALL_STATE(560)] = 12122,
  [SMALL_STATE(561)] = 12132,
  [SMALL_STATE(562)] = 12142,
  [SMALL_STATE(563)] = 12152,
  [SMALL_STATE(564)] = 12162,
  [SMALL_STATE(565)] = 12172,
  [SMALL_STATE(566)] = 12182,
  [SMALL_STATE(567)] = 12192,
  [SMALL_STATE(568)] = 12202,
  [SMALL_STATE(569)] = 12212,
  [SMALL_STATE(570)] = 12220,
  [SMALL_STATE(571)] = 12230,
  [SMALL_STATE(572)] = 12240,
  [SMALL_STATE(573)] = 12250,
  [SMALL_STATE(574)] = 12260,
  [SMALL_STATE(575)] = 12270,
  [SMALL_STATE(576)] = 12280,
  [SMALL_STATE(577)] = 12290,
  [SMALL_STATE(578)] = 12300,
  [SMALL_STATE(579)] = 12310,
  [SMALL_STATE(580)] = 12320,
  [SMALL_STATE(581)] = 12330,
  [SMALL_STATE(582)] = 12340,
  [SMALL_STATE(583)] = 12346,
  [SMALL_STATE(584)] = 12356,
  [SMALL_STATE(585)] = 12366,
  [SMALL_STATE(586)] = 12376,
  [SMALL_STATE(587)] = 12386,
  [SMALL_STATE(588)] = 12396,
  [SMALL_STATE(589)] = 12406,
  [SMALL_STATE(590)] = 12416,
  [SMALL_STATE(591)] = 12426,
  [SMALL_STATE(592)] = 12436,
  [SMALL_STATE(593)] = 12446,
  [SMALL_STATE(594)] = 12456,
  [SMALL_STATE(595)] = 12466,
  [SMALL_STATE(596)] = 12476,
  [SMALL_STATE(597)] = 12486,
  [SMALL_STATE(598)] = 12496,
  [SMALL_STATE(599)] = 12506,
  [SMALL_STATE(600)] = 12516,
  [SMALL_STATE(601)] = 12526,
  [SMALL_STATE(602)] = 12532,
  [SMALL_STATE(603)] = 12542,
  [SMALL_STATE(604)] = 12552,
  [SMALL_STATE(605)] = 12562,
  [SMALL_STATE(606)] = 12572,
  [SMALL_STATE(607)] = 12582,
  [SMALL_STATE(608)] = 12592,
  [SMALL_STATE(609)] = 12602,
  [SMALL_STATE(610)] = 12612,
  [SMALL_STATE(611)] = 12622,
  [SMALL_STATE(612)] = 12632,
  [SMALL_STATE(613)] = 12642,
  [SMALL_STATE(614)] = 12652,
  [SMALL_STATE(615)] = 12662,
  [SMALL_STATE(616)] = 12672,
  [SMALL_STATE(617)] = 12682,
  [SMALL_STATE(618)] = 12692,
  [SMALL_STATE(619)] = 12702,
  [SMALL_STATE(620)] = 12712,
  [SMALL_STATE(621)] = 12722,
  [SMALL_STATE(622)] = 12732,
  [SMALL_STATE(623)] = 12742,
  [SMALL_STATE(624)] = 12752,
  [SMALL_STATE(625)] = 12762,
  [SMALL_STATE(626)] = 12772,
  [SMALL_STATE(627)] = 12782,
  [SMALL_STATE(628)] = 12792,
  [SMALL_STATE(629)] = 12802,
  [SMALL_STATE(630)] = 12812,
  [SMALL_STATE(631)] = 12822,
  [SMALL_STATE(632)] = 12832,
  [SMALL_STATE(633)] = 12842,
  [SMALL_STATE(634)] = 12852,
  [SMALL_STATE(635)] = 12862,
  [SMALL_STATE(636)] = 12868,
  [SMALL_STATE(637)] = 12878,
  [SMALL_STATE(638)] = 12888,
  [SMALL_STATE(639)] = 12898,
  [SMALL_STATE(640)] = 12908,
  [SMALL_STATE(641)] = 12918,
  [SMALL_STATE(642)] = 12928,
  [SMALL_STATE(643)] = 12938,
  [SMALL_STATE(644)] = 12948,
  [SMALL_STATE(645)] = 12958,
  [SMALL_STATE(646)] = 12968,
  [SMALL_STATE(647)] = 12978,
  [SMALL_STATE(648)] = 12988,
  [SMALL_STATE(649)] = 12998,
  [SMALL_STATE(650)] = 13008,
  [SMALL_STATE(651)] = 13018,
  [SMALL_STATE(652)] = 13028,
  [SMALL_STATE(653)] = 13038,
  [SMALL_STATE(654)] = 13046,
  [SMALL_STATE(655)] = 13056,
  [SMALL_STATE(656)] = 13066,
  [SMALL_STATE(657)] = 13076,
  [SMALL_STATE(658)] = 13086,
  [SMALL_STATE(659)] = 13096,
  [SMALL_STATE(660)] = 13106,
  [SMALL_STATE(661)] = 13116,
  [SMALL_STATE(662)] = 13126,
  [SMALL_STATE(663)] = 13136,
  [SMALL_STATE(664)] = 13146,
  [SMALL_STATE(665)] = 13156,
  [SMALL_STATE(666)] = 13164,
  [SMALL_STATE(667)] = 13174,
  [SMALL_STATE(668)] = 13184,
  [SMALL_STATE(669)] = 13194,
  [SMALL_STATE(670)] = 13204,
  [SMALL_STATE(671)] = 13214,
  [SMALL_STATE(672)] = 13224,
  [SMALL_STATE(673)] = 13234,
  [SMALL_STATE(674)] = 13244,
  [SMALL_STATE(675)] = 13254,
  [SMALL_STATE(676)] = 13264,
  [SMALL_STATE(677)] = 13274,
  [SMALL_STATE(678)] = 13284,
  [SMALL_STATE(679)] = 13294,
  [SMALL_STATE(680)] = 13304,
  [SMALL_STATE(681)] = 13314,
  [SMALL_STATE(682)] = 13324,
  [SMALL_STATE(683)] = 13332,
  [SMALL_STATE(684)] = 13342,
  [SMALL_STATE(685)] = 13350,
  [SMALL_STATE(686)] = 13360,
  [SMALL_STATE(687)] = 13370,
  [SMALL_STATE(688)] = 13377,
  [SMALL_STATE(689)] = 13384,
  [SMALL_STATE(690)] = 13391,
  [SMALL_STATE(691)] = 13398,
  [SMALL_STATE(692)] = 13405,
  [SMALL_STATE(693)] = 13412,
  [SMALL_STATE(694)] = 13419,
  [SMALL_STATE(695)] = 13426,
  [SMALL_STATE(696)] = 13433,
  [SMALL_STATE(697)] = 13440,
  [SMALL_STATE(698)] = 13447,
  [SMALL_STATE(699)] = 13454,
  [SMALL_STATE(700)] = 13461,
  [SMALL_STATE(701)] = 13468,
  [SMALL_STATE(702)] = 13475,
  [SMALL_STATE(703)] = 13482,
  [SMALL_STATE(704)] = 13489,
  [SMALL_STATE(705)] = 13496,
  [SMALL_STATE(706)] = 13503,
  [SMALL_STATE(707)] = 13510,
  [SMALL_STATE(708)] = 13517,
  [SMALL_STATE(709)] = 13524,
  [SMALL_STATE(710)] = 13531,
  [SMALL_STATE(711)] = 13538,
  [SMALL_STATE(712)] = 13545,
  [SMALL_STATE(713)] = 13552,
  [SMALL_STATE(714)] = 13559,
  [SMALL_STATE(715)] = 13566,
  [SMALL_STATE(716)] = 13573,
  [SMALL_STATE(717)] = 13580,
  [SMALL_STATE(718)] = 13587,
  [SMALL_STATE(719)] = 13594,
  [SMALL_STATE(720)] = 13599,
  [SMALL_STATE(721)] = 13604,
  [SMALL_STATE(722)] = 13611,
  [SMALL_STATE(723)] = 13616,
  [SMALL_STATE(724)] = 13623,
  [SMALL_STATE(725)] = 13628,
  [SMALL_STATE(726)] = 13635,
  [SMALL_STATE(727)] = 13642,
  [SMALL_STATE(728)] = 13647,
  [SMALL_STATE(729)] = 13654,
  [SMALL_STATE(730)] = 13661,
  [SMALL_STATE(731)] = 13668,
  [SMALL_STATE(732)] = 13675,
  [SMALL_STATE(733)] = 13680,
  [SMALL_STATE(734)] = 13687,
  [SMALL_STATE(735)] = 13694,
  [SMALL_STATE(736)] = 13701,
  [SMALL_STATE(737)] = 13708,
  [SMALL_STATE(738)] = 13715,
  [SMALL_STATE(739)] = 13722,
  [SMALL_STATE(740)] = 13729,
  [SMALL_STATE(741)] = 13736,
  [SMALL_STATE(742)] = 13743,
  [SMALL_STATE(743)] = 13748,
  [SMALL_STATE(744)] = 13755,
  [SMALL_STATE(745)] = 13762,
  [SMALL_STATE(746)] = 13769,
  [SMALL_STATE(747)] = 13776,
  [SMALL_STATE(748)] = 13783,
  [SMALL_STATE(749)] = 13788,
  [SMALL_STATE(750)] = 13795,
  [SMALL_STATE(751)] = 13800,
  [SMALL_STATE(752)] = 13807,
  [SMALL_STATE(753)] = 13812,
  [SMALL_STATE(754)] = 13817,
  [SMALL_STATE(755)] = 13822,
  [SMALL_STATE(756)] = 13829,
  [SMALL_STATE(757)] = 13834,
  [SMALL_STATE(758)] = 13841,
  [SMALL_STATE(759)] = 13846,
  [SMALL_STATE(760)] = 13853,
  [SMALL_STATE(761)] = 13860,
  [SMALL_STATE(762)] = 13865,
  [SMALL_STATE(763)] = 13872,
  [SMALL_STATE(764)] = 13879,
  [SMALL_STATE(765)] = 13886,
  [SMALL_STATE(766)] = 13893,
  [SMALL_STATE(767)] = 13898,
  [SMALL_STATE(768)] = 13905,
  [SMALL_STATE(769)] = 13912,
  [SMALL_STATE(770)] = 13919,
  [SMALL_STATE(771)] = 13926,
  [SMALL_STATE(772)] = 13933,
  [SMALL_STATE(773)] = 13940,
  [SMALL_STATE(774)] = 13947,
  [SMALL_STATE(775)] = 13954,
  [SMALL_STATE(776)] = 13961,
  [SMALL_STATE(777)] = 13968,
  [SMALL_STATE(778)] = 13975,
  [SMALL_STATE(779)] = 13982,
  [SMALL_STATE(780)] = 13989,
  [SMALL_STATE(781)] = 13996,
  [SMALL_STATE(782)] = 14003,
  [SMALL_STATE(783)] = 14010,
  [SMALL_STATE(784)] = 14017,
  [SMALL_STATE(785)] = 14024,
  [SMALL_STATE(786)] = 14031,
  [SMALL_STATE(787)] = 14036,
  [SMALL_STATE(788)] = 14043,
  [SMALL_STATE(789)] = 14048,
  [SMALL_STATE(790)] = 14053,
  [SMALL_STATE(791)] = 14060,
  [SMALL_STATE(792)] = 14067,
  [SMALL_STATE(793)] = 14072,
  [SMALL_STATE(794)] = 14077,
  [SMALL_STATE(795)] = 14082,
  [SMALL_STATE(796)] = 14089,
  [SMALL_STATE(797)] = 14096,
  [SMALL_STATE(798)] = 14103,
  [SMALL_STATE(799)] = 14110,
  [SMALL_STATE(800)] = 14117,
  [SMALL_STATE(801)] = 14124,
  [SMALL_STATE(802)] = 14129,
  [SMALL_STATE(803)] = 14134,
  [SMALL_STATE(804)] = 14139,
  [SMALL_STATE(805)] = 14144,
  [SMALL_STATE(806)] = 14151,
  [SMALL_STATE(807)] = 14156,
  [SMALL_STATE(808)] = 14163,
  [SMALL_STATE(809)] = 14170,
  [SMALL_STATE(810)] = 14177,
  [SMALL_STATE(811)] = 14184,
  [SMALL_STATE(812)] = 14191,
  [SMALL_STATE(813)] = 14198,
  [SMALL_STATE(814)] = 14205,
  [SMALL_STATE(815)] = 14212,
  [SMALL_STATE(816)] = 14219,
  [SMALL_STATE(817)] = 14226,
  [SMALL_STATE(818)] = 14233,
  [SMALL_STATE(819)] = 14240,
  [SMALL_STATE(820)] = 14247,
  [SMALL_STATE(821)] = 14254,
  [SMALL_STATE(822)] = 14259,
  [SMALL_STATE(823)] = 14266,
  [SMALL_STATE(824)] = 14273,
  [SMALL_STATE(825)] = 14280,
  [SMALL_STATE(826)] = 14287,
  [SMALL_STATE(827)] = 14292,
  [SMALL_STATE(828)] = 14299,
  [SMALL_STATE(829)] = 14306,
  [SMALL_STATE(830)] = 14311,
  [SMALL_STATE(831)] = 14318,
  [SMALL_STATE(832)] = 14323,
  [SMALL_STATE(833)] = 14328,
  [SMALL_STATE(834)] = 14335,
  [SMALL_STATE(835)] = 14340,
  [SMALL_STATE(836)] = 14345,
  [SMALL_STATE(837)] = 14349,
  [SMALL_STATE(838)] = 14353,
  [SMALL_STATE(839)] = 14357,
  [SMALL_STATE(840)] = 14361,
  [SMALL_STATE(841)] = 14365,
  [SMALL_STATE(842)] = 14369,
  [SMALL_STATE(843)] = 14373,
  [SMALL_STATE(844)] = 14377,
  [SMALL_STATE(845)] = 14381,
  [SMALL_STATE(846)] = 14385,
  [SMALL_STATE(847)] = 14389,
  [SMALL_STATE(848)] = 14393,
  [SMALL_STATE(849)] = 14397,
  [SMALL_STATE(850)] = 14401,
  [SMALL_STATE(851)] = 14405,
  [SMALL_STATE(852)] = 14409,
  [SMALL_STATE(853)] = 14413,
  [SMALL_STATE(854)] = 14417,
  [SMALL_STATE(855)] = 14421,
  [SMALL_STATE(856)] = 14425,
  [SMALL_STATE(857)] = 14429,
  [SMALL_STATE(858)] = 14433,
  [SMALL_STATE(859)] = 14437,
  [SMALL_STATE(860)] = 14441,
  [SMALL_STATE(861)] = 14445,
  [SMALL_STATE(862)] = 14449,
  [SMALL_STATE(863)] = 14453,
  [SMALL_STATE(864)] = 14457,
  [SMALL_STATE(865)] = 14461,
  [SMALL_STATE(866)] = 14465,
  [SMALL_STATE(867)] = 14469,
  [SMALL_STATE(868)] = 14473,
  [SMALL_STATE(869)] = 14477,
  [SMALL_STATE(870)] = 14481,
  [SMALL_STATE(871)] = 14485,
  [SMALL_STATE(872)] = 14489,
  [SMALL_STATE(873)] = 14493,
  [SMALL_STATE(874)] = 14497,
  [SMALL_STATE(875)] = 14501,
  [SMALL_STATE(876)] = 14505,
  [SMALL_STATE(877)] = 14509,
  [SMALL_STATE(878)] = 14513,
  [SMALL_STATE(879)] = 14517,
  [SMALL_STATE(880)] = 14521,
  [SMALL_STATE(881)] = 14525,
  [SMALL_STATE(882)] = 14529,
  [SMALL_STATE(883)] = 14533,
  [SMALL_STATE(884)] = 14537,
  [SMALL_STATE(885)] = 14541,
  [SMALL_STATE(886)] = 14545,
  [SMALL_STATE(887)] = 14549,
  [SMALL_STATE(888)] = 14553,
  [SMALL_STATE(889)] = 14557,
  [SMALL_STATE(890)] = 14561,
  [SMALL_STATE(891)] = 14565,
  [SMALL_STATE(892)] = 14569,
  [SMALL_STATE(893)] = 14573,
  [SMALL_STATE(894)] = 14577,
  [SMALL_STATE(895)] = 14581,
  [SMALL_STATE(896)] = 14585,
  [SMALL_STATE(897)] = 14589,
  [SMALL_STATE(898)] = 14593,
  [SMALL_STATE(899)] = 14597,
  [SMALL_STATE(900)] = 14601,
  [SMALL_STATE(901)] = 14605,
  [SMALL_STATE(902)] = 14609,
  [SMALL_STATE(903)] = 14613,
  [SMALL_STATE(904)] = 14617,
  [SMALL_STATE(905)] = 14621,
  [SMALL_STATE(906)] = 14625,
  [SMALL_STATE(907)] = 14629,
  [SMALL_STATE(908)] = 14633,
  [SMALL_STATE(909)] = 14637,
  [SMALL_STATE(910)] = 14641,
  [SMALL_STATE(911)] = 14645,
  [SMALL_STATE(912)] = 14649,
  [SMALL_STATE(913)] = 14653,
  [SMALL_STATE(914)] = 14657,
  [SMALL_STATE(915)] = 14661,
  [SMALL_STATE(916)] = 14665,
  [SMALL_STATE(917)] = 14669,
  [SMALL_STATE(918)] = 14673,
  [SMALL_STATE(919)] = 14677,
  [SMALL_STATE(920)] = 14681,
  [SMALL_STATE(921)] = 14685,
  [SMALL_STATE(922)] = 14689,
  [SMALL_STATE(923)] = 14693,
  [SMALL_STATE(924)] = 14697,
  [SMALL_STATE(925)] = 14701,
  [SMALL_STATE(926)] = 14705,
  [SMALL_STATE(927)] = 14709,
  [SMALL_STATE(928)] = 14713,
  [SMALL_STATE(929)] = 14717,
  [SMALL_STATE(930)] = 14721,
  [SMALL_STATE(931)] = 14725,
  [SMALL_STATE(932)] = 14729,
  [SMALL_STATE(933)] = 14733,
  [SMALL_STATE(934)] = 14737,
  [SMALL_STATE(935)] = 14741,
  [SMALL_STATE(936)] = 14745,
  [SMALL_STATE(937)] = 14749,
  [SMALL_STATE(938)] = 14753,
  [SMALL_STATE(939)] = 14757,
  [SMALL_STATE(940)] = 14761,
  [SMALL_STATE(941)] = 14765,
  [SMALL_STATE(942)] = 14769,
  [SMALL_STATE(943)] = 14773,
  [SMALL_STATE(944)] = 14777,
  [SMALL_STATE(945)] = 14781,
  [SMALL_STATE(946)] = 14785,
  [SMALL_STATE(947)] = 14789,
  [SMALL_STATE(948)] = 14793,
  [SMALL_STATE(949)] = 14797,
  [SMALL_STATE(950)] = 14801,
  [SMALL_STATE(951)] = 14805,
  [SMALL_STATE(952)] = 14809,
  [SMALL_STATE(953)] = 14813,
  [SMALL_STATE(954)] = 14817,
  [SMALL_STATE(955)] = 14821,
  [SMALL_STATE(956)] = 14825,
  [SMALL_STATE(957)] = 14829,
  [SMALL_STATE(958)] = 14833,
  [SMALL_STATE(959)] = 14837,
  [SMALL_STATE(960)] = 14841,
  [SMALL_STATE(961)] = 14845,
  [SMALL_STATE(962)] = 14849,
  [SMALL_STATE(963)] = 14853,
  [SMALL_STATE(964)] = 14857,
  [SMALL_STATE(965)] = 14861,
  [SMALL_STATE(966)] = 14865,
  [SMALL_STATE(967)] = 14869,
  [SMALL_STATE(968)] = 14873,
  [SMALL_STATE(969)] = 14877,
  [SMALL_STATE(970)] = 14881,
  [SMALL_STATE(971)] = 14885,
  [SMALL_STATE(972)] = 14889,
  [SMALL_STATE(973)] = 14893,
  [SMALL_STATE(974)] = 14897,
  [SMALL_STATE(975)] = 14901,
  [SMALL_STATE(976)] = 14905,
  [SMALL_STATE(977)] = 14909,
  [SMALL_STATE(978)] = 14913,
  [SMALL_STATE(979)] = 14917,
  [SMALL_STATE(980)] = 14921,
  [SMALL_STATE(981)] = 14925,
  [SMALL_STATE(982)] = 14929,
  [SMALL_STATE(983)] = 14933,
  [SMALL_STATE(984)] = 14937,
  [SMALL_STATE(985)] = 14941,
  [SMALL_STATE(986)] = 14945,
  [SMALL_STATE(987)] = 14949,
  [SMALL_STATE(988)] = 14953,
  [SMALL_STATE(989)] = 14957,
  [SMALL_STATE(990)] = 14961,
  [SMALL_STATE(991)] = 14965,
  [SMALL_STATE(992)] = 14969,
  [SMALL_STATE(993)] = 14973,
  [SMALL_STATE(994)] = 14977,
  [SMALL_STATE(995)] = 14981,
  [SMALL_STATE(996)] = 14985,
  [SMALL_STATE(997)] = 14989,
  [SMALL_STATE(998)] = 14993,
  [SMALL_STATE(999)] = 14997,
  [SMALL_STATE(1000)] = 15001,
  [SMALL_STATE(1001)] = 15005,
  [SMALL_STATE(1002)] = 15009,
  [SMALL_STATE(1003)] = 15013,
  [SMALL_STATE(1004)] = 15017,
  [SMALL_STATE(1005)] = 15021,
  [SMALL_STATE(1006)] = 15025,
  [SMALL_STATE(1007)] = 15029,
  [SMALL_STATE(1008)] = 15033,
  [SMALL_STATE(1009)] = 15037,
  [SMALL_STATE(1010)] = 15041,
  [SMALL_STATE(1011)] = 15045,
  [SMALL_STATE(1012)] = 15049,
  [SMALL_STATE(1013)] = 15053,
  [SMALL_STATE(1014)] = 15057,
  [SMALL_STATE(1015)] = 15061,
  [SMALL_STATE(1016)] = 15065,
  [SMALL_STATE(1017)] = 15069,
  [SMALL_STATE(1018)] = 15073,
  [SMALL_STATE(1019)] = 15077,
  [SMALL_STATE(1020)] = 15081,
  [SMALL_STATE(1021)] = 15085,
  [SMALL_STATE(1022)] = 15089,
  [SMALL_STATE(1023)] = 15093,
  [SMALL_STATE(1024)] = 15097,
  [SMALL_STATE(1025)] = 15101,
  [SMALL_STATE(1026)] = 15105,
  [SMALL_STATE(1027)] = 15109,
  [SMALL_STATE(1028)] = 15113,
  [SMALL_STATE(1029)] = 15117,
  [SMALL_STATE(1030)] = 15121,
  [SMALL_STATE(1031)] = 15125,
  [SMALL_STATE(1032)] = 15129,
  [SMALL_STATE(1033)] = 15133,
  [SMALL_STATE(1034)] = 15137,
  [SMALL_STATE(1035)] = 15141,
  [SMALL_STATE(1036)] = 15145,
  [SMALL_STATE(1037)] = 15149,
  [SMALL_STATE(1038)] = 15153,
  [SMALL_STATE(1039)] = 15157,
  [SMALL_STATE(1040)] = 15161,
  [SMALL_STATE(1041)] = 15165,
  [SMALL_STATE(1042)] = 15169,
  [SMALL_STATE(1043)] = 15173,
  [SMALL_STATE(1044)] = 15177,
  [SMALL_STATE(1045)] = 15181,
  [SMALL_STATE(1046)] = 15185,
  [SMALL_STATE(1047)] = 15189,
  [SMALL_STATE(1048)] = 15193,
  [SMALL_STATE(1049)] = 15197,
  [SMALL_STATE(1050)] = 15201,
  [SMALL_STATE(1051)] = 15205,
  [SMALL_STATE(1052)] = 15209,
  [SMALL_STATE(1053)] = 15213,
  [SMALL_STATE(1054)] = 15217,
  [SMALL_STATE(1055)] = 15221,
  [SMALL_STATE(1056)] = 15225,
  [SMALL_STATE(1057)] = 15229,
  [SMALL_STATE(1058)] = 15233,
  [SMALL_STATE(1059)] = 15237,
  [SMALL_STATE(1060)] = 15241,
  [SMALL_STATE(1061)] = 15245,
  [SMALL_STATE(1062)] = 15249,
  [SMALL_STATE(1063)] = 15253,
  [SMALL_STATE(1064)] = 15257,
  [SMALL_STATE(1065)] = 15261,
  [SMALL_STATE(1066)] = 15265,
  [SMALL_STATE(1067)] = 15269,
  [SMALL_STATE(1068)] = 15273,
  [SMALL_STATE(1069)] = 15277,
  [SMALL_STATE(1070)] = 15281,
  [SMALL_STATE(1071)] = 15285,
  [SMALL_STATE(1072)] = 15289,
  [SMALL_STATE(1073)] = 15293,
  [SMALL_STATE(1074)] = 15297,
  [SMALL_STATE(1075)] = 15301,
  [SMALL_STATE(1076)] = 15305,
  [SMALL_STATE(1077)] = 15309,
  [SMALL_STATE(1078)] = 15313,
  [SMALL_STATE(1079)] = 15317,
  [SMALL_STATE(1080)] = 15321,
  [SMALL_STATE(1081)] = 15325,
  [SMALL_STATE(1082)] = 15329,
  [SMALL_STATE(1083)] = 15333,
  [SMALL_STATE(1084)] = 15337,
  [SMALL_STATE(1085)] = 15341,
  [SMALL_STATE(1086)] = 15345,
  [SMALL_STATE(1087)] = 15349,
  [SMALL_STATE(1088)] = 15353,
  [SMALL_STATE(1089)] = 15357,
  [SMALL_STATE(1090)] = 15361,
  [SMALL_STATE(1091)] = 15365,
  [SMALL_STATE(1092)] = 15369,
  [SMALL_STATE(1093)] = 15373,
  [SMALL_STATE(1094)] = 15377,
  [SMALL_STATE(1095)] = 15381,
  [SMALL_STATE(1096)] = 15385,
  [SMALL_STATE(1097)] = 15389,
  [SMALL_STATE(1098)] = 15393,
  [SMALL_STATE(1099)] = 15397,
  [SMALL_STATE(1100)] = 15401,
  [SMALL_STATE(1101)] = 15405,
  [SMALL_STATE(1102)] = 15409,
  [SMALL_STATE(1103)] = 15413,
  [SMALL_STATE(1104)] = 15417,
  [SMALL_STATE(1105)] = 15421,
  [SMALL_STATE(1106)] = 15425,
  [SMALL_STATE(1107)] = 15429,
  [SMALL_STATE(1108)] = 15433,
  [SMALL_STATE(1109)] = 15437,
  [SMALL_STATE(1110)] = 15441,
  [SMALL_STATE(1111)] = 15445,
  [SMALL_STATE(1112)] = 15449,
  [SMALL_STATE(1113)] = 15453,
  [SMALL_STATE(1114)] = 15457,
  [SMALL_STATE(1115)] = 15461,
  [SMALL_STATE(1116)] = 15465,
  [SMALL_STATE(1117)] = 15469,
  [SMALL_STATE(1118)] = 15473,
  [SMALL_STATE(1119)] = 15477,
  [SMALL_STATE(1120)] = 15481,
  [SMALL_STATE(1121)] = 15485,
  [SMALL_STATE(1122)] = 15489,
  [SMALL_STATE(1123)] = 15493,
  [SMALL_STATE(1124)] = 15497,
  [SMALL_STATE(1125)] = 15501,
  [SMALL_STATE(1126)] = 15505,
  [SMALL_STATE(1127)] = 15509,
  [SMALL_STATE(1128)] = 15513,
  [SMALL_STATE(1129)] = 15517,
  [SMALL_STATE(1130)] = 15521,
  [SMALL_STATE(1131)] = 15525,
  [SMALL_STATE(1132)] = 15529,
  [SMALL_STATE(1133)] = 15533,
  [SMALL_STATE(1134)] = 15537,
  [SMALL_STATE(1135)] = 15541,
  [SMALL_STATE(1136)] = 15545,
  [SMALL_STATE(1137)] = 15549,
  [SMALL_STATE(1138)] = 15553,
  [SMALL_STATE(1139)] = 15557,
  [SMALL_STATE(1140)] = 15561,
  [SMALL_STATE(1141)] = 15565,
  [SMALL_STATE(1142)] = 15569,
  [SMALL_STATE(1143)] = 15573,
  [SMALL_STATE(1144)] = 15577,
  [SMALL_STATE(1145)] = 15581,
  [SMALL_STATE(1146)] = 15585,
  [SMALL_STATE(1147)] = 15589,
  [SMALL_STATE(1148)] = 15593,
  [SMALL_STATE(1149)] = 15597,
  [SMALL_STATE(1150)] = 15601,
  [SMALL_STATE(1151)] = 15605,
  [SMALL_STATE(1152)] = 15609,
  [SMALL_STATE(1153)] = 15613,
  [SMALL_STATE(1154)] = 15617,
  [SMALL_STATE(1155)] = 15621,
  [SMALL_STATE(1156)] = 15625,
  [SMALL_STATE(1157)] = 15629,
  [SMALL_STATE(1158)] = 15633,
  [SMALL_STATE(1159)] = 15637,
  [SMALL_STATE(1160)] = 15641,
  [SMALL_STATE(1161)] = 15645,
  [SMALL_STATE(1162)] = 15649,
  [SMALL_STATE(1163)] = 15653,
  [SMALL_STATE(1164)] = 15657,
  [SMALL_STATE(1165)] = 15661,
  [SMALL_STATE(1166)] = 15665,
  [SMALL_STATE(1167)] = 15669,
  [SMALL_STATE(1168)] = 15673,
  [SMALL_STATE(1169)] = 15677,
  [SMALL_STATE(1170)] = 15681,
  [SMALL_STATE(1171)] = 15685,
  [SMALL_STATE(1172)] = 15689,
  [SMALL_STATE(1173)] = 15693,
  [SMALL_STATE(1174)] = 15697,
  [SMALL_STATE(1175)] = 15701,
  [SMALL_STATE(1176)] = 15705,
  [SMALL_STATE(1177)] = 15709,
  [SMALL_STATE(1178)] = 15713,
  [SMALL_STATE(1179)] = 15717,
  [SMALL_STATE(1180)] = 15721,
  [SMALL_STATE(1181)] = 15725,
  [SMALL_STATE(1182)] = 15729,
  [SMALL_STATE(1183)] = 15733,
  [SMALL_STATE(1184)] = 15737,
  [SMALL_STATE(1185)] = 15741,
  [SMALL_STATE(1186)] = 15745,
  [SMALL_STATE(1187)] = 15749,
  [SMALL_STATE(1188)] = 15753,
  [SMALL_STATE(1189)] = 15757,
  [SMALL_STATE(1190)] = 15761,
  [SMALL_STATE(1191)] = 15765,
  [SMALL_STATE(1192)] = 15769,
  [SMALL_STATE(1193)] = 15773,
  [SMALL_STATE(1194)] = 15777,
  [SMALL_STATE(1195)] = 15781,
  [SMALL_STATE(1196)] = 15785,
  [SMALL_STATE(1197)] = 15789,
  [SMALL_STATE(1198)] = 15793,
  [SMALL_STATE(1199)] = 15797,
  [SMALL_STATE(1200)] = 15801,
  [SMALL_STATE(1201)] = 15805,
  [SMALL_STATE(1202)] = 15809,
  [SMALL_STATE(1203)] = 15813,
  [SMALL_STATE(1204)] = 15817,
  [SMALL_STATE(1205)] = 15821,
  [SMALL_STATE(1206)] = 15825,
  [SMALL_STATE(1207)] = 15829,
  [SMALL_STATE(1208)] = 15833,
  [SMALL_STATE(1209)] = 15837,
  [SMALL_STATE(1210)] = 15841,
  [SMALL_STATE(1211)] = 15845,
  [SMALL_STATE(1212)] = 15849,
  [SMALL_STATE(1213)] = 15853,
  [SMALL_STATE(1214)] = 15857,
  [SMALL_STATE(1215)] = 15861,
  [SMALL_STATE(1216)] = 15865,
  [SMALL_STATE(1217)] = 15869,
  [SMALL_STATE(1218)] = 15873,
  [SMALL_STATE(1219)] = 15877,
  [SMALL_STATE(1220)] = 15881,
  [SMALL_STATE(1221)] = 15885,
  [SMALL_STATE(1222)] = 15889,
  [SMALL_STATE(1223)] = 15893,
  [SMALL_STATE(1224)] = 15897,
  [SMALL_STATE(1225)] = 15901,
  [SMALL_STATE(1226)] = 15905,
  [SMALL_STATE(1227)] = 15909,
  [SMALL_STATE(1228)] = 15913,
  [SMALL_STATE(1229)] = 15917,
  [SMALL_STATE(1230)] = 15921,
  [SMALL_STATE(1231)] = 15925,
  [SMALL_STATE(1232)] = 15929,
  [SMALL_STATE(1233)] = 15933,
  [SMALL_STATE(1234)] = 15937,
  [SMALL_STATE(1235)] = 15941,
  [SMALL_STATE(1236)] = 15945,
  [SMALL_STATE(1237)] = 15949,
  [SMALL_STATE(1238)] = 15953,
  [SMALL_STATE(1239)] = 15957,
  [SMALL_STATE(1240)] = 15961,
  [SMALL_STATE(1241)] = 15965,
  [SMALL_STATE(1242)] = 15969,
  [SMALL_STATE(1243)] = 15973,
  [SMALL_STATE(1244)] = 15977,
  [SMALL_STATE(1245)] = 15981,
  [SMALL_STATE(1246)] = 15985,
  [SMALL_STATE(1247)] = 15989,
  [SMALL_STATE(1248)] = 15993,
  [SMALL_STATE(1249)] = 15997,
  [SMALL_STATE(1250)] = 16001,
  [SMALL_STATE(1251)] = 16005,
  [SMALL_STATE(1252)] = 16009,
  [SMALL_STATE(1253)] = 16013,
  [SMALL_STATE(1254)] = 16017,
  [SMALL_STATE(1255)] = 16021,
  [SMALL_STATE(1256)] = 16025,
  [SMALL_STATE(1257)] = 16029,
  [SMALL_STATE(1258)] = 16033,
  [SMALL_STATE(1259)] = 16037,
  [SMALL_STATE(1260)] = 16041,
  [SMALL_STATE(1261)] = 16045,
  [SMALL_STATE(1262)] = 16049,
  [SMALL_STATE(1263)] = 16053,
  [SMALL_STATE(1264)] = 16057,
  [SMALL_STATE(1265)] = 16061,
  [SMALL_STATE(1266)] = 16065,
  [SMALL_STATE(1267)] = 16069,
  [SMALL_STATE(1268)] = 16073,
  [SMALL_STATE(1269)] = 16077,
  [SMALL_STATE(1270)] = 16081,
  [SMALL_STATE(1271)] = 16085,
  [SMALL_STATE(1272)] = 16089,
  [SMALL_STATE(1273)] = 16093,
  [SMALL_STATE(1274)] = 16097,
  [SMALL_STATE(1275)] = 16101,
  [SMALL_STATE(1276)] = 16105,
  [SMALL_STATE(1277)] = 16109,
  [SMALL_STATE(1278)] = 16113,
  [SMALL_STATE(1279)] = 16117,
  [SMALL_STATE(1280)] = 16121,
  [SMALL_STATE(1281)] = 16125,
  [SMALL_STATE(1282)] = 16129,
  [SMALL_STATE(1283)] = 16133,
  [SMALL_STATE(1284)] = 16137,
  [SMALL_STATE(1285)] = 16141,
  [SMALL_STATE(1286)] = 16145,
  [SMALL_STATE(1287)] = 16149,
  [SMALL_STATE(1288)] = 16153,
  [SMALL_STATE(1289)] = 16157,
  [SMALL_STATE(1290)] = 16161,
  [SMALL_STATE(1291)] = 16165,
  [SMALL_STATE(1292)] = 16169,
  [SMALL_STATE(1293)] = 16173,
  [SMALL_STATE(1294)] = 16177,
  [SMALL_STATE(1295)] = 16181,
  [SMALL_STATE(1296)] = 16185,
  [SMALL_STATE(1297)] = 16189,
  [SMALL_STATE(1298)] = 16193,
  [SMALL_STATE(1299)] = 16197,
  [SMALL_STATE(1300)] = 16201,
  [SMALL_STATE(1301)] = 16205,
  [SMALL_STATE(1302)] = 16209,
  [SMALL_STATE(1303)] = 16213,
  [SMALL_STATE(1304)] = 16217,
  [SMALL_STATE(1305)] = 16221,
  [SMALL_STATE(1306)] = 16225,
  [SMALL_STATE(1307)] = 16229,
  [SMALL_STATE(1308)] = 16233,
  [SMALL_STATE(1309)] = 16237,
  [SMALL_STATE(1310)] = 16241,
  [SMALL_STATE(1311)] = 16245,
  [SMALL_STATE(1312)] = 16249,
  [SMALL_STATE(1313)] = 16253,
  [SMALL_STATE(1314)] = 16257,
  [SMALL_STATE(1315)] = 16261,
  [SMALL_STATE(1316)] = 16265,
  [SMALL_STATE(1317)] = 16269,
  [SMALL_STATE(1318)] = 16273,
  [SMALL_STATE(1319)] = 16277,
  [SMALL_STATE(1320)] = 16281,
  [SMALL_STATE(1321)] = 16285,
  [SMALL_STATE(1322)] = 16289,
  [SMALL_STATE(1323)] = 16293,
  [SMALL_STATE(1324)] = 16297,
  [SMALL_STATE(1325)] = 16301,
  [SMALL_STATE(1326)] = 16305,
  [SMALL_STATE(1327)] = 16309,
  [SMALL_STATE(1328)] = 16313,
  [SMALL_STATE(1329)] = 16317,
  [SMALL_STATE(1330)] = 16321,
  [SMALL_STATE(1331)] = 16325,
  [SMALL_STATE(1332)] = 16329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(451),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(464),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(684),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1211),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(652),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(416),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(417),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1332),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1331),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(455),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1330),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(813),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 46),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 46),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(457),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 46),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 38),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1026),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 56),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 57),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 2), SHIFT_REPEAT(1318),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 38),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 26),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 107),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 38),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 37),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 38),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 23),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 56),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 84),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 97),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(453),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_add_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_add_repeat1, 2), SHIFT_REPEAT(776),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 56),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(833),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 56),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 46),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(576),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 46),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 26),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 43),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 101),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 111),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 112),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(771),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 96),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 116),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(466),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 42),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 49),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 48),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 47),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 72),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 59),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 19),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 44),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 62),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 61),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 35),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 3, .production_id = 46),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 72),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 45),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 98),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 26),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 56),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 36),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 71),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 50),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 75),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 42),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 42),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 99),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 60),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 73),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 112),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 116),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 45),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 114),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 38),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 111),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 45),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 76),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 19),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 100),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 26),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 77),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 113),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 115),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 42),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 76),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 94),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 93),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 92),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 56),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 91),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 42),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 107),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 78),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 79),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 67),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 67),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 71),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 110),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 96),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 109),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 97),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 84),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 108),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 50),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 80),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 46),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 102),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 19),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 103),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 51),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 52),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 53),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 104),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 82),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 38),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 83),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 54),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 58),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 55),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 90),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 105),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 106),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 101),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 86),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 87),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 88),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1177),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(886),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1000),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(998),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(990),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1255),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1257),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(430),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(963),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(871),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 23),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(736),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(683),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(425),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1309),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 46),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1217),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(152),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1264),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(60),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(733),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1250),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1248),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(820),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(749),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(715),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(411),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(827),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1229),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(410),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(552),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(823),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1213),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1180),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1198),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1244),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1237),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1220),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1214),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1212),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1207),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1209),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1078),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 95),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1060),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1017),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(889),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 22),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 63),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 70),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 70),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 69),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 41),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 68),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 64),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 65),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 66),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 74),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 10),
  [2718] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
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
