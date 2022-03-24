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
#define STATE_COUNT 983
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 304
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
  sym_insert_statement = 168,
  sym_insert_column_spec = 169,
  sym_column_list = 170,
  sym_insert_values_spec = 171,
  sym_expression_list = 172,
  sym_expression = 173,
  sym_assignment_map = 174,
  sym_assignment_set = 175,
  sym_assignment_list = 176,
  sym_assignment_tuple = 177,
  sym_using_ttl_timestamp = 178,
  sym_truncate = 179,
  sym_create_index = 180,
  sym_index_column_spec = 181,
  sym_index_keys_spec = 182,
  sym_index_entries_s_spec = 183,
  sym_index_full_spec = 184,
  sym_drop_index = 185,
  sym_update = 186,
  sym_assignment_element = 187,
  sym_indexed_column = 188,
  sym_use = 189,
  sym_grant = 190,
  sym_revoke = 191,
  sym_privilege = 192,
  sym_resource = 193,
  sym_list_roles = 194,
  sym_list_permissions = 195,
  sym_drop_aggregate = 196,
  sym_drop_materialized_view = 197,
  sym_drop_function = 198,
  sym_drop_keyspace = 199,
  sym_drop_role = 200,
  sym_drop_table = 201,
  sym_drop_trigger = 202,
  sym_drop_type = 203,
  sym_drop_user = 204,
  sym_create_aggregate = 205,
  sym_init_cond_definition = 206,
  sym_init_cond_list = 207,
  sym_init_cond_nested_list = 208,
  sym_init_cond_hash = 209,
  sym_init_cond_hash_item = 210,
  sym_create_materialized_view = 211,
  sym_materialized_view_where = 212,
  sym_column_not_null = 213,
  sym_create_function = 214,
  sym_data_type = 215,
  sym_data_type_name = 216,
  sym_data_type_definition = 217,
  sym_return_mode = 218,
  sym_create_keyspace = 219,
  sym_replication_list_item = 220,
  sym_durable_writes = 221,
  sym_create_role = 222,
  sym_role_with = 223,
  sym_role_with_option = 224,
  sym_option_hash = 225,
  sym_option_hash_item = 226,
  sym_create_table = 227,
  sym_column_definition_list = 228,
  sym_column_definition = 229,
  sym_primary_key_column = 230,
  sym_primary_key_element = 231,
  sym_primary_key_definition = 232,
  sym_compound_key = 233,
  sym_clustering_key_list = 234,
  sym_composite_key = 235,
  sym_partition_key_list = 236,
  sym_with_element = 237,
  sym_table_options = 238,
  sym_table_option_item = 239,
  sym_table_option_name = 240,
  sym_table_option_value = 241,
  sym_compact_storage = 242,
  sym_clustering_order = 243,
  sym_create_trigger = 244,
  sym_trigger_class = 245,
  sym_create_type = 246,
  sym_typed_name = 247,
  sym_create_user = 248,
  sym_user_with = 249,
  sym_user_password = 250,
  sym_user_super_user = 251,
  sym_alter_materialized_view = 252,
  sym_alter_keyspace = 253,
  sym_replication_list = 254,
  sym_alter_role = 255,
  sym_alter_table = 256,
  sym_alter_table_operation = 257,
  sym_alter_table_add = 258,
  sym_alter_table_drop_columns = 259,
  sym_alter_table_drop_compact_storage = 260,
  sym_alter_table_rename = 261,
  sym_alter_type = 262,
  sym_alter_type_operation = 263,
  sym_alter_type_alter_type = 264,
  sym_alter_type_add = 265,
  sym_alter_type_rename = 266,
  sym_alter_type_rename_item = 267,
  sym_alter_user = 268,
  sym_apply_batch = 269,
  sym_aggregate_name = 270,
  sym_function_name = 271,
  sym_short_index_name = 272,
  sym_index_name = 273,
  sym_keyspace_name = 274,
  sym_materialized_view_name = 275,
  sym_role_name = 276,
  sym_table_name = 277,
  sym_trigger_name = 278,
  sym_type_name = 279,
  sym_user_name = 280,
  aux_sym_source_file_repeat1 = 281,
  aux_sym_select_elements_repeat1 = 282,
  aux_sym_function_args_repeat1 = 283,
  aux_sym_relation_elements_repeat1 = 284,
  aux_sym_relation_element_repeat1 = 285,
  aux_sym_relation_element_repeat2 = 286,
  aux_sym_delete_column_list_repeat1 = 287,
  aux_sym_expression_list_repeat1 = 288,
  aux_sym_assignment_map_repeat1 = 289,
  aux_sym_assignment_set_repeat1 = 290,
  aux_sym_update_repeat1 = 291,
  aux_sym_init_cond_nested_list_repeat1 = 292,
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
  anon_alias_sym_code_block = 307,
  anon_alias_sym_column = 308,
  anon_alias_sym_entry = 309,
  anon_alias_sym_finalfunc = 310,
  anon_alias_sym_full = 311,
  anon_alias_sym_function = 312,
  anon_alias_sym_function_name = 313,
  anon_alias_sym_hash_key = 314,
  anon_alias_sym_index = 315,
  anon_alias_sym_key = 316,
  anon_alias_sym_keyspace = 317,
  anon_alias_sym_language = 318,
  anon_alias_sym_limit_value = 319,
  anon_alias_sym_login = 320,
  anon_alias_sym_materialized_view = 321,
  anon_alias_sym_partition_key = 322,
  anon_alias_sym_password = 323,
  anon_alias_sym_primary_key = 324,
  anon_alias_sym_role = 325,
  anon_alias_sym_sfunc = 326,
  anon_alias_sym_table = 327,
  anon_alias_sym_time = 328,
  anon_alias_sym_trigger = 329,
  anon_alias_sym_ttl = 330,
  anon_alias_sym_type = 331,
  anon_alias_sym_user = 332,
  anon_alias_sym_value = 333,
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
    [2] = anon_alias_sym_function,
  },
  [22] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_aggregate,
  },
  [23] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [24] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_type,
  },
  [25] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_index,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(550);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '+') ADVANCE(644);
      if (lookahead == ',') ADVANCE(561);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead == '.') ADVANCE(562);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == ';') ADVANCE(551);
      if (lookahead == '<') ADVANCE(590);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(625);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(419);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(113);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '0') ADVANCE(573);
      if (lookahead == 'X') ADVANCE(751);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(756);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(875);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(932);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(547);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(585);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(571);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(815);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(801);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(859);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(825);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(805);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(754);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(779);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(911);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(918);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(828);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(917);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(750);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(516);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(512);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(489);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(602);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(690);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(680);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(201);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(502);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
      END_STATE();
    case 196:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(201);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(744);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(399);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(613);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 250:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(163);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(359);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 357:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(710);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 358:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      END_STATE();
    case 407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(652);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(734);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(658);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(661);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
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
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(688);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(552);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(403);
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
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
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
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 491:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 492:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 493:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(673);
      END_STATE();
    case 494:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(557);
      END_STATE();
    case 495:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(396);
      END_STATE();
    case 497:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(631);
      END_STATE();
    case 498:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 499:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 500:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 501:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(749);
      END_STATE();
    case 502:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(739);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 508:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(142);
      END_STATE();
    case 509:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      END_STATE();
    case 510:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(567);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(570);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 534:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 535:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 536:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 537:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 538:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 539:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 546:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 547:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 548:
      if (eof) ADVANCE(550);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '0') ADVANCE(573);
      if (lookahead == ';') ADVANCE(551);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(625);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(548)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 549:
      if (eof) ADVANCE(550);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == ',') ADVANCE(561);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(562);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == ';') ADVANCE(551);
      if (lookahead == '<') ADVANCE(590);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(625);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(397);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(372);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(549)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (lookahead == 'X') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == '>') ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(691);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(758);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(745);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(856);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(861);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(757);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(933);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
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
  [4] = {.lex_state = 549},
  [5] = {.lex_state = 549},
  [6] = {.lex_state = 549},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 549},
  [29] = {.lex_state = 549},
  [30] = {.lex_state = 549},
  [31] = {.lex_state = 549},
  [32] = {.lex_state = 549},
  [33] = {.lex_state = 549},
  [34] = {.lex_state = 549},
  [35] = {.lex_state = 549},
  [36] = {.lex_state = 549},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 549},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 549},
  [41] = {.lex_state = 549},
  [42] = {.lex_state = 549},
  [43] = {.lex_state = 549},
  [44] = {.lex_state = 549},
  [45] = {.lex_state = 549},
  [46] = {.lex_state = 549},
  [47] = {.lex_state = 549},
  [48] = {.lex_state = 549},
  [49] = {.lex_state = 549},
  [50] = {.lex_state = 549},
  [51] = {.lex_state = 549},
  [52] = {.lex_state = 549},
  [53] = {.lex_state = 549},
  [54] = {.lex_state = 549},
  [55] = {.lex_state = 549},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 549},
  [58] = {.lex_state = 549},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 549},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 549},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 548},
  [67] = {.lex_state = 549},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 549},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 549},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 548},
  [84] = {.lex_state = 549},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 548},
  [88] = {.lex_state = 549},
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
  [101] = {.lex_state = 549},
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
  [144] = {.lex_state = 548},
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
  [159] = {.lex_state = 549},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 549},
  [165] = {.lex_state = 549},
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
  [178] = {.lex_state = 549},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 549},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 549},
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
  [225] = {.lex_state = 1},
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
  [305] = {.lex_state = 548},
  [306] = {.lex_state = 548},
  [307] = {.lex_state = 548},
  [308] = {.lex_state = 548},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 548},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 548},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 548},
  [318] = {.lex_state = 40},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 548},
  [321] = {.lex_state = 40},
  [322] = {.lex_state = 548},
  [323] = {.lex_state = 548},
  [324] = {.lex_state = 549},
  [325] = {.lex_state = 548},
  [326] = {.lex_state = 548},
  [327] = {.lex_state = 548},
  [328] = {.lex_state = 40},
  [329] = {.lex_state = 548},
  [330] = {.lex_state = 548},
  [331] = {.lex_state = 548},
  [332] = {.lex_state = 40},
  [333] = {.lex_state = 548},
  [334] = {.lex_state = 548},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 549},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 11},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 12},
  [359] = {.lex_state = 549},
  [360] = {.lex_state = 15},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 15},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 549},
  [365] = {.lex_state = 549},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 40},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 13},
  [373] = {.lex_state = 10},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 19},
  [380] = {.lex_state = 24},
  [381] = {.lex_state = 19},
  [382] = {.lex_state = 10},
  [383] = {.lex_state = 549},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 10},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 21},
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
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 25},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 22},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 20},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 20},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 20},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 20},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 20},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 20},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 10},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 10},
  [476] = {.lex_state = 10},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 10},
  [493] = {.lex_state = 10},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 10},
  [496] = {.lex_state = 549},
  [497] = {.lex_state = 10},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 10},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 20},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 549},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 548},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 10},
  [535] = {.lex_state = 20},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 10},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 549},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 10},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 549},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 10},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 10},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 10},
  [604] = {.lex_state = 17},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 10},
  [613] = {.lex_state = 10},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 10},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 10},
  [634] = {.lex_state = 10},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 549},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 549},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 10},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 10},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 10},
  [680] = {.lex_state = 10},
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
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 548},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 10},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 10},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 549},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 10},
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
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 548},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 549},
  [765] = {.lex_state = 549},
  [766] = {.lex_state = 10},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 10},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 10},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 548},
  [807] = {.lex_state = 548},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 10},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 549},
  [825] = {.lex_state = 10},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 549},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 548},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 10},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 10},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 40},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 10},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 10},
  [858] = {.lex_state = 10},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
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
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 548},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 10},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
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
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 548},
  [935] = {.lex_state = 10},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 548},
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
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 549},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 10},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 10},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 548},
  [978] = {.lex_state = 10},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 548},
  [982] = {.lex_state = 0},
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
    [sym_source_file] = STATE(968),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(241),
    [sym_delete_statement] = STATE(241),
    [sym_begin_batch] = STATE(506),
    [sym_insert_statement] = STATE(241),
    [sym_truncate] = STATE(241),
    [sym_create_index] = STATE(241),
    [sym_drop_index] = STATE(241),
    [sym_update] = STATE(241),
    [sym_use] = STATE(241),
    [sym_grant] = STATE(241),
    [sym_revoke] = STATE(241),
    [sym_list_roles] = STATE(241),
    [sym_list_permissions] = STATE(241),
    [sym_drop_aggregate] = STATE(241),
    [sym_drop_materialized_view] = STATE(241),
    [sym_drop_function] = STATE(241),
    [sym_drop_keyspace] = STATE(241),
    [sym_drop_role] = STATE(241),
    [sym_drop_table] = STATE(241),
    [sym_drop_trigger] = STATE(241),
    [sym_drop_type] = STATE(241),
    [sym_drop_user] = STATE(241),
    [sym_create_aggregate] = STATE(241),
    [sym_create_materialized_view] = STATE(241),
    [sym_create_function] = STATE(241),
    [sym_create_keyspace] = STATE(241),
    [sym_create_role] = STATE(241),
    [sym_create_table] = STATE(241),
    [sym_create_trigger] = STATE(241),
    [sym_create_type] = STATE(241),
    [sym_create_user] = STATE(241),
    [sym_alter_materialized_view] = STATE(241),
    [sym_alter_keyspace] = STATE(241),
    [sym_alter_role] = STATE(241),
    [sym_alter_table] = STATE(241),
    [sym_alter_type] = STATE(241),
    [sym_alter_user] = STATE(241),
    [sym_apply_batch] = STATE(241),
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
    STATE(506), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(241), 37,
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
    STATE(506), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(241), 37,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(850), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(815), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(903), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
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
  [425] = 3,
    STATE(39), 1,
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
  [460] = 3,
    STATE(39), 1,
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
  [495] = 3,
    STATE(39), 1,
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
  [530] = 3,
    STATE(39), 1,
      sym_data_type_name,
    STATE(94), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
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
  [600] = 3,
    STATE(39), 1,
      sym_data_type_name,
    STATE(768), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
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
  [670] = 3,
    STATE(39), 1,
      sym_data_type_name,
    STATE(880), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(686), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
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
  [775] = 3,
    STATE(39), 1,
      sym_data_type_name,
    STATE(427), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(931), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
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
  [880] = 3,
    STATE(39), 1,
      sym_data_type_name,
    STATE(707), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(39), 1,
      sym_data_type_name,
    STATE(942), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(525), 1,
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
  [982] = 2,
    STATE(614), 1,
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
  [1014] = 2,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(89), 25,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1045] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(29), 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1077] = 1,
    ACTIONS(98), 25,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1105] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(29), 1,
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
  [1136] = 1,
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
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1163] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(29), 1,
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
  [1194] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(31), 1,
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
  [1225] = 1,
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
  [1252] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(33), 1,
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
  [1283] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1309] = 3,
    ACTIONS(114), 1,
      aux_sym_relation_elements_token1,
    STATE(38), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1339] = 3,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_data_type_definition,
    ACTIONS(117), 21,
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
  [1369] = 8,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(58), 1,
      sym_where_spec,
    STATE(70), 1,
      sym_order_spec,
    STATE(184), 1,
      sym_limit_spec,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1409] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(55), 1,
      sym_where_spec,
    STATE(88), 1,
      sym_order_spec,
    STATE(159), 1,
      sym_limit_spec,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1449] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(57), 1,
      sym_where_spec,
    STATE(77), 1,
      sym_order_spec,
    STATE(165), 1,
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
  [1489] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1514] = 1,
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
  [1539] = 1,
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
  [1564] = 1,
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
  [1589] = 1,
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
  [1614] = 1,
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
  [1639] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    STATE(51), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(147), 20,
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
  [1693] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    STATE(38), 1,
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
  [1772] = 1,
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
  [1797] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(163), 1,
      aux_sym_select_statement_token4,
    STATE(84), 1,
      sym_order_spec,
    STATE(178), 1,
      sym_limit_spec,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1831] = 1,
    ACTIONS(165), 21,
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
  [1855] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_order_spec,
    STATE(159), 1,
      sym_limit_spec,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1889] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(77), 1,
      sym_order_spec,
    STATE(165), 1,
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
  [1923] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1947] = 1,
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
  [1971] = 1,
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
  [1995] = 2,
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
  [2020] = 2,
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
  [2045] = 2,
    ACTIONS(183), 1,
      aux_sym_relation_element_token1,
    ACTIONS(181), 19,
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
  [2070] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2095] = 2,
    ACTIONS(191), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(189), 18,
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
  [2120] = 1,
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
  [2143] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(195), 19,
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
  [2168] = 1,
    ACTIONS(199), 19,
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
  [2190] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(165), 1,
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
  [2218] = 1,
    ACTIONS(201), 19,
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
  [2240] = 1,
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
  [2262] = 1,
    ACTIONS(181), 19,
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
  [2284] = 3,
    STATE(193), 1,
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
  [2310] = 4,
    ACTIONS(211), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(207), 1,
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
  [2338] = 1,
    ACTIONS(215), 19,
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
  [2360] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(159), 1,
      sym_limit_spec,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2388] = 1,
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
  [2410] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(79), 1,
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
  [2436] = 1,
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
  [2458] = 1,
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
  [2480] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(82), 1,
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
  [2506] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(553), 1,
      sym_expression,
    STATE(691), 1,
      sym_expression_list,
    STATE(580), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2544] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(245), 1,
      aux_sym_select_statement_token4,
    STATE(181), 1,
      sym_limit_spec,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2572] = 2,
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
  [2596] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(253), 1,
      aux_sym_delete_statement_token2,
    STATE(299), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2624] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(553), 1,
      sym_expression,
    STATE(816), 1,
      sym_expression_list,
    STATE(580), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2662] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(163), 1,
      aux_sym_select_statement_token4,
    STATE(178), 1,
      sym_limit_spec,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2690] = 2,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(255), 18,
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
  [2714] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(114), 1,
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
  [2739] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [2764] = 2,
    ACTIONS(269), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(267), 17,
      ts_builtin_sym_end,
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
  [2787] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
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
  [2812] = 1,
    ACTIONS(275), 18,
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
  [2833] = 3,
    ACTIONS(279), 1,
      aux_sym_relation_elements_token1,
    STATE(127), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [2858] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(289), 1,
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
  [2883] = 3,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    STATE(240), 1,
      sym_with_element,
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
  [2908] = 3,
    ACTIONS(291), 1,
      aux_sym_delete_statement_token2,
    STATE(242), 1,
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
  [2933] = 3,
    ACTIONS(295), 1,
      aux_sym_delete_statement_token2,
    STATE(215), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2958] = 3,
    ACTIONS(299), 1,
      aux_sym_delete_statement_token2,
    STATE(205), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2983] = 1,
    ACTIONS(301), 18,
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
  [3004] = 1,
    ACTIONS(303), 18,
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
  [3025] = 1,
    ACTIONS(305), 18,
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
  [3046] = 3,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    STATE(273), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3071] = 1,
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
  [3092] = 3,
    ACTIONS(311), 1,
      aux_sym_delete_statement_token2,
    STATE(272), 1,
      sym_if_spec,
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
  [3117] = 3,
    ACTIONS(315), 1,
      aux_sym_relation_elements_token1,
    STATE(107), 1,
      aux_sym_role_with_repeat1,
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
  [3142] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_ttl_timestamp,
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
  [3167] = 3,
    ACTIONS(322), 1,
      aux_sym_create_keyspace_token1,
    STATE(234), 1,
      sym_role_with,
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
  [3192] = 3,
    ACTIONS(326), 1,
      aux_sym_delete_statement_token2,
    STATE(257), 1,
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
  [3217] = 2,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(328), 17,
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
  [3240] = 3,
    ACTIONS(334), 1,
      aux_sym_delete_statement_token2,
    STATE(275), 1,
      sym_if_spec,
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
  [3265] = 3,
    ACTIONS(338), 1,
      aux_sym_delete_statement_token2,
    STATE(203), 1,
      sym_if_spec,
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
  [3290] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(107), 1,
      aux_sym_role_with_repeat1,
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
  [3315] = 3,
    ACTIONS(322), 1,
      aux_sym_create_keyspace_token1,
    STATE(226), 1,
      sym_role_with,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3340] = 1,
    ACTIONS(344), 18,
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
  [3361] = 2,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(346), 17,
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
  [3384] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(125), 1,
      aux_sym_table_options_repeat1,
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
  [3409] = 1,
    ACTIONS(354), 18,
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
  [3430] = 1,
    ACTIONS(356), 18,
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
  [3451] = 1,
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
  [3472] = 3,
    ACTIONS(279), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_alter_type_rename_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3497] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
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
  [3522] = 3,
    ACTIONS(364), 1,
      aux_sym_delete_statement_token2,
    STATE(303), 1,
      sym_if_spec,
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
  [3547] = 3,
    ACTIONS(368), 1,
      aux_sym_relation_elements_token1,
    STATE(125), 1,
      aux_sym_table_options_repeat1,
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
  [3572] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(93), 1,
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
  [3597] = 3,
    ACTIONS(375), 1,
      aux_sym_relation_elements_token1,
    STATE(127), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3622] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_create_function_repeat1,
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
  [3647] = 3,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    STATE(247), 1,
      sym_with_element,
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
  [3672] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(118), 1,
      aux_sym_table_options_repeat1,
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
  [3697] = 1,
    ACTIONS(384), 18,
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
  [3718] = 3,
    ACTIONS(388), 1,
      aux_sym_delete_statement_token2,
    STATE(224), 1,
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
  [3743] = 3,
    ACTIONS(392), 1,
      aux_sym_delete_statement_token2,
    STATE(238), 1,
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
  [3768] = 3,
    ACTIONS(396), 1,
      aux_sym_delete_statement_token2,
    STATE(237), 1,
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
  [3793] = 3,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    STATE(255), 1,
      sym_with_element,
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
  [3818] = 1,
    ACTIONS(400), 18,
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
  [3839] = 3,
    ACTIONS(322), 1,
      aux_sym_create_keyspace_token1,
    STATE(271), 1,
      sym_role_with,
    ACTIONS(402), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3864] = 3,
    ACTIONS(406), 1,
      aux_sym_delete_statement_token2,
    STATE(227), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3889] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3914] = 3,
    ACTIONS(412), 1,
      aux_sym_delete_statement_token2,
    STATE(298), 1,
      sym_if_spec,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3939] = 2,
    ACTIONS(416), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(414), 17,
      ts_builtin_sym_end,
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
  [3962] = 1,
    ACTIONS(418), 18,
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
  [3983] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(250), 1,
      sym_using_ttl_timestamp,
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
  [4008] = 8,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(641), 1,
      sym_expression,
    STATE(580), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4043] = 1,
    ACTIONS(422), 18,
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
  [4064] = 1,
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
  [4085] = 3,
    ACTIONS(428), 1,
      aux_sym_create_index_token3,
    ACTIONS(430), 1,
      aux_sym_list_roles_token2,
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
  [4110] = 3,
    ACTIONS(434), 1,
      aux_sym_delete_statement_token2,
    STATE(270), 1,
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
  [4135] = 3,
    ACTIONS(438), 1,
      aux_sym_list_roles_token2,
    ACTIONS(440), 1,
      aux_sym_list_roles_token3,
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
  [4160] = 3,
    ACTIONS(444), 1,
      aux_sym_delete_statement_token2,
    STATE(195), 1,
      sym_if_spec,
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
  [4185] = 1,
    ACTIONS(446), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4206] = 1,
    ACTIONS(448), 18,
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
  [4227] = 3,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    STATE(300), 1,
      sym_with_element,
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
  [4252] = 1,
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
  [4273] = 1,
    ACTIONS(452), 18,
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
  [4294] = 2,
    ACTIONS(456), 1,
      aux_sym_list_roles_token2,
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
  [4316] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4336] = 1,
    ACTIONS(460), 17,
      ts_builtin_sym_end,
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
  [4356] = 2,
    ACTIONS(163), 1,
      aux_sym_select_statement_token4,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4378] = 1,
    ACTIONS(462), 17,
      ts_builtin_sym_end,
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
  [4398] = 1,
    ACTIONS(464), 17,
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
  [4418] = 1,
    ACTIONS(466), 17,
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
  [4438] = 1,
    ACTIONS(468), 17,
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
  [4458] = 1,
    ACTIONS(470), 17,
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
  [4478] = 2,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4500] = 2,
    ACTIONS(474), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4522] = 1,
    ACTIONS(476), 17,
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
  [4542] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4562] = 1,
    ACTIONS(480), 17,
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
  [4582] = 2,
    ACTIONS(484), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4604] = 1,
    ACTIONS(486), 17,
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
  [4624] = 2,
    ACTIONS(490), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(488), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4646] = 1,
    ACTIONS(492), 17,
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
  [4666] = 1,
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
  [4686] = 1,
    ACTIONS(496), 17,
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
  [4706] = 1,
    ACTIONS(498), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4726] = 1,
    ACTIONS(500), 17,
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
  [4746] = 2,
    ACTIONS(245), 1,
      aux_sym_select_statement_token4,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4768] = 1,
    ACTIONS(502), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4788] = 1,
    ACTIONS(373), 17,
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
  [4808] = 2,
    ACTIONS(506), 1,
      aux_sym_select_statement_token4,
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
  [4830] = 1,
    ACTIONS(508), 17,
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
  [4850] = 2,
    ACTIONS(512), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(510), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4872] = 2,
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
  [4894] = 2,
    ACTIONS(516), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(514), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4916] = 1,
    ACTIONS(313), 17,
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
  [4936] = 1,
    ACTIONS(518), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4956] = 1,
    ACTIONS(520), 17,
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
  [4976] = 1,
    ACTIONS(522), 17,
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
  [4996] = 1,
    ACTIONS(524), 17,
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
  [5016] = 1,
    ACTIONS(366), 17,
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
  [5036] = 1,
    ACTIONS(526), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5055] = 1,
    ACTIONS(528), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5074] = 1,
    ACTIONS(530), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5093] = 1,
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
  [5112] = 1,
    ACTIONS(532), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5131] = 1,
    ACTIONS(534), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5150] = 1,
    ACTIONS(536), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5169] = 1,
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
  [5188] = 1,
    ACTIONS(540), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5207] = 1,
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
  [5226] = 1,
    ACTIONS(542), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5245] = 1,
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
  [5264] = 1,
    ACTIONS(546), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5283] = 1,
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
  [5302] = 1,
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
  [5321] = 1,
    ACTIONS(550), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5340] = 1,
    ACTIONS(552), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5359] = 1,
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
  [5378] = 1,
    ACTIONS(556), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5397] = 1,
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
  [5416] = 1,
    ACTIONS(560), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5435] = 1,
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
  [5454] = 1,
    ACTIONS(564), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5473] = 1,
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
  [5492] = 1,
    ACTIONS(566), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5511] = 1,
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
  [5530] = 1,
    ACTIONS(570), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5549] = 1,
    ACTIONS(572), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5568] = 1,
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
  [5587] = 1,
    ACTIONS(576), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5606] = 1,
    ACTIONS(578), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5625] = 1,
    ACTIONS(580), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5644] = 1,
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
  [5663] = 9,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(620), 1,
      sym_constant,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(418), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [5698] = 1,
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
  [5717] = 1,
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
  [5736] = 1,
    ACTIONS(588), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5755] = 1,
    ACTIONS(590), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5774] = 1,
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
  [5793] = 1,
    ACTIONS(594), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5812] = 1,
    ACTIONS(596), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5831] = 1,
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
  [5850] = 1,
    ACTIONS(600), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5869] = 1,
    ACTIONS(602), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5888] = 1,
    ACTIONS(604), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [5926] = 1,
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
  [5945] = 1,
    ACTIONS(608), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5964] = 1,
    ACTIONS(610), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5983] = 2,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    ACTIONS(612), 15,
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
  [6004] = 1,
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
  [6023] = 1,
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
  [6042] = 1,
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
  [6061] = 1,
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
  [6080] = 1,
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
  [6099] = 1,
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
  [6118] = 1,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6137] = 1,
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
  [6156] = 1,
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
  [6175] = 1,
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
  [6194] = 1,
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
  [6213] = 1,
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
  [6232] = 1,
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
  [6251] = 1,
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
  [6270] = 1,
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
  [6289] = 1,
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
  [6308] = 1,
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
  [6327] = 1,
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
  [6346] = 1,
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
  [6365] = 1,
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
  [6384] = 1,
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
  [6403] = 1,
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
  [6422] = 1,
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
  [6441] = 1,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6460] = 1,
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
  [6479] = 1,
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
  [6498] = 1,
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
  [6517] = 1,
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
  [6536] = 1,
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
  [6555] = 1,
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
  [6574] = 1,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6593] = 1,
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
  [6612] = 1,
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
  [6631] = 1,
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
  [6650] = 1,
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
  [6669] = 1,
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
  [6688] = 1,
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
  [6707] = 1,
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
  [6726] = 1,
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
  [6745] = 1,
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
  [6764] = 1,
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
  [6783] = 1,
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
  [6802] = 1,
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
  [6821] = 1,
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
  [6840] = 1,
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
  [6859] = 1,
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
  [6878] = 1,
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
  [6897] = 1,
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
  [6916] = 1,
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
  [6935] = 1,
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
  [6954] = 1,
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
  [6973] = 1,
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
  [6992] = 1,
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
  [7011] = 1,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7030] = 1,
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
  [7049] = 1,
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
  [7068] = 1,
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
  [7087] = 1,
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
  [7106] = 1,
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
  [7125] = 1,
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
  [7144] = 1,
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
  [7163] = 1,
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
  [7182] = 1,
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
  [7201] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(236), 1,
      sym_init_cond_definition,
    STATE(103), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7229] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(194), 1,
      sym_init_cond_definition,
    STATE(103), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7257] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(617), 1,
      sym_init_cond_definition,
    STATE(103), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7285] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(283), 1,
      sym_init_cond_definition,
    STATE(103), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7313] = 1,
    ACTIONS(724), 15,
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
  [7331] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(258), 1,
      sym_init_cond_definition,
    STATE(103), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7359] = 8,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_STAR,
    ACTIONS(728), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(692), 1,
      sym_function_args,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(465), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7390] = 9,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(430), 1,
      sym_init_cond_list,
    STATE(431), 1,
      sym_constant,
    STATE(551), 1,
      sym_init_cond_hash_item,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7423] = 7,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(728), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(818), 1,
      sym_function_args,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(465), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7451] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(734), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(48), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7476] = 5,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(654), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7499] = 6,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(736), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(582), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(681), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(235), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7524] = 5,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(738), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(44), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7546] = 11,
    ACTIONS(740), 1,
      aux_sym_truncate_token2,
    ACTIONS(742), 1,
      aux_sym_create_index_token2,
    ACTIONS(744), 1,
      aux_sym_resource_token2,
    ACTIONS(746), 1,
      aux_sym_resource_token5,
    ACTIONS(748), 1,
      aux_sym_resource_token6,
    ACTIONS(750), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(752), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(754), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(756), 1,
      aux_sym_drop_type_token1,
    ACTIONS(758), 1,
      aux_sym_drop_user_token1,
    ACTIONS(760), 1,
      aux_sym_create_aggregate_token1,
  [7580] = 4,
    ACTIONS(764), 1,
      aux_sym_privilege_token1,
    ACTIONS(766), 1,
      aux_sym_resource_token4,
    STATE(147), 1,
      sym_privilege,
    ACTIONS(762), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7600] = 5,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(410), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7622] = 3,
    ACTIONS(764), 1,
      aux_sym_privilege_token1,
    STATE(866), 1,
      sym_privilege,
    ACTIONS(762), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7639] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(867), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7658] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(529), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7677] = 6,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      aux_sym_relation_element_token1,
    ACTIONS(778), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(780), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(772), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(774), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7700] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(620), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7719] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(397), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7738] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(52), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7757] = 10,
    ACTIONS(782), 1,
      aux_sym_truncate_token2,
    ACTIONS(784), 1,
      aux_sym_create_index_token2,
    ACTIONS(786), 1,
      aux_sym_resource_token2,
    ACTIONS(788), 1,
      aux_sym_resource_token5,
    ACTIONS(790), 1,
      aux_sym_resource_token6,
    ACTIONS(792), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(794), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(796), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(798), 1,
      aux_sym_drop_type_token1,
    ACTIONS(800), 1,
      aux_sym_drop_user_token1,
  [7788] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(510), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7807] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7826] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(431), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7845] = 3,
    ACTIONS(764), 1,
      aux_sym_privilege_token1,
    STATE(865), 1,
      sym_privilege,
    ACTIONS(762), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7862] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(102), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7881] = 4,
    ACTIONS(237), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(660), 1,
      sym_constant,
    ACTIONS(235), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7900] = 6,
    ACTIONS(287), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(802), 1,
      aux_sym_drop_index_token1,
    ACTIONS(804), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(806), 1,
      aux_sym_alter_table_rename_token1,
    STATE(269), 1,
      sym_alter_table_operation,
    STATE(268), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7923] = 5,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      aux_sym_relation_element_token1,
    ACTIONS(778), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(772), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(774), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7943] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(812), 1,
      sym_object_name,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7966] = 6,
    ACTIONS(814), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(816), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(818), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(820), 1,
      sym_object_name,
    STATE(802), 1,
      sym_index_column_spec,
    STATE(907), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7987] = 6,
    ACTIONS(822), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(824), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(826), 1,
      sym_object_name,
    STATE(229), 1,
      sym_table_options,
    STATE(957), 1,
      sym_table_option_name,
    STATE(130), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8008] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(828), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8031] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(830), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8054] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(832), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8077] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(834), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8100] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(836), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8123] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(838), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8146] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(840), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8169] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(842), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8192] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(844), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8215] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(846), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8238] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(848), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8261] = 6,
    ACTIONS(814), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(816), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(818), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(820), 1,
      sym_object_name,
    STATE(797), 1,
      sym_index_column_spec,
    STATE(907), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8282] = 6,
    ACTIONS(814), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(816), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(818), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(820), 1,
      sym_object_name,
    STATE(908), 1,
      sym_index_column_spec,
    STATE(907), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8303] = 6,
    ACTIONS(814), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(816), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(818), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(820), 1,
      sym_object_name,
    STATE(735), 1,
      sym_index_column_spec,
    STATE(907), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8324] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(850), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8347] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(852), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8370] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(854), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8393] = 7,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(856), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(302), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8416] = 7,
    ACTIONS(858), 1,
      aux_sym_select_statement_token2,
    ACTIONS(860), 1,
      aux_sym_select_statement_token3,
    ACTIONS(862), 1,
      anon_sym_STAR,
    ACTIONS(864), 1,
      sym_object_name,
    STATE(509), 1,
      sym_select_element,
    STATE(543), 1,
      sym_function_call,
    STATE(592), 1,
      sym_select_elements,
  [8438] = 3,
    ACTIONS(870), 1,
      aux_sym_relation_element_token1,
    ACTIONS(866), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(868), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8452] = 7,
    ACTIONS(872), 1,
      aux_sym_truncate_token2,
    ACTIONS(874), 1,
      aux_sym_privilege_token1,
    ACTIONS(876), 1,
      aux_sym_resource_token2,
    ACTIONS(878), 1,
      aux_sym_resource_token5,
    ACTIONS(880), 1,
      aux_sym_resource_token6,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(846), 1,
      sym_resource,
  [8474] = 6,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      sym_object_name,
    STATE(43), 1,
      sym_relation_element,
    STATE(371), 1,
      sym_function_call,
    STATE(656), 1,
      sym_column_not_null,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8494] = 7,
    ACTIONS(872), 1,
      aux_sym_truncate_token2,
    ACTIONS(874), 1,
      aux_sym_privilege_token1,
    ACTIONS(876), 1,
      aux_sym_resource_token2,
    ACTIONS(878), 1,
      aux_sym_resource_token5,
    ACTIONS(880), 1,
      aux_sym_resource_token6,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(843), 1,
      sym_resource,
  [8516] = 7,
    ACTIONS(872), 1,
      aux_sym_truncate_token2,
    ACTIONS(874), 1,
      aux_sym_privilege_token1,
    ACTIONS(876), 1,
      aux_sym_resource_token2,
    ACTIONS(878), 1,
      aux_sym_resource_token5,
    ACTIONS(880), 1,
      aux_sym_resource_token6,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(156), 1,
      sym_resource,
  [8538] = 5,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(886), 1,
      aux_sym__decimal_literal_token1,
    STATE(682), 1,
      sym__decimal_literal,
    STATE(683), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8556] = 3,
    ACTIONS(892), 1,
      aux_sym_relation_element_token1,
    ACTIONS(888), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(890), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8570] = 6,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(894), 1,
      sym_object_name,
    STATE(49), 1,
      sym_relation_element,
    STATE(67), 1,
      sym_relation_elements,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8590] = 5,
    ACTIONS(822), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(824), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(826), 1,
      sym_object_name,
    STATE(957), 1,
      sym_table_option_name,
    STATE(191), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8608] = 5,
    ACTIONS(896), 1,
      aux_sym_privilege_token3,
    ACTIONS(898), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(900), 1,
      aux_sym_alter_table_rename_token1,
    STATE(276), 1,
      sym_alter_type_operation,
    STATE(277), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8626] = 5,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(894), 1,
      sym_object_name,
    STATE(43), 1,
      sym_relation_element,
    STATE(371), 1,
      sym_function_call,
    STATE(46), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8643] = 6,
    ACTIONS(902), 1,
      aux_sym_truncate_token2,
    ACTIONS(904), 1,
      aux_sym_resource_token2,
    ACTIONS(906), 1,
      aux_sym_resource_token6,
    ACTIONS(908), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(910), 1,
      aux_sym_drop_type_token1,
    ACTIONS(912), 1,
      aux_sym_drop_user_token1,
  [8662] = 2,
    ACTIONS(914), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(916), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8673] = 6,
    ACTIONS(862), 1,
      anon_sym_STAR,
    ACTIONS(864), 1,
      sym_object_name,
    ACTIONS(918), 1,
      aux_sym_select_statement_token3,
    STATE(509), 1,
      sym_select_element,
    STATE(543), 1,
      sym_function_call,
    STATE(599), 1,
      sym_select_elements,
  [8692] = 4,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(922), 1,
      sym_object_name,
    STATE(799), 1,
      sym_primary_key_definition,
    STATE(800), 2,
      sym_compound_key,
      sym_composite_key,
  [8706] = 3,
    ACTIONS(926), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(484), 1,
      sym_using_timestamp_spec,
    ACTIONS(924), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8718] = 5,
    ACTIONS(928), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(930), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(932), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(934), 1,
      aux_sym_role_with_option_token4,
    STATE(186), 1,
      sym_role_with_option,
  [8734] = 1,
    ACTIONS(936), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8742] = 1,
    ACTIONS(938), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8750] = 3,
    ACTIONS(926), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(538), 1,
      sym_using_timestamp_spec,
    ACTIONS(940), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8762] = 5,
    ACTIONS(942), 1,
      aux_sym_from_spec_token1,
    ACTIONS(944), 1,
      sym_object_name,
    STATE(405), 1,
      sym_from_spec,
    STATE(528), 1,
      sym_delete_column_item,
    STATE(590), 1,
      sym_delete_column_list,
  [8778] = 5,
    ACTIONS(946), 1,
      sym__string_literal,
    ACTIONS(948), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(950), 1,
      aux_sym_create_index_token3,
    ACTIONS(952), 1,
      sym_object_name,
    STATE(783), 1,
      sym_short_index_name,
  [8794] = 5,
    ACTIONS(942), 1,
      aux_sym_from_spec_token1,
    ACTIONS(944), 1,
      sym_object_name,
    STATE(399), 1,
      sym_from_spec,
    STATE(528), 1,
      sym_delete_column_item,
    STATE(661), 1,
      sym_delete_column_list,
  [8810] = 5,
    ACTIONS(862), 1,
      anon_sym_STAR,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(509), 1,
      sym_select_element,
    STATE(543), 1,
      sym_function_call,
    STATE(684), 1,
      sym_select_elements,
  [8826] = 3,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
    ACTIONS(956), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(188), 2,
      sym_option_hash,
      sym_table_option_value,
  [8838] = 5,
    ACTIONS(928), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(930), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(932), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(934), 1,
      aux_sym_role_with_option_token4,
    STATE(90), 1,
      sym_role_with_option,
  [8854] = 1,
    ACTIONS(960), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8862] = 1,
    ACTIONS(962), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8870] = 1,
    ACTIONS(964), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8878] = 1,
    ACTIONS(966), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8886] = 5,
    ACTIONS(862), 1,
      anon_sym_STAR,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(509), 1,
      sym_select_element,
    STATE(543), 1,
      sym_function_call,
    STATE(599), 1,
      sym_select_elements,
  [8902] = 3,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(971), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8914] = 1,
    ACTIONS(973), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8922] = 4,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    ACTIONS(977), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      aux_sym_select_element_token1,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8936] = 4,
    ACTIONS(981), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(983), 1,
      sym_object_name,
    STATE(562), 1,
      sym_column_definition,
    STATE(695), 1,
      sym_primary_key_element,
  [8949] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [8962] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(425), 1,
      aux_sym_update_repeat1,
  [8975] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [8988] = 1,
    ACTIONS(971), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8995] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9008] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(926), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(124), 1,
      sym_where_spec,
    STATE(636), 1,
      sym_using_timestamp_spec,
  [9021] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(987), 1,
      anon_sym_DOT,
    ACTIONS(989), 1,
      aux_sym_update_token2,
    STATE(872), 1,
      sym_using_ttl_timestamp,
  [9034] = 3,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(994), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9045] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(409), 1,
      aux_sym_update_repeat1,
  [9058] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9071] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      sym_where_spec,
    STATE(407), 1,
      aux_sym_update_repeat1,
  [9084] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(926), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(99), 1,
      sym_where_spec,
    STATE(558), 1,
      sym_using_timestamp_spec,
  [9097] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(394), 1,
      aux_sym_update_repeat1,
  [9110] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9123] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_where_spec,
    STATE(416), 1,
      aux_sym_update_repeat1,
  [9136] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9149] = 4,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      aux_sym_assignment_set_repeat1,
  [9162] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_where_spec,
    STATE(403), 1,
      aux_sym_update_repeat1,
  [9175] = 4,
    ACTIONS(1002), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1004), 1,
      aux_sym_primary_key_column_token1,
    STATE(423), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(473), 1,
      aux_sym_relation_elements_repeat1,
  [9188] = 4,
    ACTIONS(981), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(983), 1,
      sym_object_name,
    STATE(562), 1,
      sym_column_definition,
    STATE(805), 1,
      sym_primary_key_element,
  [9201] = 1,
    ACTIONS(1006), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9208] = 4,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_function_args_repeat1,
  [9221] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9234] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_where_spec,
    STATE(398), 1,
      aux_sym_update_repeat1,
  [9247] = 2,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1014), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9256] = 4,
    ACTIONS(946), 1,
      sym__string_literal,
    ACTIONS(952), 1,
      sym_object_name,
    ACTIONS(1016), 1,
      aux_sym_create_index_token3,
    STATE(918), 1,
      sym_short_index_name,
  [9269] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1020), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9280] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1022), 1,
      anon_sym_DOT,
    ACTIONS(1024), 1,
      aux_sym_update_token2,
    STATE(716), 1,
      sym_using_ttl_timestamp,
  [9293] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_where_spec,
    STATE(396), 1,
      aux_sym_update_repeat1,
  [9306] = 4,
    ACTIONS(1002), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1026), 1,
      aux_sym_primary_key_column_token1,
    STATE(457), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(458), 1,
      aux_sym_relation_elements_repeat1,
  [9319] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1028), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9330] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [9343] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(926), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(96), 1,
      sym_where_spec,
    STATE(595), 1,
      sym_using_timestamp_spec,
  [9356] = 3,
    ACTIONS(1032), 1,
      aux_sym_primary_key_column_token1,
    STATE(559), 1,
      sym_primary_key_column,
    ACTIONS(1030), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9367] = 3,
    ACTIONS(1034), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1036), 1,
      sym_object_name,
    STATE(628), 1,
      sym_user_name,
  [9377] = 3,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(449), 1,
      sym_column_definition,
    STATE(693), 1,
      sym_column_definition_list,
  [9387] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9397] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_assignment_set_repeat1,
  [9407] = 3,
    ACTIONS(1046), 1,
      aux_sym_truncate_token2,
    ACTIONS(1048), 1,
      sym_object_name,
    STATE(280), 1,
      sym_table_name,
  [9417] = 2,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    ACTIONS(1050), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9425] = 3,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    STATE(504), 1,
      aux_sym_option_hash_repeat1,
  [9435] = 3,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      aux_sym_function_args_repeat1,
  [9445] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      aux_sym_assignment_set_repeat1,
  [9455] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_init_cond_hash_repeat1,
  [9465] = 3,
    ACTIONS(1048), 1,
      sym_object_name,
    ACTIONS(1066), 1,
      aux_sym_delete_statement_token2,
    STATE(788), 1,
      sym_table_name,
  [9475] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_relation_element_repeat1,
  [9485] = 3,
    ACTIONS(1070), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1072), 1,
      sym_object_name,
    STATE(245), 1,
      sym_materialized_view_name,
  [9495] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      aux_sym_assignment_set_repeat1,
  [9505] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      aux_sym_create_function_repeat1,
  [9515] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(892), 1,
      sym_return_mode,
  [9525] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_create_function_repeat1,
  [9535] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(747), 1,
      sym_return_mode,
  [9545] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    STATE(500), 1,
      aux_sym_replication_list_repeat1,
  [9555] = 3,
    ACTIONS(1088), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1090), 1,
      sym_object_name,
    STATE(781), 1,
      sym_keyspace_name,
  [9565] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      aux_sym_relation_element_repeat2,
  [9575] = 3,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_column_definition_list_repeat1,
  [9585] = 3,
    ACTIONS(1098), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1100), 1,
      sym_object_name,
    STATE(773), 1,
      sym_function_name,
  [9595] = 3,
    ACTIONS(1102), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1104), 1,
      sym_object_name,
    STATE(115), 1,
      sym_role_name,
  [9605] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      aux_sym_from_spec_token1,
    STATE(452), 1,
      aux_sym_select_elements_repeat1,
  [9615] = 3,
    ACTIONS(1111), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1113), 1,
      sym_object_name,
    STATE(769), 1,
      sym_aggregate_name,
  [9625] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9635] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_column_definition_list_repeat1,
  [9645] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(422), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [9655] = 3,
    ACTIONS(1126), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1129), 1,
      aux_sym_primary_key_column_token1,
    STATE(457), 1,
      aux_sym_materialized_view_where_repeat1,
  [9665] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1131), 1,
      aux_sym_primary_key_column_token1,
    STATE(38), 1,
      aux_sym_relation_elements_repeat1,
  [9675] = 3,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_expression_list_repeat1,
  [9685] = 3,
    ACTIONS(1137), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(757), 1,
      sym_trigger_name,
  [9695] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [9705] = 3,
    ACTIONS(1141), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1143), 1,
      sym_object_name,
    STATE(746), 1,
      sym_type_name,
  [9715] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_GT,
    STATE(511), 1,
      aux_sym_data_type_definition_repeat1,
  [9725] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
  [9735] = 3,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_function_args_repeat1,
  [9745] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      aux_sym_create_function_repeat1,
  [9755] = 3,
    ACTIONS(1048), 1,
      sym_object_name,
    ACTIONS(1153), 1,
      aux_sym_delete_statement_token2,
    STATE(199), 1,
      sym_table_name,
  [9765] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(915), 1,
      sym_return_mode,
  [9775] = 3,
    ACTIONS(1155), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(196), 1,
      sym_index_name,
  [9785] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(404), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [9795] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(792), 1,
      sym_return_mode,
  [9805] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [9815] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1026), 1,
      aux_sym_primary_key_column_token1,
    STATE(38), 1,
      aux_sym_relation_elements_repeat1,
  [9825] = 3,
    ACTIONS(1090), 1,
      sym_object_name,
    ACTIONS(1161), 1,
      aux_sym_delete_statement_token2,
    STATE(211), 1,
      sym_keyspace_name,
  [9835] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(417), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [9845] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(555), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [9855] = 3,
    ACTIONS(1100), 1,
      sym_object_name,
    ACTIONS(1163), 1,
      aux_sym_delete_statement_token2,
    STATE(261), 1,
      sym_function_name,
  [9865] = 3,
    ACTIONS(1104), 1,
      sym_object_name,
    ACTIONS(1165), 1,
      aux_sym_delete_statement_token2,
    STATE(259), 1,
      sym_role_name,
  [9875] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1167), 1,
      aux_sym_delete_statement_token2,
    STATE(254), 1,
      sym_aggregate_name,
  [9885] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_relation_element_repeat1,
  [9895] = 3,
    ACTIONS(1171), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_expression_list_repeat1,
  [9905] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      aux_sym_from_spec_token1,
    STATE(482), 1,
      aux_sym_delete_column_list_repeat1,
  [9915] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym_clustering_key_list_repeat1,
  [9925] = 1,
    ACTIONS(1183), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9931] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
  [9941] = 3,
    ACTIONS(1139), 1,
      sym_object_name,
    ACTIONS(1187), 1,
      aux_sym_delete_statement_token2,
    STATE(722), 1,
      sym_trigger_name,
  [9951] = 3,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym_function_args_repeat1,
  [9961] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [9971] = 3,
    ACTIONS(1193), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1195), 1,
      aux_sym_insert_values_spec_token1,
    STATE(86), 1,
      sym_insert_values_spec,
  [9981] = 3,
    ACTIONS(1143), 1,
      sym_object_name,
    ACTIONS(1197), 1,
      aux_sym_delete_statement_token2,
    STATE(198), 1,
      sym_type_name,
  [9991] = 3,
    ACTIONS(1036), 1,
      sym_object_name,
    ACTIONS(1199), 1,
      aux_sym_delete_statement_token2,
    STATE(200), 1,
      sym_user_name,
  [10001] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(411), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [10011] = 3,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(515), 1,
      sym_typed_name,
  [10021] = 3,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACE,
    STATE(494), 1,
      aux_sym_assignment_map_repeat1,
  [10031] = 3,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(449), 1,
      sym_column_definition,
    STATE(927), 1,
      sym_column_definition_list,
  [10041] = 3,
    ACTIONS(886), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1208), 1,
      sym__string_literal,
    STATE(563), 1,
      sym__decimal_literal,
  [10051] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(395), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [10061] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [10071] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(893), 1,
      sym_return_mode,
  [10081] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    STATE(552), 1,
      aux_sym_replication_list_repeat1,
  [10091] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(810), 1,
      sym_return_mode,
  [10101] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [10111] = 3,
    ACTIONS(1201), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_typed_name,
  [10121] = 3,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    STATE(540), 1,
      aux_sym_option_hash_repeat1,
  [10131] = 2,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1222), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10139] = 3,
    ACTIONS(1224), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1226), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1228), 1,
      aux_sym_update_token1,
  [10149] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      aux_sym_where_spec_token1,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [10159] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(402), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [10169] = 3,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      aux_sym_from_spec_token1,
    STATE(530), 1,
      aux_sym_select_elements_repeat1,
  [10179] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      aux_sym_assignment_set_repeat1,
  [10189] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_GT,
    STATE(511), 1,
      aux_sym_data_type_definition_repeat1,
  [10199] = 3,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_init_cond_hash_repeat1,
  [10209] = 3,
    ACTIONS(1072), 1,
      sym_object_name,
    ACTIONS(1250), 1,
      aux_sym_delete_statement_token2,
    STATE(774), 1,
      sym_materialized_view_name,
  [10219] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_create_function_repeat1,
  [10229] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_create_function_repeat1,
  [10239] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_clustering_key_list_repeat1,
  [10249] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_relation_element_repeat2,
  [10259] = 3,
    ACTIONS(1201), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      sym_typed_name,
  [10269] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1260), 1,
      aux_sym_update_token2,
    STATE(826), 1,
      sym_using_ttl_timestamp,
  [10279] = 3,
    ACTIONS(1193), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1195), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
  [10289] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [10299] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_create_function_repeat1,
  [10309] = 2,
    ACTIONS(1266), 1,
      aux_sym_resource_token1,
    ACTIONS(1268), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [10317] = 3,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(543), 1,
      sym_function_call,
    STATE(678), 1,
      sym_select_element,
  [10327] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_GT,
    STATE(463), 1,
      aux_sym_data_type_definition_repeat1,
  [10337] = 3,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RBRACE,
    STATE(494), 1,
      aux_sym_assignment_map_repeat1,
  [10347] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(406), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [10357] = 3,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      aux_sym_from_spec_token1,
    STATE(547), 1,
      aux_sym_delete_column_list_repeat1,
  [10367] = 3,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    STATE(526), 1,
      aux_sym_assignment_map_repeat1,
  [10377] = 3,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      aux_sym_from_spec_token1,
    STATE(452), 1,
      aux_sym_select_elements_repeat1,
  [10387] = 2,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(1286), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [10395] = 3,
    ACTIONS(1100), 1,
      sym_object_name,
    ACTIONS(1288), 1,
      aux_sym_delete_statement_token2,
    STATE(982), 1,
      sym_function_name,
  [10405] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      aux_sym_create_function_repeat1,
  [10415] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(408), 1,
      sym_assignment_element,
    STATE(832), 1,
      sym_indexed_column,
  [10425] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1292), 1,
      aux_sym_delete_statement_token2,
    STATE(974), 1,
      sym_aggregate_name,
  [10435] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(705), 1,
      sym_return_mode,
  [10445] = 2,
    ACTIONS(1296), 1,
      anon_sym_LBRACK,
    ACTIONS(1294), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10453] = 1,
    ACTIONS(924), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10459] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1298), 1,
      aux_sym_update_token2,
    STATE(971), 1,
      sym_using_ttl_timestamp,
  [10469] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    STATE(540), 1,
      aux_sym_option_hash_repeat1,
  [10479] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_relation_element_repeat2,
  [10489] = 3,
    ACTIONS(1201), 1,
      sym_object_name,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_typed_name,
  [10499] = 2,
    ACTIONS(1309), 1,
      aux_sym_select_element_token1,
    ACTIONS(1307), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10507] = 1,
    ACTIONS(1311), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10513] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_relation_element_repeat2,
  [10523] = 3,
    ACTIONS(886), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1313), 1,
      sym__string_literal,
    STATE(730), 1,
      sym__decimal_literal,
  [10533] = 3,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      aux_sym_from_spec_token1,
    STATE(482), 1,
      aux_sym_delete_column_list_repeat1,
  [10543] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_assignment_set_repeat1,
  [10553] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_column_definition_list_repeat1,
  [10563] = 2,
    ACTIONS(1326), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1324), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10571] = 3,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_init_cond_hash_repeat1,
  [10581] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RBRACE,
    STATE(552), 1,
      aux_sym_replication_list_repeat1,
  [10591] = 3,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_expression_list_repeat1,
  [10601] = 3,
    ACTIONS(1078), 1,
      aux_sym_create_function_token1,
    ACTIONS(1080), 1,
      aux_sym_return_mode_token1,
    STATE(852), 1,
      sym_return_mode,
  [10611] = 1,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10616] = 2,
    ACTIONS(1337), 1,
      sym__string_literal,
    STATE(446), 1,
      sym_replication_list_item,
  [10623] = 2,
    ACTIONS(1339), 1,
      sym_object_name,
    STATE(210), 1,
      sym_aggregate_name,
  [10630] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
  [10637] = 1,
    ACTIONS(1341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10642] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(213), 1,
      sym_function_name,
  [10649] = 1,
    ACTIONS(1333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10654] = 1,
    ACTIONS(1322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10659] = 1,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10664] = 1,
    ACTIONS(1347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10669] = 1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10674] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(61), 1,
      sym_table_name,
  [10681] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(696), 1,
      sym_table_name,
  [10688] = 2,
    ACTIONS(1351), 1,
      sym_object_name,
    STATE(635), 1,
      sym_delete_column_item,
  [10695] = 2,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [10702] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(844), 1,
      sym_partition_key_list,
  [10709] = 2,
    ACTIONS(1359), 1,
      sym_object_name,
    STATE(214), 1,
      sym_keyspace_name,
  [10716] = 2,
    ACTIONS(1361), 1,
      sym_object_name,
    STATE(972), 1,
      sym_trigger_name,
  [10723] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [10730] = 1,
    ACTIONS(1363), 2,
      sym__string_literal,
      sym__float_literal,
  [10735] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(208), 1,
      sym_table_name,
  [10742] = 2,
    ACTIONS(1365), 1,
      sym_object_name,
    STATE(206), 1,
      sym_type_name,
  [10749] = 2,
    ACTIONS(1367), 1,
      sym_object_name,
    STATE(204), 1,
      sym_user_name,
  [10756] = 2,
    ACTIONS(1361), 1,
      sym_object_name,
    STATE(876), 1,
      sym_trigger_name,
  [10763] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(220), 1,
      sym_index_name,
  [10770] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10775] = 2,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    STATE(489), 1,
      sym_insert_column_spec,
  [10782] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(412), 1,
      sym_column_not_null,
  [10789] = 2,
    ACTIONS(1377), 1,
      aux_sym_primary_key_column_token1,
    STATE(153), 1,
      sym_primary_key_element,
  [10796] = 2,
    ACTIONS(1379), 1,
      anon_sym_EQ,
    ACTIONS(1381), 1,
      anon_sym_LBRACK,
  [10803] = 2,
    ACTIONS(1383), 1,
      aux_sym_role_with_option_token1,
    STATE(74), 1,
      sym_user_password,
  [10810] = 2,
    ACTIONS(1365), 1,
      sym_object_name,
    STATE(874), 1,
      sym_type_name,
  [10817] = 2,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(522), 1,
      sym_typed_name,
  [10824] = 2,
    ACTIONS(1385), 1,
      sym__string_literal,
    STATE(434), 1,
      sym_option_hash_item,
  [10831] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(741), 1,
      sym_table_name,
  [10838] = 2,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(399), 1,
      sym_from_spec,
  [10845] = 2,
    ACTIONS(1389), 1,
      sym__string_literal,
    STATE(244), 1,
      sym_trigger_class,
  [10852] = 2,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [10859] = 2,
    ACTIONS(1391), 1,
      sym_object_name,
    STATE(180), 1,
      sym_alter_type_rename_item,
  [10866] = 2,
    ACTIONS(1393), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_replication_list,
  [10873] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
  [10880] = 2,
    ACTIONS(1367), 1,
      sym_object_name,
    STATE(631), 1,
      sym_user_name,
  [10887] = 2,
    ACTIONS(1389), 1,
      sym__string_literal,
    STATE(279), 1,
      sym_trigger_class,
  [10894] = 2,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(466), 1,
      sym_typed_name,
  [10901] = 2,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [10908] = 2,
    ACTIONS(1367), 1,
      sym_object_name,
    STATE(667), 1,
      sym_user_name,
  [10915] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(710), 1,
      sym_function_name,
  [10922] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(877), 1,
      sym_clustering_key_list,
  [10929] = 2,
    ACTIONS(1339), 1,
      sym_object_name,
    STATE(711), 1,
      sym_aggregate_name,
  [10936] = 2,
    ACTIONS(1397), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1399), 1,
      sym_object_name,
  [10943] = 2,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(128), 1,
      sym_typed_name,
  [10950] = 2,
    ACTIONS(1401), 1,
      aux_sym_where_spec_token1,
    STATE(583), 1,
      sym_materialized_view_where,
  [10957] = 2,
    ACTIONS(1403), 1,
      sym_object_name,
    STATE(675), 1,
      sym_init_cond_hash_item,
  [10964] = 2,
    ACTIONS(1365), 1,
      sym_object_name,
    STATE(368), 1,
      sym_type_name,
  [10971] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(822), 1,
      sym_column_list,
  [10978] = 2,
    ACTIONS(1407), 1,
      aux_sym_durable_writes_token1,
    STATE(301), 1,
      sym_durable_writes,
  [10985] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(137), 1,
      sym_role_name,
  [10992] = 2,
    ACTIONS(1359), 1,
      sym_object_name,
    STATE(715), 1,
      sym_keyspace_name,
  [10999] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(640), 1,
      sym_table_name,
  [11006] = 1,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11011] = 1,
    ACTIONS(1411), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11016] = 2,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(126), 1,
      sym_typed_name,
  [11023] = 1,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11028] = 2,
    ACTIONS(1385), 1,
      sym__string_literal,
    STATE(565), 1,
      sym_option_hash_item,
  [11035] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(223), 1,
      sym_table_name,
  [11042] = 1,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11047] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(212), 1,
      sym_role_name,
  [11054] = 1,
    ACTIONS(1415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11059] = 2,
    ACTIONS(1391), 1,
      sym_object_name,
    STATE(122), 1,
      sym_alter_type_rename_item,
  [11066] = 2,
    ACTIONS(1337), 1,
      sym__string_literal,
    STATE(561), 1,
      sym_replication_list_item,
  [11073] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(228), 1,
      sym_table_name,
  [11080] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(928), 1,
      sym_table_name,
  [11087] = 2,
    ACTIONS(1393), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_replication_list,
  [11094] = 2,
    ACTIONS(1417), 1,
      aux_sym_create_keyspace_token1,
    STATE(235), 1,
      sym_user_with,
  [11101] = 2,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    STATE(520), 1,
      sym_insert_column_spec,
  [11108] = 2,
    ACTIONS(1419), 1,
      aux_sym_resource_token5,
    ACTIONS(1421), 1,
      aux_sym_drop_aggregate_token1,
  [11115] = 2,
    ACTIONS(1417), 1,
      aux_sym_create_keyspace_token1,
    STATE(230), 1,
      sym_user_with,
  [11122] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(904), 1,
      sym_column_list,
  [11129] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(776), 1,
      sym_column_list,
  [11136] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(777), 1,
      sym_materialized_view_name,
  [11143] = 1,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11148] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
  [11155] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(335), 1,
      sym_table_name,
  [11162] = 1,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11167] = 2,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_option_hash,
  [11174] = 2,
    ACTIONS(1401), 1,
      aux_sym_where_spec_token1,
    STATE(655), 1,
      sym_materialized_view_where,
  [11181] = 1,
    ACTIONS(1174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11186] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym_assignment_tuple,
  [11193] = 1,
    ACTIONS(1427), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11198] = 2,
    ACTIONS(886), 1,
      aux_sym__decimal_literal_token1,
    STATE(862), 1,
      sym__decimal_literal,
  [11205] = 2,
    ACTIONS(1201), 1,
      sym_object_name,
    STATE(105), 1,
      sym_typed_name,
  [11212] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(606), 1,
      sym_table_name,
  [11219] = 2,
    ACTIONS(886), 1,
      aux_sym__decimal_literal_token1,
    STATE(164), 1,
      sym__decimal_literal,
  [11226] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(629), 1,
      sym_table_name,
  [11233] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(448), 1,
      sym_assignment_tuple,
  [11240] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_assignment_tuple,
  [11247] = 2,
    ACTIONS(1393), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_replication_list,
  [11254] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(919), 1,
      sym_clustering_key_list,
  [11261] = 2,
    ACTIONS(1429), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1431), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11268] = 1,
    ACTIONS(1118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11273] = 2,
    ACTIONS(1377), 1,
      aux_sym_primary_key_column_token1,
    STATE(104), 1,
      sym_primary_key_element,
  [11280] = 1,
    ACTIONS(1129), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [11285] = 1,
    ACTIONS(1433), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11290] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(804), 1,
      sym_table_name,
  [11297] = 1,
    ACTIONS(1435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11302] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11307] = 2,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(426), 1,
      sym_from_spec,
  [11314] = 2,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(562), 1,
      sym_column_definition,
  [11321] = 1,
    ACTIONS(1439), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11326] = 2,
    ACTIONS(1407), 1,
      aux_sym_durable_writes_token1,
    STATE(233), 1,
      sym_durable_writes,
  [11333] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_assignment_tuple,
  [11340] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(282), 1,
      sym_materialized_view_name,
  [11347] = 2,
    ACTIONS(1417), 1,
      aux_sym_create_keyspace_token1,
    STATE(278), 1,
      sym_user_with,
  [11354] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(925), 1,
      sym_table_name,
  [11361] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(135), 1,
      sym_materialized_view_name,
  [11368] = 1,
    ACTIONS(1441), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [11373] = 2,
    ACTIONS(1359), 1,
      sym_object_name,
    STATE(900), 1,
      sym_keyspace_name,
  [11380] = 2,
    ACTIONS(1407), 1,
      aux_sym_durable_writes_token1,
    STATE(221), 1,
      sym_durable_writes,
  [11387] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(899), 1,
      sym_function_name,
  [11394] = 1,
    ACTIONS(1443), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [11399] = 1,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11404] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(109), 1,
      sym_role_name,
  [11411] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(656), 1,
      sym_column_not_null,
  [11418] = 1,
    ACTIONS(1109), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11423] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(217), 1,
      sym_table_name,
  [11430] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(581), 1,
      sym_table_name,
  [11437] = 1,
    ACTIONS(1050), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11442] = 1,
    ACTIONS(1445), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11447] = 1,
    ACTIONS(1447), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11452] = 2,
    ACTIONS(1387), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [11459] = 2,
    ACTIONS(1339), 1,
      sym_object_name,
    STATE(885), 1,
      sym_aggregate_name,
  [11466] = 1,
    ACTIONS(1449), 1,
      aux_sym_create_function_token2,
  [11470] = 1,
    ACTIONS(1451), 1,
      aux_sym_order_spec_token2,
  [11474] = 1,
    ACTIONS(1453), 1,
      aux_sym_select_statement_token5,
  [11478] = 1,
    ACTIONS(1455), 1,
      aux_sym_select_statement_token5,
  [11482] = 1,
    ACTIONS(1457), 1,
      anon_sym_LPAREN,
  [11486] = 1,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [11490] = 1,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
  [11494] = 1,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
  [11498] = 1,
    ACTIONS(1465), 1,
      anon_sym_LPAREN,
  [11502] = 1,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [11506] = 1,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
  [11510] = 1,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [11514] = 1,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [11518] = 1,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
  [11522] = 1,
    ACTIONS(1477), 1,
      anon_sym_EQ,
  [11526] = 1,
    ACTIONS(1479), 1,
      anon_sym_COLON,
  [11530] = 1,
    ACTIONS(1481), 1,
      aux_sym_constant_token2,
  [11534] = 1,
    ACTIONS(1483), 1,
      aux_sym_return_mode_token2,
  [11538] = 1,
    ACTIONS(1485), 1,
      sym__string_literal,
  [11542] = 1,
    ACTIONS(1487), 1,
      aux_sym_create_function_token1,
  [11546] = 1,
    ACTIONS(1489), 1,
      anon_sym_COLON,
  [11550] = 1,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
  [11554] = 1,
    ACTIONS(1493), 1,
      aux_sym_create_aggregate_token4,
  [11558] = 1,
    ACTIONS(1495), 1,
      aux_sym_select_statement_token1,
  [11562] = 1,
    ACTIONS(1497), 1,
      anon_sym_LPAREN,
  [11566] = 1,
    ACTIONS(1499), 1,
      anon_sym_LPAREN,
  [11570] = 1,
    ACTIONS(1501), 1,
      aux_sym_create_aggregate_token3,
  [11574] = 1,
    ACTIONS(1503), 1,
      sym_object_name,
  [11578] = 1,
    ACTIONS(1505), 1,
      sym_object_name,
  [11582] = 1,
    ACTIONS(1507), 1,
      aux_sym_create_keyspace_token1,
  [11586] = 1,
    ACTIONS(1509), 1,
      aux_sym_update_token2,
  [11590] = 1,
    ACTIONS(1511), 1,
      sym_object_name,
  [11594] = 1,
    ACTIONS(1513), 1,
      sym_object_name,
  [11598] = 1,
    ACTIONS(1515), 1,
      aux_sym_delete_statement_token3,
  [11602] = 1,
    ACTIONS(1517), 1,
      aux_sym_delete_statement_token3,
  [11606] = 1,
    ACTIONS(1519), 1,
      aux_sym_delete_statement_token3,
  [11610] = 1,
    ACTIONS(1521), 1,
      aux_sym_create_index_token3,
  [11614] = 1,
    ACTIONS(1523), 1,
      aux_sym_delete_statement_token3,
  [11618] = 1,
    ACTIONS(1525), 1,
      aux_sym_delete_statement_token3,
  [11622] = 1,
    ACTIONS(1527), 1,
      aux_sym_select_statement_token5,
  [11626] = 1,
    ACTIONS(1529), 1,
      aux_sym_delete_statement_token3,
  [11630] = 1,
    ACTIONS(1531), 1,
      aux_sym_delete_statement_token3,
  [11634] = 1,
    ACTIONS(1533), 1,
      aux_sym_insert_statement_token3,
  [11638] = 1,
    ACTIONS(1535), 1,
      aux_sym_delete_statement_token3,
  [11642] = 1,
    ACTIONS(1537), 1,
      anon_sym_RBRACK,
  [11646] = 1,
    ACTIONS(1539), 1,
      sym_object_name,
  [11650] = 1,
    ACTIONS(1541), 1,
      aux_sym__decimal_literal_token1,
  [11654] = 1,
    ACTIONS(1543), 1,
      aux_sym_delete_statement_token3,
  [11658] = 1,
    ACTIONS(1545), 1,
      sym_object_name,
  [11662] = 1,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [11666] = 1,
    ACTIONS(1549), 1,
      aux_sym_delete_statement_token3,
  [11670] = 1,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
  [11674] = 1,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
  [11678] = 1,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
  [11682] = 1,
    ACTIONS(1557), 1,
      aux_sym_delete_statement_token3,
  [11686] = 1,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
  [11690] = 1,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
  [11694] = 1,
    ACTIONS(1563), 1,
      aux_sym_insert_statement_token3,
  [11698] = 1,
    ACTIONS(1565), 1,
      aux_sym_delete_statement_token3,
  [11702] = 1,
    ACTIONS(1567), 1,
      anon_sym_EQ,
  [11706] = 1,
    ACTIONS(1569), 1,
      anon_sym_LPAREN,
  [11710] = 1,
    ACTIONS(1571), 1,
      aux_sym_create_function_token1,
  [11714] = 1,
    ACTIONS(1573), 1,
      aux_sym_create_keyspace_token2,
  [11718] = 1,
    ACTIONS(1575), 1,
      aux_sym_delete_statement_token3,
  [11722] = 1,
    ACTIONS(1577), 1,
      aux_sym_return_mode_token2,
  [11726] = 1,
    ACTIONS(1579), 1,
      aux_sym_create_function_token1,
  [11730] = 1,
    ACTIONS(1581), 1,
      sym_object_name,
  [11734] = 1,
    ACTIONS(1583), 1,
      aux_sym_create_function_token2,
  [11738] = 1,
    ACTIONS(1585), 1,
      aux_sym_insert_statement_token3,
  [11742] = 1,
    ACTIONS(1587), 1,
      sym_object_name,
  [11746] = 1,
    ACTIONS(1589), 1,
      sym_object_name,
  [11750] = 1,
    ACTIONS(1591), 1,
      aux_sym_using_timestamp_spec_token1,
  [11754] = 1,
    ACTIONS(1593), 1,
      aux_sym_delete_statement_token3,
  [11758] = 1,
    ACTIONS(1595), 1,
      aux_sym_create_aggregate_token3,
  [11762] = 1,
    ACTIONS(1597), 1,
      anon_sym_EQ,
  [11766] = 1,
    ACTIONS(1599), 1,
      sym_object_name,
  [11770] = 1,
    ACTIONS(1601), 1,
      aux_sym_insert_statement_token3,
  [11774] = 1,
    ACTIONS(1603), 1,
      aux_sym_delete_statement_token3,
  [11778] = 1,
    ACTIONS(1605), 1,
      aux_sym__decimal_literal_token1,
  [11782] = 1,
    ACTIONS(1607), 1,
      aux_sym__decimal_literal_token1,
  [11786] = 1,
    ACTIONS(1609), 1,
      sym_object_name,
  [11790] = 1,
    ACTIONS(1611), 1,
      aux_sym_insert_statement_token3,
  [11794] = 1,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
  [11798] = 1,
    ACTIONS(1615), 1,
      anon_sym_LPAREN,
  [11802] = 1,
    ACTIONS(1617), 1,
      sym_object_name,
  [11806] = 1,
    ACTIONS(1619), 1,
      aux_sym_insert_statement_token3,
  [11810] = 1,
    ACTIONS(1621), 1,
      aux_sym_insert_statement_token3,
  [11814] = 1,
    ACTIONS(1623), 1,
      anon_sym_LPAREN,
  [11818] = 1,
    ACTIONS(1625), 1,
      aux_sym_select_element_token1,
  [11822] = 1,
    ACTIONS(1627), 1,
      aux_sym_delete_statement_token3,
  [11826] = 1,
    ACTIONS(1629), 1,
      aux_sym_from_spec_token1,
  [11830] = 1,
    ACTIONS(1631), 1,
      aux_sym_select_element_token1,
  [11834] = 1,
    ACTIONS(1633), 1,
      sym_object_name,
  [11838] = 1,
    ACTIONS(1635), 1,
      aux_sym_insert_statement_token3,
  [11842] = 1,
    ACTIONS(1637), 1,
      sym_object_name,
  [11846] = 1,
    ACTIONS(1639), 1,
      aux_sym_create_keyspace_token1,
  [11850] = 1,
    ACTIONS(1641), 1,
      aux_sym_insert_statement_token3,
  [11854] = 1,
    ACTIONS(1643), 1,
      aux_sym_create_index_token3,
  [11858] = 1,
    ACTIONS(1645), 1,
      aux_sym_delete_statement_token3,
  [11862] = 1,
    ACTIONS(1647), 1,
      aux_sym_insert_statement_token3,
  [11866] = 1,
    ACTIONS(1649), 1,
      sym_object_name,
  [11870] = 1,
    ACTIONS(1651), 1,
      aux_sym_create_index_token3,
  [11874] = 1,
    ACTIONS(1653), 1,
      anon_sym_LPAREN,
  [11878] = 1,
    ACTIONS(1655), 1,
      aux_sym_insert_statement_token3,
  [11882] = 1,
    ACTIONS(1657), 1,
      sym_object_name,
  [11886] = 1,
    ACTIONS(1659), 1,
      aux_sym_delete_statement_token3,
  [11890] = 1,
    ACTIONS(1661), 1,
      aux_sym_create_function_token1,
  [11894] = 1,
    ACTIONS(1663), 1,
      aux_sym_constant_token2,
  [11898] = 1,
    ACTIONS(1665), 1,
      aux_sym_create_index_token3,
  [11902] = 1,
    ACTIONS(1667), 1,
      sym_object_name,
  [11906] = 1,
    ACTIONS(1669), 1,
      aux_sym_create_keyspace_token2,
  [11910] = 1,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [11914] = 1,
    ACTIONS(1673), 1,
      sym_object_name,
  [11918] = 1,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
  [11922] = 1,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
  [11926] = 1,
    ACTIONS(1679), 1,
      sym_object_name,
  [11930] = 1,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
  [11934] = 1,
    ACTIONS(1683), 1,
      sym_object_name,
  [11938] = 1,
    ACTIONS(1685), 1,
      anon_sym_LPAREN,
  [11942] = 1,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
  [11946] = 1,
    ACTIONS(1689), 1,
      aux_sym_relation_contains_key_token2,
  [11950] = 1,
    ACTIONS(1691), 1,
      aux_sym_relation_contains_key_token2,
  [11954] = 1,
    ACTIONS(1693), 1,
      sym__boolean_literal,
  [11958] = 1,
    ACTIONS(1695), 1,
      aux_sym_using_timestamp_spec_token2,
  [11962] = 1,
    ACTIONS(1697), 1,
      aux_sym_create_function_token1,
  [11966] = 1,
    ACTIONS(1699), 1,
      aux_sym_delete_statement_token3,
  [11970] = 1,
    ACTIONS(1701), 1,
      aux_sym_create_function_token1,
  [11974] = 1,
    ACTIONS(1703), 1,
      aux_sym_select_element_token1,
  [11978] = 1,
    ACTIONS(1705), 1,
      sym_object_name,
  [11982] = 1,
    ACTIONS(1707), 1,
      aux_sym_create_function_token2,
  [11986] = 1,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
  [11990] = 1,
    ACTIONS(1711), 1,
      aux_sym_delete_statement_token3,
  [11994] = 1,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [11998] = 1,
    ACTIONS(1715), 1,
      anon_sym_LPAREN,
  [12002] = 1,
    ACTIONS(1717), 1,
      sym_object_name,
  [12006] = 1,
    ACTIONS(1719), 1,
      aux_sym_create_aggregate_token5,
  [12010] = 1,
    ACTIONS(1721), 1,
      aux_sym_from_spec_token1,
  [12014] = 1,
    ACTIONS(1723), 1,
      aux_sym_select_statement_token5,
  [12018] = 1,
    ACTIONS(1725), 1,
      aux_sym__decimal_literal_token1,
  [12022] = 1,
    ACTIONS(1727), 1,
      sym_object_name,
  [12026] = 1,
    ACTIONS(1729), 1,
      aux_sym_update_token2,
  [12030] = 1,
    ACTIONS(1731), 1,
      anon_sym_RPAREN,
  [12034] = 1,
    ACTIONS(1733), 1,
      aux_sym_create_aggregate_token4,
  [12038] = 1,
    ACTIONS(1735), 1,
      sym_object_name,
  [12042] = 1,
    ACTIONS(1737), 1,
      anon_sym_STAR,
  [12046] = 1,
    ACTIONS(1739), 1,
      aux_sym__decimal_literal_token1,
  [12050] = 1,
    ACTIONS(1741), 1,
      anon_sym_EQ,
  [12054] = 1,
    ACTIONS(1743), 1,
      sym_object_name,
  [12058] = 1,
    ACTIONS(1745), 1,
      sym_object_name,
  [12062] = 1,
    ACTIONS(1747), 1,
      anon_sym_RPAREN,
  [12066] = 1,
    ACTIONS(1749), 1,
      sym_object_name,
  [12070] = 1,
    ACTIONS(1751), 1,
      sym_object_name,
  [12074] = 1,
    ACTIONS(1753), 1,
      sym_object_name,
  [12078] = 1,
    ACTIONS(1755), 1,
      aux_sym_insert_statement_token2,
  [12082] = 1,
    ACTIONS(1757), 1,
      aux_sym_delete_statement_token3,
  [12086] = 1,
    ACTIONS(1759), 1,
      aux_sym_order_spec_token2,
  [12090] = 1,
    ACTIONS(1761), 1,
      sym_object_name,
  [12094] = 1,
    ACTIONS(1763), 1,
      aux_sym_grant_token2,
  [12098] = 1,
    ACTIONS(1765), 1,
      anon_sym_RPAREN,
  [12102] = 1,
    ACTIONS(1767), 1,
      sym_object_name,
  [12106] = 1,
    ACTIONS(1769), 1,
      aux_sym_from_spec_token1,
  [12110] = 1,
    ACTIONS(1771), 1,
      aux_sym_drop_materialized_view_token2,
  [12114] = 1,
    ACTIONS(1773), 1,
      sym_object_name,
  [12118] = 1,
    ACTIONS(1775), 1,
      sym_object_name,
  [12122] = 1,
    ACTIONS(1777), 1,
      aux_sym_create_function_token2,
  [12126] = 1,
    ACTIONS(1779), 1,
      aux_sym_resource_token2,
  [12130] = 1,
    ACTIONS(1781), 1,
      aux_sym_create_function_token1,
  [12134] = 1,
    ACTIONS(1783), 1,
      sym__code_block,
  [12138] = 1,
    ACTIONS(1785), 1,
      aux_sym_select_element_token1,
  [12142] = 1,
    ACTIONS(1787), 1,
      sym_object_name,
  [12146] = 1,
    ACTIONS(1789), 1,
      aux_sym_create_aggregate_token4,
  [12150] = 1,
    ACTIONS(1791), 1,
      sym_object_name,
  [12154] = 1,
    ACTIONS(1793), 1,
      sym_object_name,
  [12158] = 1,
    ACTIONS(780), 1,
      aux_sym_column_not_null_token1,
  [12162] = 1,
    ACTIONS(1795), 1,
      aux_sym_create_keyspace_token2,
  [12166] = 1,
    ACTIONS(1797), 1,
      aux_sym_insert_statement_token3,
  [12170] = 1,
    ACTIONS(1799), 1,
      anon_sym_RBRACK,
  [12174] = 1,
    ACTIONS(1801), 1,
      aux_sym_using_timestamp_spec_token2,
  [12178] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_aggregate_token3,
  [12182] = 1,
    ACTIONS(1805), 1,
      aux_sym_create_index_token3,
  [12186] = 1,
    ACTIONS(1807), 1,
      aux_sym_create_index_token3,
  [12190] = 1,
    ACTIONS(1809), 1,
      anon_sym_COLON,
  [12194] = 1,
    ACTIONS(1811), 1,
      aux_sym_using_ttl_timestamp_token1,
  [12198] = 1,
    ACTIONS(1813), 1,
      sym_object_name,
  [12202] = 1,
    ACTIONS(1815), 1,
      aux_sym_delete_statement_token3,
  [12206] = 1,
    ACTIONS(1817), 1,
      aux_sym_delete_statement_token3,
  [12210] = 1,
    ACTIONS(1819), 1,
      aux_sym_update_token2,
  [12214] = 1,
    ACTIONS(1821), 1,
      aux_sym_select_statement_token5,
  [12218] = 1,
    ACTIONS(1823), 1,
      anon_sym_LPAREN,
  [12222] = 1,
    ACTIONS(1825), 1,
      anon_sym_COMMA,
  [12226] = 1,
    ACTIONS(1827), 1,
      aux_sym_using_timestamp_spec_token1,
  [12230] = 1,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
  [12234] = 1,
    ACTIONS(1831), 1,
      aux_sym_drop_materialized_view_token2,
  [12238] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [12242] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_function_token2,
  [12246] = 1,
    ACTIONS(1837), 1,
      sym_object_name,
  [12250] = 1,
    ACTIONS(1839), 1,
      aux_sym_create_aggregate_token3,
  [12254] = 1,
    ACTIONS(1841), 1,
      sym__code_block,
  [12258] = 1,
    ACTIONS(1843), 1,
      aux_sym_select_element_token1,
  [12262] = 1,
    ACTIONS(1845), 1,
      anon_sym_LPAREN,
  [12266] = 1,
    ACTIONS(1847), 1,
      aux_sym_create_aggregate_token6,
  [12270] = 1,
    ACTIONS(1849), 1,
      sym_object_name,
  [12274] = 1,
    ACTIONS(1851), 1,
      aux_sym_insert_statement_token3,
  [12278] = 1,
    ACTIONS(1853), 1,
      sym__boolean_literal,
  [12282] = 1,
    ACTIONS(1855), 1,
      sym__boolean_literal,
  [12286] = 1,
    ACTIONS(1857), 1,
      sym__string_literal,
  [12290] = 1,
    ACTIONS(1859), 1,
      aux_sym_create_function_token1,
  [12294] = 1,
    ACTIONS(1861), 1,
      aux_sym_create_function_token1,
  [12298] = 1,
    ACTIONS(1863), 1,
      aux_sym_create_index_token3,
  [12302] = 1,
    ACTIONS(1865), 1,
      sym_object_name,
  [12306] = 1,
    ACTIONS(1867), 1,
      aux_sym_create_aggregate_token5,
  [12310] = 1,
    ACTIONS(1869), 1,
      aux_sym_constant_token2,
  [12314] = 1,
    ACTIONS(1871), 1,
      aux_sym_create_aggregate_token2,
  [12318] = 1,
    ACTIONS(1873), 1,
      anon_sym_LPAREN,
  [12322] = 1,
    ACTIONS(1875), 1,
      aux_sym_create_keyspace_token1,
  [12326] = 1,
    ACTIONS(1877), 1,
      aux_sym_select_element_token1,
  [12330] = 1,
    ACTIONS(1879), 1,
      sym_object_name,
  [12334] = 1,
    ACTIONS(1881), 1,
      aux_sym_create_function_token2,
  [12338] = 1,
    ACTIONS(1883), 1,
      anon_sym_RPAREN,
  [12342] = 1,
    ACTIONS(1885), 1,
      sym__code_block,
  [12346] = 1,
    ACTIONS(1887), 1,
      aux_sym_create_aggregate_token5,
  [12350] = 1,
    ACTIONS(1889), 1,
      anon_sym_RPAREN,
  [12354] = 1,
    ACTIONS(1891), 1,
      anon_sym_RPAREN,
  [12358] = 1,
    ACTIONS(1893), 1,
      aux_sym_constant_token2,
  [12362] = 1,
    ACTIONS(1895), 1,
      anon_sym_RPAREN,
  [12366] = 1,
    ACTIONS(1897), 1,
      anon_sym_LPAREN,
  [12370] = 1,
    ACTIONS(1899), 1,
      anon_sym_LPAREN,
  [12374] = 1,
    ACTIONS(1901), 1,
      anon_sym_LPAREN,
  [12378] = 1,
    ACTIONS(1903), 1,
      aux_sym_drop_materialized_view_token2,
  [12382] = 1,
    ACTIONS(1905), 1,
      aux_sym_create_function_token1,
  [12386] = 1,
    ACTIONS(1907), 1,
      aux_sym_create_aggregate_token4,
  [12390] = 1,
    ACTIONS(1909), 1,
      sym_object_name,
  [12394] = 1,
    ACTIONS(1911), 1,
      aux_sym_create_index_token3,
  [12398] = 1,
    ACTIONS(1913), 1,
      anon_sym_RPAREN,
  [12402] = 1,
    ACTIONS(1915), 1,
      sym__code_block,
  [12406] = 1,
    ACTIONS(1917), 1,
      aux_sym_select_element_token1,
  [12410] = 1,
    ACTIONS(1919), 1,
      sym_object_name,
  [12414] = 1,
    ACTIONS(1921), 1,
      anon_sym_LPAREN,
  [12418] = 1,
    ACTIONS(1923), 1,
      sym_object_name,
  [12422] = 1,
    ACTIONS(1925), 1,
      anon_sym_LPAREN,
  [12426] = 1,
    ACTIONS(1927), 1,
      aux_sym_insert_statement_token3,
  [12430] = 1,
    ACTIONS(1929), 1,
      anon_sym_RPAREN,
  [12434] = 1,
    ACTIONS(1931), 1,
      anon_sym_LPAREN,
  [12438] = 1,
    ACTIONS(1933), 1,
      anon_sym_EQ,
  [12442] = 1,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [12446] = 1,
    ACTIONS(1935), 1,
      aux_sym_create_function_token2,
  [12450] = 1,
    ACTIONS(1937), 1,
      anon_sym_EQ,
  [12454] = 1,
    ACTIONS(1939), 1,
      anon_sym_EQ,
  [12458] = 1,
    ACTIONS(1941), 1,
      aux_sym_create_aggregate_token6,
  [12462] = 1,
    ACTIONS(1943), 1,
      sym_object_name,
  [12466] = 1,
    ACTIONS(1945), 1,
      sym__code_block,
  [12470] = 1,
    ACTIONS(1947), 1,
      aux_sym_select_element_token1,
  [12474] = 1,
    ACTIONS(1949), 1,
      aux_sym_create_aggregate_token6,
  [12478] = 1,
    ACTIONS(1951), 1,
      anon_sym_EQ,
  [12482] = 1,
    ACTIONS(1953), 1,
      anon_sym_COLON,
  [12486] = 1,
    ACTIONS(1955), 1,
      anon_sym_EQ,
  [12490] = 1,
    ACTIONS(1957), 1,
      anon_sym_RPAREN,
  [12494] = 1,
    ACTIONS(1959), 1,
      aux_sym_delete_statement_token3,
  [12498] = 1,
    ACTIONS(1961), 1,
      aux_sym_begin_batch_token4,
  [12502] = 1,
    ACTIONS(1963), 1,
      sym_object_name,
  [12506] = 1,
    ACTIONS(1965), 1,
      aux_sym_create_function_token2,
  [12510] = 1,
    ACTIONS(1967), 1,
      aux_sym_create_aggregate_token5,
  [12514] = 1,
    ACTIONS(1969), 1,
      aux_sym_select_statement_token5,
  [12518] = 1,
    ACTIONS(1971), 1,
      sym_object_name,
  [12522] = 1,
    ACTIONS(1973), 1,
      sym__code_block,
  [12526] = 1,
    ACTIONS(1975), 1,
      sym_object_name,
  [12530] = 1,
    ACTIONS(1977), 1,
      aux_sym_select_statement_token1,
  [12534] = 1,
    ACTIONS(1979), 1,
      aux_sym_grant_token2,
  [12538] = 1,
    ACTIONS(1981), 1,
      aux_sym_drop_type_token1,
  [12542] = 1,
    ACTIONS(1983), 1,
      anon_sym_EQ,
  [12546] = 1,
    ACTIONS(1985), 1,
      aux_sym_grant_token2,
  [12550] = 1,
    ACTIONS(1987), 1,
      anon_sym_EQ,
  [12554] = 1,
    ACTIONS(1989), 1,
      anon_sym_EQ,
  [12558] = 1,
    ACTIONS(1991), 1,
      aux_sym_order_spec_token1,
  [12562] = 1,
    ACTIONS(1993), 1,
      aux_sym_compact_storage_token2,
  [12566] = 1,
    ACTIONS(1995), 1,
      aux_sym_select_element_token1,
  [12570] = 1,
    ACTIONS(1997), 1,
      sym_object_name,
  [12574] = 1,
    ACTIONS(1999), 1,
      sym_object_name,
  [12578] = 1,
    ACTIONS(2001), 1,
      anon_sym_LPAREN,
  [12582] = 1,
    ACTIONS(2003), 1,
      aux_sym_compact_storage_token2,
  [12586] = 1,
    ACTIONS(2005), 1,
      sym_object_name,
  [12590] = 1,
    ACTIONS(2007), 1,
      sym_object_name,
  [12594] = 1,
    ACTIONS(2009), 1,
      ts_builtin_sym_end,
  [12598] = 1,
    ACTIONS(2011), 1,
      sym_object_name,
  [12602] = 1,
    ACTIONS(2013), 1,
      aux_sym_begin_batch_token4,
  [12606] = 1,
    ACTIONS(2015), 1,
      aux_sym_update_token2,
  [12610] = 1,
    ACTIONS(2017), 1,
      aux_sym_create_index_token3,
  [12614] = 1,
    ACTIONS(2019), 1,
      sym_object_name,
  [12618] = 1,
    ACTIONS(2021), 1,
      anon_sym_LPAREN,
  [12622] = 1,
    ACTIONS(2023), 1,
      sym__code_block,
  [12626] = 1,
    ACTIONS(2025), 1,
      aux_sym_select_element_token1,
  [12630] = 1,
    ACTIONS(2027), 1,
      aux_sym_create_aggregate_token6,
  [12634] = 1,
    ACTIONS(2029), 1,
      sym_object_name,
  [12638] = 1,
    ACTIONS(2031), 1,
      sym__code_block,
  [12642] = 1,
    ACTIONS(2033), 1,
      aux_sym_insert_statement_token3,
  [12646] = 1,
    ACTIONS(2035), 1,
      aux_sym_insert_statement_token2,
  [12650] = 1,
    ACTIONS(2037), 1,
      anon_sym_LPAREN,
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
  [SMALL_STATE(27)] = 982,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1045,
  [SMALL_STATE(30)] = 1077,
  [SMALL_STATE(31)] = 1105,
  [SMALL_STATE(32)] = 1136,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1252,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1309,
  [SMALL_STATE(39)] = 1339,
  [SMALL_STATE(40)] = 1369,
  [SMALL_STATE(41)] = 1409,
  [SMALL_STATE(42)] = 1449,
  [SMALL_STATE(43)] = 1489,
  [SMALL_STATE(44)] = 1514,
  [SMALL_STATE(45)] = 1539,
  [SMALL_STATE(46)] = 1564,
  [SMALL_STATE(47)] = 1589,
  [SMALL_STATE(48)] = 1614,
  [SMALL_STATE(49)] = 1639,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1772,
  [SMALL_STATE(55)] = 1797,
  [SMALL_STATE(56)] = 1831,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1889,
  [SMALL_STATE(59)] = 1923,
  [SMALL_STATE(60)] = 1947,
  [SMALL_STATE(61)] = 1971,
  [SMALL_STATE(62)] = 1995,
  [SMALL_STATE(63)] = 2020,
  [SMALL_STATE(64)] = 2045,
  [SMALL_STATE(65)] = 2070,
  [SMALL_STATE(66)] = 2095,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2143,
  [SMALL_STATE(69)] = 2168,
  [SMALL_STATE(70)] = 2190,
  [SMALL_STATE(71)] = 2218,
  [SMALL_STATE(72)] = 2240,
  [SMALL_STATE(73)] = 2262,
  [SMALL_STATE(74)] = 2284,
  [SMALL_STATE(75)] = 2310,
  [SMALL_STATE(76)] = 2338,
  [SMALL_STATE(77)] = 2360,
  [SMALL_STATE(78)] = 2388,
  [SMALL_STATE(79)] = 2410,
  [SMALL_STATE(80)] = 2436,
  [SMALL_STATE(81)] = 2458,
  [SMALL_STATE(82)] = 2480,
  [SMALL_STATE(83)] = 2506,
  [SMALL_STATE(84)] = 2544,
  [SMALL_STATE(85)] = 2572,
  [SMALL_STATE(86)] = 2596,
  [SMALL_STATE(87)] = 2624,
  [SMALL_STATE(88)] = 2662,
  [SMALL_STATE(89)] = 2690,
  [SMALL_STATE(90)] = 2714,
  [SMALL_STATE(91)] = 2739,
  [SMALL_STATE(92)] = 2764,
  [SMALL_STATE(93)] = 2787,
  [SMALL_STATE(94)] = 2812,
  [SMALL_STATE(95)] = 2833,
  [SMALL_STATE(96)] = 2858,
  [SMALL_STATE(97)] = 2883,
  [SMALL_STATE(98)] = 2908,
  [SMALL_STATE(99)] = 2933,
  [SMALL_STATE(100)] = 2958,
  [SMALL_STATE(101)] = 2983,
  [SMALL_STATE(102)] = 3004,
  [SMALL_STATE(103)] = 3025,
  [SMALL_STATE(104)] = 3046,
  [SMALL_STATE(105)] = 3071,
  [SMALL_STATE(106)] = 3092,
  [SMALL_STATE(107)] = 3117,
  [SMALL_STATE(108)] = 3142,
  [SMALL_STATE(109)] = 3167,
  [SMALL_STATE(110)] = 3192,
  [SMALL_STATE(111)] = 3217,
  [SMALL_STATE(112)] = 3240,
  [SMALL_STATE(113)] = 3265,
  [SMALL_STATE(114)] = 3290,
  [SMALL_STATE(115)] = 3315,
  [SMALL_STATE(116)] = 3340,
  [SMALL_STATE(117)] = 3361,
  [SMALL_STATE(118)] = 3384,
  [SMALL_STATE(119)] = 3409,
  [SMALL_STATE(120)] = 3430,
  [SMALL_STATE(121)] = 3451,
  [SMALL_STATE(122)] = 3472,
  [SMALL_STATE(123)] = 3497,
  [SMALL_STATE(124)] = 3522,
  [SMALL_STATE(125)] = 3547,
  [SMALL_STATE(126)] = 3572,
  [SMALL_STATE(127)] = 3597,
  [SMALL_STATE(128)] = 3622,
  [SMALL_STATE(129)] = 3647,
  [SMALL_STATE(130)] = 3672,
  [SMALL_STATE(131)] = 3697,
  [SMALL_STATE(132)] = 3718,
  [SMALL_STATE(133)] = 3743,
  [SMALL_STATE(134)] = 3768,
  [SMALL_STATE(135)] = 3793,
  [SMALL_STATE(136)] = 3818,
  [SMALL_STATE(137)] = 3839,
  [SMALL_STATE(138)] = 3864,
  [SMALL_STATE(139)] = 3889,
  [SMALL_STATE(140)] = 3914,
  [SMALL_STATE(141)] = 3939,
  [SMALL_STATE(142)] = 3962,
  [SMALL_STATE(143)] = 3983,
  [SMALL_STATE(144)] = 4008,
  [SMALL_STATE(145)] = 4043,
  [SMALL_STATE(146)] = 4064,
  [SMALL_STATE(147)] = 4085,
  [SMALL_STATE(148)] = 4110,
  [SMALL_STATE(149)] = 4135,
  [SMALL_STATE(150)] = 4160,
  [SMALL_STATE(151)] = 4185,
  [SMALL_STATE(152)] = 4206,
  [SMALL_STATE(153)] = 4227,
  [SMALL_STATE(154)] = 4252,
  [SMALL_STATE(155)] = 4273,
  [SMALL_STATE(156)] = 4294,
  [SMALL_STATE(157)] = 4316,
  [SMALL_STATE(158)] = 4336,
  [SMALL_STATE(159)] = 4356,
  [SMALL_STATE(160)] = 4378,
  [SMALL_STATE(161)] = 4398,
  [SMALL_STATE(162)] = 4418,
  [SMALL_STATE(163)] = 4438,
  [SMALL_STATE(164)] = 4458,
  [SMALL_STATE(165)] = 4478,
  [SMALL_STATE(166)] = 4500,
  [SMALL_STATE(167)] = 4522,
  [SMALL_STATE(168)] = 4542,
  [SMALL_STATE(169)] = 4562,
  [SMALL_STATE(170)] = 4582,
  [SMALL_STATE(171)] = 4604,
  [SMALL_STATE(172)] = 4624,
  [SMALL_STATE(173)] = 4646,
  [SMALL_STATE(174)] = 4666,
  [SMALL_STATE(175)] = 4686,
  [SMALL_STATE(176)] = 4706,
  [SMALL_STATE(177)] = 4726,
  [SMALL_STATE(178)] = 4746,
  [SMALL_STATE(179)] = 4768,
  [SMALL_STATE(180)] = 4788,
  [SMALL_STATE(181)] = 4808,
  [SMALL_STATE(182)] = 4830,
  [SMALL_STATE(183)] = 4850,
  [SMALL_STATE(184)] = 4872,
  [SMALL_STATE(185)] = 4894,
  [SMALL_STATE(186)] = 4916,
  [SMALL_STATE(187)] = 4936,
  [SMALL_STATE(188)] = 4956,
  [SMALL_STATE(189)] = 4976,
  [SMALL_STATE(190)] = 4996,
  [SMALL_STATE(191)] = 5016,
  [SMALL_STATE(192)] = 5036,
  [SMALL_STATE(193)] = 5055,
  [SMALL_STATE(194)] = 5074,
  [SMALL_STATE(195)] = 5093,
  [SMALL_STATE(196)] = 5112,
  [SMALL_STATE(197)] = 5131,
  [SMALL_STATE(198)] = 5150,
  [SMALL_STATE(199)] = 5169,
  [SMALL_STATE(200)] = 5188,
  [SMALL_STATE(201)] = 5207,
  [SMALL_STATE(202)] = 5226,
  [SMALL_STATE(203)] = 5245,
  [SMALL_STATE(204)] = 5264,
  [SMALL_STATE(205)] = 5283,
  [SMALL_STATE(206)] = 5302,
  [SMALL_STATE(207)] = 5321,
  [SMALL_STATE(208)] = 5340,
  [SMALL_STATE(209)] = 5359,
  [SMALL_STATE(210)] = 5378,
  [SMALL_STATE(211)] = 5397,
  [SMALL_STATE(212)] = 5416,
  [SMALL_STATE(213)] = 5435,
  [SMALL_STATE(214)] = 5454,
  [SMALL_STATE(215)] = 5473,
  [SMALL_STATE(216)] = 5492,
  [SMALL_STATE(217)] = 5511,
  [SMALL_STATE(218)] = 5530,
  [SMALL_STATE(219)] = 5549,
  [SMALL_STATE(220)] = 5568,
  [SMALL_STATE(221)] = 5587,
  [SMALL_STATE(222)] = 5606,
  [SMALL_STATE(223)] = 5625,
  [SMALL_STATE(224)] = 5644,
  [SMALL_STATE(225)] = 5663,
  [SMALL_STATE(226)] = 5698,
  [SMALL_STATE(227)] = 5717,
  [SMALL_STATE(228)] = 5736,
  [SMALL_STATE(229)] = 5755,
  [SMALL_STATE(230)] = 5774,
  [SMALL_STATE(231)] = 5793,
  [SMALL_STATE(232)] = 5812,
  [SMALL_STATE(233)] = 5831,
  [SMALL_STATE(234)] = 5850,
  [SMALL_STATE(235)] = 5869,
  [SMALL_STATE(236)] = 5888,
  [SMALL_STATE(237)] = 5907,
  [SMALL_STATE(238)] = 5926,
  [SMALL_STATE(239)] = 5945,
  [SMALL_STATE(240)] = 5964,
  [SMALL_STATE(241)] = 5983,
  [SMALL_STATE(242)] = 6004,
  [SMALL_STATE(243)] = 6023,
  [SMALL_STATE(244)] = 6042,
  [SMALL_STATE(245)] = 6061,
  [SMALL_STATE(246)] = 6080,
  [SMALL_STATE(247)] = 6099,
  [SMALL_STATE(248)] = 6118,
  [SMALL_STATE(249)] = 6137,
  [SMALL_STATE(250)] = 6156,
  [SMALL_STATE(251)] = 6175,
  [SMALL_STATE(252)] = 6194,
  [SMALL_STATE(253)] = 6213,
  [SMALL_STATE(254)] = 6232,
  [SMALL_STATE(255)] = 6251,
  [SMALL_STATE(256)] = 6270,
  [SMALL_STATE(257)] = 6289,
  [SMALL_STATE(258)] = 6308,
  [SMALL_STATE(259)] = 6327,
  [SMALL_STATE(260)] = 6346,
  [SMALL_STATE(261)] = 6365,
  [SMALL_STATE(262)] = 6384,
  [SMALL_STATE(263)] = 6403,
  [SMALL_STATE(264)] = 6422,
  [SMALL_STATE(265)] = 6441,
  [SMALL_STATE(266)] = 6460,
  [SMALL_STATE(267)] = 6479,
  [SMALL_STATE(268)] = 6498,
  [SMALL_STATE(269)] = 6517,
  [SMALL_STATE(270)] = 6536,
  [SMALL_STATE(271)] = 6555,
  [SMALL_STATE(272)] = 6574,
  [SMALL_STATE(273)] = 6593,
  [SMALL_STATE(274)] = 6612,
  [SMALL_STATE(275)] = 6631,
  [SMALL_STATE(276)] = 6650,
  [SMALL_STATE(277)] = 6669,
  [SMALL_STATE(278)] = 6688,
  [SMALL_STATE(279)] = 6707,
  [SMALL_STATE(280)] = 6726,
  [SMALL_STATE(281)] = 6745,
  [SMALL_STATE(282)] = 6764,
  [SMALL_STATE(283)] = 6783,
  [SMALL_STATE(284)] = 6802,
  [SMALL_STATE(285)] = 6821,
  [SMALL_STATE(286)] = 6840,
  [SMALL_STATE(287)] = 6859,
  [SMALL_STATE(288)] = 6878,
  [SMALL_STATE(289)] = 6897,
  [SMALL_STATE(290)] = 6916,
  [SMALL_STATE(291)] = 6935,
  [SMALL_STATE(292)] = 6954,
  [SMALL_STATE(293)] = 6973,
  [SMALL_STATE(294)] = 6992,
  [SMALL_STATE(295)] = 7011,
  [SMALL_STATE(296)] = 7030,
  [SMALL_STATE(297)] = 7049,
  [SMALL_STATE(298)] = 7068,
  [SMALL_STATE(299)] = 7087,
  [SMALL_STATE(300)] = 7106,
  [SMALL_STATE(301)] = 7125,
  [SMALL_STATE(302)] = 7144,
  [SMALL_STATE(303)] = 7163,
  [SMALL_STATE(304)] = 7182,
  [SMALL_STATE(305)] = 7201,
  [SMALL_STATE(306)] = 7229,
  [SMALL_STATE(307)] = 7257,
  [SMALL_STATE(308)] = 7285,
  [SMALL_STATE(309)] = 7313,
  [SMALL_STATE(310)] = 7331,
  [SMALL_STATE(311)] = 7359,
  [SMALL_STATE(312)] = 7390,
  [SMALL_STATE(313)] = 7423,
  [SMALL_STATE(314)] = 7451,
  [SMALL_STATE(315)] = 7476,
  [SMALL_STATE(316)] = 7499,
  [SMALL_STATE(317)] = 7524,
  [SMALL_STATE(318)] = 7546,
  [SMALL_STATE(319)] = 7580,
  [SMALL_STATE(320)] = 7600,
  [SMALL_STATE(321)] = 7622,
  [SMALL_STATE(322)] = 7639,
  [SMALL_STATE(323)] = 7658,
  [SMALL_STATE(324)] = 7677,
  [SMALL_STATE(325)] = 7700,
  [SMALL_STATE(326)] = 7719,
  [SMALL_STATE(327)] = 7738,
  [SMALL_STATE(328)] = 7757,
  [SMALL_STATE(329)] = 7788,
  [SMALL_STATE(330)] = 7807,
  [SMALL_STATE(331)] = 7826,
  [SMALL_STATE(332)] = 7845,
  [SMALL_STATE(333)] = 7862,
  [SMALL_STATE(334)] = 7881,
  [SMALL_STATE(335)] = 7900,
  [SMALL_STATE(336)] = 7923,
  [SMALL_STATE(337)] = 7943,
  [SMALL_STATE(338)] = 7966,
  [SMALL_STATE(339)] = 7987,
  [SMALL_STATE(340)] = 8008,
  [SMALL_STATE(341)] = 8031,
  [SMALL_STATE(342)] = 8054,
  [SMALL_STATE(343)] = 8077,
  [SMALL_STATE(344)] = 8100,
  [SMALL_STATE(345)] = 8123,
  [SMALL_STATE(346)] = 8146,
  [SMALL_STATE(347)] = 8169,
  [SMALL_STATE(348)] = 8192,
  [SMALL_STATE(349)] = 8215,
  [SMALL_STATE(350)] = 8238,
  [SMALL_STATE(351)] = 8261,
  [SMALL_STATE(352)] = 8282,
  [SMALL_STATE(353)] = 8303,
  [SMALL_STATE(354)] = 8324,
  [SMALL_STATE(355)] = 8347,
  [SMALL_STATE(356)] = 8370,
  [SMALL_STATE(357)] = 8393,
  [SMALL_STATE(358)] = 8416,
  [SMALL_STATE(359)] = 8438,
  [SMALL_STATE(360)] = 8452,
  [SMALL_STATE(361)] = 8474,
  [SMALL_STATE(362)] = 8494,
  [SMALL_STATE(363)] = 8516,
  [SMALL_STATE(364)] = 8538,
  [SMALL_STATE(365)] = 8556,
  [SMALL_STATE(366)] = 8570,
  [SMALL_STATE(367)] = 8590,
  [SMALL_STATE(368)] = 8608,
  [SMALL_STATE(369)] = 8626,
  [SMALL_STATE(370)] = 8643,
  [SMALL_STATE(371)] = 8662,
  [SMALL_STATE(372)] = 8673,
  [SMALL_STATE(373)] = 8692,
  [SMALL_STATE(374)] = 8706,
  [SMALL_STATE(375)] = 8718,
  [SMALL_STATE(376)] = 8734,
  [SMALL_STATE(377)] = 8742,
  [SMALL_STATE(378)] = 8750,
  [SMALL_STATE(379)] = 8762,
  [SMALL_STATE(380)] = 8778,
  [SMALL_STATE(381)] = 8794,
  [SMALL_STATE(382)] = 8810,
  [SMALL_STATE(383)] = 8826,
  [SMALL_STATE(384)] = 8838,
  [SMALL_STATE(385)] = 8854,
  [SMALL_STATE(386)] = 8862,
  [SMALL_STATE(387)] = 8870,
  [SMALL_STATE(388)] = 8878,
  [SMALL_STATE(389)] = 8886,
  [SMALL_STATE(390)] = 8902,
  [SMALL_STATE(391)] = 8914,
  [SMALL_STATE(392)] = 8922,
  [SMALL_STATE(393)] = 8936,
  [SMALL_STATE(394)] = 8949,
  [SMALL_STATE(395)] = 8962,
  [SMALL_STATE(396)] = 8975,
  [SMALL_STATE(397)] = 8988,
  [SMALL_STATE(398)] = 8995,
  [SMALL_STATE(399)] = 9008,
  [SMALL_STATE(400)] = 9021,
  [SMALL_STATE(401)] = 9034,
  [SMALL_STATE(402)] = 9045,
  [SMALL_STATE(403)] = 9058,
  [SMALL_STATE(404)] = 9071,
  [SMALL_STATE(405)] = 9084,
  [SMALL_STATE(406)] = 9097,
  [SMALL_STATE(407)] = 9110,
  [SMALL_STATE(408)] = 9123,
  [SMALL_STATE(409)] = 9136,
  [SMALL_STATE(410)] = 9149,
  [SMALL_STATE(411)] = 9162,
  [SMALL_STATE(412)] = 9175,
  [SMALL_STATE(413)] = 9188,
  [SMALL_STATE(414)] = 9201,
  [SMALL_STATE(415)] = 9208,
  [SMALL_STATE(416)] = 9221,
  [SMALL_STATE(417)] = 9234,
  [SMALL_STATE(418)] = 9247,
  [SMALL_STATE(419)] = 9256,
  [SMALL_STATE(420)] = 9269,
  [SMALL_STATE(421)] = 9280,
  [SMALL_STATE(422)] = 9293,
  [SMALL_STATE(423)] = 9306,
  [SMALL_STATE(424)] = 9319,
  [SMALL_STATE(425)] = 9330,
  [SMALL_STATE(426)] = 9343,
  [SMALL_STATE(427)] = 9356,
  [SMALL_STATE(428)] = 9367,
  [SMALL_STATE(429)] = 9377,
  [SMALL_STATE(430)] = 9387,
  [SMALL_STATE(431)] = 9397,
  [SMALL_STATE(432)] = 9407,
  [SMALL_STATE(433)] = 9417,
  [SMALL_STATE(434)] = 9425,
  [SMALL_STATE(435)] = 9435,
  [SMALL_STATE(436)] = 9445,
  [SMALL_STATE(437)] = 9455,
  [SMALL_STATE(438)] = 9465,
  [SMALL_STATE(439)] = 9475,
  [SMALL_STATE(440)] = 9485,
  [SMALL_STATE(441)] = 9495,
  [SMALL_STATE(442)] = 9505,
  [SMALL_STATE(443)] = 9515,
  [SMALL_STATE(444)] = 9525,
  [SMALL_STATE(445)] = 9535,
  [SMALL_STATE(446)] = 9545,
  [SMALL_STATE(447)] = 9555,
  [SMALL_STATE(448)] = 9565,
  [SMALL_STATE(449)] = 9575,
  [SMALL_STATE(450)] = 9585,
  [SMALL_STATE(451)] = 9595,
  [SMALL_STATE(452)] = 9605,
  [SMALL_STATE(453)] = 9615,
  [SMALL_STATE(454)] = 9625,
  [SMALL_STATE(455)] = 9635,
  [SMALL_STATE(456)] = 9645,
  [SMALL_STATE(457)] = 9655,
  [SMALL_STATE(458)] = 9665,
  [SMALL_STATE(459)] = 9675,
  [SMALL_STATE(460)] = 9685,
  [SMALL_STATE(461)] = 9695,
  [SMALL_STATE(462)] = 9705,
  [SMALL_STATE(463)] = 9715,
  [SMALL_STATE(464)] = 9725,
  [SMALL_STATE(465)] = 9735,
  [SMALL_STATE(466)] = 9745,
  [SMALL_STATE(467)] = 9755,
  [SMALL_STATE(468)] = 9765,
  [SMALL_STATE(469)] = 9775,
  [SMALL_STATE(470)] = 9785,
  [SMALL_STATE(471)] = 9795,
  [SMALL_STATE(472)] = 9805,
  [SMALL_STATE(473)] = 9815,
  [SMALL_STATE(474)] = 9825,
  [SMALL_STATE(475)] = 9835,
  [SMALL_STATE(476)] = 9845,
  [SMALL_STATE(477)] = 9855,
  [SMALL_STATE(478)] = 9865,
  [SMALL_STATE(479)] = 9875,
  [SMALL_STATE(480)] = 9885,
  [SMALL_STATE(481)] = 9895,
  [SMALL_STATE(482)] = 9905,
  [SMALL_STATE(483)] = 9915,
  [SMALL_STATE(484)] = 9925,
  [SMALL_STATE(485)] = 9931,
  [SMALL_STATE(486)] = 9941,
  [SMALL_STATE(487)] = 9951,
  [SMALL_STATE(488)] = 9961,
  [SMALL_STATE(489)] = 9971,
  [SMALL_STATE(490)] = 9981,
  [SMALL_STATE(491)] = 9991,
  [SMALL_STATE(492)] = 10001,
  [SMALL_STATE(493)] = 10011,
  [SMALL_STATE(494)] = 10021,
  [SMALL_STATE(495)] = 10031,
  [SMALL_STATE(496)] = 10041,
  [SMALL_STATE(497)] = 10051,
  [SMALL_STATE(498)] = 10061,
  [SMALL_STATE(499)] = 10071,
  [SMALL_STATE(500)] = 10081,
  [SMALL_STATE(501)] = 10091,
  [SMALL_STATE(502)] = 10101,
  [SMALL_STATE(503)] = 10111,
  [SMALL_STATE(504)] = 10121,
  [SMALL_STATE(505)] = 10131,
  [SMALL_STATE(506)] = 10139,
  [SMALL_STATE(507)] = 10149,
  [SMALL_STATE(508)] = 10159,
  [SMALL_STATE(509)] = 10169,
  [SMALL_STATE(510)] = 10179,
  [SMALL_STATE(511)] = 10189,
  [SMALL_STATE(512)] = 10199,
  [SMALL_STATE(513)] = 10209,
  [SMALL_STATE(514)] = 10219,
  [SMALL_STATE(515)] = 10229,
  [SMALL_STATE(516)] = 10239,
  [SMALL_STATE(517)] = 10249,
  [SMALL_STATE(518)] = 10259,
  [SMALL_STATE(519)] = 10269,
  [SMALL_STATE(520)] = 10279,
  [SMALL_STATE(521)] = 10289,
  [SMALL_STATE(522)] = 10299,
  [SMALL_STATE(523)] = 10309,
  [SMALL_STATE(524)] = 10317,
  [SMALL_STATE(525)] = 10327,
  [SMALL_STATE(526)] = 10337,
  [SMALL_STATE(527)] = 10347,
  [SMALL_STATE(528)] = 10357,
  [SMALL_STATE(529)] = 10367,
  [SMALL_STATE(530)] = 10377,
  [SMALL_STATE(531)] = 10387,
  [SMALL_STATE(532)] = 10395,
  [SMALL_STATE(533)] = 10405,
  [SMALL_STATE(534)] = 10415,
  [SMALL_STATE(535)] = 10425,
  [SMALL_STATE(536)] = 10435,
  [SMALL_STATE(537)] = 10445,
  [SMALL_STATE(538)] = 10453,
  [SMALL_STATE(539)] = 10459,
  [SMALL_STATE(540)] = 10469,
  [SMALL_STATE(541)] = 10479,
  [SMALL_STATE(542)] = 10489,
  [SMALL_STATE(543)] = 10499,
  [SMALL_STATE(544)] = 10507,
  [SMALL_STATE(545)] = 10513,
  [SMALL_STATE(546)] = 10523,
  [SMALL_STATE(547)] = 10533,
  [SMALL_STATE(548)] = 10543,
  [SMALL_STATE(549)] = 10553,
  [SMALL_STATE(550)] = 10563,
  [SMALL_STATE(551)] = 10571,
  [SMALL_STATE(552)] = 10581,
  [SMALL_STATE(553)] = 10591,
  [SMALL_STATE(554)] = 10601,
  [SMALL_STATE(555)] = 10611,
  [SMALL_STATE(556)] = 10616,
  [SMALL_STATE(557)] = 10623,
  [SMALL_STATE(558)] = 10630,
  [SMALL_STATE(559)] = 10637,
  [SMALL_STATE(560)] = 10642,
  [SMALL_STATE(561)] = 10649,
  [SMALL_STATE(562)] = 10654,
  [SMALL_STATE(563)] = 10659,
  [SMALL_STATE(564)] = 10664,
  [SMALL_STATE(565)] = 10669,
  [SMALL_STATE(566)] = 10674,
  [SMALL_STATE(567)] = 10681,
  [SMALL_STATE(568)] = 10688,
  [SMALL_STATE(569)] = 10695,
  [SMALL_STATE(570)] = 10702,
  [SMALL_STATE(571)] = 10709,
  [SMALL_STATE(572)] = 10716,
  [SMALL_STATE(573)] = 10723,
  [SMALL_STATE(574)] = 10730,
  [SMALL_STATE(575)] = 10735,
  [SMALL_STATE(576)] = 10742,
  [SMALL_STATE(577)] = 10749,
  [SMALL_STATE(578)] = 10756,
  [SMALL_STATE(579)] = 10763,
  [SMALL_STATE(580)] = 10770,
  [SMALL_STATE(581)] = 10775,
  [SMALL_STATE(582)] = 10782,
  [SMALL_STATE(583)] = 10789,
  [SMALL_STATE(584)] = 10796,
  [SMALL_STATE(585)] = 10803,
  [SMALL_STATE(586)] = 10810,
  [SMALL_STATE(587)] = 10817,
  [SMALL_STATE(588)] = 10824,
  [SMALL_STATE(589)] = 10831,
  [SMALL_STATE(590)] = 10838,
  [SMALL_STATE(591)] = 10845,
  [SMALL_STATE(592)] = 10852,
  [SMALL_STATE(593)] = 10859,
  [SMALL_STATE(594)] = 10866,
  [SMALL_STATE(595)] = 10873,
  [SMALL_STATE(596)] = 10880,
  [SMALL_STATE(597)] = 10887,
  [SMALL_STATE(598)] = 10894,
  [SMALL_STATE(599)] = 10901,
  [SMALL_STATE(600)] = 10908,
  [SMALL_STATE(601)] = 10915,
  [SMALL_STATE(602)] = 10922,
  [SMALL_STATE(603)] = 10929,
  [SMALL_STATE(604)] = 10936,
  [SMALL_STATE(605)] = 10943,
  [SMALL_STATE(606)] = 10950,
  [SMALL_STATE(607)] = 10957,
  [SMALL_STATE(608)] = 10964,
  [SMALL_STATE(609)] = 10971,
  [SMALL_STATE(610)] = 10978,
  [SMALL_STATE(611)] = 10985,
  [SMALL_STATE(612)] = 10992,
  [SMALL_STATE(613)] = 10999,
  [SMALL_STATE(614)] = 11006,
  [SMALL_STATE(615)] = 11011,
  [SMALL_STATE(616)] = 11016,
  [SMALL_STATE(617)] = 11023,
  [SMALL_STATE(618)] = 11028,
  [SMALL_STATE(619)] = 11035,
  [SMALL_STATE(620)] = 11042,
  [SMALL_STATE(621)] = 11047,
  [SMALL_STATE(622)] = 11054,
  [SMALL_STATE(623)] = 11059,
  [SMALL_STATE(624)] = 11066,
  [SMALL_STATE(625)] = 11073,
  [SMALL_STATE(626)] = 11080,
  [SMALL_STATE(627)] = 11087,
  [SMALL_STATE(628)] = 11094,
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
  [SMALL_STATE(639)] = 11167,
  [SMALL_STATE(640)] = 11174,
  [SMALL_STATE(641)] = 11181,
  [SMALL_STATE(642)] = 11186,
  [SMALL_STATE(643)] = 11193,
  [SMALL_STATE(644)] = 11198,
  [SMALL_STATE(645)] = 11205,
  [SMALL_STATE(646)] = 11212,
  [SMALL_STATE(647)] = 11219,
  [SMALL_STATE(648)] = 11226,
  [SMALL_STATE(649)] = 11233,
  [SMALL_STATE(650)] = 11240,
  [SMALL_STATE(651)] = 11247,
  [SMALL_STATE(652)] = 11254,
  [SMALL_STATE(653)] = 11261,
  [SMALL_STATE(654)] = 11268,
  [SMALL_STATE(655)] = 11273,
  [SMALL_STATE(656)] = 11280,
  [SMALL_STATE(657)] = 11285,
  [SMALL_STATE(658)] = 11290,
  [SMALL_STATE(659)] = 11297,
  [SMALL_STATE(660)] = 11302,
  [SMALL_STATE(661)] = 11307,
  [SMALL_STATE(662)] = 11314,
  [SMALL_STATE(663)] = 11321,
  [SMALL_STATE(664)] = 11326,
  [SMALL_STATE(665)] = 11333,
  [SMALL_STATE(666)] = 11340,
  [SMALL_STATE(667)] = 11347,
  [SMALL_STATE(668)] = 11354,
  [SMALL_STATE(669)] = 11361,
  [SMALL_STATE(670)] = 11368,
  [SMALL_STATE(671)] = 11373,
  [SMALL_STATE(672)] = 11380,
  [SMALL_STATE(673)] = 11387,
  [SMALL_STATE(674)] = 11394,
  [SMALL_STATE(675)] = 11399,
  [SMALL_STATE(676)] = 11404,
  [SMALL_STATE(677)] = 11411,
  [SMALL_STATE(678)] = 11418,
  [SMALL_STATE(679)] = 11423,
  [SMALL_STATE(680)] = 11430,
  [SMALL_STATE(681)] = 11437,
  [SMALL_STATE(682)] = 11442,
  [SMALL_STATE(683)] = 11447,
  [SMALL_STATE(684)] = 11452,
  [SMALL_STATE(685)] = 11459,
  [SMALL_STATE(686)] = 11466,
  [SMALL_STATE(687)] = 11470,
  [SMALL_STATE(688)] = 11474,
  [SMALL_STATE(689)] = 11478,
  [SMALL_STATE(690)] = 11482,
  [SMALL_STATE(691)] = 11486,
  [SMALL_STATE(692)] = 11490,
  [SMALL_STATE(693)] = 11494,
  [SMALL_STATE(694)] = 11498,
  [SMALL_STATE(695)] = 11502,
  [SMALL_STATE(696)] = 11506,
  [SMALL_STATE(697)] = 11510,
  [SMALL_STATE(698)] = 11514,
  [SMALL_STATE(699)] = 11518,
  [SMALL_STATE(700)] = 11522,
  [SMALL_STATE(701)] = 11526,
  [SMALL_STATE(702)] = 11530,
  [SMALL_STATE(703)] = 11534,
  [SMALL_STATE(704)] = 11538,
  [SMALL_STATE(705)] = 11542,
  [SMALL_STATE(706)] = 11546,
  [SMALL_STATE(707)] = 11550,
  [SMALL_STATE(708)] = 11554,
  [SMALL_STATE(709)] = 11558,
  [SMALL_STATE(710)] = 11562,
  [SMALL_STATE(711)] = 11566,
  [SMALL_STATE(712)] = 11570,
  [SMALL_STATE(713)] = 11574,
  [SMALL_STATE(714)] = 11578,
  [SMALL_STATE(715)] = 11582,
  [SMALL_STATE(716)] = 11586,
  [SMALL_STATE(717)] = 11590,
  [SMALL_STATE(718)] = 11594,
  [SMALL_STATE(719)] = 11598,
  [SMALL_STATE(720)] = 11602,
  [SMALL_STATE(721)] = 11606,
  [SMALL_STATE(722)] = 11610,
  [SMALL_STATE(723)] = 11614,
  [SMALL_STATE(724)] = 11618,
  [SMALL_STATE(725)] = 11622,
  [SMALL_STATE(726)] = 11626,
  [SMALL_STATE(727)] = 11630,
  [SMALL_STATE(728)] = 11634,
  [SMALL_STATE(729)] = 11638,
  [SMALL_STATE(730)] = 11642,
  [SMALL_STATE(731)] = 11646,
  [SMALL_STATE(732)] = 11650,
  [SMALL_STATE(733)] = 11654,
  [SMALL_STATE(734)] = 11658,
  [SMALL_STATE(735)] = 11662,
  [SMALL_STATE(736)] = 11666,
  [SMALL_STATE(737)] = 11670,
  [SMALL_STATE(738)] = 11674,
  [SMALL_STATE(739)] = 11678,
  [SMALL_STATE(740)] = 11682,
  [SMALL_STATE(741)] = 11686,
  [SMALL_STATE(742)] = 11690,
  [SMALL_STATE(743)] = 11694,
  [SMALL_STATE(744)] = 11698,
  [SMALL_STATE(745)] = 11702,
  [SMALL_STATE(746)] = 11706,
  [SMALL_STATE(747)] = 11710,
  [SMALL_STATE(748)] = 11714,
  [SMALL_STATE(749)] = 11718,
  [SMALL_STATE(750)] = 11722,
  [SMALL_STATE(751)] = 11726,
  [SMALL_STATE(752)] = 11730,
  [SMALL_STATE(753)] = 11734,
  [SMALL_STATE(754)] = 11738,
  [SMALL_STATE(755)] = 11742,
  [SMALL_STATE(756)] = 11746,
  [SMALL_STATE(757)] = 11750,
  [SMALL_STATE(758)] = 11754,
  [SMALL_STATE(759)] = 11758,
  [SMALL_STATE(760)] = 11762,
  [SMALL_STATE(761)] = 11766,
  [SMALL_STATE(762)] = 11770,
  [SMALL_STATE(763)] = 11774,
  [SMALL_STATE(764)] = 11778,
  [SMALL_STATE(765)] = 11782,
  [SMALL_STATE(766)] = 11786,
  [SMALL_STATE(767)] = 11790,
  [SMALL_STATE(768)] = 11794,
  [SMALL_STATE(769)] = 11798,
  [SMALL_STATE(770)] = 11802,
  [SMALL_STATE(771)] = 11806,
  [SMALL_STATE(772)] = 11810,
  [SMALL_STATE(773)] = 11814,
  [SMALL_STATE(774)] = 11818,
  [SMALL_STATE(775)] = 11822,
  [SMALL_STATE(776)] = 11826,
  [SMALL_STATE(777)] = 11830,
  [SMALL_STATE(778)] = 11834,
  [SMALL_STATE(779)] = 11838,
  [SMALL_STATE(780)] = 11842,
  [SMALL_STATE(781)] = 11846,
  [SMALL_STATE(782)] = 11850,
  [SMALL_STATE(783)] = 11854,
  [SMALL_STATE(784)] = 11858,
  [SMALL_STATE(785)] = 11862,
  [SMALL_STATE(786)] = 11866,
  [SMALL_STATE(787)] = 11870,
  [SMALL_STATE(788)] = 11874,
  [SMALL_STATE(789)] = 11878,
  [SMALL_STATE(790)] = 11882,
  [SMALL_STATE(791)] = 11886,
  [SMALL_STATE(792)] = 11890,
  [SMALL_STATE(793)] = 11894,
  [SMALL_STATE(794)] = 11898,
  [SMALL_STATE(795)] = 11902,
  [SMALL_STATE(796)] = 11906,
  [SMALL_STATE(797)] = 11910,
  [SMALL_STATE(798)] = 11914,
  [SMALL_STATE(799)] = 11918,
  [SMALL_STATE(800)] = 11922,
  [SMALL_STATE(801)] = 11926,
  [SMALL_STATE(802)] = 11930,
  [SMALL_STATE(803)] = 11934,
  [SMALL_STATE(804)] = 11938,
  [SMALL_STATE(805)] = 11942,
  [SMALL_STATE(806)] = 11946,
  [SMALL_STATE(807)] = 11950,
  [SMALL_STATE(808)] = 11954,
  [SMALL_STATE(809)] = 11958,
  [SMALL_STATE(810)] = 11962,
  [SMALL_STATE(811)] = 11966,
  [SMALL_STATE(812)] = 11970,
  [SMALL_STATE(813)] = 11974,
  [SMALL_STATE(814)] = 11978,
  [SMALL_STATE(815)] = 11982,
  [SMALL_STATE(816)] = 11986,
  [SMALL_STATE(817)] = 11990,
  [SMALL_STATE(818)] = 11994,
  [SMALL_STATE(819)] = 11998,
  [SMALL_STATE(820)] = 12002,
  [SMALL_STATE(821)] = 12006,
  [SMALL_STATE(822)] = 12010,
  [SMALL_STATE(823)] = 12014,
  [SMALL_STATE(824)] = 12018,
  [SMALL_STATE(825)] = 12022,
  [SMALL_STATE(826)] = 12026,
  [SMALL_STATE(827)] = 12030,
  [SMALL_STATE(828)] = 12034,
  [SMALL_STATE(829)] = 12038,
  [SMALL_STATE(830)] = 12042,
  [SMALL_STATE(831)] = 12046,
  [SMALL_STATE(832)] = 12050,
  [SMALL_STATE(833)] = 12054,
  [SMALL_STATE(834)] = 12058,
  [SMALL_STATE(835)] = 12062,
  [SMALL_STATE(836)] = 12066,
  [SMALL_STATE(837)] = 12070,
  [SMALL_STATE(838)] = 12074,
  [SMALL_STATE(839)] = 12078,
  [SMALL_STATE(840)] = 12082,
  [SMALL_STATE(841)] = 12086,
  [SMALL_STATE(842)] = 12090,
  [SMALL_STATE(843)] = 12094,
  [SMALL_STATE(844)] = 12098,
  [SMALL_STATE(845)] = 12102,
  [SMALL_STATE(846)] = 12106,
  [SMALL_STATE(847)] = 12110,
  [SMALL_STATE(848)] = 12114,
  [SMALL_STATE(849)] = 12118,
  [SMALL_STATE(850)] = 12122,
  [SMALL_STATE(851)] = 12126,
  [SMALL_STATE(852)] = 12130,
  [SMALL_STATE(853)] = 12134,
  [SMALL_STATE(854)] = 12138,
  [SMALL_STATE(855)] = 12142,
  [SMALL_STATE(856)] = 12146,
  [SMALL_STATE(857)] = 12150,
  [SMALL_STATE(858)] = 12154,
  [SMALL_STATE(859)] = 12158,
  [SMALL_STATE(860)] = 12162,
  [SMALL_STATE(861)] = 12166,
  [SMALL_STATE(862)] = 12170,
  [SMALL_STATE(863)] = 12174,
  [SMALL_STATE(864)] = 12178,
  [SMALL_STATE(865)] = 12182,
  [SMALL_STATE(866)] = 12186,
  [SMALL_STATE(867)] = 12190,
  [SMALL_STATE(868)] = 12194,
  [SMALL_STATE(869)] = 12198,
  [SMALL_STATE(870)] = 12202,
  [SMALL_STATE(871)] = 12206,
  [SMALL_STATE(872)] = 12210,
  [SMALL_STATE(873)] = 12214,
  [SMALL_STATE(874)] = 12218,
  [SMALL_STATE(875)] = 12222,
  [SMALL_STATE(876)] = 12226,
  [SMALL_STATE(877)] = 12230,
  [SMALL_STATE(878)] = 12234,
  [SMALL_STATE(879)] = 12238,
  [SMALL_STATE(880)] = 12242,
  [SMALL_STATE(881)] = 12246,
  [SMALL_STATE(882)] = 12250,
  [SMALL_STATE(883)] = 12254,
  [SMALL_STATE(884)] = 12258,
  [SMALL_STATE(885)] = 12262,
  [SMALL_STATE(886)] = 12266,
  [SMALL_STATE(887)] = 12270,
  [SMALL_STATE(888)] = 12274,
  [SMALL_STATE(889)] = 12278,
  [SMALL_STATE(890)] = 12282,
  [SMALL_STATE(891)] = 12286,
  [SMALL_STATE(892)] = 12290,
  [SMALL_STATE(893)] = 12294,
  [SMALL_STATE(894)] = 12298,
  [SMALL_STATE(895)] = 12302,
  [SMALL_STATE(896)] = 12306,
  [SMALL_STATE(897)] = 12310,
  [SMALL_STATE(898)] = 12314,
  [SMALL_STATE(899)] = 12318,
  [SMALL_STATE(900)] = 12322,
  [SMALL_STATE(901)] = 12326,
  [SMALL_STATE(902)] = 12330,
  [SMALL_STATE(903)] = 12334,
  [SMALL_STATE(904)] = 12338,
  [SMALL_STATE(905)] = 12342,
  [SMALL_STATE(906)] = 12346,
  [SMALL_STATE(907)] = 12350,
  [SMALL_STATE(908)] = 12354,
  [SMALL_STATE(909)] = 12358,
  [SMALL_STATE(910)] = 12362,
  [SMALL_STATE(911)] = 12366,
  [SMALL_STATE(912)] = 12370,
  [SMALL_STATE(913)] = 12374,
  [SMALL_STATE(914)] = 12378,
  [SMALL_STATE(915)] = 12382,
  [SMALL_STATE(916)] = 12386,
  [SMALL_STATE(917)] = 12390,
  [SMALL_STATE(918)] = 12394,
  [SMALL_STATE(919)] = 12398,
  [SMALL_STATE(920)] = 12402,
  [SMALL_STATE(921)] = 12406,
  [SMALL_STATE(922)] = 12410,
  [SMALL_STATE(923)] = 12414,
  [SMALL_STATE(924)] = 12418,
  [SMALL_STATE(925)] = 12422,
  [SMALL_STATE(926)] = 12426,
  [SMALL_STATE(927)] = 12430,
  [SMALL_STATE(928)] = 12434,
  [SMALL_STATE(929)] = 12438,
  [SMALL_STATE(930)] = 12442,
  [SMALL_STATE(931)] = 12446,
  [SMALL_STATE(932)] = 12450,
  [SMALL_STATE(933)] = 12454,
  [SMALL_STATE(934)] = 12458,
  [SMALL_STATE(935)] = 12462,
  [SMALL_STATE(936)] = 12466,
  [SMALL_STATE(937)] = 12470,
  [SMALL_STATE(938)] = 12474,
  [SMALL_STATE(939)] = 12478,
  [SMALL_STATE(940)] = 12482,
  [SMALL_STATE(941)] = 12486,
  [SMALL_STATE(942)] = 12490,
  [SMALL_STATE(943)] = 12494,
  [SMALL_STATE(944)] = 12498,
  [SMALL_STATE(945)] = 12502,
  [SMALL_STATE(946)] = 12506,
  [SMALL_STATE(947)] = 12510,
  [SMALL_STATE(948)] = 12514,
  [SMALL_STATE(949)] = 12518,
  [SMALL_STATE(950)] = 12522,
  [SMALL_STATE(951)] = 12526,
  [SMALL_STATE(952)] = 12530,
  [SMALL_STATE(953)] = 12534,
  [SMALL_STATE(954)] = 12538,
  [SMALL_STATE(955)] = 12542,
  [SMALL_STATE(956)] = 12546,
  [SMALL_STATE(957)] = 12550,
  [SMALL_STATE(958)] = 12554,
  [SMALL_STATE(959)] = 12558,
  [SMALL_STATE(960)] = 12562,
  [SMALL_STATE(961)] = 12566,
  [SMALL_STATE(962)] = 12570,
  [SMALL_STATE(963)] = 12574,
  [SMALL_STATE(964)] = 12578,
  [SMALL_STATE(965)] = 12582,
  [SMALL_STATE(966)] = 12586,
  [SMALL_STATE(967)] = 12590,
  [SMALL_STATE(968)] = 12594,
  [SMALL_STATE(969)] = 12598,
  [SMALL_STATE(970)] = 12602,
  [SMALL_STATE(971)] = 12606,
  [SMALL_STATE(972)] = 12610,
  [SMALL_STATE(973)] = 12614,
  [SMALL_STATE(974)] = 12618,
  [SMALL_STATE(975)] = 12622,
  [SMALL_STATE(976)] = 12626,
  [SMALL_STATE(977)] = 12630,
  [SMALL_STATE(978)] = 12634,
  [SMALL_STATE(979)] = 12638,
  [SMALL_STATE(980)] = 12642,
  [SMALL_STATE(981)] = 12646,
  [SMALL_STATE(982)] = 12650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(379),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(550),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(981),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(432),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(978),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(973),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(970),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(665),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 34),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(369),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 34),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 34),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 27),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 46),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 24),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(845),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 40),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 38),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(645),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 20),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 33),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 47),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(375),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 38),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 38),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 27),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(367),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(593),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 27),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 33),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 47),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 38),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 47),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 26),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 27),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 33),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 31),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 30),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 44),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 43),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 22),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 21),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 53),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 18),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 53),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 37),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 35),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 42),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 32),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 68),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 67),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 27),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 66),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 25),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 34),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 41),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 27),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 64),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 33),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 32),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 63),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 38),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 62),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 32),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 61),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 60),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 59),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 58),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 33),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 54),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 57),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 38),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 47),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 47),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 56),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(958),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(326),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(935),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 20),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(316),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(607),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(524),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(315),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(677),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(144),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(568),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(322),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(476),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(27),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(618),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 34),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(662),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(624),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 52),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 52),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 51),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 65),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 19),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 45),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 48),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 49),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 50),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 39),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 55),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2009] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
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
