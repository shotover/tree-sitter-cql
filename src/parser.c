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
#define STATE_COUNT 1347
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 307
#define ALIAS_COUNT 32
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 126

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
  aux_sym_clustering_order_token1 = 137,
  aux_sym_user_super_user_token1 = 138,
  aux_sym_alter_table_add_token1 = 139,
  aux_sym_alter_table_drop_compact_storage_token1 = 140,
  aux_sym_alter_table_drop_compact_storage_token2 = 141,
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
  sym_clustering_order = 248,
  sym_create_trigger = 249,
  sym_trigger_name = 250,
  sym_trigger_class = 251,
  sym_create_type = 252,
  sym_create_user = 253,
  sym_user_name = 254,
  sym_user_with = 255,
  sym_user_password = 256,
  sym_user_super_user = 257,
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
  anon_alias_sym_assignment_operand = 309,
  anon_alias_sym_column = 310,
  anon_alias_sym_data_type = 311,
  anon_alias_sym_entry = 312,
  anon_alias_sym_finalfunc = 313,
  anon_alias_sym_full = 314,
  anon_alias_sym_function = 315,
  anon_alias_sym_function_name = 316,
  anon_alias_sym_hash_key = 317,
  anon_alias_sym_index = 318,
  anon_alias_sym_key = 319,
  anon_alias_sym_keyspace = 320,
  anon_alias_sym_language = 321,
  anon_alias_sym_limit_value = 322,
  anon_alias_sym_login = 323,
  anon_alias_sym_materialized_view = 324,
  anon_alias_sym_option = 325,
  anon_alias_sym_param_name = 326,
  anon_alias_sym_partition_key = 327,
  anon_alias_sym_password = 328,
  anon_alias_sym_primary_key = 329,
  anon_alias_sym_role = 330,
  anon_alias_sym_sfunc = 331,
  anon_alias_sym_table = 332,
  anon_alias_sym_time = 333,
  anon_alias_sym_trigger = 334,
  anon_alias_sym_ttl = 335,
  anon_alias_sym_type = 336,
  anon_alias_sym_user = 337,
  anon_alias_sym_value = 338,
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
  [aux_sym_clustering_order_token1] = "CLUSTERING",
  [aux_sym_user_super_user_token1] = "NOSUPERUSER",
  [aux_sym_alter_table_add_token1] = "ADD",
  [aux_sym_alter_table_drop_compact_storage_token1] = "COMPACT",
  [aux_sym_alter_table_drop_compact_storage_token2] = "STORAGE",
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
  [anon_alias_sym_option] = "option",
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
  [aux_sym_clustering_order_token1] = aux_sym_clustering_order_token1,
  [aux_sym_user_super_user_token1] = aux_sym_user_super_user_token1,
  [aux_sym_alter_table_add_token1] = aux_sym_alter_table_add_token1,
  [aux_sym_alter_table_drop_compact_storage_token1] = aux_sym_alter_table_drop_compact_storage_token1,
  [aux_sym_alter_table_drop_compact_storage_token2] = aux_sym_alter_table_drop_compact_storage_token2,
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
  [anon_alias_sym_option] = anon_alias_sym_option,
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
    [0] = anon_alias_sym_option,
  },
  [43] = {
    [0] = anon_alias_sym_param_name,
  },
  [44] = {
    [5] = anon_alias_sym_role,
  },
  [45] = {
    [1] = anon_alias_sym_password,
  },
  [46] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [47] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [48] = {
    [1] = anon_alias_sym_column,
  },
  [49] = {
    [2] = anon_alias_sym_password,
  },
  [50] = {
    [2] = anon_alias_sym_login,
  },
  [51] = {
    [2] = anon_alias_sym_user,
  },
  [52] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [54] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [55] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [56] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [57] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [58] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [59] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [60] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [61] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [62] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [63] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [64] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [65] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [66] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [67] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [68] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [69] = {
    [2] = anon_alias_sym_key,
  },
  [70] = {
    [2] = anon_alias_sym_entry,
  },
  [71] = {
    [2] = anon_alias_sym_full,
  },
  [72] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [73] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [74] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [75] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [76] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [77] = {
    [0] = anon_alias_sym_primary_key,
  },
  [78] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [79] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
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
    [4] = anon_alias_sym_column,
  },
  [86] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [87] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [88] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [89] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [90] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [91] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [92] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [93] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [94] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [95] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [96] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [97] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [98] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [99] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [100] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [101] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [102] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [103] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [104] = {
    [0] = anon_alias_sym_hash_key,
  },
  [105] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [106] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [107] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [108] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [109] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [110] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [111] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [112] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [113] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [114] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [115] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [116] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [117] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [118] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [119] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [120] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [121] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [122] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [123] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [124] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [125] = {
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
          lookahead == 'd') ADVANCE(762);
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
          lookahead == 'e') ADVANCE(766);
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
          lookahead == 'e') ADVANCE(765);
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
          lookahead == 'r') ADVANCE(761);
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
          lookahead == 't') ADVANCE(763);
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
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (lookahead == 'X') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
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
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
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
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
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
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
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
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
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
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
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
          lookahead == 't') ADVANCE(764);
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
  [6] = {.lex_state = 552},
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
  [60] = {.lex_state = 552},
  [61] = {.lex_state = 552},
  [62] = {.lex_state = 552},
  [63] = {.lex_state = 552},
  [64] = {.lex_state = 552},
  [65] = {.lex_state = 552},
  [66] = {.lex_state = 552},
  [67] = {.lex_state = 552},
  [68] = {.lex_state = 552},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 552},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 552},
  [73] = {.lex_state = 552},
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
  [93] = {.lex_state = 552},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 552},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 552},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 553},
  [102] = {.lex_state = 552},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 552},
  [108] = {.lex_state = 552},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 552},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 552},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 552},
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
  [171] = {.lex_state = 552},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 552},
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
  [203] = {.lex_state = 552},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 552},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 552},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 552},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 552},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 552},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1},
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
  [403] = {.lex_state = 552},
  [404] = {.lex_state = 552},
  [405] = {.lex_state = 552},
  [406] = {.lex_state = 552},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 552},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 552},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 552},
  [421] = {.lex_state = 552},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 42},
  [424] = {.lex_state = 41},
  [425] = {.lex_state = 552},
  [426] = {.lex_state = 552},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 552},
  [429] = {.lex_state = 552},
  [430] = {.lex_state = 552},
  [431] = {.lex_state = 552},
  [432] = {.lex_state = 552},
  [433] = {.lex_state = 552},
  [434] = {.lex_state = 552},
  [435] = {.lex_state = 552},
  [436] = {.lex_state = 41},
  [437] = {.lex_state = 552},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 552},
  [440] = {.lex_state = 552},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 18},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 552},
  [447] = {.lex_state = 13},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 552},
  [452] = {.lex_state = 14},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 14},
  [456] = {.lex_state = 41},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 12},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 552},
  [466] = {.lex_state = 24},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 10},
  [475] = {.lex_state = 10},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 17},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 17},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 10},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 17},
  [502] = {.lex_state = 17},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 17},
  [509] = {.lex_state = 21},
  [510] = {.lex_state = 17},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 17},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 17},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 17},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 17},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 17},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 26},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 22},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 553},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 20},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 16},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 10},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 20},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 10},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 25},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 553},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 10},
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
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 553},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 10},
  [671] = {.lex_state = 553},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 20},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 13},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 20},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 20},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 20},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 20},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 20},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 20},
  [795] = {.lex_state = 27},
  [796] = {.lex_state = 27},
  [797] = {.lex_state = 20},
  [798] = {.lex_state = 13},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 10},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 20},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 20},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 20},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 20},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 10},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 552},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 10},
  [832] = {.lex_state = 27},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 13},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 10},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 13},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 553},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 10},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 10},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 10},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 10},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 10},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 10},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 10},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 10},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 10},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 10},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 553},
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
  [971] = {.lex_state = 10},
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
  [982] = {.lex_state = 13},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 552},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 10},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 10},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 10},
  [1007] = {.lex_state = 10},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 10},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 552},
  [1015] = {.lex_state = 10},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 10},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 10},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 10},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 10},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 10},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 10},
  [1047] = {.lex_state = 10},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 553},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 10},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 10},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 10},
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
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 10},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 13},
  [1094] = {.lex_state = 13},
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
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 10},
  [1111] = {.lex_state = 10},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 552},
  [1115] = {.lex_state = 552},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 10},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 0},
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
  [1153] = {.lex_state = 553},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 10},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 552},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 10},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 10},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 10},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 553},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 10},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 553},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 10},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 552},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 0},
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
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 10},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 10},
  [1239] = {.lex_state = 10},
  [1240] = {.lex_state = 552},
  [1241] = {.lex_state = 552},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 10},
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
  [1257] = {.lex_state = 552},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 553},
  [1261] = {.lex_state = 553},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 10},
  [1266] = {.lex_state = 553},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 10},
  [1270] = {.lex_state = 552},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 10},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
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
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 553},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 552},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 10},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 10},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 10},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 10},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 10},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 10},
  [1323] = {.lex_state = 10},
  [1324] = {.lex_state = 10},
  [1325] = {.lex_state = 10},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 10},
  [1330] = {.lex_state = 553},
  [1331] = {.lex_state = 10},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 10},
  [1334] = {.lex_state = 41},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 10},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 10},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 553},
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
    [aux_sym_clustering_order_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1341),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(279),
    [sym_delete_statement] = STATE(279),
    [sym_begin_batch] = STATE(541),
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
    STATE(541), 1,
      sym_begin_batch,
    STATE(3), 2,
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
    STATE(541), 1,
      sym_begin_batch,
    STATE(3), 2,
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
  [320] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(964), 1,
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
  [390] = 3,
    STATE(69), 1,
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
  [425] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1124), 1,
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
  [495] = 3,
    STATE(69), 1,
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
  [530] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(944), 1,
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
    STATE(947), 1,
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
    STATE(855), 1,
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
  [670] = 3,
    STATE(69), 1,
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
  [705] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(774), 1,
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
    STATE(1168), 1,
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
    STATE(995), 1,
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
    STATE(1048), 1,
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
  [880] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1058), 1,
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
    STATE(1010), 1,
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
  [985] = 3,
    STATE(69), 1,
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
  [1020] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(653), 1,
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
    STATE(1077), 1,
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
    STATE(1082), 1,
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
    STATE(1083), 1,
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
    STATE(568), 1,
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
    STATE(956), 1,
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
  [1265] = 3,
    STATE(69), 1,
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
  [1300] = 3,
    STATE(69), 1,
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
  [1335] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(933), 1,
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
    STATE(69), 1,
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
  [1405] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(592), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1025), 1,
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
  [1510] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(808), 1,
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
    STATE(69), 1,
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
  [1580] = 3,
    STATE(69), 1,
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
  [1615] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(939), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(886), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(516), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(387), 1,
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
    STATE(69), 1,
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
  [1790] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(150), 1,
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
  [1860] = 3,
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
  [1895] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(999), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(230), 1,
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
  [2000] = 3,
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
  [2035] = 3,
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
  [2070] = 2,
    STATE(647), 1,
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
    STATE(815), 1,
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
  [2134] = 2,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(89), 24,
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
  [2164] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(93), 23,
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
  [2196] = 1,
    ACTIONS(93), 24,
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
  [2223] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(61), 1,
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
  [2254] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(68), 1,
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
  [2312] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2339] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(63), 1,
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
  [2370] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(61), 1,
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
  [2401] = 3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2431] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(93), 1,
      sym_where_spec,
    STATE(116), 1,
      sym_order_spec,
    STATE(227), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2471] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2497] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_where_spec,
    STATE(102), 1,
      sym_order_spec,
    STATE(215), 1,
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
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(107), 1,
      sym_order_spec,
    STATE(211), 1,
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
  [2607] = 1,
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
  [2632] = 1,
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
  [2657] = 1,
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
  [2682] = 1,
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
  [2707] = 1,
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
  [2732] = 1,
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
  [2757] = 1,
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
  [2782] = 1,
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
  [2807] = 1,
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
  [2832] = 1,
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
  [2857] = 8,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(115), 1,
      sym_table_option_item,
    STATE(182), 1,
      sym_table_options,
    STATE(341), 1,
      sym_clustering_order,
    STATE(1067), 1,
      sym_table_option_name,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(157), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2896] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    STATE(87), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2925] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(167), 20,
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
  [2954] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    STATE(108), 1,
      sym_order_spec,
    STATE(203), 1,
      sym_limit_spec,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2988] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3012] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3036] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(116), 1,
      sym_order_spec,
    STATE(227), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3070] = 1,
    ACTIONS(177), 21,
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
  [3094] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(102), 1,
      sym_order_spec,
    STATE(215), 1,
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
  [3128] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3152] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(181), 18,
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
  [3179] = 1,
    ACTIONS(186), 20,
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
  [3202] = 2,
    ACTIONS(190), 1,
      anon_sym_DOT,
    ACTIONS(188), 19,
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
  [3227] = 2,
    ACTIONS(194), 1,
      aux_sym_relation_element_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3252] = 2,
    ACTIONS(198), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3277] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3302] = 2,
    ACTIONS(206), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(204), 18,
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
  [3327] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    STATE(203), 1,
      sym_limit_spec,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3355] = 3,
    ACTIONS(210), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(208), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3381] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(213), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3407] = 1,
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
  [3429] = 4,
    ACTIONS(221), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(366), 1,
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
  [3457] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(227), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3485] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(227), 1,
      aux_sym_select_statement_token4,
    STATE(225), 1,
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
  [3513] = 3,
    STATE(272), 1,
      sym_user_super_user,
    ACTIONS(231), 2,
      aux_sym_role_with_option_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3539] = 1,
    ACTIONS(233), 19,
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
  [3561] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(644), 1,
      sym_expression,
    STATE(1275), 1,
      sym_expression_list,
    STATE(716), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3599] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(247), 1,
      aux_sym_delete_statement_token2,
    STATE(325), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3627] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3649] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3671] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(104), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(253), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3697] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(215), 1,
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
  [3725] = 2,
    ACTIONS(257), 1,
      aux_sym_privilege_token2,
    ACTIONS(255), 18,
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
  [3749] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(261), 1,
      aux_sym_delete_statement_token2,
    STATE(320), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3777] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(644), 1,
      sym_expression,
    STATE(1155), 1,
      sym_expression_list,
    STATE(716), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3815] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3837] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3859] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3881] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3903] = 1,
    ACTIONS(269), 18,
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
  [3924] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(317), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3949] = 3,
    ACTIONS(277), 1,
      aux_sym_delete_statement_token2,
    STATE(383), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3974] = 1,
    ACTIONS(279), 18,
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
  [3995] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4020] = 1,
    ACTIONS(285), 18,
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
  [4041] = 1,
    ACTIONS(287), 18,
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
  [4062] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4087] = 1,
    ACTIONS(293), 18,
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
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4108] = 1,
    ACTIONS(295), 18,
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
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4129] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_relation_element_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4154] = 1,
    ACTIONS(301), 18,
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
  [4175] = 3,
    ACTIONS(305), 1,
      aux_sym_delete_statement_token2,
    STATE(332), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4200] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4225] = 3,
    ACTIONS(313), 1,
      aux_sym_delete_statement_token2,
    STATE(260), 1,
      sym_if_spec,
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
  [4250] = 3,
    ACTIONS(317), 1,
      aux_sym_create_index_token3,
    ACTIONS(319), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4275] = 3,
    ACTIONS(323), 1,
      aux_sym_list_roles_token2,
    ACTIONS(325), 1,
      aux_sym_list_roles_token3,
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
  [4300] = 1,
    ACTIONS(208), 18,
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
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4321] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4342] = 1,
    ACTIONS(329), 18,
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
  [4363] = 1,
    ACTIONS(331), 18,
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
  [4384] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(349), 1,
      sym_materialized_view_options,
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
  [4409] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4434] = 3,
    ACTIONS(342), 1,
      aux_sym_delete_statement_token2,
    STATE(254), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4459] = 3,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(344), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4484] = 1,
    ACTIONS(255), 18,
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
  [4505] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4530] = 3,
    ACTIONS(354), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4555] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(401), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4580] = 2,
    ACTIONS(360), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(358), 17,
      ts_builtin_sym_end,
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
  [4603] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(348), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4628] = 3,
    ACTIONS(366), 1,
      aux_sym_materialized_view_options_token1,
    STATE(285), 1,
      sym_role_with,
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
  [4653] = 3,
    ACTIONS(370), 1,
      aux_sym_relation_elements_token1,
    STATE(163), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4678] = 3,
    ACTIONS(374), 1,
      aux_sym_materialized_view_options_token1,
    STATE(245), 1,
      sym_with_element,
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
  [4703] = 3,
    ACTIONS(378), 1,
      aux_sym_delete_statement_token2,
    STATE(305), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4728] = 3,
    ACTIONS(382), 1,
      aux_sym_relation_elements_token1,
    STATE(188), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4753] = 3,
    ACTIONS(386), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
      sym_if_spec,
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
  [4778] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4799] = 3,
    ACTIONS(366), 1,
      aux_sym_materialized_view_options_token1,
    STATE(247), 1,
      sym_role_with,
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
  [4824] = 3,
    ACTIONS(394), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [4849] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(173), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(396), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4874] = 3,
    ACTIONS(400), 1,
      aux_sym_delete_statement_token2,
    STATE(367), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4899] = 2,
    ACTIONS(404), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(402), 17,
      ts_builtin_sym_end,
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
  [4922] = 3,
    ACTIONS(408), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
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
  [4947] = 3,
    ACTIONS(374), 1,
      aux_sym_materialized_view_options_token1,
    STATE(306), 1,
      sym_with_element,
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
  [4972] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(288), 1,
      sym_materialized_view_options,
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
  [4997] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(343), 1,
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
  [5022] = 8,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(728), 1,
      sym_expression,
    STATE(716), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5057] = 1,
    ACTIONS(417), 18,
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
  [5078] = 3,
    ACTIONS(421), 1,
      aux_sym_relation_elements_token1,
    STATE(173), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5103] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(277), 1,
      sym_materialized_view_options,
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
  [5128] = 1,
    ACTIONS(426), 18,
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
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5149] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(274), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5174] = 3,
    ACTIONS(366), 1,
      aux_sym_materialized_view_options_token1,
    STATE(310), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5199] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5224] = 1,
    ACTIONS(434), 18,
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
  [5245] = 3,
    ACTIONS(438), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5270] = 3,
    ACTIONS(443), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(441), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5295] = 3,
    ACTIONS(447), 1,
      aux_sym_clustering_order_token1,
    STATE(268), 1,
      sym_clustering_order,
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
  [5320] = 3,
    ACTIONS(451), 1,
      aux_sym_delete_statement_token2,
    STATE(363), 1,
      sym_if_spec,
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
  [5345] = 3,
    ACTIONS(455), 1,
      aux_sym_delete_statement_token2,
    STATE(380), 1,
      sym_if_spec,
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
  [5370] = 3,
    ACTIONS(443), 1,
      aux_sym_relation_elements_token1,
    STATE(181), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5395] = 3,
    ACTIONS(461), 1,
      aux_sym_delete_statement_token2,
    STATE(299), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5420] = 1,
    ACTIONS(463), 18,
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
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5441] = 3,
    ACTIONS(382), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(465), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5466] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5491] = 1,
    ACTIONS(469), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5512] = 3,
    ACTIONS(473), 1,
      aux_sym_delete_statement_token2,
    STATE(381), 1,
      sym_if_spec,
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
  [5537] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(373), 1,
      sym_using_ttl_timestamp,
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
  [5562] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(270), 1,
      sym_using_ttl_timestamp,
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
  [5587] = 3,
    ACTIONS(481), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
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
  [5612] = 3,
    ACTIONS(273), 1,
      aux_sym_materialized_view_options_token1,
    STATE(249), 1,
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
  [5637] = 3,
    ACTIONS(487), 1,
      aux_sym_delete_statement_token2,
    STATE(286), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5662] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_relation_element_repeat1,
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
  [5687] = 3,
    ACTIONS(493), 1,
      aux_sym_delete_statement_token2,
    STATE(284), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5712] = 2,
    ACTIONS(497), 1,
      anon_sym_DOT,
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
  [5734] = 2,
    ACTIONS(501), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5756] = 2,
    ACTIONS(505), 1,
      aux_sym_materialized_view_options_token1,
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
  [5778] = 2,
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
  [5800] = 2,
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
  [5822] = 1,
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
  [5842] = 1,
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
  [5862] = 2,
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
  [5884] = 1,
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
  [5904] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5924] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5944] = 1,
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
  [5964] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5986] = 1,
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
  [6006] = 2,
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
  [6028] = 2,
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
  [6050] = 2,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(535), 1,
      aux_sym_relation_elements_token1,
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
  [6094] = 2,
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
  [6116] = 2,
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
  [6138] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6158] = 1,
    ACTIONS(436), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6200] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6222] = 2,
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
  [6244] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6266] = 2,
    ACTIONS(565), 1,
      aux_sym_select_statement_token4,
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
  [6288] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_apply_batch_token1,
  [6308] = 2,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
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
  [6330] = 1,
    ACTIONS(569), 17,
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
  [6350] = 2,
    ACTIONS(573), 1,
      aux_sym_relation_elements_token1,
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
  [6372] = 1,
    ACTIONS(575), 17,
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
  [6392] = 1,
    ACTIONS(577), 17,
      ts_builtin_sym_end,
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
  [6412] = 2,
    ACTIONS(581), 1,
      anon_sym_DOT,
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
  [6434] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6454] = 2,
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
  [6476] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6498] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6520] = 2,
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
  [6542] = 1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6562] = 2,
    ACTIONS(605), 1,
      aux_sym_list_roles_token3,
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
  [6584] = 1,
    ACTIONS(607), 17,
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
  [6604] = 2,
    ACTIONS(611), 1,
      aux_sym_list_roles_token2,
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
  [6626] = 1,
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
  [6645] = 9,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(761), 1,
      sym_constant,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(521), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6680] = 1,
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
  [6699] = 1,
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
  [6718] = 1,
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
  [6737] = 1,
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
  [6756] = 1,
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
  [6775] = 1,
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
  [6794] = 1,
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
  [6813] = 1,
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
  [6832] = 1,
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
  [6851] = 1,
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
  [6870] = 1,
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
  [6889] = 1,
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
  [6908] = 1,
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
  [6927] = 1,
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
  [6946] = 1,
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
  [6965] = 1,
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
  [6984] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7003] = 1,
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
  [7022] = 1,
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
  [7041] = 1,
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
  [7060] = 1,
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
  [7079] = 1,
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
  [7098] = 1,
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
  [7117] = 1,
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
  [7136] = 1,
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
  [7155] = 1,
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
  [7174] = 1,
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
  [7193] = 1,
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
  [7212] = 1,
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
  [7231] = 1,
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
  [7250] = 1,
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
  [7269] = 1,
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
  [7288] = 1,
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
  [7307] = 1,
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
  [7326] = 1,
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
  [7345] = 2,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(681), 15,
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
  [7366] = 1,
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
  [7385] = 1,
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
  [7404] = 1,
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
  [7423] = 1,
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
  [7442] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7461] = 1,
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
  [7480] = 1,
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
  [7499] = 1,
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
  [7518] = 1,
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
  [7537] = 1,
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
  [7556] = 1,
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
  [7575] = 1,
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
  [7594] = 1,
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
  [7613] = 1,
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
  [7632] = 1,
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
  [7651] = 1,
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
  [7670] = 1,
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
  [7689] = 1,
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
  [7708] = 1,
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
  [7727] = 1,
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
  [7746] = 1,
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
  [7765] = 1,
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
  [7784] = 1,
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
  [7803] = 1,
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
  [7822] = 1,
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
  [7841] = 1,
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
  [7860] = 1,
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
  [7879] = 1,
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
  [7898] = 1,
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
  [7917] = 1,
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
  [7936] = 1,
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
  [7955] = 1,
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
  [7974] = 1,
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
  [7993] = 1,
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
  [8012] = 1,
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
  [8031] = 1,
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
  [8050] = 1,
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
  [8069] = 1,
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
  [8088] = 1,
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
  [8107] = 1,
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
  [8126] = 1,
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
  [8145] = 1,
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
  [8164] = 1,
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
  [8183] = 1,
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
  [8202] = 1,
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
  [8221] = 1,
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
  [8240] = 1,
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
  [8259] = 1,
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
  [8278] = 1,
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
  [8297] = 1,
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
  [8316] = 1,
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
  [8335] = 1,
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
  [8354] = 1,
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
  [8373] = 1,
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
  [8392] = 1,
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
  [8411] = 1,
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
  [8430] = 1,
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
  [8449] = 1,
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
  [8468] = 1,
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
  [8487] = 1,
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
  [8506] = 1,
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
  [8525] = 1,
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
  [8544] = 1,
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
  [8563] = 1,
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
  [8582] = 1,
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
  [8601] = 1,
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
  [8620] = 1,
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
  [8639] = 1,
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
  [8658] = 1,
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
  [8677] = 1,
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
  [8696] = 1,
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
  [8715] = 1,
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
  [8734] = 1,
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
  [8753] = 1,
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
  [8772] = 1,
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
  [8791] = 1,
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
  [8810] = 1,
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
  [8829] = 1,
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
  [8848] = 1,
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
  [8867] = 1,
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
  [8886] = 1,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8905] = 1,
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
  [8924] = 1,
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
  [8943] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8962] = 1,
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
  [8981] = 1,
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
  [9000] = 1,
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
  [9019] = 1,
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
  [9038] = 1,
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
  [9057] = 1,
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
  [9076] = 1,
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
  [9095] = 1,
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
  [9114] = 1,
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
  [9133] = 1,
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
  [9152] = 1,
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
  [9171] = 1,
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
  [9190] = 1,
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
  [9209] = 1,
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
  [9228] = 1,
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
  [9247] = 1,
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
  [9266] = 1,
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
  [9285] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9304] = 1,
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
  [9323] = 1,
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
  [9342] = 1,
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
  [9361] = 1,
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
  [9380] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9399] = 1,
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
  [9418] = 1,
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
  [9437] = 1,
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
  [9456] = 1,
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
  [9475] = 1,
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
  [9494] = 1,
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
  [9513] = 1,
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
  [9532] = 1,
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
  [9551] = 1,
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
  [9570] = 1,
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
  [9589] = 1,
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
  [9608] = 1,
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
  [9627] = 1,
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
  [9646] = 1,
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
  [9665] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9684] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9703] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(395), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9731] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(338), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9759] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(391), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9787] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(294), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9815] = 1,
    ACTIONS(893), 15,
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
  [9833] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(251), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9861] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(388), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9889] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(329), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9917] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(765), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9945] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(323), 1,
      sym_init_cond_definition,
    STATE(161), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9973] = 8,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(895), 1,
      anon_sym_STAR,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1021), 1,
      sym_function_args,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(654), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10004] = 9,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(636), 1,
      sym_init_cond_hash_item,
    STATE(640), 1,
      sym_init_cond_list,
    STATE(641), 1,
      sym_constant,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10037] = 7,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1283), 1,
      sym_function_args,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(654), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10065] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(78), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10090] = 6,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(615), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(698), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(237), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10115] = 5,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(767), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10138] = 11,
    ACTIONS(907), 1,
      aux_sym_truncate_token2,
    ACTIONS(909), 1,
      aux_sym_create_index_token2,
    ACTIONS(911), 1,
      aux_sym_resource_token2,
    ACTIONS(913), 1,
      aux_sym_resource_token5,
    ACTIONS(915), 1,
      aux_sym_resource_token6,
    ACTIONS(917), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(919), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(921), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(923), 1,
      aux_sym_drop_type_token1,
    ACTIONS(925), 1,
      aux_sym_drop_user_token1,
    ACTIONS(927), 1,
      aux_sym_create_aggregate_token1,
  [10172] = 5,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(929), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(77), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10194] = 5,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(931), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(512), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10216] = 7,
    ACTIONS(933), 1,
      anon_sym_DOT,
    ACTIONS(935), 1,
      aux_sym_drop_index_token1,
    ACTIONS(937), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(939), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(941), 1,
      aux_sym_alter_table_rename_token1,
    STATE(282), 1,
      sym_alter_table_operation,
    STATE(283), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10242] = 4,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    ACTIONS(947), 1,
      aux_sym_resource_token4,
    STATE(139), 1,
      sym_privilege,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10262] = 3,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    STATE(1282), 1,
      sym_privilege,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10279] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(485), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10298] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(135), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10317] = 6,
    ACTIONS(935), 1,
      aux_sym_drop_index_token1,
    ACTIONS(937), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(939), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(941), 1,
      aux_sym_alter_table_rename_token1,
    STATE(256), 1,
      sym_alter_table_operation,
    STATE(283), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10340] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(981), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10359] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(204), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10378] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(596), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10397] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(761), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10416] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(692), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10435] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(555), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10454] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(81), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10473] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(641), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10492] = 10,
    ACTIONS(949), 1,
      aux_sym_truncate_token2,
    ACTIONS(951), 1,
      aux_sym_create_index_token2,
    ACTIONS(953), 1,
      aux_sym_resource_token2,
    ACTIONS(955), 1,
      aux_sym_resource_token5,
    ACTIONS(957), 1,
      aux_sym_resource_token6,
    ACTIONS(959), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(961), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(963), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(965), 1,
      aux_sym_drop_type_token1,
    ACTIONS(967), 1,
      aux_sym_drop_user_token1,
  [10523] = 4,
    ACTIONS(239), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(237), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10542] = 3,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    STATE(1281), 1,
      sym_privilege,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10559] = 6,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      aux_sym_relation_element_token1,
    ACTIONS(977), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(979), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(971), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(973), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10582] = 5,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      aux_sym_relation_element_token1,
    ACTIONS(977), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(971), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(973), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10602] = 6,
    ACTIONS(981), 1,
      anon_sym_DOT,
    ACTIONS(983), 1,
      aux_sym_privilege_token3,
    ACTIONS(985), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(987), 1,
      aux_sym_alter_table_rename_token1,
    STATE(290), 1,
      sym_alter_type_operation,
    STATE(291), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10623] = 6,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(995), 1,
      sym_object_name,
    STATE(1234), 1,
      sym_index_column_spec,
    STATE(1262), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10644] = 6,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(995), 1,
      sym_object_name,
    STATE(921), 1,
      sym_index_column_spec,
    STATE(1262), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10665] = 6,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(995), 1,
      sym_object_name,
    STATE(845), 1,
      sym_index_column_spec,
    STATE(1262), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10686] = 6,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(995), 1,
      sym_object_name,
    STATE(1250), 1,
      sym_index_column_spec,
    STATE(1262), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10707] = 3,
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
  [10721] = 5,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      aux_sym__decimal_literal_token1,
    STATE(799), 1,
      sym__decimal_literal,
    STATE(800), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10739] = 5,
    ACTIONS(983), 1,
      aux_sym_privilege_token3,
    ACTIONS(985), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(987), 1,
      aux_sym_alter_table_rename_token1,
    STATE(246), 1,
      sym_alter_type_operation,
    STATE(291), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10757] = 7,
    ACTIONS(1005), 1,
      aux_sym_truncate_token2,
    ACTIONS(1007), 1,
      aux_sym_privilege_token1,
    ACTIONS(1009), 1,
      aux_sym_resource_token2,
    ACTIONS(1011), 1,
      aux_sym_resource_token5,
    ACTIONS(1013), 1,
      aux_sym_resource_token6,
    ACTIONS(1015), 1,
      sym_object_name,
    STATE(241), 1,
      sym_resource,
  [10779] = 6,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(79), 1,
      sym_relation_element,
    STATE(459), 1,
      sym_function_call,
    STATE(701), 1,
      sym_column_not_null,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10799] = 3,
    ACTIONS(1025), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1021), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1023), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10813] = 7,
    ACTIONS(1005), 1,
      aux_sym_truncate_token2,
    ACTIONS(1007), 1,
      aux_sym_privilege_token1,
    ACTIONS(1009), 1,
      aux_sym_resource_token2,
    ACTIONS(1011), 1,
      aux_sym_resource_token5,
    ACTIONS(1013), 1,
      aux_sym_resource_token6,
    ACTIONS(1015), 1,
      sym_object_name,
    STATE(858), 1,
      sym_resource,
  [10835] = 6,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_relation_elements,
    STATE(459), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10855] = 7,
    ACTIONS(1029), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1031), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1035), 1,
      sym_object_name,
    STATE(543), 1,
      sym_select_element,
    STATE(547), 1,
      sym_function_call,
    STATE(833), 1,
      sym_select_elements,
  [10877] = 7,
    ACTIONS(1005), 1,
      aux_sym_truncate_token2,
    ACTIONS(1007), 1,
      aux_sym_privilege_token1,
    ACTIONS(1009), 1,
      aux_sym_resource_token2,
    ACTIONS(1011), 1,
      aux_sym_resource_token5,
    ACTIONS(1013), 1,
      aux_sym_resource_token6,
    ACTIONS(1015), 1,
      sym_object_name,
    STATE(859), 1,
      sym_resource,
  [10899] = 6,
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
  [10918] = 5,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(79), 1,
      sym_relation_element,
    STATE(459), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10935] = 6,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1035), 1,
      sym_object_name,
    ACTIONS(1049), 1,
      aux_sym_select_statement_token3,
    STATE(543), 1,
      sym_select_element,
    STATE(547), 1,
      sym_function_call,
    STATE(757), 1,
      sym_select_elements,
  [10954] = 2,
    ACTIONS(1051), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1053), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10965] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(112), 1,
      sym_insert_values_spec,
    STATE(631), 1,
      sym_insert_column_spec,
  [10981] = 4,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(918), 1,
      sym_primary_key_definition,
    STATE(919), 2,
      sym_compound_key,
      sym_composite_key,
  [10995] = 5,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1067), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1069), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1071), 1,
      aux_sym_role_with_option_token4,
    STATE(185), 1,
      sym_role_with_option,
  [11011] = 1,
    ACTIONS(1073), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11019] = 5,
    ACTIONS(1075), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1077), 1,
      sym_object_name,
    STATE(513), 1,
      sym_from_spec,
    STATE(552), 1,
      sym_delete_column_item,
    STATE(828), 1,
      sym_delete_column_list,
  [11035] = 3,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    ACTIONS(1079), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(132), 2,
      sym_option_hash,
      sym_table_option_value,
  [11047] = 5,
    ACTIONS(1083), 1,
      sym__string_literal,
    ACTIONS(1085), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1087), 1,
      aux_sym_create_index_token3,
    ACTIONS(1089), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_index_name,
  [11063] = 5,
    ACTIONS(1075), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1077), 1,
      sym_object_name,
    STATE(524), 1,
      sym_from_spec,
    STATE(552), 1,
      sym_delete_column_item,
    STATE(702), 1,
      sym_delete_column_list,
  [11079] = 1,
    ACTIONS(1091), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11087] = 1,
    ACTIONS(1093), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11095] = 3,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1098), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11107] = 1,
    ACTIONS(1100), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11115] = 3,
    ACTIONS(1104), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(632), 1,
      sym_using_timestamp_spec,
    ACTIONS(1102), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11127] = 5,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1067), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1069), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1071), 1,
      aux_sym_role_with_option_token4,
    STATE(212), 1,
      sym_role_with_option,
  [11143] = 5,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(543), 1,
      sym_select_element,
    STATE(547), 1,
      sym_function_call,
    STATE(757), 1,
      sym_select_elements,
  [11159] = 5,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(543), 1,
      sym_select_element,
    STATE(547), 1,
      sym_function_call,
    STATE(705), 1,
      sym_select_elements,
  [11175] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(141), 1,
      sym_table_option_item,
    STATE(303), 1,
      sym_clustering_order,
    STATE(1067), 1,
      sym_table_option_name,
  [11191] = 1,
    ACTIONS(1108), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11199] = 4,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1114), 1,
      aux_sym_select_element_token1,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11213] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(118), 1,
      sym_insert_values_spec,
    STATE(678), 1,
      sym_insert_column_spec,
  [11229] = 1,
    ACTIONS(1116), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11237] = 1,
    ACTIONS(1118), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11245] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(156), 1,
      sym_table_option_item,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1067), 1,
      sym_table_option_name,
  [11261] = 3,
    ACTIONS(1104), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(628), 1,
      sym_using_timestamp_spec,
    ACTIONS(1120), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11273] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(141), 1,
      sym_table_option_item,
    STATE(287), 1,
      sym_clustering_order,
    STATE(1067), 1,
      sym_table_option_name,
  [11289] = 1,
    ACTIONS(1098), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11296] = 4,
    ACTIONS(1122), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11309] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1126), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11322] = 4,
    ACTIONS(1128), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1130), 1,
      aux_sym_create_materialized_view_token1,
    STATE(667), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(669), 1,
      aux_sym_relation_elements_repeat1,
  [11335] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1132), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11348] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1134), 1,
      anon_sym_DOT,
    ACTIONS(1136), 1,
      aux_sym_update_token2,
    STATE(879), 1,
      sym_using_ttl_timestamp,
  [11361] = 4,
    ACTIONS(1138), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
    STATE(985), 1,
      sym_primary_key_element,
  [11374] = 4,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(115), 1,
      sym_table_option_item,
    STATE(248), 1,
      sym_table_options,
    STATE(1067), 1,
      sym_table_option_name,
  [11387] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1104), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(136), 1,
      sym_where_spec,
    STATE(696), 1,
      sym_using_timestamp_spec,
  [11400] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11413] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_where_spec,
    STATE(494), 1,
      aux_sym_update_repeat1,
  [11426] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11439] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_where_spec,
    STATE(530), 1,
      aux_sym_update_repeat1,
  [11452] = 1,
    ACTIONS(1146), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11459] = 4,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_function_args_repeat1,
  [11472] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [11485] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1152), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11498] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1154), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11511] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11524] = 4,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(115), 1,
      sym_table_option_item,
    STATE(396), 1,
      sym_table_options,
    STATE(1067), 1,
      sym_table_option_name,
  [11537] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(496), 1,
      aux_sym_update_repeat1,
  [11550] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_where_spec,
    STATE(535), 1,
      aux_sym_update_repeat1,
  [11563] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11576] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11589] = 4,
    ACTIONS(1138), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
    STATE(1254), 1,
      sym_primary_key_element,
  [11602] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1158), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11615] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_where_spec,
    STATE(525), 1,
      aux_sym_update_repeat1,
  [11628] = 4,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    STATE(649), 1,
      aux_sym_assignment_set_repeat1,
  [11641] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1104), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(126), 1,
      sym_where_spec,
    STATE(751), 1,
      sym_using_timestamp_spec,
  [11654] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1166), 1,
      anon_sym_DOT,
    ACTIONS(1168), 1,
      aux_sym_update_token2,
    STATE(1053), 1,
      sym_using_ttl_timestamp,
  [11667] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11680] = 3,
    ACTIONS(1174), 1,
      aux_sym_create_materialized_view_token1,
    STATE(762), 1,
      sym_primary_key_column,
    ACTIONS(1172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11691] = 4,
    ACTIONS(1128), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1176), 1,
      aux_sym_create_materialized_view_token1,
    STATE(488), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(685), 1,
      aux_sym_relation_elements_repeat1,
  [11704] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1178), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11717] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1180), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11728] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_where_spec,
    STATE(503), 1,
      aux_sym_update_repeat1,
  [11741] = 2,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1184), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11750] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1186), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11763] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_where_spec,
    STATE(532), 1,
      aux_sym_update_repeat1,
  [11776] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1104), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(194), 1,
      sym_where_spec,
    STATE(741), 1,
      sym_using_timestamp_spec,
  [11789] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11802] = 4,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(115), 1,
      sym_table_option_item,
    STATE(296), 1,
      sym_table_options,
    STATE(1067), 1,
      sym_table_option_name,
  [11815] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11828] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1190), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11841] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11854] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11867] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1194), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11880] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11893] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1196), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11906] = 4,
    ACTIONS(1083), 1,
      sym__string_literal,
    ACTIONS(1089), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_create_index_token3,
    STATE(1203), 1,
      sym_index_name,
  [11919] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_where_spec,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [11932] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1200), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11943] = 4,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1202), 1,
      aux_sym_delete_statement_token3,
    STATE(137), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11956] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1280), 1,
      sym_return_mode,
  [11966] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
    STATE(562), 1,
      aux_sym_option_hash_repeat1,
  [11976] = 3,
    ACTIONS(1212), 1,
      aux_sym_truncate_token2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(309), 1,
      sym_table_name,
  [11986] = 3,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1218), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1220), 1,
      aux_sym_update_token1,
  [11996] = 3,
    ACTIONS(1003), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1222), 1,
      sym__string_literal,
    STATE(773), 1,
      sym__decimal_literal,
  [12006] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      aux_sym_from_spec_token1,
    STATE(611), 1,
      aux_sym_select_elements_repeat1,
  [12016] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      aux_sym_replication_list_repeat1,
  [12026] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(511), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [12036] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      aux_sym_where_spec_token1,
    STATE(546), 1,
      aux_sym_update_repeat1,
  [12046] = 2,
    ACTIONS(1241), 1,
      aux_sym_select_element_token1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12054] = 3,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    ACTIONS(1245), 1,
      sym_object_name,
    STATE(603), 1,
      sym_param,
  [12064] = 2,
    ACTIONS(1249), 1,
      anon_sym_LBRACK,
    ACTIONS(1247), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12072] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(931), 1,
      sym_return_mode,
  [12082] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12092] = 3,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      aux_sym_from_spec_token1,
    STATE(624), 1,
      aux_sym_delete_column_list_repeat1,
  [12102] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      sym_param,
  [12112] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(935), 1,
      sym_return_mode,
  [12122] = 3,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RBRACE,
    STATE(589), 1,
      aux_sym_assignment_map_repeat1,
  [12132] = 3,
    ACTIONS(1214), 1,
      sym_object_name,
    ACTIONS(1265), 1,
      aux_sym_delete_statement_token2,
    STATE(1109), 1,
      sym_table_name,
  [12142] = 3,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(141), 1,
      sym_table_option_item,
    STATE(1067), 1,
      sym_table_option_name,
  [12152] = 3,
    ACTIONS(1267), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(1185), 1,
      sym_keyspace_name,
  [12162] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1271), 1,
      aux_sym_update_token2,
    STATE(1039), 1,
      sym_using_ttl_timestamp,
  [12172] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_relation_element_repeat2,
  [12182] = 3,
    ACTIONS(1275), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1277), 1,
      sym_object_name,
    STATE(398), 1,
      sym_alter_table_drop_column_list,
  [12192] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACE,
    STATE(607), 1,
      aux_sym_option_hash_repeat1,
  [12202] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(505), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [12212] = 3,
    ACTIONS(1281), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1283), 1,
      sym_object_name,
    STATE(1150), 1,
      sym_trigger_name,
  [12222] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_GT,
    STATE(565), 1,
      aux_sym_data_type_definition_repeat1,
  [12232] = 3,
    ACTIONS(1290), 1,
      anon_sym_DOT,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    STATE(953), 1,
      sym_materialized_view_where,
  [12242] = 3,
    ACTIONS(1294), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(714), 1,
      sym_user_name,
  [12252] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_create_type_repeat1,
  [12262] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(159), 1,
      sym_alter_type_rename_item,
    STATE(379), 1,
      sym_alter_type_rename_list,
  [12272] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [12282] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      aux_sym_create_type_repeat1,
  [12292] = 3,
    ACTIONS(1308), 1,
      sym__string_literal,
    ACTIONS(1310), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1312), 1,
      sym_object_name,
  [12302] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(500), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [12312] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(495), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [12322] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      sym_param,
  [12332] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(961), 1,
      sym_return_mode,
  [12342] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_function_args_repeat1,
  [12352] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      aux_sym_create_function_repeat1,
  [12362] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      aux_sym_relation_element_repeat1,
  [12372] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(966), 1,
      sym_return_mode,
  [12382] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [12392] = 3,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_column_definition_list_repeat1,
  [12402] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12412] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(882), 1,
      sym_return_mode,
  [12422] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_relation_element_repeat2,
  [12432] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      sym_param,
  [12442] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [12452] = 3,
    ACTIONS(1296), 1,
      sym_object_name,
    ACTIONS(1337), 1,
      aux_sym_delete_statement_token2,
    STATE(298), 1,
      sym_user_name,
  [12462] = 3,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      aux_sym_assignment_map_repeat1,
  [12472] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12482] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1205), 1,
      sym_return_mode,
  [12492] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_create_type_repeat1,
  [12502] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_param,
  [12512] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12522] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      aux_sym_replication_list_repeat1,
  [12532] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RBRACK,
    STATE(652), 1,
      aux_sym_assignment_set_repeat1,
  [12542] = 3,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12552] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_GT,
    STATE(565), 1,
      aux_sym_data_type_definition_repeat1,
  [12562] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_param,
  [12572] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(992), 1,
      sym_return_mode,
  [12582] = 3,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym_expression_list_repeat1,
  [12592] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_function_repeat1,
  [12602] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_create_function_repeat1,
  [12612] = 3,
    ACTIONS(1378), 1,
      sym_object_name,
    STATE(582), 1,
      sym_column_definition,
    STATE(996), 1,
      sym_column_definition_list,
  [12622] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(997), 1,
      sym_return_mode,
  [12632] = 3,
    ACTIONS(1378), 1,
      sym_object_name,
    STATE(582), 1,
      sym_column_definition,
    STATE(909), 1,
      sym_column_definition_list,
  [12642] = 3,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    STATE(607), 1,
      aux_sym_option_hash_repeat1,
  [12652] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [12662] = 3,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(547), 1,
      sym_function_call,
    STATE(706), 1,
      sym_select_element,
  [12672] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1018), 1,
      sym_return_mode,
  [12682] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(660), 1,
      aux_sym_select_elements_repeat1,
  [12692] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12702] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_column_definition_list_repeat1,
  [12712] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(850), 1,
      sym_return_mode,
  [12722] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_create_function_repeat1,
  [12732] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12742] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      aux_sym_create_function_repeat1,
  [12752] = 3,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12762] = 3,
    ACTIONS(1003), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1408), 1,
      sym__string_literal,
    STATE(991), 1,
      sym__decimal_literal,
  [12772] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_assignment_set_repeat1,
  [12782] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(846), 1,
      sym_return_mode,
  [12792] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1022), 1,
      sym_return_mode,
  [12802] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      anon_sym_RBRACE,
    STATE(544), 1,
      aux_sym_replication_list_repeat1,
  [12812] = 3,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      aux_sym_from_spec_token1,
    STATE(635), 1,
      aux_sym_delete_column_list_repeat1,
  [12822] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      sym_param,
  [12832] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(895), 1,
      sym_return_mode,
  [12842] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_create_function_repeat1,
  [12852] = 1,
    ACTIONS(1102), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12858] = 2,
    ACTIONS(1422), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1420), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12866] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12876] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(118), 1,
      sym_insert_values_spec,
  [12886] = 1,
    ACTIONS(1426), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12892] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(952), 1,
      sym_return_mode,
  [12902] = 3,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [12912] = 3,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      aux_sym_from_spec_token1,
    STATE(635), 1,
      aux_sym_delete_column_list_repeat1,
  [12922] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_init_cond_hash_repeat1,
  [12932] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [12942] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_column_definition_list_repeat1,
  [12952] = 3,
    ACTIONS(1446), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      aux_sym_assignment_map_repeat1,
  [12962] = 3,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12972] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      aux_sym_assignment_set_repeat1,
  [12982] = 3,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_clustering_key_list_repeat1,
  [12992] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1208), 1,
      sym_return_mode,
  [13002] = 3,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_expression_list_repeat1,
  [13012] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1045), 1,
      sym_return_mode,
  [13022] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [13032] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    ACTIONS(1463), 1,
      anon_sym_GT,
    STATE(598), 1,
      aux_sym_data_type_definition_repeat1,
  [13042] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym_expression_list_repeat1,
  [13052] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RBRACE,
    STATE(470), 1,
      aux_sym_assignment_set_repeat1,
  [13062] = 3,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1472), 1,
      anon_sym_DOT,
    STATE(1199), 1,
      sym_materialized_view_where,
  [13072] = 3,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1474), 1,
      anon_sym_DOT,
    STATE(1063), 1,
      sym_materialized_view_where,
  [13082] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_assignment_set_repeat1,
  [13092] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_create_type_repeat1,
  [13102] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_function_args_repeat1,
  [13112] = 3,
    ACTIONS(1245), 1,
      sym_object_name,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      sym_param,
  [13122] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1075), 1,
      sym_return_mode,
  [13132] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [13142] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [13152] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1079), 1,
      sym_return_mode,
  [13162] = 3,
    ACTIONS(1486), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      aux_sym_from_spec_token1,
    STATE(660), 1,
      aux_sym_select_elements_repeat1,
  [13172] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(913), 1,
      sym_return_mode,
  [13182] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_create_function_repeat1,
  [13192] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_function_repeat1,
  [13202] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1167), 1,
      sym_return_mode,
  [13212] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(497), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [13222] = 2,
    ACTIONS(1495), 1,
      aux_sym_resource_token1,
    ACTIONS(1497), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [13230] = 3,
    ACTIONS(1499), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1502), 1,
      aux_sym_create_materialized_view_token1,
    STATE(667), 1,
      aux_sym_materialized_view_where_repeat1,
  [13240] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_relation_element_repeat1,
  [13250] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1506), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [13260] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(520), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [13270] = 2,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    ACTIONS(1510), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [13278] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_function_args_repeat1,
  [13288] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(835), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [13298] = 2,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1515), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13306] = 3,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_clustering_key_list_repeat1,
  [13316] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(506), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [13326] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1519), 1,
      aux_sym_update_token2,
    STATE(1304), 1,
      sym_using_ttl_timestamp,
  [13336] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [13346] = 3,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_clustering_key_list_repeat1,
  [13356] = 3,
    ACTIONS(1523), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_clustering_key_list_repeat1,
  [13366] = 3,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_clustering_key_list_repeat1,
  [13376] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1097), 1,
      sym_return_mode,
  [13386] = 3,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(523), 1,
      sym_assignment_element,
    STATE(1092), 1,
      sym_indexed_column,
  [13396] = 3,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1530), 1,
      anon_sym_DOT,
    STATE(1112), 1,
      sym_materialized_view_where,
  [13406] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1130), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [13416] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1128), 1,
      sym_return_mode,
  [13426] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_create_function_repeat1,
  [13436] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1123), 1,
      sym_return_mode,
  [13446] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [13456] = 2,
    ACTIONS(1536), 1,
      anon_sym_DOT,
    ACTIONS(1538), 1,
      aux_sym_create_index_token3,
  [13463] = 2,
    ACTIONS(1540), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1542), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13470] = 1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13475] = 2,
    ACTIONS(1546), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1548), 1,
      sym_object_name,
  [13482] = 1,
    ACTIONS(1526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13487] = 2,
    ACTIONS(1550), 1,
      aux_sym_materialized_view_options_token1,
    STATE(292), 1,
      sym_user_with,
  [13494] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(186), 1,
      sym_where_spec,
  [13501] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1140), 1,
      sym_clustering_key_list,
  [13508] = 1,
    ACTIONS(1515), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13513] = 2,
    ACTIONS(1554), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_LPAREN,
  [13520] = 2,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    STATE(1160), 1,
      sym_materialized_view_where,
  [13527] = 1,
    ACTIONS(1502), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13532] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(493), 1,
      sym_from_spec,
  [13539] = 2,
    ACTIONS(1560), 1,
      anon_sym_DOT,
    ACTIONS(1562), 1,
      aux_sym_create_index_token3,
  [13546] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(479), 1,
      sym_table_name,
  [13553] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [13560] = 1,
    ACTIONS(1489), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13565] = 2,
    ACTIONS(1566), 1,
      sym_object_name,
    STATE(205), 1,
      sym_if_condition,
  [13572] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1165), 1,
      sym_column_list,
  [13579] = 2,
    ACTIONS(1570), 1,
      aux_sym_resource_token5,
    ACTIONS(1572), 1,
      aux_sym_drop_aggregate_token1,
  [13586] = 2,
    ACTIONS(1574), 1,
      anon_sym_DOT,
    ACTIONS(1576), 1,
      anon_sym_LPAREN,
  [13593] = 1,
    ACTIONS(1578), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13598] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13603] = 2,
    ACTIONS(1582), 1,
      sym_object_name,
    STATE(809), 1,
      sym_user_name,
  [13610] = 2,
    ACTIONS(1550), 1,
      aux_sym_materialized_view_options_token1,
    STATE(255), 1,
      sym_user_with,
  [13617] = 1,
    ACTIONS(1584), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13622] = 1,
    ACTIONS(1586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13627] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(560), 1,
      sym_assignment_tuple,
  [13634] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [13641] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [13648] = 2,
    ACTIONS(1592), 1,
      anon_sym_DOT,
    ACTIONS(1594), 1,
      aux_sym_using_timestamp_spec_token1,
  [13655] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1302), 1,
      sym_trigger_name,
  [13662] = 2,
    ACTIONS(1598), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1600), 1,
      sym_object_name,
  [13669] = 2,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    STATE(1064), 1,
      sym_materialized_view_where,
  [13676] = 2,
    ACTIONS(1602), 1,
      anon_sym_DOT,
    ACTIONS(1604), 1,
      anon_sym_LPAREN,
  [13683] = 2,
    ACTIONS(1606), 1,
      sym__string_literal,
    STATE(333), 1,
      sym_trigger_class,
  [13690] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1060), 1,
      sym_column_list,
  [13697] = 2,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    STATE(1200), 1,
      sym_materialized_view_where,
  [13704] = 1,
    ACTIONS(1468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13709] = 2,
    ACTIONS(1608), 1,
      anon_sym_DOT,
    ACTIONS(1610), 1,
      aux_sym_select_element_token1,
  [13716] = 2,
    ACTIONS(1003), 1,
      aux_sym__decimal_literal_token1,
    STATE(233), 1,
      sym__decimal_literal,
  [13723] = 1,
    ACTIONS(1612), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13728] = 1,
    ACTIONS(1614), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13733] = 1,
    ACTIONS(1616), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13738] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(701), 1,
      sym_column_not_null,
  [13745] = 2,
    ACTIONS(1620), 1,
      aux_sym_durable_writes_token1,
    STATE(276), 1,
      sym_durable_writes,
  [13752] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1042), 1,
      sym_clustering_key_list,
  [13759] = 2,
    ACTIONS(1622), 1,
      anon_sym_DOT,
    ACTIONS(1624), 1,
      anon_sym_LPAREN,
  [13766] = 2,
    ACTIONS(1626), 1,
      sym__string_literal,
    STATE(539), 1,
      sym_option_hash_item,
  [13773] = 2,
    ACTIONS(1378), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
  [13780] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1242), 1,
      sym_table_name,
  [13787] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [13794] = 1,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13799] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1244), 1,
      sym_column_list,
  [13806] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1245), 1,
      sym_column_list,
  [13813] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(898), 1,
      sym_column_list,
  [13820] = 1,
    ACTIONS(1431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13825] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(955), 1,
      sym_table_name,
  [13832] = 2,
    ACTIONS(1628), 1,
      sym_object_name,
    STATE(742), 1,
      sym_delete_column_item,
  [13839] = 2,
    ACTIONS(1620), 1,
      aux_sym_durable_writes_token1,
    STATE(264), 1,
      sym_durable_writes,
  [13846] = 2,
    ACTIONS(1630), 1,
      sym__string_literal,
    STATE(623), 1,
      sym_replication_list_item,
  [13853] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(194), 1,
      sym_where_spec,
  [13860] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(770), 1,
      sym_init_cond_hash_item,
  [13867] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(980), 1,
      sym_table_name,
  [13874] = 2,
    ACTIONS(1292), 1,
      aux_sym_where_spec_token1,
    STATE(1276), 1,
      sym_materialized_view_where,
  [13881] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1279), 1,
      sym_column_list,
  [13888] = 1,
    ACTIONS(1394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13893] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [13900] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(916), 1,
      sym_table_name,
  [13907] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(517), 1,
      sym_column_not_null,
  [13914] = 2,
    ACTIONS(1582), 1,
      sym_object_name,
    STATE(695), 1,
      sym_user_name,
  [13921] = 1,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13926] = 1,
    ACTIONS(1634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13931] = 1,
    ACTIONS(1383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13936] = 1,
    ACTIONS(1636), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13941] = 1,
    ACTIONS(1638), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13946] = 2,
    ACTIONS(1640), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_replication_list,
  [13953] = 1,
    ACTIONS(1362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13958] = 2,
    ACTIONS(1642), 1,
      anon_sym_DOT,
    ACTIONS(1644), 1,
      anon_sym_LPAREN,
  [13965] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1049), 1,
      sym_keyspace_name,
  [13972] = 1,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13977] = 1,
    ACTIONS(1355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13982] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(870), 1,
      sym_column_list,
  [13989] = 1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13994] = 1,
    ACTIONS(1650), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13999] = 2,
    ACTIONS(1652), 1,
      anon_sym_COMMA,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [14006] = 2,
    ACTIONS(1656), 1,
      sym_object_name,
    STATE(986), 1,
      sym_partition_key_list,
  [14013] = 2,
    ACTIONS(1245), 1,
      sym_object_name,
    STATE(746), 1,
      sym_param,
  [14020] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1268), 1,
      sym_keyspace_name,
  [14027] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1303), 1,
      sym_column_list,
  [14034] = 2,
    ACTIONS(1658), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1660), 1,
      sym_object_name,
  [14041] = 2,
    ACTIONS(1662), 1,
      anon_sym_DOT,
    ACTIONS(1664), 1,
      anon_sym_LPAREN,
  [14048] = 2,
    ACTIONS(1666), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1668), 1,
      sym_object_name,
  [14055] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [14062] = 2,
    ACTIONS(1670), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1672), 1,
      sym_object_name,
  [14069] = 2,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_option_hash,
  [14076] = 2,
    ACTIONS(1674), 1,
      anon_sym_DOT,
    ACTIONS(1676), 1,
      anon_sym_LPAREN,
  [14083] = 2,
    ACTIONS(1678), 1,
      anon_sym_DOT,
    ACTIONS(1680), 1,
      anon_sym_LPAREN,
  [14090] = 2,
    ACTIONS(1682), 1,
      anon_sym_DOT,
    ACTIONS(1684), 1,
      aux_sym_select_element_token1,
  [14097] = 2,
    ACTIONS(1686), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1688), 1,
      sym_object_name,
  [14104] = 2,
    ACTIONS(1606), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_trigger_class,
  [14111] = 2,
    ACTIONS(1690), 1,
      aux_sym_role_with_option_token1,
    STATE(109), 1,
      sym_user_password,
  [14118] = 2,
    ACTIONS(1692), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1694), 1,
      sym_object_name,
  [14125] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1197), 1,
      sym_table_name,
  [14132] = 2,
    ACTIONS(1696), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1698), 1,
      sym_object_name,
  [14139] = 2,
    ACTIONS(1700), 1,
      sym__string_literal,
    ACTIONS(1702), 1,
      sym_object_name,
  [14146] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    ACTIONS(1706), 1,
      sym_object_name,
  [14153] = 2,
    ACTIONS(1708), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1710), 1,
      sym_object_name,
  [14160] = 2,
    ACTIONS(1003), 1,
      aux_sym__decimal_literal_token1,
    STATE(1345), 1,
      sym__decimal_literal,
  [14167] = 1,
    ACTIONS(1712), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14172] = 1,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14177] = 1,
    ACTIONS(1716), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14182] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1320), 1,
      sym_column_list,
  [14189] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1158), 1,
      sym_column_list,
  [14196] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1321), 1,
      sym_column_list,
  [14203] = 2,
    ACTIONS(1718), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1720), 1,
      sym_object_name,
  [14210] = 2,
    ACTIONS(1620), 1,
      aux_sym_durable_writes_token1,
    STATE(257), 1,
      sym_durable_writes,
  [14217] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14224] = 1,
    ACTIONS(1726), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14229] = 2,
    ACTIONS(1550), 1,
      aux_sym_materialized_view_options_token1,
    STATE(337), 1,
      sym_user_with,
  [14236] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(220), 1,
      sym_alter_type_rename_item,
  [14243] = 2,
    ACTIONS(1728), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1730), 1,
      sym_object_name,
  [14250] = 1,
    ACTIONS(1732), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14255] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(949), 1,
      sym_column_list,
  [14262] = 2,
    ACTIONS(1734), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1736), 1,
      sym_object_name,
  [14269] = 1,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14274] = 2,
    ACTIONS(1738), 1,
      sym_object_name,
    STATE(392), 1,
      sym_alter_table_column_definition,
  [14281] = 2,
    ACTIONS(1640), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_replication_list,
  [14288] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14295] = 2,
    ACTIONS(1740), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1742), 1,
      sym_object_name,
  [14302] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14309] = 2,
    ACTIONS(1582), 1,
      sym_object_name,
    STATE(385), 1,
      sym_user_name,
  [14316] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(585), 1,
      sym_assignment_tuple,
  [14323] = 2,
    ACTIONS(1626), 1,
      sym__string_literal,
    STATE(763), 1,
      sym_option_hash_item,
  [14330] = 1,
    ACTIONS(1748), 2,
      sym__string_literal,
      sym__float_literal,
  [14335] = 2,
    ACTIONS(1750), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1752), 1,
      sym_object_name,
  [14342] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(359), 1,
      sym_table_name,
  [14349] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(460), 1,
      sym_table_name,
  [14356] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(524), 1,
      sym_from_spec,
  [14363] = 2,
    ACTIONS(1754), 1,
      anon_sym_EQ,
    ACTIONS(1756), 1,
      anon_sym_LBRACK,
  [14370] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1340), 1,
      sym_column_list,
  [14377] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(92), 1,
      sym_table_name,
  [14384] = 2,
    ACTIONS(1758), 1,
      sym__string_literal,
    ACTIONS(1760), 1,
      sym_object_name,
  [14391] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [14398] = 2,
    ACTIONS(1640), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_replication_list,
  [14405] = 1,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14410] = 2,
    ACTIONS(1630), 1,
      sym__string_literal,
    STATE(771), 1,
      sym_replication_list_item,
  [14417] = 1,
    ACTIONS(1762), 1,
      aux_sym_delete_statement_token3,
  [14421] = 1,
    ACTIONS(1764), 1,
      sym_object_name,
  [14425] = 1,
    ACTIONS(1766), 1,
      anon_sym_RPAREN,
  [14429] = 1,
    ACTIONS(1768), 1,
      anon_sym_RPAREN,
  [14433] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [14437] = 1,
    ACTIONS(1772), 1,
      anon_sym_EQ,
  [14441] = 1,
    ACTIONS(1774), 1,
      anon_sym_EQ,
  [14445] = 1,
    ACTIONS(1776), 1,
      aux_sym__decimal_literal_token1,
  [14449] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [14453] = 1,
    ACTIONS(1780), 1,
      aux_sym_create_function_token1,
  [14457] = 1,
    ACTIONS(1782), 1,
      sym_object_name,
  [14461] = 1,
    ACTIONS(1784), 1,
      aux_sym_order_spec_token2,
  [14465] = 1,
    ACTIONS(1786), 1,
      aux_sym__decimal_literal_token1,
  [14469] = 1,
    ACTIONS(1788), 1,
      aux_sym_create_function_token1,
  [14473] = 1,
    ACTIONS(1790), 1,
      sym_object_name,
  [14477] = 1,
    ACTIONS(1792), 1,
      aux_sym_return_mode_token2,
  [14481] = 1,
    ACTIONS(1794), 1,
      aux_sym_create_function_token1,
  [14485] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [14489] = 1,
    ACTIONS(1798), 1,
      aux_sym_create_function_token2,
  [14493] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [14497] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [14501] = 1,
    ACTIONS(1804), 1,
      aux_sym_grant_token2,
  [14505] = 1,
    ACTIONS(1806), 1,
      aux_sym_from_spec_token1,
  [14509] = 1,
    ACTIONS(1808), 1,
      sym_object_name,
  [14513] = 1,
    ACTIONS(1810), 1,
      sym_object_name,
  [14517] = 1,
    ACTIONS(1812), 1,
      aux_sym_create_aggregate_token3,
  [14521] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14525] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14529] = 1,
    ACTIONS(1818), 1,
      aux_sym_select_statement_token5,
  [14533] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [14537] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [14541] = 1,
    ACTIONS(1824), 1,
      aux_sym_select_element_token1,
  [14545] = 1,
    ACTIONS(1826), 1,
      aux_sym_create_keyspace_token1,
  [14549] = 1,
    ACTIONS(1828), 1,
      aux_sym_from_spec_token1,
  [14553] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [14557] = 1,
    ACTIONS(1832), 1,
      sym_object_name,
  [14561] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [14565] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [14569] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [14573] = 1,
    ACTIONS(1840), 1,
      aux_sym_delete_statement_token3,
  [14577] = 1,
    ACTIONS(1842), 1,
      sym_object_name,
  [14581] = 1,
    ACTIONS(1844), 1,
      sym_object_name,
  [14585] = 1,
    ACTIONS(1846), 1,
      aux_sym_update_token2,
  [14589] = 1,
    ACTIONS(1848), 1,
      aux_sym_select_statement_token5,
  [14593] = 1,
    ACTIONS(1850), 1,
      sym_object_name,
  [14597] = 1,
    ACTIONS(1852), 1,
      aux_sym_create_function_token1,
  [14601] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [14605] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [14609] = 1,
    ACTIONS(1858), 1,
      aux_sym_delete_statement_token3,
  [14613] = 1,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
  [14617] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14621] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [14625] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [14629] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [14633] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [14637] = 1,
    ACTIONS(1872), 1,
      sym_object_name,
  [14641] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [14645] = 1,
    ACTIONS(1876), 1,
      anon_sym_LPAREN,
  [14649] = 1,
    ACTIONS(1878), 1,
      aux_sym_create_function_token1,
  [14653] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [14657] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [14661] = 1,
    ACTIONS(1884), 1,
      anon_sym_RPAREN,
  [14665] = 1,
    ACTIONS(1886), 1,
      aux_sym_insert_statement_token3,
  [14669] = 1,
    ACTIONS(1888), 1,
      sym_object_name,
  [14673] = 1,
    ACTIONS(1890), 1,
      aux_sym_delete_statement_token3,
  [14677] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [14681] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [14685] = 1,
    ACTIONS(1896), 1,
      aux_sym_delete_statement_token3,
  [14689] = 1,
    ACTIONS(1898), 1,
      sym_object_name,
  [14693] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [14697] = 1,
    ACTIONS(1902), 1,
      aux_sym_delete_statement_token3,
  [14701] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [14705] = 1,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
  [14709] = 1,
    ACTIONS(1908), 1,
      aux_sym_create_aggregate_token3,
  [14713] = 1,
    ACTIONS(1910), 1,
      aux_sym_insert_statement_token3,
  [14717] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [14721] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [14725] = 1,
    ACTIONS(1916), 1,
      aux_sym_delete_statement_token3,
  [14729] = 1,
    ACTIONS(1918), 1,
      anon_sym_LPAREN,
  [14733] = 1,
    ACTIONS(1920), 1,
      anon_sym_LPAREN,
  [14737] = 1,
    ACTIONS(1922), 1,
      anon_sym_EQ,
  [14741] = 1,
    ACTIONS(1924), 1,
      anon_sym_RPAREN,
  [14745] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [14749] = 1,
    ACTIONS(1928), 1,
      aux_sym_delete_statement_token3,
  [14753] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [14757] = 1,
    ACTIONS(1932), 1,
      anon_sym_LPAREN,
  [14761] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [14765] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [14769] = 1,
    ACTIONS(1938), 1,
      sym_object_name,
  [14773] = 1,
    ACTIONS(1940), 1,
      aux_sym_select_statement_token1,
  [14777] = 1,
    ACTIONS(1942), 1,
      sym__boolean_literal,
  [14781] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [14785] = 1,
    ACTIONS(1946), 1,
      anon_sym_LPAREN,
  [14789] = 1,
    ACTIONS(1948), 1,
      aux_sym_delete_statement_token3,
  [14793] = 1,
    ACTIONS(1950), 1,
      aux_sym_create_function_token1,
  [14797] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_aggregate_token4,
  [14801] = 1,
    ACTIONS(1954), 1,
      aux_sym_create_function_token2,
  [14805] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_keyspace_token1,
  [14809] = 1,
    ACTIONS(1958), 1,
      aux_sym_create_function_token1,
  [14813] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_function_token1,
  [14817] = 1,
    ACTIONS(1962), 1,
      aux_sym_select_element_token1,
  [14821] = 1,
    ACTIONS(1964), 1,
      sym_object_name,
  [14825] = 1,
    ACTIONS(1966), 1,
      aux_sym_create_function_token2,
  [14829] = 1,
    ACTIONS(1968), 1,
      aux_sym_create_aggregate_token3,
  [14833] = 1,
    ACTIONS(1970), 1,
      anon_sym_RPAREN,
  [14837] = 1,
    ACTIONS(1972), 1,
      anon_sym_LPAREN,
  [14841] = 1,
    ACTIONS(1974), 1,
      anon_sym_COLON,
  [14845] = 1,
    ACTIONS(1976), 1,
      anon_sym_RPAREN,
  [14849] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [14853] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_aggregate_token4,
  [14857] = 1,
    ACTIONS(1982), 1,
      aux_sym_create_aggregate_token5,
  [14861] = 1,
    ACTIONS(1984), 1,
      aux_sym_select_statement_token1,
  [14865] = 1,
    ACTIONS(1986), 1,
      aux_sym_from_spec_token1,
  [14869] = 1,
    ACTIONS(1988), 1,
      sym_object_name,
  [14873] = 1,
    ACTIONS(1990), 1,
      sym_object_name,
  [14877] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_function_token1,
  [14881] = 1,
    ACTIONS(1994), 1,
      aux_sym_create_materialized_view_token1,
  [14885] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14889] = 1,
    ACTIONS(1998), 1,
      anon_sym_LPAREN,
  [14893] = 1,
    ACTIONS(2000), 1,
      aux_sym_create_function_token2,
  [14897] = 1,
    ACTIONS(2002), 1,
      aux_sym_delete_statement_token3,
  [14901] = 1,
    ACTIONS(2004), 1,
      anon_sym_LPAREN,
  [14905] = 1,
    ACTIONS(2006), 1,
      aux_sym_return_mode_token2,
  [14909] = 1,
    ACTIONS(2008), 1,
      aux_sym_constant_token2,
  [14913] = 1,
    ACTIONS(2010), 1,
      aux_sym_create_function_token1,
  [14917] = 1,
    ACTIONS(2012), 1,
      anon_sym_EQ,
  [14921] = 1,
    ACTIONS(2014), 1,
      anon_sym_LPAREN,
  [14925] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_function_token2,
  [14929] = 1,
    ACTIONS(2018), 1,
      aux_sym_delete_statement_token3,
  [14933] = 1,
    ACTIONS(2020), 1,
      aux_sym_create_function_token1,
  [14937] = 1,
    ACTIONS(2022), 1,
      anon_sym_LPAREN,
  [14941] = 1,
    ACTIONS(2024), 1,
      anon_sym_RPAREN,
  [14945] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_aggregate_token3,
  [14949] = 1,
    ACTIONS(2028), 1,
      aux_sym_create_aggregate_token4,
  [14953] = 1,
    ACTIONS(2030), 1,
      sym_object_name,
  [14957] = 1,
    ACTIONS(2032), 1,
      aux_sym_delete_statement_token3,
  [14961] = 1,
    ACTIONS(2034), 1,
      anon_sym_COLON,
  [14965] = 1,
    ACTIONS(2036), 1,
      anon_sym_LPAREN,
  [14969] = 1,
    ACTIONS(2038), 1,
      anon_sym_EQ,
  [14973] = 1,
    ACTIONS(2040), 1,
      anon_sym_EQ,
  [14977] = 1,
    ACTIONS(2042), 1,
      anon_sym_RPAREN,
  [14981] = 1,
    ACTIONS(2044), 1,
      anon_sym_RPAREN,
  [14985] = 1,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
  [14989] = 1,
    ACTIONS(2048), 1,
      anon_sym_LPAREN,
  [14993] = 1,
    ACTIONS(2050), 1,
      anon_sym_COLON,
  [14997] = 1,
    ACTIONS(2052), 1,
      aux_sym__decimal_literal_token1,
  [15001] = 1,
    ACTIONS(2054), 1,
      anon_sym_EQ,
  [15005] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [15009] = 1,
    ACTIONS(2058), 1,
      anon_sym_RPAREN,
  [15013] = 1,
    ACTIONS(2060), 1,
      anon_sym_RPAREN,
  [15017] = 1,
    ACTIONS(2062), 1,
      anon_sym_LPAREN,
  [15021] = 1,
    ACTIONS(2064), 1,
      anon_sym_RPAREN,
  [15025] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [15029] = 1,
    ACTIONS(2068), 1,
      anon_sym_EQ,
  [15033] = 1,
    ACTIONS(2070), 1,
      anon_sym_RBRACK,
  [15037] = 1,
    ACTIONS(2072), 1,
      aux_sym_create_function_token1,
  [15041] = 1,
    ACTIONS(2074), 1,
      anon_sym_EQ,
  [15045] = 1,
    ACTIONS(2076), 1,
      aux_sym_order_spec_token1,
  [15049] = 1,
    ACTIONS(2078), 1,
      aux_sym_create_function_token2,
  [15053] = 1,
    ACTIONS(2080), 1,
      anon_sym_RPAREN,
  [15057] = 1,
    ACTIONS(2082), 1,
      aux_sym_create_function_token1,
  [15061] = 1,
    ACTIONS(2084), 1,
      sym_object_name,
  [15065] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_function_token2,
  [15069] = 1,
    ACTIONS(2088), 1,
      aux_sym_order_spec_token2,
  [15073] = 1,
    ACTIONS(2090), 1,
      sym__code_block,
  [15077] = 1,
    ACTIONS(2092), 1,
      aux_sym_select_element_token1,
  [15081] = 1,
    ACTIONS(2094), 1,
      sym_object_name,
  [15085] = 1,
    ACTIONS(2096), 1,
      aux_sym_create_aggregate_token3,
  [15089] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_aggregate_token4,
  [15093] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [15097] = 1,
    ACTIONS(2102), 1,
      sym_object_name,
  [15101] = 1,
    ACTIONS(2104), 1,
      anon_sym_LPAREN,
  [15105] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15109] = 1,
    ACTIONS(2108), 1,
      anon_sym_RPAREN,
  [15113] = 1,
    ACTIONS(2110), 1,
      aux_sym_delete_statement_token3,
  [15117] = 1,
    ACTIONS(979), 1,
      aux_sym_column_not_null_token1,
  [15121] = 1,
    ACTIONS(2112), 1,
      aux_sym_select_statement_token5,
  [15125] = 1,
    ACTIONS(2114), 1,
      aux_sym_relation_contains_key_token2,
  [15129] = 1,
    ACTIONS(2116), 1,
      sym_object_name,
  [15133] = 1,
    ACTIONS(2118), 1,
      aux_sym_select_statement_token1,
  [15137] = 1,
    ACTIONS(2120), 1,
      aux_sym_using_timestamp_spec_token1,
  [15141] = 1,
    ACTIONS(2122), 1,
      aux_sym_create_function_token1,
  [15145] = 1,
    ACTIONS(2124), 1,
      anon_sym_LPAREN,
  [15149] = 1,
    ACTIONS(2126), 1,
      sym_object_name,
  [15153] = 1,
    ACTIONS(2128), 1,
      anon_sym_RPAREN,
  [15157] = 1,
    ACTIONS(2130), 1,
      aux_sym_create_function_token1,
  [15161] = 1,
    ACTIONS(2132), 1,
      anon_sym_LPAREN,
  [15165] = 1,
    ACTIONS(2134), 1,
      sym_object_name,
  [15169] = 1,
    ACTIONS(2136), 1,
      aux_sym_create_function_token2,
  [15173] = 1,
    ACTIONS(2138), 1,
      aux_sym_select_statement_token5,
  [15177] = 1,
    ACTIONS(2140), 1,
      sym__string_literal,
  [15181] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_aggregate_token3,
  [15185] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15189] = 1,
    ACTIONS(2146), 1,
      aux_sym_insert_statement_token3,
  [15193] = 1,
    ACTIONS(2148), 1,
      aux_sym_insert_statement_token3,
  [15197] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15201] = 1,
    ACTIONS(2152), 1,
      aux_sym_insert_statement_token3,
  [15205] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15209] = 1,
    ACTIONS(2156), 1,
      sym_object_name,
  [15213] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15217] = 1,
    ACTIONS(2160), 1,
      aux_sym_create_index_token3,
  [15221] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15225] = 1,
    ACTIONS(2164), 1,
      aux_sym_update_token2,
  [15229] = 1,
    ACTIONS(2166), 1,
      anon_sym_COMMA,
  [15233] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [15237] = 1,
    ACTIONS(2170), 1,
      anon_sym_RPAREN,
  [15241] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15245] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [15249] = 1,
    ACTIONS(2176), 1,
      aux_sym_create_function_token1,
  [15253] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [15257] = 1,
    ACTIONS(2180), 1,
      sym_object_name,
  [15261] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_function_token2,
  [15265] = 1,
    ACTIONS(2184), 1,
      aux_sym_materialized_view_options_token1,
  [15269] = 1,
    ACTIONS(2186), 1,
      aux_sym_select_element_token1,
  [15273] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15277] = 1,
    ACTIONS(2190), 1,
      aux_sym_create_function_token2,
  [15281] = 1,
    ACTIONS(2192), 1,
      aux_sym_update_token2,
  [15285] = 1,
    ACTIONS(2194), 1,
      sym__code_block,
  [15289] = 1,
    ACTIONS(2196), 1,
      aux_sym_select_element_token1,
  [15293] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15297] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [15301] = 1,
    ACTIONS(2202), 1,
      aux_sym_create_aggregate_token5,
  [15305] = 1,
    ACTIONS(2204), 1,
      aux_sym_create_aggregate_token6,
  [15309] = 1,
    ACTIONS(2206), 1,
      aux_sym_from_spec_token1,
  [15313] = 1,
    ACTIONS(2208), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15317] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15321] = 1,
    ACTIONS(2212), 1,
      aux_sym_create_materialized_view_token1,
  [15325] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_materialized_view_token1,
  [15329] = 1,
    ACTIONS(2216), 1,
      aux_sym_insert_statement_token3,
  [15333] = 1,
    ACTIONS(2218), 1,
      anon_sym_EQ,
  [15337] = 1,
    ACTIONS(2220), 1,
      anon_sym_EQ,
  [15341] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [15345] = 1,
    ACTIONS(2224), 1,
      anon_sym_LPAREN,
  [15349] = 1,
    ACTIONS(2226), 1,
      aux_sym_delete_statement_token3,
  [15353] = 1,
    ACTIONS(2228), 1,
      aux_sym_grant_token2,
  [15357] = 1,
    ACTIONS(2230), 1,
      anon_sym_EQ,
  [15361] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [15365] = 1,
    ACTIONS(2234), 1,
      aux_sym_delete_statement_token3,
  [15369] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_function_token1,
  [15373] = 1,
    ACTIONS(2238), 1,
      sym_object_name,
  [15377] = 1,
    ACTIONS(2240), 1,
      aux_sym_create_function_token2,
  [15381] = 1,
    ACTIONS(2242), 1,
      aux_sym_drop_type_token1,
  [15385] = 1,
    ACTIONS(2244), 1,
      aux_sym_create_function_token1,
  [15389] = 1,
    ACTIONS(2246), 1,
      aux_sym_select_element_token1,
  [15393] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15397] = 1,
    ACTIONS(2250), 1,
      aux_sym_create_function_token2,
  [15401] = 1,
    ACTIONS(2252), 1,
      anon_sym_RPAREN,
  [15405] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15409] = 1,
    ACTIONS(2256), 1,
      aux_sym_create_aggregate_token4,
  [15413] = 1,
    ACTIONS(2258), 1,
      aux_sym_create_aggregate_token5,
  [15417] = 1,
    ACTIONS(2260), 1,
      aux_sym_delete_statement_token3,
  [15421] = 1,
    ACTIONS(2262), 1,
      aux_sym_grant_token2,
  [15425] = 1,
    ACTIONS(2264), 1,
      sym_object_name,
  [15429] = 1,
    ACTIONS(2266), 1,
      anon_sym_RPAREN,
  [15433] = 1,
    ACTIONS(2268), 1,
      sym_object_name,
  [15437] = 1,
    ACTIONS(2270), 1,
      anon_sym_EQ,
  [15441] = 1,
    ACTIONS(2272), 1,
      aux_sym__decimal_literal_token1,
  [15445] = 1,
    ACTIONS(2274), 1,
      aux_sym__decimal_literal_token1,
  [15449] = 1,
    ACTIONS(2276), 1,
      aux_sym_create_function_token2,
  [15453] = 1,
    ACTIONS(2278), 1,
      aux_sym_delete_statement_token3,
  [15457] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_function_token1,
  [15461] = 1,
    ACTIONS(2282), 1,
      aux_sym_select_element_token1,
  [15465] = 1,
    ACTIONS(2284), 1,
      sym_object_name,
  [15469] = 1,
    ACTIONS(2286), 1,
      aux_sym_create_function_token2,
  [15473] = 1,
    ACTIONS(2288), 1,
      sym__code_block,
  [15477] = 1,
    ACTIONS(2290), 1,
      aux_sym_select_element_token1,
  [15481] = 1,
    ACTIONS(2292), 1,
      sym_object_name,
  [15485] = 1,
    ACTIONS(2294), 1,
      aux_sym_delete_statement_token3,
  [15489] = 1,
    ACTIONS(2296), 1,
      sym__code_block,
  [15493] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_aggregate_token4,
  [15497] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_aggregate_token5,
  [15501] = 1,
    ACTIONS(2302), 1,
      sym_object_name,
  [15505] = 1,
    ACTIONS(2304), 1,
      anon_sym_LPAREN,
  [15509] = 1,
    ACTIONS(2306), 1,
      sym_object_name,
  [15513] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [15517] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_materialized_view_token1,
  [15521] = 1,
    ACTIONS(2312), 1,
      aux_sym_select_statement_token5,
  [15525] = 1,
    ACTIONS(2314), 1,
      aux_sym_relation_contains_key_token2,
  [15529] = 1,
    ACTIONS(2316), 1,
      aux_sym_relation_contains_key_token2,
  [15533] = 1,
    ACTIONS(2318), 1,
      aux_sym_constant_token2,
  [15537] = 1,
    ACTIONS(2320), 1,
      aux_sym_delete_statement_token3,
  [15541] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_index_token3,
  [15545] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15549] = 1,
    ACTIONS(2326), 1,
      anon_sym_LPAREN,
  [15553] = 1,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
  [15557] = 1,
    ACTIONS(2328), 1,
      aux_sym_delete_statement_token3,
  [15561] = 1,
    ACTIONS(2330), 1,
      aux_sym_create_function_token1,
  [15565] = 1,
    ACTIONS(2332), 1,
      anon_sym_RPAREN,
  [15569] = 1,
    ACTIONS(2334), 1,
      anon_sym_LPAREN,
  [15573] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_function_token2,
  [15577] = 1,
    ACTIONS(2338), 1,
      aux_sym_delete_statement_token3,
  [15581] = 1,
    ACTIONS(2340), 1,
      aux_sym_create_function_token1,
  [15585] = 1,
    ACTIONS(2342), 1,
      sym_object_name,
  [15589] = 1,
    ACTIONS(2344), 1,
      aux_sym_create_function_token2,
  [15593] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [15597] = 1,
    ACTIONS(2348), 1,
      sym__code_block,
  [15601] = 1,
    ACTIONS(2350), 1,
      aux_sym_select_element_token1,
  [15605] = 1,
    ACTIONS(2352), 1,
      sym_object_name,
  [15609] = 1,
    ACTIONS(2354), 1,
      aux_sym_create_aggregate_token3,
  [15613] = 1,
    ACTIONS(2356), 1,
      aux_sym_create_aggregate_token4,
  [15617] = 1,
    ACTIONS(2358), 1,
      anon_sym_LPAREN,
  [15621] = 1,
    ACTIONS(2360), 1,
      sym_object_name,
  [15625] = 1,
    ACTIONS(2362), 1,
      aux_sym_insert_statement_token3,
  [15629] = 1,
    ACTIONS(2364), 1,
      anon_sym_RPAREN,
  [15633] = 1,
    ACTIONS(2366), 1,
      sym_object_name,
  [15637] = 1,
    ACTIONS(2368), 1,
      aux_sym_create_function_token2,
  [15641] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [15645] = 1,
    ACTIONS(2372), 1,
      sym__code_block,
  [15649] = 1,
    ACTIONS(2374), 1,
      aux_sym_select_element_token1,
  [15653] = 1,
    ACTIONS(2376), 1,
      sym_object_name,
  [15657] = 1,
    ACTIONS(2378), 1,
      aux_sym_insert_statement_token3,
  [15661] = 1,
    ACTIONS(2380), 1,
      sym__code_block,
  [15665] = 1,
    ACTIONS(2382), 1,
      aux_sym_select_element_token1,
  [15669] = 1,
    ACTIONS(2384), 1,
      aux_sym_using_timestamp_spec_token1,
  [15673] = 1,
    ACTIONS(2386), 1,
      sym_object_name,
  [15677] = 1,
    ACTIONS(2388), 1,
      sym_object_name,
  [15681] = 1,
    ACTIONS(2390), 1,
      aux_sym_create_aggregate_token6,
  [15685] = 1,
    ACTIONS(2392), 1,
      aux_sym_insert_statement_token3,
  [15689] = 1,
    ACTIONS(2394), 1,
      anon_sym_RPAREN,
  [15693] = 1,
    ACTIONS(2396), 1,
      sym_object_name,
  [15697] = 1,
    ACTIONS(2398), 1,
      sym_object_name,
  [15701] = 1,
    ACTIONS(2400), 1,
      aux_sym_from_spec_token1,
  [15705] = 1,
    ACTIONS(2402), 1,
      aux_sym_relation_contains_key_token2,
  [15709] = 1,
    ACTIONS(2404), 1,
      aux_sym_create_materialized_view_token1,
  [15713] = 1,
    ACTIONS(2406), 1,
      anon_sym_LPAREN,
  [15717] = 1,
    ACTIONS(2408), 1,
      anon_sym_LPAREN,
  [15721] = 1,
    ACTIONS(2410), 1,
      aux_sym_select_statement_token1,
  [15725] = 1,
    ACTIONS(2412), 1,
      sym_object_name,
  [15729] = 1,
    ACTIONS(2414), 1,
      anon_sym_RPAREN,
  [15733] = 1,
    ACTIONS(2416), 1,
      aux_sym_insert_statement_token3,
  [15737] = 1,
    ACTIONS(2418), 1,
      aux_sym_create_function_token1,
  [15741] = 1,
    ACTIONS(2420), 1,
      anon_sym_RPAREN,
  [15745] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [15749] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_function_token2,
  [15753] = 1,
    ACTIONS(2426), 1,
      aux_sym_insert_statement_token3,
  [15757] = 1,
    ACTIONS(2428), 1,
      aux_sym_select_element_token1,
  [15761] = 1,
    ACTIONS(2430), 1,
      sym_object_name,
  [15765] = 1,
    ACTIONS(2432), 1,
      aux_sym_create_function_token2,
  [15769] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15773] = 1,
    ACTIONS(2436), 1,
      sym__code_block,
  [15777] = 1,
    ACTIONS(2438), 1,
      aux_sym_select_element_token1,
  [15781] = 1,
    ACTIONS(2440), 1,
      sym_object_name,
  [15785] = 1,
    ACTIONS(2442), 1,
      aux_sym_insert_statement_token3,
  [15789] = 1,
    ACTIONS(2444), 1,
      aux_sym_create_aggregate_token5,
  [15793] = 1,
    ACTIONS(2446), 1,
      aux_sym_create_aggregate_token6,
  [15797] = 1,
    ACTIONS(2448), 1,
      aux_sym_select_element_token1,
  [15801] = 1,
    ACTIONS(2450), 1,
      sym_object_name,
  [15805] = 1,
    ACTIONS(2452), 1,
      aux_sym_create_function_token2,
  [15809] = 1,
    ACTIONS(2454), 1,
      aux_sym_materialized_view_options_token1,
  [15813] = 1,
    ACTIONS(2456), 1,
      sym__code_block,
  [15817] = 1,
    ACTIONS(2458), 1,
      aux_sym_select_element_token1,
  [15821] = 1,
    ACTIONS(2460), 1,
      aux_sym_materialized_view_options_token1,
  [15825] = 1,
    ACTIONS(2462), 1,
      sym__code_block,
  [15829] = 1,
    ACTIONS(2464), 1,
      aux_sym_create_aggregate_token5,
  [15833] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_aggregate_token6,
  [15837] = 1,
    ACTIONS(2468), 1,
      aux_sym_insert_statement_token3,
  [15841] = 1,
    ACTIONS(2470), 1,
      aux_sym_create_index_token3,
  [15845] = 1,
    ACTIONS(2472), 1,
      anon_sym_COLON,
  [15849] = 1,
    ACTIONS(2474), 1,
      aux_sym_insert_statement_token3,
  [15853] = 1,
    ACTIONS(2476), 1,
      aux_sym_delete_statement_token3,
  [15857] = 1,
    ACTIONS(2478), 1,
      anon_sym_LPAREN,
  [15861] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [15865] = 1,
    ACTIONS(2482), 1,
      aux_sym_create_materialized_view_token1,
  [15869] = 1,
    ACTIONS(2484), 1,
      aux_sym_create_materialized_view_token1,
  [15873] = 1,
    ACTIONS(2486), 1,
      anon_sym_LPAREN,
  [15877] = 1,
    ACTIONS(2488), 1,
      aux_sym_relation_contains_key_token2,
  [15881] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_index_token3,
  [15885] = 1,
    ACTIONS(2492), 1,
      anon_sym_LPAREN,
  [15889] = 1,
    ACTIONS(2494), 1,
      aux_sym_create_function_token1,
  [15893] = 1,
    ACTIONS(2496), 1,
      aux_sym_create_function_token2,
  [15897] = 1,
    ACTIONS(2498), 1,
      aux_sym_insert_statement_token3,
  [15901] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_function_token1,
  [15905] = 1,
    ACTIONS(2502), 1,
      aux_sym_select_element_token1,
  [15909] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [15913] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_function_token2,
  [15917] = 1,
    ACTIONS(2508), 1,
      sym__code_block,
  [15921] = 1,
    ACTIONS(2510), 1,
      aux_sym_select_element_token1,
  [15925] = 1,
    ACTIONS(2512), 1,
      sym_object_name,
  [15929] = 1,
    ACTIONS(2514), 1,
      aux_sym_create_index_token3,
  [15933] = 1,
    ACTIONS(2516), 1,
      sym__code_block,
  [15937] = 1,
    ACTIONS(2518), 1,
      aux_sym_create_aggregate_token4,
  [15941] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_aggregate_token5,
  [15945] = 1,
    ACTIONS(2522), 1,
      sym_object_name,
  [15949] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [15953] = 1,
    ACTIONS(2526), 1,
      sym__code_block,
  [15957] = 1,
    ACTIONS(2528), 1,
      aux_sym_select_element_token1,
  [15961] = 1,
    ACTIONS(2530), 1,
      sym_object_name,
  [15965] = 1,
    ACTIONS(2532), 1,
      aux_sym_insert_statement_token3,
  [15969] = 1,
    ACTIONS(2534), 1,
      sym__code_block,
  [15973] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [15977] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [15981] = 1,
    ACTIONS(2540), 1,
      aux_sym_constant_token2,
  [15985] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_index_token3,
  [15989] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [15993] = 1,
    ACTIONS(2546), 1,
      anon_sym_LPAREN,
  [15997] = 1,
    ACTIONS(2548), 1,
      aux_sym_create_keyspace_token1,
  [16001] = 1,
    ACTIONS(2550), 1,
      aux_sym_using_timestamp_spec_token2,
  [16005] = 1,
    ACTIONS(2552), 1,
      anon_sym_RPAREN,
  [16009] = 1,
    ACTIONS(2554), 1,
      anon_sym_RPAREN,
  [16013] = 1,
    ACTIONS(2556), 1,
      sym_object_name,
  [16017] = 1,
    ACTIONS(2558), 1,
      sym_object_name,
  [16021] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [16025] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16029] = 1,
    ACTIONS(2564), 1,
      aux_sym_relation_contains_key_token2,
  [16033] = 1,
    ACTIONS(2566), 1,
      aux_sym_relation_contains_key_token2,
  [16037] = 1,
    ACTIONS(2568), 1,
      anon_sym_LPAREN,
  [16041] = 1,
    ACTIONS(2570), 1,
      anon_sym_LPAREN,
  [16045] = 1,
    ACTIONS(2572), 1,
      anon_sym_RPAREN,
  [16049] = 1,
    ACTIONS(2574), 1,
      anon_sym_RPAREN,
  [16053] = 1,
    ACTIONS(2576), 1,
      sym_object_name,
  [16057] = 1,
    ACTIONS(2578), 1,
      anon_sym_STAR,
  [16061] = 1,
    ACTIONS(2580), 1,
      sym_object_name,
  [16065] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_function_token2,
  [16069] = 1,
    ACTIONS(2584), 1,
      anon_sym_RPAREN,
  [16073] = 1,
    ACTIONS(2586), 1,
      sym__code_block,
  [16077] = 1,
    ACTIONS(2588), 1,
      aux_sym_select_element_token1,
  [16081] = 1,
    ACTIONS(2590), 1,
      sym_object_name,
  [16085] = 1,
    ACTIONS(2592), 1,
      anon_sym_RPAREN,
  [16089] = 1,
    ACTIONS(2594), 1,
      sym__code_block,
  [16093] = 1,
    ACTIONS(2596), 1,
      aux_sym_select_element_token1,
  [16097] = 1,
    ACTIONS(2598), 1,
      aux_sym_relation_contains_key_token2,
  [16101] = 1,
    ACTIONS(2600), 1,
      sym_object_name,
  [16105] = 1,
    ACTIONS(2602), 1,
      sym_object_name,
  [16109] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_aggregate_token6,
  [16113] = 1,
    ACTIONS(2606), 1,
      aux_sym_insert_statement_token2,
  [16117] = 1,
    ACTIONS(2608), 1,
      anon_sym_RPAREN,
  [16121] = 1,
    ACTIONS(2610), 1,
      sym__code_block,
  [16125] = 1,
    ACTIONS(2612), 1,
      aux_sym_select_element_token1,
  [16129] = 1,
    ACTIONS(2614), 1,
      sym_object_name,
  [16133] = 1,
    ACTIONS(2616), 1,
      aux_sym_create_aggregate_token6,
  [16137] = 1,
    ACTIONS(2618), 1,
      aux_sym_drop_materialized_view_token2,
  [16141] = 1,
    ACTIONS(2620), 1,
      aux_sym_materialized_view_options_token1,
  [16145] = 1,
    ACTIONS(2622), 1,
      sym_object_name,
  [16149] = 1,
    ACTIONS(2624), 1,
      aux_sym_relation_contains_key_token2,
  [16153] = 1,
    ACTIONS(2626), 1,
      aux_sym_delete_statement_token3,
  [16157] = 1,
    ACTIONS(2628), 1,
      aux_sym_constant_token2,
  [16161] = 1,
    ACTIONS(2630), 1,
      aux_sym_create_index_token3,
  [16165] = 1,
    ACTIONS(2632), 1,
      sym_object_name,
  [16169] = 1,
    ACTIONS(2634), 1,
      anon_sym_RPAREN,
  [16173] = 1,
    ACTIONS(2636), 1,
      aux_sym_create_materialized_view_token1,
  [16177] = 1,
    ACTIONS(2638), 1,
      anon_sym_LPAREN,
  [16181] = 1,
    ACTIONS(2640), 1,
      anon_sym_LPAREN,
  [16185] = 1,
    ACTIONS(2642), 1,
      anon_sym_RPAREN,
  [16189] = 1,
    ACTIONS(2644), 1,
      aux_sym_create_function_token1,
  [16193] = 1,
    ACTIONS(2646), 1,
      aux_sym_create_index_token3,
  [16197] = 1,
    ACTIONS(2648), 1,
      aux_sym_create_index_token3,
  [16201] = 1,
    ACTIONS(2650), 1,
      anon_sym_RPAREN,
  [16205] = 1,
    ACTIONS(2652), 1,
      sym__string_literal,
  [16209] = 1,
    ACTIONS(2654), 1,
      aux_sym_select_element_token1,
  [16213] = 1,
    ACTIONS(2656), 1,
      sym_object_name,
  [16217] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_function_token2,
  [16221] = 1,
    ACTIONS(2660), 1,
      sym__boolean_literal,
  [16225] = 1,
    ACTIONS(2662), 1,
      sym__code_block,
  [16229] = 1,
    ACTIONS(2664), 1,
      aux_sym_select_element_token1,
  [16233] = 1,
    ACTIONS(2666), 1,
      aux_sym_drop_materialized_view_token2,
  [16237] = 1,
    ACTIONS(2668), 1,
      sym__code_block,
  [16241] = 1,
    ACTIONS(2670), 1,
      aux_sym_create_aggregate_token5,
  [16245] = 1,
    ACTIONS(2672), 1,
      aux_sym_create_aggregate_token6,
  [16249] = 1,
    ACTIONS(2674), 1,
      anon_sym_LPAREN,
  [16253] = 1,
    ACTIONS(2676), 1,
      sym__boolean_literal,
  [16257] = 1,
    ACTIONS(2678), 1,
      sym__code_block,
  [16261] = 1,
    ACTIONS(2680), 1,
      aux_sym_create_aggregate_token3,
  [16265] = 1,
    ACTIONS(2682), 1,
      aux_sym_relation_contains_key_token2,
  [16269] = 1,
    ACTIONS(2684), 1,
      aux_sym_select_statement_token5,
  [16273] = 1,
    ACTIONS(2686), 1,
      aux_sym_select_element_token1,
  [16277] = 1,
    ACTIONS(2688), 1,
      aux_sym_using_timestamp_spec_token1,
  [16281] = 1,
    ACTIONS(2690), 1,
      anon_sym_RPAREN,
  [16285] = 1,
    ACTIONS(2692), 1,
      aux_sym_update_token2,
  [16289] = 1,
    ACTIONS(2694), 1,
      sym_object_name,
  [16293] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_aggregate_token2,
  [16297] = 1,
    ACTIONS(2698), 1,
      sym_object_name,
  [16301] = 1,
    ACTIONS(2700), 1,
      sym__code_block,
  [16305] = 1,
    ACTIONS(2702), 1,
      aux_sym_select_element_token1,
  [16309] = 1,
    ACTIONS(2704), 1,
      sym_object_name,
  [16313] = 1,
    ACTIONS(2706), 1,
      sym_object_name,
  [16317] = 1,
    ACTIONS(2708), 1,
      sym__code_block,
  [16321] = 1,
    ACTIONS(2710), 1,
      aux_sym_using_timestamp_spec_token2,
  [16325] = 1,
    ACTIONS(2712), 1,
      sym_object_name,
  [16329] = 1,
    ACTIONS(2714), 1,
      aux_sym_drop_materialized_view_token2,
  [16333] = 1,
    ACTIONS(2716), 1,
      aux_sym_using_ttl_timestamp_token1,
  [16337] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16341] = 1,
    ACTIONS(2720), 1,
      aux_sym_delete_statement_token3,
  [16345] = 1,
    ACTIONS(2722), 1,
      anon_sym_LPAREN,
  [16349] = 1,
    ACTIONS(2724), 1,
      anon_sym_RPAREN,
  [16353] = 1,
    ACTIONS(2726), 1,
      anon_sym_RPAREN,
  [16357] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16361] = 1,
    ACTIONS(2730), 1,
      sym_object_name,
  [16365] = 1,
    ACTIONS(2732), 1,
      sym_object_name,
  [16369] = 1,
    ACTIONS(2734), 1,
      sym_object_name,
  [16373] = 1,
    ACTIONS(2736), 1,
      aux_sym_begin_batch_token4,
  [16377] = 1,
    ACTIONS(2738), 1,
      sym__code_block,
  [16381] = 1,
    ACTIONS(2740), 1,
      aux_sym_select_element_token1,
  [16385] = 1,
    ACTIONS(2742), 1,
      sym_object_name,
  [16389] = 1,
    ACTIONS(2744), 1,
      aux_sym_create_aggregate_token6,
  [16393] = 1,
    ACTIONS(2746), 1,
      sym_object_name,
  [16397] = 1,
    ACTIONS(2748), 1,
      sym_object_name,
  [16401] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16405] = 1,
    ACTIONS(2752), 1,
      aux_sym_resource_token2,
  [16409] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16413] = 1,
    ACTIONS(2756), 1,
      sym_object_name,
  [16417] = 1,
    ACTIONS(2758), 1,
      sym_object_name,
  [16421] = 1,
    ACTIONS(2760), 1,
      sym__code_block,
  [16425] = 1,
    ACTIONS(2762), 1,
      aux_sym_delete_statement_token3,
  [16429] = 1,
    ACTIONS(2764), 1,
      anon_sym_RPAREN,
  [16433] = 1,
    ACTIONS(2766), 1,
      ts_builtin_sym_end,
  [16437] = 1,
    ACTIONS(2768), 1,
      aux_sym_begin_batch_token4,
  [16441] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16445] = 1,
    ACTIONS(2772), 1,
      sym_object_name,
  [16449] = 1,
    ACTIONS(2774), 1,
      anon_sym_RBRACK,
  [16453] = 1,
    ACTIONS(2776), 1,
      aux_sym_insert_statement_token2,
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
  [SMALL_STATE(61)] = 2164,
  [SMALL_STATE(62)] = 2196,
  [SMALL_STATE(63)] = 2223,
  [SMALL_STATE(64)] = 2254,
  [SMALL_STATE(65)] = 2285,
  [SMALL_STATE(66)] = 2312,
  [SMALL_STATE(67)] = 2339,
  [SMALL_STATE(68)] = 2370,
  [SMALL_STATE(69)] = 2401,
  [SMALL_STATE(70)] = 2431,
  [SMALL_STATE(71)] = 2471,
  [SMALL_STATE(72)] = 2497,
  [SMALL_STATE(73)] = 2537,
  [SMALL_STATE(74)] = 2567,
  [SMALL_STATE(75)] = 2607,
  [SMALL_STATE(76)] = 2632,
  [SMALL_STATE(77)] = 2657,
  [SMALL_STATE(78)] = 2682,
  [SMALL_STATE(79)] = 2707,
  [SMALL_STATE(80)] = 2732,
  [SMALL_STATE(81)] = 2757,
  [SMALL_STATE(82)] = 2782,
  [SMALL_STATE(83)] = 2807,
  [SMALL_STATE(84)] = 2832,
  [SMALL_STATE(85)] = 2857,
  [SMALL_STATE(86)] = 2896,
  [SMALL_STATE(87)] = 2925,
  [SMALL_STATE(88)] = 2954,
  [SMALL_STATE(89)] = 2988,
  [SMALL_STATE(90)] = 3012,
  [SMALL_STATE(91)] = 3036,
  [SMALL_STATE(92)] = 3070,
  [SMALL_STATE(93)] = 3094,
  [SMALL_STATE(94)] = 3128,
  [SMALL_STATE(95)] = 3152,
  [SMALL_STATE(96)] = 3179,
  [SMALL_STATE(97)] = 3202,
  [SMALL_STATE(98)] = 3227,
  [SMALL_STATE(99)] = 3252,
  [SMALL_STATE(100)] = 3277,
  [SMALL_STATE(101)] = 3302,
  [SMALL_STATE(102)] = 3327,
  [SMALL_STATE(103)] = 3355,
  [SMALL_STATE(104)] = 3381,
  [SMALL_STATE(105)] = 3407,
  [SMALL_STATE(106)] = 3429,
  [SMALL_STATE(107)] = 3457,
  [SMALL_STATE(108)] = 3485,
  [SMALL_STATE(109)] = 3513,
  [SMALL_STATE(110)] = 3539,
  [SMALL_STATE(111)] = 3561,
  [SMALL_STATE(112)] = 3599,
  [SMALL_STATE(113)] = 3627,
  [SMALL_STATE(114)] = 3649,
  [SMALL_STATE(115)] = 3671,
  [SMALL_STATE(116)] = 3697,
  [SMALL_STATE(117)] = 3725,
  [SMALL_STATE(118)] = 3749,
  [SMALL_STATE(119)] = 3777,
  [SMALL_STATE(120)] = 3815,
  [SMALL_STATE(121)] = 3837,
  [SMALL_STATE(122)] = 3859,
  [SMALL_STATE(123)] = 3881,
  [SMALL_STATE(124)] = 3903,
  [SMALL_STATE(125)] = 3924,
  [SMALL_STATE(126)] = 3949,
  [SMALL_STATE(127)] = 3974,
  [SMALL_STATE(128)] = 3995,
  [SMALL_STATE(129)] = 4020,
  [SMALL_STATE(130)] = 4041,
  [SMALL_STATE(131)] = 4062,
  [SMALL_STATE(132)] = 4087,
  [SMALL_STATE(133)] = 4108,
  [SMALL_STATE(134)] = 4129,
  [SMALL_STATE(135)] = 4154,
  [SMALL_STATE(136)] = 4175,
  [SMALL_STATE(137)] = 4200,
  [SMALL_STATE(138)] = 4225,
  [SMALL_STATE(139)] = 4250,
  [SMALL_STATE(140)] = 4275,
  [SMALL_STATE(141)] = 4300,
  [SMALL_STATE(142)] = 4321,
  [SMALL_STATE(143)] = 4342,
  [SMALL_STATE(144)] = 4363,
  [SMALL_STATE(145)] = 4384,
  [SMALL_STATE(146)] = 4409,
  [SMALL_STATE(147)] = 4434,
  [SMALL_STATE(148)] = 4459,
  [SMALL_STATE(149)] = 4484,
  [SMALL_STATE(150)] = 4505,
  [SMALL_STATE(151)] = 4530,
  [SMALL_STATE(152)] = 4555,
  [SMALL_STATE(153)] = 4580,
  [SMALL_STATE(154)] = 4603,
  [SMALL_STATE(155)] = 4628,
  [SMALL_STATE(156)] = 4653,
  [SMALL_STATE(157)] = 4678,
  [SMALL_STATE(158)] = 4703,
  [SMALL_STATE(159)] = 4728,
  [SMALL_STATE(160)] = 4753,
  [SMALL_STATE(161)] = 4778,
  [SMALL_STATE(162)] = 4799,
  [SMALL_STATE(163)] = 4824,
  [SMALL_STATE(164)] = 4849,
  [SMALL_STATE(165)] = 4874,
  [SMALL_STATE(166)] = 4899,
  [SMALL_STATE(167)] = 4922,
  [SMALL_STATE(168)] = 4947,
  [SMALL_STATE(169)] = 4972,
  [SMALL_STATE(170)] = 4997,
  [SMALL_STATE(171)] = 5022,
  [SMALL_STATE(172)] = 5057,
  [SMALL_STATE(173)] = 5078,
  [SMALL_STATE(174)] = 5103,
  [SMALL_STATE(175)] = 5128,
  [SMALL_STATE(176)] = 5149,
  [SMALL_STATE(177)] = 5174,
  [SMALL_STATE(178)] = 5199,
  [SMALL_STATE(179)] = 5224,
  [SMALL_STATE(180)] = 5245,
  [SMALL_STATE(181)] = 5270,
  [SMALL_STATE(182)] = 5295,
  [SMALL_STATE(183)] = 5320,
  [SMALL_STATE(184)] = 5345,
  [SMALL_STATE(185)] = 5370,
  [SMALL_STATE(186)] = 5395,
  [SMALL_STATE(187)] = 5420,
  [SMALL_STATE(188)] = 5441,
  [SMALL_STATE(189)] = 5466,
  [SMALL_STATE(190)] = 5491,
  [SMALL_STATE(191)] = 5512,
  [SMALL_STATE(192)] = 5537,
  [SMALL_STATE(193)] = 5562,
  [SMALL_STATE(194)] = 5587,
  [SMALL_STATE(195)] = 5612,
  [SMALL_STATE(196)] = 5637,
  [SMALL_STATE(197)] = 5662,
  [SMALL_STATE(198)] = 5687,
  [SMALL_STATE(199)] = 5712,
  [SMALL_STATE(200)] = 5734,
  [SMALL_STATE(201)] = 5756,
  [SMALL_STATE(202)] = 5778,
  [SMALL_STATE(203)] = 5800,
  [SMALL_STATE(204)] = 5822,
  [SMALL_STATE(205)] = 5842,
  [SMALL_STATE(206)] = 5862,
  [SMALL_STATE(207)] = 5884,
  [SMALL_STATE(208)] = 5904,
  [SMALL_STATE(209)] = 5924,
  [SMALL_STATE(210)] = 5944,
  [SMALL_STATE(211)] = 5964,
  [SMALL_STATE(212)] = 5986,
  [SMALL_STATE(213)] = 6006,
  [SMALL_STATE(214)] = 6028,
  [SMALL_STATE(215)] = 6050,
  [SMALL_STATE(216)] = 6072,
  [SMALL_STATE(217)] = 6094,
  [SMALL_STATE(218)] = 6116,
  [SMALL_STATE(219)] = 6138,
  [SMALL_STATE(220)] = 6158,
  [SMALL_STATE(221)] = 6178,
  [SMALL_STATE(222)] = 6200,
  [SMALL_STATE(223)] = 6222,
  [SMALL_STATE(224)] = 6244,
  [SMALL_STATE(225)] = 6266,
  [SMALL_STATE(226)] = 6288,
  [SMALL_STATE(227)] = 6308,
  [SMALL_STATE(228)] = 6330,
  [SMALL_STATE(229)] = 6350,
  [SMALL_STATE(230)] = 6372,
  [SMALL_STATE(231)] = 6392,
  [SMALL_STATE(232)] = 6412,
  [SMALL_STATE(233)] = 6434,
  [SMALL_STATE(234)] = 6454,
  [SMALL_STATE(235)] = 6476,
  [SMALL_STATE(236)] = 6498,
  [SMALL_STATE(237)] = 6520,
  [SMALL_STATE(238)] = 6542,
  [SMALL_STATE(239)] = 6562,
  [SMALL_STATE(240)] = 6584,
  [SMALL_STATE(241)] = 6604,
  [SMALL_STATE(242)] = 6626,
  [SMALL_STATE(243)] = 6645,
  [SMALL_STATE(244)] = 6680,
  [SMALL_STATE(245)] = 6699,
  [SMALL_STATE(246)] = 6718,
  [SMALL_STATE(247)] = 6737,
  [SMALL_STATE(248)] = 6756,
  [SMALL_STATE(249)] = 6775,
  [SMALL_STATE(250)] = 6794,
  [SMALL_STATE(251)] = 6813,
  [SMALL_STATE(252)] = 6832,
  [SMALL_STATE(253)] = 6851,
  [SMALL_STATE(254)] = 6870,
  [SMALL_STATE(255)] = 6889,
  [SMALL_STATE(256)] = 6908,
  [SMALL_STATE(257)] = 6927,
  [SMALL_STATE(258)] = 6946,
  [SMALL_STATE(259)] = 6965,
  [SMALL_STATE(260)] = 6984,
  [SMALL_STATE(261)] = 7003,
  [SMALL_STATE(262)] = 7022,
  [SMALL_STATE(263)] = 7041,
  [SMALL_STATE(264)] = 7060,
  [SMALL_STATE(265)] = 7079,
  [SMALL_STATE(266)] = 7098,
  [SMALL_STATE(267)] = 7117,
  [SMALL_STATE(268)] = 7136,
  [SMALL_STATE(269)] = 7155,
  [SMALL_STATE(270)] = 7174,
  [SMALL_STATE(271)] = 7193,
  [SMALL_STATE(272)] = 7212,
  [SMALL_STATE(273)] = 7231,
  [SMALL_STATE(274)] = 7250,
  [SMALL_STATE(275)] = 7269,
  [SMALL_STATE(276)] = 7288,
  [SMALL_STATE(277)] = 7307,
  [SMALL_STATE(278)] = 7326,
  [SMALL_STATE(279)] = 7345,
  [SMALL_STATE(280)] = 7366,
  [SMALL_STATE(281)] = 7385,
  [SMALL_STATE(282)] = 7404,
  [SMALL_STATE(283)] = 7423,
  [SMALL_STATE(284)] = 7442,
  [SMALL_STATE(285)] = 7461,
  [SMALL_STATE(286)] = 7480,
  [SMALL_STATE(287)] = 7499,
  [SMALL_STATE(288)] = 7518,
  [SMALL_STATE(289)] = 7537,
  [SMALL_STATE(290)] = 7556,
  [SMALL_STATE(291)] = 7575,
  [SMALL_STATE(292)] = 7594,
  [SMALL_STATE(293)] = 7613,
  [SMALL_STATE(294)] = 7632,
  [SMALL_STATE(295)] = 7651,
  [SMALL_STATE(296)] = 7670,
  [SMALL_STATE(297)] = 7689,
  [SMALL_STATE(298)] = 7708,
  [SMALL_STATE(299)] = 7727,
  [SMALL_STATE(300)] = 7746,
  [SMALL_STATE(301)] = 7765,
  [SMALL_STATE(302)] = 7784,
  [SMALL_STATE(303)] = 7803,
  [SMALL_STATE(304)] = 7822,
  [SMALL_STATE(305)] = 7841,
  [SMALL_STATE(306)] = 7860,
  [SMALL_STATE(307)] = 7879,
  [SMALL_STATE(308)] = 7898,
  [SMALL_STATE(309)] = 7917,
  [SMALL_STATE(310)] = 7936,
  [SMALL_STATE(311)] = 7955,
  [SMALL_STATE(312)] = 7974,
  [SMALL_STATE(313)] = 7993,
  [SMALL_STATE(314)] = 8012,
  [SMALL_STATE(315)] = 8031,
  [SMALL_STATE(316)] = 8050,
  [SMALL_STATE(317)] = 8069,
  [SMALL_STATE(318)] = 8088,
  [SMALL_STATE(319)] = 8107,
  [SMALL_STATE(320)] = 8126,
  [SMALL_STATE(321)] = 8145,
  [SMALL_STATE(322)] = 8164,
  [SMALL_STATE(323)] = 8183,
  [SMALL_STATE(324)] = 8202,
  [SMALL_STATE(325)] = 8221,
  [SMALL_STATE(326)] = 8240,
  [SMALL_STATE(327)] = 8259,
  [SMALL_STATE(328)] = 8278,
  [SMALL_STATE(329)] = 8297,
  [SMALL_STATE(330)] = 8316,
  [SMALL_STATE(331)] = 8335,
  [SMALL_STATE(332)] = 8354,
  [SMALL_STATE(333)] = 8373,
  [SMALL_STATE(334)] = 8392,
  [SMALL_STATE(335)] = 8411,
  [SMALL_STATE(336)] = 8430,
  [SMALL_STATE(337)] = 8449,
  [SMALL_STATE(338)] = 8468,
  [SMALL_STATE(339)] = 8487,
  [SMALL_STATE(340)] = 8506,
  [SMALL_STATE(341)] = 8525,
  [SMALL_STATE(342)] = 8544,
  [SMALL_STATE(343)] = 8563,
  [SMALL_STATE(344)] = 8582,
  [SMALL_STATE(345)] = 8601,
  [SMALL_STATE(346)] = 8620,
  [SMALL_STATE(347)] = 8639,
  [SMALL_STATE(348)] = 8658,
  [SMALL_STATE(349)] = 8677,
  [SMALL_STATE(350)] = 8696,
  [SMALL_STATE(351)] = 8715,
  [SMALL_STATE(352)] = 8734,
  [SMALL_STATE(353)] = 8753,
  [SMALL_STATE(354)] = 8772,
  [SMALL_STATE(355)] = 8791,
  [SMALL_STATE(356)] = 8810,
  [SMALL_STATE(357)] = 8829,
  [SMALL_STATE(358)] = 8848,
  [SMALL_STATE(359)] = 8867,
  [SMALL_STATE(360)] = 8886,
  [SMALL_STATE(361)] = 8905,
  [SMALL_STATE(362)] = 8924,
  [SMALL_STATE(363)] = 8943,
  [SMALL_STATE(364)] = 8962,
  [SMALL_STATE(365)] = 8981,
  [SMALL_STATE(366)] = 9000,
  [SMALL_STATE(367)] = 9019,
  [SMALL_STATE(368)] = 9038,
  [SMALL_STATE(369)] = 9057,
  [SMALL_STATE(370)] = 9076,
  [SMALL_STATE(371)] = 9095,
  [SMALL_STATE(372)] = 9114,
  [SMALL_STATE(373)] = 9133,
  [SMALL_STATE(374)] = 9152,
  [SMALL_STATE(375)] = 9171,
  [SMALL_STATE(376)] = 9190,
  [SMALL_STATE(377)] = 9209,
  [SMALL_STATE(378)] = 9228,
  [SMALL_STATE(379)] = 9247,
  [SMALL_STATE(380)] = 9266,
  [SMALL_STATE(381)] = 9285,
  [SMALL_STATE(382)] = 9304,
  [SMALL_STATE(383)] = 9323,
  [SMALL_STATE(384)] = 9342,
  [SMALL_STATE(385)] = 9361,
  [SMALL_STATE(386)] = 9380,
  [SMALL_STATE(387)] = 9399,
  [SMALL_STATE(388)] = 9418,
  [SMALL_STATE(389)] = 9437,
  [SMALL_STATE(390)] = 9456,
  [SMALL_STATE(391)] = 9475,
  [SMALL_STATE(392)] = 9494,
  [SMALL_STATE(393)] = 9513,
  [SMALL_STATE(394)] = 9532,
  [SMALL_STATE(395)] = 9551,
  [SMALL_STATE(396)] = 9570,
  [SMALL_STATE(397)] = 9589,
  [SMALL_STATE(398)] = 9608,
  [SMALL_STATE(399)] = 9627,
  [SMALL_STATE(400)] = 9646,
  [SMALL_STATE(401)] = 9665,
  [SMALL_STATE(402)] = 9684,
  [SMALL_STATE(403)] = 9703,
  [SMALL_STATE(404)] = 9731,
  [SMALL_STATE(405)] = 9759,
  [SMALL_STATE(406)] = 9787,
  [SMALL_STATE(407)] = 9815,
  [SMALL_STATE(408)] = 9833,
  [SMALL_STATE(409)] = 9861,
  [SMALL_STATE(410)] = 9889,
  [SMALL_STATE(411)] = 9917,
  [SMALL_STATE(412)] = 9945,
  [SMALL_STATE(413)] = 9973,
  [SMALL_STATE(414)] = 10004,
  [SMALL_STATE(415)] = 10037,
  [SMALL_STATE(416)] = 10065,
  [SMALL_STATE(417)] = 10090,
  [SMALL_STATE(418)] = 10115,
  [SMALL_STATE(419)] = 10138,
  [SMALL_STATE(420)] = 10172,
  [SMALL_STATE(421)] = 10194,
  [SMALL_STATE(422)] = 10216,
  [SMALL_STATE(423)] = 10242,
  [SMALL_STATE(424)] = 10262,
  [SMALL_STATE(425)] = 10279,
  [SMALL_STATE(426)] = 10298,
  [SMALL_STATE(427)] = 10317,
  [SMALL_STATE(428)] = 10340,
  [SMALL_STATE(429)] = 10359,
  [SMALL_STATE(430)] = 10378,
  [SMALL_STATE(431)] = 10397,
  [SMALL_STATE(432)] = 10416,
  [SMALL_STATE(433)] = 10435,
  [SMALL_STATE(434)] = 10454,
  [SMALL_STATE(435)] = 10473,
  [SMALL_STATE(436)] = 10492,
  [SMALL_STATE(437)] = 10523,
  [SMALL_STATE(438)] = 10542,
  [SMALL_STATE(439)] = 10559,
  [SMALL_STATE(440)] = 10582,
  [SMALL_STATE(441)] = 10602,
  [SMALL_STATE(442)] = 10623,
  [SMALL_STATE(443)] = 10644,
  [SMALL_STATE(444)] = 10665,
  [SMALL_STATE(445)] = 10686,
  [SMALL_STATE(446)] = 10707,
  [SMALL_STATE(447)] = 10721,
  [SMALL_STATE(448)] = 10739,
  [SMALL_STATE(449)] = 10757,
  [SMALL_STATE(450)] = 10779,
  [SMALL_STATE(451)] = 10799,
  [SMALL_STATE(452)] = 10813,
  [SMALL_STATE(453)] = 10835,
  [SMALL_STATE(454)] = 10855,
  [SMALL_STATE(455)] = 10877,
  [SMALL_STATE(456)] = 10899,
  [SMALL_STATE(457)] = 10918,
  [SMALL_STATE(458)] = 10935,
  [SMALL_STATE(459)] = 10954,
  [SMALL_STATE(460)] = 10965,
  [SMALL_STATE(461)] = 10981,
  [SMALL_STATE(462)] = 10995,
  [SMALL_STATE(463)] = 11011,
  [SMALL_STATE(464)] = 11019,
  [SMALL_STATE(465)] = 11035,
  [SMALL_STATE(466)] = 11047,
  [SMALL_STATE(467)] = 11063,
  [SMALL_STATE(468)] = 11079,
  [SMALL_STATE(469)] = 11087,
  [SMALL_STATE(470)] = 11095,
  [SMALL_STATE(471)] = 11107,
  [SMALL_STATE(472)] = 11115,
  [SMALL_STATE(473)] = 11127,
  [SMALL_STATE(474)] = 11143,
  [SMALL_STATE(475)] = 11159,
  [SMALL_STATE(476)] = 11175,
  [SMALL_STATE(477)] = 11191,
  [SMALL_STATE(478)] = 11199,
  [SMALL_STATE(479)] = 11213,
  [SMALL_STATE(480)] = 11229,
  [SMALL_STATE(481)] = 11237,
  [SMALL_STATE(482)] = 11245,
  [SMALL_STATE(483)] = 11261,
  [SMALL_STATE(484)] = 11273,
  [SMALL_STATE(485)] = 11289,
  [SMALL_STATE(486)] = 11296,
  [SMALL_STATE(487)] = 11309,
  [SMALL_STATE(488)] = 11322,
  [SMALL_STATE(489)] = 11335,
  [SMALL_STATE(490)] = 11348,
  [SMALL_STATE(491)] = 11361,
  [SMALL_STATE(492)] = 11374,
  [SMALL_STATE(493)] = 11387,
  [SMALL_STATE(494)] = 11400,
  [SMALL_STATE(495)] = 11413,
  [SMALL_STATE(496)] = 11426,
  [SMALL_STATE(497)] = 11439,
  [SMALL_STATE(498)] = 11452,
  [SMALL_STATE(499)] = 11459,
  [SMALL_STATE(500)] = 11472,
  [SMALL_STATE(501)] = 11485,
  [SMALL_STATE(502)] = 11498,
  [SMALL_STATE(503)] = 11511,
  [SMALL_STATE(504)] = 11524,
  [SMALL_STATE(505)] = 11537,
  [SMALL_STATE(506)] = 11550,
  [SMALL_STATE(507)] = 11563,
  [SMALL_STATE(508)] = 11576,
  [SMALL_STATE(509)] = 11589,
  [SMALL_STATE(510)] = 11602,
  [SMALL_STATE(511)] = 11615,
  [SMALL_STATE(512)] = 11628,
  [SMALL_STATE(513)] = 11641,
  [SMALL_STATE(514)] = 11654,
  [SMALL_STATE(515)] = 11667,
  [SMALL_STATE(516)] = 11680,
  [SMALL_STATE(517)] = 11691,
  [SMALL_STATE(518)] = 11704,
  [SMALL_STATE(519)] = 11717,
  [SMALL_STATE(520)] = 11728,
  [SMALL_STATE(521)] = 11741,
  [SMALL_STATE(522)] = 11750,
  [SMALL_STATE(523)] = 11763,
  [SMALL_STATE(524)] = 11776,
  [SMALL_STATE(525)] = 11789,
  [SMALL_STATE(526)] = 11802,
  [SMALL_STATE(527)] = 11815,
  [SMALL_STATE(528)] = 11828,
  [SMALL_STATE(529)] = 11841,
  [SMALL_STATE(530)] = 11854,
  [SMALL_STATE(531)] = 11867,
  [SMALL_STATE(532)] = 11880,
  [SMALL_STATE(533)] = 11893,
  [SMALL_STATE(534)] = 11906,
  [SMALL_STATE(535)] = 11919,
  [SMALL_STATE(536)] = 11932,
  [SMALL_STATE(537)] = 11943,
  [SMALL_STATE(538)] = 11956,
  [SMALL_STATE(539)] = 11966,
  [SMALL_STATE(540)] = 11976,
  [SMALL_STATE(541)] = 11986,
  [SMALL_STATE(542)] = 11996,
  [SMALL_STATE(543)] = 12006,
  [SMALL_STATE(544)] = 12016,
  [SMALL_STATE(545)] = 12026,
  [SMALL_STATE(546)] = 12036,
  [SMALL_STATE(547)] = 12046,
  [SMALL_STATE(548)] = 12054,
  [SMALL_STATE(549)] = 12064,
  [SMALL_STATE(550)] = 12072,
  [SMALL_STATE(551)] = 12082,
  [SMALL_STATE(552)] = 12092,
  [SMALL_STATE(553)] = 12102,
  [SMALL_STATE(554)] = 12112,
  [SMALL_STATE(555)] = 12122,
  [SMALL_STATE(556)] = 12132,
  [SMALL_STATE(557)] = 12142,
  [SMALL_STATE(558)] = 12152,
  [SMALL_STATE(559)] = 12162,
  [SMALL_STATE(560)] = 12172,
  [SMALL_STATE(561)] = 12182,
  [SMALL_STATE(562)] = 12192,
  [SMALL_STATE(563)] = 12202,
  [SMALL_STATE(564)] = 12212,
  [SMALL_STATE(565)] = 12222,
  [SMALL_STATE(566)] = 12232,
  [SMALL_STATE(567)] = 12242,
  [SMALL_STATE(568)] = 12252,
  [SMALL_STATE(569)] = 12262,
  [SMALL_STATE(570)] = 12272,
  [SMALL_STATE(571)] = 12282,
  [SMALL_STATE(572)] = 12292,
  [SMALL_STATE(573)] = 12302,
  [SMALL_STATE(574)] = 12312,
  [SMALL_STATE(575)] = 12322,
  [SMALL_STATE(576)] = 12332,
  [SMALL_STATE(577)] = 12342,
  [SMALL_STATE(578)] = 12352,
  [SMALL_STATE(579)] = 12362,
  [SMALL_STATE(580)] = 12372,
  [SMALL_STATE(581)] = 12382,
  [SMALL_STATE(582)] = 12392,
  [SMALL_STATE(583)] = 12402,
  [SMALL_STATE(584)] = 12412,
  [SMALL_STATE(585)] = 12422,
  [SMALL_STATE(586)] = 12432,
  [SMALL_STATE(587)] = 12442,
  [SMALL_STATE(588)] = 12452,
  [SMALL_STATE(589)] = 12462,
  [SMALL_STATE(590)] = 12472,
  [SMALL_STATE(591)] = 12482,
  [SMALL_STATE(592)] = 12492,
  [SMALL_STATE(593)] = 12502,
  [SMALL_STATE(594)] = 12512,
  [SMALL_STATE(595)] = 12522,
  [SMALL_STATE(596)] = 12532,
  [SMALL_STATE(597)] = 12542,
  [SMALL_STATE(598)] = 12552,
  [SMALL_STATE(599)] = 12562,
  [SMALL_STATE(600)] = 12572,
  [SMALL_STATE(601)] = 12582,
  [SMALL_STATE(602)] = 12592,
  [SMALL_STATE(603)] = 12602,
  [SMALL_STATE(604)] = 12612,
  [SMALL_STATE(605)] = 12622,
  [SMALL_STATE(606)] = 12632,
  [SMALL_STATE(607)] = 12642,
  [SMALL_STATE(608)] = 12652,
  [SMALL_STATE(609)] = 12662,
  [SMALL_STATE(610)] = 12672,
  [SMALL_STATE(611)] = 12682,
  [SMALL_STATE(612)] = 12692,
  [SMALL_STATE(613)] = 12702,
  [SMALL_STATE(614)] = 12712,
  [SMALL_STATE(615)] = 12722,
  [SMALL_STATE(616)] = 12732,
  [SMALL_STATE(617)] = 12742,
  [SMALL_STATE(618)] = 12752,
  [SMALL_STATE(619)] = 12762,
  [SMALL_STATE(620)] = 12772,
  [SMALL_STATE(621)] = 12782,
  [SMALL_STATE(622)] = 12792,
  [SMALL_STATE(623)] = 12802,
  [SMALL_STATE(624)] = 12812,
  [SMALL_STATE(625)] = 12822,
  [SMALL_STATE(626)] = 12832,
  [SMALL_STATE(627)] = 12842,
  [SMALL_STATE(628)] = 12852,
  [SMALL_STATE(629)] = 12858,
  [SMALL_STATE(630)] = 12866,
  [SMALL_STATE(631)] = 12876,
  [SMALL_STATE(632)] = 12886,
  [SMALL_STATE(633)] = 12892,
  [SMALL_STATE(634)] = 12902,
  [SMALL_STATE(635)] = 12912,
  [SMALL_STATE(636)] = 12922,
  [SMALL_STATE(637)] = 12932,
  [SMALL_STATE(638)] = 12942,
  [SMALL_STATE(639)] = 12952,
  [SMALL_STATE(640)] = 12962,
  [SMALL_STATE(641)] = 12972,
  [SMALL_STATE(642)] = 12982,
  [SMALL_STATE(643)] = 12992,
  [SMALL_STATE(644)] = 13002,
  [SMALL_STATE(645)] = 13012,
  [SMALL_STATE(646)] = 13022,
  [SMALL_STATE(647)] = 13032,
  [SMALL_STATE(648)] = 13042,
  [SMALL_STATE(649)] = 13052,
  [SMALL_STATE(650)] = 13062,
  [SMALL_STATE(651)] = 13072,
  [SMALL_STATE(652)] = 13082,
  [SMALL_STATE(653)] = 13092,
  [SMALL_STATE(654)] = 13102,
  [SMALL_STATE(655)] = 13112,
  [SMALL_STATE(656)] = 13122,
  [SMALL_STATE(657)] = 13132,
  [SMALL_STATE(658)] = 13142,
  [SMALL_STATE(659)] = 13152,
  [SMALL_STATE(660)] = 13162,
  [SMALL_STATE(661)] = 13172,
  [SMALL_STATE(662)] = 13182,
  [SMALL_STATE(663)] = 13192,
  [SMALL_STATE(664)] = 13202,
  [SMALL_STATE(665)] = 13212,
  [SMALL_STATE(666)] = 13222,
  [SMALL_STATE(667)] = 13230,
  [SMALL_STATE(668)] = 13240,
  [SMALL_STATE(669)] = 13250,
  [SMALL_STATE(670)] = 13260,
  [SMALL_STATE(671)] = 13270,
  [SMALL_STATE(672)] = 13278,
  [SMALL_STATE(673)] = 13288,
  [SMALL_STATE(674)] = 13298,
  [SMALL_STATE(675)] = 13306,
  [SMALL_STATE(676)] = 13316,
  [SMALL_STATE(677)] = 13326,
  [SMALL_STATE(678)] = 13336,
  [SMALL_STATE(679)] = 13346,
  [SMALL_STATE(680)] = 13356,
  [SMALL_STATE(681)] = 13366,
  [SMALL_STATE(682)] = 13376,
  [SMALL_STATE(683)] = 13386,
  [SMALL_STATE(684)] = 13396,
  [SMALL_STATE(685)] = 13406,
  [SMALL_STATE(686)] = 13416,
  [SMALL_STATE(687)] = 13426,
  [SMALL_STATE(688)] = 13436,
  [SMALL_STATE(689)] = 13446,
  [SMALL_STATE(690)] = 13456,
  [SMALL_STATE(691)] = 13463,
  [SMALL_STATE(692)] = 13470,
  [SMALL_STATE(693)] = 13475,
  [SMALL_STATE(694)] = 13482,
  [SMALL_STATE(695)] = 13487,
  [SMALL_STATE(696)] = 13494,
  [SMALL_STATE(697)] = 13501,
  [SMALL_STATE(698)] = 13508,
  [SMALL_STATE(699)] = 13513,
  [SMALL_STATE(700)] = 13520,
  [SMALL_STATE(701)] = 13527,
  [SMALL_STATE(702)] = 13532,
  [SMALL_STATE(703)] = 13539,
  [SMALL_STATE(704)] = 13546,
  [SMALL_STATE(705)] = 13553,
  [SMALL_STATE(706)] = 13560,
  [SMALL_STATE(707)] = 13565,
  [SMALL_STATE(708)] = 13572,
  [SMALL_STATE(709)] = 13579,
  [SMALL_STATE(710)] = 13586,
  [SMALL_STATE(711)] = 13593,
  [SMALL_STATE(712)] = 13598,
  [SMALL_STATE(713)] = 13603,
  [SMALL_STATE(714)] = 13610,
  [SMALL_STATE(715)] = 13617,
  [SMALL_STATE(716)] = 13622,
  [SMALL_STATE(717)] = 13627,
  [SMALL_STATE(718)] = 13634,
  [SMALL_STATE(719)] = 13641,
  [SMALL_STATE(720)] = 13648,
  [SMALL_STATE(721)] = 13655,
  [SMALL_STATE(722)] = 13662,
  [SMALL_STATE(723)] = 13669,
  [SMALL_STATE(724)] = 13676,
  [SMALL_STATE(725)] = 13683,
  [SMALL_STATE(726)] = 13690,
  [SMALL_STATE(727)] = 13697,
  [SMALL_STATE(728)] = 13704,
  [SMALL_STATE(729)] = 13709,
  [SMALL_STATE(730)] = 13716,
  [SMALL_STATE(731)] = 13723,
  [SMALL_STATE(732)] = 13728,
  [SMALL_STATE(733)] = 13733,
  [SMALL_STATE(734)] = 13738,
  [SMALL_STATE(735)] = 13745,
  [SMALL_STATE(736)] = 13752,
  [SMALL_STATE(737)] = 13759,
  [SMALL_STATE(738)] = 13766,
  [SMALL_STATE(739)] = 13773,
  [SMALL_STATE(740)] = 13780,
  [SMALL_STATE(741)] = 13787,
  [SMALL_STATE(742)] = 13794,
  [SMALL_STATE(743)] = 13799,
  [SMALL_STATE(744)] = 13806,
  [SMALL_STATE(745)] = 13813,
  [SMALL_STATE(746)] = 13820,
  [SMALL_STATE(747)] = 13825,
  [SMALL_STATE(748)] = 13832,
  [SMALL_STATE(749)] = 13839,
  [SMALL_STATE(750)] = 13846,
  [SMALL_STATE(751)] = 13853,
  [SMALL_STATE(752)] = 13860,
  [SMALL_STATE(753)] = 13867,
  [SMALL_STATE(754)] = 13874,
  [SMALL_STATE(755)] = 13881,
  [SMALL_STATE(756)] = 13888,
  [SMALL_STATE(757)] = 13893,
  [SMALL_STATE(758)] = 13900,
  [SMALL_STATE(759)] = 13907,
  [SMALL_STATE(760)] = 13914,
  [SMALL_STATE(761)] = 13921,
  [SMALL_STATE(762)] = 13926,
  [SMALL_STATE(763)] = 13931,
  [SMALL_STATE(764)] = 13936,
  [SMALL_STATE(765)] = 13941,
  [SMALL_STATE(766)] = 13946,
  [SMALL_STATE(767)] = 13953,
  [SMALL_STATE(768)] = 13958,
  [SMALL_STATE(769)] = 13965,
  [SMALL_STATE(770)] = 13972,
  [SMALL_STATE(771)] = 13977,
  [SMALL_STATE(772)] = 13982,
  [SMALL_STATE(773)] = 13989,
  [SMALL_STATE(774)] = 13994,
  [SMALL_STATE(775)] = 13999,
  [SMALL_STATE(776)] = 14006,
  [SMALL_STATE(777)] = 14013,
  [SMALL_STATE(778)] = 14020,
  [SMALL_STATE(779)] = 14027,
  [SMALL_STATE(780)] = 14034,
  [SMALL_STATE(781)] = 14041,
  [SMALL_STATE(782)] = 14048,
  [SMALL_STATE(783)] = 14055,
  [SMALL_STATE(784)] = 14062,
  [SMALL_STATE(785)] = 14069,
  [SMALL_STATE(786)] = 14076,
  [SMALL_STATE(787)] = 14083,
  [SMALL_STATE(788)] = 14090,
  [SMALL_STATE(789)] = 14097,
  [SMALL_STATE(790)] = 14104,
  [SMALL_STATE(791)] = 14111,
  [SMALL_STATE(792)] = 14118,
  [SMALL_STATE(793)] = 14125,
  [SMALL_STATE(794)] = 14132,
  [SMALL_STATE(795)] = 14139,
  [SMALL_STATE(796)] = 14146,
  [SMALL_STATE(797)] = 14153,
  [SMALL_STATE(798)] = 14160,
  [SMALL_STATE(799)] = 14167,
  [SMALL_STATE(800)] = 14172,
  [SMALL_STATE(801)] = 14177,
  [SMALL_STATE(802)] = 14182,
  [SMALL_STATE(803)] = 14189,
  [SMALL_STATE(804)] = 14196,
  [SMALL_STATE(805)] = 14203,
  [SMALL_STATE(806)] = 14210,
  [SMALL_STATE(807)] = 14217,
  [SMALL_STATE(808)] = 14224,
  [SMALL_STATE(809)] = 14229,
  [SMALL_STATE(810)] = 14236,
  [SMALL_STATE(811)] = 14243,
  [SMALL_STATE(812)] = 14250,
  [SMALL_STATE(813)] = 14255,
  [SMALL_STATE(814)] = 14262,
  [SMALL_STATE(815)] = 14269,
  [SMALL_STATE(816)] = 14274,
  [SMALL_STATE(817)] = 14281,
  [SMALL_STATE(818)] = 14288,
  [SMALL_STATE(819)] = 14295,
  [SMALL_STATE(820)] = 14302,
  [SMALL_STATE(821)] = 14309,
  [SMALL_STATE(822)] = 14316,
  [SMALL_STATE(823)] = 14323,
  [SMALL_STATE(824)] = 14330,
  [SMALL_STATE(825)] = 14335,
  [SMALL_STATE(826)] = 14342,
  [SMALL_STATE(827)] = 14349,
  [SMALL_STATE(828)] = 14356,
  [SMALL_STATE(829)] = 14363,
  [SMALL_STATE(830)] = 14370,
  [SMALL_STATE(831)] = 14377,
  [SMALL_STATE(832)] = 14384,
  [SMALL_STATE(833)] = 14391,
  [SMALL_STATE(834)] = 14398,
  [SMALL_STATE(835)] = 14405,
  [SMALL_STATE(836)] = 14410,
  [SMALL_STATE(837)] = 14417,
  [SMALL_STATE(838)] = 14421,
  [SMALL_STATE(839)] = 14425,
  [SMALL_STATE(840)] = 14429,
  [SMALL_STATE(841)] = 14433,
  [SMALL_STATE(842)] = 14437,
  [SMALL_STATE(843)] = 14441,
  [SMALL_STATE(844)] = 14445,
  [SMALL_STATE(845)] = 14449,
  [SMALL_STATE(846)] = 14453,
  [SMALL_STATE(847)] = 14457,
  [SMALL_STATE(848)] = 14461,
  [SMALL_STATE(849)] = 14465,
  [SMALL_STATE(850)] = 14469,
  [SMALL_STATE(851)] = 14473,
  [SMALL_STATE(852)] = 14477,
  [SMALL_STATE(853)] = 14481,
  [SMALL_STATE(854)] = 14485,
  [SMALL_STATE(855)] = 14489,
  [SMALL_STATE(856)] = 14493,
  [SMALL_STATE(857)] = 14497,
  [SMALL_STATE(858)] = 14501,
  [SMALL_STATE(859)] = 14505,
  [SMALL_STATE(860)] = 14509,
  [SMALL_STATE(861)] = 14513,
  [SMALL_STATE(862)] = 14517,
  [SMALL_STATE(863)] = 14521,
  [SMALL_STATE(864)] = 14525,
  [SMALL_STATE(865)] = 14529,
  [SMALL_STATE(866)] = 14533,
  [SMALL_STATE(867)] = 14537,
  [SMALL_STATE(868)] = 14541,
  [SMALL_STATE(869)] = 14545,
  [SMALL_STATE(870)] = 14549,
  [SMALL_STATE(871)] = 14553,
  [SMALL_STATE(872)] = 14557,
  [SMALL_STATE(873)] = 14561,
  [SMALL_STATE(874)] = 14565,
  [SMALL_STATE(875)] = 14569,
  [SMALL_STATE(876)] = 14573,
  [SMALL_STATE(877)] = 14577,
  [SMALL_STATE(878)] = 14581,
  [SMALL_STATE(879)] = 14585,
  [SMALL_STATE(880)] = 14589,
  [SMALL_STATE(881)] = 14593,
  [SMALL_STATE(882)] = 14597,
  [SMALL_STATE(883)] = 14601,
  [SMALL_STATE(884)] = 14605,
  [SMALL_STATE(885)] = 14609,
  [SMALL_STATE(886)] = 14613,
  [SMALL_STATE(887)] = 14617,
  [SMALL_STATE(888)] = 14621,
  [SMALL_STATE(889)] = 14625,
  [SMALL_STATE(890)] = 14629,
  [SMALL_STATE(891)] = 14633,
  [SMALL_STATE(892)] = 14637,
  [SMALL_STATE(893)] = 14641,
  [SMALL_STATE(894)] = 14645,
  [SMALL_STATE(895)] = 14649,
  [SMALL_STATE(896)] = 14653,
  [SMALL_STATE(897)] = 14657,
  [SMALL_STATE(898)] = 14661,
  [SMALL_STATE(899)] = 14665,
  [SMALL_STATE(900)] = 14669,
  [SMALL_STATE(901)] = 14673,
  [SMALL_STATE(902)] = 14677,
  [SMALL_STATE(903)] = 14681,
  [SMALL_STATE(904)] = 14685,
  [SMALL_STATE(905)] = 14689,
  [SMALL_STATE(906)] = 14693,
  [SMALL_STATE(907)] = 14697,
  [SMALL_STATE(908)] = 14701,
  [SMALL_STATE(909)] = 14705,
  [SMALL_STATE(910)] = 14709,
  [SMALL_STATE(911)] = 14713,
  [SMALL_STATE(912)] = 14717,
  [SMALL_STATE(913)] = 14721,
  [SMALL_STATE(914)] = 14725,
  [SMALL_STATE(915)] = 14729,
  [SMALL_STATE(916)] = 14733,
  [SMALL_STATE(917)] = 14737,
  [SMALL_STATE(918)] = 14741,
  [SMALL_STATE(919)] = 14745,
  [SMALL_STATE(920)] = 14749,
  [SMALL_STATE(921)] = 14753,
  [SMALL_STATE(922)] = 14757,
  [SMALL_STATE(923)] = 14761,
  [SMALL_STATE(924)] = 14765,
  [SMALL_STATE(925)] = 14769,
  [SMALL_STATE(926)] = 14773,
  [SMALL_STATE(927)] = 14777,
  [SMALL_STATE(928)] = 14781,
  [SMALL_STATE(929)] = 14785,
  [SMALL_STATE(930)] = 14789,
  [SMALL_STATE(931)] = 14793,
  [SMALL_STATE(932)] = 14797,
  [SMALL_STATE(933)] = 14801,
  [SMALL_STATE(934)] = 14805,
  [SMALL_STATE(935)] = 14809,
  [SMALL_STATE(936)] = 14813,
  [SMALL_STATE(937)] = 14817,
  [SMALL_STATE(938)] = 14821,
  [SMALL_STATE(939)] = 14825,
  [SMALL_STATE(940)] = 14829,
  [SMALL_STATE(941)] = 14833,
  [SMALL_STATE(942)] = 14837,
  [SMALL_STATE(943)] = 14841,
  [SMALL_STATE(944)] = 14845,
  [SMALL_STATE(945)] = 14849,
  [SMALL_STATE(946)] = 14853,
  [SMALL_STATE(947)] = 14857,
  [SMALL_STATE(948)] = 14861,
  [SMALL_STATE(949)] = 14865,
  [SMALL_STATE(950)] = 14869,
  [SMALL_STATE(951)] = 14873,
  [SMALL_STATE(952)] = 14877,
  [SMALL_STATE(953)] = 14881,
  [SMALL_STATE(954)] = 14885,
  [SMALL_STATE(955)] = 14889,
  [SMALL_STATE(956)] = 14893,
  [SMALL_STATE(957)] = 14897,
  [SMALL_STATE(958)] = 14901,
  [SMALL_STATE(959)] = 14905,
  [SMALL_STATE(960)] = 14909,
  [SMALL_STATE(961)] = 14913,
  [SMALL_STATE(962)] = 14917,
  [SMALL_STATE(963)] = 14921,
  [SMALL_STATE(964)] = 14925,
  [SMALL_STATE(965)] = 14929,
  [SMALL_STATE(966)] = 14933,
  [SMALL_STATE(967)] = 14937,
  [SMALL_STATE(968)] = 14941,
  [SMALL_STATE(969)] = 14945,
  [SMALL_STATE(970)] = 14949,
  [SMALL_STATE(971)] = 14953,
  [SMALL_STATE(972)] = 14957,
  [SMALL_STATE(973)] = 14961,
  [SMALL_STATE(974)] = 14965,
  [SMALL_STATE(975)] = 14969,
  [SMALL_STATE(976)] = 14973,
  [SMALL_STATE(977)] = 14977,
  [SMALL_STATE(978)] = 14981,
  [SMALL_STATE(979)] = 14985,
  [SMALL_STATE(980)] = 14989,
  [SMALL_STATE(981)] = 14993,
  [SMALL_STATE(982)] = 14997,
  [SMALL_STATE(983)] = 15001,
  [SMALL_STATE(984)] = 15005,
  [SMALL_STATE(985)] = 15009,
  [SMALL_STATE(986)] = 15013,
  [SMALL_STATE(987)] = 15017,
  [SMALL_STATE(988)] = 15021,
  [SMALL_STATE(989)] = 15025,
  [SMALL_STATE(990)] = 15029,
  [SMALL_STATE(991)] = 15033,
  [SMALL_STATE(992)] = 15037,
  [SMALL_STATE(993)] = 15041,
  [SMALL_STATE(994)] = 15045,
  [SMALL_STATE(995)] = 15049,
  [SMALL_STATE(996)] = 15053,
  [SMALL_STATE(997)] = 15057,
  [SMALL_STATE(998)] = 15061,
  [SMALL_STATE(999)] = 15065,
  [SMALL_STATE(1000)] = 15069,
  [SMALL_STATE(1001)] = 15073,
  [SMALL_STATE(1002)] = 15077,
  [SMALL_STATE(1003)] = 15081,
  [SMALL_STATE(1004)] = 15085,
  [SMALL_STATE(1005)] = 15089,
  [SMALL_STATE(1006)] = 15093,
  [SMALL_STATE(1007)] = 15097,
  [SMALL_STATE(1008)] = 15101,
  [SMALL_STATE(1009)] = 15105,
  [SMALL_STATE(1010)] = 15109,
  [SMALL_STATE(1011)] = 15113,
  [SMALL_STATE(1012)] = 15117,
  [SMALL_STATE(1013)] = 15121,
  [SMALL_STATE(1014)] = 15125,
  [SMALL_STATE(1015)] = 15129,
  [SMALL_STATE(1016)] = 15133,
  [SMALL_STATE(1017)] = 15137,
  [SMALL_STATE(1018)] = 15141,
  [SMALL_STATE(1019)] = 15145,
  [SMALL_STATE(1020)] = 15149,
  [SMALL_STATE(1021)] = 15153,
  [SMALL_STATE(1022)] = 15157,
  [SMALL_STATE(1023)] = 15161,
  [SMALL_STATE(1024)] = 15165,
  [SMALL_STATE(1025)] = 15169,
  [SMALL_STATE(1026)] = 15173,
  [SMALL_STATE(1027)] = 15177,
  [SMALL_STATE(1028)] = 15181,
  [SMALL_STATE(1029)] = 15185,
  [SMALL_STATE(1030)] = 15189,
  [SMALL_STATE(1031)] = 15193,
  [SMALL_STATE(1032)] = 15197,
  [SMALL_STATE(1033)] = 15201,
  [SMALL_STATE(1034)] = 15205,
  [SMALL_STATE(1035)] = 15209,
  [SMALL_STATE(1036)] = 15213,
  [SMALL_STATE(1037)] = 15217,
  [SMALL_STATE(1038)] = 15221,
  [SMALL_STATE(1039)] = 15225,
  [SMALL_STATE(1040)] = 15229,
  [SMALL_STATE(1041)] = 15233,
  [SMALL_STATE(1042)] = 15237,
  [SMALL_STATE(1043)] = 15241,
  [SMALL_STATE(1044)] = 15245,
  [SMALL_STATE(1045)] = 15249,
  [SMALL_STATE(1046)] = 15253,
  [SMALL_STATE(1047)] = 15257,
  [SMALL_STATE(1048)] = 15261,
  [SMALL_STATE(1049)] = 15265,
  [SMALL_STATE(1050)] = 15269,
  [SMALL_STATE(1051)] = 15273,
  [SMALL_STATE(1052)] = 15277,
  [SMALL_STATE(1053)] = 15281,
  [SMALL_STATE(1054)] = 15285,
  [SMALL_STATE(1055)] = 15289,
  [SMALL_STATE(1056)] = 15293,
  [SMALL_STATE(1057)] = 15297,
  [SMALL_STATE(1058)] = 15301,
  [SMALL_STATE(1059)] = 15305,
  [SMALL_STATE(1060)] = 15309,
  [SMALL_STATE(1061)] = 15313,
  [SMALL_STATE(1062)] = 15317,
  [SMALL_STATE(1063)] = 15321,
  [SMALL_STATE(1064)] = 15325,
  [SMALL_STATE(1065)] = 15329,
  [SMALL_STATE(1066)] = 15333,
  [SMALL_STATE(1067)] = 15337,
  [SMALL_STATE(1068)] = 15341,
  [SMALL_STATE(1069)] = 15345,
  [SMALL_STATE(1070)] = 15349,
  [SMALL_STATE(1071)] = 15353,
  [SMALL_STATE(1072)] = 15357,
  [SMALL_STATE(1073)] = 15361,
  [SMALL_STATE(1074)] = 15365,
  [SMALL_STATE(1075)] = 15369,
  [SMALL_STATE(1076)] = 15373,
  [SMALL_STATE(1077)] = 15377,
  [SMALL_STATE(1078)] = 15381,
  [SMALL_STATE(1079)] = 15385,
  [SMALL_STATE(1080)] = 15389,
  [SMALL_STATE(1081)] = 15393,
  [SMALL_STATE(1082)] = 15397,
  [SMALL_STATE(1083)] = 15401,
  [SMALL_STATE(1084)] = 15405,
  [SMALL_STATE(1085)] = 15409,
  [SMALL_STATE(1086)] = 15413,
  [SMALL_STATE(1087)] = 15417,
  [SMALL_STATE(1088)] = 15421,
  [SMALL_STATE(1089)] = 15425,
  [SMALL_STATE(1090)] = 15429,
  [SMALL_STATE(1091)] = 15433,
  [SMALL_STATE(1092)] = 15437,
  [SMALL_STATE(1093)] = 15441,
  [SMALL_STATE(1094)] = 15445,
  [SMALL_STATE(1095)] = 15449,
  [SMALL_STATE(1096)] = 15453,
  [SMALL_STATE(1097)] = 15457,
  [SMALL_STATE(1098)] = 15461,
  [SMALL_STATE(1099)] = 15465,
  [SMALL_STATE(1100)] = 15469,
  [SMALL_STATE(1101)] = 15473,
  [SMALL_STATE(1102)] = 15477,
  [SMALL_STATE(1103)] = 15481,
  [SMALL_STATE(1104)] = 15485,
  [SMALL_STATE(1105)] = 15489,
  [SMALL_STATE(1106)] = 15493,
  [SMALL_STATE(1107)] = 15497,
  [SMALL_STATE(1108)] = 15501,
  [SMALL_STATE(1109)] = 15505,
  [SMALL_STATE(1110)] = 15509,
  [SMALL_STATE(1111)] = 15513,
  [SMALL_STATE(1112)] = 15517,
  [SMALL_STATE(1113)] = 15521,
  [SMALL_STATE(1114)] = 15525,
  [SMALL_STATE(1115)] = 15529,
  [SMALL_STATE(1116)] = 15533,
  [SMALL_STATE(1117)] = 15537,
  [SMALL_STATE(1118)] = 15541,
  [SMALL_STATE(1119)] = 15545,
  [SMALL_STATE(1120)] = 15549,
  [SMALL_STATE(1121)] = 15553,
  [SMALL_STATE(1122)] = 15557,
  [SMALL_STATE(1123)] = 15561,
  [SMALL_STATE(1124)] = 15565,
  [SMALL_STATE(1125)] = 15569,
  [SMALL_STATE(1126)] = 15573,
  [SMALL_STATE(1127)] = 15577,
  [SMALL_STATE(1128)] = 15581,
  [SMALL_STATE(1129)] = 15585,
  [SMALL_STATE(1130)] = 15589,
  [SMALL_STATE(1131)] = 15593,
  [SMALL_STATE(1132)] = 15597,
  [SMALL_STATE(1133)] = 15601,
  [SMALL_STATE(1134)] = 15605,
  [SMALL_STATE(1135)] = 15609,
  [SMALL_STATE(1136)] = 15613,
  [SMALL_STATE(1137)] = 15617,
  [SMALL_STATE(1138)] = 15621,
  [SMALL_STATE(1139)] = 15625,
  [SMALL_STATE(1140)] = 15629,
  [SMALL_STATE(1141)] = 15633,
  [SMALL_STATE(1142)] = 15637,
  [SMALL_STATE(1143)] = 15641,
  [SMALL_STATE(1144)] = 15645,
  [SMALL_STATE(1145)] = 15649,
  [SMALL_STATE(1146)] = 15653,
  [SMALL_STATE(1147)] = 15657,
  [SMALL_STATE(1148)] = 15661,
  [SMALL_STATE(1149)] = 15665,
  [SMALL_STATE(1150)] = 15669,
  [SMALL_STATE(1151)] = 15673,
  [SMALL_STATE(1152)] = 15677,
  [SMALL_STATE(1153)] = 15681,
  [SMALL_STATE(1154)] = 15685,
  [SMALL_STATE(1155)] = 15689,
  [SMALL_STATE(1156)] = 15693,
  [SMALL_STATE(1157)] = 15697,
  [SMALL_STATE(1158)] = 15701,
  [SMALL_STATE(1159)] = 15705,
  [SMALL_STATE(1160)] = 15709,
  [SMALL_STATE(1161)] = 15713,
  [SMALL_STATE(1162)] = 15717,
  [SMALL_STATE(1163)] = 15721,
  [SMALL_STATE(1164)] = 15725,
  [SMALL_STATE(1165)] = 15729,
  [SMALL_STATE(1166)] = 15733,
  [SMALL_STATE(1167)] = 15737,
  [SMALL_STATE(1168)] = 15741,
  [SMALL_STATE(1169)] = 15745,
  [SMALL_STATE(1170)] = 15749,
  [SMALL_STATE(1171)] = 15753,
  [SMALL_STATE(1172)] = 15757,
  [SMALL_STATE(1173)] = 15761,
  [SMALL_STATE(1174)] = 15765,
  [SMALL_STATE(1175)] = 15769,
  [SMALL_STATE(1176)] = 15773,
  [SMALL_STATE(1177)] = 15777,
  [SMALL_STATE(1178)] = 15781,
  [SMALL_STATE(1179)] = 15785,
  [SMALL_STATE(1180)] = 15789,
  [SMALL_STATE(1181)] = 15793,
  [SMALL_STATE(1182)] = 15797,
  [SMALL_STATE(1183)] = 15801,
  [SMALL_STATE(1184)] = 15805,
  [SMALL_STATE(1185)] = 15809,
  [SMALL_STATE(1186)] = 15813,
  [SMALL_STATE(1187)] = 15817,
  [SMALL_STATE(1188)] = 15821,
  [SMALL_STATE(1189)] = 15825,
  [SMALL_STATE(1190)] = 15829,
  [SMALL_STATE(1191)] = 15833,
  [SMALL_STATE(1192)] = 15837,
  [SMALL_STATE(1193)] = 15841,
  [SMALL_STATE(1194)] = 15845,
  [SMALL_STATE(1195)] = 15849,
  [SMALL_STATE(1196)] = 15853,
  [SMALL_STATE(1197)] = 15857,
  [SMALL_STATE(1198)] = 15861,
  [SMALL_STATE(1199)] = 15865,
  [SMALL_STATE(1200)] = 15869,
  [SMALL_STATE(1201)] = 15873,
  [SMALL_STATE(1202)] = 15877,
  [SMALL_STATE(1203)] = 15881,
  [SMALL_STATE(1204)] = 15885,
  [SMALL_STATE(1205)] = 15889,
  [SMALL_STATE(1206)] = 15893,
  [SMALL_STATE(1207)] = 15897,
  [SMALL_STATE(1208)] = 15901,
  [SMALL_STATE(1209)] = 15905,
  [SMALL_STATE(1210)] = 15909,
  [SMALL_STATE(1211)] = 15913,
  [SMALL_STATE(1212)] = 15917,
  [SMALL_STATE(1213)] = 15921,
  [SMALL_STATE(1214)] = 15925,
  [SMALL_STATE(1215)] = 15929,
  [SMALL_STATE(1216)] = 15933,
  [SMALL_STATE(1217)] = 15937,
  [SMALL_STATE(1218)] = 15941,
  [SMALL_STATE(1219)] = 15945,
  [SMALL_STATE(1220)] = 15949,
  [SMALL_STATE(1221)] = 15953,
  [SMALL_STATE(1222)] = 15957,
  [SMALL_STATE(1223)] = 15961,
  [SMALL_STATE(1224)] = 15965,
  [SMALL_STATE(1225)] = 15969,
  [SMALL_STATE(1226)] = 15973,
  [SMALL_STATE(1227)] = 15977,
  [SMALL_STATE(1228)] = 15981,
  [SMALL_STATE(1229)] = 15985,
  [SMALL_STATE(1230)] = 15989,
  [SMALL_STATE(1231)] = 15993,
  [SMALL_STATE(1232)] = 15997,
  [SMALL_STATE(1233)] = 16001,
  [SMALL_STATE(1234)] = 16005,
  [SMALL_STATE(1235)] = 16009,
  [SMALL_STATE(1236)] = 16013,
  [SMALL_STATE(1237)] = 16017,
  [SMALL_STATE(1238)] = 16021,
  [SMALL_STATE(1239)] = 16025,
  [SMALL_STATE(1240)] = 16029,
  [SMALL_STATE(1241)] = 16033,
  [SMALL_STATE(1242)] = 16037,
  [SMALL_STATE(1243)] = 16041,
  [SMALL_STATE(1244)] = 16045,
  [SMALL_STATE(1245)] = 16049,
  [SMALL_STATE(1246)] = 16053,
  [SMALL_STATE(1247)] = 16057,
  [SMALL_STATE(1248)] = 16061,
  [SMALL_STATE(1249)] = 16065,
  [SMALL_STATE(1250)] = 16069,
  [SMALL_STATE(1251)] = 16073,
  [SMALL_STATE(1252)] = 16077,
  [SMALL_STATE(1253)] = 16081,
  [SMALL_STATE(1254)] = 16085,
  [SMALL_STATE(1255)] = 16089,
  [SMALL_STATE(1256)] = 16093,
  [SMALL_STATE(1257)] = 16097,
  [SMALL_STATE(1258)] = 16101,
  [SMALL_STATE(1259)] = 16105,
  [SMALL_STATE(1260)] = 16109,
  [SMALL_STATE(1261)] = 16113,
  [SMALL_STATE(1262)] = 16117,
  [SMALL_STATE(1263)] = 16121,
  [SMALL_STATE(1264)] = 16125,
  [SMALL_STATE(1265)] = 16129,
  [SMALL_STATE(1266)] = 16133,
  [SMALL_STATE(1267)] = 16137,
  [SMALL_STATE(1268)] = 16141,
  [SMALL_STATE(1269)] = 16145,
  [SMALL_STATE(1270)] = 16149,
  [SMALL_STATE(1271)] = 16153,
  [SMALL_STATE(1272)] = 16157,
  [SMALL_STATE(1273)] = 16161,
  [SMALL_STATE(1274)] = 16165,
  [SMALL_STATE(1275)] = 16169,
  [SMALL_STATE(1276)] = 16173,
  [SMALL_STATE(1277)] = 16177,
  [SMALL_STATE(1278)] = 16181,
  [SMALL_STATE(1279)] = 16185,
  [SMALL_STATE(1280)] = 16189,
  [SMALL_STATE(1281)] = 16193,
  [SMALL_STATE(1282)] = 16197,
  [SMALL_STATE(1283)] = 16201,
  [SMALL_STATE(1284)] = 16205,
  [SMALL_STATE(1285)] = 16209,
  [SMALL_STATE(1286)] = 16213,
  [SMALL_STATE(1287)] = 16217,
  [SMALL_STATE(1288)] = 16221,
  [SMALL_STATE(1289)] = 16225,
  [SMALL_STATE(1290)] = 16229,
  [SMALL_STATE(1291)] = 16233,
  [SMALL_STATE(1292)] = 16237,
  [SMALL_STATE(1293)] = 16241,
  [SMALL_STATE(1294)] = 16245,
  [SMALL_STATE(1295)] = 16249,
  [SMALL_STATE(1296)] = 16253,
  [SMALL_STATE(1297)] = 16257,
  [SMALL_STATE(1298)] = 16261,
  [SMALL_STATE(1299)] = 16265,
  [SMALL_STATE(1300)] = 16269,
  [SMALL_STATE(1301)] = 16273,
  [SMALL_STATE(1302)] = 16277,
  [SMALL_STATE(1303)] = 16281,
  [SMALL_STATE(1304)] = 16285,
  [SMALL_STATE(1305)] = 16289,
  [SMALL_STATE(1306)] = 16293,
  [SMALL_STATE(1307)] = 16297,
  [SMALL_STATE(1308)] = 16301,
  [SMALL_STATE(1309)] = 16305,
  [SMALL_STATE(1310)] = 16309,
  [SMALL_STATE(1311)] = 16313,
  [SMALL_STATE(1312)] = 16317,
  [SMALL_STATE(1313)] = 16321,
  [SMALL_STATE(1314)] = 16325,
  [SMALL_STATE(1315)] = 16329,
  [SMALL_STATE(1316)] = 16333,
  [SMALL_STATE(1317)] = 16337,
  [SMALL_STATE(1318)] = 16341,
  [SMALL_STATE(1319)] = 16345,
  [SMALL_STATE(1320)] = 16349,
  [SMALL_STATE(1321)] = 16353,
  [SMALL_STATE(1322)] = 16357,
  [SMALL_STATE(1323)] = 16361,
  [SMALL_STATE(1324)] = 16365,
  [SMALL_STATE(1325)] = 16369,
  [SMALL_STATE(1326)] = 16373,
  [SMALL_STATE(1327)] = 16377,
  [SMALL_STATE(1328)] = 16381,
  [SMALL_STATE(1329)] = 16385,
  [SMALL_STATE(1330)] = 16389,
  [SMALL_STATE(1331)] = 16393,
  [SMALL_STATE(1332)] = 16397,
  [SMALL_STATE(1333)] = 16401,
  [SMALL_STATE(1334)] = 16405,
  [SMALL_STATE(1335)] = 16409,
  [SMALL_STATE(1336)] = 16413,
  [SMALL_STATE(1337)] = 16417,
  [SMALL_STATE(1338)] = 16421,
  [SMALL_STATE(1339)] = 16425,
  [SMALL_STATE(1340)] = 16429,
  [SMALL_STATE(1341)] = 16433,
  [SMALL_STATE(1342)] = 16437,
  [SMALL_STATE(1343)] = 16441,
  [SMALL_STATE(1344)] = 16445,
  [SMALL_STATE(1345)] = 16449,
  [SMALL_STATE(1346)] = 16453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(454),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(464),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(629),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1346),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(540),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(436),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1344),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1343),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(424),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(438),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(456),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(423),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1342),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(818),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 48),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 48),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 48),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(457),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 48),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 48),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1066),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1091),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1334),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(557),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 61),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 62),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 110),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 39),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 61),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 105),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1057),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 93),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 38),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 106),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 39),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 61),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 61),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 23),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(473),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 116),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(707),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 120),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 121),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 44),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 48),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(810),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 26),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 48),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 45),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 39),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 125),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 26),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 47),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 46),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 49),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 50),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 51),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 57),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 58),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 35),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 64),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 48),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 66),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 74),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 67),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 19),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 37),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 125),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 124),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 26),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 39),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 44),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 76),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 75),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 72),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 44),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 47),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 83),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 123),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 121),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 44),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 120),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 122),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 9),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 26),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 116),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 19),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 119),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 61),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 47),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 118),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 84),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 26),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 117),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 39),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 81),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 44),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 85),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 79),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 86),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 80),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 115),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 114),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 65),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 52),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 113),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 52),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 84),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 85),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 87),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 88),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 89),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 112),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 90),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 91),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 92),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 53),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 106),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 105),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 54),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 55),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 94),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 56),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 95),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 72),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 109),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 96),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 59),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 61),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 60),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 108),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 19),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 107),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 48),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 97),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 79),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 103),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 102),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 100),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 99),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 63),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 93),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1194),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1121),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1204),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1231),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1235),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1207),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1215),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(425),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1257),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 23),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(673),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1224),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1192),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1061),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(59),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1139),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1151),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1070),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(752),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(836),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(418),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(823),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(739),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(777),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(748),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(428),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(171),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(609),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(734),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(417),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1038),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 78),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 104),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 78),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 43),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 77),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1074),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1087),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1104),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1096),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 68),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 22),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 73),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1127),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1147),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1166),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1171),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1179),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 69),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 70),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 71),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 10),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 82),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 42),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2766] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
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
