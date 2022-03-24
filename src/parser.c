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
#define STATE_COUNT 997
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 307
#define ALIAS_COUNT 30
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 69

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
  sym_if_spec = 167,
  sym_if_condition_list = 168,
  sym_if_condition = 169,
  sym_insert_statement = 170,
  sym_insert_column_spec = 171,
  sym_column_list = 172,
  sym_insert_values_spec = 173,
  sym_expression_list = 174,
  sym_expression = 175,
  sym_assignment_map = 176,
  sym_assignment_set = 177,
  sym_assignment_list = 178,
  sym_assignment_tuple = 179,
  sym_using_ttl_timestamp = 180,
  sym_truncate = 181,
  sym_create_index = 182,
  sym_index_column_spec = 183,
  sym_index_keys_spec = 184,
  sym_index_entries_s_spec = 185,
  sym_index_full_spec = 186,
  sym_drop_index = 187,
  sym_update = 188,
  sym_assignment_element = 189,
  sym_indexed_column = 190,
  sym_use = 191,
  sym_grant = 192,
  sym_revoke = 193,
  sym_privilege = 194,
  sym_resource = 195,
  sym_list_roles = 196,
  sym_list_permissions = 197,
  sym_drop_aggregate = 198,
  sym_drop_materialized_view = 199,
  sym_drop_function = 200,
  sym_drop_keyspace = 201,
  sym_drop_role = 202,
  sym_drop_table = 203,
  sym_drop_trigger = 204,
  sym_drop_type = 205,
  sym_drop_user = 206,
  sym_create_aggregate = 207,
  sym_init_cond_definition = 208,
  sym_init_cond_list = 209,
  sym_init_cond_nested_list = 210,
  sym_init_cond_hash = 211,
  sym_init_cond_hash_item = 212,
  sym_create_materialized_view = 213,
  sym_materialized_view_where = 214,
  sym_column_not_null = 215,
  sym_create_function = 216,
  sym_data_type = 217,
  sym_data_type_name = 218,
  sym_data_type_definition = 219,
  sym_return_mode = 220,
  sym_create_keyspace = 221,
  sym_replication_list_item = 222,
  sym_durable_writes = 223,
  sym_create_role = 224,
  sym_role_with = 225,
  sym_role_with_option = 226,
  sym_option_hash = 227,
  sym_option_hash_item = 228,
  sym_create_table = 229,
  sym_column_definition_list = 230,
  sym_column_definition = 231,
  sym_primary_key_column = 232,
  sym_primary_key_element = 233,
  sym_primary_key_definition = 234,
  sym_compound_key = 235,
  sym_clustering_key_list = 236,
  sym_composite_key = 237,
  sym_partition_key_list = 238,
  sym_with_element = 239,
  sym_table_options = 240,
  sym_table_option_item = 241,
  sym_table_option_name = 242,
  sym_table_option_value = 243,
  sym_compact_storage = 244,
  sym_clustering_order = 245,
  sym_create_trigger = 246,
  sym_trigger_class = 247,
  sym_create_type = 248,
  sym_typed_name = 249,
  sym_create_user = 250,
  sym_user_with = 251,
  sym_user_password = 252,
  sym_user_super_user = 253,
  sym_alter_materialized_view = 254,
  sym_alter_keyspace = 255,
  sym_replication_list = 256,
  sym_alter_role = 257,
  sym_alter_table = 258,
  sym_alter_table_operation = 259,
  sym_alter_table_add = 260,
  sym_alter_table_drop_columns = 261,
  sym_alter_table_drop_compact_storage = 262,
  sym_alter_table_rename = 263,
  sym_alter_type = 264,
  sym_alter_type_operation = 265,
  sym_alter_type_alter_type = 266,
  sym_alter_type_add = 267,
  sym_alter_type_rename = 268,
  sym_alter_type_rename_item = 269,
  sym_alter_user = 270,
  sym_apply_batch = 271,
  sym_aggregate_name = 272,
  sym_function_name = 273,
  sym_short_index_name = 274,
  sym_index_name = 275,
  sym_keyspace_name = 276,
  sym_materialized_view_name = 277,
  sym_role_name = 278,
  sym_table_name = 279,
  sym_trigger_name = 280,
  sym_type_name = 281,
  sym_user_name = 282,
  aux_sym_source_file_repeat1 = 283,
  aux_sym_select_elements_repeat1 = 284,
  aux_sym_function_args_repeat1 = 285,
  aux_sym_relation_elements_repeat1 = 286,
  aux_sym_relation_element_repeat1 = 287,
  aux_sym_relation_element_repeat2 = 288,
  aux_sym_delete_column_list_repeat1 = 289,
  aux_sym_if_condition_list_repeat1 = 290,
  aux_sym_expression_list_repeat1 = 291,
  aux_sym_assignment_map_repeat1 = 292,
  aux_sym_assignment_set_repeat1 = 293,
  aux_sym_update_repeat1 = 294,
  aux_sym_init_cond_nested_list_repeat1 = 295,
  aux_sym_init_cond_hash_repeat1 = 296,
  aux_sym_materialized_view_where_repeat1 = 297,
  aux_sym_create_function_repeat1 = 298,
  aux_sym_data_type_definition_repeat1 = 299,
  aux_sym_role_with_repeat1 = 300,
  aux_sym_option_hash_repeat1 = 301,
  aux_sym_column_definition_list_repeat1 = 302,
  aux_sym_clustering_key_list_repeat1 = 303,
  aux_sym_table_options_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_type_rename_repeat1 = 306,
  anon_alias_sym_aggregate = 307,
  anon_alias_sym_alias = 308,
  anon_alias_sym_assignment_operand = 309,
  anon_alias_sym_code_block = 310,
  anon_alias_sym_column = 311,
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
  anon_alias_sym_partition_key = 325,
  anon_alias_sym_password = 326,
  anon_alias_sym_primary_key = 327,
  anon_alias_sym_role = 328,
  anon_alias_sym_sfunc = 329,
  anon_alias_sym_table = 330,
  anon_alias_sym_time = 331,
  anon_alias_sym_trigger = 332,
  anon_alias_sym_ttl = 333,
  anon_alias_sym_type = 334,
  anon_alias_sym_user = 335,
  anon_alias_sym_value = 336,
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
  [sym_init_cond_nested_list] = "init_cond_nested_list",
  [sym_init_cond_hash] = "init_cond_hash",
  [sym_init_cond_hash_item] = "init_cond_hash_item",
  [sym_create_materialized_view] = "create_materialized_view",
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
  [sym_trigger_class] = "trigger_class",
  [sym_create_type] = "create_type",
  [sym_typed_name] = "typed_name",
  [sym_create_user] = "create_user",
  [sym_user_with] = "user_with",
  [sym_user_password] = "user_password",
  [sym_user_super_user] = "user_super_user",
  [sym_alter_materialized_view] = "alter_materialized_view",
  [sym_alter_keyspace] = "alter_keyspace",
  [sym_replication_list] = "replication_list",
  [sym_alter_role] = "alter_role",
  [sym_alter_table] = "alter_table",
  [sym_alter_table_operation] = "alter_table_operation",
  [sym_alter_table_add] = "alter_table_add",
  [sym_alter_table_drop_columns] = "alter_table_drop_columns",
  [sym_alter_table_drop_compact_storage] = "alter_table_drop_compact_storage",
  [sym_alter_table_rename] = "alter_table_rename",
  [sym_alter_type] = "alter_type",
  [sym_alter_type_operation] = "alter_type_operation",
  [sym_alter_type_alter_type] = "alter_type_alter_type",
  [sym_alter_type_add] = "alter_type_add",
  [sym_alter_type_rename] = "alter_type_rename",
  [sym_alter_type_rename_item] = "alter_type_rename_item",
  [sym_alter_user] = "alter_user",
  [sym_apply_batch] = "apply_batch",
  [sym_aggregate_name] = "aggregate_name",
  [sym_function_name] = "function_name",
  [sym_short_index_name] = "short_index_name",
  [sym_index_name] = "index_name",
  [sym_keyspace_name] = "keyspace_name",
  [sym_materialized_view_name] = "materialized_view_name",
  [sym_role_name] = "role_name",
  [sym_table_name] = "table_name",
  [sym_trigger_name] = "trigger_name",
  [sym_type_name] = "type_name",
  [sym_user_name] = "user_name",
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
  [sym_init_cond_nested_list] = sym_init_cond_nested_list,
  [sym_init_cond_hash] = sym_init_cond_hash,
  [sym_init_cond_hash_item] = sym_init_cond_hash_item,
  [sym_create_materialized_view] = sym_create_materialized_view,
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
  [sym_trigger_class] = sym_trigger_class,
  [sym_create_type] = sym_create_type,
  [sym_typed_name] = sym_typed_name,
  [sym_create_user] = sym_create_user,
  [sym_user_with] = sym_user_with,
  [sym_user_password] = sym_user_password,
  [sym_user_super_user] = sym_user_super_user,
  [sym_alter_materialized_view] = sym_alter_materialized_view,
  [sym_alter_keyspace] = sym_alter_keyspace,
  [sym_replication_list] = sym_replication_list,
  [sym_alter_role] = sym_alter_role,
  [sym_alter_table] = sym_alter_table,
  [sym_alter_table_operation] = sym_alter_table_operation,
  [sym_alter_table_add] = sym_alter_table_add,
  [sym_alter_table_drop_columns] = sym_alter_table_drop_columns,
  [sym_alter_table_drop_compact_storage] = sym_alter_table_drop_compact_storage,
  [sym_alter_table_rename] = sym_alter_table_rename,
  [sym_alter_type] = sym_alter_type,
  [sym_alter_type_operation] = sym_alter_type_operation,
  [sym_alter_type_alter_type] = sym_alter_type_alter_type,
  [sym_alter_type_add] = sym_alter_type_add,
  [sym_alter_type_rename] = sym_alter_type_rename,
  [sym_alter_type_rename_item] = sym_alter_type_rename_item,
  [sym_alter_user] = sym_alter_user,
  [sym_apply_batch] = sym_apply_batch,
  [sym_aggregate_name] = sym_aggregate_name,
  [sym_function_name] = sym_function_name,
  [sym_short_index_name] = sym_short_index_name,
  [sym_index_name] = sym_index_name,
  [sym_keyspace_name] = sym_keyspace_name,
  [sym_materialized_view_name] = sym_materialized_view_name,
  [sym_role_name] = sym_role_name,
  [sym_table_name] = sym_table_name,
  [sym_trigger_name] = sym_trigger_name,
  [sym_type_name] = sym_type_name,
  [sym_user_name] = sym_user_name,
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
  [sym_create_user] = {
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
  [sym_aggregate_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_short_index_name] = {
    .visible = true,
    .named = true,
  },
  [sym_index_name] = {
    .visible = true,
    .named = true,
  },
  [sym_keyspace_name] = {
    .visible = true,
    .named = true,
  },
  [sym_materialized_view_name] = {
    .visible = true,
    .named = true,
  },
  [sym_role_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name] = {
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
    [0] = anon_alias_sym_role,
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
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_alias,
  },
  [13] = {
    [2] = anon_alias_sym_alias,
  },
  [14] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [15] = {
    [0] = anon_alias_sym_materialized_view,
  },
  [16] = {
    [3] = anon_alias_sym_role,
  },
  [17] = {
    [0] = anon_alias_sym_function_name,
  },
  [18] = {
    [1] = anon_alias_sym_limit_value,
  },
  [19] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [20] = {
    [2] = anon_alias_sym_time,
  },
  [21] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_index,
  },
  [22] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_function,
  },
  [23] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_aggregate,
  },
  [24] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [25] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_type,
  },
  [26] = {
    [2] = anon_alias_sym_ttl,
  },
  [27] = {
    [1] = anon_alias_sym_table,
  },
  [28] = {
    [1] = anon_alias_sym_function,
  },
  [29] = {
    [1] = anon_alias_sym_role,
  },
  [30] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_materialized_view,
  },
  [31] = {
    [1] = anon_alias_sym_password,
  },
  [32] = {
    [5] = anon_alias_sym_role,
  },
  [33] = {
    [2] = anon_alias_sym_table,
  },
  [34] = {
    [1] = anon_alias_sym_column,
  },
  [35] = {
    [2] = anon_alias_sym_password,
  },
  [36] = {
    [2] = anon_alias_sym_login,
  },
  [37] = {
    [2] = anon_alias_sym_user,
  },
  [38] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [39] = {
    [2] = anon_alias_sym_index,
  },
  [40] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [41] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [42] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [43] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [44] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [45] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [46] = {
    [4] = anon_alias_sym_keyspace,
  },
  [47] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [48] = {
    [2] = anon_alias_sym_key,
  },
  [49] = {
    [2] = anon_alias_sym_entry,
  },
  [50] = {
    [2] = anon_alias_sym_full,
  },
  [51] = {
    [0] = anon_alias_sym_primary_key,
  },
  [52] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [53] = {
    [4] = anon_alias_sym_column,
  },
  [54] = {
    [2] = anon_alias_sym_value,
  },
  [55] = {
    [0] = anon_alias_sym_partition_key,
  },
  [56] = {
    [9] = anon_alias_sym_language,
    [11] = anon_alias_sym_code_block,
  },
  [57] = {
    [10] = anon_alias_sym_language,
    [12] = anon_alias_sym_code_block,
  },
  [58] = {
    [11] = anon_alias_sym_language,
    [13] = anon_alias_sym_code_block,
  },
  [59] = {
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [60] = {
    [12] = anon_alias_sym_language,
    [14] = anon_alias_sym_code_block,
  },
  [61] = {
    [13] = anon_alias_sym_language,
    [15] = anon_alias_sym_code_block,
  },
  [62] = {
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [63] = {
    [14] = anon_alias_sym_language,
    [16] = anon_alias_sym_code_block,
  },
  [64] = {
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [65] = {
    [0] = anon_alias_sym_hash_key,
  },
  [66] = {
    [15] = anon_alias_sym_language,
    [17] = anon_alias_sym_code_block,
  },
  [67] = {
    [16] = anon_alias_sym_language,
    [18] = anon_alias_sym_code_block,
  },
  [68] = {
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
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
  [7] = {.lex_state = 553},
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
  [29] = {.lex_state = 553},
  [30] = {.lex_state = 553},
  [31] = {.lex_state = 553},
  [32] = {.lex_state = 553},
  [33] = {.lex_state = 553},
  [34] = {.lex_state = 553},
  [35] = {.lex_state = 553},
  [36] = {.lex_state = 553},
  [37] = {.lex_state = 553},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 553},
  [40] = {.lex_state = 553},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 553},
  [57] = {.lex_state = 553},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 553},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 553},
  [62] = {.lex_state = 553},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 552},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 553},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 552},
  [70] = {.lex_state = 553},
  [71] = {.lex_state = 553},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 553},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 552},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 553},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 553},
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 552},
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
  [169] = {.lex_state = 553},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 553},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 553},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 553},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 553},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 553},
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
  [313] = {.lex_state = 552},
  [314] = {.lex_state = 552},
  [315] = {.lex_state = 552},
  [316] = {.lex_state = 552},
  [317] = {.lex_state = 552},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 552},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 552},
  [326] = {.lex_state = 552},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 552},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 53},
  [332] = {.lex_state = 42},
  [333] = {.lex_state = 42},
  [334] = {.lex_state = 552},
  [335] = {.lex_state = 552},
  [336] = {.lex_state = 552},
  [337] = {.lex_state = 552},
  [338] = {.lex_state = 552},
  [339] = {.lex_state = 552},
  [340] = {.lex_state = 552},
  [341] = {.lex_state = 553},
  [342] = {.lex_state = 552},
  [343] = {.lex_state = 552},
  [344] = {.lex_state = 552},
  [345] = {.lex_state = 553},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 18},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 18},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 553},
  [355] = {.lex_state = 14},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 553},
  [358] = {.lex_state = 553},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 12},
  [363] = {.lex_state = 53},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 10},
  [366] = {.lex_state = 19},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 10},
  [375] = {.lex_state = 553},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 10},
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
  [391] = {.lex_state = 17},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 17},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 17},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 17},
  [406] = {.lex_state = 17},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 17},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 17},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 17},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 26},
  [422] = {.lex_state = 17},
  [423] = {.lex_state = 20},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 17},
  [428] = {.lex_state = 17},
  [429] = {.lex_state = 23},
  [430] = {.lex_state = 23},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 24},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 10},
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
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 10},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 21},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 27},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 21},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 553},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 21},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 21},
  [509] = {.lex_state = 10},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 10},
  [512] = {.lex_state = 10},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 10},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 553},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 21},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 21},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 552},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 10},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 10},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 21},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 10},
  [548] = {.lex_state = 553},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 10},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 22},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 10},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 10},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 10},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 16},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 10},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 553},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 553},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 10},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 553},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 10},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 10},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 10},
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 10},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 552},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
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
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 553},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 10},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 553},
  [761] = {.lex_state = 553},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 552},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 553},
  [774] = {.lex_state = 553},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 10},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 10},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 10},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 552},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 552},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 552},
  [885] = {.lex_state = 10},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 10},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 552},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 10},
  [905] = {.lex_state = 42},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 10},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 10},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 10},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 553},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 552},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 552},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 10},
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
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 10},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 10},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 552},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 10},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 552},
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
    [sym_source_file] = STATE(984),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(303),
    [sym_delete_statement] = STATE(303),
    [sym_begin_batch] = STATE(454),
    [sym_insert_statement] = STATE(303),
    [sym_truncate] = STATE(303),
    [sym_create_index] = STATE(303),
    [sym_drop_index] = STATE(303),
    [sym_update] = STATE(303),
    [sym_use] = STATE(303),
    [sym_grant] = STATE(303),
    [sym_revoke] = STATE(303),
    [sym_list_roles] = STATE(303),
    [sym_list_permissions] = STATE(303),
    [sym_drop_aggregate] = STATE(303),
    [sym_drop_materialized_view] = STATE(303),
    [sym_drop_function] = STATE(303),
    [sym_drop_keyspace] = STATE(303),
    [sym_drop_role] = STATE(303),
    [sym_drop_table] = STATE(303),
    [sym_drop_trigger] = STATE(303),
    [sym_drop_type] = STATE(303),
    [sym_drop_user] = STATE(303),
    [sym_create_aggregate] = STATE(303),
    [sym_create_materialized_view] = STATE(303),
    [sym_create_function] = STATE(303),
    [sym_create_keyspace] = STATE(303),
    [sym_create_role] = STATE(303),
    [sym_create_table] = STATE(303),
    [sym_create_trigger] = STATE(303),
    [sym_create_type] = STATE(303),
    [sym_create_user] = STATE(303),
    [sym_alter_materialized_view] = STATE(303),
    [sym_alter_keyspace] = STATE(303),
    [sym_alter_role] = STATE(303),
    [sym_alter_table] = STATE(303),
    [sym_alter_type] = STATE(303),
    [sym_alter_user] = STATE(303),
    [sym_apply_batch] = STATE(303),
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
    STATE(454), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(303), 37,
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
    STATE(454), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(303), 37,
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
  [285] = 2,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(87), 27,
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
  [318] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(772), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [353] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(911), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [388] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(844), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [423] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(918), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [458] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(158), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [493] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(895), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [528] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(921), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [563] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(426), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [598] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(705), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [633] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(838), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [668] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(880), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [703] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(700), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [738] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(867), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [773] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(240), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [808] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(945), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [843] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(832), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [878] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(960), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [913] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(961), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [948] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(777), 1,
      sym_data_type,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [983] = 2,
    STATE(524), 1,
      sym_data_type_name,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1015] = 2,
    STATE(616), 1,
      sym_data_type_name,
    ACTIONS(91), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1047] = 1,
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
  [1140] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1167] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(34), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1198] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
  [1229] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(31), 1,
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
  [1287] = 3,
    ACTIONS(112), 1,
      aux_sym_relation_elements_token1,
    STATE(37), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(110), 21,
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
  [1317] = 1,
    ACTIONS(115), 23,
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
  [1343] = 8,
    ACTIONS(119), 1,
      aux_sym_select_statement_token4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    STATE(56), 1,
      sym_where_spec,
    STATE(83), 1,
      sym_order_spec,
    STATE(169), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1383] = 8,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    STATE(59), 1,
      sym_where_spec,
    STATE(76), 1,
      sym_order_spec,
    STATE(184), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1423] = 3,
    ACTIONS(133), 1,
      anon_sym_LT,
    STATE(60), 1,
      sym_data_type_definition,
    ACTIONS(131), 21,
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
  [1453] = 8,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(61), 1,
      sym_where_spec,
    STATE(70), 1,
      sym_order_spec,
    STATE(178), 1,
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
  [1568] = 1,
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
  [1593] = 1,
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
  [1618] = 1,
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
  [1643] = 1,
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
  [1668] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1693] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1718] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(54), 1,
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
  [1747] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1772] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(37), 1,
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
  [1801] = 1,
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
  [1825] = 6,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(71), 1,
      sym_order_spec,
    STATE(194), 1,
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
  [1859] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1883] = 1,
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
  [1907] = 6,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(70), 1,
      sym_order_spec,
    STATE(178), 1,
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
  [1941] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1965] = 6,
    ACTIONS(119), 1,
      aux_sym_select_statement_token4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    STATE(83), 1,
      sym_order_spec,
    STATE(169), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1999] = 2,
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
  [2024] = 2,
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
  [2049] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2074] = 2,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(185), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [2099] = 2,
    ACTIONS(191), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2124] = 1,
    ACTIONS(193), 20,
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
  [2147] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
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
  [2172] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(459), 1,
      sym_expression,
    STATE(698), 1,
      sym_expression_list,
    STATE(688), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2210] = 4,
    ACTIONS(119), 1,
      aux_sym_select_statement_token4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    STATE(169), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2238] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(211), 1,
      aux_sym_select_statement_token4,
    STATE(196), 1,
      sym_limit_spec,
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
  [2266] = 2,
    ACTIONS(215), 1,
      aux_sym_privilege_token2,
    ACTIONS(213), 18,
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
  [2290] = 1,
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
  [2312] = 4,
    ACTIONS(221), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(304), 1,
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
  [2340] = 1,
    ACTIONS(225), 19,
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
  [2362] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(178), 1,
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
  [2390] = 3,
    STATE(227), 1,
      sym_user_super_user,
    ACTIONS(229), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(227), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2416] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(233), 1,
      aux_sym_delete_statement_token2,
    STATE(296), 1,
      sym_using_ttl_timestamp,
    ACTIONS(231), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2444] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(459), 1,
      sym_expression,
    STATE(982), 1,
      sym_expression_list,
    STATE(688), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2482] = 1,
    ACTIONS(235), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [2504] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(237), 17,
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
  [2530] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(244), 1,
      aux_sym_delete_statement_token2,
    STATE(234), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2558] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(194), 1,
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
  [2586] = 1,
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
  [2608] = 1,
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
  [2630] = 2,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(248), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_element_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2654] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(252), 17,
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
  [2680] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2702] = 1,
    ACTIONS(259), 19,
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
  [2724] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2746] = 3,
    ACTIONS(265), 1,
      aux_sym_relation_elements_token1,
    STATE(91), 1,
      aux_sym_table_options_repeat1,
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
  [2771] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(214), 1,
      sym_using_ttl_timestamp,
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
  [2796] = 3,
    ACTIONS(272), 1,
      aux_sym_delete_statement_token2,
    STATE(238), 1,
      sym_if_spec,
    ACTIONS(270), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2821] = 1,
    ACTIONS(274), 18,
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
  [2842] = 3,
    ACTIONS(278), 1,
      aux_sym_relation_elements_token1,
    STATE(101), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(276), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2867] = 3,
    ACTIONS(282), 1,
      aux_sym_relation_elements_token1,
    STATE(125), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2892] = 3,
    ACTIONS(286), 1,
      aux_sym_delete_statement_token2,
    STATE(200), 1,
      sym_if_spec,
    ACTIONS(284), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2917] = 1,
    ACTIONS(288), 18,
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
  [2938] = 3,
    ACTIONS(292), 1,
      aux_sym_delete_statement_token2,
    STATE(254), 1,
      sym_if_spec,
    ACTIONS(290), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(296), 1,
      aux_sym_delete_statement_token2,
    STATE(280), 1,
      sym_if_spec,
    ACTIONS(294), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2988] = 3,
    ACTIONS(300), 1,
      aux_sym_relation_elements_token1,
    STATE(101), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(298), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3013] = 1,
    ACTIONS(303), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_element_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3034] = 3,
    ACTIONS(307), 1,
      aux_sym_relation_elements_token1,
    STATE(116), 1,
      aux_sym_if_condition_list_repeat1,
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
  [3059] = 3,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    STATE(114), 1,
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
  [3084] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_create_function_repeat1,
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
  [3109] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_clustering_key_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3134] = 3,
    ACTIONS(323), 1,
      aux_sym_delete_statement_token2,
    STATE(204), 1,
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
  [3159] = 3,
    ACTIONS(278), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_role_with_repeat1,
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
  [3184] = 1,
    ACTIONS(237), 18,
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
  [3205] = 1,
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
  [3226] = 3,
    ACTIONS(331), 1,
      aux_sym_delete_statement_token2,
    STATE(251), 1,
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
  [3251] = 1,
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
  [3272] = 1,
    ACTIONS(335), 18,
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
  [3293] = 3,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3318] = 2,
    ACTIONS(341), 1,
      anon_sym_DOT,
    ACTIONS(339), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3341] = 3,
    ACTIONS(345), 1,
      aux_sym_relation_elements_token1,
    STATE(116), 1,
      aux_sym_if_condition_list_repeat1,
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
  [3366] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3391] = 3,
    ACTIONS(352), 1,
      aux_sym_list_roles_token2,
    ACTIONS(354), 1,
      aux_sym_list_roles_token3,
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
  [3416] = 3,
    ACTIONS(358), 1,
      aux_sym_create_keyspace_token1,
    STATE(222), 1,
      sym_role_with,
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
  [3441] = 3,
    ACTIONS(358), 1,
      aux_sym_create_keyspace_token1,
    STATE(275), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3466] = 2,
    ACTIONS(364), 1,
      anon_sym_DOT,
    ACTIONS(362), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3489] = 3,
    ACTIONS(368), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
      sym_if_spec,
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
  [3514] = 1,
    ACTIONS(370), 18,
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
  [3535] = 3,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    STATE(299), 1,
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
  [3560] = 3,
    ACTIONS(282), 1,
      aux_sym_relation_elements_token1,
    STATE(91), 1,
      aux_sym_table_options_repeat1,
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
  [3585] = 1,
    ACTIONS(378), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3606] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(226), 1,
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
  [3631] = 3,
    ACTIONS(384), 1,
      aux_sym_delete_statement_token2,
    STATE(203), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3656] = 3,
    ACTIONS(388), 1,
      aux_sym_delete_statement_token2,
    STATE(253), 1,
      sym_if_spec,
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
  [3681] = 3,
    ACTIONS(392), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
      sym_if_spec,
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
  [3706] = 1,
    ACTIONS(252), 18,
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
  [3727] = 1,
    ACTIONS(213), 18,
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
  [3748] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(264), 1,
      sym_using_ttl_timestamp,
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
  [3773] = 3,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    STATE(292), 1,
      sym_with_element,
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
  [3798] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
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
  [3823] = 3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3848] = 1,
    ACTIONS(406), 18,
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
  [3869] = 3,
    ACTIONS(410), 1,
      aux_sym_delete_statement_token2,
    STATE(286), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3894] = 3,
    ACTIONS(414), 1,
      aux_sym_delete_statement_token2,
    STATE(199), 1,
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
  [3919] = 1,
    ACTIONS(416), 18,
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
  [3940] = 3,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    STATE(272), 1,
      sym_with_element,
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
  [3965] = 2,
    ACTIONS(422), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(420), 17,
      ts_builtin_sym_end,
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
  [3988] = 3,
    ACTIONS(426), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [4013] = 2,
    ACTIONS(431), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(429), 17,
      ts_builtin_sym_end,
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
  [4036] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4057] = 8,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(677), 1,
      sym_expression,
    STATE(688), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4092] = 3,
    ACTIONS(437), 1,
      aux_sym_delete_statement_token2,
    STATE(213), 1,
      sym_if_spec,
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
  [4117] = 1,
    ACTIONS(439), 18,
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
  [4138] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4163] = 3,
    ACTIONS(307), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4188] = 3,
    ACTIONS(447), 1,
      aux_sym_delete_statement_token2,
    STATE(308), 1,
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
  [4213] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_create_function_repeat1,
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
  [4238] = 3,
    ACTIONS(453), 1,
      aux_sym_delete_statement_token2,
    STATE(231), 1,
      sym_if_spec,
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
  [4263] = 1,
    ACTIONS(455), 18,
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
  [4284] = 3,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    STATE(288), 1,
      sym_with_element,
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
  [4309] = 1,
    ACTIONS(459), 18,
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
  [4330] = 3,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    STATE(257), 1,
      sym_with_element,
    ACTIONS(461), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4355] = 1,
    ACTIONS(463), 18,
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
  [4376] = 3,
    ACTIONS(358), 1,
      aux_sym_create_keyspace_token1,
    STATE(273), 1,
      sym_role_with,
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
  [4401] = 3,
    ACTIONS(469), 1,
      aux_sym_delete_statement_token2,
    STATE(201), 1,
      sym_if_spec,
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
  [4426] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4446] = 1,
    ACTIONS(263), 17,
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
  [4466] = 1,
    ACTIONS(473), 17,
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
  [4486] = 1,
    ACTIONS(475), 17,
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
  [4506] = 1,
    ACTIONS(477), 17,
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
  [4526] = 1,
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
  [4546] = 1,
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
  [4566] = 1,
    ACTIONS(424), 17,
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
  [4586] = 2,
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
  [4608] = 1,
    ACTIONS(483), 17,
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
  [4628] = 2,
    ACTIONS(487), 1,
      aux_sym_relation_elements_token1,
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
  [4650] = 1,
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
  [4670] = 1,
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
  [4690] = 2,
    ACTIONS(495), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(493), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4712] = 1,
    ACTIONS(497), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4732] = 1,
    ACTIONS(499), 17,
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
  [4752] = 1,
    ACTIONS(501), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4772] = 2,
    ACTIONS(119), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4794] = 1,
    ACTIONS(503), 17,
      ts_builtin_sym_end,
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
  [4814] = 1,
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
  [4834] = 1,
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
  [4854] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4874] = 1,
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
  [4894] = 2,
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
  [4916] = 2,
    ACTIONS(513), 1,
      aux_sym_relation_elements_token1,
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
  [4938] = 1,
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
  [4958] = 1,
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
  [4978] = 1,
    ACTIONS(519), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4998] = 1,
    ACTIONS(521), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5018] = 2,
    ACTIONS(525), 1,
      aux_sym_list_roles_token3,
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
  [5040] = 1,
    ACTIONS(298), 17,
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
  [5060] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5080] = 2,
    ACTIONS(531), 1,
      aux_sym_list_roles_token2,
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
  [5102] = 2,
    ACTIONS(211), 1,
      aux_sym_select_statement_token4,
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
  [5124] = 1,
    ACTIONS(533), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5144] = 2,
    ACTIONS(537), 1,
      aux_sym_select_statement_token4,
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
  [5166] = 1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5186] = 1,
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
  [5205] = 1,
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
  [5224] = 1,
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
  [5243] = 1,
    ACTIONS(290), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5262] = 1,
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
  [5281] = 1,
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
  [5300] = 1,
    ACTIONS(270), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [5338] = 1,
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
  [5357] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5376] = 1,
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
  [5395] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5414] = 1,
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
  [5433] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5452] = 1,
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
  [5471] = 1,
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
  [5490] = 1,
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
  [5509] = 1,
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
  [5528] = 1,
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
  [5547] = 1,
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
  [5566] = 1,
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
  [5585] = 1,
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
  [5604] = 1,
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
  [5623] = 1,
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
  [5642] = 1,
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
  [5661] = 1,
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
  [5680] = 9,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(622), 1,
      sym_constant,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(410), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [5715] = 1,
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
  [5734] = 1,
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
  [5753] = 1,
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
  [5772] = 1,
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
  [5791] = 1,
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
  [5810] = 1,
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
  [5829] = 1,
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
  [5848] = 1,
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
  [5867] = 1,
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
  [5886] = 1,
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
  [5905] = 1,
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
  [5924] = 1,
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
  [5943] = 1,
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
  [5962] = 1,
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
  [5981] = 1,
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
  [6000] = 1,
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
  [6019] = 1,
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
  [6038] = 1,
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
  [6057] = 1,
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
  [6076] = 1,
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
  [6095] = 1,
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
  [6114] = 1,
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
  [6133] = 1,
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
  [6152] = 1,
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
  [6171] = 1,
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
  [6190] = 1,
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
  [6209] = 1,
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
  [6228] = 1,
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
  [6247] = 1,
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
  [6266] = 1,
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
  [6285] = 1,
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
  [6304] = 1,
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
  [6323] = 1,
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
  [6342] = 1,
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
  [6361] = 1,
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
  [6380] = 1,
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
  [6399] = 1,
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
  [6418] = 1,
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
  [6437] = 1,
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
  [6456] = 1,
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
  [6475] = 1,
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
  [6494] = 1,
    ACTIONS(294), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6513] = 1,
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
  [6532] = 1,
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
  [6551] = 1,
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
  [6570] = 1,
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
  [6589] = 1,
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
  [6608] = 1,
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
  [6627] = 1,
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
  [6646] = 1,
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
  [6665] = 1,
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
  [6684] = 1,
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
  [6703] = 1,
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
  [6722] = 1,
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
  [6741] = 1,
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
  [6760] = 1,
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
  [6779] = 1,
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
  [6798] = 1,
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
  [6817] = 1,
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
  [6836] = 1,
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
  [6855] = 1,
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
  [6874] = 1,
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
  [6893] = 1,
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
  [6912] = 1,
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
  [6931] = 1,
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
  [6950] = 1,
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
  [6969] = 1,
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
  [6988] = 1,
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
  [7007] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7026] = 1,
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
  [7045] = 1,
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
  [7064] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7083] = 1,
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
  [7102] = 1,
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
  [7121] = 1,
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
  [7140] = 1,
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
  [7159] = 1,
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
  [7178] = 1,
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
  [7197] = 2,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(719), 15,
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
  [7218] = 1,
    ACTIONS(231), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7237] = 1,
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
  [7256] = 1,
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
  [7275] = 1,
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
  [7294] = 1,
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
  [7313] = 1,
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
  [7332] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7351] = 1,
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
  [7370] = 1,
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
  [7389] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(687), 1,
      sym_init_cond_definition,
    STATE(123), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7417] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(305), 1,
      sym_init_cond_definition,
    STATE(123), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7445] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(309), 1,
      sym_init_cond_definition,
    STATE(123), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7473] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(249), 1,
      sym_init_cond_definition,
    STATE(123), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7501] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(297), 1,
      sym_init_cond_definition,
    STATE(123), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7529] = 1,
    ACTIONS(737), 15,
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
  [7547] = 9,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(741), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(481), 1,
      sym_init_cond_hash_item,
    STATE(482), 1,
      sym_init_cond_list,
    STATE(483), 1,
      sym_constant,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7580] = 8,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(743), 1,
      anon_sym_STAR,
    ACTIONS(745), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(738), 1,
      sym_function_args,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(474), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7611] = 7,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(745), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(854), 1,
      sym_function_args,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(474), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7639] = 5,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(692), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7662] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(747), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(46), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7687] = 6,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(749), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(583), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(693), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(201), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7712] = 5,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(431), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7734] = 5,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(753), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(53), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7756] = 4,
    ACTIONS(757), 1,
      aux_sym_privilege_token1,
    ACTIONS(759), 1,
      aux_sym_resource_token4,
    STATE(136), 1,
      sym_privilege,
    ACTIONS(755), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7776] = 11,
    ACTIONS(761), 1,
      aux_sym_truncate_token2,
    ACTIONS(763), 1,
      aux_sym_create_index_token2,
    ACTIONS(765), 1,
      aux_sym_resource_token2,
    ACTIONS(767), 1,
      aux_sym_resource_token5,
    ACTIONS(769), 1,
      aux_sym_resource_token6,
    ACTIONS(771), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(773), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(775), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(777), 1,
      aux_sym_drop_type_token1,
    ACTIONS(779), 1,
      aux_sym_drop_user_token1,
    ACTIONS(781), 1,
      aux_sym_create_aggregate_token1,
  [7810] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(389), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7829] = 6,
    ACTIONS(374), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(783), 1,
      aux_sym_drop_index_token1,
    ACTIONS(785), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(787), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(270), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7852] = 10,
    ACTIONS(789), 1,
      aux_sym_truncate_token2,
    ACTIONS(791), 1,
      aux_sym_create_index_token2,
    ACTIONS(793), 1,
      aux_sym_resource_token2,
    ACTIONS(795), 1,
      aux_sym_resource_token5,
    ACTIONS(797), 1,
      aux_sym_resource_token6,
    ACTIONS(799), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(801), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(803), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(805), 1,
      aux_sym_drop_type_token1,
    ACTIONS(807), 1,
      aux_sym_drop_user_token1,
  [7883] = 3,
    ACTIONS(757), 1,
      aux_sym_privilege_token1,
    STATE(900), 1,
      sym_privilege,
    ACTIONS(755), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7900] = 3,
    ACTIONS(757), 1,
      aux_sym_privilege_token1,
    STATE(897), 1,
      sym_privilege,
    ACTIONS(755), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7917] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(137), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7936] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7955] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(488), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7974] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(622), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7993] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(857), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8012] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(187), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8031] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(620), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8050] = 6,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      aux_sym_relation_element_token1,
    ACTIONS(817), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(819), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(811), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(813), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8073] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(44), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8092] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(483), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8111] = 4,
    ACTIONS(203), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(440), 1,
      sym_constant,
    ACTIONS(201), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8130] = 5,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      aux_sym_relation_element_token1,
    ACTIONS(817), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(811), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(813), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8150] = 6,
    ACTIONS(821), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(823), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(825), 1,
      sym_object_name,
    STATE(267), 1,
      sym_table_options,
    STATE(944), 1,
      sym_table_option_name,
    STATE(96), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8171] = 6,
    ACTIONS(827), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(829), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(831), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(833), 1,
      sym_object_name,
    STATE(970), 1,
      sym_index_column_spec,
    STATE(969), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8192] = 6,
    ACTIONS(827), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(829), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(831), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(833), 1,
      sym_object_name,
    STATE(754), 1,
      sym_index_column_spec,
    STATE(969), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8213] = 6,
    ACTIONS(827), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(829), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(831), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(833), 1,
      sym_object_name,
    STATE(812), 1,
      sym_index_column_spec,
    STATE(969), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8234] = 6,
    ACTIONS(827), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(829), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(831), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(833), 1,
      sym_object_name,
    STATE(819), 1,
      sym_index_column_spec,
    STATE(969), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8255] = 7,
    ACTIONS(835), 1,
      aux_sym_truncate_token2,
    ACTIONS(837), 1,
      aux_sym_privilege_token1,
    ACTIONS(839), 1,
      aux_sym_resource_token2,
    ACTIONS(841), 1,
      aux_sym_resource_token5,
    ACTIONS(843), 1,
      aux_sym_resource_token6,
    ACTIONS(845), 1,
      sym_object_name,
    STATE(786), 1,
      sym_resource,
  [8277] = 5,
    ACTIONS(821), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(823), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(825), 1,
      sym_object_name,
    STATE(944), 1,
      sym_table_option_name,
    STATE(162), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8295] = 7,
    ACTIONS(847), 1,
      aux_sym_select_statement_token2,
    ACTIONS(849), 1,
      aux_sym_select_statement_token3,
    ACTIONS(851), 1,
      anon_sym_STAR,
    ACTIONS(853), 1,
      sym_object_name,
    STATE(460), 1,
      sym_select_element,
    STATE(462), 1,
      sym_function_call,
    STATE(683), 1,
      sym_select_elements,
  [8317] = 3,
    ACTIONS(859), 1,
      aux_sym_relation_element_token1,
    ACTIONS(855), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(857), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8331] = 7,
    ACTIONS(835), 1,
      aux_sym_truncate_token2,
    ACTIONS(837), 1,
      aux_sym_privilege_token1,
    ACTIONS(839), 1,
      aux_sym_resource_token2,
    ACTIONS(841), 1,
      aux_sym_resource_token5,
    ACTIONS(843), 1,
      aux_sym_resource_token6,
    ACTIONS(845), 1,
      sym_object_name,
    STATE(787), 1,
      sym_resource,
  [8353] = 6,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(364), 1,
      sym_function_call,
    STATE(635), 1,
      sym_column_not_null,
    STATE(49), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8373] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      aux_sym__decimal_literal_token1,
    STATE(679), 1,
      sym__decimal_literal,
    STATE(675), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8391] = 3,
    ACTIONS(871), 1,
      aux_sym_relation_element_token1,
    ACTIONS(867), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(869), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8405] = 5,
    ACTIONS(873), 1,
      aux_sym_privilege_token3,
    ACTIONS(875), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(877), 1,
      aux_sym_alter_table_rename_token1,
    STATE(277), 1,
      sym_alter_type_operation,
    STATE(278), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8423] = 6,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      sym_object_name,
    STATE(52), 1,
      sym_relation_element,
    STATE(67), 1,
      sym_relation_elements,
    STATE(364), 1,
      sym_function_call,
    STATE(49), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8443] = 7,
    ACTIONS(835), 1,
      aux_sym_truncate_token2,
    ACTIONS(837), 1,
      aux_sym_privilege_token1,
    ACTIONS(839), 1,
      aux_sym_resource_token2,
    ACTIONS(841), 1,
      aux_sym_resource_token5,
    ACTIONS(843), 1,
      aux_sym_resource_token6,
    ACTIONS(845), 1,
      sym_object_name,
    STATE(193), 1,
      sym_resource,
  [8465] = 6,
    ACTIONS(851), 1,
      anon_sym_STAR,
    ACTIONS(853), 1,
      sym_object_name,
    ACTIONS(881), 1,
      aux_sym_select_statement_token3,
    STATE(460), 1,
      sym_select_element,
    STATE(462), 1,
      sym_function_call,
    STATE(595), 1,
      sym_select_elements,
  [8484] = 6,
    ACTIONS(883), 1,
      aux_sym_truncate_token2,
    ACTIONS(885), 1,
      aux_sym_resource_token2,
    ACTIONS(887), 1,
      aux_sym_resource_token6,
    ACTIONS(889), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(891), 1,
      aux_sym_drop_type_token1,
    ACTIONS(893), 1,
      aux_sym_drop_user_token1,
  [8503] = 2,
    ACTIONS(895), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(897), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8514] = 5,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(364), 1,
      sym_function_call,
    STATE(49), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8531] = 5,
    ACTIONS(899), 1,
      aux_sym_from_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(387), 1,
      sym_from_spec,
    STATE(472), 1,
      sym_delete_column_item,
    STATE(644), 1,
      sym_delete_column_list,
  [8547] = 3,
    ACTIONS(905), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(461), 1,
      sym_using_timestamp_spec,
    ACTIONS(903), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8559] = 5,
    ACTIONS(899), 1,
      aux_sym_from_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(425), 1,
      sym_from_spec,
    STATE(472), 1,
      sym_delete_column_item,
    STATE(673), 1,
      sym_delete_column_list,
  [8575] = 5,
    ACTIONS(851), 1,
      anon_sym_STAR,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(460), 1,
      sym_select_element,
    STATE(462), 1,
      sym_function_call,
    STATE(595), 1,
      sym_select_elements,
  [8591] = 4,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(911), 1,
      anon_sym_DOT,
    ACTIONS(913), 1,
      aux_sym_select_element_token1,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8605] = 3,
    ACTIONS(905), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(565), 1,
      sym_using_timestamp_spec,
    ACTIONS(915), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8617] = 5,
    ACTIONS(917), 1,
      aux_sym_select_statement_token3,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
    STATE(445), 1,
      sym_insert_column_spec,
  [8633] = 1,
    ACTIONS(923), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8641] = 5,
    ACTIONS(851), 1,
      anon_sym_STAR,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(460), 1,
      sym_select_element,
    STATE(462), 1,
      sym_function_call,
    STATE(658), 1,
      sym_select_elements,
  [8657] = 3,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(172), 2,
      sym_option_hash,
      sym_table_option_value,
  [8669] = 5,
    ACTIONS(929), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(931), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(933), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(935), 1,
      aux_sym_role_with_option_token4,
    STATE(191), 1,
      sym_role_with_option,
  [8685] = 1,
    ACTIONS(937), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8693] = 4,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(816), 1,
      sym_primary_key_definition,
    STATE(817), 2,
      sym_compound_key,
      sym_composite_key,
  [8707] = 1,
    ACTIONS(943), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8715] = 5,
    ACTIONS(929), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(931), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(933), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(935), 1,
      aux_sym_role_with_option_token4,
    STATE(108), 1,
      sym_role_with_option,
  [8731] = 1,
    ACTIONS(945), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8739] = 3,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(950), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8751] = 1,
    ACTIONS(952), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8759] = 5,
    ACTIONS(917), 1,
      aux_sym_select_statement_token3,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      aux_sym_insert_values_spec_token1,
    STATE(74), 1,
      sym_insert_values_spec,
    STATE(458), 1,
      sym_insert_column_spec,
  [8775] = 1,
    ACTIONS(954), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8783] = 1,
    ACTIONS(956), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8791] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(905), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(122), 1,
      sym_where_spec,
    STATE(674), 1,
      sym_using_timestamp_spec,
  [8804] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_where_spec,
    STATE(392), 1,
      aux_sym_update_repeat1,
  [8817] = 1,
    ACTIONS(950), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8824] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(960), 1,
      anon_sym_DOT,
    ACTIONS(962), 1,
      aux_sym_update_token2,
    STATE(808), 1,
      sym_using_ttl_timestamp,
  [8837] = 4,
    ACTIONS(964), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(966), 1,
      sym_object_name,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8850] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [8863] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_where_spec,
    STATE(403), 1,
      aux_sym_update_repeat1,
  [8876] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [8889] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(968), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8902] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(970), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8915] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      sym_where_spec,
    STATE(424), 1,
      aux_sym_update_repeat1,
  [8928] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [8941] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(972), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8954] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(974), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8967] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(976), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8980] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(978), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [8993] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [9006] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(980), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9019] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(982), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9032] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(984), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9045] = 4,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_function_args_repeat1,
  [9058] = 4,
    ACTIONS(990), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(992), 1,
      aux_sym_primary_key_column_token1,
    STATE(417), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(522), 1,
      aux_sym_relation_elements_repeat1,
  [9071] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_where_spec,
    STATE(398), 1,
      aux_sym_update_repeat1,
  [9084] = 2,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(996), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9093] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(998), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9106] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      sym_where_spec,
    STATE(433), 1,
      aux_sym_update_repeat1,
  [9119] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1000), 1,
      anon_sym_DOT,
    ACTIONS(1002), 1,
      aux_sym_update_token2,
    STATE(765), 1,
      sym_using_ttl_timestamp,
  [9132] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_where_spec,
    STATE(438), 1,
      aux_sym_update_repeat1,
  [9145] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1004), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9158] = 3,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1008), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9169] = 4,
    ACTIONS(990), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1010), 1,
      aux_sym_primary_key_column_token1,
    STATE(497), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(499), 1,
      aux_sym_relation_elements_repeat1,
  [9182] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(434), 1,
      aux_sym_update_repeat1,
  [9195] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1012), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9208] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(905), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(138), 1,
      sym_where_spec,
    STATE(694), 1,
      sym_using_timestamp_spec,
  [9221] = 4,
    ACTIONS(1014), 1,
      sym__string_literal,
    ACTIONS(1016), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1018), 1,
      sym_object_name,
    STATE(248), 1,
      sym_short_index_name,
  [9234] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1020), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9247] = 4,
    ACTIONS(1022), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1024), 1,
      aux_sym_create_index_token3,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(835), 1,
      sym_index_name,
  [9260] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [9273] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(905), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(97), 1,
      sym_where_spec,
    STATE(573), 1,
      sym_using_timestamp_spec,
  [9286] = 3,
    ACTIONS(1030), 1,
      aux_sym_primary_key_column_token1,
    STATE(579), 1,
      sym_primary_key_column,
    ACTIONS(1028), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9297] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1032), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9310] = 4,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1034), 1,
      aux_sym_delete_statement_token3,
    STATE(150), 1,
      sym_if_condition,
    STATE(311), 1,
      sym_if_condition_list,
  [9323] = 4,
    ACTIONS(1036), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(582), 1,
      sym_column_definition,
    STATE(828), 1,
      sym_primary_key_element,
  [9336] = 4,
    ACTIONS(1036), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(582), 1,
      sym_column_definition,
    STATE(721), 1,
      sym_primary_key_element,
  [9349] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_COLON,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(467), 1,
      aux_sym_assignment_set_repeat1,
  [9362] = 1,
    ACTIONS(1046), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9369] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [9382] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [9395] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_where_spec,
    STATE(394), 1,
      aux_sym_update_repeat1,
  [9408] = 3,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1051), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9419] = 3,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1053), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9430] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [9443] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9453] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_assignment_set_repeat1,
  [9463] = 3,
    ACTIONS(1059), 1,
      aux_sym_truncate_token2,
    ACTIONS(1061), 1,
      sym_object_name,
    STATE(300), 1,
      sym_table_name,
  [9473] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_init_cond_hash_repeat1,
  [9483] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(766), 1,
      sym_return_mode,
  [9493] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(502), 1,
      aux_sym_replication_list_repeat1,
  [9503] = 3,
    ACTIONS(917), 1,
      aux_sym_select_statement_token3,
    ACTIONS(921), 1,
      aux_sym_insert_values_spec_token1,
    STATE(82), 1,
      sym_insert_values_spec,
  [9513] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1076), 1,
      aux_sym_update_token2,
    STATE(865), 1,
      sym_using_ttl_timestamp,
  [9523] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(435), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [9533] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9543] = 2,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9551] = 3,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
    STATE(515), 1,
      aux_sym_option_hash_repeat1,
  [9561] = 3,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_function_args_repeat1,
  [9571] = 3,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(564), 1,
      sym_column_definition,
    STATE(853), 1,
      sym_column_definition_list,
  [9581] = 3,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_relation_element_repeat1,
  [9591] = 3,
    ACTIONS(1098), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1100), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1102), 1,
      aux_sym_update_token1,
  [9601] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_GT,
    STATE(518), 1,
      aux_sym_data_type_definition_repeat1,
  [9611] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_create_function_repeat1,
  [9621] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9631] = 3,
    ACTIONS(917), 1,
      aux_sym_select_statement_token3,
    ACTIONS(921), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
  [9641] = 3,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_expression_list_repeat1,
  [9651] = 3,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      aux_sym_from_spec_token1,
    STATE(533), 1,
      aux_sym_select_elements_repeat1,
  [9661] = 1,
    ACTIONS(1120), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9667] = 2,
    ACTIONS(1124), 1,
      aux_sym_select_element_token1,
    ACTIONS(1122), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9675] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      aux_sym_column_definition_list_repeat1,
  [9685] = 3,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      aux_sym_from_spec_token1,
    STATE(464), 1,
      aux_sym_delete_column_list_repeat1,
  [9695] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_init_cond_hash_repeat1,
  [9705] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      aux_sym_expression_list_repeat1,
  [9715] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [9725] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9735] = 2,
    ACTIONS(1152), 1,
      anon_sym_LBRACK,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9743] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [9753] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_assignment_set_repeat1,
  [9763] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      aux_sym_from_spec_token1,
    STATE(562), 1,
      aux_sym_delete_column_list_repeat1,
  [9773] = 3,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(551), 1,
      sym_typed_name,
  [9783] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_function_args_repeat1,
  [9793] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_relation_element_repeat2,
  [9803] = 3,
    ACTIONS(1061), 1,
      sym_object_name,
    ACTIONS(1168), 1,
      aux_sym_delete_statement_token2,
    STATE(848), 1,
      sym_table_name,
  [9813] = 3,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(823), 1,
      sym_keyspace_name,
  [9823] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      aux_sym_from_spec_token1,
    STATE(478), 1,
      aux_sym_select_elements_repeat1,
  [9833] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(799), 1,
      sym_return_mode,
  [9843] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9853] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      aux_sym_init_cond_hash_repeat1,
  [9863] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9873] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_assignment_set_repeat1,
  [9883] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(409), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [9893] = 3,
    ACTIONS(1187), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1189), 1,
      sym_object_name,
    STATE(818), 1,
      sym_function_name,
  [9903] = 3,
    ACTIONS(1191), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1193), 1,
      sym_object_name,
    STATE(119), 1,
      sym_role_name,
  [9913] = 3,
    ACTIONS(1195), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1197), 1,
      sym_object_name,
    STATE(810), 1,
      sym_aggregate_name,
  [9923] = 3,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    STATE(543), 1,
      aux_sym_assignment_map_repeat1,
  [9933] = 3,
    ACTIONS(1189), 1,
      sym_object_name,
    ACTIONS(1203), 1,
      aux_sym_delete_statement_token2,
    STATE(902), 1,
      sym_function_name,
  [9943] = 3,
    ACTIONS(1205), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1207), 1,
      sym_object_name,
    STATE(804), 1,
      sym_trigger_name,
  [9953] = 3,
    ACTIONS(1197), 1,
      sym_object_name,
    ACTIONS(1209), 1,
      aux_sym_delete_statement_token2,
    STATE(909), 1,
      sym_aggregate_name,
  [9963] = 3,
    ACTIONS(1211), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1213), 1,
      sym_object_name,
    STATE(802), 1,
      sym_type_name,
  [9973] = 3,
    ACTIONS(1014), 1,
      sym__string_literal,
    ACTIONS(1018), 1,
      sym_object_name,
    STATE(205), 1,
      sym_short_index_name,
  [9983] = 3,
    ACTIONS(1215), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1217), 1,
      sym_object_name,
    STATE(598), 1,
      sym_user_name,
  [9993] = 3,
    ACTIONS(1061), 1,
      sym_object_name,
    ACTIONS(1219), 1,
      aux_sym_delete_statement_token2,
    STATE(250), 1,
      sym_table_name,
  [10003] = 3,
    ACTIONS(1172), 1,
      sym_object_name,
    ACTIONS(1221), 1,
      aux_sym_delete_statement_token2,
    STATE(245), 1,
      sym_keyspace_name,
  [10013] = 3,
    ACTIONS(1223), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1226), 1,
      aux_sym_primary_key_column_token1,
    STATE(497), 1,
      aux_sym_materialized_view_where_repeat1,
  [10023] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1228), 1,
      aux_sym_update_token2,
    STATE(922), 1,
      sym_using_ttl_timestamp,
  [10033] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1230), 1,
      aux_sym_primary_key_column_token1,
    STATE(37), 1,
      aux_sym_relation_elements_repeat1,
  [10043] = 3,
    ACTIONS(865), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1232), 1,
      sym__string_literal,
    STATE(588), 1,
      sym__decimal_literal,
  [10053] = 3,
    ACTIONS(1189), 1,
      sym_object_name,
    ACTIONS(1234), 1,
      aux_sym_delete_statement_token2,
    STATE(243), 1,
      sym_function_name,
  [10063] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_replication_list_repeat1,
  [10073] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym_typed_name,
  [10083] = 3,
    ACTIONS(1193), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token2,
    STATE(241), 1,
      sym_role_name,
  [10093] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(619), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10103] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(827), 1,
      sym_return_mode,
  [10113] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [10123] = 3,
    ACTIONS(1197), 1,
      sym_object_name,
    ACTIONS(1242), 1,
      aux_sym_delete_statement_token2,
    STATE(239), 1,
      sym_aggregate_name,
  [10133] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(414), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10143] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_clustering_key_list_repeat1,
  [10153] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(388), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10163] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(393), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10173] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      aux_sym_create_function_repeat1,
  [10183] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(412), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10193] = 3,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      aux_sym_option_hash_repeat1,
  [10203] = 2,
    ACTIONS(1250), 1,
      aux_sym_resource_token1,
    ACTIONS(1252), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [10211] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(930), 1,
      sym_return_mode,
  [10221] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_GT,
    STATE(518), 1,
      aux_sym_data_type_definition_repeat1,
  [10231] = 3,
    ACTIONS(1207), 1,
      sym_object_name,
    ACTIONS(1259), 1,
      aux_sym_delete_statement_token2,
    STATE(788), 1,
      sym_trigger_name,
  [10241] = 3,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      aux_sym_where_spec_token1,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [10251] = 3,
    ACTIONS(1213), 1,
      sym_object_name,
    ACTIONS(1266), 1,
      aux_sym_delete_statement_token2,
    STATE(235), 1,
      sym_type_name,
  [10261] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1010), 1,
      aux_sym_primary_key_column_token1,
    STATE(37), 1,
      aux_sym_relation_elements_repeat1,
  [10271] = 3,
    ACTIONS(1217), 1,
      sym_object_name,
    ACTIONS(1268), 1,
      aux_sym_delete_statement_token2,
    STATE(230), 1,
      sym_user_name,
  [10281] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_GT,
    STATE(455), 1,
      aux_sym_data_type_definition_repeat1,
  [10291] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [10301] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_typed_name,
  [10311] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_clustering_key_list_repeat1,
  [10321] = 3,
    ACTIONS(1276), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1278), 1,
      sym_object_name,
    STATE(247), 1,
      sym_materialized_view_name,
  [10331] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_clustering_key_list_repeat1,
  [10341] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_create_function_repeat1,
  [10351] = 2,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(1286), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [10359] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(702), 1,
      sym_return_mode,
  [10369] = 3,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      aux_sym_from_spec_token1,
    STATE(478), 1,
      aux_sym_select_elements_repeat1,
  [10379] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(418), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10389] = 2,
    ACTIONS(1290), 1,
      anon_sym_DOT,
    ACTIONS(1292), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10397] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(561), 1,
      sym_typed_name,
  [10407] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [10417] = 3,
    ACTIONS(1278), 1,
      sym_object_name,
    ACTIONS(1296), 1,
      aux_sym_delete_statement_token2,
    STATE(743), 1,
      sym_materialized_view_name,
  [10427] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [10437] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(908), 1,
      sym_return_mode,
  [10447] = 3,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(462), 1,
      sym_function_call,
    STATE(659), 1,
      sym_select_element,
  [10457] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_relation_element_repeat2,
  [10467] = 3,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RBRACE,
    STATE(555), 1,
      aux_sym_assignment_map_repeat1,
  [10477] = 2,
    ACTIONS(1304), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1302), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10485] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      aux_sym_column_definition_list_repeat1,
  [10495] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_function_args_repeat1,
  [10505] = 3,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(397), 1,
      sym_assignment_element,
    STATE(768), 1,
      sym_indexed_column,
  [10515] = 3,
    ACTIONS(865), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1313), 1,
      sym__string_literal,
    STATE(731), 1,
      sym__decimal_literal,
  [10525] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_replication_list_repeat1,
  [10535] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(869), 1,
      sym_return_mode,
  [10545] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      aux_sym_create_function_repeat1,
  [10555] = 3,
    ACTIONS(1068), 1,
      aux_sym_create_function_token1,
    ACTIONS(1070), 1,
      aux_sym_return_mode_token1,
    STATE(962), 1,
      sym_return_mode,
  [10565] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_clustering_key_list_repeat1,
  [10575] = 3,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(564), 1,
      sym_column_definition,
    STATE(723), 1,
      sym_column_definition_list,
  [10585] = 3,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RBRACE,
    STATE(555), 1,
      aux_sym_assignment_map_repeat1,
  [10595] = 3,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      aux_sym_option_hash_repeat1,
  [10605] = 1,
    ACTIONS(1334), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10611] = 3,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      aux_sym_expression_list_repeat1,
  [10621] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [10631] = 3,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym_relation_element_repeat1,
  [10641] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_create_function_repeat1,
  [10651] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      aux_sym_from_spec_token1,
    STATE(464), 1,
      aux_sym_delete_column_list_repeat1,
  [10661] = 3,
    ACTIONS(1026), 1,
      sym_object_name,
    ACTIONS(1344), 1,
      aux_sym_create_index_token3,
    STATE(978), 1,
      sym_index_name,
  [10671] = 3,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_column_definition_list_repeat1,
  [10681] = 1,
    ACTIONS(903), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10687] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_create_function_repeat1,
  [10697] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(701), 1,
      sym_table_name,
  [10704] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(979), 1,
      sym_table_name,
  [10711] = 2,
    ACTIONS(1354), 1,
      sym_object_name,
    STATE(680), 1,
      sym_delete_column_item,
  [10718] = 2,
    ACTIONS(1356), 1,
      anon_sym_DOT,
    ACTIONS(1358), 1,
      aux_sym_create_index_token3,
  [10725] = 2,
    ACTIONS(1360), 1,
      aux_sym_primary_key_column_token1,
    STATE(155), 1,
      sym_primary_key_element,
  [10732] = 2,
    ACTIONS(1362), 1,
      sym_object_name,
    STATE(408), 1,
      sym_column_not_null,
  [10739] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(122), 1,
      sym_where_spec,
  [10746] = 2,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_assignment_tuple,
  [10753] = 2,
    ACTIONS(1364), 1,
      sym_object_name,
    STATE(968), 1,
      sym_keyspace_name,
  [10760] = 1,
    ACTIONS(1366), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10765] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(967), 1,
      sym_function_name,
  [10772] = 1,
    ACTIONS(1332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10777] = 1,
    ACTIONS(1370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10782] = 1,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10787] = 2,
    ACTIONS(1374), 1,
      sym_object_name,
    STATE(120), 1,
      sym_role_name,
  [10794] = 1,
    ACTIONS(1309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10799] = 2,
    ACTIONS(1376), 1,
      sym_object_name,
    STATE(892), 1,
      sym_clustering_key_list,
  [10806] = 2,
    ACTIONS(1378), 1,
      aux_sym_durable_writes_token1,
    STATE(281), 1,
      sym_durable_writes,
  [10813] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(614), 1,
      sym_table_name,
  [10820] = 1,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10825] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(720), 1,
      sym_table_name,
  [10832] = 1,
    ACTIONS(1380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10837] = 2,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [10844] = 2,
    ACTIONS(1386), 1,
      sym_object_name,
    STATE(861), 1,
      sym_partition_key_list,
  [10851] = 2,
    ACTIONS(1388), 1,
      sym_object_name,
    STATE(949), 1,
      sym_aggregate_name,
  [10858] = 2,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(168), 1,
      sym_alter_type_rename_item,
  [10865] = 2,
    ACTIONS(1392), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_replication_list,
  [10872] = 2,
    ACTIONS(1394), 1,
      sym__string_literal,
    STATE(444), 1,
      sym_replication_list_item,
  [10879] = 2,
    ACTIONS(1396), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [10886] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(642), 1,
      sym_user_name,
  [10893] = 2,
    ACTIONS(1400), 1,
      sym_object_name,
    STATE(359), 1,
      sym_type_name,
  [10900] = 2,
    ACTIONS(1402), 1,
      aux_sym_create_keyspace_token1,
    STATE(237), 1,
      sym_user_with,
  [10907] = 2,
    ACTIONS(1404), 1,
      sym_object_name,
    STATE(941), 1,
      sym_trigger_name,
  [10914] = 2,
    ACTIONS(1406), 1,
      aux_sym_resource_token5,
    ACTIONS(1408), 1,
      aux_sym_drop_aggregate_token1,
  [10921] = 1,
    ACTIONS(1410), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10926] = 2,
    ACTIONS(1374), 1,
      sym_object_name,
    STATE(159), 1,
      sym_role_name,
  [10933] = 2,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(104), 1,
      sym_alter_type_rename_item,
  [10940] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(105), 1,
      sym_typed_name,
  [10947] = 2,
    ACTIONS(1400), 1,
      sym_object_name,
    STATE(940), 1,
      sym_type_name,
  [10954] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(637), 1,
      sym_user_name,
  [10961] = 2,
    ACTIONS(1364), 1,
      sym_object_name,
    STATE(762), 1,
      sym_keyspace_name,
  [10968] = 2,
    ACTIONS(1412), 1,
      sym__string_literal,
    STATE(450), 1,
      sym_option_hash_item,
  [10975] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(152), 1,
      sym_typed_name,
  [10982] = 2,
    ACTIONS(1414), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1416), 1,
      sym_object_name,
  [10989] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(330), 1,
      sym_table_name,
  [10996] = 2,
    ACTIONS(1418), 1,
      aux_sym_where_spec_token1,
    STATE(571), 1,
      sym_materialized_view_where,
  [11003] = 2,
    ACTIONS(1420), 1,
      sym_object_name,
    STATE(839), 1,
      sym_column_list,
  [11010] = 2,
    ACTIONS(1418), 1,
      aux_sym_where_spec_token1,
    STATE(632), 1,
      sym_materialized_view_where,
  [11017] = 2,
    ACTIONS(1422), 1,
      sym_object_name,
    STATE(223), 1,
      sym_materialized_view_name,
  [11024] = 1,
    ACTIONS(1257), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11029] = 2,
    ACTIONS(1424), 1,
      sym__string_literal,
    STATE(206), 1,
      sym_trigger_class,
  [11036] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(456), 1,
      sym_typed_name,
  [11043] = 1,
    ACTIONS(1264), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11048] = 1,
    ACTIONS(1426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11053] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(714), 1,
      sym_function_name,
  [11060] = 1,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11065] = 2,
    ACTIONS(1388), 1,
      sym_object_name,
    STATE(716), 1,
      sym_aggregate_name,
  [11072] = 2,
    ACTIONS(1428), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1430), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11079] = 2,
    ACTIONS(1412), 1,
      sym__string_literal,
    STATE(578), 1,
      sym_option_hash_item,
  [11086] = 1,
    ACTIONS(1432), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11091] = 1,
    ACTIONS(1434), 2,
      sym__string_literal,
      sym__float_literal,
  [11096] = 1,
    ACTIONS(1436), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11101] = 2,
    ACTIONS(1376), 1,
      sym_object_name,
    STATE(933), 1,
      sym_clustering_key_list,
  [11108] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(260), 1,
      sym_table_name,
  [11115] = 2,
    ACTIONS(865), 1,
      aux_sym__decimal_literal_token1,
    STATE(914), 1,
      sym__decimal_literal,
  [11122] = 2,
    ACTIONS(1360), 1,
      aux_sym_primary_key_column_token1,
    STATE(124), 1,
      sym_primary_key_element,
  [11129] = 2,
    ACTIONS(1394), 1,
      sym__string_literal,
    STATE(586), 1,
      sym_replication_list_item,
  [11136] = 2,
    ACTIONS(1438), 1,
      anon_sym_EQ,
    ACTIONS(1440), 1,
      anon_sym_LBRACK,
  [11143] = 1,
    ACTIONS(1226), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [11148] = 2,
    ACTIONS(1392), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_replication_list,
  [11155] = 2,
    ACTIONS(1402), 1,
      aux_sym_create_keyspace_token1,
    STATE(261), 1,
      sym_user_with,
  [11162] = 2,
    ACTIONS(1422), 1,
      sym_object_name,
    STATE(141), 1,
      sym_materialized_view_name,
  [11169] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(221), 1,
      sym_user_name,
  [11176] = 2,
    ACTIONS(1400), 1,
      sym_object_name,
    STATE(219), 1,
      sym_type_name,
  [11183] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(215), 1,
      sym_table_name,
  [11190] = 2,
    ACTIONS(1402), 1,
      aux_sym_create_keyspace_token1,
    STATE(279), 1,
      sym_user_with,
  [11197] = 2,
    ACTIONS(1404), 1,
      sym_object_name,
    STATE(913), 1,
      sym_trigger_name,
  [11204] = 2,
    ACTIONS(1396), 1,
      aux_sym_from_spec_token1,
    STATE(420), 1,
      sym_from_spec,
  [11211] = 2,
    ACTIONS(1388), 1,
      sym_object_name,
    STATE(211), 1,
      sym_aggregate_name,
  [11218] = 2,
    ACTIONS(1374), 1,
      sym_object_name,
    STATE(210), 1,
      sym_role_name,
  [11225] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(208), 1,
      sym_function_name,
  [11232] = 2,
    ACTIONS(1364), 1,
      sym_object_name,
    STATE(207), 1,
      sym_keyspace_name,
  [11239] = 2,
    ACTIONS(1420), 1,
      sym_object_name,
    STATE(782), 1,
      sym_column_list,
  [11246] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(263), 1,
      sym_table_name,
  [11253] = 2,
    ACTIONS(1422), 1,
      sym_object_name,
    STATE(783), 1,
      sym_materialized_view_name,
  [11260] = 1,
    ACTIONS(1442), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [11265] = 2,
    ACTIONS(1444), 1,
      aux_sym_role_with_option_token1,
    STATE(77), 1,
      sym_user_password,
  [11272] = 2,
    ACTIONS(1362), 1,
      sym_object_name,
    STATE(635), 1,
      sym_column_not_null,
  [11279] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(372), 1,
      sym_table_name,
  [11286] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(530), 1,
      sym_typed_name,
  [11293] = 2,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_option_hash,
  [11300] = 2,
    ACTIONS(1396), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [11307] = 1,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11312] = 2,
    ACTIONS(1424), 1,
      sym__string_literal,
    STATE(232), 1,
      sym_trigger_class,
  [11319] = 2,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(542), 1,
      sym_assignment_tuple,
  [11326] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(109), 1,
      sym_typed_name,
  [11333] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(265), 1,
      sym_table_name,
  [11340] = 2,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [11347] = 1,
    ACTIONS(1446), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11352] = 2,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(475), 1,
      sym_assignment_tuple,
  [11359] = 2,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_assignment_tuple,
  [11366] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(384), 1,
      sym_table_name,
  [11373] = 2,
    ACTIONS(865), 1,
      aux_sym__decimal_literal_token1,
    STATE(176), 1,
      sym__decimal_literal,
  [11380] = 1,
    ACTIONS(1448), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11385] = 2,
    ACTIONS(1378), 1,
      aux_sym_durable_writes_token1,
    STATE(246), 1,
      sym_durable_writes,
  [11392] = 2,
    ACTIONS(1392), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_replication_list,
  [11399] = 2,
    ACTIONS(1396), 1,
      aux_sym_from_spec_token1,
    STATE(387), 1,
      sym_from_spec,
  [11406] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(138), 1,
      sym_where_spec,
  [11413] = 1,
    ACTIONS(1450), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11418] = 2,
    ACTIONS(1452), 1,
      sym_object_name,
    STATE(696), 1,
      sym_init_cond_hash_item,
  [11425] = 1,
    ACTIONS(1142), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11430] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(57), 1,
      sym_table_name,
  [11437] = 1,
    ACTIONS(1454), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11442] = 1,
    ACTIONS(1133), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11447] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(824), 1,
      sym_table_name,
  [11454] = 1,
    ACTIONS(1456), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11459] = 2,
    ACTIONS(1396), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [11466] = 2,
    ACTIONS(1420), 1,
      sym_object_name,
    STATE(741), 1,
      sym_column_list,
  [11473] = 2,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(582), 1,
      sym_column_definition,
  [11480] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(856), 1,
      sym_table_name,
  [11487] = 1,
    ACTIONS(1458), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11492] = 1,
    ACTIONS(1460), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11497] = 1,
    ACTIONS(1462), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [11502] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(612), 1,
      sym_table_name,
  [11509] = 2,
    ACTIONS(1464), 1,
      sym_object_name,
    STATE(182), 1,
      sym_if_condition,
  [11516] = 1,
    ACTIONS(1083), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11521] = 1,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11526] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(151), 1,
      sym_where_spec,
  [11533] = 2,
    ACTIONS(1378), 1,
      aux_sym_durable_writes_token1,
    STATE(229), 1,
      sym_durable_writes,
  [11540] = 1,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11545] = 1,
    ACTIONS(1466), 1,
      aux_sym_create_aggregate_token3,
  [11549] = 1,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
  [11553] = 1,
    ACTIONS(1470), 1,
      aux_sym_return_mode_token2,
  [11557] = 1,
    ACTIONS(1472), 1,
      aux_sym_create_function_token2,
  [11561] = 1,
    ACTIONS(1474), 1,
      anon_sym_LPAREN,
  [11565] = 1,
    ACTIONS(1476), 1,
      aux_sym_create_function_token1,
  [11569] = 1,
    ACTIONS(1478), 1,
      anon_sym_COLON,
  [11573] = 1,
    ACTIONS(1480), 1,
      aux_sym_insert_statement_token3,
  [11577] = 1,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
  [11581] = 1,
    ACTIONS(1484), 1,
      aux_sym_create_aggregate_token4,
  [11585] = 1,
    ACTIONS(1486), 1,
      aux_sym_delete_statement_token3,
  [11589] = 1,
    ACTIONS(1488), 1,
      anon_sym_COLON,
  [11593] = 1,
    ACTIONS(1490), 1,
      anon_sym_EQ,
  [11597] = 1,
    ACTIONS(1492), 1,
      aux_sym_select_statement_token1,
  [11601] = 1,
    ACTIONS(1494), 1,
      sym_object_name,
  [11605] = 1,
    ACTIONS(1496), 1,
      aux_sym_delete_statement_token3,
  [11609] = 1,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
  [11613] = 1,
    ACTIONS(1500), 1,
      anon_sym_LPAREN,
  [11617] = 1,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
  [11621] = 1,
    ACTIONS(1504), 1,
      anon_sym_LPAREN,
  [11625] = 1,
    ACTIONS(1506), 1,
      anon_sym_EQ,
  [11629] = 1,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
  [11633] = 1,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
  [11637] = 1,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
  [11641] = 1,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
  [11645] = 1,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [11649] = 1,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
  [11653] = 1,
    ACTIONS(1520), 1,
      aux_sym_delete_statement_token3,
  [11657] = 1,
    ACTIONS(1522), 1,
      aux_sym_create_keyspace_token2,
  [11661] = 1,
    ACTIONS(1524), 1,
      aux_sym_delete_statement_token3,
  [11665] = 1,
    ACTIONS(1526), 1,
      aux_sym__decimal_literal_token1,
  [11669] = 1,
    ACTIONS(1528), 1,
      sym_object_name,
  [11673] = 1,
    ACTIONS(1530), 1,
      sym_object_name,
  [11677] = 1,
    ACTIONS(1532), 1,
      sym_object_name,
  [11681] = 1,
    ACTIONS(1534), 1,
      anon_sym_RBRACK,
  [11685] = 1,
    ACTIONS(1536), 1,
      aux_sym_delete_statement_token3,
  [11689] = 1,
    ACTIONS(1538), 1,
      aux_sym_delete_statement_token3,
  [11693] = 1,
    ACTIONS(1540), 1,
      aux_sym_order_spec_token2,
  [11697] = 1,
    ACTIONS(1542), 1,
      aux_sym_delete_statement_token3,
  [11701] = 1,
    ACTIONS(1544), 1,
      aux_sym_select_statement_token5,
  [11705] = 1,
    ACTIONS(1546), 1,
      sym_object_name,
  [11709] = 1,
    ACTIONS(1548), 1,
      anon_sym_RPAREN,
  [11713] = 1,
    ACTIONS(1550), 1,
      anon_sym_LPAREN,
  [11717] = 1,
    ACTIONS(1552), 1,
      aux_sym_select_statement_token5,
  [11721] = 1,
    ACTIONS(1554), 1,
      anon_sym_RPAREN,
  [11725] = 1,
    ACTIONS(1556), 1,
      aux_sym_delete_statement_token3,
  [11729] = 1,
    ACTIONS(1558), 1,
      aux_sym_select_element_token1,
  [11733] = 1,
    ACTIONS(1560), 1,
      aux_sym_select_statement_token5,
  [11737] = 1,
    ACTIONS(1562), 1,
      aux_sym_delete_statement_token3,
  [11741] = 1,
    ACTIONS(1564), 1,
      sym_object_name,
  [11745] = 1,
    ACTIONS(1566), 1,
      aux_sym_delete_statement_token3,
  [11749] = 1,
    ACTIONS(1568), 1,
      sym_object_name,
  [11753] = 1,
    ACTIONS(1570), 1,
      aux_sym_delete_statement_token3,
  [11757] = 1,
    ACTIONS(1572), 1,
      aux_sym_insert_statement_token3,
  [11761] = 1,
    ACTIONS(1574), 1,
      sym_object_name,
  [11765] = 1,
    ACTIONS(1576), 1,
      sym_object_name,
  [11769] = 1,
    ACTIONS(1578), 1,
      aux_sym_delete_statement_token3,
  [11773] = 1,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
  [11777] = 1,
    ACTIONS(1582), 1,
      anon_sym_LPAREN,
  [11781] = 1,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
  [11785] = 1,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
  [11789] = 1,
    ACTIONS(1588), 1,
      anon_sym_RPAREN,
  [11793] = 1,
    ACTIONS(1590), 1,
      sym_object_name,
  [11797] = 1,
    ACTIONS(1592), 1,
      aux_sym__decimal_literal_token1,
  [11801] = 1,
    ACTIONS(1594), 1,
      aux_sym__decimal_literal_token1,
  [11805] = 1,
    ACTIONS(1596), 1,
      aux_sym_create_keyspace_token1,
  [11809] = 1,
    ACTIONS(1598), 1,
      anon_sym_EQ,
  [11813] = 1,
    ACTIONS(1600), 1,
      anon_sym_EQ,
  [11817] = 1,
    ACTIONS(1602), 1,
      aux_sym_update_token2,
  [11821] = 1,
    ACTIONS(1604), 1,
      aux_sym_create_function_token1,
  [11825] = 1,
    ACTIONS(1606), 1,
      sym_object_name,
  [11829] = 1,
    ACTIONS(1608), 1,
      anon_sym_EQ,
  [11833] = 1,
    ACTIONS(1610), 1,
      aux_sym_return_mode_token2,
  [11837] = 1,
    ACTIONS(1612), 1,
      aux_sym_create_function_token1,
  [11841] = 1,
    ACTIONS(1614), 1,
      sym_object_name,
  [11845] = 1,
    ACTIONS(1616), 1,
      aux_sym_create_function_token2,
  [11849] = 1,
    ACTIONS(1618), 1,
      aux_sym__decimal_literal_token1,
  [11853] = 1,
    ACTIONS(1620), 1,
      aux_sym__decimal_literal_token1,
  [11857] = 1,
    ACTIONS(1622), 1,
      sym_object_name,
  [11861] = 1,
    ACTIONS(1624), 1,
      sym_object_name,
  [11865] = 1,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
  [11869] = 1,
    ACTIONS(1628), 1,
      aux_sym_create_aggregate_token3,
  [11873] = 1,
    ACTIONS(1630), 1,
      sym_object_name,
  [11877] = 1,
    ACTIONS(1632), 1,
      sym_object_name,
  [11881] = 1,
    ACTIONS(1634), 1,
      aux_sym_delete_statement_token3,
  [11885] = 1,
    ACTIONS(1636), 1,
      aux_sym_from_spec_token1,
  [11889] = 1,
    ACTIONS(1638), 1,
      aux_sym_select_element_token1,
  [11893] = 1,
    ACTIONS(1640), 1,
      sym_object_name,
  [11897] = 1,
    ACTIONS(1642), 1,
      aux_sym_delete_statement_token3,
  [11901] = 1,
    ACTIONS(1644), 1,
      aux_sym_grant_token2,
  [11905] = 1,
    ACTIONS(1646), 1,
      aux_sym_from_spec_token1,
  [11909] = 1,
    ACTIONS(1648), 1,
      aux_sym_create_index_token3,
  [11913] = 1,
    ACTIONS(1650), 1,
      sym_object_name,
  [11917] = 1,
    ACTIONS(1652), 1,
      aux_sym_delete_statement_token3,
  [11921] = 1,
    ACTIONS(1654), 1,
      sym_object_name,
  [11925] = 1,
    ACTIONS(1656), 1,
      aux_sym_delete_statement_token3,
  [11929] = 1,
    ACTIONS(1658), 1,
      aux_sym_delete_statement_token3,
  [11933] = 1,
    ACTIONS(1660), 1,
      aux_sym_create_keyspace_token2,
  [11937] = 1,
    ACTIONS(1662), 1,
      aux_sym_delete_statement_token3,
  [11941] = 1,
    ACTIONS(1664), 1,
      aux_sym_delete_statement_token3,
  [11945] = 1,
    ACTIONS(1666), 1,
      sym_object_name,
  [11949] = 1,
    ACTIONS(1668), 1,
      aux_sym_delete_statement_token3,
  [11953] = 1,
    ACTIONS(1670), 1,
      aux_sym_create_function_token1,
  [11957] = 1,
    ACTIONS(1672), 1,
      sym_object_name,
  [11961] = 1,
    ACTIONS(1674), 1,
      aux_sym_insert_statement_token3,
  [11965] = 1,
    ACTIONS(1676), 1,
      anon_sym_LPAREN,
  [11969] = 1,
    ACTIONS(1678), 1,
      aux_sym_insert_statement_token3,
  [11973] = 1,
    ACTIONS(1680), 1,
      aux_sym_using_timestamp_spec_token1,
  [11977] = 1,
    ACTIONS(1682), 1,
      aux_sym_constant_token2,
  [11981] = 1,
    ACTIONS(1684), 1,
      aux_sym_insert_statement_token3,
  [11985] = 1,
    ACTIONS(1686), 1,
      aux_sym_create_index_token3,
  [11989] = 1,
    ACTIONS(1688), 1,
      aux_sym_update_token2,
  [11993] = 1,
    ACTIONS(1690), 1,
      aux_sym_create_keyspace_token2,
  [11997] = 1,
    ACTIONS(1692), 1,
      anon_sym_LPAREN,
  [12001] = 1,
    ACTIONS(1694), 1,
      aux_sym_insert_statement_token3,
  [12005] = 1,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [12009] = 1,
    ACTIONS(1698), 1,
      aux_sym_insert_statement_token3,
  [12013] = 1,
    ACTIONS(1700), 1,
      aux_sym_select_statement_token5,
  [12017] = 1,
    ACTIONS(1702), 1,
      sym_object_name,
  [12021] = 1,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
  [12025] = 1,
    ACTIONS(1706), 1,
      anon_sym_RPAREN,
  [12029] = 1,
    ACTIONS(1708), 1,
      anon_sym_LPAREN,
  [12033] = 1,
    ACTIONS(1710), 1,
      anon_sym_RPAREN,
  [12037] = 1,
    ACTIONS(1712), 1,
      aux_sym_insert_statement_token3,
  [12041] = 1,
    ACTIONS(1714), 1,
      sym_object_name,
  [12045] = 1,
    ACTIONS(1716), 1,
      sym_object_name,
  [12049] = 1,
    ACTIONS(1718), 1,
      aux_sym_create_keyspace_token1,
  [12053] = 1,
    ACTIONS(1720), 1,
      anon_sym_LPAREN,
  [12057] = 1,
    ACTIONS(1722), 1,
      sym__boolean_literal,
  [12061] = 1,
    ACTIONS(1724), 1,
      aux_sym_insert_statement_token3,
  [12065] = 1,
    ACTIONS(1726), 1,
      aux_sym_create_function_token1,
  [12069] = 1,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
  [12073] = 1,
    ACTIONS(1730), 1,
      aux_sym_create_function_token1,
  [12077] = 1,
    ACTIONS(1732), 1,
      aux_sym_select_element_token1,
  [12081] = 1,
    ACTIONS(1734), 1,
      sym_object_name,
  [12085] = 1,
    ACTIONS(1736), 1,
      aux_sym_create_function_token2,
  [12089] = 1,
    ACTIONS(1738), 1,
      aux_sym_relation_contains_key_token2,
  [12093] = 1,
    ACTIONS(1740), 1,
      sym_object_name,
  [12097] = 1,
    ACTIONS(1742), 1,
      aux_sym_create_index_token3,
  [12101] = 1,
    ACTIONS(1744), 1,
      aux_sym_relation_contains_key_token2,
  [12105] = 1,
    ACTIONS(1746), 1,
      sym_object_name,
  [12109] = 1,
    ACTIONS(1748), 1,
      aux_sym_create_aggregate_token5,
  [12113] = 1,
    ACTIONS(1750), 1,
      aux_sym_from_spec_token1,
  [12117] = 1,
    ACTIONS(1752), 1,
      aux_sym_delete_statement_token3,
  [12121] = 1,
    ACTIONS(1754), 1,
      anon_sym_LPAREN,
  [12125] = 1,
    ACTIONS(1756), 1,
      anon_sym_EQ,
  [12129] = 1,
    ACTIONS(1758), 1,
      anon_sym_EQ,
  [12133] = 1,
    ACTIONS(1760), 1,
      anon_sym_RPAREN,
  [12137] = 1,
    ACTIONS(1762), 1,
      aux_sym_create_aggregate_token4,
  [12141] = 1,
    ACTIONS(1764), 1,
      aux_sym_constant_token2,
  [12145] = 1,
    ACTIONS(1766), 1,
      aux_sym_insert_statement_token3,
  [12149] = 1,
    ACTIONS(1768), 1,
      anon_sym_LPAREN,
  [12153] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [12157] = 1,
    ACTIONS(1772), 1,
      aux_sym_insert_statement_token3,
  [12161] = 1,
    ACTIONS(1774), 1,
      sym_object_name,
  [12165] = 1,
    ACTIONS(1776), 1,
      aux_sym_insert_statement_token3,
  [12169] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [12173] = 1,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
  [12177] = 1,
    ACTIONS(1782), 1,
      aux_sym_create_index_token3,
  [12181] = 1,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
  [12185] = 1,
    ACTIONS(1786), 1,
      anon_sym_COLON,
  [12189] = 1,
    ACTIONS(1788), 1,
      aux_sym_using_timestamp_spec_token2,
  [12193] = 1,
    ACTIONS(1790), 1,
      anon_sym_LPAREN,
  [12197] = 1,
    ACTIONS(1792), 1,
      anon_sym_EQ,
  [12201] = 1,
    ACTIONS(1794), 1,
      anon_sym_RPAREN,
  [12205] = 1,
    ACTIONS(1796), 1,
      aux_sym_select_statement_token5,
  [12209] = 1,
    ACTIONS(1798), 1,
      anon_sym_EQ,
  [12213] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [12217] = 1,
    ACTIONS(1802), 1,
      aux_sym_update_token2,
  [12221] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [12225] = 1,
    ACTIONS(1806), 1,
      aux_sym_create_function_token2,
  [12229] = 1,
    ACTIONS(1808), 1,
      anon_sym_STAR,
  [12233] = 1,
    ACTIONS(1810), 1,
      aux_sym_create_function_token1,
  [12237] = 1,
    ACTIONS(1812), 1,
      sym__code_block,
  [12241] = 1,
    ACTIONS(1814), 1,
      aux_sym_select_element_token1,
  [12245] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [12249] = 1,
    ACTIONS(1818), 1,
      aux_sym_create_aggregate_token4,
  [12253] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [12257] = 1,
    ACTIONS(1822), 1,
      aux_sym_drop_type_token1,
  [12261] = 1,
    ACTIONS(819), 1,
      aux_sym_column_not_null_token1,
  [12265] = 1,
    ACTIONS(1824), 1,
      anon_sym_EQ,
  [12269] = 1,
    ACTIONS(1826), 1,
      anon_sym_EQ,
  [12273] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [12277] = 1,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
  [12281] = 1,
    ACTIONS(1832), 1,
      aux_sym_create_aggregate_token3,
  [12285] = 1,
    ACTIONS(1834), 1,
      aux_sym_delete_statement_token3,
  [12289] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [12293] = 1,
    ACTIONS(1838), 1,
      aux_sym_insert_statement_token2,
  [12297] = 1,
    ACTIONS(1840), 1,
      sym_object_name,
  [12301] = 1,
    ACTIONS(1842), 1,
      sym_object_name,
  [12305] = 1,
    ACTIONS(1844), 1,
      aux_sym_drop_materialized_view_token2,
  [12309] = 1,
    ACTIONS(1846), 1,
      aux_sym_select_statement_token1,
  [12313] = 1,
    ACTIONS(1848), 1,
      aux_sym_order_spec_token2,
  [12317] = 1,
    ACTIONS(1850), 1,
      anon_sym_COMMA,
  [12321] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [12325] = 1,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
  [12329] = 1,
    ACTIONS(1856), 1,
      sym__string_literal,
  [12333] = 1,
    ACTIONS(1858), 1,
      sym_object_name,
  [12337] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token2,
  [12341] = 1,
    ACTIONS(1862), 1,
      aux_sym_insert_statement_token3,
  [12345] = 1,
    ACTIONS(1864), 1,
      aux_sym_create_index_token3,
  [12349] = 1,
    ACTIONS(1866), 1,
      sym__code_block,
  [12353] = 1,
    ACTIONS(1868), 1,
      aux_sym_select_element_token1,
  [12357] = 1,
    ACTIONS(1870), 1,
      aux_sym_create_index_token3,
  [12361] = 1,
    ACTIONS(1872), 1,
      aux_sym_create_aggregate_token6,
  [12365] = 1,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
  [12369] = 1,
    ACTIONS(1876), 1,
      aux_sym_insert_statement_token3,
  [12373] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [12377] = 1,
    ACTIONS(1880), 1,
      aux_sym_resource_token2,
  [12381] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [12385] = 1,
    ACTIONS(1884), 1,
      aux_sym_insert_statement_token3,
  [12389] = 1,
    ACTIONS(1886), 1,
      aux_sym_create_function_token1,
  [12393] = 1,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
  [12397] = 1,
    ACTIONS(1890), 1,
      sym_object_name,
  [12401] = 1,
    ACTIONS(1892), 1,
      aux_sym_create_aggregate_token5,
  [12405] = 1,
    ACTIONS(1894), 1,
      aux_sym_drop_materialized_view_token2,
  [12409] = 1,
    ACTIONS(1896), 1,
      aux_sym_create_index_token3,
  [12413] = 1,
    ACTIONS(1898), 1,
      anon_sym_RBRACK,
  [12417] = 1,
    ACTIONS(1900), 1,
      aux_sym_using_timestamp_spec_token2,
  [12421] = 1,
    ACTIONS(1902), 1,
      aux_sym_select_element_token1,
  [12425] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [12429] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_function_token2,
  [12433] = 1,
    ACTIONS(1908), 1,
      aux_sym_using_ttl_timestamp_token1,
  [12437] = 1,
    ACTIONS(1910), 1,
      sym__code_block,
  [12441] = 1,
    ACTIONS(1912), 1,
      aux_sym_create_aggregate_token5,
  [12445] = 1,
    ACTIONS(1914), 1,
      aux_sym_update_token2,
  [12449] = 1,
    ACTIONS(1916), 1,
      aux_sym_delete_statement_token3,
  [12453] = 1,
    ACTIONS(1918), 1,
      aux_sym_constant_token2,
  [12457] = 1,
    ACTIONS(1920), 1,
      aux_sym_delete_statement_token3,
  [12461] = 1,
    ACTIONS(1922), 1,
      sym_object_name,
  [12465] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [12469] = 1,
    ACTIONS(1926), 1,
      sym_object_name,
  [12473] = 1,
    ACTIONS(1928), 1,
      aux_sym_compact_storage_token2,
  [12477] = 1,
    ACTIONS(1930), 1,
      aux_sym_create_function_token1,
  [12481] = 1,
    ACTIONS(1932), 1,
      aux_sym_create_aggregate_token4,
  [12485] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [12489] = 1,
    ACTIONS(1936), 1,
      anon_sym_RPAREN,
  [12493] = 1,
    ACTIONS(1938), 1,
      sym__code_block,
  [12497] = 1,
    ACTIONS(1940), 1,
      aux_sym_select_element_token1,
  [12501] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [12505] = 1,
    ACTIONS(1944), 1,
      aux_sym_compact_storage_token2,
  [12509] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [12513] = 1,
    ACTIONS(1948), 1,
      aux_sym_create_aggregate_token2,
  [12517] = 1,
    ACTIONS(1950), 1,
      anon_sym_LPAREN,
  [12521] = 1,
    ACTIONS(1952), 1,
      aux_sym_using_timestamp_spec_token1,
  [12525] = 1,
    ACTIONS(1954), 1,
      aux_sym_order_spec_token1,
  [12529] = 1,
    ACTIONS(1956), 1,
      anon_sym_EQ,
  [12533] = 1,
    ACTIONS(1958), 1,
      anon_sym_EQ,
  [12537] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_function_token2,
  [12541] = 1,
    ACTIONS(1962), 1,
      aux_sym_drop_materialized_view_token2,
  [12545] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_aggregate_token3,
  [12549] = 1,
    ACTIONS(1966), 1,
      aux_sym_create_aggregate_token6,
  [12553] = 1,
    ACTIONS(1968), 1,
      anon_sym_LPAREN,
  [12557] = 1,
    ACTIONS(1970), 1,
      sym__code_block,
  [12561] = 1,
    ACTIONS(1972), 1,
      aux_sym_select_element_token1,
  [12565] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_aggregate_token6,
  [12569] = 1,
    ACTIONS(1976), 1,
      aux_sym_grant_token2,
  [12573] = 1,
    ACTIONS(1978), 1,
      anon_sym_COLON,
  [12577] = 1,
    ACTIONS(1980), 1,
      sym_object_name,
  [12581] = 1,
    ACTIONS(1982), 1,
      sym__boolean_literal,
  [12585] = 1,
    ACTIONS(1984), 1,
      sym__boolean_literal,
  [12589] = 1,
    ACTIONS(1986), 1,
      sym__string_literal,
  [12593] = 1,
    ACTIONS(1988), 1,
      sym_object_name,
  [12597] = 1,
    ACTIONS(1990), 1,
      aux_sym_create_function_token2,
  [12601] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_aggregate_token5,
  [12605] = 1,
    ACTIONS(1994), 1,
      aux_sym_create_function_token1,
  [12609] = 1,
    ACTIONS(1996), 1,
      aux_sym_create_index_token3,
  [12613] = 1,
    ACTIONS(1998), 1,
      sym__code_block,
  [12617] = 1,
    ACTIONS(2000), 1,
      aux_sym_constant_token2,
  [12621] = 1,
    ACTIONS(2002), 1,
      aux_sym_begin_batch_token4,
  [12625] = 1,
    ACTIONS(2004), 1,
      anon_sym_LPAREN,
  [12629] = 1,
    ACTIONS(2006), 1,
      aux_sym_create_keyspace_token1,
  [12633] = 1,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
  [12637] = 1,
    ACTIONS(2010), 1,
      anon_sym_RPAREN,
  [12641] = 1,
    ACTIONS(2012), 1,
      anon_sym_RPAREN,
  [12645] = 1,
    ACTIONS(2014), 1,
      anon_sym_LPAREN,
  [12649] = 1,
    ACTIONS(2016), 1,
      anon_sym_LPAREN,
  [12653] = 1,
    ACTIONS(2018), 1,
      anon_sym_LPAREN,
  [12657] = 1,
    ACTIONS(2020), 1,
      aux_sym_select_element_token1,
  [12661] = 1,
    ACTIONS(2022), 1,
      sym_object_name,
  [12665] = 1,
    ACTIONS(2024), 1,
      sym_object_name,
  [12669] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_index_token3,
  [12673] = 1,
    ACTIONS(2028), 1,
      anon_sym_LPAREN,
  [12677] = 1,
    ACTIONS(2030), 1,
      aux_sym_delete_statement_token3,
  [12681] = 1,
    ACTIONS(2032), 1,
      aux_sym_insert_statement_token3,
  [12685] = 1,
    ACTIONS(2034), 1,
      anon_sym_RPAREN,
  [12689] = 1,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
  [12693] = 1,
    ACTIONS(2036), 1,
      ts_builtin_sym_end,
  [12697] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [12701] = 1,
    ACTIONS(2040), 1,
      aux_sym_select_statement_token5,
  [12705] = 1,
    ACTIONS(2042), 1,
      aux_sym_begin_batch_token4,
  [12709] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [12713] = 1,
    ACTIONS(2046), 1,
      sym__code_block,
  [12717] = 1,
    ACTIONS(2048), 1,
      aux_sym_select_element_token1,
  [12721] = 1,
    ACTIONS(2050), 1,
      aux_sym_create_aggregate_token6,
  [12725] = 1,
    ACTIONS(2052), 1,
      sym_object_name,
  [12729] = 1,
    ACTIONS(2054), 1,
      sym__code_block,
  [12733] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [12737] = 1,
    ACTIONS(2058), 1,
      aux_sym_grant_token2,
  [12741] = 1,
    ACTIONS(2060), 1,
      aux_sym_insert_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 493,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 563,
  [SMALL_STATE(16)] = 598,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 703,
  [SMALL_STATE(20)] = 738,
  [SMALL_STATE(21)] = 773,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 843,
  [SMALL_STATE(24)] = 878,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 948,
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1015,
  [SMALL_STATE(29)] = 1047,
  [SMALL_STATE(30)] = 1077,
  [SMALL_STATE(31)] = 1109,
  [SMALL_STATE(32)] = 1140,
  [SMALL_STATE(33)] = 1167,
  [SMALL_STATE(34)] = 1198,
  [SMALL_STATE(35)] = 1229,
  [SMALL_STATE(36)] = 1260,
  [SMALL_STATE(37)] = 1287,
  [SMALL_STATE(38)] = 1317,
  [SMALL_STATE(39)] = 1343,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1423,
  [SMALL_STATE(42)] = 1453,
  [SMALL_STATE(43)] = 1493,
  [SMALL_STATE(44)] = 1518,
  [SMALL_STATE(45)] = 1543,
  [SMALL_STATE(46)] = 1568,
  [SMALL_STATE(47)] = 1593,
  [SMALL_STATE(48)] = 1618,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1718,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1772,
  [SMALL_STATE(55)] = 1801,
  [SMALL_STATE(56)] = 1825,
  [SMALL_STATE(57)] = 1859,
  [SMALL_STATE(58)] = 1883,
  [SMALL_STATE(59)] = 1907,
  [SMALL_STATE(60)] = 1941,
  [SMALL_STATE(61)] = 1965,
  [SMALL_STATE(62)] = 1999,
  [SMALL_STATE(63)] = 2024,
  [SMALL_STATE(64)] = 2049,
  [SMALL_STATE(65)] = 2074,
  [SMALL_STATE(66)] = 2099,
  [SMALL_STATE(67)] = 2124,
  [SMALL_STATE(68)] = 2147,
  [SMALL_STATE(69)] = 2172,
  [SMALL_STATE(70)] = 2210,
  [SMALL_STATE(71)] = 2238,
  [SMALL_STATE(72)] = 2266,
  [SMALL_STATE(73)] = 2290,
  [SMALL_STATE(74)] = 2312,
  [SMALL_STATE(75)] = 2340,
  [SMALL_STATE(76)] = 2362,
  [SMALL_STATE(77)] = 2390,
  [SMALL_STATE(78)] = 2416,
  [SMALL_STATE(79)] = 2444,
  [SMALL_STATE(80)] = 2482,
  [SMALL_STATE(81)] = 2504,
  [SMALL_STATE(82)] = 2530,
  [SMALL_STATE(83)] = 2558,
  [SMALL_STATE(84)] = 2586,
  [SMALL_STATE(85)] = 2608,
  [SMALL_STATE(86)] = 2630,
  [SMALL_STATE(87)] = 2654,
  [SMALL_STATE(88)] = 2680,
  [SMALL_STATE(89)] = 2702,
  [SMALL_STATE(90)] = 2724,
  [SMALL_STATE(91)] = 2746,
  [SMALL_STATE(92)] = 2771,
  [SMALL_STATE(93)] = 2796,
  [SMALL_STATE(94)] = 2821,
  [SMALL_STATE(95)] = 2842,
  [SMALL_STATE(96)] = 2867,
  [SMALL_STATE(97)] = 2892,
  [SMALL_STATE(98)] = 2917,
  [SMALL_STATE(99)] = 2938,
  [SMALL_STATE(100)] = 2963,
  [SMALL_STATE(101)] = 2988,
  [SMALL_STATE(102)] = 3013,
  [SMALL_STATE(103)] = 3034,
  [SMALL_STATE(104)] = 3059,
  [SMALL_STATE(105)] = 3084,
  [SMALL_STATE(106)] = 3109,
  [SMALL_STATE(107)] = 3134,
  [SMALL_STATE(108)] = 3159,
  [SMALL_STATE(109)] = 3184,
  [SMALL_STATE(110)] = 3205,
  [SMALL_STATE(111)] = 3226,
  [SMALL_STATE(112)] = 3251,
  [SMALL_STATE(113)] = 3272,
  [SMALL_STATE(114)] = 3293,
  [SMALL_STATE(115)] = 3318,
  [SMALL_STATE(116)] = 3341,
  [SMALL_STATE(117)] = 3366,
  [SMALL_STATE(118)] = 3391,
  [SMALL_STATE(119)] = 3416,
  [SMALL_STATE(120)] = 3441,
  [SMALL_STATE(121)] = 3466,
  [SMALL_STATE(122)] = 3489,
  [SMALL_STATE(123)] = 3514,
  [SMALL_STATE(124)] = 3535,
  [SMALL_STATE(125)] = 3560,
  [SMALL_STATE(126)] = 3585,
  [SMALL_STATE(127)] = 3606,
  [SMALL_STATE(128)] = 3631,
  [SMALL_STATE(129)] = 3656,
  [SMALL_STATE(130)] = 3681,
  [SMALL_STATE(131)] = 3706,
  [SMALL_STATE(132)] = 3727,
  [SMALL_STATE(133)] = 3748,
  [SMALL_STATE(134)] = 3773,
  [SMALL_STATE(135)] = 3798,
  [SMALL_STATE(136)] = 3823,
  [SMALL_STATE(137)] = 3848,
  [SMALL_STATE(138)] = 3869,
  [SMALL_STATE(139)] = 3894,
  [SMALL_STATE(140)] = 3919,
  [SMALL_STATE(141)] = 3940,
  [SMALL_STATE(142)] = 3965,
  [SMALL_STATE(143)] = 3988,
  [SMALL_STATE(144)] = 4013,
  [SMALL_STATE(145)] = 4036,
  [SMALL_STATE(146)] = 4057,
  [SMALL_STATE(147)] = 4092,
  [SMALL_STATE(148)] = 4117,
  [SMALL_STATE(149)] = 4138,
  [SMALL_STATE(150)] = 4163,
  [SMALL_STATE(151)] = 4188,
  [SMALL_STATE(152)] = 4213,
  [SMALL_STATE(153)] = 4238,
  [SMALL_STATE(154)] = 4263,
  [SMALL_STATE(155)] = 4284,
  [SMALL_STATE(156)] = 4309,
  [SMALL_STATE(157)] = 4330,
  [SMALL_STATE(158)] = 4355,
  [SMALL_STATE(159)] = 4376,
  [SMALL_STATE(160)] = 4401,
  [SMALL_STATE(161)] = 4426,
  [SMALL_STATE(162)] = 4446,
  [SMALL_STATE(163)] = 4466,
  [SMALL_STATE(164)] = 4486,
  [SMALL_STATE(165)] = 4506,
  [SMALL_STATE(166)] = 4526,
  [SMALL_STATE(167)] = 4546,
  [SMALL_STATE(168)] = 4566,
  [SMALL_STATE(169)] = 4586,
  [SMALL_STATE(170)] = 4608,
  [SMALL_STATE(171)] = 4628,
  [SMALL_STATE(172)] = 4650,
  [SMALL_STATE(173)] = 4670,
  [SMALL_STATE(174)] = 4690,
  [SMALL_STATE(175)] = 4712,
  [SMALL_STATE(176)] = 4732,
  [SMALL_STATE(177)] = 4752,
  [SMALL_STATE(178)] = 4772,
  [SMALL_STATE(179)] = 4794,
  [SMALL_STATE(180)] = 4814,
  [SMALL_STATE(181)] = 4834,
  [SMALL_STATE(182)] = 4854,
  [SMALL_STATE(183)] = 4874,
  [SMALL_STATE(184)] = 4894,
  [SMALL_STATE(185)] = 4916,
  [SMALL_STATE(186)] = 4938,
  [SMALL_STATE(187)] = 4958,
  [SMALL_STATE(188)] = 4978,
  [SMALL_STATE(189)] = 4998,
  [SMALL_STATE(190)] = 5018,
  [SMALL_STATE(191)] = 5040,
  [SMALL_STATE(192)] = 5060,
  [SMALL_STATE(193)] = 5080,
  [SMALL_STATE(194)] = 5102,
  [SMALL_STATE(195)] = 5124,
  [SMALL_STATE(196)] = 5144,
  [SMALL_STATE(197)] = 5166,
  [SMALL_STATE(198)] = 5186,
  [SMALL_STATE(199)] = 5205,
  [SMALL_STATE(200)] = 5224,
  [SMALL_STATE(201)] = 5243,
  [SMALL_STATE(202)] = 5262,
  [SMALL_STATE(203)] = 5281,
  [SMALL_STATE(204)] = 5300,
  [SMALL_STATE(205)] = 5319,
  [SMALL_STATE(206)] = 5338,
  [SMALL_STATE(207)] = 5357,
  [SMALL_STATE(208)] = 5376,
  [SMALL_STATE(209)] = 5395,
  [SMALL_STATE(210)] = 5414,
  [SMALL_STATE(211)] = 5433,
  [SMALL_STATE(212)] = 5452,
  [SMALL_STATE(213)] = 5471,
  [SMALL_STATE(214)] = 5490,
  [SMALL_STATE(215)] = 5509,
  [SMALL_STATE(216)] = 5528,
  [SMALL_STATE(217)] = 5547,
  [SMALL_STATE(218)] = 5566,
  [SMALL_STATE(219)] = 5585,
  [SMALL_STATE(220)] = 5604,
  [SMALL_STATE(221)] = 5623,
  [SMALL_STATE(222)] = 5642,
  [SMALL_STATE(223)] = 5661,
  [SMALL_STATE(224)] = 5680,
  [SMALL_STATE(225)] = 5715,
  [SMALL_STATE(226)] = 5734,
  [SMALL_STATE(227)] = 5753,
  [SMALL_STATE(228)] = 5772,
  [SMALL_STATE(229)] = 5791,
  [SMALL_STATE(230)] = 5810,
  [SMALL_STATE(231)] = 5829,
  [SMALL_STATE(232)] = 5848,
  [SMALL_STATE(233)] = 5867,
  [SMALL_STATE(234)] = 5886,
  [SMALL_STATE(235)] = 5905,
  [SMALL_STATE(236)] = 5924,
  [SMALL_STATE(237)] = 5943,
  [SMALL_STATE(238)] = 5962,
  [SMALL_STATE(239)] = 5981,
  [SMALL_STATE(240)] = 6000,
  [SMALL_STATE(241)] = 6019,
  [SMALL_STATE(242)] = 6038,
  [SMALL_STATE(243)] = 6057,
  [SMALL_STATE(244)] = 6076,
  [SMALL_STATE(245)] = 6095,
  [SMALL_STATE(246)] = 6114,
  [SMALL_STATE(247)] = 6133,
  [SMALL_STATE(248)] = 6152,
  [SMALL_STATE(249)] = 6171,
  [SMALL_STATE(250)] = 6190,
  [SMALL_STATE(251)] = 6209,
  [SMALL_STATE(252)] = 6228,
  [SMALL_STATE(253)] = 6247,
  [SMALL_STATE(254)] = 6266,
  [SMALL_STATE(255)] = 6285,
  [SMALL_STATE(256)] = 6304,
  [SMALL_STATE(257)] = 6323,
  [SMALL_STATE(258)] = 6342,
  [SMALL_STATE(259)] = 6361,
  [SMALL_STATE(260)] = 6380,
  [SMALL_STATE(261)] = 6399,
  [SMALL_STATE(262)] = 6418,
  [SMALL_STATE(263)] = 6437,
  [SMALL_STATE(264)] = 6456,
  [SMALL_STATE(265)] = 6475,
  [SMALL_STATE(266)] = 6494,
  [SMALL_STATE(267)] = 6513,
  [SMALL_STATE(268)] = 6532,
  [SMALL_STATE(269)] = 6551,
  [SMALL_STATE(270)] = 6570,
  [SMALL_STATE(271)] = 6589,
  [SMALL_STATE(272)] = 6608,
  [SMALL_STATE(273)] = 6627,
  [SMALL_STATE(274)] = 6646,
  [SMALL_STATE(275)] = 6665,
  [SMALL_STATE(276)] = 6684,
  [SMALL_STATE(277)] = 6703,
  [SMALL_STATE(278)] = 6722,
  [SMALL_STATE(279)] = 6741,
  [SMALL_STATE(280)] = 6760,
  [SMALL_STATE(281)] = 6779,
  [SMALL_STATE(282)] = 6798,
  [SMALL_STATE(283)] = 6817,
  [SMALL_STATE(284)] = 6836,
  [SMALL_STATE(285)] = 6855,
  [SMALL_STATE(286)] = 6874,
  [SMALL_STATE(287)] = 6893,
  [SMALL_STATE(288)] = 6912,
  [SMALL_STATE(289)] = 6931,
  [SMALL_STATE(290)] = 6950,
  [SMALL_STATE(291)] = 6969,
  [SMALL_STATE(292)] = 6988,
  [SMALL_STATE(293)] = 7007,
  [SMALL_STATE(294)] = 7026,
  [SMALL_STATE(295)] = 7045,
  [SMALL_STATE(296)] = 7064,
  [SMALL_STATE(297)] = 7083,
  [SMALL_STATE(298)] = 7102,
  [SMALL_STATE(299)] = 7121,
  [SMALL_STATE(300)] = 7140,
  [SMALL_STATE(301)] = 7159,
  [SMALL_STATE(302)] = 7178,
  [SMALL_STATE(303)] = 7197,
  [SMALL_STATE(304)] = 7218,
  [SMALL_STATE(305)] = 7237,
  [SMALL_STATE(306)] = 7256,
  [SMALL_STATE(307)] = 7275,
  [SMALL_STATE(308)] = 7294,
  [SMALL_STATE(309)] = 7313,
  [SMALL_STATE(310)] = 7332,
  [SMALL_STATE(311)] = 7351,
  [SMALL_STATE(312)] = 7370,
  [SMALL_STATE(313)] = 7389,
  [SMALL_STATE(314)] = 7417,
  [SMALL_STATE(315)] = 7445,
  [SMALL_STATE(316)] = 7473,
  [SMALL_STATE(317)] = 7501,
  [SMALL_STATE(318)] = 7529,
  [SMALL_STATE(319)] = 7547,
  [SMALL_STATE(320)] = 7580,
  [SMALL_STATE(321)] = 7611,
  [SMALL_STATE(322)] = 7639,
  [SMALL_STATE(323)] = 7662,
  [SMALL_STATE(324)] = 7687,
  [SMALL_STATE(325)] = 7712,
  [SMALL_STATE(326)] = 7734,
  [SMALL_STATE(327)] = 7756,
  [SMALL_STATE(328)] = 7776,
  [SMALL_STATE(329)] = 7810,
  [SMALL_STATE(330)] = 7829,
  [SMALL_STATE(331)] = 7852,
  [SMALL_STATE(332)] = 7883,
  [SMALL_STATE(333)] = 7900,
  [SMALL_STATE(334)] = 7917,
  [SMALL_STATE(335)] = 7936,
  [SMALL_STATE(336)] = 7955,
  [SMALL_STATE(337)] = 7974,
  [SMALL_STATE(338)] = 7993,
  [SMALL_STATE(339)] = 8012,
  [SMALL_STATE(340)] = 8031,
  [SMALL_STATE(341)] = 8050,
  [SMALL_STATE(342)] = 8073,
  [SMALL_STATE(343)] = 8092,
  [SMALL_STATE(344)] = 8111,
  [SMALL_STATE(345)] = 8130,
  [SMALL_STATE(346)] = 8150,
  [SMALL_STATE(347)] = 8171,
  [SMALL_STATE(348)] = 8192,
  [SMALL_STATE(349)] = 8213,
  [SMALL_STATE(350)] = 8234,
  [SMALL_STATE(351)] = 8255,
  [SMALL_STATE(352)] = 8277,
  [SMALL_STATE(353)] = 8295,
  [SMALL_STATE(354)] = 8317,
  [SMALL_STATE(355)] = 8331,
  [SMALL_STATE(356)] = 8353,
  [SMALL_STATE(357)] = 8373,
  [SMALL_STATE(358)] = 8391,
  [SMALL_STATE(359)] = 8405,
  [SMALL_STATE(360)] = 8423,
  [SMALL_STATE(361)] = 8443,
  [SMALL_STATE(362)] = 8465,
  [SMALL_STATE(363)] = 8484,
  [SMALL_STATE(364)] = 8503,
  [SMALL_STATE(365)] = 8514,
  [SMALL_STATE(366)] = 8531,
  [SMALL_STATE(367)] = 8547,
  [SMALL_STATE(368)] = 8559,
  [SMALL_STATE(369)] = 8575,
  [SMALL_STATE(370)] = 8591,
  [SMALL_STATE(371)] = 8605,
  [SMALL_STATE(372)] = 8617,
  [SMALL_STATE(373)] = 8633,
  [SMALL_STATE(374)] = 8641,
  [SMALL_STATE(375)] = 8657,
  [SMALL_STATE(376)] = 8669,
  [SMALL_STATE(377)] = 8685,
  [SMALL_STATE(378)] = 8693,
  [SMALL_STATE(379)] = 8707,
  [SMALL_STATE(380)] = 8715,
  [SMALL_STATE(381)] = 8731,
  [SMALL_STATE(382)] = 8739,
  [SMALL_STATE(383)] = 8751,
  [SMALL_STATE(384)] = 8759,
  [SMALL_STATE(385)] = 8775,
  [SMALL_STATE(386)] = 8783,
  [SMALL_STATE(387)] = 8791,
  [SMALL_STATE(388)] = 8804,
  [SMALL_STATE(389)] = 8817,
  [SMALL_STATE(390)] = 8824,
  [SMALL_STATE(391)] = 8837,
  [SMALL_STATE(392)] = 8850,
  [SMALL_STATE(393)] = 8863,
  [SMALL_STATE(394)] = 8876,
  [SMALL_STATE(395)] = 8889,
  [SMALL_STATE(396)] = 8902,
  [SMALL_STATE(397)] = 8915,
  [SMALL_STATE(398)] = 8928,
  [SMALL_STATE(399)] = 8941,
  [SMALL_STATE(400)] = 8954,
  [SMALL_STATE(401)] = 8967,
  [SMALL_STATE(402)] = 8980,
  [SMALL_STATE(403)] = 8993,
  [SMALL_STATE(404)] = 9006,
  [SMALL_STATE(405)] = 9019,
  [SMALL_STATE(406)] = 9032,
  [SMALL_STATE(407)] = 9045,
  [SMALL_STATE(408)] = 9058,
  [SMALL_STATE(409)] = 9071,
  [SMALL_STATE(410)] = 9084,
  [SMALL_STATE(411)] = 9093,
  [SMALL_STATE(412)] = 9106,
  [SMALL_STATE(413)] = 9119,
  [SMALL_STATE(414)] = 9132,
  [SMALL_STATE(415)] = 9145,
  [SMALL_STATE(416)] = 9158,
  [SMALL_STATE(417)] = 9169,
  [SMALL_STATE(418)] = 9182,
  [SMALL_STATE(419)] = 9195,
  [SMALL_STATE(420)] = 9208,
  [SMALL_STATE(421)] = 9221,
  [SMALL_STATE(422)] = 9234,
  [SMALL_STATE(423)] = 9247,
  [SMALL_STATE(424)] = 9260,
  [SMALL_STATE(425)] = 9273,
  [SMALL_STATE(426)] = 9286,
  [SMALL_STATE(427)] = 9297,
  [SMALL_STATE(428)] = 9310,
  [SMALL_STATE(429)] = 9323,
  [SMALL_STATE(430)] = 9336,
  [SMALL_STATE(431)] = 9349,
  [SMALL_STATE(432)] = 9362,
  [SMALL_STATE(433)] = 9369,
  [SMALL_STATE(434)] = 9382,
  [SMALL_STATE(435)] = 9395,
  [SMALL_STATE(436)] = 9408,
  [SMALL_STATE(437)] = 9419,
  [SMALL_STATE(438)] = 9430,
  [SMALL_STATE(439)] = 9443,
  [SMALL_STATE(440)] = 9453,
  [SMALL_STATE(441)] = 9463,
  [SMALL_STATE(442)] = 9473,
  [SMALL_STATE(443)] = 9483,
  [SMALL_STATE(444)] = 9493,
  [SMALL_STATE(445)] = 9503,
  [SMALL_STATE(446)] = 9513,
  [SMALL_STATE(447)] = 9523,
  [SMALL_STATE(448)] = 9533,
  [SMALL_STATE(449)] = 9543,
  [SMALL_STATE(450)] = 9551,
  [SMALL_STATE(451)] = 9561,
  [SMALL_STATE(452)] = 9571,
  [SMALL_STATE(453)] = 9581,
  [SMALL_STATE(454)] = 9591,
  [SMALL_STATE(455)] = 9601,
  [SMALL_STATE(456)] = 9611,
  [SMALL_STATE(457)] = 9621,
  [SMALL_STATE(458)] = 9631,
  [SMALL_STATE(459)] = 9641,
  [SMALL_STATE(460)] = 9651,
  [SMALL_STATE(461)] = 9661,
  [SMALL_STATE(462)] = 9667,
  [SMALL_STATE(463)] = 9675,
  [SMALL_STATE(464)] = 9685,
  [SMALL_STATE(465)] = 9695,
  [SMALL_STATE(466)] = 9705,
  [SMALL_STATE(467)] = 9715,
  [SMALL_STATE(468)] = 9725,
  [SMALL_STATE(469)] = 9735,
  [SMALL_STATE(470)] = 9743,
  [SMALL_STATE(471)] = 9753,
  [SMALL_STATE(472)] = 9763,
  [SMALL_STATE(473)] = 9773,
  [SMALL_STATE(474)] = 9783,
  [SMALL_STATE(475)] = 9793,
  [SMALL_STATE(476)] = 9803,
  [SMALL_STATE(477)] = 9813,
  [SMALL_STATE(478)] = 9823,
  [SMALL_STATE(479)] = 9833,
  [SMALL_STATE(480)] = 9843,
  [SMALL_STATE(481)] = 9853,
  [SMALL_STATE(482)] = 9863,
  [SMALL_STATE(483)] = 9873,
  [SMALL_STATE(484)] = 9883,
  [SMALL_STATE(485)] = 9893,
  [SMALL_STATE(486)] = 9903,
  [SMALL_STATE(487)] = 9913,
  [SMALL_STATE(488)] = 9923,
  [SMALL_STATE(489)] = 9933,
  [SMALL_STATE(490)] = 9943,
  [SMALL_STATE(491)] = 9953,
  [SMALL_STATE(492)] = 9963,
  [SMALL_STATE(493)] = 9973,
  [SMALL_STATE(494)] = 9983,
  [SMALL_STATE(495)] = 9993,
  [SMALL_STATE(496)] = 10003,
  [SMALL_STATE(497)] = 10013,
  [SMALL_STATE(498)] = 10023,
  [SMALL_STATE(499)] = 10033,
  [SMALL_STATE(500)] = 10043,
  [SMALL_STATE(501)] = 10053,
  [SMALL_STATE(502)] = 10063,
  [SMALL_STATE(503)] = 10073,
  [SMALL_STATE(504)] = 10083,
  [SMALL_STATE(505)] = 10093,
  [SMALL_STATE(506)] = 10103,
  [SMALL_STATE(507)] = 10113,
  [SMALL_STATE(508)] = 10123,
  [SMALL_STATE(509)] = 10133,
  [SMALL_STATE(510)] = 10143,
  [SMALL_STATE(511)] = 10153,
  [SMALL_STATE(512)] = 10163,
  [SMALL_STATE(513)] = 10173,
  [SMALL_STATE(514)] = 10183,
  [SMALL_STATE(515)] = 10193,
  [SMALL_STATE(516)] = 10203,
  [SMALL_STATE(517)] = 10211,
  [SMALL_STATE(518)] = 10221,
  [SMALL_STATE(519)] = 10231,
  [SMALL_STATE(520)] = 10241,
  [SMALL_STATE(521)] = 10251,
  [SMALL_STATE(522)] = 10261,
  [SMALL_STATE(523)] = 10271,
  [SMALL_STATE(524)] = 10281,
  [SMALL_STATE(525)] = 10291,
  [SMALL_STATE(526)] = 10301,
  [SMALL_STATE(527)] = 10311,
  [SMALL_STATE(528)] = 10321,
  [SMALL_STATE(529)] = 10331,
  [SMALL_STATE(530)] = 10341,
  [SMALL_STATE(531)] = 10351,
  [SMALL_STATE(532)] = 10359,
  [SMALL_STATE(533)] = 10369,
  [SMALL_STATE(534)] = 10379,
  [SMALL_STATE(535)] = 10389,
  [SMALL_STATE(536)] = 10397,
  [SMALL_STATE(537)] = 10407,
  [SMALL_STATE(538)] = 10417,
  [SMALL_STATE(539)] = 10427,
  [SMALL_STATE(540)] = 10437,
  [SMALL_STATE(541)] = 10447,
  [SMALL_STATE(542)] = 10457,
  [SMALL_STATE(543)] = 10467,
  [SMALL_STATE(544)] = 10477,
  [SMALL_STATE(545)] = 10485,
  [SMALL_STATE(546)] = 10495,
  [SMALL_STATE(547)] = 10505,
  [SMALL_STATE(548)] = 10515,
  [SMALL_STATE(549)] = 10525,
  [SMALL_STATE(550)] = 10535,
  [SMALL_STATE(551)] = 10545,
  [SMALL_STATE(552)] = 10555,
  [SMALL_STATE(553)] = 10565,
  [SMALL_STATE(554)] = 10575,
  [SMALL_STATE(555)] = 10585,
  [SMALL_STATE(556)] = 10595,
  [SMALL_STATE(557)] = 10605,
  [SMALL_STATE(558)] = 10611,
  [SMALL_STATE(559)] = 10621,
  [SMALL_STATE(560)] = 10631,
  [SMALL_STATE(561)] = 10641,
  [SMALL_STATE(562)] = 10651,
  [SMALL_STATE(563)] = 10661,
  [SMALL_STATE(564)] = 10671,
  [SMALL_STATE(565)] = 10681,
  [SMALL_STATE(566)] = 10687,
  [SMALL_STATE(567)] = 10697,
  [SMALL_STATE(568)] = 10704,
  [SMALL_STATE(569)] = 10711,
  [SMALL_STATE(570)] = 10718,
  [SMALL_STATE(571)] = 10725,
  [SMALL_STATE(572)] = 10732,
  [SMALL_STATE(573)] = 10739,
  [SMALL_STATE(574)] = 10746,
  [SMALL_STATE(575)] = 10753,
  [SMALL_STATE(576)] = 10760,
  [SMALL_STATE(577)] = 10765,
  [SMALL_STATE(578)] = 10772,
  [SMALL_STATE(579)] = 10777,
  [SMALL_STATE(580)] = 10782,
  [SMALL_STATE(581)] = 10787,
  [SMALL_STATE(582)] = 10794,
  [SMALL_STATE(583)] = 10799,
  [SMALL_STATE(584)] = 10806,
  [SMALL_STATE(585)] = 10813,
  [SMALL_STATE(586)] = 10820,
  [SMALL_STATE(587)] = 10825,
  [SMALL_STATE(588)] = 10832,
  [SMALL_STATE(589)] = 10837,
  [SMALL_STATE(590)] = 10844,
  [SMALL_STATE(591)] = 10851,
  [SMALL_STATE(592)] = 10858,
  [SMALL_STATE(593)] = 10865,
  [SMALL_STATE(594)] = 10872,
  [SMALL_STATE(595)] = 10879,
  [SMALL_STATE(596)] = 10886,
  [SMALL_STATE(597)] = 10893,
  [SMALL_STATE(598)] = 10900,
  [SMALL_STATE(599)] = 10907,
  [SMALL_STATE(600)] = 10914,
  [SMALL_STATE(601)] = 10921,
  [SMALL_STATE(602)] = 10926,
  [SMALL_STATE(603)] = 10933,
  [SMALL_STATE(604)] = 10940,
  [SMALL_STATE(605)] = 10947,
  [SMALL_STATE(606)] = 10954,
  [SMALL_STATE(607)] = 10961,
  [SMALL_STATE(608)] = 10968,
  [SMALL_STATE(609)] = 10975,
  [SMALL_STATE(610)] = 10982,
  [SMALL_STATE(611)] = 10989,
  [SMALL_STATE(612)] = 10996,
  [SMALL_STATE(613)] = 11003,
  [SMALL_STATE(614)] = 11010,
  [SMALL_STATE(615)] = 11017,
  [SMALL_STATE(616)] = 11024,
  [SMALL_STATE(617)] = 11029,
  [SMALL_STATE(618)] = 11036,
  [SMALL_STATE(619)] = 11043,
  [SMALL_STATE(620)] = 11048,
  [SMALL_STATE(621)] = 11053,
  [SMALL_STATE(622)] = 11060,
  [SMALL_STATE(623)] = 11065,
  [SMALL_STATE(624)] = 11072,
  [SMALL_STATE(625)] = 11079,
  [SMALL_STATE(626)] = 11086,
  [SMALL_STATE(627)] = 11091,
  [SMALL_STATE(628)] = 11096,
  [SMALL_STATE(629)] = 11101,
  [SMALL_STATE(630)] = 11108,
  [SMALL_STATE(631)] = 11115,
  [SMALL_STATE(632)] = 11122,
  [SMALL_STATE(633)] = 11129,
  [SMALL_STATE(634)] = 11136,
  [SMALL_STATE(635)] = 11143,
  [SMALL_STATE(636)] = 11148,
  [SMALL_STATE(637)] = 11155,
  [SMALL_STATE(638)] = 11162,
  [SMALL_STATE(639)] = 11169,
  [SMALL_STATE(640)] = 11176,
  [SMALL_STATE(641)] = 11183,
  [SMALL_STATE(642)] = 11190,
  [SMALL_STATE(643)] = 11197,
  [SMALL_STATE(644)] = 11204,
  [SMALL_STATE(645)] = 11211,
  [SMALL_STATE(646)] = 11218,
  [SMALL_STATE(647)] = 11225,
  [SMALL_STATE(648)] = 11232,
  [SMALL_STATE(649)] = 11239,
  [SMALL_STATE(650)] = 11246,
  [SMALL_STATE(651)] = 11253,
  [SMALL_STATE(652)] = 11260,
  [SMALL_STATE(653)] = 11265,
  [SMALL_STATE(654)] = 11272,
  [SMALL_STATE(655)] = 11279,
  [SMALL_STATE(656)] = 11286,
  [SMALL_STATE(657)] = 11293,
  [SMALL_STATE(658)] = 11300,
  [SMALL_STATE(659)] = 11307,
  [SMALL_STATE(660)] = 11312,
  [SMALL_STATE(661)] = 11319,
  [SMALL_STATE(662)] = 11326,
  [SMALL_STATE(663)] = 11333,
  [SMALL_STATE(664)] = 11340,
  [SMALL_STATE(665)] = 11347,
  [SMALL_STATE(666)] = 11352,
  [SMALL_STATE(667)] = 11359,
  [SMALL_STATE(668)] = 11366,
  [SMALL_STATE(669)] = 11373,
  [SMALL_STATE(670)] = 11380,
  [SMALL_STATE(671)] = 11385,
  [SMALL_STATE(672)] = 11392,
  [SMALL_STATE(673)] = 11399,
  [SMALL_STATE(674)] = 11406,
  [SMALL_STATE(675)] = 11413,
  [SMALL_STATE(676)] = 11418,
  [SMALL_STATE(677)] = 11425,
  [SMALL_STATE(678)] = 11430,
  [SMALL_STATE(679)] = 11437,
  [SMALL_STATE(680)] = 11442,
  [SMALL_STATE(681)] = 11447,
  [SMALL_STATE(682)] = 11454,
  [SMALL_STATE(683)] = 11459,
  [SMALL_STATE(684)] = 11466,
  [SMALL_STATE(685)] = 11473,
  [SMALL_STATE(686)] = 11480,
  [SMALL_STATE(687)] = 11487,
  [SMALL_STATE(688)] = 11492,
  [SMALL_STATE(689)] = 11497,
  [SMALL_STATE(690)] = 11502,
  [SMALL_STATE(691)] = 11509,
  [SMALL_STATE(692)] = 11516,
  [SMALL_STATE(693)] = 11521,
  [SMALL_STATE(694)] = 11526,
  [SMALL_STATE(695)] = 11533,
  [SMALL_STATE(696)] = 11540,
  [SMALL_STATE(697)] = 11545,
  [SMALL_STATE(698)] = 11549,
  [SMALL_STATE(699)] = 11553,
  [SMALL_STATE(700)] = 11557,
  [SMALL_STATE(701)] = 11561,
  [SMALL_STATE(702)] = 11565,
  [SMALL_STATE(703)] = 11569,
  [SMALL_STATE(704)] = 11573,
  [SMALL_STATE(705)] = 11577,
  [SMALL_STATE(706)] = 11581,
  [SMALL_STATE(707)] = 11585,
  [SMALL_STATE(708)] = 11589,
  [SMALL_STATE(709)] = 11593,
  [SMALL_STATE(710)] = 11597,
  [SMALL_STATE(711)] = 11601,
  [SMALL_STATE(712)] = 11605,
  [SMALL_STATE(713)] = 11609,
  [SMALL_STATE(714)] = 11613,
  [SMALL_STATE(715)] = 11617,
  [SMALL_STATE(716)] = 11621,
  [SMALL_STATE(717)] = 11625,
  [SMALL_STATE(718)] = 11629,
  [SMALL_STATE(719)] = 11633,
  [SMALL_STATE(720)] = 11637,
  [SMALL_STATE(721)] = 11641,
  [SMALL_STATE(722)] = 11645,
  [SMALL_STATE(723)] = 11649,
  [SMALL_STATE(724)] = 11653,
  [SMALL_STATE(725)] = 11657,
  [SMALL_STATE(726)] = 11661,
  [SMALL_STATE(727)] = 11665,
  [SMALL_STATE(728)] = 11669,
  [SMALL_STATE(729)] = 11673,
  [SMALL_STATE(730)] = 11677,
  [SMALL_STATE(731)] = 11681,
  [SMALL_STATE(732)] = 11685,
  [SMALL_STATE(733)] = 11689,
  [SMALL_STATE(734)] = 11693,
  [SMALL_STATE(735)] = 11697,
  [SMALL_STATE(736)] = 11701,
  [SMALL_STATE(737)] = 11705,
  [SMALL_STATE(738)] = 11709,
  [SMALL_STATE(739)] = 11713,
  [SMALL_STATE(740)] = 11717,
  [SMALL_STATE(741)] = 11721,
  [SMALL_STATE(742)] = 11725,
  [SMALL_STATE(743)] = 11729,
  [SMALL_STATE(744)] = 11733,
  [SMALL_STATE(745)] = 11737,
  [SMALL_STATE(746)] = 11741,
  [SMALL_STATE(747)] = 11745,
  [SMALL_STATE(748)] = 11749,
  [SMALL_STATE(749)] = 11753,
  [SMALL_STATE(750)] = 11757,
  [SMALL_STATE(751)] = 11761,
  [SMALL_STATE(752)] = 11765,
  [SMALL_STATE(753)] = 11769,
  [SMALL_STATE(754)] = 11773,
  [SMALL_STATE(755)] = 11777,
  [SMALL_STATE(756)] = 11781,
  [SMALL_STATE(757)] = 11785,
  [SMALL_STATE(758)] = 11789,
  [SMALL_STATE(759)] = 11793,
  [SMALL_STATE(760)] = 11797,
  [SMALL_STATE(761)] = 11801,
  [SMALL_STATE(762)] = 11805,
  [SMALL_STATE(763)] = 11809,
  [SMALL_STATE(764)] = 11813,
  [SMALL_STATE(765)] = 11817,
  [SMALL_STATE(766)] = 11821,
  [SMALL_STATE(767)] = 11825,
  [SMALL_STATE(768)] = 11829,
  [SMALL_STATE(769)] = 11833,
  [SMALL_STATE(770)] = 11837,
  [SMALL_STATE(771)] = 11841,
  [SMALL_STATE(772)] = 11845,
  [SMALL_STATE(773)] = 11849,
  [SMALL_STATE(774)] = 11853,
  [SMALL_STATE(775)] = 11857,
  [SMALL_STATE(776)] = 11861,
  [SMALL_STATE(777)] = 11865,
  [SMALL_STATE(778)] = 11869,
  [SMALL_STATE(779)] = 11873,
  [SMALL_STATE(780)] = 11877,
  [SMALL_STATE(781)] = 11881,
  [SMALL_STATE(782)] = 11885,
  [SMALL_STATE(783)] = 11889,
  [SMALL_STATE(784)] = 11893,
  [SMALL_STATE(785)] = 11897,
  [SMALL_STATE(786)] = 11901,
  [SMALL_STATE(787)] = 11905,
  [SMALL_STATE(788)] = 11909,
  [SMALL_STATE(789)] = 11913,
  [SMALL_STATE(790)] = 11917,
  [SMALL_STATE(791)] = 11921,
  [SMALL_STATE(792)] = 11925,
  [SMALL_STATE(793)] = 11929,
  [SMALL_STATE(794)] = 11933,
  [SMALL_STATE(795)] = 11937,
  [SMALL_STATE(796)] = 11941,
  [SMALL_STATE(797)] = 11945,
  [SMALL_STATE(798)] = 11949,
  [SMALL_STATE(799)] = 11953,
  [SMALL_STATE(800)] = 11957,
  [SMALL_STATE(801)] = 11961,
  [SMALL_STATE(802)] = 11965,
  [SMALL_STATE(803)] = 11969,
  [SMALL_STATE(804)] = 11973,
  [SMALL_STATE(805)] = 11977,
  [SMALL_STATE(806)] = 11981,
  [SMALL_STATE(807)] = 11985,
  [SMALL_STATE(808)] = 11989,
  [SMALL_STATE(809)] = 11993,
  [SMALL_STATE(810)] = 11997,
  [SMALL_STATE(811)] = 12001,
  [SMALL_STATE(812)] = 12005,
  [SMALL_STATE(813)] = 12009,
  [SMALL_STATE(814)] = 12013,
  [SMALL_STATE(815)] = 12017,
  [SMALL_STATE(816)] = 12021,
  [SMALL_STATE(817)] = 12025,
  [SMALL_STATE(818)] = 12029,
  [SMALL_STATE(819)] = 12033,
  [SMALL_STATE(820)] = 12037,
  [SMALL_STATE(821)] = 12041,
  [SMALL_STATE(822)] = 12045,
  [SMALL_STATE(823)] = 12049,
  [SMALL_STATE(824)] = 12053,
  [SMALL_STATE(825)] = 12057,
  [SMALL_STATE(826)] = 12061,
  [SMALL_STATE(827)] = 12065,
  [SMALL_STATE(828)] = 12069,
  [SMALL_STATE(829)] = 12073,
  [SMALL_STATE(830)] = 12077,
  [SMALL_STATE(831)] = 12081,
  [SMALL_STATE(832)] = 12085,
  [SMALL_STATE(833)] = 12089,
  [SMALL_STATE(834)] = 12093,
  [SMALL_STATE(835)] = 12097,
  [SMALL_STATE(836)] = 12101,
  [SMALL_STATE(837)] = 12105,
  [SMALL_STATE(838)] = 12109,
  [SMALL_STATE(839)] = 12113,
  [SMALL_STATE(840)] = 12117,
  [SMALL_STATE(841)] = 12121,
  [SMALL_STATE(842)] = 12125,
  [SMALL_STATE(843)] = 12129,
  [SMALL_STATE(844)] = 12133,
  [SMALL_STATE(845)] = 12137,
  [SMALL_STATE(846)] = 12141,
  [SMALL_STATE(847)] = 12145,
  [SMALL_STATE(848)] = 12149,
  [SMALL_STATE(849)] = 12153,
  [SMALL_STATE(850)] = 12157,
  [SMALL_STATE(851)] = 12161,
  [SMALL_STATE(852)] = 12165,
  [SMALL_STATE(853)] = 12169,
  [SMALL_STATE(854)] = 12173,
  [SMALL_STATE(855)] = 12177,
  [SMALL_STATE(856)] = 12181,
  [SMALL_STATE(857)] = 12185,
  [SMALL_STATE(858)] = 12189,
  [SMALL_STATE(859)] = 12193,
  [SMALL_STATE(860)] = 12197,
  [SMALL_STATE(861)] = 12201,
  [SMALL_STATE(862)] = 12205,
  [SMALL_STATE(863)] = 12209,
  [SMALL_STATE(864)] = 12213,
  [SMALL_STATE(865)] = 12217,
  [SMALL_STATE(866)] = 12221,
  [SMALL_STATE(867)] = 12225,
  [SMALL_STATE(868)] = 12229,
  [SMALL_STATE(869)] = 12233,
  [SMALL_STATE(870)] = 12237,
  [SMALL_STATE(871)] = 12241,
  [SMALL_STATE(872)] = 12245,
  [SMALL_STATE(873)] = 12249,
  [SMALL_STATE(874)] = 12253,
  [SMALL_STATE(875)] = 12257,
  [SMALL_STATE(876)] = 12261,
  [SMALL_STATE(877)] = 12265,
  [SMALL_STATE(878)] = 12269,
  [SMALL_STATE(879)] = 12273,
  [SMALL_STATE(880)] = 12277,
  [SMALL_STATE(881)] = 12281,
  [SMALL_STATE(882)] = 12285,
  [SMALL_STATE(883)] = 12289,
  [SMALL_STATE(884)] = 12293,
  [SMALL_STATE(885)] = 12297,
  [SMALL_STATE(886)] = 12301,
  [SMALL_STATE(887)] = 12305,
  [SMALL_STATE(888)] = 12309,
  [SMALL_STATE(889)] = 12313,
  [SMALL_STATE(890)] = 12317,
  [SMALL_STATE(891)] = 12321,
  [SMALL_STATE(892)] = 12325,
  [SMALL_STATE(893)] = 12329,
  [SMALL_STATE(894)] = 12333,
  [SMALL_STATE(895)] = 12337,
  [SMALL_STATE(896)] = 12341,
  [SMALL_STATE(897)] = 12345,
  [SMALL_STATE(898)] = 12349,
  [SMALL_STATE(899)] = 12353,
  [SMALL_STATE(900)] = 12357,
  [SMALL_STATE(901)] = 12361,
  [SMALL_STATE(902)] = 12365,
  [SMALL_STATE(903)] = 12369,
  [SMALL_STATE(904)] = 12373,
  [SMALL_STATE(905)] = 12377,
  [SMALL_STATE(906)] = 12381,
  [SMALL_STATE(907)] = 12385,
  [SMALL_STATE(908)] = 12389,
  [SMALL_STATE(909)] = 12393,
  [SMALL_STATE(910)] = 12397,
  [SMALL_STATE(911)] = 12401,
  [SMALL_STATE(912)] = 12405,
  [SMALL_STATE(913)] = 12409,
  [SMALL_STATE(914)] = 12413,
  [SMALL_STATE(915)] = 12417,
  [SMALL_STATE(916)] = 12421,
  [SMALL_STATE(917)] = 12425,
  [SMALL_STATE(918)] = 12429,
  [SMALL_STATE(919)] = 12433,
  [SMALL_STATE(920)] = 12437,
  [SMALL_STATE(921)] = 12441,
  [SMALL_STATE(922)] = 12445,
  [SMALL_STATE(923)] = 12449,
  [SMALL_STATE(924)] = 12453,
  [SMALL_STATE(925)] = 12457,
  [SMALL_STATE(926)] = 12461,
  [SMALL_STATE(927)] = 12465,
  [SMALL_STATE(928)] = 12469,
  [SMALL_STATE(929)] = 12473,
  [SMALL_STATE(930)] = 12477,
  [SMALL_STATE(931)] = 12481,
  [SMALL_STATE(932)] = 12485,
  [SMALL_STATE(933)] = 12489,
  [SMALL_STATE(934)] = 12493,
  [SMALL_STATE(935)] = 12497,
  [SMALL_STATE(936)] = 12501,
  [SMALL_STATE(937)] = 12505,
  [SMALL_STATE(938)] = 12509,
  [SMALL_STATE(939)] = 12513,
  [SMALL_STATE(940)] = 12517,
  [SMALL_STATE(941)] = 12521,
  [SMALL_STATE(942)] = 12525,
  [SMALL_STATE(943)] = 12529,
  [SMALL_STATE(944)] = 12533,
  [SMALL_STATE(945)] = 12537,
  [SMALL_STATE(946)] = 12541,
  [SMALL_STATE(947)] = 12545,
  [SMALL_STATE(948)] = 12549,
  [SMALL_STATE(949)] = 12553,
  [SMALL_STATE(950)] = 12557,
  [SMALL_STATE(951)] = 12561,
  [SMALL_STATE(952)] = 12565,
  [SMALL_STATE(953)] = 12569,
  [SMALL_STATE(954)] = 12573,
  [SMALL_STATE(955)] = 12577,
  [SMALL_STATE(956)] = 12581,
  [SMALL_STATE(957)] = 12585,
  [SMALL_STATE(958)] = 12589,
  [SMALL_STATE(959)] = 12593,
  [SMALL_STATE(960)] = 12597,
  [SMALL_STATE(961)] = 12601,
  [SMALL_STATE(962)] = 12605,
  [SMALL_STATE(963)] = 12609,
  [SMALL_STATE(964)] = 12613,
  [SMALL_STATE(965)] = 12617,
  [SMALL_STATE(966)] = 12621,
  [SMALL_STATE(967)] = 12625,
  [SMALL_STATE(968)] = 12629,
  [SMALL_STATE(969)] = 12633,
  [SMALL_STATE(970)] = 12637,
  [SMALL_STATE(971)] = 12641,
  [SMALL_STATE(972)] = 12645,
  [SMALL_STATE(973)] = 12649,
  [SMALL_STATE(974)] = 12653,
  [SMALL_STATE(975)] = 12657,
  [SMALL_STATE(976)] = 12661,
  [SMALL_STATE(977)] = 12665,
  [SMALL_STATE(978)] = 12669,
  [SMALL_STATE(979)] = 12673,
  [SMALL_STATE(980)] = 12677,
  [SMALL_STATE(981)] = 12681,
  [SMALL_STATE(982)] = 12685,
  [SMALL_STATE(983)] = 12689,
  [SMALL_STATE(984)] = 12693,
  [SMALL_STATE(985)] = 12697,
  [SMALL_STATE(986)] = 12701,
  [SMALL_STATE(987)] = 12705,
  [SMALL_STATE(988)] = 12709,
  [SMALL_STATE(989)] = 12713,
  [SMALL_STATE(990)] = 12717,
  [SMALL_STATE(991)] = 12721,
  [SMALL_STATE(992)] = 12725,
  [SMALL_STATE(993)] = 12729,
  [SMALL_STATE(994)] = 12733,
  [SMALL_STATE(995)] = 12737,
  [SMALL_STATE(996)] = 12741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(544),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(996),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(441),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(994),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(992),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(333),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(987),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(664),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 34),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(365),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 34),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 34),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 27),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 46),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 25),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(662),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(891),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 38),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 40),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(352),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 27),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 47),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(376),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 30),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 38),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 47),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(691),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 31),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 27),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 33),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 47),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 38),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 20),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(592),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 26),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 33),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 33),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 27),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 53),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 37),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 42),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 18),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 44),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 35),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 53),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 22),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 23),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 43),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 54),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 38),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 27),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 32),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 32),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 34),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 41),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 27),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 68),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 33),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 33),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 38),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 47),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 56),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 47),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 57),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 58),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 67),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 59),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 60),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 32),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 66),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 64),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 63),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 61),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 62),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(974),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(972),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(329),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 20),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(985),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(676),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(322),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(324),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(569),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(146),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(541),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(896),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(654),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(28),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(505),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(685),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(633),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(338),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(625),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 34),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 19),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 52),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 52),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 51),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 45),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 65),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 48),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 49),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 50),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 39),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 21),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 55),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2036] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
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
