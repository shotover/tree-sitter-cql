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
#define STATE_COUNT 1026
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 306
#define ALIAS_COUNT 30
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 91

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
  aux_sym_create_keyspace_token2 = 130,
  aux_sym_durable_writes_token1 = 131,
  aux_sym_role_with_option_token1 = 132,
  aux_sym_role_with_option_token2 = 133,
  aux_sym_role_with_option_token3 = 134,
  aux_sym_role_with_option_token4 = 135,
  aux_sym_primary_key_column_token1 = 136,
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
  sym_aggregate_name = 210,
  sym_init_cond_definition = 211,
  sym_init_cond_list = 212,
  sym_init_cond_nested_list = 213,
  sym_init_cond_hash = 214,
  sym_init_cond_hash_item = 215,
  sym_create_materialized_view = 216,
  sym_materialized_view_name = 217,
  sym_materialized_view_where = 218,
  sym_column_not_null = 219,
  sym_create_function = 220,
  sym_function_name = 221,
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
  sym_trigger_name = 252,
  sym_trigger_class = 253,
  sym_create_type = 254,
  sym_typed_name = 255,
  sym_type_name = 256,
  sym_create_user = 257,
  sym_user_name = 258,
  sym_user_with = 259,
  sym_user_password = 260,
  sym_user_super_user = 261,
  sym_alter_materialized_view = 262,
  sym_alter_keyspace = 263,
  sym_keyspace_name = 264,
  sym_replication_list = 265,
  sym_alter_role = 266,
  sym_alter_table = 267,
  sym_alter_table_operation = 268,
  sym_alter_table_add = 269,
  sym_alter_table_drop_columns = 270,
  sym_alter_table_drop_compact_storage = 271,
  sym_alter_table_rename = 272,
  sym_alter_table_with = 273,
  sym_alter_type = 274,
  sym_alter_type_operation = 275,
  sym_alter_type_alter_type = 276,
  sym_alter_type_add = 277,
  sym_alter_type_rename = 278,
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
  aux_sym_init_cond_nested_list_repeat1 = 294,
  aux_sym_init_cond_hash_repeat1 = 295,
  aux_sym_materialized_view_where_repeat1 = 296,
  aux_sym_create_function_repeat1 = 297,
  aux_sym_data_type_definition_repeat1 = 298,
  aux_sym_role_with_repeat1 = 299,
  aux_sym_option_hash_repeat1 = 300,
  aux_sym_column_definition_list_repeat1 = 301,
  aux_sym_clustering_key_list_repeat1 = 302,
  aux_sym_table_options_repeat1 = 303,
  aux_sym_replication_list_repeat1 = 304,
  aux_sym_alter_type_rename_repeat1 = 305,
  anon_alias_sym_aggregate = 306,
  anon_alias_sym_alias = 307,
  anon_alias_sym_assignment_operand = 308,
  anon_alias_sym_code_block = 309,
  anon_alias_sym_column = 310,
  anon_alias_sym_entry = 311,
  anon_alias_sym_finalfunc = 312,
  anon_alias_sym_full = 313,
  anon_alias_sym_function = 314,
  anon_alias_sym_function_name = 315,
  anon_alias_sym_hash_key = 316,
  anon_alias_sym_index = 317,
  anon_alias_sym_key = 318,
  anon_alias_sym_keyspace = 319,
  anon_alias_sym_language = 320,
  anon_alias_sym_limit_value = 321,
  anon_alias_sym_login = 322,
  anon_alias_sym_materialized_view = 323,
  anon_alias_sym_partition_key = 324,
  anon_alias_sym_password = 325,
  anon_alias_sym_primary_key = 326,
  anon_alias_sym_role = 327,
  anon_alias_sym_sfunc = 328,
  anon_alias_sym_table = 329,
  anon_alias_sym_time = 330,
  anon_alias_sym_trigger = 331,
  anon_alias_sym_ttl = 332,
  anon_alias_sym_type = 333,
  anon_alias_sym_user = 334,
  anon_alias_sym_value = 335,
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
  [aux_sym_primary_key_column_token1] = "PRIMARY",
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
  [sym_aggregate_name] = "aggregate_name",
  [sym_init_cond_definition] = "init_cond_definition",
  [sym_init_cond_list] = "init_cond_list",
  [sym_init_cond_nested_list] = "init_cond_nested_list",
  [sym_init_cond_hash] = "init_cond_hash",
  [sym_init_cond_hash_item] = "init_cond_hash_item",
  [sym_create_materialized_view] = "create_materialized_view",
  [sym_materialized_view_name] = "materialized_view_name",
  [sym_materialized_view_where] = "materialized_view_where",
  [sym_column_not_null] = "column_not_null",
  [sym_create_function] = "create_function",
  [sym_function_name] = "function_name",
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
  [aux_sym_init_cond_nested_list_repeat1] = "init_cond_nested_list_repeat1",
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
  [anon_alias_sym_code_block] = "code_block",
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
  [aux_sym_primary_key_column_token1] = aux_sym_primary_key_column_token1,
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
  [sym_aggregate_name] = sym_aggregate_name,
  [sym_init_cond_definition] = sym_init_cond_definition,
  [sym_init_cond_list] = sym_init_cond_list,
  [sym_init_cond_nested_list] = sym_init_cond_nested_list,
  [sym_init_cond_hash] = sym_init_cond_hash,
  [sym_init_cond_hash_item] = sym_init_cond_hash_item,
  [sym_create_materialized_view] = sym_create_materialized_view,
  [sym_materialized_view_name] = sym_materialized_view_name,
  [sym_materialized_view_where] = sym_materialized_view_where,
  [sym_column_not_null] = sym_column_not_null,
  [sym_create_function] = sym_create_function,
  [sym_function_name] = sym_function_name,
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
  [aux_sym_init_cond_nested_list_repeat1] = aux_sym_init_cond_nested_list_repeat1,
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
  [anon_alias_sym_code_block] = anon_alias_sym_code_block,
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
  [aux_sym_primary_key_column_token1] = {
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
  [sym_aggregate_name] = {
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
  [sym_init_cond_nested_list] = {
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
  [sym_function_name] = {
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
  [aux_sym_init_cond_nested_list_repeat1] = {
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
  [anon_alias_sym_code_block] = {
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
    [0] = anon_alias_sym_function,
  },
  [7] = {
    [2] = anon_alias_sym_role,
  },
  [8] = {
    [0] = anon_alias_sym_aggregate,
  },
  [9] = {
    [0] = anon_alias_sym_trigger,
  },
  [10] = {
    [0] = anon_alias_sym_type,
  },
  [11] = {
    [0] = anon_alias_sym_user,
  },
  [12] = {
    [2] = anon_alias_sym_table,
  },
  [13] = {
    [2] = anon_alias_sym_index,
  },
  [14] = {
    [2] = anon_alias_sym_keyspace,
  },
  [15] = {
    [2] = anon_alias_sym_function,
  },
  [16] = {
    [2] = anon_alias_sym_aggregate,
  },
  [17] = {
    [2] = anon_alias_sym_type,
  },
  [18] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_alias,
  },
  [19] = {
    [2] = anon_alias_sym_alias,
  },
  [20] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [21] = {
    [0] = anon_alias_sym_materialized_view,
  },
  [22] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [23] = {
    [3] = anon_alias_sym_role,
  },
  [24] = {
    [0] = anon_alias_sym_function_name,
  },
  [25] = {
    [1] = anon_alias_sym_limit_value,
  },
  [26] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [27] = {
    [2] = anon_alias_sym_time,
  },
  [28] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_function,
  },
  [29] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_aggregate,
  },
  [30] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [31] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_type,
  },
  [32] = {
    [4] = anon_alias_sym_table,
  },
  [33] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [34] = {
    [4] = anon_alias_sym_index,
  },
  [35] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [36] = {
    [4] = anon_alias_sym_keyspace,
  },
  [37] = {
    [4] = anon_alias_sym_function,
  },
  [38] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [39] = {
    [4] = anon_alias_sym_role,
  },
  [40] = {
    [4] = anon_alias_sym_aggregate,
  },
  [41] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [42] = {
    [4] = anon_alias_sym_type,
  },
  [43] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [44] = {
    [2] = anon_alias_sym_ttl,
  },
  [45] = {
    [1] = anon_alias_sym_table,
  },
  [46] = {
    [1] = anon_alias_sym_function,
  },
  [47] = {
    [1] = anon_alias_sym_role,
  },
  [48] = {
    [5] = anon_alias_sym_role,
  },
  [49] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_materialized_view,
  },
  [50] = {
    [1] = anon_alias_sym_password,
  },
  [51] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [52] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [53] = {
    [1] = anon_alias_sym_column,
  },
  [54] = {
    [2] = anon_alias_sym_password,
  },
  [55] = {
    [2] = anon_alias_sym_login,
  },
  [56] = {
    [2] = anon_alias_sym_user,
  },
  [57] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [58] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [59] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [60] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [61] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [62] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [63] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [64] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [65] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [66] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [67] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [68] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [69] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [70] = {
    [2] = anon_alias_sym_key,
  },
  [71] = {
    [2] = anon_alias_sym_entry,
  },
  [72] = {
    [2] = anon_alias_sym_full,
  },
  [73] = {
    [0] = anon_alias_sym_primary_key,
  },
  [74] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [75] = {
    [4] = anon_alias_sym_column,
  },
  [76] = {
    [2] = anon_alias_sym_value,
  },
  [77] = {
    [0] = anon_alias_sym_partition_key,
  },
  [78] = {
    [9] = anon_alias_sym_language,
    [11] = anon_alias_sym_code_block,
  },
  [79] = {
    [10] = anon_alias_sym_language,
    [12] = anon_alias_sym_code_block,
  },
  [80] = {
    [11] = anon_alias_sym_language,
    [13] = anon_alias_sym_code_block,
  },
  [81] = {
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [82] = {
    [12] = anon_alias_sym_language,
    [14] = anon_alias_sym_code_block,
  },
  [83] = {
    [13] = anon_alias_sym_language,
    [15] = anon_alias_sym_code_block,
  },
  [84] = {
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [85] = {
    [14] = anon_alias_sym_language,
    [16] = anon_alias_sym_code_block,
  },
  [86] = {
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [87] = {
    [0] = anon_alias_sym_hash_key,
  },
  [88] = {
    [15] = anon_alias_sym_language,
    [17] = anon_alias_sym_code_block,
  },
  [89] = {
    [16] = anon_alias_sym_language,
    [18] = anon_alias_sym_code_block,
  },
  [90] = {
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__decimal_literal, 5,
    sym__decimal_literal,
    anon_alias_sym_assignment_operand,
    anon_alias_sym_index,
    anon_alias_sym_limit_value,
    anon_alias_sym_value,
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
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
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
          lookahead == 'p') ADVANCE(45);
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
          lookahead == 'k') ADVANCE(800);
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
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
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
    case 44:
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
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 46:
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
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
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
          lookahead == 'b') ADVANCE(694);
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
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
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
          lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
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
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
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
          lookahead == 'e') ADVANCE(726);
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
          lookahead == 'e') ADVANCE(704);
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
          lookahead == 'e') ADVANCE(690);
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
          lookahead == 'e') ADVANCE(50);
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
          lookahead == 's') ADVANCE(688);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(688);
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
          lookahead == 'h') ADVANCE(736);
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
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
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
          lookahead == 'n') ADVANCE(52);
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
          lookahead == 'm') ADVANCE(51);
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
          lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
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
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
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
          lookahead == 'p') ADVANCE(714);
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
          lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
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
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
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
          lookahead == 's') ADVANCE(738);
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
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
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
          lookahead == 't') ADVANCE(730);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
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
          lookahead == 't') ADVANCE(48);
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
          lookahead == 'y') ADVANCE(743);
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
          lookahead == 't') ADVANCE(712);
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
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
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
          lookahead == 'b') ADVANCE(695);
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
          lookahead == 'd') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
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
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
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
          lookahead == 't') ADVANCE(713);
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
          lookahead == 'e') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
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
          lookahead == 'i') ADVANCE(691);
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
          lookahead == 'i') ADVANCE(799);
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
          lookahead == 'l') ADVANCE(703);
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
          lookahead == 'l') ADVANCE(797);
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
          lookahead == 'n') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
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
          lookahead == 'n') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
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
          lookahead == 'p') ADVANCE(715);
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
          lookahead == 'r') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
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
          lookahead == 'r') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(815);
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
          lookahead == 's') ADVANCE(909);
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
          lookahead == 's') ADVANCE(910);
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
          lookahead == 't') ADVANCE(711);
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
          lookahead == 't') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
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
          lookahead == 't') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
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
          lookahead == 't') ADVANCE(882);
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
          lookahead == 'y') ADVANCE(744);
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
  [26] = {.lex_state = 553},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 553},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 553},
  [31] = {.lex_state = 553},
  [32] = {.lex_state = 553},
  [33] = {.lex_state = 553},
  [34] = {.lex_state = 553},
  [35] = {.lex_state = 553},
  [36] = {.lex_state = 553},
  [37] = {.lex_state = 553},
  [38] = {.lex_state = 553},
  [39] = {.lex_state = 553},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 553},
  [43] = {.lex_state = 553},
  [44] = {.lex_state = 553},
  [45] = {.lex_state = 553},
  [46] = {.lex_state = 553},
  [47] = {.lex_state = 553},
  [48] = {.lex_state = 553},
  [49] = {.lex_state = 553},
  [50] = {.lex_state = 553},
  [51] = {.lex_state = 553},
  [52] = {.lex_state = 553},
  [53] = {.lex_state = 553},
  [54] = {.lex_state = 553},
  [55] = {.lex_state = 553},
  [56] = {.lex_state = 553},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 553},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 553},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 553},
  [64] = {.lex_state = 553},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 552},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 553},
  [74] = {.lex_state = 552},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 553},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 553},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 552},
  [87] = {.lex_state = 553},
  [88] = {.lex_state = 553},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
  [143] = {.lex_state = 552},
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
  [157] = {.lex_state = 553},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 553},
  [163] = {.lex_state = 553},
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
  [199] = {.lex_state = 553},
  [200] = {.lex_state = 553},
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
  [259] = {.lex_state = 1},
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
  [320] = {.lex_state = 552},
  [321] = {.lex_state = 552},
  [322] = {.lex_state = 552},
  [323] = {.lex_state = 552},
  [324] = {.lex_state = 552},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 552},
  [331] = {.lex_state = 552},
  [332] = {.lex_state = 42},
  [333] = {.lex_state = 552},
  [334] = {.lex_state = 53},
  [335] = {.lex_state = 552},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 552},
  [338] = {.lex_state = 53},
  [339] = {.lex_state = 553},
  [340] = {.lex_state = 552},
  [341] = {.lex_state = 552},
  [342] = {.lex_state = 42},
  [343] = {.lex_state = 552},
  [344] = {.lex_state = 552},
  [345] = {.lex_state = 42},
  [346] = {.lex_state = 552},
  [347] = {.lex_state = 552},
  [348] = {.lex_state = 552},
  [349] = {.lex_state = 552},
  [350] = {.lex_state = 552},
  [351] = {.lex_state = 553},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 14},
  [363] = {.lex_state = 553},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 14},
  [366] = {.lex_state = 553},
  [367] = {.lex_state = 10},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 553},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 12},
  [372] = {.lex_state = 10},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 53},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 553},
  [379] = {.lex_state = 19},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 24},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 10},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 10},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 17},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 17},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 17},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 17},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 17},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 17},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 17},
  [422] = {.lex_state = 17},
  [423] = {.lex_state = 17},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 17},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 17},
  [436] = {.lex_state = 21},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 17},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 17},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 26},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 22},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 20},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 20},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 25},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 553},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 552},
  [513] = {.lex_state = 10},
  [514] = {.lex_state = 10},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 553},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 10},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 10},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 10},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 10},
  [547] = {.lex_state = 20},
  [548] = {.lex_state = 20},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 553},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 10},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 10},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 20},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 20},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 20},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 20},
  [603] = {.lex_state = 10},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 20},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 20},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 10},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 10},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 16},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 553},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 10},
  [659] = {.lex_state = 20},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 27},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 553},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 27},
  [673] = {.lex_state = 27},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 10},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 553},
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
  [695] = {.lex_state = 10},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 42},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 552},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 553},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 10},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 10},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 552},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 10},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 10},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 553},
  [824] = {.lex_state = 553},
  [825] = {.lex_state = 553},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 553},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 10},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 10},
  [912] = {.lex_state = 552},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 10},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 552},
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
  [941] = {.lex_state = 10},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 10},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 552},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 552},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 10},
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
  [977] = {.lex_state = 552},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 552},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 10},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 10},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 10},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 10},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 553},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 552},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 552},
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
    [aux_sym_primary_key_column_token1] = ACTIONS(1),
    [aux_sym_compact_storage_token1] = ACTIONS(1),
    [aux_sym_compact_storage_token2] = ACTIONS(1),
    [aux_sym_clustering_order_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1013),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(253),
    [sym_delete_statement] = STATE(253),
    [sym_begin_batch] = STATE(455),
    [sym_insert_statement] = STATE(253),
    [sym_truncate] = STATE(253),
    [sym_create_index] = STATE(253),
    [sym_drop_index] = STATE(253),
    [sym_update] = STATE(253),
    [sym_use] = STATE(253),
    [sym_grant] = STATE(253),
    [sym_revoke] = STATE(253),
    [sym_list_roles] = STATE(253),
    [sym_list_permissions] = STATE(253),
    [sym_drop_aggregate] = STATE(253),
    [sym_drop_materialized_view] = STATE(253),
    [sym_drop_function] = STATE(253),
    [sym_drop_keyspace] = STATE(253),
    [sym_drop_role] = STATE(253),
    [sym_drop_table] = STATE(253),
    [sym_drop_trigger] = STATE(253),
    [sym_drop_type] = STATE(253),
    [sym_drop_user] = STATE(253),
    [sym_create_aggregate] = STATE(253),
    [sym_create_materialized_view] = STATE(253),
    [sym_create_function] = STATE(253),
    [sym_create_keyspace] = STATE(253),
    [sym_create_role] = STATE(253),
    [sym_create_table] = STATE(253),
    [sym_create_trigger] = STATE(253),
    [sym_create_type] = STATE(253),
    [sym_create_user] = STATE(253),
    [sym_alter_materialized_view] = STATE(253),
    [sym_alter_keyspace] = STATE(253),
    [sym_alter_role] = STATE(253),
    [sym_alter_table] = STATE(253),
    [sym_alter_type] = STATE(253),
    [sym_alter_user] = STATE(253),
    [sym_apply_batch] = STATE(253),
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
    STATE(455), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(253), 37,
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
    STATE(455), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(253), 37,
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
      aux_sym_primary_key_column_token1,
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
      aux_sym_primary_key_column_token1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [285] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(732), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(974), 1,
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
    STATE(41), 1,
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
  [390] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(861), 1,
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
    STATE(41), 1,
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
  [460] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(940), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(801), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(106), 1,
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
    STATE(41), 1,
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
  [600] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(843), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(867), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(430), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(896), 1,
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
    STATE(41), 1,
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
  [775] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(924), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(873), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(990), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(237), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(727), 1,
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
  [950] = 2,
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
  [983] = 2,
    STATE(554), 1,
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
  [1015] = 1,
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
  [1045] = 2,
    STATE(660), 1,
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
  [1077] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1109] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(33), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1140] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1171] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1202] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1229] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(32), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1260] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1287] = 8,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(56), 1,
      sym_where_spec,
    STATE(80), 1,
      sym_order_spec,
    STATE(183), 1,
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
  [1327] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(55), 1,
      sym_where_spec,
    STATE(73), 1,
      sym_order_spec,
    STATE(163), 1,
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
  [1367] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(59), 1,
      sym_where_spec,
    STATE(87), 1,
      sym_order_spec,
    STATE(199), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1407] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1433] = 3,
    ACTIONS(132), 1,
      anon_sym_LT,
    STATE(58), 1,
      sym_data_type_definition,
    ACTIONS(130), 21,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1463] = 3,
    ACTIONS(136), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1493] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1518] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1543] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1568] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1593] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1618] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1643] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1668] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1693] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(151), 20,
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
  [1722] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1747] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    STATE(51), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(157), 20,
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
  [1776] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1801] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(87), 1,
      sym_order_spec,
    STATE(199), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1835] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(73), 1,
      sym_order_spec,
    STATE(163), 1,
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
  [1869] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1893] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1917] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(76), 1,
      sym_order_spec,
    STATE(157), 1,
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
  [1951] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1975] = 1,
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
  [1999] = 2,
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
  [2024] = 2,
    ACTIONS(179), 1,
      aux_sym_relation_element_token1,
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
  [2049] = 1,
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
  [2072] = 2,
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
  [2097] = 2,
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
  [2122] = 2,
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
  [2147] = 1,
    ACTIONS(195), 19,
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
  [2169] = 4,
    ACTIONS(199), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(236), 1,
      sym_using_ttl_timestamp,
    ACTIONS(197), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2197] = 1,
    ACTIONS(203), 19,
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
  [2219] = 1,
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
  [2241] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(207), 17,
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
  [2267] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(199), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2295] = 9,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(478), 1,
      sym_expression,
    STATE(970), 1,
      sym_expression_list,
    STATE(591), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2333] = 4,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(224), 1,
      aux_sym_delete_statement_token2,
    STATE(226), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2361] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(228), 1,
      aux_sym_select_statement_token4,
    STATE(200), 1,
      sym_limit_spec,
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
  [2389] = 4,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(232), 1,
      aux_sym_delete_statement_token2,
    STATE(231), 1,
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
  [2417] = 3,
    STATE(217), 1,
      sym_user_super_user,
    ACTIONS(236), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(234), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2443] = 1,
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
  [2465] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(163), 1,
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
  [2493] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(240), 17,
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
  [2519] = 1,
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
  [2541] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2563] = 2,
    ACTIONS(249), 1,
      aux_sym_privilege_token2,
    ACTIONS(247), 18,
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
  [2587] = 1,
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
  [2609] = 9,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(478), 1,
      sym_expression,
    STATE(982), 1,
      sym_expression_list,
    STATE(591), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2647] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(157), 1,
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
  [2675] = 1,
    ACTIONS(253), 18,
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
  [2696] = 3,
    ACTIONS(257), 1,
      aux_sym_delete_statement_token2,
    STATE(228), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2721] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_role_with_repeat1,
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
  [2746] = 1,
    ACTIONS(263), 18,
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
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [2767] = 3,
    ACTIONS(267), 1,
      aux_sym_create_keyspace_token1,
    STATE(300), 1,
      sym_with_element,
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
  [2792] = 1,
    ACTIONS(269), 18,
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
  [2813] = 3,
    ACTIONS(273), 1,
      aux_sym_delete_statement_token2,
    STATE(276), 1,
      sym_if_spec,
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
  [2838] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(279), 1,
      sym_role_with,
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
  [2863] = 3,
    ACTIONS(281), 1,
      aux_sym_delete_statement_token2,
    STATE(234), 1,
      sym_if_spec,
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
  [2888] = 3,
    ACTIONS(285), 1,
      aux_sym_delete_statement_token2,
    STATE(250), 1,
      sym_if_spec,
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
  [2913] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(139), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [2938] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_create_function_repeat1,
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
  [2963] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_create_function_repeat1,
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
  [2988] = 1,
    ACTIONS(297), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3009] = 3,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    STATE(128), 1,
      aux_sym_table_options_repeat1,
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
  [3034] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3059] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(154), 1,
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
  [3084] = 3,
    ACTIONS(313), 1,
      aux_sym_delete_statement_token2,
    STATE(308), 1,
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
  [3109] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3130] = 1,
    ACTIONS(317), 18,
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
  [3151] = 3,
    ACTIONS(321), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3176] = 3,
    ACTIONS(325), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3201] = 3,
    ACTIONS(330), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
      aux_sym_table_options_repeat1,
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
  [3226] = 1,
    ACTIONS(240), 18,
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
  [3247] = 1,
    ACTIONS(333), 18,
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
  [3268] = 3,
    ACTIONS(337), 1,
      aux_sym_delete_statement_token2,
    STATE(285), 1,
      sym_if_spec,
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
  [3293] = 2,
    ACTIONS(341), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(339), 17,
      ts_builtin_sym_end,
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
  [3316] = 2,
    ACTIONS(345), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(343), 17,
      ts_builtin_sym_end,
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
  [3339] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(220), 1,
      sym_role_with,
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
  [3364] = 3,
    ACTIONS(351), 1,
      aux_sym_delete_statement_token2,
    STATE(249), 1,
      sym_if_spec,
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
  [3389] = 3,
    ACTIONS(355), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3414] = 3,
    ACTIONS(359), 1,
      aux_sym_delete_statement_token2,
    STATE(233), 1,
      sym_if_spec,
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
  [3439] = 1,
    ACTIONS(361), 18,
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
  [3460] = 3,
    ACTIONS(365), 1,
      aux_sym_delete_statement_token2,
    STATE(229), 1,
      sym_if_spec,
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
  [3485] = 3,
    ACTIONS(369), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_role_with_repeat1,
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
  [3510] = 3,
    ACTIONS(374), 1,
      aux_sym_list_roles_token2,
    ACTIONS(376), 1,
      aux_sym_list_roles_token3,
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
  [3535] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3560] = 3,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(238), 1,
      sym_using_ttl_timestamp,
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
  [3585] = 3,
    ACTIONS(384), 1,
      aux_sym_create_index_token3,
    ACTIONS(386), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3610] = 3,
    ACTIONS(390), 1,
      aux_sym_delete_statement_token2,
    STATE(295), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3635] = 3,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
      aux_sym_table_options_repeat1,
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
  [3660] = 3,
    ACTIONS(396), 1,
      aux_sym_delete_statement_token2,
    STATE(244), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3685] = 3,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      aux_sym_create_keyspace_token1,
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
  [3710] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3735] = 3,
    ACTIONS(408), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
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
  [3760] = 1,
    ACTIONS(207), 18,
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
  [3781] = 1,
    ACTIONS(410), 18,
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
  [3802] = 1,
    ACTIONS(412), 18,
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
  [3823] = 1,
    ACTIONS(247), 18,
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
  [3844] = 3,
    ACTIONS(267), 1,
      aux_sym_create_keyspace_token1,
    STATE(298), 1,
      sym_with_element,
    ACTIONS(414), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
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
  [3894] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_alter_type_rename_repeat1,
    ACTIONS(418), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(90), 1,
      aux_sym_role_with_repeat1,
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
  [3944] = 3,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(213), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3969] = 3,
    ACTIONS(426), 1,
      aux_sym_delete_statement_token2,
    STATE(245), 1,
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
  [3994] = 8,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(698), 1,
      sym_expression,
    STATE(591), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4029] = 3,
    ACTIONS(267), 1,
      aux_sym_create_keyspace_token1,
    STATE(221), 1,
      sym_with_element,
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
  [4054] = 3,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(232), 1,
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
  [4079] = 1,
    ACTIONS(432), 18,
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
  [4100] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(277), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4125] = 1,
    ACTIONS(436), 18,
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
  [4146] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(104), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4171] = 3,
    ACTIONS(442), 1,
      aux_sym_delete_statement_token2,
    STATE(242), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4196] = 3,
    ACTIONS(267), 1,
      aux_sym_create_keyspace_token1,
    STATE(251), 1,
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
  [4221] = 1,
    ACTIONS(446), 18,
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
  [4242] = 1,
    ACTIONS(448), 18,
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
  [4263] = 3,
    ACTIONS(452), 1,
      aux_sym_relation_elements_token1,
    STATE(154), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4288] = 1,
    ACTIONS(450), 17,
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
  [4308] = 1,
    ACTIONS(455), 17,
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
  [4328] = 2,
    ACTIONS(228), 1,
      aux_sym_select_statement_token4,
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
  [4350] = 1,
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
  [4370] = 2,
    ACTIONS(461), 1,
      anon_sym_DOT,
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
  [4392] = 1,
    ACTIONS(463), 17,
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
  [4412] = 2,
    ACTIONS(467), 1,
      anon_sym_DOT,
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
  [4434] = 1,
    ACTIONS(469), 17,
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
  [4454] = 2,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4476] = 2,
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
  [4498] = 2,
    ACTIONS(477), 1,
      anon_sym_DOT,
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
  [4520] = 2,
    ACTIONS(481), 1,
      aux_sym_list_roles_token2,
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
  [4542] = 2,
    ACTIONS(485), 1,
      aux_sym_list_roles_token3,
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
  [4564] = 2,
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
  [4586] = 2,
    ACTIONS(493), 1,
      aux_sym_create_keyspace_token1,
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
  [4608] = 2,
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
  [4630] = 1,
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
  [4650] = 1,
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
  [4670] = 1,
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
  [4690] = 1,
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
  [4710] = 1,
    ACTIONS(507), 17,
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
  [4730] = 1,
    ACTIONS(509), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4750] = 2,
    ACTIONS(513), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4772] = 1,
    ACTIONS(367), 17,
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
  [4792] = 2,
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
  [4814] = 2,
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
  [4836] = 2,
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
  [4858] = 2,
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
  [4880] = 2,
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
  [4902] = 1,
    ACTIONS(531), 17,
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
  [4922] = 2,
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
  [4944] = 2,
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
  [4966] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4986] = 1,
    ACTIONS(543), 17,
      ts_builtin_sym_end,
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
  [5006] = 1,
    ACTIONS(328), 17,
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
  [5026] = 1,
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
  [5046] = 1,
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
  [5066] = 1,
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
  [5086] = 2,
    ACTIONS(553), 1,
      aux_sym_relation_elements_token1,
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
  [5108] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5128] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5148] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5168] = 2,
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
  [5190] = 1,
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
  [5210] = 2,
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
  [5232] = 2,
    ACTIONS(567), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5254] = 1,
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
  [5273] = 1,
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
  [5292] = 1,
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
  [5311] = 1,
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
  [5330] = 1,
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
  [5349] = 1,
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
  [5368] = 1,
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
  [5387] = 1,
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
  [5406] = 1,
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
  [5425] = 1,
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
  [5444] = 1,
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
  [5463] = 1,
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
  [5482] = 1,
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
  [5501] = 1,
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
  [5520] = 1,
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
  [5539] = 1,
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
  [5558] = 1,
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
  [5577] = 1,
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
  [5596] = 1,
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
  [5615] = 1,
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
  [5634] = 1,
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
  [5653] = 1,
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
  [5672] = 1,
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
  [5691] = 1,
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
  [5710] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5729] = 1,
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
  [5748] = 1,
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
  [5767] = 1,
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
  [5786] = 1,
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
  [5805] = 1,
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
  [5824] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5843] = 1,
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
  [5862] = 1,
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
  [5881] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5900] = 1,
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
  [5919] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5938] = 1,
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
  [5957] = 1,
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
  [5976] = 1,
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
  [5995] = 1,
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
  [6014] = 1,
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
  [6033] = 1,
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
  [6052] = 1,
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
  [6071] = 1,
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
  [6090] = 1,
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
  [6109] = 1,
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
  [6128] = 1,
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
  [6147] = 1,
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
  [6166] = 1,
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
  [6185] = 1,
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
  [6204] = 1,
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
  [6223] = 1,
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
  [6242] = 2,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    ACTIONS(645), 15,
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
  [6263] = 1,
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
  [6282] = 1,
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
  [6301] = 1,
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
  [6320] = 1,
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
  [6339] = 1,
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
  [6358] = 9,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(661), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(694), 1,
      sym_constant,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(414), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6393] = 1,
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
  [6412] = 1,
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
  [6431] = 1,
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
  [6450] = 1,
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
  [6469] = 1,
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
  [6488] = 1,
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
  [6507] = 1,
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
  [6526] = 1,
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
  [6545] = 1,
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
  [6564] = 1,
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
  [6583] = 1,
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
  [6602] = 1,
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
  [6621] = 1,
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
  [6640] = 1,
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
  [6659] = 1,
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
  [6678] = 1,
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
  [6697] = 1,
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
  [6716] = 1,
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
  [6735] = 1,
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
  [6754] = 1,
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
  [6773] = 1,
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
  [6792] = 1,
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
  [6811] = 1,
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
  [6830] = 1,
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
  [6849] = 1,
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
  [6868] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6887] = 1,
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
  [6906] = 1,
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
  [6925] = 1,
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
  [6944] = 1,
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
  [6963] = 1,
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
  [6982] = 1,
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
  [7001] = 1,
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
  [7020] = 1,
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
  [7039] = 1,
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
  [7058] = 1,
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
  [7077] = 1,
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
  [7096] = 1,
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
  [7115] = 1,
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
  [7134] = 1,
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
  [7153] = 1,
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
  [7172] = 1,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7210] = 1,
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
  [7229] = 1,
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
  [7248] = 1,
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
  [7267] = 1,
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
  [7286] = 1,
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
  [7305] = 1,
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
  [7324] = 1,
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
  [7343] = 1,
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
  [7362] = 1,
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
  [7381] = 1,
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
  [7400] = 1,
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
  [7419] = 1,
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
  [7438] = 1,
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
  [7457] = 1,
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
  [7476] = 1,
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
  [7495] = 1,
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
  [7514] = 1,
    ACTIONS(765), 15,
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
  [7532] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(280), 1,
      sym_init_cond_definition,
    STATE(120), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7560] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(254), 1,
      sym_init_cond_definition,
    STATE(120), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7588] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(572), 1,
      sym_init_cond_definition,
    STATE(120), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7616] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(203), 1,
      sym_init_cond_definition,
    STATE(120), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7644] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(310), 1,
      sym_init_cond_definition,
    STATE(120), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7672] = 9,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(469), 1,
      sym_init_cond_hash_item,
    STATE(471), 1,
      sym_init_cond_list,
    STATE(473), 1,
      sym_constant,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7705] = 8,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(773), 1,
      anon_sym_STAR,
    ACTIONS(775), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(763), 1,
      sym_function_args,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(528), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7736] = 7,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(775), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(994), 1,
      sym_function_args,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(528), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7764] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(777), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(44), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7789] = 6,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(779), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(659), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(583), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(214), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7814] = 5,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(571), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7837] = 5,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(781), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7859] = 4,
    ACTIONS(785), 1,
      aux_sym_privilege_token1,
    ACTIONS(787), 1,
      aux_sym_resource_token4,
    STATE(126), 1,
      sym_privilege,
    ACTIONS(783), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7879] = 5,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(439), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7901] = 11,
    ACTIONS(791), 1,
      aux_sym_truncate_token2,
    ACTIONS(793), 1,
      aux_sym_create_index_token2,
    ACTIONS(795), 1,
      aux_sym_resource_token2,
    ACTIONS(797), 1,
      aux_sym_resource_token5,
    ACTIONS(799), 1,
      aux_sym_resource_token6,
    ACTIONS(801), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(803), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(805), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(807), 1,
      aux_sym_drop_type_token1,
    ACTIONS(809), 1,
      aux_sym_drop_user_token1,
    ACTIONS(811), 1,
      aux_sym_create_aggregate_token1,
  [7935] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(886), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7954] = 6,
    ACTIONS(813), 1,
      aux_sym_drop_index_token1,
    ACTIONS(815), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(817), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(819), 1,
      aux_sym_alter_table_rename_token1,
    STATE(274), 1,
      sym_alter_table_operation,
    STATE(275), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [7977] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(694), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7996] = 10,
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
  [8027] = 6,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      aux_sym_relation_element_token1,
    ACTIONS(849), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(851), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(843), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(845), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8050] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8069] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(473), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8088] = 3,
    ACTIONS(785), 1,
      aux_sym_privilege_token1,
    STATE(926), 1,
      sym_privilege,
    ACTIONS(783), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [8105] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(604), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8124] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(434), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8143] = 3,
    ACTIONS(785), 1,
      aux_sym_privilege_token1,
    STATE(925), 1,
      sym_privilege,
    ACTIONS(783), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [8160] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(563), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8179] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8198] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(523), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8217] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(152), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8236] = 4,
    ACTIONS(216), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(156), 1,
      sym_constant,
    ACTIONS(214), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8255] = 5,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      aux_sym_relation_element_token1,
    ACTIONS(849), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(843), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(845), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8275] = 6,
    ACTIONS(853), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(855), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(299), 1,
      sym_table_options,
    STATE(1009), 1,
      sym_table_option_name,
    STATE(102), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8296] = 6,
    ACTIONS(859), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(861), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(863), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(917), 1,
      sym_index_column_spec,
    STATE(918), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8317] = 6,
    ACTIONS(853), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(855), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(201), 1,
      sym_table_options,
    STATE(1009), 1,
      sym_table_option_name,
    STATE(102), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8338] = 6,
    ACTIONS(859), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(861), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(863), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(920), 1,
      sym_index_column_spec,
    STATE(918), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8359] = 6,
    ACTIONS(859), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(861), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(863), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(783), 1,
      sym_index_column_spec,
    STATE(918), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8380] = 6,
    ACTIONS(853), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(855), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(239), 1,
      sym_table_options,
    STATE(1009), 1,
      sym_table_option_name,
    STATE(102), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8401] = 6,
    ACTIONS(853), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(855), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(212), 1,
      sym_table_options,
    STATE(1009), 1,
      sym_table_option_name,
    STATE(102), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8422] = 6,
    ACTIONS(859), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(861), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(863), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(848), 1,
      sym_index_column_spec,
    STATE(918), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8443] = 5,
    ACTIONS(867), 1,
      aux_sym_privilege_token3,
    ACTIONS(869), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(871), 1,
      aux_sym_alter_table_rename_token1,
    STATE(282), 1,
      sym_alter_type_operation,
    STATE(283), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8461] = 7,
    ACTIONS(873), 1,
      aux_sym_truncate_token2,
    ACTIONS(875), 1,
      aux_sym_privilege_token1,
    ACTIONS(877), 1,
      aux_sym_resource_token2,
    ACTIONS(879), 1,
      aux_sym_resource_token5,
    ACTIONS(881), 1,
      aux_sym_resource_token6,
    ACTIONS(883), 1,
      sym_object_name,
    STATE(166), 1,
      sym_resource,
  [8483] = 7,
    ACTIONS(873), 1,
      aux_sym_truncate_token2,
    ACTIONS(875), 1,
      aux_sym_privilege_token1,
    ACTIONS(877), 1,
      aux_sym_resource_token2,
    ACTIONS(879), 1,
      aux_sym_resource_token5,
    ACTIONS(881), 1,
      aux_sym_resource_token6,
    ACTIONS(883), 1,
      sym_object_name,
    STATE(869), 1,
      sym_resource,
  [8505] = 5,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(885), 1,
      aux_sym__decimal_literal_token1,
    STATE(688), 1,
      sym__decimal_literal,
    STATE(687), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8523] = 6,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_object_name,
    STATE(45), 1,
      sym_relation_element,
    STATE(373), 1,
      sym_function_call,
    STATE(594), 1,
      sym_column_not_null,
    STATE(52), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8543] = 7,
    ACTIONS(873), 1,
      aux_sym_truncate_token2,
    ACTIONS(875), 1,
      aux_sym_privilege_token1,
    ACTIONS(877), 1,
      aux_sym_resource_token2,
    ACTIONS(879), 1,
      aux_sym_resource_token5,
    ACTIONS(881), 1,
      aux_sym_resource_token6,
    ACTIONS(883), 1,
      sym_object_name,
    STATE(865), 1,
      sym_resource,
  [8565] = 3,
    ACTIONS(895), 1,
      aux_sym_relation_element_token1,
    ACTIONS(891), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(893), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8579] = 6,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(53), 1,
      sym_relation_element,
    STATE(64), 1,
      sym_relation_elements,
    STATE(373), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8599] = 7,
    ACTIONS(899), 1,
      aux_sym_select_statement_token2,
    ACTIONS(901), 1,
      aux_sym_select_statement_token3,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(456), 1,
      sym_select_element,
    STATE(457), 1,
      sym_function_call,
    STATE(573), 1,
      sym_select_elements,
  [8621] = 3,
    ACTIONS(911), 1,
      aux_sym_relation_element_token1,
    ACTIONS(907), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(909), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8635] = 5,
    ACTIONS(853), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(855), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(1009), 1,
      sym_table_option_name,
    STATE(189), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8653] = 6,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(913), 1,
      aux_sym_select_statement_token3,
    STATE(456), 1,
      sym_select_element,
    STATE(457), 1,
      sym_function_call,
    STATE(615), 1,
      sym_select_elements,
  [8672] = 5,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(45), 1,
      sym_relation_element,
    STATE(373), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8689] = 2,
    ACTIONS(915), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(917), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8700] = 6,
    ACTIONS(919), 1,
      aux_sym_truncate_token2,
    ACTIONS(921), 1,
      aux_sym_resource_token2,
    ACTIONS(923), 1,
      aux_sym_resource_token6,
    ACTIONS(925), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(927), 1,
      aux_sym_drop_type_token1,
    ACTIONS(929), 1,
      aux_sym_drop_user_token1,
  [8719] = 1,
    ACTIONS(931), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8727] = 3,
    ACTIONS(935), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(530), 1,
      sym_using_timestamp_spec,
    ACTIONS(933), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8739] = 5,
    ACTIONS(937), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(939), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(941), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(943), 1,
      aux_sym_role_with_option_token4,
    STATE(178), 1,
      sym_role_with_option,
  [8755] = 3,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    ACTIONS(945), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(192), 2,
      sym_option_hash,
      sym_table_option_value,
  [8767] = 5,
    ACTIONS(949), 1,
      aux_sym_from_spec_token1,
    ACTIONS(951), 1,
      sym_object_name,
    STATE(424), 1,
      sym_from_spec,
    STATE(462), 1,
      sym_delete_column_item,
    STATE(674), 1,
      sym_delete_column_list,
  [8783] = 5,
    ACTIONS(953), 1,
      aux_sym_select_statement_token3,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
    STATE(464), 1,
      sym_insert_column_spec,
  [8799] = 1,
    ACTIONS(959), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8807] = 3,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(964), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8819] = 5,
    ACTIONS(966), 1,
      sym__string_literal,
    ACTIONS(968), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(970), 1,
      aux_sym_create_index_token3,
    ACTIONS(972), 1,
      sym_object_name,
    STATE(855), 1,
      sym_index_name,
  [8835] = 2,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(976), 4,
      anon_sym_LPAREN,
      aux_sym_privilege_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [8845] = 3,
    ACTIONS(935), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(501), 1,
      sym_using_timestamp_spec,
    ACTIONS(978), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8857] = 1,
    ACTIONS(980), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8865] = 5,
    ACTIONS(953), 1,
      aux_sym_select_statement_token3,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      aux_sym_insert_values_spec_token1,
    STATE(69), 1,
      sym_insert_values_spec,
    STATE(535), 1,
      sym_insert_column_spec,
  [8881] = 5,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(456), 1,
      sym_select_element,
    STATE(457), 1,
      sym_function_call,
    STATE(676), 1,
      sym_select_elements,
  [8897] = 1,
    ACTIONS(984), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8905] = 1,
    ACTIONS(986), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8913] = 5,
    ACTIONS(937), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(939), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(941), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(943), 1,
      aux_sym_role_with_option_token4,
    STATE(140), 1,
      sym_role_with_option,
  [8929] = 4,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(990), 1,
      anon_sym_DOT,
    ACTIONS(992), 1,
      aux_sym_select_element_token1,
    ACTIONS(988), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8943] = 1,
    ACTIONS(994), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8951] = 5,
    ACTIONS(949), 1,
      aux_sym_from_spec_token1,
    ACTIONS(951), 1,
      sym_object_name,
    STATE(446), 1,
      sym_from_spec,
    STATE(462), 1,
      sym_delete_column_item,
    STATE(577), 1,
      sym_delete_column_list,
  [8967] = 4,
    ACTIONS(996), 1,
      anon_sym_LPAREN,
    ACTIONS(998), 1,
      sym_object_name,
    STATE(845), 1,
      sym_primary_key_definition,
    STATE(846), 2,
      sym_compound_key,
      sym_composite_key,
  [8981] = 5,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(456), 1,
      sym_select_element,
    STATE(457), 1,
      sym_function_call,
    STATE(615), 1,
      sym_select_elements,
  [8997] = 1,
    ACTIONS(1000), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9005] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_where_spec,
    STATE(400), 1,
      aux_sym_update_repeat1,
  [9018] = 4,
    ACTIONS(1004), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1006), 1,
      sym_object_name,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9031] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9044] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_where_spec,
    STATE(413), 1,
      aux_sym_update_repeat1,
  [9057] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_where_spec,
    STATE(431), 1,
      aux_sym_update_repeat1,
  [9070] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1008), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9083] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_where_spec,
    STATE(429), 1,
      aux_sym_update_repeat1,
  [9096] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9109] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1010), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9122] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      sym_where_spec,
    STATE(405), 1,
      aux_sym_update_repeat1,
  [9135] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1012), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9148] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1014), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9161] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1018), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9172] = 4,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_function_args_repeat1,
  [9185] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9198] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9211] = 2,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1026), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9220] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1028), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9233] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_where_spec,
    STATE(432), 1,
      aux_sym_update_repeat1,
  [9246] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1030), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9259] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1032), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9272] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1034), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9285] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_where_spec,
    STATE(412), 1,
      aux_sym_update_repeat1,
  [9298] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1036), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9311] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1038), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9324] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1040), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9337] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(935), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(108), 1,
      sym_where_spec,
    STATE(689), 1,
      sym_using_timestamp_spec,
  [9350] = 4,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1044), 1,
      aux_sym_update_token2,
    STATE(913), 1,
      sym_using_ttl_timestamp,
  [9363] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1046), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9376] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(935), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(150), 1,
      sym_where_spec,
    STATE(582), 1,
      sym_using_timestamp_spec,
  [9389] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym_where_spec,
    STATE(449), 1,
      aux_sym_update_repeat1,
  [9402] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9415] = 3,
    ACTIONS(1050), 1,
      aux_sym_primary_key_column_token1,
    STATE(597), 1,
      sym_primary_key_column,
    ACTIONS(1048), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9426] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9439] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9452] = 4,
    ACTIONS(1052), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(601), 1,
      sym_column_definition,
    STATE(711), 1,
      sym_primary_key_element,
  [9465] = 1,
    ACTIONS(964), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9472] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1056), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9485] = 4,
    ACTIONS(1052), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(601), 1,
      sym_column_definition,
    STATE(951), 1,
      sym_primary_key_element,
  [9498] = 4,
    ACTIONS(1058), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1060), 1,
      aux_sym_primary_key_column_token1,
    STATE(481), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(483), 1,
      aux_sym_relation_elements_repeat1,
  [9511] = 1,
    ACTIONS(1062), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9518] = 4,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
    STATE(543), 1,
      aux_sym_assignment_set_repeat1,
  [9531] = 1,
    ACTIONS(1070), 4,
      anon_sym_LPAREN,
      aux_sym_privilege_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [9538] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1072), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9551] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1074), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9562] = 4,
    ACTIONS(1006), 1,
      sym_object_name,
    ACTIONS(1076), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [9575] = 3,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1081), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9586] = 4,
    ACTIONS(1058), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1083), 1,
      aux_sym_primary_key_column_token1,
    STATE(437), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(487), 1,
      aux_sym_relation_elements_repeat1,
  [9599] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(935), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(96), 1,
      sym_where_spec,
    STATE(620), 1,
      sym_using_timestamp_spec,
  [9612] = 4,
    ACTIONS(966), 1,
      sym__string_literal,
    ACTIONS(972), 1,
      sym_object_name,
    ACTIONS(1085), 1,
      aux_sym_create_index_token3,
    STATE(944), 1,
      sym_index_name,
  [9625] = 4,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1087), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      aux_sym_update_token2,
    STATE(781), 1,
      sym_using_ttl_timestamp,
  [9638] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [9651] = 3,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(553), 1,
      sym_typed_name,
  [9661] = 3,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      aux_sym_from_spec_token1,
    STATE(529), 1,
      aux_sym_delete_column_list_repeat1,
  [9671] = 3,
    ACTIONS(1099), 1,
      aux_sym_truncate_token2,
    ACTIONS(1101), 1,
      sym_object_name,
    STATE(311), 1,
      sym_table_name,
  [9681] = 3,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym_init_cond_hash_repeat1,
  [9691] = 3,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9701] = 3,
    ACTIONS(1113), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1115), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1117), 1,
      aux_sym_update_token1,
  [9711] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      aux_sym_from_spec_token1,
    STATE(494), 1,
      aux_sym_select_elements_repeat1,
  [9721] = 2,
    ACTIONS(1125), 1,
      aux_sym_select_element_token1,
    ACTIONS(1123), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9729] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym_init_cond_hash_repeat1,
  [9739] = 3,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9749] = 2,
    ACTIONS(1137), 1,
      anon_sym_LBRACK,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9757] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [9767] = 3,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      aux_sym_from_spec_token1,
    STATE(451), 1,
      aux_sym_delete_column_list_repeat1,
  [9777] = 3,
    ACTIONS(1101), 1,
      sym_object_name,
    ACTIONS(1143), 1,
      aux_sym_delete_statement_token2,
    STATE(876), 1,
      sym_table_name,
  [9787] = 3,
    ACTIONS(953), 1,
      aux_sym_select_statement_token3,
    ACTIONS(957), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
  [9797] = 3,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1145), 1,
      aux_sym_update_token2,
    STATE(1002), 1,
      sym_using_ttl_timestamp,
  [9807] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(404), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [9817] = 3,
    ACTIONS(1149), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1151), 1,
      sym_object_name,
    STATE(847), 1,
      sym_keyspace_name,
  [9827] = 2,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9835] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_init_cond_hash_repeat1,
  [9845] = 3,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_function_args_repeat1,
  [9855] = 3,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9865] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_relation_element_repeat1,
  [9875] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_assignment_set_repeat1,
  [9885] = 3,
    ACTIONS(1166), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(839), 1,
      sym_function_name,
  [9895] = 3,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(833), 1,
      sym_aggregate_name,
  [9905] = 3,
    ACTIONS(1174), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1176), 1,
      sym_object_name,
    STATE(829), 1,
      sym_trigger_name,
  [9915] = 3,
    ACTIONS(1178), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1180), 1,
      sym_object_name,
    STATE(827), 1,
      sym_type_name,
  [9925] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      aux_sym_expression_list_repeat1,
  [9935] = 3,
    ACTIONS(1186), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1188), 1,
      sym_object_name,
    STATE(651), 1,
      sym_user_name,
  [9945] = 3,
    ACTIONS(1190), 1,
      sym__string_literal,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1194), 1,
      sym_object_name,
  [9955] = 3,
    ACTIONS(1196), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1199), 1,
      aux_sym_primary_key_column_token1,
    STATE(481), 1,
      aux_sym_materialized_view_where_repeat1,
  [9965] = 3,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_column_definition_list_repeat1,
  [9975] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1205), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [9985] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_clustering_key_list_repeat1,
  [9995] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(959), 1,
      sym_return_mode,
  [10005] = 3,
    ACTIONS(1176), 1,
      sym_object_name,
    ACTIONS(1213), 1,
      aux_sym_delete_statement_token2,
    STATE(805), 1,
      sym_trigger_name,
  [10015] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1060), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [10025] = 3,
    ACTIONS(1188), 1,
      sym_object_name,
    ACTIONS(1215), 1,
      aux_sym_delete_statement_token2,
    STATE(214), 1,
      sym_user_name,
  [10035] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_clustering_key_list_repeat1,
  [10045] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_clustering_key_list_repeat1,
  [10055] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10065] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(937), 1,
      sym_return_mode,
  [10075] = 2,
    ACTIONS(1225), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1223), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10083] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_from_spec_token1,
    STATE(527), 1,
      aux_sym_select_elements_repeat1,
  [10093] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      aux_sym_clustering_key_list_repeat1,
  [10103] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
    STATE(496), 1,
      aux_sym_assignment_map_repeat1,
  [10113] = 3,
    ACTIONS(885), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1236), 1,
      sym__string_literal,
    STATE(754), 1,
      sym__decimal_literal,
  [10123] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(887), 1,
      sym_return_mode,
  [10133] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10143] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [10153] = 1,
    ACTIONS(933), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10159] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      aux_sym_create_function_repeat1,
  [10169] = 3,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RBRACE,
    STATE(503), 1,
      aux_sym_option_hash_repeat1,
  [10179] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(898), 1,
      sym_return_mode,
  [10189] = 3,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_replication_list_repeat1,
  [10199] = 3,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RBRACE,
    STATE(496), 1,
      aux_sym_assignment_map_repeat1,
  [10209] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      aux_sym_relation_element_repeat2,
  [10219] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [10229] = 3,
    ACTIONS(1258), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1260), 1,
      sym_object_name,
    STATE(753), 1,
      sym_materialized_view_name,
  [10239] = 2,
    ACTIONS(1262), 1,
      anon_sym_DOT,
    ACTIONS(1264), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10247] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10257] = 2,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    ACTIONS(1270), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [10265] = 3,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(457), 1,
      sym_function_call,
    STATE(677), 1,
      sym_select_element,
  [10275] = 3,
    ACTIONS(1093), 1,
      sym_object_name,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      sym_typed_name,
  [10285] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10295] = 3,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_GT,
    STATE(516), 1,
      aux_sym_data_type_definition_repeat1,
  [10305] = 3,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RBRACE,
    STATE(503), 1,
      aux_sym_option_hash_repeat1,
  [10315] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10325] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(856), 1,
      sym_return_mode,
  [10335] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_replication_list_repeat1,
  [10345] = 3,
    ACTIONS(885), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1289), 1,
      sym__string_literal,
    STATE(638), 1,
      sym__decimal_literal,
  [10355] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(407), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10365] = 3,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_assignment_map_repeat1,
  [10375] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(696), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10385] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(401), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10395] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_relation_element_repeat2,
  [10405] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      aux_sym_from_spec_token1,
    STATE(527), 1,
      aux_sym_select_elements_repeat1,
  [10415] = 3,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_function_args_repeat1,
  [10425] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      aux_sym_from_spec_token1,
    STATE(529), 1,
      aux_sym_delete_column_list_repeat1,
  [10435] = 1,
    ACTIONS(1305), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10441] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_create_function_repeat1,
  [10451] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_create_function_repeat1,
  [10461] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_GT,
    STATE(516), 1,
      aux_sym_data_type_definition_repeat1,
  [10471] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(398), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10481] = 3,
    ACTIONS(953), 1,
      aux_sym_select_statement_token3,
    ACTIONS(957), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
  [10491] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      aux_sym_where_spec_token1,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [10501] = 3,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_option_hash_repeat1,
  [10511] = 3,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(564), 1,
      sym_column_definition,
    STATE(986), 1,
      sym_column_definition_list,
  [10521] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      aux_sym_create_function_repeat1,
  [10531] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(795), 1,
      sym_return_mode,
  [10541] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RBRACE,
    STATE(520), 1,
      aux_sym_replication_list_repeat1,
  [10551] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      aux_sym_expression_list_repeat1,
  [10561] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [10571] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [10581] = 3,
    ACTIONS(1093), 1,
      sym_object_name,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      sym_typed_name,
  [10591] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(416), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10601] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1337), 1,
      aux_sym_delete_statement_token2,
    STATE(708), 1,
      sym_function_name,
  [10611] = 3,
    ACTIONS(1172), 1,
      sym_object_name,
    ACTIONS(1339), 1,
      aux_sym_delete_statement_token2,
    STATE(704), 1,
      sym_aggregate_name,
  [10621] = 3,
    ACTIONS(201), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1341), 1,
      aux_sym_update_token2,
    STATE(736), 1,
      sym_using_ttl_timestamp,
  [10631] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_create_function_repeat1,
  [10641] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(402), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10651] = 2,
    ACTIONS(1345), 1,
      aux_sym_resource_token1,
    ACTIONS(1347), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [10659] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_create_function_repeat1,
  [10669] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_GT,
    STATE(533), 1,
      aux_sym_data_type_definition_repeat1,
  [10679] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(729), 1,
      sym_return_mode,
  [10689] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(428), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10699] = 3,
    ACTIONS(1093), 1,
      sym_object_name,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      sym_typed_name,
  [10709] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_column_definition_list_repeat1,
  [10719] = 3,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_function_args_repeat1,
  [10729] = 3,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(564), 1,
      sym_column_definition,
    STATE(707), 1,
      sym_column_definition_list,
  [10739] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      aux_sym_relation_element_repeat1,
  [10749] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      aux_sym_expression_list_repeat1,
  [10759] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RBRACK,
    STATE(544), 1,
      aux_sym_assignment_set_repeat1,
  [10769] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_column_definition_list_repeat1,
  [10779] = 3,
    ACTIONS(1147), 1,
      sym_object_name,
    STATE(420), 1,
      sym_assignment_element,
    STATE(841), 1,
      sym_indexed_column,
  [10789] = 1,
    ACTIONS(1370), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10795] = 3,
    ACTIONS(1209), 1,
      aux_sym_create_function_token1,
    ACTIONS(1211), 1,
      aux_sym_return_mode_token1,
    STATE(888), 1,
      sym_return_mode,
  [10805] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_create_function_repeat1,
  [10815] = 2,
    ACTIONS(1374), 1,
      aux_sym_durable_writes_token1,
    STATE(211), 1,
      sym_durable_writes,
  [10822] = 1,
    ACTIONS(1106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10827] = 1,
    ACTIONS(1111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10832] = 1,
    ACTIONS(1376), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10837] = 2,
    ACTIONS(1378), 1,
      aux_sym_from_spec_token1,
    STATE(37), 1,
      sym_from_spec,
  [10844] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(61), 1,
      sym_table_name,
  [10851] = 2,
    ACTIONS(1382), 1,
      sym_object_name,
    STATE(570), 1,
      sym_init_cond_hash_item,
  [10858] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_assignment_tuple,
  [10865] = 2,
    ACTIONS(1378), 1,
      aux_sym_from_spec_token1,
    STATE(424), 1,
      sym_from_spec,
  [10872] = 2,
    ACTIONS(1384), 1,
      sym_object_name,
    STATE(906), 1,
      sym_function_name,
  [10879] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(387), 1,
      sym_table_name,
  [10886] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(243), 1,
      sym_table_name,
  [10893] = 2,
    ACTIONS(1386), 1,
      sym_object_name,
    STATE(909), 1,
      sym_keyspace_name,
  [10900] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(142), 1,
      sym_where_spec,
  [10907] = 1,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10912] = 2,
    ACTIONS(1388), 1,
      sym_object_name,
    STATE(155), 1,
      sym_if_condition,
  [10919] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(957), 1,
      sym_table_name,
  [10926] = 2,
    ACTIONS(1390), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1392), 1,
      sym_object_name,
  [10933] = 2,
    ACTIONS(1394), 1,
      sym_object_name,
    STATE(857), 1,
      sym_aggregate_name,
  [10940] = 1,
    ACTIONS(1396), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10945] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(594), 1,
      sym_column_not_null,
  [10952] = 1,
    ACTIONS(1400), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10957] = 1,
    ACTIONS(1402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10962] = 2,
    ACTIONS(1404), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1406), 1,
      sym_object_name,
  [10969] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(942), 1,
      sym_table_name,
  [10976] = 1,
    ACTIONS(1199), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10981] = 2,
    ACTIONS(1408), 1,
      sym_object_name,
    STATE(195), 1,
      sym_alter_type_rename_item,
  [10988] = 2,
    ACTIONS(1410), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1412), 1,
      sym_object_name,
  [10995] = 1,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11000] = 1,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11005] = 2,
    ACTIONS(1418), 1,
      aux_sym_primary_key_column_token1,
    STATE(137), 1,
      sym_primary_key_element,
  [11012] = 2,
    ACTIONS(1420), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1422), 1,
      sym_object_name,
  [11019] = 1,
    ACTIONS(1356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11024] = 2,
    ACTIONS(1424), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1426), 1,
      sym_object_name,
  [11031] = 2,
    ACTIONS(1428), 1,
      sym_object_name,
    STATE(962), 1,
      sym_clustering_key_list,
  [11038] = 1,
    ACTIONS(1430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11043] = 2,
    ACTIONS(1432), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1434), 1,
      sym_object_name,
  [11050] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(714), 1,
      sym_table_name,
  [11057] = 2,
    ACTIONS(1436), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1438), 1,
      sym_object_name,
  [11064] = 2,
    ACTIONS(1440), 1,
      aux_sym_where_spec_token1,
    STATE(599), 1,
      sym_materialized_view_where,
  [11071] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(336), 1,
      sym_table_name,
  [11078] = 2,
    ACTIONS(1386), 1,
      sym_object_name,
    STATE(780), 1,
      sym_keyspace_name,
  [11085] = 2,
    ACTIONS(1442), 1,
      sym_object_name,
    STATE(360), 1,
      sym_type_name,
  [11092] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(670), 1,
      sym_user_name,
  [11099] = 2,
    ACTIONS(1446), 1,
      sym__string_literal,
    STATE(541), 1,
      sym_replication_list_item,
  [11106] = 2,
    ACTIONS(1448), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_replication_list,
  [11113] = 2,
    ACTIONS(1378), 1,
      aux_sym_from_spec_token1,
    STATE(38), 1,
      sym_from_spec,
  [11120] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(608), 1,
      sym_table_name,
  [11127] = 2,
    ACTIONS(1374), 1,
      aux_sym_durable_writes_token1,
    STATE(241), 1,
      sym_durable_writes,
  [11134] = 2,
    ACTIONS(1428), 1,
      sym_object_name,
    STATE(921), 1,
      sym_clustering_key_list,
  [11141] = 2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(133), 1,
      sym_typed_name,
  [11148] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(108), 1,
      sym_where_spec,
  [11155] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(832), 1,
      sym_trigger_name,
  [11162] = 2,
    ACTIONS(1408), 1,
      sym_object_name,
    STATE(98), 1,
      sym_alter_type_rename_item,
  [11169] = 2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(99), 1,
      sym_typed_name,
  [11176] = 2,
    ACTIONS(1452), 1,
      sym_object_name,
    STATE(691), 1,
      sym_delete_column_item,
  [11183] = 2,
    ACTIONS(1418), 1,
      aux_sym_primary_key_column_token1,
    STATE(144), 1,
      sym_primary_key_element,
  [11190] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(445), 1,
      sym_column_not_null,
  [11197] = 2,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(537), 1,
      sym_option_hash_item,
  [11204] = 2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(100), 1,
      sym_typed_name,
  [11211] = 2,
    ACTIONS(1456), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1458), 1,
      sym_object_name,
  [11218] = 2,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_option_hash,
  [11225] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(713), 1,
      sym_table_name,
  [11232] = 1,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11237] = 2,
    ACTIONS(1448), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_replication_list,
  [11244] = 1,
    ACTIONS(1460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11249] = 1,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11254] = 2,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(204), 1,
      sym_trigger_class,
  [11261] = 2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(532), 1,
      sym_typed_name,
  [11268] = 1,
    ACTIONS(1464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11273] = 2,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
  [11280] = 2,
    ACTIONS(1384), 1,
      sym_object_name,
    STATE(741), 1,
      sym_function_name,
  [11287] = 2,
    ACTIONS(1470), 1,
      sym_object_name,
    STATE(890), 1,
      sym_partition_key_list,
  [11294] = 2,
    ACTIONS(1394), 1,
      sym_object_name,
    STATE(743), 1,
      sym_aggregate_name,
  [11301] = 2,
    ACTIONS(1472), 1,
      sym_object_name,
    STATE(703), 1,
      sym_materialized_view_name,
  [11308] = 2,
    ACTIONS(1474), 1,
      anon_sym_DOT,
    ACTIONS(1476), 1,
      anon_sym_LPAREN,
  [11315] = 1,
    ACTIONS(1478), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11320] = 2,
    ACTIONS(1480), 1,
      sym_object_name,
    STATE(862), 1,
      sym_column_list,
  [11327] = 2,
    ACTIONS(1442), 1,
      sym_object_name,
    STATE(830), 1,
      sym_type_name,
  [11334] = 2,
    ACTIONS(1482), 1,
      anon_sym_DOT,
    ACTIONS(1484), 1,
      anon_sym_LPAREN,
  [11341] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(380), 1,
      sym_table_name,
  [11348] = 2,
    ACTIONS(1486), 1,
      anon_sym_EQ,
    ACTIONS(1488), 1,
      anon_sym_LBRACK,
  [11355] = 2,
    ACTIONS(1490), 1,
      aux_sym_create_keyspace_token1,
    STATE(235), 1,
      sym_user_with,
  [11362] = 2,
    ACTIONS(1492), 1,
      aux_sym_resource_token5,
    ACTIONS(1494), 1,
      aux_sym_drop_aggregate_token1,
  [11369] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(654), 1,
      sym_user_name,
  [11376] = 2,
    ACTIONS(1490), 1,
      aux_sym_create_keyspace_token1,
    STATE(264), 1,
      sym_user_with,
  [11383] = 2,
    ACTIONS(885), 1,
      aux_sym__decimal_literal_token1,
    STATE(742), 1,
      sym__decimal_literal,
  [11390] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(272), 1,
      sym_user_name,
  [11397] = 2,
    ACTIONS(1440), 1,
      aux_sym_where_spec_token1,
    STATE(625), 1,
      sym_materialized_view_where,
  [11404] = 2,
    ACTIONS(1480), 1,
      sym_object_name,
    STATE(868), 1,
      sym_column_list,
  [11411] = 2,
    ACTIONS(1496), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1498), 1,
      sym_object_name,
  [11418] = 1,
    ACTIONS(1279), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11423] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(278), 1,
      sym_table_name,
  [11430] = 2,
    ACTIONS(1450), 1,
      sym_object_name,
    STATE(735), 1,
      sym_trigger_name,
  [11437] = 2,
    ACTIONS(1500), 1,
      sym__string_literal,
    ACTIONS(1502), 1,
      sym_object_name,
  [11444] = 2,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(632), 1,
      sym_option_hash_item,
  [11451] = 1,
    ACTIONS(1504), 2,
      sym__string_literal,
      sym__float_literal,
  [11456] = 2,
    ACTIONS(1446), 1,
      sym__string_literal,
    STATE(635), 1,
      sym_replication_list_item,
  [11463] = 2,
    ACTIONS(1448), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_replication_list,
  [11470] = 2,
    ACTIONS(1506), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1508), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11477] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(258), 1,
      sym_table_name,
  [11484] = 2,
    ACTIONS(1490), 1,
      aux_sym_create_keyspace_token1,
    STATE(284), 1,
      sym_user_with,
  [11491] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(507), 1,
      sym_assignment_tuple,
  [11498] = 2,
    ACTIONS(1510), 1,
      sym__string_literal,
    ACTIONS(1512), 1,
      sym_object_name,
  [11505] = 2,
    ACTIONS(1514), 1,
      sym__string_literal,
    ACTIONS(1516), 1,
      sym_object_name,
  [11512] = 2,
    ACTIONS(1378), 1,
      aux_sym_from_spec_token1,
    STATE(427), 1,
      sym_from_spec,
  [11519] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [11526] = 2,
    ACTIONS(1378), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [11533] = 1,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11538] = 2,
    ACTIONS(1518), 1,
      aux_sym_role_with_option_token1,
    STATE(78), 1,
      sym_user_password,
  [11545] = 1,
    ACTIONS(1520), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11550] = 1,
    ACTIONS(1522), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11555] = 2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(550), 1,
      sym_typed_name,
  [11562] = 1,
    ACTIONS(1524), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11567] = 2,
    ACTIONS(885), 1,
      aux_sym__decimal_literal_token1,
    STATE(162), 1,
      sym__decimal_literal,
  [11574] = 2,
    ACTIONS(1374), 1,
      aux_sym_durable_writes_token1,
    STATE(312), 1,
      sym_durable_writes,
  [11581] = 2,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(317), 1,
      sym_trigger_class,
  [11588] = 1,
    ACTIONS(1526), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11593] = 1,
    ACTIONS(1528), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11598] = 1,
    ACTIONS(1530), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11603] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(150), 1,
      sym_where_spec,
  [11610] = 2,
    ACTIONS(1532), 1,
      anon_sym_DOT,
    ACTIONS(1534), 1,
      aux_sym_select_element_token1,
  [11617] = 1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11622] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(526), 1,
      sym_assignment_tuple,
  [11629] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_assignment_tuple,
  [11636] = 1,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11641] = 2,
    ACTIONS(1480), 1,
      sym_object_name,
    STATE(976), 1,
      sym_column_list,
  [11648] = 1,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11653] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(657), 1,
      sym_table_name,
  [11660] = 1,
    ACTIONS(1329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11665] = 1,
    ACTIONS(1536), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11670] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(992), 1,
      sym_table_name,
  [11677] = 2,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(601), 1,
      sym_column_definition,
  [11684] = 1,
    ACTIONS(1538), 1,
      sym_object_name,
  [11688] = 1,
    ACTIONS(1540), 1,
      aux_sym_select_element_token1,
  [11692] = 1,
    ACTIONS(1542), 1,
      anon_sym_LPAREN,
  [11696] = 1,
    ACTIONS(1544), 1,
      aux_sym_create_keyspace_token2,
  [11700] = 1,
    ACTIONS(1546), 1,
      aux_sym_delete_statement_token3,
  [11704] = 1,
    ACTIONS(1548), 1,
      anon_sym_RPAREN,
  [11708] = 1,
    ACTIONS(1550), 1,
      anon_sym_LPAREN,
  [11712] = 1,
    ACTIONS(1552), 1,
      sym_object_name,
  [11716] = 1,
    ACTIONS(1554), 1,
      anon_sym_LPAREN,
  [11720] = 1,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
  [11724] = 1,
    ACTIONS(1558), 1,
      aux_sym_delete_statement_token3,
  [11728] = 1,
    ACTIONS(1560), 1,
      anon_sym_LPAREN,
  [11732] = 1,
    ACTIONS(1562), 1,
      anon_sym_LPAREN,
  [11736] = 1,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
  [11740] = 1,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
  [11744] = 1,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
  [11748] = 1,
    ACTIONS(1570), 1,
      aux_sym_delete_statement_token3,
  [11752] = 1,
    ACTIONS(1572), 1,
      anon_sym_EQ,
  [11756] = 1,
    ACTIONS(1574), 1,
      anon_sym_COLON,
  [11760] = 1,
    ACTIONS(1576), 1,
      sym_object_name,
  [11764] = 1,
    ACTIONS(1578), 1,
      aux_sym_insert_statement_token3,
  [11768] = 1,
    ACTIONS(1580), 1,
      sym_object_name,
  [11772] = 1,
    ACTIONS(1582), 1,
      aux_sym_resource_token2,
  [11776] = 1,
    ACTIONS(1584), 1,
      aux_sym_constant_token2,
  [11780] = 1,
    ACTIONS(1586), 1,
      aux_sym_return_mode_token2,
  [11784] = 1,
    ACTIONS(1588), 1,
      aux_sym_create_function_token2,
  [11788] = 1,
    ACTIONS(1590), 1,
      sym_object_name,
  [11792] = 1,
    ACTIONS(1592), 1,
      aux_sym_create_function_token1,
  [11796] = 1,
    ACTIONS(1594), 1,
      anon_sym_COLON,
  [11800] = 1,
    ACTIONS(1596), 1,
      sym_object_name,
  [11804] = 1,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
  [11808] = 1,
    ACTIONS(1600), 1,
      aux_sym_create_aggregate_token4,
  [11812] = 1,
    ACTIONS(1602), 1,
      aux_sym_delete_statement_token3,
  [11816] = 1,
    ACTIONS(1604), 1,
      aux_sym_create_index_token3,
  [11820] = 1,
    ACTIONS(1606), 1,
      aux_sym_update_token2,
  [11824] = 1,
    ACTIONS(1608), 1,
      aux_sym_select_statement_token1,
  [11828] = 1,
    ACTIONS(1610), 1,
      aux_sym_insert_statement_token3,
  [11832] = 1,
    ACTIONS(1612), 1,
      anon_sym_LPAREN,
  [11836] = 1,
    ACTIONS(1614), 1,
      aux_sym_delete_statement_token3,
  [11840] = 1,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
  [11844] = 1,
    ACTIONS(1618), 1,
      anon_sym_RBRACK,
  [11848] = 1,
    ACTIONS(1620), 1,
      anon_sym_LPAREN,
  [11852] = 1,
    ACTIONS(1622), 1,
      aux_sym_create_aggregate_token3,
  [11856] = 1,
    ACTIONS(1624), 1,
      aux_sym_delete_statement_token3,
  [11860] = 1,
    ACTIONS(1626), 1,
      sym_object_name,
  [11864] = 1,
    ACTIONS(1628), 1,
      sym_object_name,
  [11868] = 1,
    ACTIONS(1630), 1,
      anon_sym_LPAREN,
  [11872] = 1,
    ACTIONS(1632), 1,
      aux_sym_insert_statement_token3,
  [11876] = 1,
    ACTIONS(1634), 1,
      aux_sym__decimal_literal_token1,
  [11880] = 1,
    ACTIONS(1636), 1,
      sym_object_name,
  [11884] = 1,
    ACTIONS(1638), 1,
      aux_sym_select_statement_token5,
  [11888] = 1,
    ACTIONS(1640), 1,
      aux_sym_select_element_token1,
  [11892] = 1,
    ACTIONS(1642), 1,
      anon_sym_RBRACK,
  [11896] = 1,
    ACTIONS(1644), 1,
      aux_sym_delete_statement_token3,
  [11900] = 1,
    ACTIONS(1646), 1,
      aux_sym_order_spec_token2,
  [11904] = 1,
    ACTIONS(1648), 1,
      sym_object_name,
  [11908] = 1,
    ACTIONS(1650), 1,
      sym_object_name,
  [11912] = 1,
    ACTIONS(1652), 1,
      aux_sym_delete_statement_token3,
  [11916] = 1,
    ACTIONS(1654), 1,
      aux_sym_select_statement_token5,
  [11920] = 1,
    ACTIONS(1656), 1,
      aux_sym_delete_statement_token3,
  [11924] = 1,
    ACTIONS(1658), 1,
      sym_object_name,
  [11928] = 1,
    ACTIONS(1660), 1,
      anon_sym_RPAREN,
  [11932] = 1,
    ACTIONS(1662), 1,
      sym_object_name,
  [11936] = 1,
    ACTIONS(1664), 1,
      aux_sym_insert_statement_token3,
  [11940] = 1,
    ACTIONS(1666), 1,
      aux_sym_using_timestamp_spec_token2,
  [11944] = 1,
    ACTIONS(1668), 1,
      aux_sym_delete_statement_token3,
  [11948] = 1,
    ACTIONS(1670), 1,
      sym__string_literal,
  [11952] = 1,
    ACTIONS(1672), 1,
      aux_sym_select_statement_token5,
  [11956] = 1,
    ACTIONS(1674), 1,
      aux_sym_order_spec_token2,
  [11960] = 1,
    ACTIONS(1676), 1,
      aux_sym_delete_statement_token3,
  [11964] = 1,
    ACTIONS(1678), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11968] = 1,
    ACTIONS(1680), 1,
      sym_object_name,
  [11972] = 1,
    ACTIONS(1682), 1,
      sym_object_name,
  [11976] = 1,
    ACTIONS(1684), 1,
      sym_object_name,
  [11980] = 1,
    ACTIONS(1686), 1,
      sym_object_name,
  [11984] = 1,
    ACTIONS(1688), 1,
      sym_object_name,
  [11988] = 1,
    ACTIONS(1690), 1,
      sym_object_name,
  [11992] = 1,
    ACTIONS(1692), 1,
      sym_object_name,
  [11996] = 1,
    ACTIONS(1694), 1,
      aux_sym_create_keyspace_token1,
  [12000] = 1,
    ACTIONS(1696), 1,
      aux_sym_update_token2,
  [12004] = 1,
    ACTIONS(1698), 1,
      sym_object_name,
  [12008] = 1,
    ACTIONS(1700), 1,
      anon_sym_RPAREN,
  [12012] = 1,
    ACTIONS(1702), 1,
      sym_object_name,
  [12016] = 1,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
  [12020] = 1,
    ACTIONS(1706), 1,
      anon_sym_RPAREN,
  [12024] = 1,
    ACTIONS(1708), 1,
      anon_sym_RPAREN,
  [12028] = 1,
    ACTIONS(1710), 1,
      sym_object_name,
  [12032] = 1,
    ACTIONS(1712), 1,
      sym_object_name,
  [12036] = 1,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
  [12040] = 1,
    ACTIONS(1716), 1,
      sym_object_name,
  [12044] = 1,
    ACTIONS(1718), 1,
      sym_object_name,
  [12048] = 1,
    ACTIONS(1720), 1,
      anon_sym_EQ,
  [12052] = 1,
    ACTIONS(1722), 1,
      aux_sym_delete_statement_token3,
  [12056] = 1,
    ACTIONS(1724), 1,
      aux_sym_create_function_token1,
  [12060] = 1,
    ACTIONS(1726), 1,
      sym_object_name,
  [12064] = 1,
    ACTIONS(1728), 1,
      anon_sym_EQ,
  [12068] = 1,
    ACTIONS(1730), 1,
      aux_sym_return_mode_token2,
  [12072] = 1,
    ACTIONS(1732), 1,
      aux_sym_create_function_token1,
  [12076] = 1,
    ACTIONS(1734), 1,
      sym_object_name,
  [12080] = 1,
    ACTIONS(1736), 1,
      aux_sym_create_function_token2,
  [12084] = 1,
    ACTIONS(1738), 1,
      aux_sym_delete_statement_token3,
  [12088] = 1,
    ACTIONS(1740), 1,
      sym_object_name,
  [12092] = 1,
    ACTIONS(1742), 1,
      sym_object_name,
  [12096] = 1,
    ACTIONS(1744), 1,
      aux_sym_create_index_token3,
  [12100] = 1,
    ACTIONS(1746), 1,
      aux_sym_delete_statement_token3,
  [12104] = 1,
    ACTIONS(1748), 1,
      aux_sym_create_aggregate_token3,
  [12108] = 1,
    ACTIONS(1750), 1,
      aux_sym_delete_statement_token3,
  [12112] = 1,
    ACTIONS(1752), 1,
      sym_object_name,
  [12116] = 1,
    ACTIONS(1754), 1,
      sym_object_name,
  [12120] = 1,
    ACTIONS(1756), 1,
      sym_object_name,
  [12124] = 1,
    ACTIONS(1758), 1,
      sym_object_name,
  [12128] = 1,
    ACTIONS(1760), 1,
      anon_sym_EQ,
  [12132] = 1,
    ACTIONS(1762), 1,
      aux_sym_delete_statement_token3,
  [12136] = 1,
    ACTIONS(1764), 1,
      sym_object_name,
  [12140] = 1,
    ACTIONS(1766), 1,
      aux_sym_delete_statement_token3,
  [12144] = 1,
    ACTIONS(1768), 1,
      aux_sym_delete_statement_token3,
  [12148] = 1,
    ACTIONS(1770), 1,
      sym_object_name,
  [12152] = 1,
    ACTIONS(1772), 1,
      aux_sym_delete_statement_token3,
  [12156] = 1,
    ACTIONS(1774), 1,
      aux_sym_delete_statement_token3,
  [12160] = 1,
    ACTIONS(1776), 1,
      aux_sym_delete_statement_token3,
  [12164] = 1,
    ACTIONS(1778), 1,
      aux_sym_delete_statement_token3,
  [12168] = 1,
    ACTIONS(1780), 1,
      aux_sym__decimal_literal_token1,
  [12172] = 1,
    ACTIONS(1782), 1,
      aux_sym__decimal_literal_token1,
  [12176] = 1,
    ACTIONS(1784), 1,
      aux_sym__decimal_literal_token1,
  [12180] = 1,
    ACTIONS(1786), 1,
      aux_sym_insert_statement_token3,
  [12184] = 1,
    ACTIONS(1788), 1,
      anon_sym_LPAREN,
  [12188] = 1,
    ACTIONS(1790), 1,
      aux_sym_insert_statement_token3,
  [12192] = 1,
    ACTIONS(1792), 1,
      aux_sym_using_timestamp_spec_token1,
  [12196] = 1,
    ACTIONS(1794), 1,
      anon_sym_LPAREN,
  [12200] = 1,
    ACTIONS(1796), 1,
      aux_sym_insert_statement_token3,
  [12204] = 1,
    ACTIONS(1798), 1,
      aux_sym_using_timestamp_spec_token1,
  [12208] = 1,
    ACTIONS(1800), 1,
      anon_sym_LPAREN,
  [12212] = 1,
    ACTIONS(1802), 1,
      aux_sym__decimal_literal_token1,
  [12216] = 1,
    ACTIONS(1804), 1,
      aux_sym_insert_statement_token3,
  [12220] = 1,
    ACTIONS(1806), 1,
      sym_object_name,
  [12224] = 1,
    ACTIONS(1808), 1,
      aux_sym_insert_statement_token3,
  [12228] = 1,
    ACTIONS(1810), 1,
      aux_sym_select_element_token1,
  [12232] = 1,
    ACTIONS(1812), 1,
      anon_sym_LPAREN,
  [12236] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [12240] = 1,
    ACTIONS(1816), 1,
      anon_sym_EQ,
  [12244] = 1,
    ACTIONS(1818), 1,
      aux_sym_insert_statement_token3,
  [12248] = 1,
    ACTIONS(1820), 1,
      anon_sym_RPAREN,
  [12252] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [12256] = 1,
    ACTIONS(1824), 1,
      anon_sym_RPAREN,
  [12260] = 1,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
  [12264] = 1,
    ACTIONS(1828), 1,
      aux_sym_create_keyspace_token1,
  [12268] = 1,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
  [12272] = 1,
    ACTIONS(1832), 1,
      aux_sym_create_keyspace_token1,
  [12276] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [12280] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [12284] = 1,
    ACTIONS(1838), 1,
      aux_sym_insert_statement_token3,
  [12288] = 1,
    ACTIONS(1840), 1,
      aux_sym_create_aggregate_token3,
  [12292] = 1,
    ACTIONS(1842), 1,
      sym__boolean_literal,
  [12296] = 1,
    ACTIONS(1844), 1,
      aux_sym_create_index_token3,
  [12300] = 1,
    ACTIONS(1846), 1,
      aux_sym_create_function_token1,
  [12304] = 1,
    ACTIONS(1848), 1,
      anon_sym_LPAREN,
  [12308] = 1,
    ACTIONS(1850), 1,
      aux_sym_create_function_token1,
  [12312] = 1,
    ACTIONS(1852), 1,
      aux_sym_select_element_token1,
  [12316] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [12320] = 1,
    ACTIONS(1856), 1,
      aux_sym_create_function_token2,
  [12324] = 1,
    ACTIONS(1858), 1,
      aux_sym_from_spec_token1,
  [12328] = 1,
    ACTIONS(1860), 1,
      sym_object_name,
  [12332] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [12336] = 1,
    ACTIONS(1864), 1,
      aux_sym_grant_token2,
  [12340] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [12344] = 1,
    ACTIONS(1868), 1,
      aux_sym_create_aggregate_token5,
  [12348] = 1,
    ACTIONS(1870), 1,
      aux_sym_from_spec_token1,
  [12352] = 1,
    ACTIONS(1872), 1,
      aux_sym_from_spec_token1,
  [12356] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [12360] = 1,
    ACTIONS(1876), 1,
      aux_sym_insert_statement_token3,
  [12364] = 1,
    ACTIONS(1878), 1,
      sym__boolean_literal,
  [12368] = 1,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
  [12372] = 1,
    ACTIONS(1882), 1,
      aux_sym_create_aggregate_token4,
  [12376] = 1,
    ACTIONS(1884), 1,
      aux_sym_create_index_token3,
  [12380] = 1,
    ACTIONS(1886), 1,
      anon_sym_LPAREN,
  [12384] = 1,
    ACTIONS(1888), 1,
      aux_sym_insert_statement_token3,
  [12388] = 1,
    ACTIONS(1890), 1,
      anon_sym_RPAREN,
  [12392] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [12396] = 1,
    ACTIONS(1894), 1,
      sym__boolean_literal,
  [12400] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [12404] = 1,
    ACTIONS(1898), 1,
      aux_sym_create_keyspace_token2,
  [12408] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [12412] = 1,
    ACTIONS(1902), 1,
      aux_sym_using_timestamp_spec_token2,
  [12416] = 1,
    ACTIONS(1904), 1,
      sym__string_literal,
  [12420] = 1,
    ACTIONS(1906), 1,
      anon_sym_COLON,
  [12424] = 1,
    ACTIONS(1908), 1,
      aux_sym_create_function_token1,
  [12428] = 1,
    ACTIONS(1910), 1,
      aux_sym_create_function_token1,
  [12432] = 1,
    ACTIONS(1912), 1,
      aux_sym_create_index_token3,
  [12436] = 1,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
  [12440] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [12444] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [12448] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [12452] = 1,
    ACTIONS(1922), 1,
      aux_sym_select_statement_token1,
  [12456] = 1,
    ACTIONS(1924), 1,
      anon_sym_STAR,
  [12460] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_function_token2,
  [12464] = 1,
    ACTIONS(1928), 1,
      aux_sym_constant_token2,
  [12468] = 1,
    ACTIONS(1930), 1,
      aux_sym_create_function_token1,
  [12472] = 1,
    ACTIONS(1932), 1,
      sym__code_block,
  [12476] = 1,
    ACTIONS(1934), 1,
      aux_sym_select_element_token1,
  [12480] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [12484] = 1,
    ACTIONS(1938), 1,
      aux_sym_create_aggregate_token4,
  [12488] = 1,
    ACTIONS(1940), 1,
      sym_object_name,
  [12492] = 1,
    ACTIONS(1942), 1,
      aux_sym_constant_token2,
  [12496] = 1,
    ACTIONS(851), 1,
      aux_sym_column_not_null_token1,
  [12500] = 1,
    ACTIONS(1944), 1,
      anon_sym_LPAREN,
  [12504] = 1,
    ACTIONS(1946), 1,
      aux_sym_create_index_token3,
  [12508] = 1,
    ACTIONS(1948), 1,
      sym_object_name,
  [12512] = 1,
    ACTIONS(1950), 1,
      aux_sym_create_keyspace_token1,
  [12516] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_aggregate_token3,
  [12520] = 1,
    ACTIONS(1954), 1,
      sym_object_name,
  [12524] = 1,
    ACTIONS(1956), 1,
      aux_sym_insert_statement_token2,
  [12528] = 1,
    ACTIONS(1958), 1,
      aux_sym_update_token2,
  [12532] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_keyspace_token2,
  [12536] = 1,
    ACTIONS(1962), 1,
      aux_sym_drop_materialized_view_token2,
  [12540] = 1,
    ACTIONS(1964), 1,
      sym_object_name,
  [12544] = 1,
    ACTIONS(1966), 1,
      anon_sym_RPAREN,
  [12548] = 1,
    ACTIONS(1968), 1,
      anon_sym_RPAREN,
  [12552] = 1,
    ACTIONS(1970), 1,
      anon_sym_COMMA,
  [12556] = 1,
    ACTIONS(1972), 1,
      anon_sym_RPAREN,
  [12560] = 1,
    ACTIONS(1974), 1,
      anon_sym_RPAREN,
  [12564] = 1,
    ACTIONS(1976), 1,
      aux_sym_select_statement_token5,
  [12568] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [12572] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_function_token2,
  [12576] = 1,
    ACTIONS(1982), 1,
      aux_sym_create_index_token3,
  [12580] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_index_token3,
  [12584] = 1,
    ACTIONS(1986), 1,
      sym__code_block,
  [12588] = 1,
    ACTIONS(1988), 1,
      aux_sym_select_element_token1,
  [12592] = 1,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
  [12596] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_aggregate_token6,
  [12600] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [12604] = 1,
    ACTIONS(1996), 1,
      aux_sym_insert_statement_token3,
  [12608] = 1,
    ACTIONS(1998), 1,
      sym_object_name,
  [12612] = 1,
    ACTIONS(2000), 1,
      anon_sym_LPAREN,
  [12616] = 1,
    ACTIONS(2002), 1,
      anon_sym_LPAREN,
  [12620] = 1,
    ACTIONS(2004), 1,
      aux_sym_drop_materialized_view_token2,
  [12624] = 1,
    ACTIONS(2006), 1,
      aux_sym_create_function_token1,
  [12628] = 1,
    ACTIONS(2008), 1,
      anon_sym_LPAREN,
  [12632] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [12636] = 1,
    ACTIONS(2012), 1,
      aux_sym_create_aggregate_token5,
  [12640] = 1,
    ACTIONS(2014), 1,
      sym_object_name,
  [12644] = 1,
    ACTIONS(2016), 1,
      anon_sym_LPAREN,
  [12648] = 1,
    ACTIONS(2018), 1,
      aux_sym_delete_statement_token3,
  [12652] = 1,
    ACTIONS(2020), 1,
      aux_sym_create_index_token3,
  [12656] = 1,
    ACTIONS(2022), 1,
      aux_sym_select_element_token1,
  [12660] = 1,
    ACTIONS(2024), 1,
      sym_object_name,
  [12664] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token2,
  [12668] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [12672] = 1,
    ACTIONS(2030), 1,
      sym__code_block,
  [12676] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_aggregate_token5,
  [12680] = 1,
    ACTIONS(2034), 1,
      anon_sym_RPAREN,
  [12684] = 1,
    ACTIONS(2036), 1,
      aux_sym_relation_contains_key_token2,
  [12688] = 1,
    ACTIONS(2038), 1,
      aux_sym_constant_token2,
  [12692] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [12696] = 1,
    ACTIONS(2042), 1,
      aux_sym_relation_contains_key_token2,
  [12700] = 1,
    ACTIONS(2044), 1,
      anon_sym_RPAREN,
  [12704] = 1,
    ACTIONS(2046), 1,
      anon_sym_LPAREN,
  [12708] = 1,
    ACTIONS(2048), 1,
      aux_sym_delete_statement_token3,
  [12712] = 1,
    ACTIONS(2050), 1,
      aux_sym_create_function_token1,
  [12716] = 1,
    ACTIONS(2052), 1,
      aux_sym_create_aggregate_token4,
  [12720] = 1,
    ACTIONS(2054), 1,
      sym_object_name,
  [12724] = 1,
    ACTIONS(2056), 1,
      anon_sym_RPAREN,
  [12728] = 1,
    ACTIONS(2058), 1,
      sym__code_block,
  [12732] = 1,
    ACTIONS(2060), 1,
      aux_sym_select_element_token1,
  [12736] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [12740] = 1,
    ACTIONS(2064), 1,
      aux_sym_delete_statement_token3,
  [12744] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [12748] = 1,
    ACTIONS(2068), 1,
      aux_sym_create_aggregate_token2,
  [12752] = 1,
    ACTIONS(2070), 1,
      aux_sym_insert_statement_token3,
  [12756] = 1,
    ACTIONS(2072), 1,
      anon_sym_RPAREN,
  [12760] = 1,
    ACTIONS(2074), 1,
      anon_sym_LPAREN,
  [12764] = 1,
    ACTIONS(2076), 1,
      anon_sym_LPAREN,
  [12768] = 1,
    ACTIONS(2078), 1,
      anon_sym_EQ,
  [12772] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_function_token2,
  [12776] = 1,
    ACTIONS(2082), 1,
      aux_sym_drop_materialized_view_token2,
  [12780] = 1,
    ACTIONS(2084), 1,
      anon_sym_RPAREN,
  [12784] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_aggregate_token6,
  [12788] = 1,
    ACTIONS(2088), 1,
      aux_sym_insert_statement_token3,
  [12792] = 1,
    ACTIONS(2090), 1,
      sym__code_block,
  [12796] = 1,
    ACTIONS(2092), 1,
      aux_sym_select_element_token1,
  [12800] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_aggregate_token6,
  [12804] = 1,
    ACTIONS(2096), 1,
      anon_sym_RPAREN,
  [12808] = 1,
    ACTIONS(2098), 1,
      anon_sym_COLON,
  [12812] = 1,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
  [12816] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [12820] = 1,
    ACTIONS(2102), 1,
      anon_sym_RPAREN,
  [12824] = 1,
    ACTIONS(2104), 1,
      aux_sym_select_statement_token5,
  [12828] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [12832] = 1,
    ACTIONS(2108), 1,
      aux_sym_create_function_token2,
  [12836] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_aggregate_token5,
  [12840] = 1,
    ACTIONS(2112), 1,
      anon_sym_EQ,
  [12844] = 1,
    ACTIONS(2114), 1,
      anon_sym_LPAREN,
  [12848] = 1,
    ACTIONS(2116), 1,
      sym__code_block,
  [12852] = 1,
    ACTIONS(2118), 1,
      anon_sym_RPAREN,
  [12856] = 1,
    ACTIONS(2120), 1,
      aux_sym_begin_batch_token4,
  [12860] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [12864] = 1,
    ACTIONS(2124), 1,
      aux_sym_grant_token2,
  [12868] = 1,
    ACTIONS(2126), 1,
      anon_sym_EQ,
  [12872] = 1,
    ACTIONS(2128), 1,
      aux_sym_drop_type_token1,
  [12876] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [12880] = 1,
    ACTIONS(2132), 1,
      anon_sym_LPAREN,
  [12884] = 1,
    ACTIONS(2134), 1,
      aux_sym_update_token2,
  [12888] = 1,
    ACTIONS(2136), 1,
      anon_sym_EQ,
  [12892] = 1,
    ACTIONS(2138), 1,
      aux_sym_select_element_token1,
  [12896] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [12900] = 1,
    ACTIONS(2142), 1,
      sym_object_name,
  [12904] = 1,
    ACTIONS(2144), 1,
      aux_sym_grant_token2,
  [12908] = 1,
    ACTIONS(2146), 1,
      anon_sym_LPAREN,
  [12912] = 1,
    ACTIONS(2148), 1,
      anon_sym_EQ,
  [12916] = 1,
    ACTIONS(2150), 1,
      anon_sym_EQ,
  [12920] = 1,
    ACTIONS(2152), 1,
      anon_sym_EQ,
  [12924] = 1,
    ACTIONS(2154), 1,
      anon_sym_EQ,
  [12928] = 1,
    ACTIONS(2156), 1,
      ts_builtin_sym_end,
  [12932] = 1,
    ACTIONS(2158), 1,
      aux_sym_order_spec_token1,
  [12936] = 1,
    ACTIONS(2160), 1,
      aux_sym_select_statement_token5,
  [12940] = 1,
    ACTIONS(2162), 1,
      aux_sym_begin_batch_token4,
  [12944] = 1,
    ACTIONS(2164), 1,
      aux_sym_compact_storage_token2,
  [12948] = 1,
    ACTIONS(2166), 1,
      sym__code_block,
  [12952] = 1,
    ACTIONS(2168), 1,
      aux_sym_select_element_token1,
  [12956] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_aggregate_token6,
  [12960] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [12964] = 1,
    ACTIONS(2174), 1,
      sym__code_block,
  [12968] = 1,
    ACTIONS(2176), 1,
      sym_object_name,
  [12972] = 1,
    ACTIONS(2178), 1,
      aux_sym_compact_storage_token2,
  [12976] = 1,
    ACTIONS(2180), 1,
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
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1015,
  [SMALL_STATE(29)] = 1045,
  [SMALL_STATE(30)] = 1077,
  [SMALL_STATE(31)] = 1109,
  [SMALL_STATE(32)] = 1140,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1202,
  [SMALL_STATE(35)] = 1229,
  [SMALL_STATE(36)] = 1260,
  [SMALL_STATE(37)] = 1287,
  [SMALL_STATE(38)] = 1327,
  [SMALL_STATE(39)] = 1367,
  [SMALL_STATE(40)] = 1407,
  [SMALL_STATE(41)] = 1433,
  [SMALL_STATE(42)] = 1463,
  [SMALL_STATE(43)] = 1493,
  [SMALL_STATE(44)] = 1518,
  [SMALL_STATE(45)] = 1543,
  [SMALL_STATE(46)] = 1568,
  [SMALL_STATE(47)] = 1593,
  [SMALL_STATE(48)] = 1618,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1776,
  [SMALL_STATE(55)] = 1801,
  [SMALL_STATE(56)] = 1835,
  [SMALL_STATE(57)] = 1869,
  [SMALL_STATE(58)] = 1893,
  [SMALL_STATE(59)] = 1917,
  [SMALL_STATE(60)] = 1951,
  [SMALL_STATE(61)] = 1975,
  [SMALL_STATE(62)] = 1999,
  [SMALL_STATE(63)] = 2024,
  [SMALL_STATE(64)] = 2049,
  [SMALL_STATE(65)] = 2072,
  [SMALL_STATE(66)] = 2097,
  [SMALL_STATE(67)] = 2122,
  [SMALL_STATE(68)] = 2147,
  [SMALL_STATE(69)] = 2169,
  [SMALL_STATE(70)] = 2197,
  [SMALL_STATE(71)] = 2219,
  [SMALL_STATE(72)] = 2241,
  [SMALL_STATE(73)] = 2267,
  [SMALL_STATE(74)] = 2295,
  [SMALL_STATE(75)] = 2333,
  [SMALL_STATE(76)] = 2361,
  [SMALL_STATE(77)] = 2389,
  [SMALL_STATE(78)] = 2417,
  [SMALL_STATE(79)] = 2443,
  [SMALL_STATE(80)] = 2465,
  [SMALL_STATE(81)] = 2493,
  [SMALL_STATE(82)] = 2519,
  [SMALL_STATE(83)] = 2541,
  [SMALL_STATE(84)] = 2563,
  [SMALL_STATE(85)] = 2587,
  [SMALL_STATE(86)] = 2609,
  [SMALL_STATE(87)] = 2647,
  [SMALL_STATE(88)] = 2675,
  [SMALL_STATE(89)] = 2696,
  [SMALL_STATE(90)] = 2721,
  [SMALL_STATE(91)] = 2746,
  [SMALL_STATE(92)] = 2767,
  [SMALL_STATE(93)] = 2792,
  [SMALL_STATE(94)] = 2813,
  [SMALL_STATE(95)] = 2838,
  [SMALL_STATE(96)] = 2863,
  [SMALL_STATE(97)] = 2888,
  [SMALL_STATE(98)] = 2913,
  [SMALL_STATE(99)] = 2938,
  [SMALL_STATE(100)] = 2963,
  [SMALL_STATE(101)] = 2988,
  [SMALL_STATE(102)] = 3009,
  [SMALL_STATE(103)] = 3034,
  [SMALL_STATE(104)] = 3059,
  [SMALL_STATE(105)] = 3084,
  [SMALL_STATE(106)] = 3109,
  [SMALL_STATE(107)] = 3130,
  [SMALL_STATE(108)] = 3151,
  [SMALL_STATE(109)] = 3176,
  [SMALL_STATE(110)] = 3201,
  [SMALL_STATE(111)] = 3226,
  [SMALL_STATE(112)] = 3247,
  [SMALL_STATE(113)] = 3268,
  [SMALL_STATE(114)] = 3293,
  [SMALL_STATE(115)] = 3316,
  [SMALL_STATE(116)] = 3339,
  [SMALL_STATE(117)] = 3364,
  [SMALL_STATE(118)] = 3389,
  [SMALL_STATE(119)] = 3414,
  [SMALL_STATE(120)] = 3439,
  [SMALL_STATE(121)] = 3460,
  [SMALL_STATE(122)] = 3485,
  [SMALL_STATE(123)] = 3510,
  [SMALL_STATE(124)] = 3535,
  [SMALL_STATE(125)] = 3560,
  [SMALL_STATE(126)] = 3585,
  [SMALL_STATE(127)] = 3610,
  [SMALL_STATE(128)] = 3635,
  [SMALL_STATE(129)] = 3660,
  [SMALL_STATE(130)] = 3685,
  [SMALL_STATE(131)] = 3710,
  [SMALL_STATE(132)] = 3735,
  [SMALL_STATE(133)] = 3760,
  [SMALL_STATE(134)] = 3781,
  [SMALL_STATE(135)] = 3802,
  [SMALL_STATE(136)] = 3823,
  [SMALL_STATE(137)] = 3844,
  [SMALL_STATE(138)] = 3869,
  [SMALL_STATE(139)] = 3894,
  [SMALL_STATE(140)] = 3919,
  [SMALL_STATE(141)] = 3944,
  [SMALL_STATE(142)] = 3969,
  [SMALL_STATE(143)] = 3994,
  [SMALL_STATE(144)] = 4029,
  [SMALL_STATE(145)] = 4054,
  [SMALL_STATE(146)] = 4079,
  [SMALL_STATE(147)] = 4100,
  [SMALL_STATE(148)] = 4125,
  [SMALL_STATE(149)] = 4146,
  [SMALL_STATE(150)] = 4171,
  [SMALL_STATE(151)] = 4196,
  [SMALL_STATE(152)] = 4221,
  [SMALL_STATE(153)] = 4242,
  [SMALL_STATE(154)] = 4263,
  [SMALL_STATE(155)] = 4288,
  [SMALL_STATE(156)] = 4308,
  [SMALL_STATE(157)] = 4328,
  [SMALL_STATE(158)] = 4350,
  [SMALL_STATE(159)] = 4370,
  [SMALL_STATE(160)] = 4392,
  [SMALL_STATE(161)] = 4412,
  [SMALL_STATE(162)] = 4434,
  [SMALL_STATE(163)] = 4454,
  [SMALL_STATE(164)] = 4476,
  [SMALL_STATE(165)] = 4498,
  [SMALL_STATE(166)] = 4520,
  [SMALL_STATE(167)] = 4542,
  [SMALL_STATE(168)] = 4564,
  [SMALL_STATE(169)] = 4586,
  [SMALL_STATE(170)] = 4608,
  [SMALL_STATE(171)] = 4630,
  [SMALL_STATE(172)] = 4650,
  [SMALL_STATE(173)] = 4670,
  [SMALL_STATE(174)] = 4690,
  [SMALL_STATE(175)] = 4710,
  [SMALL_STATE(176)] = 4730,
  [SMALL_STATE(177)] = 4750,
  [SMALL_STATE(178)] = 4772,
  [SMALL_STATE(179)] = 4792,
  [SMALL_STATE(180)] = 4814,
  [SMALL_STATE(181)] = 4836,
  [SMALL_STATE(182)] = 4858,
  [SMALL_STATE(183)] = 4880,
  [SMALL_STATE(184)] = 4902,
  [SMALL_STATE(185)] = 4922,
  [SMALL_STATE(186)] = 4944,
  [SMALL_STATE(187)] = 4966,
  [SMALL_STATE(188)] = 4986,
  [SMALL_STATE(189)] = 5006,
  [SMALL_STATE(190)] = 5026,
  [SMALL_STATE(191)] = 5046,
  [SMALL_STATE(192)] = 5066,
  [SMALL_STATE(193)] = 5086,
  [SMALL_STATE(194)] = 5108,
  [SMALL_STATE(195)] = 5128,
  [SMALL_STATE(196)] = 5148,
  [SMALL_STATE(197)] = 5168,
  [SMALL_STATE(198)] = 5190,
  [SMALL_STATE(199)] = 5210,
  [SMALL_STATE(200)] = 5232,
  [SMALL_STATE(201)] = 5254,
  [SMALL_STATE(202)] = 5273,
  [SMALL_STATE(203)] = 5292,
  [SMALL_STATE(204)] = 5311,
  [SMALL_STATE(205)] = 5330,
  [SMALL_STATE(206)] = 5349,
  [SMALL_STATE(207)] = 5368,
  [SMALL_STATE(208)] = 5387,
  [SMALL_STATE(209)] = 5406,
  [SMALL_STATE(210)] = 5425,
  [SMALL_STATE(211)] = 5444,
  [SMALL_STATE(212)] = 5463,
  [SMALL_STATE(213)] = 5482,
  [SMALL_STATE(214)] = 5501,
  [SMALL_STATE(215)] = 5520,
  [SMALL_STATE(216)] = 5539,
  [SMALL_STATE(217)] = 5558,
  [SMALL_STATE(218)] = 5577,
  [SMALL_STATE(219)] = 5596,
  [SMALL_STATE(220)] = 5615,
  [SMALL_STATE(221)] = 5634,
  [SMALL_STATE(222)] = 5653,
  [SMALL_STATE(223)] = 5672,
  [SMALL_STATE(224)] = 5691,
  [SMALL_STATE(225)] = 5710,
  [SMALL_STATE(226)] = 5729,
  [SMALL_STATE(227)] = 5748,
  [SMALL_STATE(228)] = 5767,
  [SMALL_STATE(229)] = 5786,
  [SMALL_STATE(230)] = 5805,
  [SMALL_STATE(231)] = 5824,
  [SMALL_STATE(232)] = 5843,
  [SMALL_STATE(233)] = 5862,
  [SMALL_STATE(234)] = 5881,
  [SMALL_STATE(235)] = 5900,
  [SMALL_STATE(236)] = 5919,
  [SMALL_STATE(237)] = 5938,
  [SMALL_STATE(238)] = 5957,
  [SMALL_STATE(239)] = 5976,
  [SMALL_STATE(240)] = 5995,
  [SMALL_STATE(241)] = 6014,
  [SMALL_STATE(242)] = 6033,
  [SMALL_STATE(243)] = 6052,
  [SMALL_STATE(244)] = 6071,
  [SMALL_STATE(245)] = 6090,
  [SMALL_STATE(246)] = 6109,
  [SMALL_STATE(247)] = 6128,
  [SMALL_STATE(248)] = 6147,
  [SMALL_STATE(249)] = 6166,
  [SMALL_STATE(250)] = 6185,
  [SMALL_STATE(251)] = 6204,
  [SMALL_STATE(252)] = 6223,
  [SMALL_STATE(253)] = 6242,
  [SMALL_STATE(254)] = 6263,
  [SMALL_STATE(255)] = 6282,
  [SMALL_STATE(256)] = 6301,
  [SMALL_STATE(257)] = 6320,
  [SMALL_STATE(258)] = 6339,
  [SMALL_STATE(259)] = 6358,
  [SMALL_STATE(260)] = 6393,
  [SMALL_STATE(261)] = 6412,
  [SMALL_STATE(262)] = 6431,
  [SMALL_STATE(263)] = 6450,
  [SMALL_STATE(264)] = 6469,
  [SMALL_STATE(265)] = 6488,
  [SMALL_STATE(266)] = 6507,
  [SMALL_STATE(267)] = 6526,
  [SMALL_STATE(268)] = 6545,
  [SMALL_STATE(269)] = 6564,
  [SMALL_STATE(270)] = 6583,
  [SMALL_STATE(271)] = 6602,
  [SMALL_STATE(272)] = 6621,
  [SMALL_STATE(273)] = 6640,
  [SMALL_STATE(274)] = 6659,
  [SMALL_STATE(275)] = 6678,
  [SMALL_STATE(276)] = 6697,
  [SMALL_STATE(277)] = 6716,
  [SMALL_STATE(278)] = 6735,
  [SMALL_STATE(279)] = 6754,
  [SMALL_STATE(280)] = 6773,
  [SMALL_STATE(281)] = 6792,
  [SMALL_STATE(282)] = 6811,
  [SMALL_STATE(283)] = 6830,
  [SMALL_STATE(284)] = 6849,
  [SMALL_STATE(285)] = 6868,
  [SMALL_STATE(286)] = 6887,
  [SMALL_STATE(287)] = 6906,
  [SMALL_STATE(288)] = 6925,
  [SMALL_STATE(289)] = 6944,
  [SMALL_STATE(290)] = 6963,
  [SMALL_STATE(291)] = 6982,
  [SMALL_STATE(292)] = 7001,
  [SMALL_STATE(293)] = 7020,
  [SMALL_STATE(294)] = 7039,
  [SMALL_STATE(295)] = 7058,
  [SMALL_STATE(296)] = 7077,
  [SMALL_STATE(297)] = 7096,
  [SMALL_STATE(298)] = 7115,
  [SMALL_STATE(299)] = 7134,
  [SMALL_STATE(300)] = 7153,
  [SMALL_STATE(301)] = 7172,
  [SMALL_STATE(302)] = 7191,
  [SMALL_STATE(303)] = 7210,
  [SMALL_STATE(304)] = 7229,
  [SMALL_STATE(305)] = 7248,
  [SMALL_STATE(306)] = 7267,
  [SMALL_STATE(307)] = 7286,
  [SMALL_STATE(308)] = 7305,
  [SMALL_STATE(309)] = 7324,
  [SMALL_STATE(310)] = 7343,
  [SMALL_STATE(311)] = 7362,
  [SMALL_STATE(312)] = 7381,
  [SMALL_STATE(313)] = 7400,
  [SMALL_STATE(314)] = 7419,
  [SMALL_STATE(315)] = 7438,
  [SMALL_STATE(316)] = 7457,
  [SMALL_STATE(317)] = 7476,
  [SMALL_STATE(318)] = 7495,
  [SMALL_STATE(319)] = 7514,
  [SMALL_STATE(320)] = 7532,
  [SMALL_STATE(321)] = 7560,
  [SMALL_STATE(322)] = 7588,
  [SMALL_STATE(323)] = 7616,
  [SMALL_STATE(324)] = 7644,
  [SMALL_STATE(325)] = 7672,
  [SMALL_STATE(326)] = 7705,
  [SMALL_STATE(327)] = 7736,
  [SMALL_STATE(328)] = 7764,
  [SMALL_STATE(329)] = 7789,
  [SMALL_STATE(330)] = 7814,
  [SMALL_STATE(331)] = 7837,
  [SMALL_STATE(332)] = 7859,
  [SMALL_STATE(333)] = 7879,
  [SMALL_STATE(334)] = 7901,
  [SMALL_STATE(335)] = 7935,
  [SMALL_STATE(336)] = 7954,
  [SMALL_STATE(337)] = 7977,
  [SMALL_STATE(338)] = 7996,
  [SMALL_STATE(339)] = 8027,
  [SMALL_STATE(340)] = 8050,
  [SMALL_STATE(341)] = 8069,
  [SMALL_STATE(342)] = 8088,
  [SMALL_STATE(343)] = 8105,
  [SMALL_STATE(344)] = 8124,
  [SMALL_STATE(345)] = 8143,
  [SMALL_STATE(346)] = 8160,
  [SMALL_STATE(347)] = 8179,
  [SMALL_STATE(348)] = 8198,
  [SMALL_STATE(349)] = 8217,
  [SMALL_STATE(350)] = 8236,
  [SMALL_STATE(351)] = 8255,
  [SMALL_STATE(352)] = 8275,
  [SMALL_STATE(353)] = 8296,
  [SMALL_STATE(354)] = 8317,
  [SMALL_STATE(355)] = 8338,
  [SMALL_STATE(356)] = 8359,
  [SMALL_STATE(357)] = 8380,
  [SMALL_STATE(358)] = 8401,
  [SMALL_STATE(359)] = 8422,
  [SMALL_STATE(360)] = 8443,
  [SMALL_STATE(361)] = 8461,
  [SMALL_STATE(362)] = 8483,
  [SMALL_STATE(363)] = 8505,
  [SMALL_STATE(364)] = 8523,
  [SMALL_STATE(365)] = 8543,
  [SMALL_STATE(366)] = 8565,
  [SMALL_STATE(367)] = 8579,
  [SMALL_STATE(368)] = 8599,
  [SMALL_STATE(369)] = 8621,
  [SMALL_STATE(370)] = 8635,
  [SMALL_STATE(371)] = 8653,
  [SMALL_STATE(372)] = 8672,
  [SMALL_STATE(373)] = 8689,
  [SMALL_STATE(374)] = 8700,
  [SMALL_STATE(375)] = 8719,
  [SMALL_STATE(376)] = 8727,
  [SMALL_STATE(377)] = 8739,
  [SMALL_STATE(378)] = 8755,
  [SMALL_STATE(379)] = 8767,
  [SMALL_STATE(380)] = 8783,
  [SMALL_STATE(381)] = 8799,
  [SMALL_STATE(382)] = 8807,
  [SMALL_STATE(383)] = 8819,
  [SMALL_STATE(384)] = 8835,
  [SMALL_STATE(385)] = 8845,
  [SMALL_STATE(386)] = 8857,
  [SMALL_STATE(387)] = 8865,
  [SMALL_STATE(388)] = 8881,
  [SMALL_STATE(389)] = 8897,
  [SMALL_STATE(390)] = 8905,
  [SMALL_STATE(391)] = 8913,
  [SMALL_STATE(392)] = 8929,
  [SMALL_STATE(393)] = 8943,
  [SMALL_STATE(394)] = 8951,
  [SMALL_STATE(395)] = 8967,
  [SMALL_STATE(396)] = 8981,
  [SMALL_STATE(397)] = 8997,
  [SMALL_STATE(398)] = 9005,
  [SMALL_STATE(399)] = 9018,
  [SMALL_STATE(400)] = 9031,
  [SMALL_STATE(401)] = 9044,
  [SMALL_STATE(402)] = 9057,
  [SMALL_STATE(403)] = 9070,
  [SMALL_STATE(404)] = 9083,
  [SMALL_STATE(405)] = 9096,
  [SMALL_STATE(406)] = 9109,
  [SMALL_STATE(407)] = 9122,
  [SMALL_STATE(408)] = 9135,
  [SMALL_STATE(409)] = 9148,
  [SMALL_STATE(410)] = 9161,
  [SMALL_STATE(411)] = 9172,
  [SMALL_STATE(412)] = 9185,
  [SMALL_STATE(413)] = 9198,
  [SMALL_STATE(414)] = 9211,
  [SMALL_STATE(415)] = 9220,
  [SMALL_STATE(416)] = 9233,
  [SMALL_STATE(417)] = 9246,
  [SMALL_STATE(418)] = 9259,
  [SMALL_STATE(419)] = 9272,
  [SMALL_STATE(420)] = 9285,
  [SMALL_STATE(421)] = 9298,
  [SMALL_STATE(422)] = 9311,
  [SMALL_STATE(423)] = 9324,
  [SMALL_STATE(424)] = 9337,
  [SMALL_STATE(425)] = 9350,
  [SMALL_STATE(426)] = 9363,
  [SMALL_STATE(427)] = 9376,
  [SMALL_STATE(428)] = 9389,
  [SMALL_STATE(429)] = 9402,
  [SMALL_STATE(430)] = 9415,
  [SMALL_STATE(431)] = 9426,
  [SMALL_STATE(432)] = 9439,
  [SMALL_STATE(433)] = 9452,
  [SMALL_STATE(434)] = 9465,
  [SMALL_STATE(435)] = 9472,
  [SMALL_STATE(436)] = 9485,
  [SMALL_STATE(437)] = 9498,
  [SMALL_STATE(438)] = 9511,
  [SMALL_STATE(439)] = 9518,
  [SMALL_STATE(440)] = 9531,
  [SMALL_STATE(441)] = 9538,
  [SMALL_STATE(442)] = 9551,
  [SMALL_STATE(443)] = 9562,
  [SMALL_STATE(444)] = 9575,
  [SMALL_STATE(445)] = 9586,
  [SMALL_STATE(446)] = 9599,
  [SMALL_STATE(447)] = 9612,
  [SMALL_STATE(448)] = 9625,
  [SMALL_STATE(449)] = 9638,
  [SMALL_STATE(450)] = 9651,
  [SMALL_STATE(451)] = 9661,
  [SMALL_STATE(452)] = 9671,
  [SMALL_STATE(453)] = 9681,
  [SMALL_STATE(454)] = 9691,
  [SMALL_STATE(455)] = 9701,
  [SMALL_STATE(456)] = 9711,
  [SMALL_STATE(457)] = 9721,
  [SMALL_STATE(458)] = 9729,
  [SMALL_STATE(459)] = 9739,
  [SMALL_STATE(460)] = 9749,
  [SMALL_STATE(461)] = 9757,
  [SMALL_STATE(462)] = 9767,
  [SMALL_STATE(463)] = 9777,
  [SMALL_STATE(464)] = 9787,
  [SMALL_STATE(465)] = 9797,
  [SMALL_STATE(466)] = 9807,
  [SMALL_STATE(467)] = 9817,
  [SMALL_STATE(468)] = 9827,
  [SMALL_STATE(469)] = 9835,
  [SMALL_STATE(470)] = 9845,
  [SMALL_STATE(471)] = 9855,
  [SMALL_STATE(472)] = 9865,
  [SMALL_STATE(473)] = 9875,
  [SMALL_STATE(474)] = 9885,
  [SMALL_STATE(475)] = 9895,
  [SMALL_STATE(476)] = 9905,
  [SMALL_STATE(477)] = 9915,
  [SMALL_STATE(478)] = 9925,
  [SMALL_STATE(479)] = 9935,
  [SMALL_STATE(480)] = 9945,
  [SMALL_STATE(481)] = 9955,
  [SMALL_STATE(482)] = 9965,
  [SMALL_STATE(483)] = 9975,
  [SMALL_STATE(484)] = 9985,
  [SMALL_STATE(485)] = 9995,
  [SMALL_STATE(486)] = 10005,
  [SMALL_STATE(487)] = 10015,
  [SMALL_STATE(488)] = 10025,
  [SMALL_STATE(489)] = 10035,
  [SMALL_STATE(490)] = 10045,
  [SMALL_STATE(491)] = 10055,
  [SMALL_STATE(492)] = 10065,
  [SMALL_STATE(493)] = 10075,
  [SMALL_STATE(494)] = 10083,
  [SMALL_STATE(495)] = 10093,
  [SMALL_STATE(496)] = 10103,
  [SMALL_STATE(497)] = 10113,
  [SMALL_STATE(498)] = 10123,
  [SMALL_STATE(499)] = 10133,
  [SMALL_STATE(500)] = 10143,
  [SMALL_STATE(501)] = 10153,
  [SMALL_STATE(502)] = 10159,
  [SMALL_STATE(503)] = 10169,
  [SMALL_STATE(504)] = 10179,
  [SMALL_STATE(505)] = 10189,
  [SMALL_STATE(506)] = 10199,
  [SMALL_STATE(507)] = 10209,
  [SMALL_STATE(508)] = 10219,
  [SMALL_STATE(509)] = 10229,
  [SMALL_STATE(510)] = 10239,
  [SMALL_STATE(511)] = 10247,
  [SMALL_STATE(512)] = 10257,
  [SMALL_STATE(513)] = 10265,
  [SMALL_STATE(514)] = 10275,
  [SMALL_STATE(515)] = 10285,
  [SMALL_STATE(516)] = 10295,
  [SMALL_STATE(517)] = 10305,
  [SMALL_STATE(518)] = 10315,
  [SMALL_STATE(519)] = 10325,
  [SMALL_STATE(520)] = 10335,
  [SMALL_STATE(521)] = 10345,
  [SMALL_STATE(522)] = 10355,
  [SMALL_STATE(523)] = 10365,
  [SMALL_STATE(524)] = 10375,
  [SMALL_STATE(525)] = 10385,
  [SMALL_STATE(526)] = 10395,
  [SMALL_STATE(527)] = 10405,
  [SMALL_STATE(528)] = 10415,
  [SMALL_STATE(529)] = 10425,
  [SMALL_STATE(530)] = 10435,
  [SMALL_STATE(531)] = 10441,
  [SMALL_STATE(532)] = 10451,
  [SMALL_STATE(533)] = 10461,
  [SMALL_STATE(534)] = 10471,
  [SMALL_STATE(535)] = 10481,
  [SMALL_STATE(536)] = 10491,
  [SMALL_STATE(537)] = 10501,
  [SMALL_STATE(538)] = 10511,
  [SMALL_STATE(539)] = 10521,
  [SMALL_STATE(540)] = 10531,
  [SMALL_STATE(541)] = 10541,
  [SMALL_STATE(542)] = 10551,
  [SMALL_STATE(543)] = 10561,
  [SMALL_STATE(544)] = 10571,
  [SMALL_STATE(545)] = 10581,
  [SMALL_STATE(546)] = 10591,
  [SMALL_STATE(547)] = 10601,
  [SMALL_STATE(548)] = 10611,
  [SMALL_STATE(549)] = 10621,
  [SMALL_STATE(550)] = 10631,
  [SMALL_STATE(551)] = 10641,
  [SMALL_STATE(552)] = 10651,
  [SMALL_STATE(553)] = 10659,
  [SMALL_STATE(554)] = 10669,
  [SMALL_STATE(555)] = 10679,
  [SMALL_STATE(556)] = 10689,
  [SMALL_STATE(557)] = 10699,
  [SMALL_STATE(558)] = 10709,
  [SMALL_STATE(559)] = 10719,
  [SMALL_STATE(560)] = 10729,
  [SMALL_STATE(561)] = 10739,
  [SMALL_STATE(562)] = 10749,
  [SMALL_STATE(563)] = 10759,
  [SMALL_STATE(564)] = 10769,
  [SMALL_STATE(565)] = 10779,
  [SMALL_STATE(566)] = 10789,
  [SMALL_STATE(567)] = 10795,
  [SMALL_STATE(568)] = 10805,
  [SMALL_STATE(569)] = 10815,
  [SMALL_STATE(570)] = 10822,
  [SMALL_STATE(571)] = 10827,
  [SMALL_STATE(572)] = 10832,
  [SMALL_STATE(573)] = 10837,
  [SMALL_STATE(574)] = 10844,
  [SMALL_STATE(575)] = 10851,
  [SMALL_STATE(576)] = 10858,
  [SMALL_STATE(577)] = 10865,
  [SMALL_STATE(578)] = 10872,
  [SMALL_STATE(579)] = 10879,
  [SMALL_STATE(580)] = 10886,
  [SMALL_STATE(581)] = 10893,
  [SMALL_STATE(582)] = 10900,
  [SMALL_STATE(583)] = 10907,
  [SMALL_STATE(584)] = 10912,
  [SMALL_STATE(585)] = 10919,
  [SMALL_STATE(586)] = 10926,
  [SMALL_STATE(587)] = 10933,
  [SMALL_STATE(588)] = 10940,
  [SMALL_STATE(589)] = 10945,
  [SMALL_STATE(590)] = 10952,
  [SMALL_STATE(591)] = 10957,
  [SMALL_STATE(592)] = 10962,
  [SMALL_STATE(593)] = 10969,
  [SMALL_STATE(594)] = 10976,
  [SMALL_STATE(595)] = 10981,
  [SMALL_STATE(596)] = 10988,
  [SMALL_STATE(597)] = 10995,
  [SMALL_STATE(598)] = 11000,
  [SMALL_STATE(599)] = 11005,
  [SMALL_STATE(600)] = 11012,
  [SMALL_STATE(601)] = 11019,
  [SMALL_STATE(602)] = 11024,
  [SMALL_STATE(603)] = 11031,
  [SMALL_STATE(604)] = 11038,
  [SMALL_STATE(605)] = 11043,
  [SMALL_STATE(606)] = 11050,
  [SMALL_STATE(607)] = 11057,
  [SMALL_STATE(608)] = 11064,
  [SMALL_STATE(609)] = 11071,
  [SMALL_STATE(610)] = 11078,
  [SMALL_STATE(611)] = 11085,
  [SMALL_STATE(612)] = 11092,
  [SMALL_STATE(613)] = 11099,
  [SMALL_STATE(614)] = 11106,
  [SMALL_STATE(615)] = 11113,
  [SMALL_STATE(616)] = 11120,
  [SMALL_STATE(617)] = 11127,
  [SMALL_STATE(618)] = 11134,
  [SMALL_STATE(619)] = 11141,
  [SMALL_STATE(620)] = 11148,
  [SMALL_STATE(621)] = 11155,
  [SMALL_STATE(622)] = 11162,
  [SMALL_STATE(623)] = 11169,
  [SMALL_STATE(624)] = 11176,
  [SMALL_STATE(625)] = 11183,
  [SMALL_STATE(626)] = 11190,
  [SMALL_STATE(627)] = 11197,
  [SMALL_STATE(628)] = 11204,
  [SMALL_STATE(629)] = 11211,
  [SMALL_STATE(630)] = 11218,
  [SMALL_STATE(631)] = 11225,
  [SMALL_STATE(632)] = 11232,
  [SMALL_STATE(633)] = 11237,
  [SMALL_STATE(634)] = 11244,
  [SMALL_STATE(635)] = 11249,
  [SMALL_STATE(636)] = 11254,
  [SMALL_STATE(637)] = 11261,
  [SMALL_STATE(638)] = 11268,
  [SMALL_STATE(639)] = 11273,
  [SMALL_STATE(640)] = 11280,
  [SMALL_STATE(641)] = 11287,
  [SMALL_STATE(642)] = 11294,
  [SMALL_STATE(643)] = 11301,
  [SMALL_STATE(644)] = 11308,
  [SMALL_STATE(645)] = 11315,
  [SMALL_STATE(646)] = 11320,
  [SMALL_STATE(647)] = 11327,
  [SMALL_STATE(648)] = 11334,
  [SMALL_STATE(649)] = 11341,
  [SMALL_STATE(650)] = 11348,
  [SMALL_STATE(651)] = 11355,
  [SMALL_STATE(652)] = 11362,
  [SMALL_STATE(653)] = 11369,
  [SMALL_STATE(654)] = 11376,
  [SMALL_STATE(655)] = 11383,
  [SMALL_STATE(656)] = 11390,
  [SMALL_STATE(657)] = 11397,
  [SMALL_STATE(658)] = 11404,
  [SMALL_STATE(659)] = 11411,
  [SMALL_STATE(660)] = 11418,
  [SMALL_STATE(661)] = 11423,
  [SMALL_STATE(662)] = 11430,
  [SMALL_STATE(663)] = 11437,
  [SMALL_STATE(664)] = 11444,
  [SMALL_STATE(665)] = 11451,
  [SMALL_STATE(666)] = 11456,
  [SMALL_STATE(667)] = 11463,
  [SMALL_STATE(668)] = 11470,
  [SMALL_STATE(669)] = 11477,
  [SMALL_STATE(670)] = 11484,
  [SMALL_STATE(671)] = 11491,
  [SMALL_STATE(672)] = 11498,
  [SMALL_STATE(673)] = 11505,
  [SMALL_STATE(674)] = 11512,
  [SMALL_STATE(675)] = 11519,
  [SMALL_STATE(676)] = 11526,
  [SMALL_STATE(677)] = 11533,
  [SMALL_STATE(678)] = 11538,
  [SMALL_STATE(679)] = 11545,
  [SMALL_STATE(680)] = 11550,
  [SMALL_STATE(681)] = 11555,
  [SMALL_STATE(682)] = 11562,
  [SMALL_STATE(683)] = 11567,
  [SMALL_STATE(684)] = 11574,
  [SMALL_STATE(685)] = 11581,
  [SMALL_STATE(686)] = 11588,
  [SMALL_STATE(687)] = 11593,
  [SMALL_STATE(688)] = 11598,
  [SMALL_STATE(689)] = 11603,
  [SMALL_STATE(690)] = 11610,
  [SMALL_STATE(691)] = 11617,
  [SMALL_STATE(692)] = 11622,
  [SMALL_STATE(693)] = 11629,
  [SMALL_STATE(694)] = 11636,
  [SMALL_STATE(695)] = 11641,
  [SMALL_STATE(696)] = 11648,
  [SMALL_STATE(697)] = 11653,
  [SMALL_STATE(698)] = 11660,
  [SMALL_STATE(699)] = 11665,
  [SMALL_STATE(700)] = 11670,
  [SMALL_STATE(701)] = 11677,
  [SMALL_STATE(702)] = 11684,
  [SMALL_STATE(703)] = 11688,
  [SMALL_STATE(704)] = 11692,
  [SMALL_STATE(705)] = 11696,
  [SMALL_STATE(706)] = 11700,
  [SMALL_STATE(707)] = 11704,
  [SMALL_STATE(708)] = 11708,
  [SMALL_STATE(709)] = 11712,
  [SMALL_STATE(710)] = 11716,
  [SMALL_STATE(711)] = 11720,
  [SMALL_STATE(712)] = 11724,
  [SMALL_STATE(713)] = 11728,
  [SMALL_STATE(714)] = 11732,
  [SMALL_STATE(715)] = 11736,
  [SMALL_STATE(716)] = 11740,
  [SMALL_STATE(717)] = 11744,
  [SMALL_STATE(718)] = 11748,
  [SMALL_STATE(719)] = 11752,
  [SMALL_STATE(720)] = 11756,
  [SMALL_STATE(721)] = 11760,
  [SMALL_STATE(722)] = 11764,
  [SMALL_STATE(723)] = 11768,
  [SMALL_STATE(724)] = 11772,
  [SMALL_STATE(725)] = 11776,
  [SMALL_STATE(726)] = 11780,
  [SMALL_STATE(727)] = 11784,
  [SMALL_STATE(728)] = 11788,
  [SMALL_STATE(729)] = 11792,
  [SMALL_STATE(730)] = 11796,
  [SMALL_STATE(731)] = 11800,
  [SMALL_STATE(732)] = 11804,
  [SMALL_STATE(733)] = 11808,
  [SMALL_STATE(734)] = 11812,
  [SMALL_STATE(735)] = 11816,
  [SMALL_STATE(736)] = 11820,
  [SMALL_STATE(737)] = 11824,
  [SMALL_STATE(738)] = 11828,
  [SMALL_STATE(739)] = 11832,
  [SMALL_STATE(740)] = 11836,
  [SMALL_STATE(741)] = 11840,
  [SMALL_STATE(742)] = 11844,
  [SMALL_STATE(743)] = 11848,
  [SMALL_STATE(744)] = 11852,
  [SMALL_STATE(745)] = 11856,
  [SMALL_STATE(746)] = 11860,
  [SMALL_STATE(747)] = 11864,
  [SMALL_STATE(748)] = 11868,
  [SMALL_STATE(749)] = 11872,
  [SMALL_STATE(750)] = 11876,
  [SMALL_STATE(751)] = 11880,
  [SMALL_STATE(752)] = 11884,
  [SMALL_STATE(753)] = 11888,
  [SMALL_STATE(754)] = 11892,
  [SMALL_STATE(755)] = 11896,
  [SMALL_STATE(756)] = 11900,
  [SMALL_STATE(757)] = 11904,
  [SMALL_STATE(758)] = 11908,
  [SMALL_STATE(759)] = 11912,
  [SMALL_STATE(760)] = 11916,
  [SMALL_STATE(761)] = 11920,
  [SMALL_STATE(762)] = 11924,
  [SMALL_STATE(763)] = 11928,
  [SMALL_STATE(764)] = 11932,
  [SMALL_STATE(765)] = 11936,
  [SMALL_STATE(766)] = 11940,
  [SMALL_STATE(767)] = 11944,
  [SMALL_STATE(768)] = 11948,
  [SMALL_STATE(769)] = 11952,
  [SMALL_STATE(770)] = 11956,
  [SMALL_STATE(771)] = 11960,
  [SMALL_STATE(772)] = 11964,
  [SMALL_STATE(773)] = 11968,
  [SMALL_STATE(774)] = 11972,
  [SMALL_STATE(775)] = 11976,
  [SMALL_STATE(776)] = 11980,
  [SMALL_STATE(777)] = 11984,
  [SMALL_STATE(778)] = 11988,
  [SMALL_STATE(779)] = 11992,
  [SMALL_STATE(780)] = 11996,
  [SMALL_STATE(781)] = 12000,
  [SMALL_STATE(782)] = 12004,
  [SMALL_STATE(783)] = 12008,
  [SMALL_STATE(784)] = 12012,
  [SMALL_STATE(785)] = 12016,
  [SMALL_STATE(786)] = 12020,
  [SMALL_STATE(787)] = 12024,
  [SMALL_STATE(788)] = 12028,
  [SMALL_STATE(789)] = 12032,
  [SMALL_STATE(790)] = 12036,
  [SMALL_STATE(791)] = 12040,
  [SMALL_STATE(792)] = 12044,
  [SMALL_STATE(793)] = 12048,
  [SMALL_STATE(794)] = 12052,
  [SMALL_STATE(795)] = 12056,
  [SMALL_STATE(796)] = 12060,
  [SMALL_STATE(797)] = 12064,
  [SMALL_STATE(798)] = 12068,
  [SMALL_STATE(799)] = 12072,
  [SMALL_STATE(800)] = 12076,
  [SMALL_STATE(801)] = 12080,
  [SMALL_STATE(802)] = 12084,
  [SMALL_STATE(803)] = 12088,
  [SMALL_STATE(804)] = 12092,
  [SMALL_STATE(805)] = 12096,
  [SMALL_STATE(806)] = 12100,
  [SMALL_STATE(807)] = 12104,
  [SMALL_STATE(808)] = 12108,
  [SMALL_STATE(809)] = 12112,
  [SMALL_STATE(810)] = 12116,
  [SMALL_STATE(811)] = 12120,
  [SMALL_STATE(812)] = 12124,
  [SMALL_STATE(813)] = 12128,
  [SMALL_STATE(814)] = 12132,
  [SMALL_STATE(815)] = 12136,
  [SMALL_STATE(816)] = 12140,
  [SMALL_STATE(817)] = 12144,
  [SMALL_STATE(818)] = 12148,
  [SMALL_STATE(819)] = 12152,
  [SMALL_STATE(820)] = 12156,
  [SMALL_STATE(821)] = 12160,
  [SMALL_STATE(822)] = 12164,
  [SMALL_STATE(823)] = 12168,
  [SMALL_STATE(824)] = 12172,
  [SMALL_STATE(825)] = 12176,
  [SMALL_STATE(826)] = 12180,
  [SMALL_STATE(827)] = 12184,
  [SMALL_STATE(828)] = 12188,
  [SMALL_STATE(829)] = 12192,
  [SMALL_STATE(830)] = 12196,
  [SMALL_STATE(831)] = 12200,
  [SMALL_STATE(832)] = 12204,
  [SMALL_STATE(833)] = 12208,
  [SMALL_STATE(834)] = 12212,
  [SMALL_STATE(835)] = 12216,
  [SMALL_STATE(836)] = 12220,
  [SMALL_STATE(837)] = 12224,
  [SMALL_STATE(838)] = 12228,
  [SMALL_STATE(839)] = 12232,
  [SMALL_STATE(840)] = 12236,
  [SMALL_STATE(841)] = 12240,
  [SMALL_STATE(842)] = 12244,
  [SMALL_STATE(843)] = 12248,
  [SMALL_STATE(844)] = 12252,
  [SMALL_STATE(845)] = 12256,
  [SMALL_STATE(846)] = 12260,
  [SMALL_STATE(847)] = 12264,
  [SMALL_STATE(848)] = 12268,
  [SMALL_STATE(849)] = 12272,
  [SMALL_STATE(850)] = 12276,
  [SMALL_STATE(851)] = 12280,
  [SMALL_STATE(852)] = 12284,
  [SMALL_STATE(853)] = 12288,
  [SMALL_STATE(854)] = 12292,
  [SMALL_STATE(855)] = 12296,
  [SMALL_STATE(856)] = 12300,
  [SMALL_STATE(857)] = 12304,
  [SMALL_STATE(858)] = 12308,
  [SMALL_STATE(859)] = 12312,
  [SMALL_STATE(860)] = 12316,
  [SMALL_STATE(861)] = 12320,
  [SMALL_STATE(862)] = 12324,
  [SMALL_STATE(863)] = 12328,
  [SMALL_STATE(864)] = 12332,
  [SMALL_STATE(865)] = 12336,
  [SMALL_STATE(866)] = 12340,
  [SMALL_STATE(867)] = 12344,
  [SMALL_STATE(868)] = 12348,
  [SMALL_STATE(869)] = 12352,
  [SMALL_STATE(870)] = 12356,
  [SMALL_STATE(871)] = 12360,
  [SMALL_STATE(872)] = 12364,
  [SMALL_STATE(873)] = 12368,
  [SMALL_STATE(874)] = 12372,
  [SMALL_STATE(875)] = 12376,
  [SMALL_STATE(876)] = 12380,
  [SMALL_STATE(877)] = 12384,
  [SMALL_STATE(878)] = 12388,
  [SMALL_STATE(879)] = 12392,
  [SMALL_STATE(880)] = 12396,
  [SMALL_STATE(881)] = 12400,
  [SMALL_STATE(882)] = 12404,
  [SMALL_STATE(883)] = 12408,
  [SMALL_STATE(884)] = 12412,
  [SMALL_STATE(885)] = 12416,
  [SMALL_STATE(886)] = 12420,
  [SMALL_STATE(887)] = 12424,
  [SMALL_STATE(888)] = 12428,
  [SMALL_STATE(889)] = 12432,
  [SMALL_STATE(890)] = 12436,
  [SMALL_STATE(891)] = 12440,
  [SMALL_STATE(892)] = 12444,
  [SMALL_STATE(893)] = 12448,
  [SMALL_STATE(894)] = 12452,
  [SMALL_STATE(895)] = 12456,
  [SMALL_STATE(896)] = 12460,
  [SMALL_STATE(897)] = 12464,
  [SMALL_STATE(898)] = 12468,
  [SMALL_STATE(899)] = 12472,
  [SMALL_STATE(900)] = 12476,
  [SMALL_STATE(901)] = 12480,
  [SMALL_STATE(902)] = 12484,
  [SMALL_STATE(903)] = 12488,
  [SMALL_STATE(904)] = 12492,
  [SMALL_STATE(905)] = 12496,
  [SMALL_STATE(906)] = 12500,
  [SMALL_STATE(907)] = 12504,
  [SMALL_STATE(908)] = 12508,
  [SMALL_STATE(909)] = 12512,
  [SMALL_STATE(910)] = 12516,
  [SMALL_STATE(911)] = 12520,
  [SMALL_STATE(912)] = 12524,
  [SMALL_STATE(913)] = 12528,
  [SMALL_STATE(914)] = 12532,
  [SMALL_STATE(915)] = 12536,
  [SMALL_STATE(916)] = 12540,
  [SMALL_STATE(917)] = 12544,
  [SMALL_STATE(918)] = 12548,
  [SMALL_STATE(919)] = 12552,
  [SMALL_STATE(920)] = 12556,
  [SMALL_STATE(921)] = 12560,
  [SMALL_STATE(922)] = 12564,
  [SMALL_STATE(923)] = 12568,
  [SMALL_STATE(924)] = 12572,
  [SMALL_STATE(925)] = 12576,
  [SMALL_STATE(926)] = 12580,
  [SMALL_STATE(927)] = 12584,
  [SMALL_STATE(928)] = 12588,
  [SMALL_STATE(929)] = 12592,
  [SMALL_STATE(930)] = 12596,
  [SMALL_STATE(931)] = 12600,
  [SMALL_STATE(932)] = 12604,
  [SMALL_STATE(933)] = 12608,
  [SMALL_STATE(934)] = 12612,
  [SMALL_STATE(935)] = 12616,
  [SMALL_STATE(936)] = 12620,
  [SMALL_STATE(937)] = 12624,
  [SMALL_STATE(938)] = 12628,
  [SMALL_STATE(939)] = 12632,
  [SMALL_STATE(940)] = 12636,
  [SMALL_STATE(941)] = 12640,
  [SMALL_STATE(942)] = 12644,
  [SMALL_STATE(943)] = 12648,
  [SMALL_STATE(944)] = 12652,
  [SMALL_STATE(945)] = 12656,
  [SMALL_STATE(946)] = 12660,
  [SMALL_STATE(947)] = 12664,
  [SMALL_STATE(948)] = 12668,
  [SMALL_STATE(949)] = 12672,
  [SMALL_STATE(950)] = 12676,
  [SMALL_STATE(951)] = 12680,
  [SMALL_STATE(952)] = 12684,
  [SMALL_STATE(953)] = 12688,
  [SMALL_STATE(954)] = 12692,
  [SMALL_STATE(955)] = 12696,
  [SMALL_STATE(956)] = 12700,
  [SMALL_STATE(957)] = 12704,
  [SMALL_STATE(958)] = 12708,
  [SMALL_STATE(959)] = 12712,
  [SMALL_STATE(960)] = 12716,
  [SMALL_STATE(961)] = 12720,
  [SMALL_STATE(962)] = 12724,
  [SMALL_STATE(963)] = 12728,
  [SMALL_STATE(964)] = 12732,
  [SMALL_STATE(965)] = 12736,
  [SMALL_STATE(966)] = 12740,
  [SMALL_STATE(967)] = 12744,
  [SMALL_STATE(968)] = 12748,
  [SMALL_STATE(969)] = 12752,
  [SMALL_STATE(970)] = 12756,
  [SMALL_STATE(971)] = 12760,
  [SMALL_STATE(972)] = 12764,
  [SMALL_STATE(973)] = 12768,
  [SMALL_STATE(974)] = 12772,
  [SMALL_STATE(975)] = 12776,
  [SMALL_STATE(976)] = 12780,
  [SMALL_STATE(977)] = 12784,
  [SMALL_STATE(978)] = 12788,
  [SMALL_STATE(979)] = 12792,
  [SMALL_STATE(980)] = 12796,
  [SMALL_STATE(981)] = 12800,
  [SMALL_STATE(982)] = 12804,
  [SMALL_STATE(983)] = 12808,
  [SMALL_STATE(984)] = 12812,
  [SMALL_STATE(985)] = 12816,
  [SMALL_STATE(986)] = 12820,
  [SMALL_STATE(987)] = 12824,
  [SMALL_STATE(988)] = 12828,
  [SMALL_STATE(989)] = 12832,
  [SMALL_STATE(990)] = 12836,
  [SMALL_STATE(991)] = 12840,
  [SMALL_STATE(992)] = 12844,
  [SMALL_STATE(993)] = 12848,
  [SMALL_STATE(994)] = 12852,
  [SMALL_STATE(995)] = 12856,
  [SMALL_STATE(996)] = 12860,
  [SMALL_STATE(997)] = 12864,
  [SMALL_STATE(998)] = 12868,
  [SMALL_STATE(999)] = 12872,
  [SMALL_STATE(1000)] = 12876,
  [SMALL_STATE(1001)] = 12880,
  [SMALL_STATE(1002)] = 12884,
  [SMALL_STATE(1003)] = 12888,
  [SMALL_STATE(1004)] = 12892,
  [SMALL_STATE(1005)] = 12896,
  [SMALL_STATE(1006)] = 12900,
  [SMALL_STATE(1007)] = 12904,
  [SMALL_STATE(1008)] = 12908,
  [SMALL_STATE(1009)] = 12912,
  [SMALL_STATE(1010)] = 12916,
  [SMALL_STATE(1011)] = 12920,
  [SMALL_STATE(1012)] = 12924,
  [SMALL_STATE(1013)] = 12928,
  [SMALL_STATE(1014)] = 12932,
  [SMALL_STATE(1015)] = 12936,
  [SMALL_STATE(1016)] = 12940,
  [SMALL_STATE(1017)] = 12944,
  [SMALL_STATE(1018)] = 12948,
  [SMALL_STATE(1019)] = 12952,
  [SMALL_STATE(1020)] = 12956,
  [SMALL_STATE(1021)] = 12960,
  [SMALL_STATE(1022)] = 12964,
  [SMALL_STATE(1023)] = 12968,
  [SMALL_STATE(1024)] = 12972,
  [SMALL_STATE(1025)] = 12976,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(394),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(493),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1025),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(452),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1023),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1021),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1016),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 24),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 20),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(675),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 53),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 53),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 53),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(372),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 53),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 53),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 46),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 45),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 36),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 63),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 62),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(619),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 20),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(863),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 47),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 48),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 50),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(595),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(370),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 45),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 44),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 27),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 7),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 45),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 45),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 62),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 33),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(377),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 33),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 62),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 22),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 12),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(584),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 17),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 16),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 25),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 15),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 23),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 13),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 52),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 12),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 54),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 55),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 56),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 32),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 34),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 37),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 40),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 42),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 75),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 22),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 68),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 67),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 65),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 51),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 75),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 52),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 76),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 90),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 89),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 78),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 48),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 88),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 12),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 33),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 79),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 23),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 53),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 64),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 62),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 80),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 45),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 33),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 86),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 85),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 52),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 61),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 60),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 59),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 58),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 57),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 83),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 62),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 66),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 43),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 7),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 48),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 81),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 23),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 12),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 41),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 14),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 39),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 82),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 38),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 36),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 35),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 22),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 33),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 48),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 48),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 84),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 45),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1017),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1011),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(344),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 27),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 31),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(985),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(575),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(330),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(877),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(329),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(589),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(335),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(664),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(666),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(29),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(513),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(624),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(524),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(143),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(701),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 53),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 87),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 26),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 74),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 74),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 73),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 30),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 18),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 19),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 69),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 21),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 70),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 71),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 72),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 13),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 49),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 77),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 29),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 28),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
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
