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
#define STATE_COUNT 1228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 304
#define ALIAS_COUNT 29
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 21
#define PRODUCTION_ID_COUNT 109

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
  aux_sym_create_function_token1 = 104,
  aux_sym_create_function_token2 = 105,
  aux_sym_data_type_name_token1 = 106,
  aux_sym_data_type_name_token2 = 107,
  aux_sym_data_type_name_token3 = 108,
  aux_sym_data_type_name_token4 = 109,
  aux_sym_data_type_name_token5 = 110,
  aux_sym_data_type_name_token6 = 111,
  aux_sym_data_type_name_token7 = 112,
  aux_sym_data_type_name_token8 = 113,
  aux_sym_data_type_name_token9 = 114,
  aux_sym_data_type_name_token10 = 115,
  aux_sym_data_type_name_token11 = 116,
  aux_sym_data_type_name_token12 = 117,
  aux_sym_data_type_name_token13 = 118,
  aux_sym_data_type_name_token14 = 119,
  aux_sym_data_type_name_token15 = 120,
  aux_sym_data_type_name_token16 = 121,
  aux_sym_data_type_name_token17 = 122,
  aux_sym_data_type_name_token18 = 123,
  aux_sym_data_type_name_token19 = 124,
  aux_sym_data_type_name_token20 = 125,
  aux_sym_data_type_name_token21 = 126,
  aux_sym_data_type_name_token22 = 127,
  aux_sym_return_mode_token1 = 128,
  aux_sym_return_mode_token2 = 129,
  aux_sym_create_keyspace_token1 = 130,
  aux_sym_create_keyspace_token2 = 131,
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
  sym_materialized_view_name = 216,
  sym_materialized_view_where = 217,
  sym_column_not_null = 218,
  sym_create_function = 219,
  sym_data_type = 220,
  sym_data_type_name = 221,
  sym_data_type_definition = 222,
  sym_return_mode = 223,
  sym_create_keyspace = 224,
  sym_replication_list_item = 225,
  sym_durable_writes = 226,
  sym_create_role = 227,
  sym_role_with = 228,
  sym_role_with_option = 229,
  sym_option_hash = 230,
  sym_option_hash_item = 231,
  sym_create_table = 232,
  sym_column_definition_list = 233,
  sym_column_definition = 234,
  sym_primary_key_column = 235,
  sym_primary_key_element = 236,
  sym_primary_key_definition = 237,
  sym_compound_key = 238,
  sym_clustering_key_list = 239,
  sym_composite_key = 240,
  sym_partition_key_list = 241,
  sym_with_element = 242,
  sym_table_options = 243,
  sym_table_option_item = 244,
  sym_table_option_name = 245,
  sym_table_option_value = 246,
  sym_compact_storage = 247,
  sym_clustering_order = 248,
  sym_create_trigger = 249,
  sym_trigger_name = 250,
  sym_trigger_class = 251,
  sym_create_type = 252,
  sym_typed_name = 253,
  sym_type_name = 254,
  sym_create_user = 255,
  sym_user_name = 256,
  sym_user_with = 257,
  sym_user_password = 258,
  sym_user_super_user = 259,
  sym_alter_materialized_view = 260,
  sym_alter_keyspace = 261,
  sym_keyspace_name = 262,
  sym_replication_list = 263,
  sym_alter_role = 264,
  sym_alter_table = 265,
  sym_alter_table_operation = 266,
  sym_alter_table_add = 267,
  sym_alter_table_drop_columns = 268,
  sym_alter_table_drop_compact_storage = 269,
  sym_alter_table_rename = 270,
  sym_alter_table_with = 271,
  sym_alter_type = 272,
  sym_alter_type_operation = 273,
  sym_alter_type_alter_type = 274,
  sym_alter_type_add = 275,
  sym_alter_type_rename = 276,
  sym_alter_type_rename_item = 277,
  sym_alter_user = 278,
  sym_apply_batch = 279,
  aux_sym_source_file_repeat1 = 280,
  aux_sym_select_elements_repeat1 = 281,
  aux_sym_function_args_repeat1 = 282,
  aux_sym_relation_elements_repeat1 = 283,
  aux_sym_relation_element_repeat1 = 284,
  aux_sym_relation_element_repeat2 = 285,
  aux_sym_delete_column_list_repeat1 = 286,
  aux_sym_if_condition_list_repeat1 = 287,
  aux_sym_expression_list_repeat1 = 288,
  aux_sym_assignment_map_repeat1 = 289,
  aux_sym_assignment_set_repeat1 = 290,
  aux_sym_update_repeat1 = 291,
  aux_sym_init_cond_list_nested_repeat1 = 292,
  aux_sym_init_cond_hash_repeat1 = 293,
  aux_sym_materialized_view_where_repeat1 = 294,
  aux_sym_create_function_repeat1 = 295,
  aux_sym_data_type_definition_repeat1 = 296,
  aux_sym_role_with_repeat1 = 297,
  aux_sym_option_hash_repeat1 = 298,
  aux_sym_column_definition_list_repeat1 = 299,
  aux_sym_clustering_key_list_repeat1 = 300,
  aux_sym_table_options_repeat1 = 301,
  aux_sym_replication_list_repeat1 = 302,
  aux_sym_alter_type_rename_repeat1 = 303,
  anon_alias_sym_aggregate = 304,
  anon_alias_sym_alias = 305,
  anon_alias_sym_assignment_operand = 306,
  anon_alias_sym_column = 307,
  anon_alias_sym_entry = 308,
  anon_alias_sym_finalfunc = 309,
  anon_alias_sym_full = 310,
  anon_alias_sym_function = 311,
  anon_alias_sym_function_name = 312,
  anon_alias_sym_hash_key = 313,
  anon_alias_sym_index = 314,
  anon_alias_sym_key = 315,
  anon_alias_sym_keyspace = 316,
  anon_alias_sym_language = 317,
  anon_alias_sym_limit_value = 318,
  anon_alias_sym_login = 319,
  anon_alias_sym_materialized_view = 320,
  anon_alias_sym_partition_key = 321,
  anon_alias_sym_password = 322,
  anon_alias_sym_primary_key = 323,
  anon_alias_sym_role = 324,
  anon_alias_sym_sfunc = 325,
  anon_alias_sym_table = 326,
  anon_alias_sym_time = 327,
  anon_alias_sym_trigger = 328,
  anon_alias_sym_ttl = 329,
  anon_alias_sym_type = 330,
  anon_alias_sym_user = 331,
  anon_alias_sym_value = 332,
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
  [aux_sym_create_keyspace_token1] = "WITH",
  [aux_sym_create_keyspace_token2] = "REPLICATION",
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
  [sym_materialized_view_name] = "materialized_view_name",
  [sym_materialized_view_where] = "materialized_view_where",
  [sym_column_not_null] = "column_not_null",
  [sym_create_function] = "create_function",
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
  [sym_typed_name] = "typed_name",
  [sym_type_name] = "type_name",
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
  [sym_alter_table_drop_columns] = "alter_table_drop_columns",
  [sym_alter_table_drop_compact_storage] = "alter_table_drop_compact_storage",
  [sym_alter_table_rename] = "alter_table_rename",
  [sym_alter_table_with] = "alter_table_with",
  [sym_alter_type] = "alter_type",
  [sym_alter_type_operation] = "alter_type_operation",
  [sym_alter_type_alter_type] = "alter_type_alter_type",
  [sym_alter_type_add] = "alter_type_add",
  [sym_alter_type_rename] = "alter_type_rename",
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
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_type_rename_repeat1] = "alter_type_rename_repeat1",
  [anon_alias_sym_aggregate] = "aggregate",
  [anon_alias_sym_alias] = "alias",
  [anon_alias_sym_assignment_operand] = "assignment_operand",
  [anon_alias_sym_column] = "column",
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
  [aux_sym_create_keyspace_token2] = aux_sym_create_keyspace_token2,
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
  [sym_materialized_view_name] = sym_materialized_view_name,
  [sym_materialized_view_where] = sym_materialized_view_where,
  [sym_column_not_null] = sym_column_not_null,
  [sym_create_function] = sym_create_function,
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
  [sym_typed_name] = sym_typed_name,
  [sym_type_name] = sym_type_name,
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
  [sym_alter_table_drop_columns] = sym_alter_table_drop_columns,
  [sym_alter_table_drop_compact_storage] = sym_alter_table_drop_compact_storage,
  [sym_alter_table_rename] = sym_alter_table_rename,
  [sym_alter_table_with] = sym_alter_table_with,
  [sym_alter_type] = sym_alter_type,
  [sym_alter_type_operation] = sym_alter_type_operation,
  [sym_alter_type_alter_type] = sym_alter_type_alter_type,
  [sym_alter_type_add] = sym_alter_type_add,
  [sym_alter_type_rename] = sym_alter_type_rename,
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
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_type_rename_repeat1] = aux_sym_alter_type_rename_repeat1,
  [anon_alias_sym_aggregate] = anon_alias_sym_aggregate,
  [anon_alias_sym_alias] = anon_alias_sym_alias,
  [anon_alias_sym_assignment_operand] = anon_alias_sym_assignment_operand,
  [anon_alias_sym_column] = anon_alias_sym_column,
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
  [aux_sym_create_keyspace_token2] = {
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
  [sym_materialized_view_name] = {
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
  [sym_create_function] = {
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
  [sym_typed_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
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
  [aux_sym_replication_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_type_rename_repeat1] = {
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
    [0] = anon_alias_sym_type,
  },
  [9] = {
    [0] = anon_alias_sym_user,
  },
  [10] = {
    [2] = anon_alias_sym_table,
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
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [19] = {
    [0] = anon_alias_sym_materialized_view,
  },
  [20] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [21] = {
    [3] = anon_alias_sym_role,
  },
  [22] = {
    [0] = anon_alias_sym_function_name,
  },
  [23] = {
    [1] = anon_alias_sym_limit_value,
  },
  [24] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [25] = {
    [2] = anon_alias_sym_time,
  },
  [26] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [27] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_type,
  },
  [28] = {
    [4] = anon_alias_sym_table,
  },
  [29] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [30] = {
    [4] = anon_alias_sym_index,
  },
  [31] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [32] = {
    [4] = anon_alias_sym_keyspace,
  },
  [33] = {
    [4] = anon_alias_sym_function,
  },
  [34] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [35] = {
    [4] = anon_alias_sym_role,
  },
  [36] = {
    [4] = anon_alias_sym_aggregate,
  },
  [37] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [38] = {
    [4] = anon_alias_sym_type,
  },
  [39] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [40] = {
    [2] = anon_alias_sym_ttl,
  },
  [41] = {
    [1] = anon_alias_sym_table,
  },
  [42] = {
    [1] = anon_alias_sym_function,
  },
  [43] = {
    [1] = anon_alias_sym_role,
  },
  [44] = {
    [5] = anon_alias_sym_role,
  },
  [45] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_materialized_view,
  },
  [46] = {
    [1] = anon_alias_sym_password,
  },
  [47] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [48] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [49] = {
    [1] = anon_alias_sym_column,
  },
  [50] = {
    [2] = anon_alias_sym_password,
  },
  [51] = {
    [2] = anon_alias_sym_login,
  },
  [52] = {
    [2] = anon_alias_sym_user,
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
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [58] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [59] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [60] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [61] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [62] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [63] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [64] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [65] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [66] = {
    [2] = anon_alias_sym_key,
  },
  [67] = {
    [2] = anon_alias_sym_entry,
  },
  [68] = {
    [2] = anon_alias_sym_full,
  },
  [69] = {
    [0] = anon_alias_sym_primary_key,
  },
  [70] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [71] = {
    [4] = anon_alias_sym_column,
  },
  [72] = {
    [2] = anon_alias_sym_value,
  },
  [73] = {
    [0] = anon_alias_sym_partition_key,
  },
  [74] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [75] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [76] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [77] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [78] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [79] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [80] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [81] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [82] = {
    [13] = anon_alias_sym_primary_key,
  },
  [83] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [84] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [85] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [86] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [87] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [88] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [89] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [90] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [91] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [92] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [93] = {
    [0] = anon_alias_sym_hash_key,
  },
  [94] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [95] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [96] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [97] = {
    [16] = anon_alias_sym_primary_key,
  },
  [98] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [99] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [100] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [101] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [102] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [103] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [104] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [105] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [106] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [107] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [108] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(554);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(648);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == '-') ADVANCE(649);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == ';') ADVANCE(555);
      if (lookahead == '<') ADVANCE(594);
      if (lookahead == '=') ADVANCE(597);
      if (lookahead == '>') ADVANCE(598);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == ']') ADVANCE(619);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '}') ADVANCE(629);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(423);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
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
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '0') ADVANCE(577);
      if (lookahead == 'X') ADVANCE(755);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(936);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(551);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(589);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(805);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(863);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(829);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(845);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(758);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(792);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(915);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(918);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(799);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(832);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(868);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(922);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
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
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(493);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
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
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
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
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
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
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(696);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
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
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(402);
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
          lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(478);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
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
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
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
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
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
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(673);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(673);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(748);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(245);
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
          lookahead == 'g') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
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
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(738);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
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
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
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
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
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
          lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 253:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(474);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
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
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
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
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
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
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
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
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
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
          lookahead == 'o') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(716);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
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
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
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
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(471);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 436:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 476:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(467);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 494:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 495:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 496:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(677);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(561);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 500:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 503:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(753);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(661);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(688);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(603);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 511:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 512:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(145);
      END_STATE();
    case 513:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(172);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(571);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(574);
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
      if (eof) ADVANCE(554);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '0') ADVANCE(577);
      if (lookahead == ';') ADVANCE(555);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '}') ADVANCE(629);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(483);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 553:
      if (eof) ADVANCE(554);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == ';') ADVANCE(555);
      if (lookahead == '<') ADVANCE(594);
      if (lookahead == '=') ADVANCE(597);
      if (lookahead == '>') ADVANCE(598);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == ']') ADVANCE(619);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '}') ADVANCE(629);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(423);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (lookahead == 'X') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(909);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(697);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(804);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(749);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(860);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(865);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(917);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(785);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(717);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(772);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(689);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(937);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(756);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
  [37] = {.lex_state = 553},
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
  [51] = {.lex_state = 553},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 553},
  [55] = {.lex_state = 553},
  [56] = {.lex_state = 553},
  [57] = {.lex_state = 553},
  [58] = {.lex_state = 553},
  [59] = {.lex_state = 553},
  [60] = {.lex_state = 553},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 553},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 553},
  [65] = {.lex_state = 553},
  [66] = {.lex_state = 553},
  [67] = {.lex_state = 553},
  [68] = {.lex_state = 553},
  [69] = {.lex_state = 553},
  [70] = {.lex_state = 553},
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
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 553},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 553},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 553},
  [88] = {.lex_state = 552},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 553},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 553},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 552},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 553},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 553},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 553},
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
  [141] = {.lex_state = 553},
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
  [161] = {.lex_state = 552},
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
  [181] = {.lex_state = 553},
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
  [199] = {.lex_state = 553},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 553},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 553},
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
  [217] = {.lex_state = 553},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 553},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
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
  [362] = {.lex_state = 552},
  [363] = {.lex_state = 552},
  [364] = {.lex_state = 552},
  [365] = {.lex_state = 552},
  [366] = {.lex_state = 552},
  [367] = {.lex_state = 552},
  [368] = {.lex_state = 552},
  [369] = {.lex_state = 552},
  [370] = {.lex_state = 552},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 552},
  [378] = {.lex_state = 552},
  [379] = {.lex_state = 42},
  [380] = {.lex_state = 43},
  [381] = {.lex_state = 552},
  [382] = {.lex_state = 552},
  [383] = {.lex_state = 42},
  [384] = {.lex_state = 552},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 42},
  [387] = {.lex_state = 552},
  [388] = {.lex_state = 552},
  [389] = {.lex_state = 552},
  [390] = {.lex_state = 552},
  [391] = {.lex_state = 42},
  [392] = {.lex_state = 553},
  [393] = {.lex_state = 552},
  [394] = {.lex_state = 552},
  [395] = {.lex_state = 552},
  [396] = {.lex_state = 552},
  [397] = {.lex_state = 552},
  [398] = {.lex_state = 553},
  [399] = {.lex_state = 18},
  [400] = {.lex_state = 18},
  [401] = {.lex_state = 18},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 18},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 553},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 553},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 10},
  [413] = {.lex_state = 553},
  [414] = {.lex_state = 15},
  [415] = {.lex_state = 10},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 14},
  [418] = {.lex_state = 12},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 42},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 24},
  [424] = {.lex_state = 553},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 19},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 19},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 26},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 17},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 17},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 17},
  [468] = {.lex_state = 17},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 17},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 17},
  [475] = {.lex_state = 17},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 17},
  [481] = {.lex_state = 17},
  [482] = {.lex_state = 17},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 17},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 17},
  [494] = {.lex_state = 17},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 10},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 10},
  [507] = {.lex_state = 10},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 553},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 10},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 10},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 10},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 10},
  [538] = {.lex_state = 20},
  [539] = {.lex_state = 0},
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
  [552] = {.lex_state = 553},
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
  [563] = {.lex_state = 10},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 552},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 20},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 553},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 20},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 22},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 25},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 20},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 20},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 20},
  [642] = {.lex_state = 20},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 20},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 20},
  [651] = {.lex_state = 20},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 553},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 20},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 10},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 10},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 10},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 20},
  [679] = {.lex_state = 27},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 10},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 10},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 20},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 10},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 553},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 553},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 16},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 10},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 27},
  [770] = {.lex_state = 27},
  [771] = {.lex_state = 20},
  [772] = {.lex_state = 20},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 552},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 553},
  [822] = {.lex_state = 552},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 10},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 553},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 10},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 10},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 10},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 552},
  [856] = {.lex_state = 552},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 42},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 10},
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
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 10},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
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
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 10},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 10},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 10},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 553},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 10},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 552},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 10},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 10},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 10},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 10},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 552},
  [1008] = {.lex_state = 10},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 10},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 10},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 10},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 10},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 553},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 10},
  [1047] = {.lex_state = 553},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 10},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 10},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 10},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 10},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 10},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 10},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 10},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 552},
  [1085] = {.lex_state = 10},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 552},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 10},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 10},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 10},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 552},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 552},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 553},
  [1123] = {.lex_state = 10},
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
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 10},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 10},
  [1148] = {.lex_state = 10},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 552},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 10},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 10},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 10},
  [1173] = {.lex_state = 552},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 552},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
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
  [1199] = {.lex_state = 552},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 10},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 10},
  [1208] = {.lex_state = 10},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 552},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 10},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 552},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 10},
  [1227] = {.lex_state = 10},
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
    [aux_sym_create_keyspace_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(1223),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(306),
    [sym_delete_statement] = STATE(306),
    [sym_begin_batch] = STATE(548),
    [sym_insert_statement] = STATE(306),
    [sym_truncate] = STATE(306),
    [sym_create_index] = STATE(306),
    [sym_drop_index] = STATE(306),
    [sym_update] = STATE(306),
    [sym_use] = STATE(306),
    [sym_grant] = STATE(306),
    [sym_revoke] = STATE(306),
    [sym_list_roles] = STATE(306),
    [sym_list_permissions] = STATE(306),
    [sym_drop_aggregate] = STATE(306),
    [sym_drop_materialized_view] = STATE(306),
    [sym_drop_function] = STATE(306),
    [sym_drop_keyspace] = STATE(306),
    [sym_drop_role] = STATE(306),
    [sym_drop_table] = STATE(306),
    [sym_drop_trigger] = STATE(306),
    [sym_drop_type] = STATE(306),
    [sym_drop_user] = STATE(306),
    [sym_create_aggregate] = STATE(306),
    [sym_create_materialized_view] = STATE(306),
    [sym_create_function] = STATE(306),
    [sym_create_keyspace] = STATE(306),
    [sym_create_role] = STATE(306),
    [sym_create_table] = STATE(306),
    [sym_create_trigger] = STATE(306),
    [sym_create_type] = STATE(306),
    [sym_create_user] = STATE(306),
    [sym_alter_materialized_view] = STATE(306),
    [sym_alter_keyspace] = STATE(306),
    [sym_alter_role] = STATE(306),
    [sym_alter_table] = STATE(306),
    [sym_alter_type] = STATE(306),
    [sym_alter_user] = STATE(306),
    [sym_apply_batch] = STATE(306),
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
    STATE(548), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(306), 37,
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
    STATE(548), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(306), 37,
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
    STATE(63), 1,
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
  [320] = 3,
    STATE(63), 1,
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
  [355] = 3,
    STATE(63), 1,
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
  [390] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(1106), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(976), 1,
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
    STATE(63), 1,
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
  [495] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(851), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(838), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(950), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(825), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1073), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(828), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(314), 1,
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
    STATE(63), 1,
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
  [775] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(1116), 1,
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
    STATE(63), 1,
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
  [845] = 3,
    STATE(63), 1,
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
  [880] = 3,
    STATE(63), 1,
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
  [915] = 3,
    STATE(63), 1,
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
  [950] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(1198), 1,
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
    STATE(63), 1,
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
  [1020] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(1162), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1192), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(996), 1,
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
    STATE(63), 1,
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
  [1160] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(1006), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1045), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1019), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1038), 1,
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
    STATE(63), 1,
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
  [1335] = 2,
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
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1368] = 3,
    STATE(63), 1,
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
  [1403] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(894), 1,
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
    STATE(63), 1,
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
  [1473] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(900), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1033), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(975), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(908), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(1024), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(796), 1,
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
    STATE(63), 1,
      sym_data_type_name,
    STATE(476), 1,
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
    STATE(63), 1,
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
  [1753] = 3,
    STATE(63), 1,
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
  [1788] = 3,
    STATE(63), 1,
      sym_data_type_name,
    STATE(116), 1,
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
  [1823] = 1,
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
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1853] = 2,
    STATE(646), 1,
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
  [1885] = 2,
    STATE(558), 1,
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
  [1917] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(54), 1,
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
  [1949] = 1,
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
  [1976] = 1,
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
  [2003] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(54), 1,
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
  [2034] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
  [2065] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(57), 1,
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
  [2096] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(54), 1,
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
  [2127] = 1,
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
  [2153] = 8,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    STATE(82), 1,
      sym_where_spec,
    STATE(102), 1,
      sym_order_spec,
    STATE(181), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2193] = 3,
    ACTIONS(124), 1,
      anon_sym_LT,
    STATE(81), 1,
      sym_data_type_definition,
    ACTIONS(122), 21,
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
  [2223] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(84), 1,
      sym_where_spec,
    STATE(95), 1,
      sym_order_spec,
    STATE(203), 1,
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
  [2263] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(80), 1,
      sym_where_spec,
    STATE(109), 1,
      sym_order_spec,
    STATE(205), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2303] = 3,
    ACTIONS(136), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(134), 21,
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
  [2333] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
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
  [2362] = 1,
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
  [2387] = 1,
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
  [2412] = 1,
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
  [2437] = 1,
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
  [2462] = 1,
    ACTIONS(134), 22,
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
  [2487] = 1,
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
  [2512] = 1,
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
  [2537] = 1,
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
  [2562] = 1,
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
  [2587] = 1,
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
  [2612] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
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
  [2641] = 1,
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
  [2665] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(111), 1,
      sym_order_spec,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2699] = 1,
    ACTIONS(167), 21,
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
  [2723] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(95), 1,
      sym_order_spec,
    STATE(203), 1,
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
  [2757] = 1,
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
  [2781] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(109), 1,
      sym_order_spec,
    STATE(205), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2815] = 1,
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
  [2839] = 2,
    ACTIONS(175), 1,
      anon_sym_DOT,
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
  [2864] = 1,
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
  [2887] = 2,
    ACTIONS(181), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(179), 18,
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
  [2912] = 2,
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
  [2937] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2962] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2987] = 9,
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
    STATE(571), 1,
      sym_expression,
    STATE(858), 1,
      sym_expression_list,
    STATE(708), 5,
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
  [3025] = 1,
    ACTIONS(205), 19,
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
  [3047] = 4,
    ACTIONS(209), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(323), 1,
      sym_using_ttl_timestamp,
    ACTIONS(207), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3075] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(205), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3103] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(213), 17,
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
  [3129] = 1,
    ACTIONS(218), 19,
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
  [3151] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3173] = 9,
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
    STATE(571), 1,
      sym_expression,
    STATE(927), 1,
      sym_expression_list,
    STATE(708), 5,
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
  [3211] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3233] = 4,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(226), 1,
      aux_sym_delete_statement_token2,
    STATE(240), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3261] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(203), 1,
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
  [3289] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(228), 17,
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
  [3315] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3337] = 2,
    ACTIONS(237), 1,
      aux_sym_privilege_token2,
    ACTIONS(235), 18,
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
  [3361] = 3,
    STATE(357), 1,
      sym_user_super_user,
    ACTIONS(241), 2,
      aux_sym_role_with_option_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3387] = 1,
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
  [3409] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3431] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3459] = 4,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(247), 1,
      aux_sym_delete_statement_token2,
    STATE(308), 1,
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
  [3487] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(251), 1,
      aux_sym_select_statement_token4,
    STATE(217), 1,
      sym_limit_spec,
    ACTIONS(249), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3515] = 3,
    ACTIONS(255), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3540] = 1,
    ACTIONS(235), 18,
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
  [3561] = 1,
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
  [3582] = 3,
    ACTIONS(261), 1,
      aux_sym_create_keyspace_token1,
    STATE(244), 1,
      sym_role_with,
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
  [3607] = 1,
    ACTIONS(263), 18,
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
  [3628] = 3,
    ACTIONS(261), 1,
      aux_sym_create_keyspace_token1,
    STATE(227), 1,
      sym_role_with,
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
  [3653] = 3,
    ACTIONS(269), 1,
      aux_sym_delete_statement_token2,
    STATE(315), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3678] = 1,
    ACTIONS(271), 18,
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
  [3699] = 3,
    ACTIONS(275), 1,
      aux_sym_delete_statement_token2,
    STATE(334), 1,
      sym_if_spec,
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
  [3724] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(361), 1,
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
  [3749] = 3,
    ACTIONS(283), 1,
      aux_sym_relation_elements_token1,
    STATE(159), 1,
      aux_sym_if_condition_list_repeat1,
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
  [3774] = 3,
    ACTIONS(287), 1,
      aux_sym_relation_elements_token1,
    STATE(130), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3799] = 3,
    ACTIONS(291), 1,
      aux_sym_delete_statement_token2,
    STATE(286), 1,
      sym_if_spec,
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
  [3824] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(241), 1,
      sym_with_element,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3849] = 3,
    ACTIONS(297), 1,
      aux_sym_delete_statement_token2,
    STATE(294), 1,
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
  [3874] = 3,
    ACTIONS(301), 1,
      aux_sym_delete_statement_token2,
    STATE(259), 1,
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
  [3899] = 3,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(233), 1,
      sym_using_ttl_timestamp,
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
  [3924] = 3,
    ACTIONS(307), 1,
      aux_sym_delete_statement_token2,
    STATE(256), 1,
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
  [3949] = 3,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    STATE(130), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3974] = 3,
    ACTIONS(316), 1,
      aux_sym_create_index_token3,
    ACTIONS(318), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3999] = 3,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(320), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4024] = 3,
    ACTIONS(328), 1,
      aux_sym_list_roles_token2,
    ACTIONS(330), 1,
      aux_sym_list_roles_token3,
    ACTIONS(326), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4049] = 3,
    ACTIONS(334), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
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
  [4074] = 1,
    ACTIONS(337), 18,
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
  [4095] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
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
  [4120] = 3,
    ACTIONS(287), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4145] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_create_function_repeat1,
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
  [4170] = 3,
    ACTIONS(349), 1,
      aux_sym_delete_statement_token2,
    STATE(339), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4195] = 3,
    ACTIONS(353), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
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
  [4220] = 1,
    ACTIONS(355), 18,
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
  [4241] = 1,
    ACTIONS(357), 18,
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
  [4262] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_create_function_repeat1,
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
  [4287] = 3,
    ACTIONS(353), 1,
      aux_sym_relation_elements_token1,
    STATE(140), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(361), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4312] = 1,
    ACTIONS(213), 18,
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
  [4333] = 1,
    ACTIONS(363), 18,
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
  [4354] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4379] = 3,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(245), 1,
      sym_using_ttl_timestamp,
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
  [4404] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4429] = 1,
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
  [4450] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(261), 1,
      sym_with_element,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4475] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4500] = 3,
    ACTIONS(381), 1,
      aux_sym_delete_statement_token2,
    STATE(311), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4525] = 3,
    ACTIONS(385), 1,
      aux_sym_delete_statement_token2,
    STATE(347), 1,
      sym_if_spec,
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
  [4550] = 2,
    ACTIONS(389), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(387), 17,
      ts_builtin_sym_end,
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
  [4573] = 3,
    ACTIONS(261), 1,
      aux_sym_create_keyspace_token1,
    STATE(275), 1,
      sym_role_with,
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
  [4598] = 2,
    ACTIONS(395), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(393), 17,
      ts_builtin_sym_end,
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
  [4621] = 3,
    ACTIONS(283), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4646] = 3,
    ACTIONS(401), 1,
      aux_sym_relation_elements_token1,
    STATE(159), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4671] = 1,
    ACTIONS(404), 18,
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
  [4692] = 8,
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
    STATE(713), 1,
      sym_expression,
    STATE(708), 5,
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
  [4727] = 3,
    ACTIONS(408), 1,
      aux_sym_delete_statement_token2,
    STATE(300), 1,
      sym_if_spec,
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
  [4752] = 1,
    ACTIONS(410), 18,
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
  [4773] = 3,
    ACTIONS(414), 1,
      aux_sym_delete_statement_token2,
    STATE(292), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4798] = 3,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token2,
    STATE(268), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4823] = 3,
    ACTIONS(422), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4848] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4869] = 3,
    ACTIONS(428), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4894] = 3,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(279), 1,
      sym_using_ttl_timestamp,
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
  [4919] = 3,
    ACTIONS(434), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
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
  [4944] = 3,
    ACTIONS(438), 1,
      aux_sym_delete_statement_token2,
    STATE(345), 1,
      sym_if_spec,
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
  [4969] = 1,
    ACTIONS(228), 18,
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
  [4990] = 3,
    ACTIONS(428), 1,
      aux_sym_relation_elements_token1,
    STATE(168), 1,
      aux_sym_role_with_repeat1,
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
  [5015] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5036] = 3,
    ACTIONS(446), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
      aux_sym_role_with_repeat1,
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
  [5061] = 1,
    ACTIONS(449), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5082] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(228), 1,
      sym_with_element,
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
  [5107] = 2,
    ACTIONS(455), 1,
      anon_sym_DOT,
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
  [5129] = 1,
    ACTIONS(457), 17,
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
  [5149] = 1,
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
  [5169] = 2,
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
  [5191] = 1,
    ACTIONS(461), 17,
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
  [5211] = 2,
    ACTIONS(465), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5233] = 2,
    ACTIONS(469), 1,
      anon_sym_DOT,
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
  [5255] = 1,
    ACTIONS(444), 17,
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
  [5275] = 2,
    ACTIONS(473), 1,
      aux_sym_relation_elements_token1,
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
  [5297] = 2,
    ACTIONS(477), 1,
      aux_sym_relation_elements_token1,
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
  [5319] = 1,
    ACTIONS(479), 17,
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
  [5339] = 1,
    ACTIONS(481), 17,
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
  [5359] = 2,
    ACTIONS(485), 1,
      anon_sym_DOT,
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
  [5381] = 2,
    ACTIONS(489), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5403] = 2,
    ACTIONS(493), 1,
      anon_sym_DOT,
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
  [5425] = 2,
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
  [5447] = 2,
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
  [5469] = 1,
    ACTIONS(399), 17,
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
  [5489] = 1,
    ACTIONS(503), 17,
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
  [5509] = 1,
    ACTIONS(505), 17,
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
  [5529] = 2,
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
  [5551] = 1,
    ACTIONS(511), 17,
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
  [5571] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [5591] = 1,
    ACTIONS(515), 17,
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
  [5611] = 1,
    ACTIONS(309), 17,
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
  [5631] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5653] = 2,
    ACTIONS(519), 1,
      aux_sym_create_keyspace_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5675] = 2,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5697] = 1,
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
  [5717] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5739] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5761] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5783] = 1,
    ACTIONS(535), 17,
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
  [5803] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5825] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5845] = 1,
    ACTIONS(332), 17,
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
  [5865] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5887] = 1,
    ACTIONS(547), 17,
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
  [5907] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5927] = 2,
    ACTIONS(553), 1,
      aux_sym_select_statement_token4,
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
  [5949] = 2,
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
  [5971] = 1,
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
  [5991] = 2,
    ACTIONS(251), 1,
      aux_sym_select_statement_token4,
    ACTIONS(249), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6013] = 1,
    ACTIONS(561), 17,
      ts_builtin_sym_end,
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
  [6033] = 1,
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
  [6053] = 1,
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
  [6073] = 9,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(673), 1,
      sym_constant,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(488), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6108] = 1,
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
  [6127] = 1,
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
  [6146] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6165] = 1,
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
  [6184] = 1,
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
  [6203] = 1,
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
  [6222] = 1,
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
  [6241] = 1,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6260] = 1,
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
  [6279] = 1,
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
  [6298] = 1,
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
  [6317] = 1,
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
  [6336] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6355] = 1,
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
  [6374] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6393] = 1,
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
  [6412] = 1,
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
  [6431] = 1,
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
  [6450] = 1,
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
  [6469] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6488] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6507] = 1,
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
  [6526] = 1,
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
  [6545] = 1,
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
  [6564] = 1,
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
  [6583] = 1,
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
  [6602] = 1,
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
  [6621] = 1,
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
  [6640] = 1,
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
  [6659] = 1,
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
  [6678] = 1,
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
  [6697] = 1,
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
  [6716] = 1,
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
  [6735] = 1,
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
  [6754] = 1,
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
  [6773] = 1,
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
  [6792] = 1,
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
  [6811] = 1,
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
  [6830] = 1,
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
  [6849] = 1,
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
  [6868] = 1,
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
  [6887] = 1,
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
  [6906] = 1,
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
  [6925] = 1,
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
  [6944] = 1,
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
  [6963] = 1,
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
  [6982] = 1,
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
  [7001] = 1,
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
  [7020] = 1,
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
  [7039] = 1,
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
  [7058] = 1,
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
  [7077] = 1,
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
  [7096] = 1,
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
  [7115] = 1,
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
  [7134] = 1,
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
  [7153] = 1,
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
  [7172] = 1,
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
  [7191] = 1,
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
  [7210] = 1,
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
  [7229] = 1,
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
  [7248] = 1,
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
  [7267] = 1,
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
  [7286] = 1,
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
  [7305] = 1,
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
  [7324] = 1,
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
  [7343] = 1,
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
  [7362] = 1,
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
  [7381] = 1,
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
  [7400] = 1,
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
  [7419] = 1,
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
  [7438] = 1,
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
  [7457] = 1,
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
  [7476] = 1,
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
  [7495] = 1,
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
  [7514] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7533] = 1,
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
  [7552] = 1,
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
  [7571] = 1,
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
  [7590] = 1,
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
  [7609] = 1,
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
  [7628] = 1,
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
  [7647] = 2,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(709), 15,
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
  [7668] = 1,
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
  [7687] = 1,
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
  [7706] = 1,
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
  [7725] = 1,
    ACTIONS(249), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7763] = 1,
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
  [7782] = 1,
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
  [7801] = 1,
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
  [7820] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7839] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7858] = 1,
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
  [7877] = 1,
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
  [7896] = 1,
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
  [7915] = 1,
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
  [7934] = 1,
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
  [7953] = 1,
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
  [7972] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7991] = 1,
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
  [8010] = 1,
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
  [8029] = 1,
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
  [8048] = 1,
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
  [8067] = 1,
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
  [8086] = 1,
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
  [8105] = 1,
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
  [8124] = 1,
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
  [8143] = 1,
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
  [8162] = 1,
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
  [8181] = 1,
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
  [8200] = 1,
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
  [8219] = 1,
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
  [8238] = 1,
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
  [8257] = 1,
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
  [8276] = 1,
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
  [8295] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8314] = 1,
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
  [8333] = 1,
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
  [8352] = 1,
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
  [8371] = 1,
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
  [8390] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8409] = 1,
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
  [8428] = 1,
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
  [8447] = 1,
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
  [8466] = 1,
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
  [8485] = 1,
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
  [8504] = 1,
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
  [8523] = 1,
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
  [8542] = 1,
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
  [8561] = 1,
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
  [8580] = 1,
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
  [8599] = 1,
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
  [8618] = 1,
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
  [8637] = 1,
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
  [8656] = 1,
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
  [8675] = 1,
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
  [8694] = 1,
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
  [8713] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(248), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8741] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(236), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8769] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(694), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8797] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(230), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8825] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(304), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8853] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(264), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8881] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(277), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8909] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(251), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8937] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(247), 1,
      sym_init_cond_definition,
    STATE(174), 4,
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
  [8965] = 1,
    ACTIONS(805), 15,
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
  [8983] = 8,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_STAR,
    ACTIONS(809), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(1140), 1,
      sym_function_args,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(546), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9014] = 9,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(551), 1,
      sym_init_cond_hash_item,
    STATE(560), 1,
      sym_init_cond_list,
    STATE(564), 1,
      sym_constant,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9047] = 7,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(809), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(859), 1,
      sym_function_args,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(546), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9075] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(815), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(71), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9100] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(817), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(567), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(714), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9125] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(692), 2,
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
  [9148] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(461), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9170] = 11,
    ACTIONS(821), 1,
      aux_sym_truncate_token2,
    ACTIONS(823), 1,
      aux_sym_create_index_token2,
    ACTIONS(825), 1,
      aux_sym_resource_token2,
    ACTIONS(827), 1,
      aux_sym_resource_token5,
    ACTIONS(829), 1,
      aux_sym_resource_token6,
    ACTIONS(831), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(833), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(835), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(837), 1,
      aux_sym_drop_type_token1,
    ACTIONS(839), 1,
      aux_sym_drop_user_token1,
    ACTIONS(841), 1,
      aux_sym_create_aggregate_token1,
  [9204] = 4,
    ACTIONS(845), 1,
      aux_sym_privilege_token1,
    ACTIONS(847), 1,
      aux_sym_resource_token4,
    STATE(131), 1,
      sym_privilege,
    ACTIONS(843), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9224] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(849), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(70), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9246] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(75), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9265] = 10,
    ACTIONS(851), 1,
      aux_sym_truncate_token2,
    ACTIONS(853), 1,
      aux_sym_create_index_token2,
    ACTIONS(855), 1,
      aux_sym_resource_token2,
    ACTIONS(857), 1,
      aux_sym_resource_token5,
    ACTIONS(859), 1,
      aux_sym_resource_token6,
    ACTIONS(861), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(863), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(865), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(867), 1,
      aux_sym_drop_type_token1,
    ACTIONS(869), 1,
      aux_sym_drop_user_token1,
  [9296] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(589), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9315] = 6,
    ACTIONS(871), 1,
      aux_sym_drop_index_token1,
    ACTIONS(873), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(875), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(877), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [9338] = 3,
    ACTIONS(845), 1,
      aux_sym_privilege_token1,
    STATE(1215), 1,
      sym_privilege,
    ACTIONS(843), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9355] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(449), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9374] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(564), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9393] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(759), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9412] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(520), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9431] = 3,
    ACTIONS(845), 1,
      aux_sym_privilege_token1,
    STATE(1214), 1,
      sym_privilege,
    ACTIONS(843), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9448] = 6,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      aux_sym_relation_element_token1,
    ACTIONS(887), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(889), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(881), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(883), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9471] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(673), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9490] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(196), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9509] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(937), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9528] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(163), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9547] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(69), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9566] = 5,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      aux_sym_relation_element_token1,
    ACTIONS(887), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(881), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(883), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9586] = 6,
    ACTIONS(891), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(893), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(895), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(803), 1,
      sym_index_column_spec,
    STATE(903), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9607] = 6,
    ACTIONS(891), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(893), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(895), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(882), 1,
      sym_index_column_spec,
    STATE(903), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9628] = 6,
    ACTIONS(891), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(893), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(895), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(779), 1,
      sym_index_column_spec,
    STATE(903), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9649] = 6,
    ACTIONS(899), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(901), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(295), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(144), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9670] = 6,
    ACTIONS(891), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(893), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(895), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(904), 1,
      sym_index_column_spec,
    STATE(903), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9691] = 6,
    ACTIONS(899), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(901), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(276), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(144), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9712] = 6,
    ACTIONS(899), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(901), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(327), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(144), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9733] = 6,
    ACTIONS(899), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(901), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(293), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(144), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9754] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      aux_sym__decimal_literal_token1,
    STATE(749), 1,
      sym__decimal_literal,
    STATE(750), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [9772] = 7,
    ACTIONS(907), 1,
      aux_sym_truncate_token2,
    ACTIONS(909), 1,
      aux_sym_privilege_token1,
    ACTIONS(911), 1,
      aux_sym_resource_token2,
    ACTIONS(913), 1,
      aux_sym_resource_token5,
    ACTIONS(915), 1,
      aux_sym_resource_token6,
    ACTIONS(917), 1,
      sym_object_name,
    STATE(1020), 1,
      sym_resource,
  [9794] = 3,
    ACTIONS(923), 1,
      aux_sym_relation_element_token1,
    ACTIONS(919), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(921), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9808] = 7,
    ACTIONS(907), 1,
      aux_sym_truncate_token2,
    ACTIONS(909), 1,
      aux_sym_privilege_token1,
    ACTIONS(911), 1,
      aux_sym_resource_token2,
    ACTIONS(913), 1,
      aux_sym_resource_token5,
    ACTIONS(915), 1,
      aux_sym_resource_token6,
    ACTIONS(917), 1,
      sym_object_name,
    STATE(1018), 1,
      sym_resource,
  [9830] = 7,
    ACTIONS(925), 1,
      aux_sym_select_statement_token2,
    ACTIONS(927), 1,
      aux_sym_select_statement_token3,
    ACTIONS(929), 1,
      anon_sym_STAR,
    ACTIONS(931), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(568), 1,
      sym_select_element,
    STATE(688), 1,
      sym_select_elements,
  [9852] = 6,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(78), 1,
      sym_relation_element,
    STATE(87), 1,
      sym_relation_elements,
    STATE(420), 1,
      sym_function_call,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [9872] = 3,
    ACTIONS(941), 1,
      aux_sym_relation_element_token1,
    ACTIONS(937), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(939), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9886] = 5,
    ACTIONS(899), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(901), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(939), 1,
      sym_table_option_name,
    STATE(213), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9904] = 6,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(72), 1,
      sym_relation_element,
    STATE(420), 1,
      sym_function_call,
    STATE(766), 1,
      sym_column_not_null,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [9924] = 5,
    ACTIONS(945), 1,
      aux_sym_privilege_token3,
    ACTIONS(947), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(949), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9942] = 7,
    ACTIONS(907), 1,
      aux_sym_truncate_token2,
    ACTIONS(909), 1,
      aux_sym_privilege_token1,
    ACTIONS(911), 1,
      aux_sym_resource_token2,
    ACTIONS(913), 1,
      aux_sym_resource_token5,
    ACTIONS(915), 1,
      aux_sym_resource_token6,
    ACTIONS(917), 1,
      sym_object_name,
    STATE(207), 1,
      sym_resource,
  [9964] = 6,
    ACTIONS(929), 1,
      anon_sym_STAR,
    ACTIONS(931), 1,
      sym_object_name,
    ACTIONS(951), 1,
      aux_sym_select_statement_token3,
    STATE(511), 1,
      sym_function_call,
    STATE(568), 1,
      sym_select_element,
    STATE(667), 1,
      sym_select_elements,
  [9983] = 5,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(72), 1,
      sym_relation_element,
    STATE(420), 1,
      sym_function_call,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10000] = 2,
    ACTIONS(953), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(955), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10011] = 6,
    ACTIONS(957), 1,
      aux_sym_truncate_token2,
    ACTIONS(959), 1,
      aux_sym_resource_token2,
    ACTIONS(961), 1,
      aux_sym_resource_token6,
    ACTIONS(963), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(965), 1,
      aux_sym_drop_type_token1,
    ACTIONS(967), 1,
      aux_sym_drop_user_token1,
  [10030] = 1,
    ACTIONS(969), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10038] = 5,
    ACTIONS(971), 1,
      sym__string_literal,
    ACTIONS(973), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(975), 1,
      aux_sym_create_index_token3,
    ACTIONS(977), 1,
      sym_object_name,
    STATE(1185), 1,
      sym_index_name,
  [10054] = 3,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(210), 2,
      sym_option_hash,
      sym_table_option_value,
  [10066] = 1,
    ACTIONS(983), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10074] = 1,
    ACTIONS(985), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10082] = 5,
    ACTIONS(987), 1,
      aux_sym_from_spec_token1,
    ACTIONS(989), 1,
      sym_object_name,
    STATE(492), 1,
      sym_from_spec,
    STATE(523), 1,
      sym_delete_column_item,
    STATE(727), 1,
      sym_delete_column_list,
  [10098] = 4,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_DOT,
    ACTIONS(995), 1,
      aux_sym_select_element_token1,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10112] = 1,
    ACTIONS(997), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10120] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1002), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10132] = 5,
    ACTIONS(929), 1,
      anon_sym_STAR,
    ACTIONS(1004), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(568), 1,
      sym_select_element,
    STATE(731), 1,
      sym_select_elements,
  [10148] = 3,
    ACTIONS(1008), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(578), 1,
      sym_using_timestamp_spec,
    ACTIONS(1006), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10160] = 5,
    ACTIONS(1010), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1014), 1,
      aux_sym_insert_values_spec_token1,
    STATE(101), 1,
      sym_insert_values_spec,
    STATE(601), 1,
      sym_insert_column_spec,
  [10176] = 5,
    ACTIONS(929), 1,
      anon_sym_STAR,
    ACTIONS(1004), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(568), 1,
      sym_select_element,
    STATE(667), 1,
      sym_select_elements,
  [10192] = 5,
    ACTIONS(1016), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1018), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1020), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1022), 1,
      aux_sym_role_with_option_token4,
    STATE(185), 1,
      sym_role_with_option,
  [10208] = 5,
    ACTIONS(1010), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1014), 1,
      aux_sym_insert_values_spec_token1,
    STATE(94), 1,
      sym_insert_values_spec,
    STATE(582), 1,
      sym_insert_column_spec,
  [10224] = 5,
    ACTIONS(987), 1,
      aux_sym_from_spec_token1,
    ACTIONS(989), 1,
      sym_object_name,
    STATE(490), 1,
      sym_from_spec,
    STATE(523), 1,
      sym_delete_column_item,
    STATE(680), 1,
      sym_delete_column_list,
  [10240] = 2,
    ACTIONS(1024), 1,
      anon_sym_DOT,
    ACTIONS(1026), 4,
      anon_sym_LPAREN,
      aux_sym_privilege_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [10250] = 4,
    ACTIONS(1028), 1,
      anon_sym_LPAREN,
    ACTIONS(1030), 1,
      sym_object_name,
    STATE(879), 1,
      sym_primary_key_definition,
    STATE(880), 2,
      sym_compound_key,
      sym_composite_key,
  [10264] = 1,
    ACTIONS(1032), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10272] = 3,
    ACTIONS(1008), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(533), 1,
      sym_using_timestamp_spec,
    ACTIONS(1034), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10284] = 1,
    ACTIONS(1036), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10292] = 1,
    ACTIONS(1038), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10300] = 5,
    ACTIONS(1016), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1018), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1020), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1022), 1,
      aux_sym_role_with_option_token4,
    STATE(173), 1,
      sym_role_with_option,
  [10316] = 4,
    ACTIONS(971), 1,
      sym__string_literal,
    ACTIONS(977), 1,
      sym_object_name,
    ACTIONS(1040), 1,
      aux_sym_create_index_token3,
    STATE(917), 1,
      sym_index_name,
  [10329] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10342] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10355] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      sym_where_spec,
    STATE(446), 1,
      aux_sym_update_repeat1,
  [10368] = 1,
    ACTIONS(1002), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10375] = 4,
    ACTIONS(1044), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1046), 1,
      sym_object_name,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10388] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      sym_where_spec,
    STATE(447), 1,
      aux_sym_update_repeat1,
  [10401] = 4,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1048), 1,
      anon_sym_DOT,
    ACTIONS(1050), 1,
      aux_sym_update_token2,
    STATE(1150), 1,
      sym_using_ttl_timestamp,
  [10414] = 4,
    ACTIONS(1052), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(660), 1,
      sym_column_definition,
    STATE(791), 1,
      sym_primary_key_element,
  [10427] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_where_spec,
    STATE(479), 1,
      aux_sym_update_repeat1,
  [10440] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1056), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10453] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10466] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1058), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10479] = 4,
    ACTIONS(1060), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1062), 1,
      aux_sym_create_materialized_view_token1,
    STATE(624), 1,
      aux_sym_relation_elements_repeat1,
    STATE(625), 1,
      aux_sym_materialized_view_where_repeat1,
  [10492] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10505] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_where_spec,
    STATE(473), 1,
      aux_sym_update_repeat1,
  [10518] = 4,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_COLON,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    STATE(583), 1,
      aux_sym_assignment_set_repeat1,
  [10531] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1008), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(162), 1,
      sym_where_spec,
    STATE(716), 1,
      sym_using_timestamp_spec,
  [10544] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10557] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_where_spec,
    STATE(469), 1,
      aux_sym_update_repeat1,
  [10570] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1075), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10581] = 1,
    ACTIONS(1077), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10588] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1079), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10601] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1081), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10614] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10627] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1083), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10640] = 3,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1087), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10651] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(485), 1,
      aux_sym_update_repeat1,
  [10664] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10677] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1089), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10690] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1091), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10703] = 3,
    ACTIONS(1095), 1,
      aux_sym_create_materialized_view_token1,
    STATE(661), 1,
      sym_primary_key_column,
    ACTIONS(1093), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10714] = 3,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1097), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10725] = 4,
    ACTIONS(1052), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(660), 1,
      sym_column_definition,
    STATE(854), 1,
      sym_primary_key_element,
  [10738] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10751] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1099), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10764] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1101), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10777] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1103), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10790] = 4,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      aux_sym_function_args_repeat1,
  [10803] = 4,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1109), 1,
      anon_sym_DOT,
    ACTIONS(1111), 1,
      aux_sym_update_token2,
    STATE(1011), 1,
      sym_using_ttl_timestamp,
  [10816] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10829] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_where_spec,
    STATE(463), 1,
      aux_sym_update_repeat1,
  [10842] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1113), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10855] = 2,
    ACTIONS(1115), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10864] = 1,
    ACTIONS(1119), 4,
      anon_sym_LPAREN,
      aux_sym_privilege_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [10871] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1008), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(166), 1,
      sym_where_spec,
    STATE(670), 1,
      sym_using_timestamp_spec,
  [10884] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1121), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10897] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1008), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(153), 1,
      sym_where_spec,
    STATE(746), 1,
      sym_using_timestamp_spec,
  [10910] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1123), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10923] = 4,
    ACTIONS(1046), 1,
      sym_object_name,
    ACTIONS(1125), 1,
      aux_sym_delete_statement_token3,
    STATE(158), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [10936] = 4,
    ACTIONS(1060), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1127), 1,
      aux_sym_create_materialized_view_token1,
    STATE(458), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(587), 1,
      aux_sym_relation_elements_repeat1,
  [10949] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_where_spec,
    STATE(456), 1,
      aux_sym_update_repeat1,
  [10962] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(820), 1,
      sym_return_mode,
  [10972] = 3,
    ACTIONS(1133), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1135), 1,
      sym_object_name,
    STATE(1087), 1,
      sym_materialized_view_name,
  [10982] = 3,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(620), 1,
      sym_typed_name,
  [10992] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(952), 1,
      sym_return_mode,
  [11002] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(840), 1,
      sym_return_mode,
  [11012] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11022] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_create_function_repeat1,
  [11032] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(947), 1,
      sym_return_mode,
  [11042] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_replication_list_repeat1,
  [11052] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(672), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11062] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(454), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11072] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(816), 1,
      sym_return_mode,
  [11082] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_replication_list_repeat1,
  [11092] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [11102] = 2,
    ACTIONS(1163), 1,
      aux_sym_select_element_token1,
    ACTIONS(1161), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11110] = 3,
    ACTIONS(905), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1165), 1,
      sym__string_literal,
    STATE(684), 1,
      sym__decimal_literal,
  [11120] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11130] = 2,
    ACTIONS(1171), 1,
      anon_sym_LBRACK,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11138] = 3,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_init_cond_hash_repeat1,
  [11148] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(486), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11158] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11168] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      aux_sym_create_function_repeat1,
  [11178] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11188] = 3,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      aux_sym_assignment_map_repeat1,
  [11198] = 3,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(633), 1,
      aux_sym_option_hash_repeat1,
  [11208] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_typed_name,
  [11218] = 3,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      aux_sym_from_spec_token1,
    STATE(540), 1,
      aux_sym_delete_column_list_repeat1,
  [11228] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_typed_name,
  [11238] = 3,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    STATE(607), 1,
      aux_sym_assignment_map_repeat1,
  [11248] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      sym_typed_name,
  [11258] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_create_function_repeat1,
  [11268] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_GT,
    STATE(638), 1,
      aux_sym_data_type_definition_repeat1,
  [11278] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_create_function_repeat1,
  [11288] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1017), 1,
      sym_return_mode,
  [11298] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_relation_element_repeat2,
  [11308] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(464), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11318] = 1,
    ACTIONS(1006), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11324] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_relation_element_repeat2,
  [11334] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym_typed_name,
  [11344] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11354] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_typed_name,
  [11364] = 3,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1222), 1,
      sym_object_name,
    STATE(1188), 1,
      sym_table_name,
  [11374] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_from_spec_token1,
    STATE(539), 1,
      aux_sym_select_elements_repeat1,
  [11384] = 3,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1229), 1,
      aux_sym_from_spec_token1,
    STATE(575), 1,
      aux_sym_delete_column_list_repeat1,
  [11394] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      aux_sym_where_spec_token1,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [11404] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1021), 1,
      sym_return_mode,
  [11414] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(847), 1,
      sym_return_mode,
  [11424] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11434] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(509), 1,
      aux_sym_replication_list_repeat1,
  [11444] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      aux_sym_function_args_repeat1,
  [11454] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
    STATE(547), 1,
      aux_sym_option_hash_repeat1,
  [11464] = 3,
    ACTIONS(1245), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1247), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1249), 1,
      aux_sym_update_token1,
  [11474] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_create_function_repeat1,
  [11484] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(893), 1,
      sym_return_mode,
  [11494] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_init_cond_hash_repeat1,
  [11504] = 3,
    ACTIONS(905), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1257), 1,
      sym__string_literal,
    STATE(1125), 1,
      sym__decimal_literal,
  [11514] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_clustering_key_list_repeat1,
  [11524] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(968), 1,
      sym_return_mode,
  [11534] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_create_function_repeat1,
  [11544] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(892), 1,
      sym_return_mode,
  [11554] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_clustering_key_list_repeat1,
  [11564] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_GT,
    STATE(528), 1,
      aux_sym_data_type_definition_repeat1,
  [11574] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_column_definition_list_repeat1,
  [11584] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [11594] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      aux_sym_from_spec_token1,
    STATE(539), 1,
      aux_sym_select_elements_repeat1,
  [11604] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11614] = 3,
    ACTIONS(1004), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(738), 1,
      sym_select_element,
  [11624] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_assignment_set_repeat1,
  [11634] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1035), 1,
      sym_return_mode,
  [11644] = 3,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_column_definition_list_repeat1,
  [11654] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(496), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11664] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      aux_sym_from_spec_token1,
    STATE(561), 1,
      aux_sym_select_elements_repeat1,
  [11674] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(972), 1,
      sym_return_mode,
  [11684] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [11694] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_expression_list_repeat1,
  [11704] = 2,
    ACTIONS(1295), 1,
      anon_sym_DOT,
    ACTIONS(1297), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11712] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_RBRACK,
    STATE(430), 1,
      aux_sym_assignment_set_repeat1,
  [11722] = 3,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      aux_sym_relation_element_repeat1,
  [11732] = 3,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      aux_sym_from_spec_token1,
    STATE(575), 1,
      aux_sym_delete_column_list_repeat1,
  [11742] = 3,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      aux_sym_relation_element_repeat1,
  [11752] = 1,
    ACTIONS(1310), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11758] = 1,
    ACTIONS(1312), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11764] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(896), 1,
      sym_return_mode,
  [11774] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_function_args_repeat1,
  [11784] = 3,
    ACTIONS(1316), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_function_args_repeat1,
  [11794] = 3,
    ACTIONS(1010), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1014), 1,
      aux_sym_insert_values_spec_token1,
    STATE(101), 1,
      sym_insert_values_spec,
  [11804] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_assignment_set_repeat1,
  [11814] = 3,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(559), 1,
      sym_column_definition,
    STATE(992), 1,
      sym_column_definition_list,
  [11824] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(460), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11834] = 2,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11842] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1062), 1,
      aux_sym_create_materialized_view_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
  [11852] = 2,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    ACTIONS(1327), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [11860] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RBRACK,
    STATE(573), 1,
      aux_sym_assignment_set_repeat1,
  [11870] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_init_cond_hash_repeat1,
  [11880] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_expression_list_repeat1,
  [11890] = 3,
    ACTIONS(1338), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1340), 1,
      sym_object_name,
    STATE(1182), 1,
      sym_keyspace_name,
  [11900] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(472), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [11910] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_expression_list_repeat1,
  [11920] = 3,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1344), 1,
      aux_sym_update_token2,
    STATE(862), 1,
      sym_using_ttl_timestamp,
  [11930] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1055), 1,
      sym_return_mode,
  [11940] = 3,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(559), 1,
      sym_column_definition,
    STATE(800), 1,
      sym_column_definition_list,
  [11950] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      aux_sym_create_function_repeat1,
  [11960] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1060), 1,
      sym_return_mode,
  [11970] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1128), 1,
      sym_return_mode,
  [11980] = 3,
    ACTIONS(1010), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1014), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
  [11990] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12000] = 2,
    ACTIONS(1350), 1,
      aux_sym_resource_token1,
    ACTIONS(1352), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12008] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_relation_element_repeat2,
  [12018] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_assignment_set_repeat1,
  [12028] = 3,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_column_definition_list_repeat1,
  [12038] = 3,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RBRACE,
    STATE(607), 1,
      aux_sym_assignment_map_repeat1,
  [12048] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(448), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [12058] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(921), 1,
      sym_return_mode,
  [12068] = 3,
    ACTIONS(1368), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1370), 1,
      sym_object_name,
    STATE(290), 1,
      sym_user_name,
  [12078] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_create_function_repeat1,
  [12088] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_clustering_key_list_repeat1,
  [12098] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_clustering_key_list_repeat1,
  [12108] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(916), 1,
      sym_return_mode,
  [12118] = 3,
    ACTIONS(211), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1378), 1,
      aux_sym_update_token2,
    STATE(951), 1,
      sym_using_ttl_timestamp,
  [12128] = 3,
    ACTIONS(1380), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1382), 1,
      sym_object_name,
    STATE(1154), 1,
      sym_trigger_name,
  [12138] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym_typed_name,
  [12148] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      sym_typed_name,
  [12158] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(782), 1,
      sym_return_mode,
  [12168] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      aux_sym_create_function_repeat1,
  [12178] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [12188] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(993), 1,
      sym_return_mode,
  [12198] = 3,
    ACTIONS(1222), 1,
      sym_object_name,
    ACTIONS(1392), 1,
      aux_sym_truncate_token2,
    STATE(349), 1,
      sym_table_name,
  [12208] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1394), 1,
      aux_sym_create_materialized_view_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
  [12218] = 3,
    ACTIONS(1396), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1399), 1,
      aux_sym_create_materialized_view_token1,
    STATE(625), 1,
      aux_sym_materialized_view_where_repeat1,
  [12228] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(792), 1,
      sym_return_mode,
  [12238] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_create_function_repeat1,
  [12248] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      aux_sym_relation_element_repeat2,
  [12258] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(1093), 1,
      sym_return_mode,
  [12268] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_function_repeat1,
  [12278] = 3,
    ACTIONS(1407), 1,
      sym__string_literal,
    ACTIONS(1409), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1411), 1,
      sym_object_name,
  [12288] = 3,
    ACTIONS(1129), 1,
      aux_sym_create_function_token1,
    ACTIONS(1131), 1,
      aux_sym_return_mode_token1,
    STATE(784), 1,
      sym_return_mode,
  [12298] = 3,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RBRACE,
    STATE(547), 1,
      aux_sym_option_hash_repeat1,
  [12308] = 2,
    ACTIONS(1417), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1415), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12316] = 3,
    ACTIONS(1370), 1,
      sym_object_name,
    ACTIONS(1419), 1,
      aux_sym_delete_statement_token2,
    STATE(711), 1,
      sym_user_name,
  [12326] = 3,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(451), 1,
      sym_assignment_element,
    STATE(1034), 1,
      sym_indexed_column,
  [12336] = 3,
    ACTIONS(1421), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(1170), 1,
      sym_type_name,
  [12346] = 3,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_GT,
    STATE(638), 1,
      aux_sym_data_type_definition_repeat1,
  [12356] = 3,
    ACTIONS(1382), 1,
      sym_object_name,
    ACTIONS(1430), 1,
      aux_sym_delete_statement_token2,
    STATE(1174), 1,
      sym_trigger_name,
  [12366] = 2,
    ACTIONS(1432), 1,
      anon_sym_DOT,
    ACTIONS(1434), 1,
      anon_sym_LPAREN,
  [12373] = 2,
    ACTIONS(1436), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1438), 1,
      sym_object_name,
  [12380] = 2,
    ACTIONS(1440), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1442), 1,
      sym_object_name,
  [12387] = 2,
    ACTIONS(1444), 1,
      sym__string_literal,
    STATE(521), 1,
      sym_option_hash_item,
  [12394] = 2,
    ACTIONS(1446), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1448), 1,
      sym_object_name,
  [12401] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(909), 1,
      sym_column_list,
  [12408] = 1,
    ACTIONS(1428), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12413] = 2,
    ACTIONS(1452), 1,
      sym__string_literal,
    STATE(353), 1,
      sym_trigger_class,
  [12420] = 2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(529), 1,
      sym_typed_name,
  [12427] = 2,
    ACTIONS(1454), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1456), 1,
      sym_object_name,
  [12434] = 2,
    ACTIONS(1458), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1460), 1,
      sym_object_name,
  [12441] = 2,
    ACTIONS(1462), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1464), 1,
      sym_object_name,
  [12448] = 2,
    ACTIONS(1444), 1,
      sym__string_literal,
    STATE(701), 1,
      sym_option_hash_item,
  [12455] = 1,
    ACTIONS(1466), 2,
      sym__string_literal,
      sym__float_literal,
  [12460] = 2,
    ACTIONS(1468), 1,
      aux_sym_where_spec_token1,
    STATE(911), 1,
      sym_materialized_view_where,
  [12467] = 2,
    ACTIONS(1470), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1472), 1,
      sym_object_name,
  [12474] = 2,
    ACTIONS(1474), 1,
      sym__string_literal,
    STATE(545), 1,
      sym_replication_list_item,
  [12481] = 2,
    ACTIONS(1476), 1,
      anon_sym_DOT,
    ACTIONS(1478), 1,
      anon_sym_LPAREN,
  [12488] = 2,
    ACTIONS(1480), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1482), 1,
      sym_object_name,
  [12495] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(809), 1,
      sym_table_name,
  [12502] = 1,
    ACTIONS(1361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12507] = 1,
    ACTIONS(1486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12512] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(385), 1,
      sym_table_name,
  [12519] = 2,
    ACTIONS(1488), 1,
      sym_object_name,
    STATE(1149), 1,
      sym_keyspace_name,
  [12526] = 2,
    ACTIONS(1490), 1,
      sym_object_name,
    STATE(416), 1,
      sym_type_name,
  [12533] = 2,
    ACTIONS(1492), 1,
      sym_object_name,
    STATE(726), 1,
      sym_user_name,
  [12540] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_assignment_tuple,
  [12547] = 2,
    ACTIONS(1494), 1,
      aux_sym_from_spec_token1,
    STATE(64), 1,
      sym_from_spec,
  [12554] = 2,
    ACTIONS(1496), 1,
      sym_object_name,
    STATE(202), 1,
      sym_alter_type_rename_item,
  [12561] = 2,
    ACTIONS(1498), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym_replication_list,
  [12568] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(153), 1,
      sym_where_spec,
  [12575] = 2,
    ACTIONS(1500), 1,
      sym_object_name,
    STATE(747), 1,
      sym_delete_column_item,
  [12582] = 1,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12587] = 1,
    ACTIONS(1115), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12592] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(360), 1,
      sym_table_name,
  [12599] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(436), 1,
      sym_table_name,
  [12606] = 1,
    ACTIONS(1502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12611] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(260), 1,
      sym_table_name,
  [12618] = 2,
    ACTIONS(1504), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1506), 1,
      sym_object_name,
  [12625] = 2,
    ACTIONS(1508), 1,
      sym__string_literal,
    ACTIONS(1510), 1,
      sym_object_name,
  [12632] = 2,
    ACTIONS(1494), 1,
      aux_sym_from_spec_token1,
    STATE(492), 1,
      sym_from_spec,
  [12639] = 2,
    ACTIONS(1512), 1,
      sym_object_name,
    STATE(941), 1,
      sym_partition_key_list,
  [12646] = 2,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
  [12653] = 2,
    ACTIONS(1518), 1,
      aux_sym_create_keyspace_token1,
    STATE(243), 1,
      sym_user_with,
  [12660] = 1,
    ACTIONS(1520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12665] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(835), 1,
      sym_column_list,
  [12672] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(79), 1,
      sym_table_name,
  [12679] = 1,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12684] = 2,
    ACTIONS(1494), 1,
      aux_sym_from_spec_token1,
    STATE(62), 1,
      sym_from_spec,
  [12691] = 2,
    ACTIONS(1522), 1,
      sym_object_name,
    STATE(836), 1,
      sym_materialized_view_name,
  [12698] = 1,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12703] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(1114), 1,
      sym_table_name,
  [12710] = 1,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12715] = 2,
    ACTIONS(1524), 1,
      anon_sym_DOT,
    ACTIONS(1526), 1,
      anon_sym_LPAREN,
  [12722] = 1,
    ACTIONS(1528), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12727] = 2,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_option_hash,
  [12734] = 2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(172), 1,
      sym_typed_name,
  [12741] = 2,
    ACTIONS(1490), 1,
      sym_object_name,
    STATE(884), 1,
      sym_type_name,
  [12748] = 2,
    ACTIONS(1530), 1,
      anon_sym_DOT,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
  [12755] = 2,
    ACTIONS(1498), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_replication_list,
  [12762] = 1,
    ACTIONS(1534), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12767] = 1,
    ACTIONS(1243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12772] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(628), 1,
      sym_assignment_tuple,
  [12779] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_assignment_tuple,
  [12786] = 2,
    ACTIONS(1474), 1,
      sym__string_literal,
    STATE(687), 1,
      sym_replication_list_item,
  [12793] = 2,
    ACTIONS(1536), 1,
      anon_sym_DOT,
    ACTIONS(1538), 1,
      anon_sym_LPAREN,
  [12800] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(495), 1,
      sym_column_not_null,
  [12807] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(853), 1,
      sym_table_name,
  [12814] = 1,
    ACTIONS(1542), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12819] = 1,
    ACTIONS(1544), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [12824] = 2,
    ACTIONS(1546), 1,
      sym_object_name,
    STATE(195), 1,
      sym_if_condition,
  [12831] = 2,
    ACTIONS(1518), 1,
      aux_sym_create_keyspace_token1,
    STATE(238), 1,
      sym_user_with,
  [12838] = 2,
    ACTIONS(1548), 1,
      aux_sym_resource_token5,
    ACTIONS(1550), 1,
      aux_sym_drop_aggregate_token1,
  [12845] = 1,
    ACTIONS(1336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12850] = 1,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12855] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(690), 1,
      sym_init_cond_hash_item,
  [12862] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
  [12869] = 1,
    ACTIONS(1554), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12874] = 2,
    ACTIONS(1556), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1558), 1,
      sym_object_name,
  [12881] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(660), 1,
      sym_column_definition,
  [12888] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(990), 1,
      sym_clustering_key_list,
  [12895] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(326), 1,
      sym_durable_writes,
  [12902] = 2,
    ACTIONS(1564), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1566), 1,
      aux_sym_using_ttl_timestamp_token1,
  [12909] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(352), 1,
      sym_durable_writes,
  [12916] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(1189), 1,
      sym_column_list,
  [12923] = 2,
    ACTIONS(905), 1,
      aux_sym__decimal_literal_token1,
    STATE(870), 1,
      sym__decimal_literal,
  [12930] = 2,
    ACTIONS(1518), 1,
      aux_sym_create_keyspace_token1,
    STATE(282), 1,
      sym_user_with,
  [12937] = 2,
    ACTIONS(1494), 1,
      aux_sym_from_spec_token1,
    STATE(462), 1,
      sym_from_spec,
  [12944] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(433), 1,
      sym_table_name,
  [12951] = 2,
    ACTIONS(1568), 1,
      anon_sym_DOT,
    ACTIONS(1570), 1,
      anon_sym_LPAREN,
  [12958] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(752), 1,
      sym_table_name,
  [12965] = 2,
    ACTIONS(1494), 1,
      aux_sym_from_spec_token1,
    STATE(65), 1,
      sym_from_spec,
  [12972] = 2,
    ACTIONS(1492), 1,
      sym_object_name,
    STATE(683), 1,
      sym_user_name,
  [12979] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(654), 1,
      sym_table_name,
  [12986] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(766), 1,
      sym_column_not_null,
  [12993] = 1,
    ACTIONS(1572), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [12998] = 2,
    ACTIONS(1574), 1,
      anon_sym_DOT,
    ACTIONS(1576), 1,
      anon_sym_LPAREN,
  [13005] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(885), 1,
      sym_trigger_name,
  [13012] = 1,
    ACTIONS(1227), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13017] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13022] = 2,
    ACTIONS(1582), 1,
      anon_sym_DOT,
    ACTIONS(1584), 1,
      anon_sym_LPAREN,
  [13029] = 1,
    ACTIONS(1586), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13034] = 2,
    ACTIONS(905), 1,
      aux_sym__decimal_literal_token1,
    STATE(199), 1,
      sym__decimal_literal,
  [13041] = 1,
    ACTIONS(1588), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13046] = 2,
    ACTIONS(1488), 1,
      sym_object_name,
    STATE(902), 1,
      sym_keyspace_name,
  [13053] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(918), 1,
      sym_table_name,
  [13060] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(162), 1,
      sym_where_spec,
  [13067] = 1,
    ACTIONS(1306), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13072] = 1,
    ACTIONS(1590), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13077] = 1,
    ACTIONS(1592), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13082] = 1,
    ACTIONS(1594), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13087] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(997), 1,
      sym_column_list,
  [13094] = 2,
    ACTIONS(1468), 1,
      aux_sym_where_spec_token1,
    STATE(1048), 1,
      sym_materialized_view_where,
  [13101] = 2,
    ACTIONS(1496), 1,
      sym_object_name,
    STATE(137), 1,
      sym_alter_type_rename_item,
  [13108] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(291), 1,
      sym_durable_writes,
  [13115] = 2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(138), 1,
      sym_typed_name,
  [13122] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(991), 1,
      sym_table_name,
  [13129] = 2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(143), 1,
      sym_typed_name,
  [13136] = 2,
    ACTIONS(1596), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1598), 1,
      sym_object_name,
  [13143] = 1,
    ACTIONS(1600), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13148] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1071), 1,
      sym_clustering_key_list,
  [13155] = 2,
    ACTIONS(1602), 1,
      anon_sym_EQ,
    ACTIONS(1604), 1,
      anon_sym_LBRACK,
  [13162] = 2,
    ACTIONS(1492), 1,
      sym_object_name,
    STATE(317), 1,
      sym_user_name,
  [13169] = 2,
    ACTIONS(1484), 1,
      sym_object_name,
    STATE(321), 1,
      sym_table_name,
  [13176] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_assignment_tuple,
  [13183] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(955), 1,
      sym_trigger_name,
  [13190] = 1,
    ACTIONS(1399), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13195] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(1091), 1,
      sym_column_list,
  [13202] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(531), 1,
      sym_assignment_tuple,
  [13209] = 2,
    ACTIONS(1606), 1,
      sym__string_literal,
    ACTIONS(1608), 1,
      sym_object_name,
  [13216] = 2,
    ACTIONS(1610), 1,
      sym__string_literal,
    ACTIONS(1612), 1,
      sym_object_name,
  [13223] = 2,
    ACTIONS(1614), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1616), 1,
      sym_object_name,
  [13230] = 2,
    ACTIONS(1618), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1620), 1,
      sym_object_name,
  [13237] = 2,
    ACTIONS(1622), 1,
      aux_sym_role_with_option_token1,
    STATE(106), 1,
      sym_user_password,
  [13244] = 2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(527), 1,
      sym_typed_name,
  [13251] = 2,
    ACTIONS(1452), 1,
      sym__string_literal,
    STATE(355), 1,
      sym_trigger_class,
  [13258] = 2,
    ACTIONS(1624), 1,
      anon_sym_DOT,
    ACTIONS(1626), 1,
      aux_sym_select_element_token1,
  [13265] = 1,
    ACTIONS(1628), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13270] = 2,
    ACTIONS(1498), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_replication_list,
  [13277] = 1,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
  [13281] = 1,
    ACTIONS(1632), 1,
      anon_sym_RPAREN,
  [13285] = 1,
    ACTIONS(1634), 1,
      aux_sym_delete_statement_token3,
  [13289] = 1,
    ACTIONS(1636), 1,
      aux_sym_create_function_token1,
  [13293] = 1,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
  [13297] = 1,
    ACTIONS(1640), 1,
      aux_sym_create_function_token1,
  [13301] = 1,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
  [13305] = 1,
    ACTIONS(1644), 1,
      aux_sym_constant_token2,
  [13309] = 1,
    ACTIONS(1646), 1,
      aux_sym_return_mode_token2,
  [13313] = 1,
    ACTIONS(1648), 1,
      aux_sym_create_function_token2,
  [13317] = 1,
    ACTIONS(1650), 1,
      aux_sym_select_statement_token5,
  [13321] = 1,
    ACTIONS(1652), 1,
      aux_sym_create_aggregate_token3,
  [13325] = 1,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [13329] = 1,
    ACTIONS(1656), 1,
      aux_sym_create_function_token1,
  [13333] = 1,
    ACTIONS(1658), 1,
      anon_sym_COLON,
  [13337] = 1,
    ACTIONS(1660), 1,
      anon_sym_EQ,
  [13341] = 1,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [13345] = 1,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
  [13349] = 1,
    ACTIONS(1666), 1,
      aux_sym_create_aggregate_token3,
  [13353] = 1,
    ACTIONS(1668), 1,
      aux_sym_create_aggregate_token4,
  [13357] = 1,
    ACTIONS(1670), 1,
      anon_sym_COLON,
  [13361] = 1,
    ACTIONS(1672), 1,
      anon_sym_RPAREN,
  [13365] = 1,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [13369] = 1,
    ACTIONS(1676), 1,
      aux_sym_select_statement_token1,
  [13373] = 1,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
  [13377] = 1,
    ACTIONS(1680), 1,
      sym_object_name,
  [13381] = 1,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
  [13385] = 1,
    ACTIONS(1684), 1,
      anon_sym_RPAREN,
  [13389] = 1,
    ACTIONS(1686), 1,
      anon_sym_RPAREN,
  [13393] = 1,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [13397] = 1,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
  [13401] = 1,
    ACTIONS(1692), 1,
      sym_object_name,
  [13405] = 1,
    ACTIONS(1694), 1,
      anon_sym_LPAREN,
  [13409] = 1,
    ACTIONS(1696), 1,
      aux_sym_select_statement_token5,
  [13413] = 1,
    ACTIONS(1698), 1,
      anon_sym_EQ,
  [13417] = 1,
    ACTIONS(1700), 1,
      aux_sym_insert_statement_token3,
  [13421] = 1,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
  [13425] = 1,
    ACTIONS(1704), 1,
      aux_sym_create_function_token1,
  [13429] = 1,
    ACTIONS(1706), 1,
      sym_object_name,
  [13433] = 1,
    ACTIONS(1708), 1,
      anon_sym_EQ,
  [13437] = 1,
    ACTIONS(1710), 1,
      sym_object_name,
  [13441] = 1,
    ACTIONS(1712), 1,
      aux_sym_create_function_token1,
  [13445] = 1,
    ACTIONS(1714), 1,
      aux_sym__decimal_literal_token1,
  [13449] = 1,
    ACTIONS(1716), 1,
      aux_sym_return_mode_token2,
  [13453] = 1,
    ACTIONS(1718), 1,
      aux_sym_create_function_token1,
  [13457] = 1,
    ACTIONS(1720), 1,
      sym_object_name,
  [13461] = 1,
    ACTIONS(1722), 1,
      aux_sym_create_function_token2,
  [13465] = 1,
    ACTIONS(1724), 1,
      aux_sym__decimal_literal_token1,
  [13469] = 1,
    ACTIONS(1726), 1,
      sym_object_name,
  [13473] = 1,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
  [13477] = 1,
    ACTIONS(1730), 1,
      anon_sym_LPAREN,
  [13481] = 1,
    ACTIONS(1732), 1,
      sym_object_name,
  [13485] = 1,
    ACTIONS(1734), 1,
      anon_sym_LPAREN,
  [13489] = 1,
    ACTIONS(1736), 1,
      aux_sym_create_aggregate_token3,
  [13493] = 1,
    ACTIONS(1738), 1,
      sym_object_name,
  [13497] = 1,
    ACTIONS(1740), 1,
      sym_object_name,
  [13501] = 1,
    ACTIONS(1742), 1,
      aux_sym_from_spec_token1,
  [13505] = 1,
    ACTIONS(1744), 1,
      aux_sym_select_element_token1,
  [13509] = 1,
    ACTIONS(1746), 1,
      sym_object_name,
  [13513] = 1,
    ACTIONS(1748), 1,
      anon_sym_RPAREN,
  [13517] = 1,
    ACTIONS(1750), 1,
      sym_object_name,
  [13521] = 1,
    ACTIONS(1752), 1,
      aux_sym_create_function_token1,
  [13525] = 1,
    ACTIONS(1754), 1,
      aux_sym_constant_token2,
  [13529] = 1,
    ACTIONS(1756), 1,
      sym_object_name,
  [13533] = 1,
    ACTIONS(1758), 1,
      aux_sym_create_index_token3,
  [13537] = 1,
    ACTIONS(1760), 1,
      sym_object_name,
  [13541] = 1,
    ACTIONS(1762), 1,
      aux_sym_create_keyspace_token2,
  [13545] = 1,
    ACTIONS(1764), 1,
      sym_object_name,
  [13549] = 1,
    ACTIONS(1766), 1,
      aux_sym_create_function_token1,
  [13553] = 1,
    ACTIONS(1768), 1,
      sym_object_name,
  [13557] = 1,
    ACTIONS(1770), 1,
      sym_object_name,
  [13561] = 1,
    ACTIONS(1772), 1,
      sym_object_name,
  [13565] = 1,
    ACTIONS(1774), 1,
      anon_sym_RPAREN,
  [13569] = 1,
    ACTIONS(1776), 1,
      sym_object_name,
  [13573] = 1,
    ACTIONS(1778), 1,
      anon_sym_LPAREN,
  [13577] = 1,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
  [13581] = 1,
    ACTIONS(1782), 1,
      aux_sym_relation_contains_key_token2,
  [13585] = 1,
    ACTIONS(1784), 1,
      aux_sym_relation_contains_key_token2,
  [13589] = 1,
    ACTIONS(1786), 1,
      aux_sym_delete_statement_token3,
  [13593] = 1,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
  [13597] = 1,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
  [13601] = 1,
    ACTIONS(1792), 1,
      anon_sym_LPAREN,
  [13605] = 1,
    ACTIONS(1794), 1,
      aux_sym_select_statement_token5,
  [13609] = 1,
    ACTIONS(1796), 1,
      aux_sym_update_token2,
  [13613] = 1,
    ACTIONS(1798), 1,
      sym_object_name,
  [13617] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [13621] = 1,
    ACTIONS(1802), 1,
      aux_sym_order_spec_token2,
  [13625] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [13629] = 1,
    ACTIONS(1806), 1,
      sym_object_name,
  [13633] = 1,
    ACTIONS(1808), 1,
      aux_sym_resource_token2,
  [13637] = 1,
    ACTIONS(1810), 1,
      sym_object_name,
  [13641] = 1,
    ACTIONS(1812), 1,
      anon_sym_RBRACK,
  [13645] = 1,
    ACTIONS(1814), 1,
      aux_sym_using_timestamp_spec_token2,
  [13649] = 1,
    ACTIONS(1816), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13653] = 1,
    ACTIONS(1818), 1,
      sym_object_name,
  [13657] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [13661] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [13665] = 1,
    ACTIONS(1824), 1,
      sym_object_name,
  [13669] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [13673] = 1,
    ACTIONS(1828), 1,
      aux_sym_delete_statement_token3,
  [13677] = 1,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
  [13681] = 1,
    ACTIONS(1832), 1,
      anon_sym_RPAREN,
  [13685] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [13689] = 1,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
  [13693] = 1,
    ACTIONS(1838), 1,
      aux_sym_delete_statement_token3,
  [13697] = 1,
    ACTIONS(1840), 1,
      anon_sym_LPAREN,
  [13701] = 1,
    ACTIONS(1842), 1,
      aux_sym_using_timestamp_spec_token1,
  [13705] = 1,
    ACTIONS(1844), 1,
      aux_sym_select_element_token1,
  [13709] = 1,
    ACTIONS(1846), 1,
      aux_sym_create_aggregate_token3,
  [13713] = 1,
    ACTIONS(1848), 1,
      sym__boolean_literal,
  [13717] = 1,
    ACTIONS(1850), 1,
      sym__boolean_literal,
  [13721] = 1,
    ACTIONS(1852), 1,
      sym__boolean_literal,
  [13725] = 1,
    ACTIONS(1854), 1,
      sym__string_literal,
  [13729] = 1,
    ACTIONS(1856), 1,
      aux_sym_create_function_token1,
  [13733] = 1,
    ACTIONS(1858), 1,
      aux_sym_create_function_token1,
  [13737] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token2,
  [13741] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_index_token3,
  [13745] = 1,
    ACTIONS(1864), 1,
      aux_sym_create_function_token1,
  [13749] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_function_token1,
  [13753] = 1,
    ACTIONS(1868), 1,
      aux_sym_select_element_token1,
  [13757] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [13761] = 1,
    ACTIONS(1872), 1,
      aux_sym_create_function_token2,
  [13765] = 1,
    ACTIONS(1874), 1,
      aux_sym_constant_token2,
  [13769] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_keyspace_token1,
  [13773] = 1,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
  [13777] = 1,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
  [13781] = 1,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
  [13785] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [13789] = 1,
    ACTIONS(1886), 1,
      aux_sym_create_aggregate_token4,
  [13793] = 1,
    ACTIONS(1888), 1,
      aux_sym_create_aggregate_token5,
  [13797] = 1,
    ACTIONS(1890), 1,
      aux_sym_from_spec_token1,
  [13801] = 1,
    ACTIONS(1892), 1,
      anon_sym_RPAREN,
  [13805] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_materialized_view_token1,
  [13809] = 1,
    ACTIONS(1896), 1,
      anon_sym_LPAREN,
  [13813] = 1,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
  [13817] = 1,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
  [13821] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [13825] = 1,
    ACTIONS(1904), 1,
      aux_sym_create_function_token1,
  [13829] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_index_token3,
  [13833] = 1,
    ACTIONS(1908), 1,
      anon_sym_LPAREN,
  [13837] = 1,
    ACTIONS(1910), 1,
      aux_sym_create_function_token2,
  [13841] = 1,
    ACTIONS(1912), 1,
      aux_sym_delete_statement_token3,
  [13845] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [13849] = 1,
    ACTIONS(1916), 1,
      anon_sym_LPAREN,
  [13853] = 1,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
  [13857] = 1,
    ACTIONS(1920), 1,
      aux_sym_create_aggregate_token3,
  [13861] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_aggregate_token4,
  [13865] = 1,
    ACTIONS(1924), 1,
      aux_sym_insert_statement_token3,
  [13869] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [13873] = 1,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
  [13877] = 1,
    ACTIONS(1928), 1,
      anon_sym_RPAREN,
  [13881] = 1,
    ACTIONS(1930), 1,
      sym_object_name,
  [13885] = 1,
    ACTIONS(1932), 1,
      aux_sym_select_statement_token5,
  [13889] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [13893] = 1,
    ACTIONS(1936), 1,
      aux_sym_grant_token2,
  [13897] = 1,
    ACTIONS(1938), 1,
      aux_sym_drop_type_token1,
  [13901] = 1,
    ACTIONS(1940), 1,
      sym_object_name,
  [13905] = 1,
    ACTIONS(1942), 1,
      anon_sym_EQ,
  [13909] = 1,
    ACTIONS(1944), 1,
      anon_sym_COLON,
  [13913] = 1,
    ACTIONS(1946), 1,
      aux_sym_grant_token2,
  [13917] = 1,
    ACTIONS(1948), 1,
      anon_sym_EQ,
  [13921] = 1,
    ACTIONS(1950), 1,
      anon_sym_EQ,
  [13925] = 1,
    ACTIONS(1952), 1,
      anon_sym_RPAREN,
  [13929] = 1,
    ACTIONS(1954), 1,
      aux_sym_order_spec_token1,
  [13933] = 1,
    ACTIONS(1956), 1,
      anon_sym_RPAREN,
  [13937] = 1,
    ACTIONS(1958), 1,
      aux_sym_compact_storage_token2,
  [13941] = 1,
    ACTIONS(1960), 1,
      aux_sym_compact_storage_token2,
  [13945] = 1,
    ACTIONS(1962), 1,
      sym_object_name,
  [13949] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [13953] = 1,
    ACTIONS(1966), 1,
      sym_object_name,
  [13957] = 1,
    ACTIONS(1968), 1,
      aux_sym_delete_statement_token3,
  [13961] = 1,
    ACTIONS(1970), 1,
      aux_sym_create_function_token2,
  [13965] = 1,
    ACTIONS(1972), 1,
      aux_sym_update_token2,
  [13969] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_function_token1,
  [13973] = 1,
    ACTIONS(1976), 1,
      sym_object_name,
  [13977] = 1,
    ACTIONS(1978), 1,
      aux_sym_create_function_token2,
  [13981] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_index_token3,
  [13985] = 1,
    ACTIONS(1982), 1,
      sym__code_block,
  [13989] = 1,
    ACTIONS(1984), 1,
      aux_sym_select_element_token1,
  [13993] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [13997] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_aggregate_token3,
  [14001] = 1,
    ACTIONS(1990), 1,
      aux_sym_create_aggregate_token4,
  [14005] = 1,
    ACTIONS(1992), 1,
      sym_object_name,
  [14009] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14013] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14017] = 1,
    ACTIONS(889), 1,
      aux_sym_column_not_null_token1,
  [14021] = 1,
    ACTIONS(1998), 1,
      aux_sym_insert_statement_token3,
  [14025] = 1,
    ACTIONS(2000), 1,
      aux_sym_relation_contains_key_token2,
  [14029] = 1,
    ACTIONS(2002), 1,
      aux_sym_insert_statement_token3,
  [14033] = 1,
    ACTIONS(2004), 1,
      aux_sym_create_function_token1,
  [14037] = 1,
    ACTIONS(2006), 1,
      sym__string_literal,
  [14041] = 1,
    ACTIONS(2008), 1,
      aux_sym_select_statement_token1,
  [14045] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [14049] = 1,
    ACTIONS(2012), 1,
      aux_sym_create_function_token1,
  [14053] = 1,
    ACTIONS(2014), 1,
      sym_object_name,
  [14057] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [14061] = 1,
    ACTIONS(2018), 1,
      aux_sym_create_function_token2,
  [14065] = 1,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
  [14069] = 1,
    ACTIONS(2022), 1,
      anon_sym_LPAREN,
  [14073] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_aggregate_token3,
  [14077] = 1,
    ACTIONS(2026), 1,
      sym_object_name,
  [14081] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [14085] = 1,
    ACTIONS(2030), 1,
      anon_sym_EQ,
  [14089] = 1,
    ACTIONS(2032), 1,
      anon_sym_EQ,
  [14093] = 1,
    ACTIONS(2034), 1,
      anon_sym_EQ,
  [14097] = 1,
    ACTIONS(2036), 1,
      anon_sym_EQ,
  [14101] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [14105] = 1,
    ACTIONS(2040), 1,
      anon_sym_LPAREN,
  [14109] = 1,
    ACTIONS(2042), 1,
      sym_object_name,
  [14113] = 1,
    ACTIONS(2044), 1,
      anon_sym_COMMA,
  [14117] = 1,
    ACTIONS(2046), 1,
      anon_sym_EQ,
  [14121] = 1,
    ACTIONS(2048), 1,
      anon_sym_RPAREN,
  [14125] = 1,
    ACTIONS(2050), 1,
      anon_sym_LPAREN,
  [14129] = 1,
    ACTIONS(2052), 1,
      anon_sym_RPAREN,
  [14133] = 1,
    ACTIONS(2054), 1,
      aux_sym_create_function_token1,
  [14137] = 1,
    ACTIONS(2056), 1,
      aux_sym_insert_statement_token3,
  [14141] = 1,
    ACTIONS(2058), 1,
      sym_object_name,
  [14145] = 1,
    ACTIONS(2060), 1,
      aux_sym_create_function_token2,
  [14149] = 1,
    ACTIONS(2062), 1,
      anon_sym_RPAREN,
  [14153] = 1,
    ACTIONS(2064), 1,
      aux_sym_select_element_token1,
  [14157] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [14161] = 1,
    ACTIONS(2068), 1,
      aux_sym_create_function_token2,
  [14165] = 1,
    ACTIONS(2070), 1,
      anon_sym_EQ,
  [14169] = 1,
    ACTIONS(2072), 1,
      sym__code_block,
  [14173] = 1,
    ACTIONS(2074), 1,
      aux_sym_select_element_token1,
  [14177] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [14181] = 1,
    ACTIONS(2078), 1,
      anon_sym_LPAREN,
  [14185] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_aggregate_token5,
  [14189] = 1,
    ACTIONS(2082), 1,
      aux_sym_create_aggregate_token6,
  [14193] = 1,
    ACTIONS(2084), 1,
      sym_object_name,
  [14197] = 1,
    ACTIONS(2086), 1,
      aux_sym_insert_statement_token3,
  [14201] = 1,
    ACTIONS(2088), 1,
      aux_sym_select_statement_token5,
  [14205] = 1,
    ACTIONS(2090), 1,
      aux_sym_update_token2,
  [14209] = 1,
    ACTIONS(2092), 1,
      sym_object_name,
  [14213] = 1,
    ACTIONS(2094), 1,
      anon_sym_LPAREN,
  [14217] = 1,
    ACTIONS(2096), 1,
      sym_object_name,
  [14221] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_keyspace_token2,
  [14225] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [14229] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_function_token1,
  [14233] = 1,
    ACTIONS(2104), 1,
      aux_sym_from_spec_token1,
  [14237] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_function_token2,
  [14241] = 1,
    ACTIONS(2108), 1,
      aux_sym_grant_token2,
  [14245] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_function_token1,
  [14249] = 1,
    ACTIONS(2112), 1,
      aux_sym_select_element_token1,
  [14253] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [14257] = 1,
    ACTIONS(2116), 1,
      aux_sym_create_function_token2,
  [14261] = 1,
    ACTIONS(2118), 1,
      anon_sym_RPAREN,
  [14265] = 1,
    ACTIONS(2120), 1,
      sym_object_name,
  [14269] = 1,
    ACTIONS(2122), 1,
      aux_sym_create_aggregate_token4,
  [14273] = 1,
    ACTIONS(2124), 1,
      aux_sym_create_aggregate_token5,
  [14277] = 1,
    ACTIONS(2126), 1,
      sym_object_name,
  [14281] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [14285] = 1,
    ACTIONS(2130), 1,
      aux_sym_delete_statement_token3,
  [14289] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [14293] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_function_token2,
  [14297] = 1,
    ACTIONS(2136), 1,
      anon_sym_EQ,
  [14301] = 1,
    ACTIONS(2138), 1,
      aux_sym_create_function_token1,
  [14305] = 1,
    ACTIONS(2140), 1,
      aux_sym_select_element_token1,
  [14309] = 1,
    ACTIONS(2142), 1,
      sym_object_name,
  [14313] = 1,
    ACTIONS(2144), 1,
      aux_sym_create_function_token2,
  [14317] = 1,
    ACTIONS(2146), 1,
      sym__code_block,
  [14321] = 1,
    ACTIONS(2148), 1,
      aux_sym_select_element_token1,
  [14325] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [14329] = 1,
    ACTIONS(2152), 1,
      aux_sym__decimal_literal_token1,
  [14333] = 1,
    ACTIONS(2154), 1,
      sym__code_block,
  [14337] = 1,
    ACTIONS(2156), 1,
      aux_sym_create_aggregate_token4,
  [14341] = 1,
    ACTIONS(2158), 1,
      aux_sym_create_aggregate_token5,
  [14345] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [14349] = 1,
    ACTIONS(2162), 1,
      aux_sym__decimal_literal_token1,
  [14353] = 1,
    ACTIONS(2164), 1,
      aux_sym_create_materialized_view_token1,
  [14357] = 1,
    ACTIONS(2166), 1,
      aux_sym_constant_token2,
  [14361] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [14365] = 1,
    ACTIONS(2170), 1,
      sym_object_name,
  [14369] = 1,
    ACTIONS(2172), 1,
      aux_sym_delete_statement_token3,
  [14373] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [14377] = 1,
    ACTIONS(2176), 1,
      sym_object_name,
  [14381] = 1,
    ACTIONS(2178), 1,
      aux_sym_create_function_token1,
  [14385] = 1,
    ACTIONS(2180), 1,
      sym_object_name,
  [14389] = 1,
    ACTIONS(2182), 1,
      sym_object_name,
  [14393] = 1,
    ACTIONS(2184), 1,
      aux_sym_create_function_token2,
  [14397] = 1,
    ACTIONS(2186), 1,
      sym_object_name,
  [14401] = 1,
    ACTIONS(2188), 1,
      aux_sym_create_function_token1,
  [14405] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [14409] = 1,
    ACTIONS(2192), 1,
      aux_sym_create_function_token2,
  [14413] = 1,
    ACTIONS(2194), 1,
      sym_object_name,
  [14417] = 1,
    ACTIONS(2196), 1,
      sym__code_block,
  [14421] = 1,
    ACTIONS(2198), 1,
      aux_sym_select_element_token1,
  [14425] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [14429] = 1,
    ACTIONS(2202), 1,
      aux_sym_create_aggregate_token3,
  [14433] = 1,
    ACTIONS(2204), 1,
      aux_sym_create_aggregate_token4,
  [14437] = 1,
    ACTIONS(2206), 1,
      sym_object_name,
  [14441] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [14445] = 1,
    ACTIONS(2210), 1,
      anon_sym_RPAREN,
  [14449] = 1,
    ACTIONS(2212), 1,
      sym_object_name,
  [14453] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_function_token2,
  [14457] = 1,
    ACTIONS(2216), 1,
      sym_object_name,
  [14461] = 1,
    ACTIONS(2218), 1,
      sym__code_block,
  [14465] = 1,
    ACTIONS(2220), 1,
      aux_sym_select_element_token1,
  [14469] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [14473] = 1,
    ACTIONS(2224), 1,
      aux_sym_delete_statement_token3,
  [14477] = 1,
    ACTIONS(2226), 1,
      sym__code_block,
  [14481] = 1,
    ACTIONS(2228), 1,
      aux_sym_select_element_token1,
  [14485] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [14489] = 1,
    ACTIONS(2232), 1,
      aux_sym_delete_statement_token3,
  [14493] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [14497] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_aggregate_token6,
  [14501] = 1,
    ACTIONS(2238), 1,
      sym_object_name,
  [14505] = 1,
    ACTIONS(2240), 1,
      aux_sym_delete_statement_token3,
  [14509] = 1,
    ACTIONS(2242), 1,
      aux_sym_select_element_token1,
  [14513] = 1,
    ACTIONS(2244), 1,
      aux_sym_relation_contains_key_token2,
  [14517] = 1,
    ACTIONS(2246), 1,
      aux_sym_insert_statement_token3,
  [14521] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [14525] = 1,
    ACTIONS(2250), 1,
      anon_sym_RPAREN,
  [14529] = 1,
    ACTIONS(2252), 1,
      aux_sym_delete_statement_token3,
  [14533] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_function_token1,
  [14537] = 1,
    ACTIONS(2256), 1,
      aux_sym_delete_statement_token3,
  [14541] = 1,
    ACTIONS(2258), 1,
      sym_object_name,
  [14545] = 1,
    ACTIONS(2260), 1,
      aux_sym_create_function_token2,
  [14549] = 1,
    ACTIONS(2262), 1,
      sym_object_name,
  [14553] = 1,
    ACTIONS(2264), 1,
      aux_sym_select_element_token1,
  [14557] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [14561] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_function_token2,
  [14565] = 1,
    ACTIONS(2270), 1,
      aux_sym_delete_statement_token3,
  [14569] = 1,
    ACTIONS(2272), 1,
      sym__code_block,
  [14573] = 1,
    ACTIONS(2274), 1,
      aux_sym_select_element_token1,
  [14577] = 1,
    ACTIONS(2276), 1,
      sym_object_name,
  [14581] = 1,
    ACTIONS(2278), 1,
      aux_sym_create_keyspace_token2,
  [14585] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_aggregate_token5,
  [14589] = 1,
    ACTIONS(2282), 1,
      aux_sym_create_aggregate_token6,
  [14593] = 1,
    ACTIONS(2284), 1,
      aux_sym_select_element_token1,
  [14597] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [14601] = 1,
    ACTIONS(2288), 1,
      aux_sym_create_function_token2,
  [14605] = 1,
    ACTIONS(2290), 1,
      aux_sym_delete_statement_token3,
  [14609] = 1,
    ACTIONS(2292), 1,
      sym__code_block,
  [14613] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_element_token1,
  [14617] = 1,
    ACTIONS(2296), 1,
      anon_sym_LPAREN,
  [14621] = 1,
    ACTIONS(2298), 1,
      sym__code_block,
  [14625] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_aggregate_token5,
  [14629] = 1,
    ACTIONS(2302), 1,
      aux_sym_create_aggregate_token6,
  [14633] = 1,
    ACTIONS(2304), 1,
      aux_sym_delete_statement_token3,
  [14637] = 1,
    ACTIONS(2306), 1,
      aux_sym_delete_statement_token3,
  [14641] = 1,
    ACTIONS(2308), 1,
      anon_sym_COLON,
  [14645] = 1,
    ACTIONS(2310), 1,
      anon_sym_LPAREN,
  [14649] = 1,
    ACTIONS(2312), 1,
      aux_sym__decimal_literal_token1,
  [14653] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [14657] = 1,
    ACTIONS(2316), 1,
      anon_sym_LPAREN,
  [14661] = 1,
    ACTIONS(2318), 1,
      anon_sym_RBRACK,
  [14665] = 1,
    ACTIONS(2320), 1,
      aux_sym_create_function_token2,
  [14669] = 1,
    ACTIONS(2322), 1,
      aux_sym_order_spec_token2,
  [14673] = 1,
    ACTIONS(2324), 1,
      aux_sym_create_function_token1,
  [14677] = 1,
    ACTIONS(2326), 1,
      aux_sym_select_element_token1,
  [14681] = 1,
    ACTIONS(2328), 1,
      sym_object_name,
  [14685] = 1,
    ACTIONS(2330), 1,
      aux_sym_create_function_token2,
  [14689] = 1,
    ACTIONS(2332), 1,
      sym__code_block,
  [14693] = 1,
    ACTIONS(2334), 1,
      aux_sym_select_element_token1,
  [14697] = 1,
    ACTIONS(2336), 1,
      sym_object_name,
  [14701] = 1,
    ACTIONS(2338), 1,
      aux_sym_select_statement_token5,
  [14705] = 1,
    ACTIONS(2340), 1,
      sym__code_block,
  [14709] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_aggregate_token4,
  [14713] = 1,
    ACTIONS(2344), 1,
      aux_sym_create_aggregate_token5,
  [14717] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [14721] = 1,
    ACTIONS(2348), 1,
      anon_sym_RPAREN,
  [14725] = 1,
    ACTIONS(2350), 1,
      sym__code_block,
  [14729] = 1,
    ACTIONS(2352), 1,
      aux_sym_select_element_token1,
  [14733] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [14737] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [14741] = 1,
    ACTIONS(2358), 1,
      sym__code_block,
  [14745] = 1,
    ACTIONS(2360), 1,
      sym_object_name,
  [14749] = 1,
    ACTIONS(2362), 1,
      sym_object_name,
  [14753] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [14757] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_keyspace_token1,
  [14761] = 1,
    ACTIONS(2368), 1,
      aux_sym_update_token2,
  [14765] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [14769] = 1,
    ACTIONS(2372), 1,
      aux_sym_delete_statement_token3,
  [14773] = 1,
    ACTIONS(2374), 1,
      aux_sym_delete_statement_token3,
  [14777] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_index_token3,
  [14781] = 1,
    ACTIONS(2378), 1,
      aux_sym_delete_statement_token3,
  [14785] = 1,
    ACTIONS(2380), 1,
      aux_sym_delete_statement_token3,
  [14789] = 1,
    ACTIONS(2382), 1,
      aux_sym_delete_statement_token3,
  [14793] = 1,
    ACTIONS(2384), 1,
      aux_sym_insert_statement_token2,
  [14797] = 1,
    ACTIONS(2386), 1,
      aux_sym_delete_statement_token3,
  [14801] = 1,
    ACTIONS(2388), 1,
      aux_sym_delete_statement_token3,
  [14805] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [14809] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_function_token2,
  [14813] = 1,
    ACTIONS(2394), 1,
      aux_sym_delete_statement_token3,
  [14817] = 1,
    ACTIONS(2396), 1,
      sym__code_block,
  [14821] = 1,
    ACTIONS(2398), 1,
      aux_sym_select_element_token1,
  [14825] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [14829] = 1,
    ACTIONS(2402), 1,
      aux_sym_insert_statement_token3,
  [14833] = 1,
    ACTIONS(2404), 1,
      sym__code_block,
  [14837] = 1,
    ACTIONS(2406), 1,
      aux_sym_select_element_token1,
  [14841] = 1,
    ACTIONS(2408), 1,
      anon_sym_LPAREN,
  [14845] = 1,
    ACTIONS(2410), 1,
      aux_sym_insert_statement_token3,
  [14849] = 1,
    ACTIONS(2412), 1,
      sym_object_name,
  [14853] = 1,
    ACTIONS(2414), 1,
      aux_sym_create_aggregate_token6,
  [14857] = 1,
    ACTIONS(2416), 1,
      aux_sym_using_timestamp_spec_token1,
  [14861] = 1,
    ACTIONS(2418), 1,
      aux_sym_insert_statement_token3,
  [14865] = 1,
    ACTIONS(2420), 1,
      sym__code_block,
  [14869] = 1,
    ACTIONS(2422), 1,
      aux_sym_select_element_token1,
  [14873] = 1,
    ACTIONS(2424), 1,
      aux_sym_insert_statement_token3,
  [14877] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_aggregate_token6,
  [14881] = 1,
    ACTIONS(2428), 1,
      aux_sym_insert_statement_token3,
  [14885] = 1,
    ACTIONS(2430), 1,
      aux_sym_insert_statement_token3,
  [14889] = 1,
    ACTIONS(2432), 1,
      aux_sym_create_keyspace_token1,
  [14893] = 1,
    ACTIONS(2434), 1,
      aux_sym_create_keyspace_token1,
  [14897] = 1,
    ACTIONS(2436), 1,
      aux_sym_insert_statement_token3,
  [14901] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_index_token3,
  [14905] = 1,
    ACTIONS(2440), 1,
      aux_sym_insert_statement_token3,
  [14909] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_index_token3,
  [14913] = 1,
    ACTIONS(2444), 1,
      anon_sym_LPAREN,
  [14917] = 1,
    ACTIONS(2446), 1,
      anon_sym_RPAREN,
  [14921] = 1,
    ACTIONS(2448), 1,
      aux_sym_select_element_token1,
  [14925] = 1,
    ACTIONS(2450), 1,
      sym_object_name,
  [14929] = 1,
    ACTIONS(2452), 1,
      aux_sym_create_function_token2,
  [14933] = 1,
    ACTIONS(2454), 1,
      aux_sym_insert_statement_token3,
  [14937] = 1,
    ACTIONS(2456), 1,
      sym__code_block,
  [14941] = 1,
    ACTIONS(2458), 1,
      aux_sym_select_element_token1,
  [14945] = 1,
    ACTIONS(2460), 1,
      sym_object_name,
  [14949] = 1,
    ACTIONS(2462), 1,
      sym__code_block,
  [14953] = 1,
    ACTIONS(2464), 1,
      aux_sym_create_aggregate_token5,
  [14957] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_aggregate_token6,
  [14961] = 1,
    ACTIONS(2468), 1,
      aux_sym_using_timestamp_spec_token2,
  [14965] = 1,
    ACTIONS(2470), 1,
      sym_object_name,
  [14969] = 1,
    ACTIONS(2472), 1,
      sym__code_block,
  [14973] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [14977] = 1,
    ACTIONS(2476), 1,
      anon_sym_STAR,
  [14981] = 1,
    ACTIONS(2478), 1,
      sym__code_block,
  [14985] = 1,
    ACTIONS(2480), 1,
      aux_sym_select_element_token1,
  [14989] = 1,
    ACTIONS(2482), 1,
      sym_object_name,
  [14993] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [14997] = 1,
    ACTIONS(2486), 1,
      sym__code_block,
  [15001] = 1,
    ACTIONS(2488), 1,
      aux_sym_insert_statement_token2,
  [15005] = 1,
    ACTIONS(2490), 1,
      sym_object_name,
  [15009] = 1,
    ACTIONS(2492), 1,
      aux_sym_drop_materialized_view_token2,
  [15013] = 1,
    ACTIONS(2494), 1,
      sym_object_name,
  [15017] = 1,
    ACTIONS(2496), 1,
      aux_sym_create_index_token3,
  [15021] = 1,
    ACTIONS(2498), 1,
      aux_sym_create_index_token3,
  [15025] = 1,
    ACTIONS(2500), 1,
      aux_sym_drop_materialized_view_token2,
  [15029] = 1,
    ACTIONS(2502), 1,
      aux_sym_create_aggregate_token2,
  [15033] = 1,
    ACTIONS(2504), 1,
      sym__code_block,
  [15037] = 1,
    ACTIONS(2506), 1,
      aux_sym_select_element_token1,
  [15041] = 1,
    ACTIONS(2508), 1,
      aux_sym_drop_materialized_view_token2,
  [15045] = 1,
    ACTIONS(2510), 1,
      aux_sym_create_aggregate_token6,
  [15049] = 1,
    ACTIONS(2512), 1,
      aux_sym_begin_batch_token4,
  [15053] = 1,
    ACTIONS(2514), 1,
      ts_builtin_sym_end,
  [15057] = 1,
    ACTIONS(2516), 1,
      sym__code_block,
  [15061] = 1,
    ACTIONS(2518), 1,
      aux_sym_begin_batch_token4,
  [15065] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [15069] = 1,
    ACTIONS(2522), 1,
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
  [SMALL_STATE(52)] = 1853,
  [SMALL_STATE(53)] = 1885,
  [SMALL_STATE(54)] = 1917,
  [SMALL_STATE(55)] = 1949,
  [SMALL_STATE(56)] = 1976,
  [SMALL_STATE(57)] = 2003,
  [SMALL_STATE(58)] = 2034,
  [SMALL_STATE(59)] = 2065,
  [SMALL_STATE(60)] = 2096,
  [SMALL_STATE(61)] = 2127,
  [SMALL_STATE(62)] = 2153,
  [SMALL_STATE(63)] = 2193,
  [SMALL_STATE(64)] = 2223,
  [SMALL_STATE(65)] = 2263,
  [SMALL_STATE(66)] = 2303,
  [SMALL_STATE(67)] = 2333,
  [SMALL_STATE(68)] = 2362,
  [SMALL_STATE(69)] = 2387,
  [SMALL_STATE(70)] = 2412,
  [SMALL_STATE(71)] = 2437,
  [SMALL_STATE(72)] = 2462,
  [SMALL_STATE(73)] = 2487,
  [SMALL_STATE(74)] = 2512,
  [SMALL_STATE(75)] = 2537,
  [SMALL_STATE(76)] = 2562,
  [SMALL_STATE(77)] = 2587,
  [SMALL_STATE(78)] = 2612,
  [SMALL_STATE(79)] = 2641,
  [SMALL_STATE(80)] = 2665,
  [SMALL_STATE(81)] = 2699,
  [SMALL_STATE(82)] = 2723,
  [SMALL_STATE(83)] = 2757,
  [SMALL_STATE(84)] = 2781,
  [SMALL_STATE(85)] = 2815,
  [SMALL_STATE(86)] = 2839,
  [SMALL_STATE(87)] = 2864,
  [SMALL_STATE(88)] = 2887,
  [SMALL_STATE(89)] = 2912,
  [SMALL_STATE(90)] = 2937,
  [SMALL_STATE(91)] = 2962,
  [SMALL_STATE(92)] = 2987,
  [SMALL_STATE(93)] = 3025,
  [SMALL_STATE(94)] = 3047,
  [SMALL_STATE(95)] = 3075,
  [SMALL_STATE(96)] = 3103,
  [SMALL_STATE(97)] = 3129,
  [SMALL_STATE(98)] = 3151,
  [SMALL_STATE(99)] = 3173,
  [SMALL_STATE(100)] = 3211,
  [SMALL_STATE(101)] = 3233,
  [SMALL_STATE(102)] = 3261,
  [SMALL_STATE(103)] = 3289,
  [SMALL_STATE(104)] = 3315,
  [SMALL_STATE(105)] = 3337,
  [SMALL_STATE(106)] = 3361,
  [SMALL_STATE(107)] = 3387,
  [SMALL_STATE(108)] = 3409,
  [SMALL_STATE(109)] = 3431,
  [SMALL_STATE(110)] = 3459,
  [SMALL_STATE(111)] = 3487,
  [SMALL_STATE(112)] = 3515,
  [SMALL_STATE(113)] = 3540,
  [SMALL_STATE(114)] = 3561,
  [SMALL_STATE(115)] = 3582,
  [SMALL_STATE(116)] = 3607,
  [SMALL_STATE(117)] = 3628,
  [SMALL_STATE(118)] = 3653,
  [SMALL_STATE(119)] = 3678,
  [SMALL_STATE(120)] = 3699,
  [SMALL_STATE(121)] = 3724,
  [SMALL_STATE(122)] = 3749,
  [SMALL_STATE(123)] = 3774,
  [SMALL_STATE(124)] = 3799,
  [SMALL_STATE(125)] = 3824,
  [SMALL_STATE(126)] = 3849,
  [SMALL_STATE(127)] = 3874,
  [SMALL_STATE(128)] = 3899,
  [SMALL_STATE(129)] = 3924,
  [SMALL_STATE(130)] = 3949,
  [SMALL_STATE(131)] = 3974,
  [SMALL_STATE(132)] = 3999,
  [SMALL_STATE(133)] = 4024,
  [SMALL_STATE(134)] = 4049,
  [SMALL_STATE(135)] = 4074,
  [SMALL_STATE(136)] = 4095,
  [SMALL_STATE(137)] = 4120,
  [SMALL_STATE(138)] = 4145,
  [SMALL_STATE(139)] = 4170,
  [SMALL_STATE(140)] = 4195,
  [SMALL_STATE(141)] = 4220,
  [SMALL_STATE(142)] = 4241,
  [SMALL_STATE(143)] = 4262,
  [SMALL_STATE(144)] = 4287,
  [SMALL_STATE(145)] = 4312,
  [SMALL_STATE(146)] = 4333,
  [SMALL_STATE(147)] = 4354,
  [SMALL_STATE(148)] = 4379,
  [SMALL_STATE(149)] = 4404,
  [SMALL_STATE(150)] = 4429,
  [SMALL_STATE(151)] = 4450,
  [SMALL_STATE(152)] = 4475,
  [SMALL_STATE(153)] = 4500,
  [SMALL_STATE(154)] = 4525,
  [SMALL_STATE(155)] = 4550,
  [SMALL_STATE(156)] = 4573,
  [SMALL_STATE(157)] = 4598,
  [SMALL_STATE(158)] = 4621,
  [SMALL_STATE(159)] = 4646,
  [SMALL_STATE(160)] = 4671,
  [SMALL_STATE(161)] = 4692,
  [SMALL_STATE(162)] = 4727,
  [SMALL_STATE(163)] = 4752,
  [SMALL_STATE(164)] = 4773,
  [SMALL_STATE(165)] = 4798,
  [SMALL_STATE(166)] = 4823,
  [SMALL_STATE(167)] = 4848,
  [SMALL_STATE(168)] = 4869,
  [SMALL_STATE(169)] = 4894,
  [SMALL_STATE(170)] = 4919,
  [SMALL_STATE(171)] = 4944,
  [SMALL_STATE(172)] = 4969,
  [SMALL_STATE(173)] = 4990,
  [SMALL_STATE(174)] = 5015,
  [SMALL_STATE(175)] = 5036,
  [SMALL_STATE(176)] = 5061,
  [SMALL_STATE(177)] = 5082,
  [SMALL_STATE(178)] = 5107,
  [SMALL_STATE(179)] = 5129,
  [SMALL_STATE(180)] = 5149,
  [SMALL_STATE(181)] = 5169,
  [SMALL_STATE(182)] = 5191,
  [SMALL_STATE(183)] = 5211,
  [SMALL_STATE(184)] = 5233,
  [SMALL_STATE(185)] = 5255,
  [SMALL_STATE(186)] = 5275,
  [SMALL_STATE(187)] = 5297,
  [SMALL_STATE(188)] = 5319,
  [SMALL_STATE(189)] = 5339,
  [SMALL_STATE(190)] = 5359,
  [SMALL_STATE(191)] = 5381,
  [SMALL_STATE(192)] = 5403,
  [SMALL_STATE(193)] = 5425,
  [SMALL_STATE(194)] = 5447,
  [SMALL_STATE(195)] = 5469,
  [SMALL_STATE(196)] = 5489,
  [SMALL_STATE(197)] = 5509,
  [SMALL_STATE(198)] = 5529,
  [SMALL_STATE(199)] = 5551,
  [SMALL_STATE(200)] = 5571,
  [SMALL_STATE(201)] = 5591,
  [SMALL_STATE(202)] = 5611,
  [SMALL_STATE(203)] = 5631,
  [SMALL_STATE(204)] = 5653,
  [SMALL_STATE(205)] = 5675,
  [SMALL_STATE(206)] = 5697,
  [SMALL_STATE(207)] = 5717,
  [SMALL_STATE(208)] = 5739,
  [SMALL_STATE(209)] = 5761,
  [SMALL_STATE(210)] = 5783,
  [SMALL_STATE(211)] = 5803,
  [SMALL_STATE(212)] = 5825,
  [SMALL_STATE(213)] = 5845,
  [SMALL_STATE(214)] = 5865,
  [SMALL_STATE(215)] = 5887,
  [SMALL_STATE(216)] = 5907,
  [SMALL_STATE(217)] = 5927,
  [SMALL_STATE(218)] = 5949,
  [SMALL_STATE(219)] = 5971,
  [SMALL_STATE(220)] = 5991,
  [SMALL_STATE(221)] = 6013,
  [SMALL_STATE(222)] = 6033,
  [SMALL_STATE(223)] = 6053,
  [SMALL_STATE(224)] = 6073,
  [SMALL_STATE(225)] = 6108,
  [SMALL_STATE(226)] = 6127,
  [SMALL_STATE(227)] = 6146,
  [SMALL_STATE(228)] = 6165,
  [SMALL_STATE(229)] = 6184,
  [SMALL_STATE(230)] = 6203,
  [SMALL_STATE(231)] = 6222,
  [SMALL_STATE(232)] = 6241,
  [SMALL_STATE(233)] = 6260,
  [SMALL_STATE(234)] = 6279,
  [SMALL_STATE(235)] = 6298,
  [SMALL_STATE(236)] = 6317,
  [SMALL_STATE(237)] = 6336,
  [SMALL_STATE(238)] = 6355,
  [SMALL_STATE(239)] = 6374,
  [SMALL_STATE(240)] = 6393,
  [SMALL_STATE(241)] = 6412,
  [SMALL_STATE(242)] = 6431,
  [SMALL_STATE(243)] = 6450,
  [SMALL_STATE(244)] = 6469,
  [SMALL_STATE(245)] = 6488,
  [SMALL_STATE(246)] = 6507,
  [SMALL_STATE(247)] = 6526,
  [SMALL_STATE(248)] = 6545,
  [SMALL_STATE(249)] = 6564,
  [SMALL_STATE(250)] = 6583,
  [SMALL_STATE(251)] = 6602,
  [SMALL_STATE(252)] = 6621,
  [SMALL_STATE(253)] = 6640,
  [SMALL_STATE(254)] = 6659,
  [SMALL_STATE(255)] = 6678,
  [SMALL_STATE(256)] = 6697,
  [SMALL_STATE(257)] = 6716,
  [SMALL_STATE(258)] = 6735,
  [SMALL_STATE(259)] = 6754,
  [SMALL_STATE(260)] = 6773,
  [SMALL_STATE(261)] = 6792,
  [SMALL_STATE(262)] = 6811,
  [SMALL_STATE(263)] = 6830,
  [SMALL_STATE(264)] = 6849,
  [SMALL_STATE(265)] = 6868,
  [SMALL_STATE(266)] = 6887,
  [SMALL_STATE(267)] = 6906,
  [SMALL_STATE(268)] = 6925,
  [SMALL_STATE(269)] = 6944,
  [SMALL_STATE(270)] = 6963,
  [SMALL_STATE(271)] = 6982,
  [SMALL_STATE(272)] = 7001,
  [SMALL_STATE(273)] = 7020,
  [SMALL_STATE(274)] = 7039,
  [SMALL_STATE(275)] = 7058,
  [SMALL_STATE(276)] = 7077,
  [SMALL_STATE(277)] = 7096,
  [SMALL_STATE(278)] = 7115,
  [SMALL_STATE(279)] = 7134,
  [SMALL_STATE(280)] = 7153,
  [SMALL_STATE(281)] = 7172,
  [SMALL_STATE(282)] = 7191,
  [SMALL_STATE(283)] = 7210,
  [SMALL_STATE(284)] = 7229,
  [SMALL_STATE(285)] = 7248,
  [SMALL_STATE(286)] = 7267,
  [SMALL_STATE(287)] = 7286,
  [SMALL_STATE(288)] = 7305,
  [SMALL_STATE(289)] = 7324,
  [SMALL_STATE(290)] = 7343,
  [SMALL_STATE(291)] = 7362,
  [SMALL_STATE(292)] = 7381,
  [SMALL_STATE(293)] = 7400,
  [SMALL_STATE(294)] = 7419,
  [SMALL_STATE(295)] = 7438,
  [SMALL_STATE(296)] = 7457,
  [SMALL_STATE(297)] = 7476,
  [SMALL_STATE(298)] = 7495,
  [SMALL_STATE(299)] = 7514,
  [SMALL_STATE(300)] = 7533,
  [SMALL_STATE(301)] = 7552,
  [SMALL_STATE(302)] = 7571,
  [SMALL_STATE(303)] = 7590,
  [SMALL_STATE(304)] = 7609,
  [SMALL_STATE(305)] = 7628,
  [SMALL_STATE(306)] = 7647,
  [SMALL_STATE(307)] = 7668,
  [SMALL_STATE(308)] = 7687,
  [SMALL_STATE(309)] = 7706,
  [SMALL_STATE(310)] = 7725,
  [SMALL_STATE(311)] = 7744,
  [SMALL_STATE(312)] = 7763,
  [SMALL_STATE(313)] = 7782,
  [SMALL_STATE(314)] = 7801,
  [SMALL_STATE(315)] = 7820,
  [SMALL_STATE(316)] = 7839,
  [SMALL_STATE(317)] = 7858,
  [SMALL_STATE(318)] = 7877,
  [SMALL_STATE(319)] = 7896,
  [SMALL_STATE(320)] = 7915,
  [SMALL_STATE(321)] = 7934,
  [SMALL_STATE(322)] = 7953,
  [SMALL_STATE(323)] = 7972,
  [SMALL_STATE(324)] = 7991,
  [SMALL_STATE(325)] = 8010,
  [SMALL_STATE(326)] = 8029,
  [SMALL_STATE(327)] = 8048,
  [SMALL_STATE(328)] = 8067,
  [SMALL_STATE(329)] = 8086,
  [SMALL_STATE(330)] = 8105,
  [SMALL_STATE(331)] = 8124,
  [SMALL_STATE(332)] = 8143,
  [SMALL_STATE(333)] = 8162,
  [SMALL_STATE(334)] = 8181,
  [SMALL_STATE(335)] = 8200,
  [SMALL_STATE(336)] = 8219,
  [SMALL_STATE(337)] = 8238,
  [SMALL_STATE(338)] = 8257,
  [SMALL_STATE(339)] = 8276,
  [SMALL_STATE(340)] = 8295,
  [SMALL_STATE(341)] = 8314,
  [SMALL_STATE(342)] = 8333,
  [SMALL_STATE(343)] = 8352,
  [SMALL_STATE(344)] = 8371,
  [SMALL_STATE(345)] = 8390,
  [SMALL_STATE(346)] = 8409,
  [SMALL_STATE(347)] = 8428,
  [SMALL_STATE(348)] = 8447,
  [SMALL_STATE(349)] = 8466,
  [SMALL_STATE(350)] = 8485,
  [SMALL_STATE(351)] = 8504,
  [SMALL_STATE(352)] = 8523,
  [SMALL_STATE(353)] = 8542,
  [SMALL_STATE(354)] = 8561,
  [SMALL_STATE(355)] = 8580,
  [SMALL_STATE(356)] = 8599,
  [SMALL_STATE(357)] = 8618,
  [SMALL_STATE(358)] = 8637,
  [SMALL_STATE(359)] = 8656,
  [SMALL_STATE(360)] = 8675,
  [SMALL_STATE(361)] = 8694,
  [SMALL_STATE(362)] = 8713,
  [SMALL_STATE(363)] = 8741,
  [SMALL_STATE(364)] = 8769,
  [SMALL_STATE(365)] = 8797,
  [SMALL_STATE(366)] = 8825,
  [SMALL_STATE(367)] = 8853,
  [SMALL_STATE(368)] = 8881,
  [SMALL_STATE(369)] = 8909,
  [SMALL_STATE(370)] = 8937,
  [SMALL_STATE(371)] = 8965,
  [SMALL_STATE(372)] = 8983,
  [SMALL_STATE(373)] = 9014,
  [SMALL_STATE(374)] = 9047,
  [SMALL_STATE(375)] = 9075,
  [SMALL_STATE(376)] = 9100,
  [SMALL_STATE(377)] = 9125,
  [SMALL_STATE(378)] = 9148,
  [SMALL_STATE(379)] = 9170,
  [SMALL_STATE(380)] = 9204,
  [SMALL_STATE(381)] = 9224,
  [SMALL_STATE(382)] = 9246,
  [SMALL_STATE(383)] = 9265,
  [SMALL_STATE(384)] = 9296,
  [SMALL_STATE(385)] = 9315,
  [SMALL_STATE(386)] = 9338,
  [SMALL_STATE(387)] = 9355,
  [SMALL_STATE(388)] = 9374,
  [SMALL_STATE(389)] = 9393,
  [SMALL_STATE(390)] = 9412,
  [SMALL_STATE(391)] = 9431,
  [SMALL_STATE(392)] = 9448,
  [SMALL_STATE(393)] = 9471,
  [SMALL_STATE(394)] = 9490,
  [SMALL_STATE(395)] = 9509,
  [SMALL_STATE(396)] = 9528,
  [SMALL_STATE(397)] = 9547,
  [SMALL_STATE(398)] = 9566,
  [SMALL_STATE(399)] = 9586,
  [SMALL_STATE(400)] = 9607,
  [SMALL_STATE(401)] = 9628,
  [SMALL_STATE(402)] = 9649,
  [SMALL_STATE(403)] = 9670,
  [SMALL_STATE(404)] = 9691,
  [SMALL_STATE(405)] = 9712,
  [SMALL_STATE(406)] = 9733,
  [SMALL_STATE(407)] = 9754,
  [SMALL_STATE(408)] = 9772,
  [SMALL_STATE(409)] = 9794,
  [SMALL_STATE(410)] = 9808,
  [SMALL_STATE(411)] = 9830,
  [SMALL_STATE(412)] = 9852,
  [SMALL_STATE(413)] = 9872,
  [SMALL_STATE(414)] = 9886,
  [SMALL_STATE(415)] = 9904,
  [SMALL_STATE(416)] = 9924,
  [SMALL_STATE(417)] = 9942,
  [SMALL_STATE(418)] = 9964,
  [SMALL_STATE(419)] = 9983,
  [SMALL_STATE(420)] = 10000,
  [SMALL_STATE(421)] = 10011,
  [SMALL_STATE(422)] = 10030,
  [SMALL_STATE(423)] = 10038,
  [SMALL_STATE(424)] = 10054,
  [SMALL_STATE(425)] = 10066,
  [SMALL_STATE(426)] = 10074,
  [SMALL_STATE(427)] = 10082,
  [SMALL_STATE(428)] = 10098,
  [SMALL_STATE(429)] = 10112,
  [SMALL_STATE(430)] = 10120,
  [SMALL_STATE(431)] = 10132,
  [SMALL_STATE(432)] = 10148,
  [SMALL_STATE(433)] = 10160,
  [SMALL_STATE(434)] = 10176,
  [SMALL_STATE(435)] = 10192,
  [SMALL_STATE(436)] = 10208,
  [SMALL_STATE(437)] = 10224,
  [SMALL_STATE(438)] = 10240,
  [SMALL_STATE(439)] = 10250,
  [SMALL_STATE(440)] = 10264,
  [SMALL_STATE(441)] = 10272,
  [SMALL_STATE(442)] = 10284,
  [SMALL_STATE(443)] = 10292,
  [SMALL_STATE(444)] = 10300,
  [SMALL_STATE(445)] = 10316,
  [SMALL_STATE(446)] = 10329,
  [SMALL_STATE(447)] = 10342,
  [SMALL_STATE(448)] = 10355,
  [SMALL_STATE(449)] = 10368,
  [SMALL_STATE(450)] = 10375,
  [SMALL_STATE(451)] = 10388,
  [SMALL_STATE(452)] = 10401,
  [SMALL_STATE(453)] = 10414,
  [SMALL_STATE(454)] = 10427,
  [SMALL_STATE(455)] = 10440,
  [SMALL_STATE(456)] = 10453,
  [SMALL_STATE(457)] = 10466,
  [SMALL_STATE(458)] = 10479,
  [SMALL_STATE(459)] = 10492,
  [SMALL_STATE(460)] = 10505,
  [SMALL_STATE(461)] = 10518,
  [SMALL_STATE(462)] = 10531,
  [SMALL_STATE(463)] = 10544,
  [SMALL_STATE(464)] = 10557,
  [SMALL_STATE(465)] = 10570,
  [SMALL_STATE(466)] = 10581,
  [SMALL_STATE(467)] = 10588,
  [SMALL_STATE(468)] = 10601,
  [SMALL_STATE(469)] = 10614,
  [SMALL_STATE(470)] = 10627,
  [SMALL_STATE(471)] = 10640,
  [SMALL_STATE(472)] = 10651,
  [SMALL_STATE(473)] = 10664,
  [SMALL_STATE(474)] = 10677,
  [SMALL_STATE(475)] = 10690,
  [SMALL_STATE(476)] = 10703,
  [SMALL_STATE(477)] = 10714,
  [SMALL_STATE(478)] = 10725,
  [SMALL_STATE(479)] = 10738,
  [SMALL_STATE(480)] = 10751,
  [SMALL_STATE(481)] = 10764,
  [SMALL_STATE(482)] = 10777,
  [SMALL_STATE(483)] = 10790,
  [SMALL_STATE(484)] = 10803,
  [SMALL_STATE(485)] = 10816,
  [SMALL_STATE(486)] = 10829,
  [SMALL_STATE(487)] = 10842,
  [SMALL_STATE(488)] = 10855,
  [SMALL_STATE(489)] = 10864,
  [SMALL_STATE(490)] = 10871,
  [SMALL_STATE(491)] = 10884,
  [SMALL_STATE(492)] = 10897,
  [SMALL_STATE(493)] = 10910,
  [SMALL_STATE(494)] = 10923,
  [SMALL_STATE(495)] = 10936,
  [SMALL_STATE(496)] = 10949,
  [SMALL_STATE(497)] = 10962,
  [SMALL_STATE(498)] = 10972,
  [SMALL_STATE(499)] = 10982,
  [SMALL_STATE(500)] = 10992,
  [SMALL_STATE(501)] = 11002,
  [SMALL_STATE(502)] = 11012,
  [SMALL_STATE(503)] = 11022,
  [SMALL_STATE(504)] = 11032,
  [SMALL_STATE(505)] = 11042,
  [SMALL_STATE(506)] = 11052,
  [SMALL_STATE(507)] = 11062,
  [SMALL_STATE(508)] = 11072,
  [SMALL_STATE(509)] = 11082,
  [SMALL_STATE(510)] = 11092,
  [SMALL_STATE(511)] = 11102,
  [SMALL_STATE(512)] = 11110,
  [SMALL_STATE(513)] = 11120,
  [SMALL_STATE(514)] = 11130,
  [SMALL_STATE(515)] = 11138,
  [SMALL_STATE(516)] = 11148,
  [SMALL_STATE(517)] = 11158,
  [SMALL_STATE(518)] = 11168,
  [SMALL_STATE(519)] = 11178,
  [SMALL_STATE(520)] = 11188,
  [SMALL_STATE(521)] = 11198,
  [SMALL_STATE(522)] = 11208,
  [SMALL_STATE(523)] = 11218,
  [SMALL_STATE(524)] = 11228,
  [SMALL_STATE(525)] = 11238,
  [SMALL_STATE(526)] = 11248,
  [SMALL_STATE(527)] = 11258,
  [SMALL_STATE(528)] = 11268,
  [SMALL_STATE(529)] = 11278,
  [SMALL_STATE(530)] = 11288,
  [SMALL_STATE(531)] = 11298,
  [SMALL_STATE(532)] = 11308,
  [SMALL_STATE(533)] = 11318,
  [SMALL_STATE(534)] = 11324,
  [SMALL_STATE(535)] = 11334,
  [SMALL_STATE(536)] = 11344,
  [SMALL_STATE(537)] = 11354,
  [SMALL_STATE(538)] = 11364,
  [SMALL_STATE(539)] = 11374,
  [SMALL_STATE(540)] = 11384,
  [SMALL_STATE(541)] = 11394,
  [SMALL_STATE(542)] = 11404,
  [SMALL_STATE(543)] = 11414,
  [SMALL_STATE(544)] = 11424,
  [SMALL_STATE(545)] = 11434,
  [SMALL_STATE(546)] = 11444,
  [SMALL_STATE(547)] = 11454,
  [SMALL_STATE(548)] = 11464,
  [SMALL_STATE(549)] = 11474,
  [SMALL_STATE(550)] = 11484,
  [SMALL_STATE(551)] = 11494,
  [SMALL_STATE(552)] = 11504,
  [SMALL_STATE(553)] = 11514,
  [SMALL_STATE(554)] = 11524,
  [SMALL_STATE(555)] = 11534,
  [SMALL_STATE(556)] = 11544,
  [SMALL_STATE(557)] = 11554,
  [SMALL_STATE(558)] = 11564,
  [SMALL_STATE(559)] = 11574,
  [SMALL_STATE(560)] = 11584,
  [SMALL_STATE(561)] = 11594,
  [SMALL_STATE(562)] = 11604,
  [SMALL_STATE(563)] = 11614,
  [SMALL_STATE(564)] = 11624,
  [SMALL_STATE(565)] = 11634,
  [SMALL_STATE(566)] = 11644,
  [SMALL_STATE(567)] = 11654,
  [SMALL_STATE(568)] = 11664,
  [SMALL_STATE(569)] = 11674,
  [SMALL_STATE(570)] = 11684,
  [SMALL_STATE(571)] = 11694,
  [SMALL_STATE(572)] = 11704,
  [SMALL_STATE(573)] = 11712,
  [SMALL_STATE(574)] = 11722,
  [SMALL_STATE(575)] = 11732,
  [SMALL_STATE(576)] = 11742,
  [SMALL_STATE(577)] = 11752,
  [SMALL_STATE(578)] = 11758,
  [SMALL_STATE(579)] = 11764,
  [SMALL_STATE(580)] = 11774,
  [SMALL_STATE(581)] = 11784,
  [SMALL_STATE(582)] = 11794,
  [SMALL_STATE(583)] = 11804,
  [SMALL_STATE(584)] = 11814,
  [SMALL_STATE(585)] = 11824,
  [SMALL_STATE(586)] = 11834,
  [SMALL_STATE(587)] = 11842,
  [SMALL_STATE(588)] = 11852,
  [SMALL_STATE(589)] = 11860,
  [SMALL_STATE(590)] = 11870,
  [SMALL_STATE(591)] = 11880,
  [SMALL_STATE(592)] = 11890,
  [SMALL_STATE(593)] = 11900,
  [SMALL_STATE(594)] = 11910,
  [SMALL_STATE(595)] = 11920,
  [SMALL_STATE(596)] = 11930,
  [SMALL_STATE(597)] = 11940,
  [SMALL_STATE(598)] = 11950,
  [SMALL_STATE(599)] = 11960,
  [SMALL_STATE(600)] = 11970,
  [SMALL_STATE(601)] = 11980,
  [SMALL_STATE(602)] = 11990,
  [SMALL_STATE(603)] = 12000,
  [SMALL_STATE(604)] = 12008,
  [SMALL_STATE(605)] = 12018,
  [SMALL_STATE(606)] = 12028,
  [SMALL_STATE(607)] = 12038,
  [SMALL_STATE(608)] = 12048,
  [SMALL_STATE(609)] = 12058,
  [SMALL_STATE(610)] = 12068,
  [SMALL_STATE(611)] = 12078,
  [SMALL_STATE(612)] = 12088,
  [SMALL_STATE(613)] = 12098,
  [SMALL_STATE(614)] = 12108,
  [SMALL_STATE(615)] = 12118,
  [SMALL_STATE(616)] = 12128,
  [SMALL_STATE(617)] = 12138,
  [SMALL_STATE(618)] = 12148,
  [SMALL_STATE(619)] = 12158,
  [SMALL_STATE(620)] = 12168,
  [SMALL_STATE(621)] = 12178,
  [SMALL_STATE(622)] = 12188,
  [SMALL_STATE(623)] = 12198,
  [SMALL_STATE(624)] = 12208,
  [SMALL_STATE(625)] = 12218,
  [SMALL_STATE(626)] = 12228,
  [SMALL_STATE(627)] = 12238,
  [SMALL_STATE(628)] = 12248,
  [SMALL_STATE(629)] = 12258,
  [SMALL_STATE(630)] = 12268,
  [SMALL_STATE(631)] = 12278,
  [SMALL_STATE(632)] = 12288,
  [SMALL_STATE(633)] = 12298,
  [SMALL_STATE(634)] = 12308,
  [SMALL_STATE(635)] = 12316,
  [SMALL_STATE(636)] = 12326,
  [SMALL_STATE(637)] = 12336,
  [SMALL_STATE(638)] = 12346,
  [SMALL_STATE(639)] = 12356,
  [SMALL_STATE(640)] = 12366,
  [SMALL_STATE(641)] = 12373,
  [SMALL_STATE(642)] = 12380,
  [SMALL_STATE(643)] = 12387,
  [SMALL_STATE(644)] = 12394,
  [SMALL_STATE(645)] = 12401,
  [SMALL_STATE(646)] = 12408,
  [SMALL_STATE(647)] = 12413,
  [SMALL_STATE(648)] = 12420,
  [SMALL_STATE(649)] = 12427,
  [SMALL_STATE(650)] = 12434,
  [SMALL_STATE(651)] = 12441,
  [SMALL_STATE(652)] = 12448,
  [SMALL_STATE(653)] = 12455,
  [SMALL_STATE(654)] = 12460,
  [SMALL_STATE(655)] = 12467,
  [SMALL_STATE(656)] = 12474,
  [SMALL_STATE(657)] = 12481,
  [SMALL_STATE(658)] = 12488,
  [SMALL_STATE(659)] = 12495,
  [SMALL_STATE(660)] = 12502,
  [SMALL_STATE(661)] = 12507,
  [SMALL_STATE(662)] = 12512,
  [SMALL_STATE(663)] = 12519,
  [SMALL_STATE(664)] = 12526,
  [SMALL_STATE(665)] = 12533,
  [SMALL_STATE(666)] = 12540,
  [SMALL_STATE(667)] = 12547,
  [SMALL_STATE(668)] = 12554,
  [SMALL_STATE(669)] = 12561,
  [SMALL_STATE(670)] = 12568,
  [SMALL_STATE(671)] = 12575,
  [SMALL_STATE(672)] = 12582,
  [SMALL_STATE(673)] = 12587,
  [SMALL_STATE(674)] = 12592,
  [SMALL_STATE(675)] = 12599,
  [SMALL_STATE(676)] = 12606,
  [SMALL_STATE(677)] = 12611,
  [SMALL_STATE(678)] = 12618,
  [SMALL_STATE(679)] = 12625,
  [SMALL_STATE(680)] = 12632,
  [SMALL_STATE(681)] = 12639,
  [SMALL_STATE(682)] = 12646,
  [SMALL_STATE(683)] = 12653,
  [SMALL_STATE(684)] = 12660,
  [SMALL_STATE(685)] = 12665,
  [SMALL_STATE(686)] = 12672,
  [SMALL_STATE(687)] = 12679,
  [SMALL_STATE(688)] = 12684,
  [SMALL_STATE(689)] = 12691,
  [SMALL_STATE(690)] = 12698,
  [SMALL_STATE(691)] = 12703,
  [SMALL_STATE(692)] = 12710,
  [SMALL_STATE(693)] = 12715,
  [SMALL_STATE(694)] = 12722,
  [SMALL_STATE(695)] = 12727,
  [SMALL_STATE(696)] = 12734,
  [SMALL_STATE(697)] = 12741,
  [SMALL_STATE(698)] = 12748,
  [SMALL_STATE(699)] = 12755,
  [SMALL_STATE(700)] = 12762,
  [SMALL_STATE(701)] = 12767,
  [SMALL_STATE(702)] = 12772,
  [SMALL_STATE(703)] = 12779,
  [SMALL_STATE(704)] = 12786,
  [SMALL_STATE(705)] = 12793,
  [SMALL_STATE(706)] = 12800,
  [SMALL_STATE(707)] = 12807,
  [SMALL_STATE(708)] = 12814,
  [SMALL_STATE(709)] = 12819,
  [SMALL_STATE(710)] = 12824,
  [SMALL_STATE(711)] = 12831,
  [SMALL_STATE(712)] = 12838,
  [SMALL_STATE(713)] = 12845,
  [SMALL_STATE(714)] = 12850,
  [SMALL_STATE(715)] = 12855,
  [SMALL_STATE(716)] = 12862,
  [SMALL_STATE(717)] = 12869,
  [SMALL_STATE(718)] = 12874,
  [SMALL_STATE(719)] = 12881,
  [SMALL_STATE(720)] = 12888,
  [SMALL_STATE(721)] = 12895,
  [SMALL_STATE(722)] = 12902,
  [SMALL_STATE(723)] = 12909,
  [SMALL_STATE(724)] = 12916,
  [SMALL_STATE(725)] = 12923,
  [SMALL_STATE(726)] = 12930,
  [SMALL_STATE(727)] = 12937,
  [SMALL_STATE(728)] = 12944,
  [SMALL_STATE(729)] = 12951,
  [SMALL_STATE(730)] = 12958,
  [SMALL_STATE(731)] = 12965,
  [SMALL_STATE(732)] = 12972,
  [SMALL_STATE(733)] = 12979,
  [SMALL_STATE(734)] = 12986,
  [SMALL_STATE(735)] = 12993,
  [SMALL_STATE(736)] = 12998,
  [SMALL_STATE(737)] = 13005,
  [SMALL_STATE(738)] = 13012,
  [SMALL_STATE(739)] = 13017,
  [SMALL_STATE(740)] = 13022,
  [SMALL_STATE(741)] = 13029,
  [SMALL_STATE(742)] = 13034,
  [SMALL_STATE(743)] = 13041,
  [SMALL_STATE(744)] = 13046,
  [SMALL_STATE(745)] = 13053,
  [SMALL_STATE(746)] = 13060,
  [SMALL_STATE(747)] = 13067,
  [SMALL_STATE(748)] = 13072,
  [SMALL_STATE(749)] = 13077,
  [SMALL_STATE(750)] = 13082,
  [SMALL_STATE(751)] = 13087,
  [SMALL_STATE(752)] = 13094,
  [SMALL_STATE(753)] = 13101,
  [SMALL_STATE(754)] = 13108,
  [SMALL_STATE(755)] = 13115,
  [SMALL_STATE(756)] = 13122,
  [SMALL_STATE(757)] = 13129,
  [SMALL_STATE(758)] = 13136,
  [SMALL_STATE(759)] = 13143,
  [SMALL_STATE(760)] = 13148,
  [SMALL_STATE(761)] = 13155,
  [SMALL_STATE(762)] = 13162,
  [SMALL_STATE(763)] = 13169,
  [SMALL_STATE(764)] = 13176,
  [SMALL_STATE(765)] = 13183,
  [SMALL_STATE(766)] = 13190,
  [SMALL_STATE(767)] = 13195,
  [SMALL_STATE(768)] = 13202,
  [SMALL_STATE(769)] = 13209,
  [SMALL_STATE(770)] = 13216,
  [SMALL_STATE(771)] = 13223,
  [SMALL_STATE(772)] = 13230,
  [SMALL_STATE(773)] = 13237,
  [SMALL_STATE(774)] = 13244,
  [SMALL_STATE(775)] = 13251,
  [SMALL_STATE(776)] = 13258,
  [SMALL_STATE(777)] = 13265,
  [SMALL_STATE(778)] = 13270,
  [SMALL_STATE(779)] = 13277,
  [SMALL_STATE(780)] = 13281,
  [SMALL_STATE(781)] = 13285,
  [SMALL_STATE(782)] = 13289,
  [SMALL_STATE(783)] = 13293,
  [SMALL_STATE(784)] = 13297,
  [SMALL_STATE(785)] = 13301,
  [SMALL_STATE(786)] = 13305,
  [SMALL_STATE(787)] = 13309,
  [SMALL_STATE(788)] = 13313,
  [SMALL_STATE(789)] = 13317,
  [SMALL_STATE(790)] = 13321,
  [SMALL_STATE(791)] = 13325,
  [SMALL_STATE(792)] = 13329,
  [SMALL_STATE(793)] = 13333,
  [SMALL_STATE(794)] = 13337,
  [SMALL_STATE(795)] = 13341,
  [SMALL_STATE(796)] = 13345,
  [SMALL_STATE(797)] = 13349,
  [SMALL_STATE(798)] = 13353,
  [SMALL_STATE(799)] = 13357,
  [SMALL_STATE(800)] = 13361,
  [SMALL_STATE(801)] = 13365,
  [SMALL_STATE(802)] = 13369,
  [SMALL_STATE(803)] = 13373,
  [SMALL_STATE(804)] = 13377,
  [SMALL_STATE(805)] = 13381,
  [SMALL_STATE(806)] = 13385,
  [SMALL_STATE(807)] = 13389,
  [SMALL_STATE(808)] = 13393,
  [SMALL_STATE(809)] = 13397,
  [SMALL_STATE(810)] = 13401,
  [SMALL_STATE(811)] = 13405,
  [SMALL_STATE(812)] = 13409,
  [SMALL_STATE(813)] = 13413,
  [SMALL_STATE(814)] = 13417,
  [SMALL_STATE(815)] = 13421,
  [SMALL_STATE(816)] = 13425,
  [SMALL_STATE(817)] = 13429,
  [SMALL_STATE(818)] = 13433,
  [SMALL_STATE(819)] = 13437,
  [SMALL_STATE(820)] = 13441,
  [SMALL_STATE(821)] = 13445,
  [SMALL_STATE(822)] = 13449,
  [SMALL_STATE(823)] = 13453,
  [SMALL_STATE(824)] = 13457,
  [SMALL_STATE(825)] = 13461,
  [SMALL_STATE(826)] = 13465,
  [SMALL_STATE(827)] = 13469,
  [SMALL_STATE(828)] = 13473,
  [SMALL_STATE(829)] = 13477,
  [SMALL_STATE(830)] = 13481,
  [SMALL_STATE(831)] = 13485,
  [SMALL_STATE(832)] = 13489,
  [SMALL_STATE(833)] = 13493,
  [SMALL_STATE(834)] = 13497,
  [SMALL_STATE(835)] = 13501,
  [SMALL_STATE(836)] = 13505,
  [SMALL_STATE(837)] = 13509,
  [SMALL_STATE(838)] = 13513,
  [SMALL_STATE(839)] = 13517,
  [SMALL_STATE(840)] = 13521,
  [SMALL_STATE(841)] = 13525,
  [SMALL_STATE(842)] = 13529,
  [SMALL_STATE(843)] = 13533,
  [SMALL_STATE(844)] = 13537,
  [SMALL_STATE(845)] = 13541,
  [SMALL_STATE(846)] = 13545,
  [SMALL_STATE(847)] = 13549,
  [SMALL_STATE(848)] = 13553,
  [SMALL_STATE(849)] = 13557,
  [SMALL_STATE(850)] = 13561,
  [SMALL_STATE(851)] = 13565,
  [SMALL_STATE(852)] = 13569,
  [SMALL_STATE(853)] = 13573,
  [SMALL_STATE(854)] = 13577,
  [SMALL_STATE(855)] = 13581,
  [SMALL_STATE(856)] = 13585,
  [SMALL_STATE(857)] = 13589,
  [SMALL_STATE(858)] = 13593,
  [SMALL_STATE(859)] = 13597,
  [SMALL_STATE(860)] = 13601,
  [SMALL_STATE(861)] = 13605,
  [SMALL_STATE(862)] = 13609,
  [SMALL_STATE(863)] = 13613,
  [SMALL_STATE(864)] = 13617,
  [SMALL_STATE(865)] = 13621,
  [SMALL_STATE(866)] = 13625,
  [SMALL_STATE(867)] = 13629,
  [SMALL_STATE(868)] = 13633,
  [SMALL_STATE(869)] = 13637,
  [SMALL_STATE(870)] = 13641,
  [SMALL_STATE(871)] = 13645,
  [SMALL_STATE(872)] = 13649,
  [SMALL_STATE(873)] = 13653,
  [SMALL_STATE(874)] = 13657,
  [SMALL_STATE(875)] = 13661,
  [SMALL_STATE(876)] = 13665,
  [SMALL_STATE(877)] = 13669,
  [SMALL_STATE(878)] = 13673,
  [SMALL_STATE(879)] = 13677,
  [SMALL_STATE(880)] = 13681,
  [SMALL_STATE(881)] = 13685,
  [SMALL_STATE(882)] = 13689,
  [SMALL_STATE(883)] = 13693,
  [SMALL_STATE(884)] = 13697,
  [SMALL_STATE(885)] = 13701,
  [SMALL_STATE(886)] = 13705,
  [SMALL_STATE(887)] = 13709,
  [SMALL_STATE(888)] = 13713,
  [SMALL_STATE(889)] = 13717,
  [SMALL_STATE(890)] = 13721,
  [SMALL_STATE(891)] = 13725,
  [SMALL_STATE(892)] = 13729,
  [SMALL_STATE(893)] = 13733,
  [SMALL_STATE(894)] = 13737,
  [SMALL_STATE(895)] = 13741,
  [SMALL_STATE(896)] = 13745,
  [SMALL_STATE(897)] = 13749,
  [SMALL_STATE(898)] = 13753,
  [SMALL_STATE(899)] = 13757,
  [SMALL_STATE(900)] = 13761,
  [SMALL_STATE(901)] = 13765,
  [SMALL_STATE(902)] = 13769,
  [SMALL_STATE(903)] = 13773,
  [SMALL_STATE(904)] = 13777,
  [SMALL_STATE(905)] = 13781,
  [SMALL_STATE(906)] = 13785,
  [SMALL_STATE(907)] = 13789,
  [SMALL_STATE(908)] = 13793,
  [SMALL_STATE(909)] = 13797,
  [SMALL_STATE(910)] = 13801,
  [SMALL_STATE(911)] = 13805,
  [SMALL_STATE(912)] = 13809,
  [SMALL_STATE(913)] = 13813,
  [SMALL_STATE(914)] = 13817,
  [SMALL_STATE(915)] = 13821,
  [SMALL_STATE(916)] = 13825,
  [SMALL_STATE(917)] = 13829,
  [SMALL_STATE(918)] = 13833,
  [SMALL_STATE(919)] = 13837,
  [SMALL_STATE(920)] = 13841,
  [SMALL_STATE(921)] = 13845,
  [SMALL_STATE(922)] = 13849,
  [SMALL_STATE(923)] = 13853,
  [SMALL_STATE(924)] = 13857,
  [SMALL_STATE(925)] = 13861,
  [SMALL_STATE(926)] = 13865,
  [SMALL_STATE(927)] = 13869,
  [SMALL_STATE(928)] = 13873,
  [SMALL_STATE(929)] = 13877,
  [SMALL_STATE(930)] = 13881,
  [SMALL_STATE(931)] = 13885,
  [SMALL_STATE(932)] = 13889,
  [SMALL_STATE(933)] = 13893,
  [SMALL_STATE(934)] = 13897,
  [SMALL_STATE(935)] = 13901,
  [SMALL_STATE(936)] = 13905,
  [SMALL_STATE(937)] = 13909,
  [SMALL_STATE(938)] = 13913,
  [SMALL_STATE(939)] = 13917,
  [SMALL_STATE(940)] = 13921,
  [SMALL_STATE(941)] = 13925,
  [SMALL_STATE(942)] = 13929,
  [SMALL_STATE(943)] = 13933,
  [SMALL_STATE(944)] = 13937,
  [SMALL_STATE(945)] = 13941,
  [SMALL_STATE(946)] = 13945,
  [SMALL_STATE(947)] = 13949,
  [SMALL_STATE(948)] = 13953,
  [SMALL_STATE(949)] = 13957,
  [SMALL_STATE(950)] = 13961,
  [SMALL_STATE(951)] = 13965,
  [SMALL_STATE(952)] = 13969,
  [SMALL_STATE(953)] = 13973,
  [SMALL_STATE(954)] = 13977,
  [SMALL_STATE(955)] = 13981,
  [SMALL_STATE(956)] = 13985,
  [SMALL_STATE(957)] = 13989,
  [SMALL_STATE(958)] = 13993,
  [SMALL_STATE(959)] = 13997,
  [SMALL_STATE(960)] = 14001,
  [SMALL_STATE(961)] = 14005,
  [SMALL_STATE(962)] = 14009,
  [SMALL_STATE(963)] = 14013,
  [SMALL_STATE(964)] = 14017,
  [SMALL_STATE(965)] = 14021,
  [SMALL_STATE(966)] = 14025,
  [SMALL_STATE(967)] = 14029,
  [SMALL_STATE(968)] = 14033,
  [SMALL_STATE(969)] = 14037,
  [SMALL_STATE(970)] = 14041,
  [SMALL_STATE(971)] = 14045,
  [SMALL_STATE(972)] = 14049,
  [SMALL_STATE(973)] = 14053,
  [SMALL_STATE(974)] = 14057,
  [SMALL_STATE(975)] = 14061,
  [SMALL_STATE(976)] = 14065,
  [SMALL_STATE(977)] = 14069,
  [SMALL_STATE(978)] = 14073,
  [SMALL_STATE(979)] = 14077,
  [SMALL_STATE(980)] = 14081,
  [SMALL_STATE(981)] = 14085,
  [SMALL_STATE(982)] = 14089,
  [SMALL_STATE(983)] = 14093,
  [SMALL_STATE(984)] = 14097,
  [SMALL_STATE(985)] = 14101,
  [SMALL_STATE(986)] = 14105,
  [SMALL_STATE(987)] = 14109,
  [SMALL_STATE(988)] = 14113,
  [SMALL_STATE(989)] = 14117,
  [SMALL_STATE(990)] = 14121,
  [SMALL_STATE(991)] = 14125,
  [SMALL_STATE(992)] = 14129,
  [SMALL_STATE(993)] = 14133,
  [SMALL_STATE(994)] = 14137,
  [SMALL_STATE(995)] = 14141,
  [SMALL_STATE(996)] = 14145,
  [SMALL_STATE(997)] = 14149,
  [SMALL_STATE(998)] = 14153,
  [SMALL_STATE(999)] = 14157,
  [SMALL_STATE(1000)] = 14161,
  [SMALL_STATE(1001)] = 14165,
  [SMALL_STATE(1002)] = 14169,
  [SMALL_STATE(1003)] = 14173,
  [SMALL_STATE(1004)] = 14177,
  [SMALL_STATE(1005)] = 14181,
  [SMALL_STATE(1006)] = 14185,
  [SMALL_STATE(1007)] = 14189,
  [SMALL_STATE(1008)] = 14193,
  [SMALL_STATE(1009)] = 14197,
  [SMALL_STATE(1010)] = 14201,
  [SMALL_STATE(1011)] = 14205,
  [SMALL_STATE(1012)] = 14209,
  [SMALL_STATE(1013)] = 14213,
  [SMALL_STATE(1014)] = 14217,
  [SMALL_STATE(1015)] = 14221,
  [SMALL_STATE(1016)] = 14225,
  [SMALL_STATE(1017)] = 14229,
  [SMALL_STATE(1018)] = 14233,
  [SMALL_STATE(1019)] = 14237,
  [SMALL_STATE(1020)] = 14241,
  [SMALL_STATE(1021)] = 14245,
  [SMALL_STATE(1022)] = 14249,
  [SMALL_STATE(1023)] = 14253,
  [SMALL_STATE(1024)] = 14257,
  [SMALL_STATE(1025)] = 14261,
  [SMALL_STATE(1026)] = 14265,
  [SMALL_STATE(1027)] = 14269,
  [SMALL_STATE(1028)] = 14273,
  [SMALL_STATE(1029)] = 14277,
  [SMALL_STATE(1030)] = 14281,
  [SMALL_STATE(1031)] = 14285,
  [SMALL_STATE(1032)] = 14289,
  [SMALL_STATE(1033)] = 14293,
  [SMALL_STATE(1034)] = 14297,
  [SMALL_STATE(1035)] = 14301,
  [SMALL_STATE(1036)] = 14305,
  [SMALL_STATE(1037)] = 14309,
  [SMALL_STATE(1038)] = 14313,
  [SMALL_STATE(1039)] = 14317,
  [SMALL_STATE(1040)] = 14321,
  [SMALL_STATE(1041)] = 14325,
  [SMALL_STATE(1042)] = 14329,
  [SMALL_STATE(1043)] = 14333,
  [SMALL_STATE(1044)] = 14337,
  [SMALL_STATE(1045)] = 14341,
  [SMALL_STATE(1046)] = 14345,
  [SMALL_STATE(1047)] = 14349,
  [SMALL_STATE(1048)] = 14353,
  [SMALL_STATE(1049)] = 14357,
  [SMALL_STATE(1050)] = 14361,
  [SMALL_STATE(1051)] = 14365,
  [SMALL_STATE(1052)] = 14369,
  [SMALL_STATE(1053)] = 14373,
  [SMALL_STATE(1054)] = 14377,
  [SMALL_STATE(1055)] = 14381,
  [SMALL_STATE(1056)] = 14385,
  [SMALL_STATE(1057)] = 14389,
  [SMALL_STATE(1058)] = 14393,
  [SMALL_STATE(1059)] = 14397,
  [SMALL_STATE(1060)] = 14401,
  [SMALL_STATE(1061)] = 14405,
  [SMALL_STATE(1062)] = 14409,
  [SMALL_STATE(1063)] = 14413,
  [SMALL_STATE(1064)] = 14417,
  [SMALL_STATE(1065)] = 14421,
  [SMALL_STATE(1066)] = 14425,
  [SMALL_STATE(1067)] = 14429,
  [SMALL_STATE(1068)] = 14433,
  [SMALL_STATE(1069)] = 14437,
  [SMALL_STATE(1070)] = 14441,
  [SMALL_STATE(1071)] = 14445,
  [SMALL_STATE(1072)] = 14449,
  [SMALL_STATE(1073)] = 14453,
  [SMALL_STATE(1074)] = 14457,
  [SMALL_STATE(1075)] = 14461,
  [SMALL_STATE(1076)] = 14465,
  [SMALL_STATE(1077)] = 14469,
  [SMALL_STATE(1078)] = 14473,
  [SMALL_STATE(1079)] = 14477,
  [SMALL_STATE(1080)] = 14481,
  [SMALL_STATE(1081)] = 14485,
  [SMALL_STATE(1082)] = 14489,
  [SMALL_STATE(1083)] = 14493,
  [SMALL_STATE(1084)] = 14497,
  [SMALL_STATE(1085)] = 14501,
  [SMALL_STATE(1086)] = 14505,
  [SMALL_STATE(1087)] = 14509,
  [SMALL_STATE(1088)] = 14513,
  [SMALL_STATE(1089)] = 14517,
  [SMALL_STATE(1090)] = 14521,
  [SMALL_STATE(1091)] = 14525,
  [SMALL_STATE(1092)] = 14529,
  [SMALL_STATE(1093)] = 14533,
  [SMALL_STATE(1094)] = 14537,
  [SMALL_STATE(1095)] = 14541,
  [SMALL_STATE(1096)] = 14545,
  [SMALL_STATE(1097)] = 14549,
  [SMALL_STATE(1098)] = 14553,
  [SMALL_STATE(1099)] = 14557,
  [SMALL_STATE(1100)] = 14561,
  [SMALL_STATE(1101)] = 14565,
  [SMALL_STATE(1102)] = 14569,
  [SMALL_STATE(1103)] = 14573,
  [SMALL_STATE(1104)] = 14577,
  [SMALL_STATE(1105)] = 14581,
  [SMALL_STATE(1106)] = 14585,
  [SMALL_STATE(1107)] = 14589,
  [SMALL_STATE(1108)] = 14593,
  [SMALL_STATE(1109)] = 14597,
  [SMALL_STATE(1110)] = 14601,
  [SMALL_STATE(1111)] = 14605,
  [SMALL_STATE(1112)] = 14609,
  [SMALL_STATE(1113)] = 14613,
  [SMALL_STATE(1114)] = 14617,
  [SMALL_STATE(1115)] = 14621,
  [SMALL_STATE(1116)] = 14625,
  [SMALL_STATE(1117)] = 14629,
  [SMALL_STATE(1118)] = 14633,
  [SMALL_STATE(1119)] = 14637,
  [SMALL_STATE(1120)] = 14641,
  [SMALL_STATE(1121)] = 14645,
  [SMALL_STATE(1122)] = 14649,
  [SMALL_STATE(1123)] = 14653,
  [SMALL_STATE(1124)] = 14657,
  [SMALL_STATE(1125)] = 14661,
  [SMALL_STATE(1126)] = 14665,
  [SMALL_STATE(1127)] = 14669,
  [SMALL_STATE(1128)] = 14673,
  [SMALL_STATE(1129)] = 14677,
  [SMALL_STATE(1130)] = 14681,
  [SMALL_STATE(1131)] = 14685,
  [SMALL_STATE(1132)] = 14689,
  [SMALL_STATE(1133)] = 14693,
  [SMALL_STATE(1134)] = 14697,
  [SMALL_STATE(1135)] = 14701,
  [SMALL_STATE(1136)] = 14705,
  [SMALL_STATE(1137)] = 14709,
  [SMALL_STATE(1138)] = 14713,
  [SMALL_STATE(1139)] = 14717,
  [SMALL_STATE(1140)] = 14721,
  [SMALL_STATE(1141)] = 14725,
  [SMALL_STATE(1142)] = 14729,
  [SMALL_STATE(1143)] = 14733,
  [SMALL_STATE(1144)] = 14737,
  [SMALL_STATE(1145)] = 14741,
  [SMALL_STATE(1146)] = 14745,
  [SMALL_STATE(1147)] = 14749,
  [SMALL_STATE(1148)] = 14753,
  [SMALL_STATE(1149)] = 14757,
  [SMALL_STATE(1150)] = 14761,
  [SMALL_STATE(1151)] = 14765,
  [SMALL_STATE(1152)] = 14769,
  [SMALL_STATE(1153)] = 14773,
  [SMALL_STATE(1154)] = 14777,
  [SMALL_STATE(1155)] = 14781,
  [SMALL_STATE(1156)] = 14785,
  [SMALL_STATE(1157)] = 14789,
  [SMALL_STATE(1158)] = 14793,
  [SMALL_STATE(1159)] = 14797,
  [SMALL_STATE(1160)] = 14801,
  [SMALL_STATE(1161)] = 14805,
  [SMALL_STATE(1162)] = 14809,
  [SMALL_STATE(1163)] = 14813,
  [SMALL_STATE(1164)] = 14817,
  [SMALL_STATE(1165)] = 14821,
  [SMALL_STATE(1166)] = 14825,
  [SMALL_STATE(1167)] = 14829,
  [SMALL_STATE(1168)] = 14833,
  [SMALL_STATE(1169)] = 14837,
  [SMALL_STATE(1170)] = 14841,
  [SMALL_STATE(1171)] = 14845,
  [SMALL_STATE(1172)] = 14849,
  [SMALL_STATE(1173)] = 14853,
  [SMALL_STATE(1174)] = 14857,
  [SMALL_STATE(1175)] = 14861,
  [SMALL_STATE(1176)] = 14865,
  [SMALL_STATE(1177)] = 14869,
  [SMALL_STATE(1178)] = 14873,
  [SMALL_STATE(1179)] = 14877,
  [SMALL_STATE(1180)] = 14881,
  [SMALL_STATE(1181)] = 14885,
  [SMALL_STATE(1182)] = 14889,
  [SMALL_STATE(1183)] = 14893,
  [SMALL_STATE(1184)] = 14897,
  [SMALL_STATE(1185)] = 14901,
  [SMALL_STATE(1186)] = 14905,
  [SMALL_STATE(1187)] = 14909,
  [SMALL_STATE(1188)] = 14913,
  [SMALL_STATE(1189)] = 14917,
  [SMALL_STATE(1190)] = 14921,
  [SMALL_STATE(1191)] = 14925,
  [SMALL_STATE(1192)] = 14929,
  [SMALL_STATE(1193)] = 14933,
  [SMALL_STATE(1194)] = 14937,
  [SMALL_STATE(1195)] = 14941,
  [SMALL_STATE(1196)] = 14945,
  [SMALL_STATE(1197)] = 14949,
  [SMALL_STATE(1198)] = 14953,
  [SMALL_STATE(1199)] = 14957,
  [SMALL_STATE(1200)] = 14961,
  [SMALL_STATE(1201)] = 14965,
  [SMALL_STATE(1202)] = 14969,
  [SMALL_STATE(1203)] = 14973,
  [SMALL_STATE(1204)] = 14977,
  [SMALL_STATE(1205)] = 14981,
  [SMALL_STATE(1206)] = 14985,
  [SMALL_STATE(1207)] = 14989,
  [SMALL_STATE(1208)] = 14993,
  [SMALL_STATE(1209)] = 14997,
  [SMALL_STATE(1210)] = 15001,
  [SMALL_STATE(1211)] = 15005,
  [SMALL_STATE(1212)] = 15009,
  [SMALL_STATE(1213)] = 15013,
  [SMALL_STATE(1214)] = 15017,
  [SMALL_STATE(1215)] = 15021,
  [SMALL_STATE(1216)] = 15025,
  [SMALL_STATE(1217)] = 15029,
  [SMALL_STATE(1218)] = 15033,
  [SMALL_STATE(1219)] = 15037,
  [SMALL_STATE(1220)] = 15041,
  [SMALL_STATE(1221)] = 15045,
  [SMALL_STATE(1222)] = 15049,
  [SMALL_STATE(1223)] = 15053,
  [SMALL_STATE(1224)] = 15057,
  [SMALL_STATE(1225)] = 15061,
  [SMALL_STATE(1226)] = 15065,
  [SMALL_STATE(1227)] = 15069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(411),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(437),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(634),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1158),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(623),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(379),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(383),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1227),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1226),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(391),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1225),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(764),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 49),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 49),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(419),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 49),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 49),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 42),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 43),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(866),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 59),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 58),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(696),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 32),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 44),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 29),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 97),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 10),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 58),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(668),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 20),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(414),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 29),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 41),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 40),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 25),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(710),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 41),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 29),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 58),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 41),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(435),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 46),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 82),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 14),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 71),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 52),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 47),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 28),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 30),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 33),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 36),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 38),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 15),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 23),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 9),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 51),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 48),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 21),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 11),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 61),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 10),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 71),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 20),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 63),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 64),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 50),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 62),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 82),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 91),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 78),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 77),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 76),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 92),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 97),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 103),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 44),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 53),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 102),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 108),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 89),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 90),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 54),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 55),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 75),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 56),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 58),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 29),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 105),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 57),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 79),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 21),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 101),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 41),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 48),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 100),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 80),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 81),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 21),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 99),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 41),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 107),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 72),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 88),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 86),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 74),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 87),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 85),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 98),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 49),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 39),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 44),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 84),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 96),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 20),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 37),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 35),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 34),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 60),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 32),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 10),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 31),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 94),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 29),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 58),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 44),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 44),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 83),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 29),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 48),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 106),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 104),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1029),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1186),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1187),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(387),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 8),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(930),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 25),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 27),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1089),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(704),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(377),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(715),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1193),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(563),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(506),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(652),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(671),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 49),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(376),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(161),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1183),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(719),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(395),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1152),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1155),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(734),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1160),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1167),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1171),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(52),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1175),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1101),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1159),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1163),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1178),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1153),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1157),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1156),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1181),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1180),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 69),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 70),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 93),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 70),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 26),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 17),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 24),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 65),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [1620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 19),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 66),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 67),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 68),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 11),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 45),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 73),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2514] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
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
