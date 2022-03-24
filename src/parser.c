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
#define STATE_COUNT 989
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
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(552);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '+') ADVANCE(646);
      if (lookahead == ',') ADVANCE(563);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(626);
      if (lookahead == ';') ADVANCE(553);
      if (lookahead == '<') ADVANCE(592);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(596);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == ']') ADVANCE(617);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead == '}') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == '0') ADVANCE(575);
      if (lookahead == 'X') ADVANCE(753);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(758);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(934);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(549);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(587);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(803);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(861);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(827);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(807);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(790);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(913);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(916);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(920);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(518);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(514);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(498);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(692);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
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
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(614);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(674);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
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
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(608);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(608);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(671);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(671);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(504);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(618);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(560);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(490);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(734);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 251:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(712);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(497);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
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
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(669);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
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
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
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
          lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 493:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 494:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 495:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(675);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(559);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(350);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 499:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(633);
      END_STATE();
    case 500:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(439);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 502:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(602);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(751);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 510:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(143);
      END_STATE();
    case 511:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(170);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(569);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(572);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 543:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 547:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 548:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 549:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 550:
      if (eof) ADVANCE(552);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == '0') ADVANCE(575);
      if (lookahead == ';') ADVANCE(553);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead == '}') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(550)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 551:
      if (eof) ADVANCE(552);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == ',') ADVANCE(563);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == ':') ADVANCE(626);
      if (lookahead == ';') ADVANCE(553);
      if (lookahead == '<') ADVANCE(592);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(596);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == ']') ADVANCE(617);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead == '}') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(551)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (lookahead == 'X') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(594);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(893);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(802);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(805);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(747);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(915);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(783);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(772);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(935);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
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
  [4] = {.lex_state = 551},
  [5] = {.lex_state = 551},
  [6] = {.lex_state = 551},
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
  [24] = {.lex_state = 551},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 551},
  [30] = {.lex_state = 551},
  [31] = {.lex_state = 551},
  [32] = {.lex_state = 551},
  [33] = {.lex_state = 551},
  [34] = {.lex_state = 551},
  [35] = {.lex_state = 551},
  [36] = {.lex_state = 551},
  [37] = {.lex_state = 551},
  [38] = {.lex_state = 551},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 551},
  [42] = {.lex_state = 551},
  [43] = {.lex_state = 551},
  [44] = {.lex_state = 551},
  [45] = {.lex_state = 551},
  [46] = {.lex_state = 551},
  [47] = {.lex_state = 551},
  [48] = {.lex_state = 551},
  [49] = {.lex_state = 551},
  [50] = {.lex_state = 551},
  [51] = {.lex_state = 551},
  [52] = {.lex_state = 551},
  [53] = {.lex_state = 551},
  [54] = {.lex_state = 551},
  [55] = {.lex_state = 551},
  [56] = {.lex_state = 551},
  [57] = {.lex_state = 551},
  [58] = {.lex_state = 551},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 551},
  [64] = {.lex_state = 551},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 550},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 551},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 551},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 551},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 551},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 550},
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
  [131] = {.lex_state = 551},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 550},
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
  [166] = {.lex_state = 551},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 551},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 551},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 551},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 551},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 551},
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
  [208] = {.lex_state = 1},
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
  [309] = {.lex_state = 550},
  [310] = {.lex_state = 550},
  [311] = {.lex_state = 550},
  [312] = {.lex_state = 550},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 550},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 550},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 40},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 550},
  [324] = {.lex_state = 550},
  [325] = {.lex_state = 40},
  [326] = {.lex_state = 550},
  [327] = {.lex_state = 550},
  [328] = {.lex_state = 550},
  [329] = {.lex_state = 550},
  [330] = {.lex_state = 551},
  [331] = {.lex_state = 550},
  [332] = {.lex_state = 550},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 550},
  [335] = {.lex_state = 550},
  [336] = {.lex_state = 40},
  [337] = {.lex_state = 550},
  [338] = {.lex_state = 40},
  [339] = {.lex_state = 550},
  [340] = {.lex_state = 551},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 11},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 11},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 11},
  [362] = {.lex_state = 551},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 551},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 10},
  [369] = {.lex_state = 551},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 10},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 40},
  [374] = {.lex_state = 10},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 13},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 551},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 10},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 24},
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
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 25},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 20},
  [443] = {.lex_state = 20},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 10},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 551},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 10},
  [478] = {.lex_state = 550},
  [479] = {.lex_state = 10},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 551},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 10},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 20},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 10},
  [508] = {.lex_state = 20},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 10},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 551},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 10},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 10},
  [538] = {.lex_state = 10},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 10},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 10},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 22},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 10},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 551},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 10},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 10},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 10},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 10},
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
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 551},
  [655] = {.lex_state = 551},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 17},
  [671] = {.lex_state = 10},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 10},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 550},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 10},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 40},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 550},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 551},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 550},
  [846] = {.lex_state = 10},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 551},
  [858] = {.lex_state = 551},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 551},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 551},
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
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 550},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 10},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 10},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 10},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 550},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 550},
  [945] = {.lex_state = 10},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 10},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 551},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 550},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 10},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 10},
  [969] = {.lex_state = 10},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 550},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 550},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 550},
  [988] = {.lex_state = 0},
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
    [sym_source_file] = STATE(974),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(246),
    [sym_delete_statement] = STATE(246),
    [sym_begin_batch] = STATE(543),
    [sym_insert_statement] = STATE(246),
    [sym_truncate] = STATE(246),
    [sym_create_index] = STATE(246),
    [sym_drop_index] = STATE(246),
    [sym_update] = STATE(246),
    [sym_use] = STATE(246),
    [sym_grant] = STATE(246),
    [sym_revoke] = STATE(246),
    [sym_list_roles] = STATE(246),
    [sym_list_permissions] = STATE(246),
    [sym_drop_aggregate] = STATE(246),
    [sym_drop_materialized_view] = STATE(246),
    [sym_drop_function] = STATE(246),
    [sym_drop_keyspace] = STATE(246),
    [sym_drop_role] = STATE(246),
    [sym_drop_table] = STATE(246),
    [sym_drop_trigger] = STATE(246),
    [sym_drop_type] = STATE(246),
    [sym_drop_user] = STATE(246),
    [sym_create_aggregate] = STATE(246),
    [sym_create_materialized_view] = STATE(246),
    [sym_create_function] = STATE(246),
    [sym_create_keyspace] = STATE(246),
    [sym_create_role] = STATE(246),
    [sym_create_table] = STATE(246),
    [sym_create_trigger] = STATE(246),
    [sym_create_type] = STATE(246),
    [sym_create_user] = STATE(246),
    [sym_alter_materialized_view] = STATE(246),
    [sym_alter_keyspace] = STATE(246),
    [sym_alter_role] = STATE(246),
    [sym_alter_table] = STATE(246),
    [sym_alter_type] = STATE(246),
    [sym_alter_user] = STATE(246),
    [sym_apply_batch] = STATE(246),
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
    STATE(543), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(246), 37,
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
    STATE(543), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(246), 37,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(836), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
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
  [355] = 3,
    STATE(40), 1,
      sym_data_type_name,
    STATE(910), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(913), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(201), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(887), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(419), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
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
  [565] = 3,
    STATE(40), 1,
      sym_data_type_name,
    STATE(830), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(764), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(872), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(824), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
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
  [740] = 3,
    STATE(40), 1,
      sym_data_type_name,
    STATE(907), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(143), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(697), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(693), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [880] = 2,
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
  [913] = 3,
    STATE(40), 1,
      sym_data_type_name,
    STATE(952), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(40), 1,
      sym_data_type_name,
    STATE(953), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1015] = 2,
    STATE(548), 1,
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
  [1140] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(34), 1,
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
  [1171] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(31), 1,
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
  [1202] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
  [1233] = 1,
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
  [1260] = 1,
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
  [1317] = 8,
    ACTIONS(117), 1,
      aux_sym_select_statement_token4,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    STATE(57), 1,
      sym_where_spec,
    STATE(73), 1,
      sym_order_spec,
    STATE(184), 1,
      sym_limit_spec,
    ACTIONS(115), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1357] = 1,
    ACTIONS(125), 23,
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
  [1383] = 3,
    ACTIONS(129), 1,
      anon_sym_LT,
    STATE(59), 1,
      sym_data_type_definition,
    ACTIONS(127), 21,
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
  [1413] = 8,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(58), 1,
      sym_where_spec,
    STATE(70), 1,
      sym_order_spec,
    STATE(170), 1,
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
  [1453] = 8,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(55), 1,
      sym_where_spec,
    STATE(82), 1,
      sym_order_spec,
    STATE(166), 1,
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
  [1543] = 1,
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
  [1668] = 3,
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    STATE(53), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(149), 20,
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
  [1697] = 1,
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
      aux_sym_primary_key_column_token1,
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
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    STATE(37), 1,
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
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(70), 1,
      sym_order_spec,
    STATE(170), 1,
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
  [1835] = 1,
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
  [1859] = 6,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(82), 1,
      sym_order_spec,
    STATE(166), 1,
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
  [1893] = 6,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_order_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(86), 1,
      sym_order_spec,
    STATE(173), 1,
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
  [1927] = 1,
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
  [2024] = 1,
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
  [2047] = 2,
    ACTIONS(181), 1,
      aux_sym_relation_element_token1,
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
  [2147] = 2,
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
  [2172] = 4,
    ACTIONS(201), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(304), 1,
      sym_using_ttl_timestamp,
    ACTIONS(199), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2200] = 4,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(173), 1,
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
  [2228] = 1,
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
  [2250] = 1,
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
  [2272] = 4,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(166), 1,
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
  [2300] = 3,
    STATE(195), 1,
      sym_user_super_user,
    ACTIONS(209), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
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
  [2326] = 1,
    ACTIONS(211), 19,
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
  [2348] = 2,
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
  [2372] = 1,
    ACTIONS(217), 19,
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
  [2394] = 4,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(221), 1,
      aux_sym_delete_statement_token2,
    STATE(296), 1,
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
  [2422] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(223), 17,
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
  [2448] = 1,
    ACTIONS(228), 19,
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
  [2470] = 1,
    ACTIONS(230), 19,
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
  [2492] = 4,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(170), 1,
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
  [2520] = 2,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(232), 18,
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
  [2544] = 1,
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
  [2566] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(238), 17,
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
  [2592] = 4,
    ACTIONS(119), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(245), 1,
      aux_sym_select_statement_token4,
    STATE(180), 1,
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
  [2620] = 1,
    ACTIONS(247), 19,
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
  [2642] = 4,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(251), 1,
      aux_sym_delete_statement_token2,
    STATE(202), 1,
      sym_using_ttl_timestamp,
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
  [2670] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(458), 1,
      sym_expression,
    STATE(977), 1,
      sym_expression_list,
    STATE(616), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2708] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(458), 1,
      sym_expression,
    STATE(735), 1,
      sym_expression_list,
    STATE(616), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2746] = 3,
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
  [2771] = 1,
    ACTIONS(238), 18,
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
  [2792] = 1,
    ACTIONS(267), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2813] = 3,
    ACTIONS(271), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
      sym_if_spec,
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
  [2838] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [2863] = 2,
    ACTIONS(280), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(278), 17,
      ts_builtin_sym_end,
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
  [2886] = 3,
    ACTIONS(284), 1,
      aux_sym_create_keyspace_token1,
    STATE(233), 1,
      sym_role_with,
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
  [2911] = 3,
    ACTIONS(288), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(286), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2936] = 3,
    ACTIONS(292), 1,
      aux_sym_delete_statement_token2,
    STATE(197), 1,
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
  [2961] = 3,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    STATE(252), 1,
      sym_with_element,
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
  [2986] = 2,
    ACTIONS(300), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(298), 17,
      ts_builtin_sym_end,
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
  [3009] = 3,
    ACTIONS(304), 1,
      aux_sym_delete_statement_token2,
    STATE(217), 1,
      sym_if_spec,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(308), 1,
      aux_sym_delete_statement_token2,
    STATE(273), 1,
      sym_if_spec,
    ACTIONS(306), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(312), 1,
      aux_sym_delete_statement_token2,
    STATE(290), 1,
      sym_if_spec,
    ACTIONS(310), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3084] = 1,
    ACTIONS(314), 18,
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
  [3105] = 3,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    STATE(240), 1,
      sym_with_element,
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
  [3130] = 1,
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
  [3151] = 3,
    ACTIONS(320), 1,
      aux_sym_delete_statement_token2,
    STATE(292), 1,
      sym_if_spec,
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
  [3176] = 3,
    ACTIONS(324), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
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
  [3226] = 3,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(291), 1,
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
  [3251] = 3,
    ACTIONS(334), 1,
      aux_sym_delete_statement_token2,
    STATE(235), 1,
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
  [3276] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
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
  [3301] = 3,
    ACTIONS(340), 1,
      aux_sym_delete_statement_token2,
    STATE(289), 1,
      sym_if_spec,
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
  [3326] = 2,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(342), 17,
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
  [3349] = 3,
    ACTIONS(348), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3374] = 3,
    ACTIONS(352), 1,
      aux_sym_delete_statement_token2,
    STATE(244), 1,
      sym_if_spec,
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
  [3399] = 1,
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
  [3420] = 3,
    ACTIONS(284), 1,
      aux_sym_create_keyspace_token1,
    STATE(221), 1,
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
  [3445] = 1,
    ACTIONS(358), 18,
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
  [3466] = 2,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(360), 17,
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
  [3489] = 1,
    ACTIONS(364), 18,
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
  [3510] = 3,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    STATE(294), 1,
      sym_with_element,
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
  [3535] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3560] = 3,
    ACTIONS(372), 1,
      aux_sym_delete_statement_token2,
    STATE(206), 1,
      sym_if_spec,
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
  [3585] = 3,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    STATE(264), 1,
      sym_with_element,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3610] = 1,
    ACTIONS(376), 18,
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
  [3631] = 1,
    ACTIONS(378), 18,
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
  [3652] = 3,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(250), 1,
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
  [3677] = 3,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    STATE(194), 1,
      sym_with_element,
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
  [3702] = 1,
    ACTIONS(384), 18,
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
  [3723] = 3,
    ACTIONS(288), 1,
      aux_sym_relation_elements_token1,
    STATE(98), 1,
      aux_sym_role_with_repeat1,
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
  [3748] = 3,
    ACTIONS(324), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_table_options_repeat1,
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
  [3773] = 3,
    ACTIONS(392), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
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
  [3798] = 3,
    ACTIONS(397), 1,
      aux_sym_list_roles_token2,
    ACTIONS(399), 1,
      aux_sym_list_roles_token3,
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
  [3823] = 1,
    ACTIONS(401), 18,
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
  [3844] = 8,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(669), 1,
      sym_expression,
    STATE(616), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3879] = 3,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(210), 1,
      sym_using_ttl_timestamp,
    ACTIONS(403), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3904] = 3,
    ACTIONS(407), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
      sym_if_spec,
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
  [3929] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_create_function_repeat1,
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
  [3954] = 1,
    ACTIONS(411), 18,
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
  [3975] = 1,
    ACTIONS(413), 18,
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
  [3996] = 1,
    ACTIONS(415), 18,
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
  [4017] = 3,
    ACTIONS(419), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
      sym_if_spec,
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
  [4042] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_create_function_repeat1,
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
  [4067] = 1,
    ACTIONS(223), 18,
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
  [4088] = 3,
    ACTIONS(425), 1,
      aux_sym_create_index_token3,
    ACTIONS(427), 1,
      aux_sym_list_roles_token2,
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
  [4113] = 3,
    ACTIONS(348), 1,
      aux_sym_relation_elements_token1,
    STATE(116), 1,
      aux_sym_alter_type_rename_repeat1,
    ACTIONS(429), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(433), 1,
      aux_sym_delete_statement_token2,
    STATE(308), 1,
      sym_if_spec,
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
  [4163] = 3,
    ACTIONS(437), 1,
      aux_sym_delete_statement_token2,
    STATE(229), 1,
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
  [4188] = 3,
    ACTIONS(441), 1,
      aux_sym_delete_statement_token2,
    STATE(225), 1,
      sym_if_spec,
    ACTIONS(439), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(284), 1,
      aux_sym_create_keyspace_token1,
    STATE(274), 1,
      sym_role_with,
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
  [4238] = 3,
    ACTIONS(447), 1,
      aux_sym_delete_statement_token2,
    STATE(256), 1,
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
  [4263] = 1,
    ACTIONS(449), 18,
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
    ACTIONS(453), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_role_with_repeat1,
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
  [4309] = 1,
    ACTIONS(456), 18,
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
  [4330] = 1,
    ACTIONS(458), 18,
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
  [4351] = 1,
    ACTIONS(460), 17,
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
  [4371] = 1,
    ACTIONS(462), 17,
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
  [4391] = 1,
    ACTIONS(464), 17,
      ts_builtin_sym_end,
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
  [4411] = 1,
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
  [4431] = 1,
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
  [4451] = 1,
    ACTIONS(470), 17,
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
  [4471] = 1,
    ACTIONS(472), 17,
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
  [4491] = 1,
    ACTIONS(474), 17,
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
  [4511] = 2,
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
  [4533] = 2,
    ACTIONS(478), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4555] = 1,
    ACTIONS(480), 17,
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
  [4575] = 1,
    ACTIONS(390), 17,
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
  [4595] = 2,
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
  [4617] = 2,
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
  [4639] = 1,
    ACTIONS(486), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4659] = 2,
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
  [4681] = 1,
    ACTIONS(451), 17,
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
  [4701] = 1,
    ACTIONS(488), 17,
      ts_builtin_sym_end,
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
  [4721] = 1,
    ACTIONS(490), 17,
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
  [4741] = 1,
    ACTIONS(492), 17,
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
  [4761] = 1,
    ACTIONS(273), 17,
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
  [4781] = 1,
    ACTIONS(494), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4801] = 2,
    ACTIONS(498), 1,
      aux_sym_select_statement_token4,
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
  [4823] = 1,
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
  [4843] = 1,
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
  [4863] = 1,
    ACTIONS(504), 17,
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
  [4883] = 2,
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
  [4905] = 1,
    ACTIONS(506), 17,
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
  [4925] = 2,
    ACTIONS(510), 1,
      aux_sym_relation_elements_token1,
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
  [4947] = 2,
    ACTIONS(514), 1,
      aux_sym_relation_elements_token1,
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
  [4969] = 1,
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
  [4989] = 1,
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
  [5009] = 1,
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
  [5029] = 2,
    ACTIONS(524), 1,
      aux_sym_list_roles_token3,
    ACTIONS(522), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5051] = 1,
    ACTIONS(526), 17,
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
  [5071] = 2,
    ACTIONS(530), 1,
      aux_sym_list_roles_token2,
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
  [5093] = 1,
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
  [5112] = 1,
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
  [5131] = 1,
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
  [5150] = 1,
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
  [5226] = 1,
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
  [5245] = 1,
    ACTIONS(403), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [5302] = 1,
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
  [5321] = 1,
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
  [5340] = 1,
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
  [5359] = 9,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(682), 1,
      sym_constant,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(404), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [5394] = 1,
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
  [5413] = 1,
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
  [5432] = 1,
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
  [5451] = 1,
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
  [5470] = 1,
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
  [5489] = 1,
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
  [5508] = 1,
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
  [5527] = 1,
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
  [5546] = 1,
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
  [5565] = 1,
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
  [5584] = 1,
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
  [5603] = 1,
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
  [5622] = 1,
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
  [5641] = 1,
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
  [5660] = 1,
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
  [5679] = 1,
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
  [5698] = 1,
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
  [5717] = 1,
    ACTIONS(584), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [5755] = 1,
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
  [5774] = 1,
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
  [5793] = 1,
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
  [5812] = 1,
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
  [5831] = 1,
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
  [5850] = 1,
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
  [5869] = 1,
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
  [5888] = 1,
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
  [5907] = 1,
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
  [5926] = 1,
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
  [5945] = 1,
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
  [5964] = 1,
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
  [5983] = 1,
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
  [6002] = 1,
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
  [6021] = 1,
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
  [6040] = 1,
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
  [6059] = 1,
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
  [6078] = 1,
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
  [6097] = 2,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(622), 15,
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
  [6118] = 1,
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
  [6175] = 1,
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
  [6194] = 1,
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
  [6213] = 1,
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
  [6232] = 1,
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
  [6251] = 1,
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
  [6270] = 1,
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
  [6289] = 1,
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
  [6308] = 1,
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
  [6327] = 1,
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
  [6346] = 1,
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
  [6365] = 1,
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
  [6384] = 1,
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
  [6403] = 1,
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
  [6422] = 1,
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
  [6441] = 1,
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
  [6460] = 1,
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
  [6479] = 1,
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
  [6498] = 1,
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
  [6517] = 1,
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
  [6536] = 1,
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
  [6555] = 1,
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
  [6574] = 1,
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
  [6593] = 1,
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
  [6612] = 1,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [6650] = 1,
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
  [6669] = 1,
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
  [6688] = 1,
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
  [6707] = 1,
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
  [6726] = 1,
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
  [6745] = 1,
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
  [6764] = 1,
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
  [6783] = 1,
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
  [6802] = 1,
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
  [6821] = 1,
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
  [6840] = 1,
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
  [6859] = 1,
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
  [6878] = 1,
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
  [6897] = 1,
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
  [6954] = 1,
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
  [6973] = 1,
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
  [6992] = 1,
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
  [7011] = 1,
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
  [7030] = 1,
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
  [7049] = 1,
    ACTIONS(199), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7087] = 1,
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
  [7106] = 1,
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
  [7125] = 1,
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
  [7144] = 1,
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
  [7163] = 1,
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
  [7182] = 1,
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
  [7201] = 1,
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
  [7220] = 1,
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
  [7239] = 1,
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
  [7258] = 1,
    ACTIONS(310), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7277] = 1,
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
  [7296] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(196), 1,
      sym_init_cond_definition,
    STATE(122), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7324] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(574), 1,
      sym_init_cond_definition,
    STATE(122), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7352] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(227), 1,
      sym_init_cond_definition,
    STATE(122), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7380] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(257), 1,
      sym_init_cond_definition,
    STATE(122), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7408] = 1,
    ACTIONS(728), 15,
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
  [7426] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(282), 1,
      sym_init_cond_definition,
    STATE(122), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7454] = 8,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(730), 1,
      anon_sym_STAR,
    ACTIONS(732), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(747), 1,
      sym_function_args,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(527), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7485] = 9,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(516), 1,
      sym_constant,
    STATE(523), 1,
      sym_init_cond_list,
    STATE(525), 1,
      sym_init_cond_hash_item,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7518] = 7,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(732), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(980), 1,
      sym_function_args,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(527), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7546] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(738), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(46), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7571] = 5,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(571), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7594] = 6,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(740), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(552), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(604), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(255), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7619] = 11,
    ACTIONS(742), 1,
      aux_sym_truncate_token2,
    ACTIONS(744), 1,
      aux_sym_create_index_token2,
    ACTIONS(746), 1,
      aux_sym_resource_token2,
    ACTIONS(748), 1,
      aux_sym_resource_token5,
    ACTIONS(750), 1,
      aux_sym_resource_token6,
    ACTIONS(752), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(754), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(756), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(758), 1,
      aux_sym_drop_type_token1,
    ACTIONS(760), 1,
      aux_sym_drop_user_token1,
    ACTIONS(762), 1,
      aux_sym_create_aggregate_token1,
  [7653] = 4,
    ACTIONS(766), 1,
      aux_sym_privilege_token1,
    ACTIONS(768), 1,
      aux_sym_resource_token4,
    STATE(147), 1,
      sym_privilege,
    ACTIONS(764), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7673] = 5,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(770), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7695] = 5,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(426), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7717] = 10,
    ACTIONS(774), 1,
      aux_sym_truncate_token2,
    ACTIONS(776), 1,
      aux_sym_create_index_token2,
    ACTIONS(778), 1,
      aux_sym_resource_token2,
    ACTIONS(780), 1,
      aux_sym_resource_token5,
    ACTIONS(782), 1,
      aux_sym_resource_token6,
    ACTIONS(784), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(786), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(788), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(790), 1,
      aux_sym_drop_type_token1,
    ACTIONS(792), 1,
      aux_sym_drop_user_token1,
  [7748] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7767] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(682), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7786] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(105), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7805] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(409), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7824] = 6,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      aux_sym_relation_element_token1,
    ACTIONS(802), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(804), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(796), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(798), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7847] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(43), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7866] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(493), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7885] = 6,
    ACTIONS(296), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(806), 1,
      aux_sym_drop_index_token1,
    ACTIONS(808), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(810), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(271), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7908] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(602), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7927] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(849), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7946] = 3,
    ACTIONS(766), 1,
      aux_sym_privilege_token1,
    STATE(875), 1,
      sym_privilege,
    ACTIONS(764), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7963] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(516), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7982] = 3,
    ACTIONS(766), 1,
      aux_sym_privilege_token1,
    STATE(874), 1,
      sym_privilege,
    ACTIONS(764), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7999] = 4,
    ACTIONS(257), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(476), 1,
      sym_constant,
    ACTIONS(255), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8018] = 5,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      aux_sym_relation_element_token1,
    ACTIONS(802), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(796), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(798), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8038] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(816), 1,
      sym_object_name,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8061] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(818), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8084] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(820), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8107] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(822), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8130] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(824), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8153] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(826), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8176] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(828), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8199] = 6,
    ACTIONS(830), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(832), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(834), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(811), 1,
      sym_index_column_spec,
    STATE(818), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8220] = 6,
    ACTIONS(830), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(832), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(834), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(820), 1,
      sym_index_column_spec,
    STATE(818), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8241] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(838), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8264] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(840), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8287] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(842), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8310] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(844), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8333] = 6,
    ACTIONS(830), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(832), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(834), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(746), 1,
      sym_index_column_spec,
    STATE(818), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8354] = 6,
    ACTIONS(830), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(832), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(834), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(941), 1,
      sym_index_column_spec,
    STATE(818), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8375] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(846), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8398] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(848), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8421] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(850), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8444] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(852), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8467] = 6,
    ACTIONS(854), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(856), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(858), 1,
      sym_object_name,
    STATE(228), 1,
      sym_table_options,
    STATE(947), 1,
      sym_table_option_name,
    STATE(133), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8488] = 7,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_object_name,
    ACTIONS(860), 1,
      aux_sym_delete_statement_token3,
    STATE(50), 1,
      sym_relation_element,
    STATE(306), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8511] = 3,
    ACTIONS(866), 1,
      aux_sym_relation_element_token1,
    ACTIONS(862), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(864), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8525] = 5,
    ACTIONS(868), 1,
      aux_sym_privilege_token3,
    ACTIONS(870), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(872), 1,
      aux_sym_alter_table_rename_token1,
    STATE(279), 1,
      sym_alter_type_operation,
    STATE(280), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8543] = 5,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      aux_sym__decimal_literal_token1,
    STATE(681), 1,
      sym__decimal_literal,
    STATE(680), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8561] = 7,
    ACTIONS(876), 1,
      aux_sym_truncate_token2,
    ACTIONS(878), 1,
      aux_sym_privilege_token1,
    ACTIONS(880), 1,
      aux_sym_resource_token2,
    ACTIONS(882), 1,
      aux_sym_resource_token5,
    ACTIONS(884), 1,
      aux_sym_resource_token6,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(193), 1,
      sym_resource,
  [8583] = 7,
    ACTIONS(876), 1,
      aux_sym_truncate_token2,
    ACTIONS(878), 1,
      aux_sym_privilege_token1,
    ACTIONS(880), 1,
      aux_sym_resource_token2,
    ACTIONS(882), 1,
      aux_sym_resource_token5,
    ACTIONS(884), 1,
      aux_sym_resource_token6,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(738), 1,
      sym_resource,
  [8605] = 7,
    ACTIONS(876), 1,
      aux_sym_truncate_token2,
    ACTIONS(878), 1,
      aux_sym_privilege_token1,
    ACTIONS(880), 1,
      aux_sym_resource_token2,
    ACTIONS(882), 1,
      aux_sym_resource_token5,
    ACTIONS(884), 1,
      aux_sym_resource_token6,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(744), 1,
      sym_resource,
  [8627] = 6,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_object_name,
    STATE(50), 1,
      sym_relation_element,
    STATE(63), 1,
      sym_relation_elements,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8647] = 3,
    ACTIONS(894), 1,
      aux_sym_relation_element_token1,
    ACTIONS(890), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(892), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8661] = 7,
    ACTIONS(896), 1,
      aux_sym_select_statement_token2,
    ACTIONS(898), 1,
      aux_sym_select_statement_token3,
    ACTIONS(900), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      sym_object_name,
    STATE(532), 1,
      sym_function_call,
    STATE(541), 1,
      sym_select_element,
    STATE(578), 1,
      sym_select_elements,
  [8683] = 6,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      sym_object_name,
    STATE(44), 1,
      sym_relation_element,
    STATE(375), 1,
      sym_function_call,
    STATE(594), 1,
      sym_column_not_null,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8703] = 5,
    ACTIONS(854), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(856), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(858), 1,
      sym_object_name,
    STATE(947), 1,
      sym_table_option_name,
    STATE(169), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8721] = 6,
    ACTIONS(906), 1,
      aux_sym_truncate_token2,
    ACTIONS(908), 1,
      aux_sym_resource_token2,
    ACTIONS(910), 1,
      aux_sym_resource_token6,
    ACTIONS(912), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(914), 1,
      aux_sym_drop_type_token1,
    ACTIONS(916), 1,
      aux_sym_drop_user_token1,
  [8740] = 5,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_object_name,
    STATE(44), 1,
      sym_relation_element,
    STATE(375), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8757] = 2,
    ACTIONS(918), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(920), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8768] = 6,
    ACTIONS(900), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      sym_object_name,
    ACTIONS(922), 1,
      aux_sym_select_statement_token3,
    STATE(532), 1,
      sym_function_call,
    STATE(541), 1,
      sym_select_element,
    STATE(627), 1,
      sym_select_elements,
  [8787] = 1,
    ACTIONS(924), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8795] = 3,
    ACTIONS(928), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(472), 1,
      sym_using_timestamp_spec,
    ACTIONS(926), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8807] = 1,
    ACTIONS(930), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8815] = 5,
    ACTIONS(932), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(934), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(936), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(938), 1,
      aux_sym_role_with_option_token4,
    STATE(132), 1,
      sym_role_with_option,
  [8831] = 3,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(940), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(183), 2,
      sym_option_hash,
      sym_table_option_value,
  [8843] = 1,
    ACTIONS(944), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8851] = 1,
    ACTIONS(946), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8859] = 5,
    ACTIONS(900), 1,
      anon_sym_STAR,
    ACTIONS(948), 1,
      sym_object_name,
    STATE(532), 1,
      sym_function_call,
    STATE(541), 1,
      sym_select_element,
    STATE(627), 1,
      sym_select_elements,
  [8875] = 1,
    ACTIONS(950), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8883] = 5,
    ACTIONS(952), 1,
      aux_sym_from_spec_token1,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(430), 1,
      sym_from_spec,
    STATE(526), 1,
      sym_delete_column_item,
    STATE(582), 1,
      sym_delete_column_list,
  [8899] = 5,
    ACTIONS(900), 1,
      anon_sym_STAR,
    ACTIONS(948), 1,
      sym_object_name,
    STATE(532), 1,
      sym_function_call,
    STATE(541), 1,
      sym_select_element,
    STATE(678), 1,
      sym_select_elements,
  [8915] = 3,
    ACTIONS(928), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(534), 1,
      sym_using_timestamp_spec,
    ACTIONS(956), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8927] = 5,
    ACTIONS(952), 1,
      aux_sym_from_spec_token1,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(410), 1,
      sym_from_spec,
    STATE(526), 1,
      sym_delete_column_item,
    STATE(689), 1,
      sym_delete_column_list,
  [8943] = 5,
    ACTIONS(958), 1,
      aux_sym_select_statement_token3,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
    STATE(536), 1,
      sym_insert_column_spec,
  [8959] = 5,
    ACTIONS(932), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(934), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(936), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(938), 1,
      aux_sym_role_with_option_token4,
    STATE(174), 1,
      sym_role_with_option,
  [8975] = 4,
    ACTIONS(964), 1,
      anon_sym_LPAREN,
    ACTIONS(966), 1,
      sym_object_name,
    STATE(808), 1,
      sym_primary_key_definition,
    STATE(809), 2,
      sym_compound_key,
      sym_composite_key,
  [8989] = 3,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(971), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9001] = 5,
    ACTIONS(958), 1,
      aux_sym_select_statement_token3,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      aux_sym_insert_values_spec_token1,
    STATE(69), 1,
      sym_insert_values_spec,
    STATE(491), 1,
      sym_insert_column_spec,
  [9017] = 1,
    ACTIONS(973), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9025] = 4,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(977), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      aux_sym_select_element_token1,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9039] = 1,
    ACTIONS(981), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9047] = 5,
    ACTIONS(983), 1,
      sym__string_literal,
    ACTIONS(985), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(987), 1,
      aux_sym_create_index_token3,
    ACTIONS(989), 1,
      sym_object_name,
    STATE(789), 1,
      sym_short_index_name,
  [9063] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_where_spec,
    STATE(415), 1,
      aux_sym_update_repeat1,
  [9076] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      sym_where_spec,
    STATE(417), 1,
      aux_sym_update_repeat1,
  [9089] = 4,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_function_args_repeat1,
  [9102] = 4,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(997), 1,
      anon_sym_DOT,
    ACTIONS(999), 1,
      aux_sym_update_token2,
    STATE(752), 1,
      sym_using_ttl_timestamp,
  [9115] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9128] = 2,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1003), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9137] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9150] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9163] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_where_spec,
    STATE(414), 1,
      aux_sym_update_repeat1,
  [9176] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(928), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(104), 1,
      sym_where_spec,
    STATE(598), 1,
      sym_using_timestamp_spec,
  [9189] = 1,
    ACTIONS(971), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9196] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(928), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(94), 1,
      sym_where_spec,
    STATE(644), 1,
      sym_using_timestamp_spec,
  [9209] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_where_spec,
    STATE(406), 1,
      aux_sym_update_repeat1,
  [9222] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_where_spec,
    STATE(433), 1,
      aux_sym_update_repeat1,
  [9235] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(405), 1,
      aux_sym_update_repeat1,
  [9248] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9261] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9274] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9287] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9300] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_where_spec,
    STATE(416), 1,
      aux_sym_update_repeat1,
  [9313] = 3,
    ACTIONS(1007), 1,
      aux_sym_primary_key_column_token1,
    STATE(577), 1,
      sym_primary_key_column,
    ACTIONS(1005), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9324] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1011), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9335] = 4,
    ACTIONS(1013), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1015), 1,
      aux_sym_primary_key_column_token1,
    STATE(499), 1,
      aux_sym_relation_elements_repeat1,
    STATE(500), 1,
      aux_sym_materialized_view_where_repeat1,
  [9348] = 4,
    ACTIONS(983), 1,
      sym__string_literal,
    ACTIONS(989), 1,
      sym_object_name,
    ACTIONS(1017), 1,
      aux_sym_create_index_token3,
    STATE(843), 1,
      sym_short_index_name,
  [9361] = 4,
    ACTIONS(1019), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(959), 1,
      sym_primary_key_element,
  [9374] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1023), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9385] = 4,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1025), 1,
      anon_sym_DOT,
    ACTIONS(1027), 1,
      aux_sym_update_token2,
    STATE(714), 1,
      sym_using_ttl_timestamp,
  [9398] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(522), 1,
      aux_sym_assignment_set_repeat1,
  [9411] = 3,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1038), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9422] = 4,
    ACTIONS(1019), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(699), 1,
      sym_primary_key_element,
  [9435] = 4,
    ACTIONS(1013), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1040), 1,
      aux_sym_primary_key_column_token1,
    STATE(421), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(438), 1,
      aux_sym_relation_elements_repeat1,
  [9448] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(928), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(99), 1,
      sym_where_spec,
    STATE(634), 1,
      sym_using_timestamp_spec,
  [9461] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_where_spec,
    STATE(403), 1,
      aux_sym_update_repeat1,
  [9474] = 1,
    ACTIONS(1042), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9481] = 4,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [9494] = 3,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      aux_sym_from_spec_token1,
    STATE(533), 1,
      aux_sym_delete_column_list_repeat1,
  [9504] = 3,
    ACTIONS(1048), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1050), 1,
      sym_object_name,
    STATE(768), 1,
      sym_trigger_name,
  [9514] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(922), 1,
      sym_return_mode,
  [9524] = 3,
    ACTIONS(1056), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1058), 1,
      sym_object_name,
    STATE(200), 1,
      sym_table_name,
  [9534] = 3,
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1015), 1,
      aux_sym_primary_key_column_token1,
    STATE(37), 1,
      aux_sym_relation_elements_repeat1,
  [9544] = 2,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(1060), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9552] = 3,
    ACTIONS(1062), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1064), 1,
      sym_object_name,
    STATE(248), 1,
      sym_index_name,
  [9562] = 3,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_function_args_repeat1,
  [9572] = 3,
    ACTIONS(1069), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(245), 1,
      sym_keyspace_name,
  [9582] = 3,
    ACTIONS(1073), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1075), 1,
      sym_object_name,
    STATE(242), 1,
      sym_function_name,
  [9592] = 3,
    ACTIONS(1077), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(241), 1,
      sym_role_name,
  [9602] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_relation_element_repeat1,
  [9612] = 3,
    ACTIONS(1083), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1085), 1,
      sym_object_name,
    STATE(237), 1,
      sym_aggregate_name,
  [9622] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_create_function_repeat1,
  [9632] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(801), 1,
      sym_return_mode,
  [9642] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_clustering_key_list_repeat1,
  [9652] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
  [9662] = 3,
    ACTIONS(1050), 1,
      sym_object_name,
    ACTIONS(1093), 1,
      aux_sym_delete_statement_token2,
    STATE(725), 1,
      sym_trigger_name,
  [9672] = 3,
    ACTIONS(1095), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1097), 1,
      sym_object_name,
    STATE(232), 1,
      sym_type_name,
  [9682] = 3,
    ACTIONS(1099), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1101), 1,
      sym_object_name,
    STATE(230), 1,
      sym_user_name,
  [9692] = 3,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_column_definition_list_repeat1,
  [9702] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [9712] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(900), 1,
      sym_return_mode,
  [9722] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      aux_sym_clustering_key_list_repeat1,
  [9732] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_expression_list_repeat1,
  [9742] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(459), 1,
      aux_sym_assignment_map_repeat1,
  [9752] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [9762] = 3,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_column_definition_list_repeat1,
  [9772] = 3,
    ACTIONS(948), 1,
      sym_object_name,
    STATE(532), 1,
      sym_function_call,
    STATE(672), 1,
      sym_select_element,
  [9782] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      aux_sym_from_spec_token1,
    STATE(520), 1,
      aux_sym_select_elements_repeat1,
  [9792] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_create_function_repeat1,
  [9802] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    STATE(465), 1,
      aux_sym_option_hash_repeat1,
  [9812] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(861), 1,
      sym_return_mode,
  [9822] = 3,
    ACTIONS(874), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1137), 1,
      sym__string_literal,
    STATE(773), 1,
      sym__decimal_literal,
  [9832] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(468), 1,
      aux_sym_replication_list_repeat1,
  [9842] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RBRACE,
    STATE(459), 1,
      aux_sym_assignment_map_repeat1,
  [9852] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_relation_element_repeat2,
  [9862] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [9872] = 1,
    ACTIONS(956), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9878] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(933), 1,
      sym_return_mode,
  [9888] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [9898] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_relation_element_repeat1,
  [9908] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(524), 1,
      aux_sym_assignment_set_repeat1,
  [9918] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(418), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [9928] = 2,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    ACTIONS(1160), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [9936] = 3,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(464), 1,
      sym_typed_name,
  [9946] = 3,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1166), 1,
      aux_sym_update_token2,
    STATE(867), 1,
      sym_using_ttl_timestamp,
  [9956] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [9966] = 3,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(901), 1,
      sym_materialized_view_name,
  [9976] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_data_type_definition_repeat1,
  [9986] = 2,
    ACTIONS(1179), 1,
      anon_sym_DOT,
    ACTIONS(1181), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9994] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_function_args_repeat1,
  [10004] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    STATE(465), 1,
      aux_sym_option_hash_repeat1,
  [10014] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [10024] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(819), 1,
      sym_return_mode,
  [10034] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RBRACE,
    STATE(468), 1,
      aux_sym_replication_list_repeat1,
  [10044] = 3,
    ACTIONS(874), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1193), 1,
      sym__string_literal,
    STATE(633), 1,
      sym__decimal_literal,
  [10054] = 3,
    ACTIONS(958), 1,
      aux_sym_select_statement_token3,
    ACTIONS(962), 1,
      aux_sym_insert_values_spec_token1,
    STATE(88), 1,
      sym_insert_values_spec,
  [10064] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [10074] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    STATE(469), 1,
      aux_sym_assignment_map_repeat1,
  [10084] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(400), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10094] = 3,
    ACTIONS(1101), 1,
      sym_object_name,
    ACTIONS(1199), 1,
      aux_sym_delete_statement_token2,
    STATE(661), 1,
      sym_user_name,
  [10104] = 3,
    ACTIONS(1097), 1,
      sym_object_name,
    ACTIONS(1201), 1,
      aux_sym_delete_statement_token2,
    STATE(757), 1,
      sym_type_name,
  [10114] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_clustering_key_list_repeat1,
  [10124] = 3,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(544), 1,
      sym_typed_name,
  [10134] = 3,
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1205), 1,
      aux_sym_primary_key_column_token1,
    STATE(37), 1,
      aux_sym_relation_elements_repeat1,
  [10144] = 3,
    ACTIONS(1207), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1210), 1,
      aux_sym_primary_key_column_token1,
    STATE(500), 1,
      aux_sym_materialized_view_where_repeat1,
  [10154] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_relation_element_repeat2,
  [10164] = 3,
    ACTIONS(1172), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token2,
    STATE(247), 1,
      sym_materialized_view_name,
  [10174] = 3,
    ACTIONS(1085), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token2,
    STATE(780), 1,
      sym_aggregate_name,
  [10184] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(413), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10194] = 3,
    ACTIONS(1079), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token2,
    STATE(119), 1,
      sym_role_name,
  [10204] = 3,
    ACTIONS(1075), 1,
      sym_object_name,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token2,
    STATE(784), 1,
      sym_function_name,
  [10214] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(412), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10224] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token2,
    STATE(787), 1,
      sym_keyspace_name,
  [10234] = 3,
    ACTIONS(1058), 1,
      sym_object_name,
    ACTIONS(1224), 1,
      aux_sym_delete_statement_token2,
    STATE(794), 1,
      sym_table_name,
  [10244] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_create_function_repeat1,
  [10254] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_create_function_repeat1,
  [10264] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_data_type_definition_repeat1,
  [10274] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
    STATE(486), 1,
      aux_sym_option_hash_repeat1,
  [10284] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_create_function_repeat1,
  [10294] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      aux_sym_where_spec_token1,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [10304] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(530), 1,
      aux_sym_assignment_set_repeat1,
  [10314] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(758), 1,
      sym_return_mode,
  [10324] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
    STATE(489), 1,
      aux_sym_replication_list_repeat1,
  [10334] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_create_function_repeat1,
  [10344] = 3,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(520), 1,
      aux_sym_select_elements_repeat1,
  [10354] = 3,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      aux_sym_expression_list_repeat1,
  [10364] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      aux_sym_assignment_set_repeat1,
  [10374] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [10384] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RBRACK,
    STATE(393), 1,
      aux_sym_assignment_set_repeat1,
  [10394] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_init_cond_hash_repeat1,
  [10404] = 3,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      aux_sym_from_spec_token1,
    STATE(434), 1,
      aux_sym_delete_column_list_repeat1,
  [10414] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_function_args_repeat1,
  [10424] = 2,
    ACTIONS(1273), 1,
      anon_sym_LBRACK,
    ACTIONS(1271), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10432] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(399), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10442] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_assignment_set_repeat1,
  [10452] = 2,
    ACTIONS(1277), 1,
      aux_sym_resource_token1,
    ACTIONS(1279), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [10460] = 2,
    ACTIONS(1283), 1,
      aux_sym_select_element_token1,
    ACTIONS(1281), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10468] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      aux_sym_from_spec_token1,
    STATE(533), 1,
      aux_sym_delete_column_list_repeat1,
  [10478] = 1,
    ACTIONS(1290), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10484] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(431), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10494] = 3,
    ACTIONS(958), 1,
      aux_sym_select_statement_token3,
    ACTIONS(962), 1,
      aux_sym_insert_values_spec_token1,
    STATE(69), 1,
      sym_insert_values_spec,
  [10504] = 3,
    ACTIONS(1292), 1,
      sym_object_name,
    STATE(454), 1,
      sym_column_definition,
    STATE(876), 1,
      sym_column_definition_list,
  [10514] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_typed_name,
  [10524] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [10534] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_init_cond_hash_repeat1,
  [10544] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      aux_sym_from_spec_token1,
    STATE(463), 1,
      aux_sym_select_elements_repeat1,
  [10554] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(411), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10564] = 3,
    ACTIONS(1302), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1304), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1306), 1,
      aux_sym_update_token1,
  [10574] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_create_function_repeat1,
  [10584] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(685), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10594] = 3,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [10604] = 3,
    ACTIONS(203), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1315), 1,
      aux_sym_update_token2,
    STATE(986), 1,
      sym_using_ttl_timestamp,
  [10614] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_GT,
    STATE(512), 1,
      aux_sym_data_type_definition_repeat1,
  [10624] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_init_cond_hash_repeat1,
  [10634] = 3,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(407), 1,
      sym_assignment_element,
    STATE(810), 1,
      sym_indexed_column,
  [10644] = 3,
    ACTIONS(1052), 1,
      aux_sym_create_function_token1,
    ACTIONS(1054), 1,
      aux_sym_return_mode_token1,
    STATE(694), 1,
      sym_return_mode,
  [10654] = 1,
    ACTIONS(1324), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10660] = 3,
    ACTIONS(1085), 1,
      sym_object_name,
    ACTIONS(1326), 1,
      aux_sym_delete_statement_token2,
    STATE(833), 1,
      sym_aggregate_name,
  [10670] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      aux_sym_expression_list_repeat1,
  [10680] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      sym_typed_name,
  [10690] = 3,
    ACTIONS(1058), 1,
      sym_object_name,
    ACTIONS(1330), 1,
      aux_sym_truncate_token2,
    STATE(276), 1,
      sym_table_name,
  [10700] = 3,
    ACTIONS(1075), 1,
      sym_object_name,
    ACTIONS(1332), 1,
      aux_sym_delete_statement_token2,
    STATE(971), 1,
      sym_function_name,
  [10710] = 3,
    ACTIONS(1292), 1,
      sym_object_name,
    STATE(454), 1,
      sym_column_definition,
    STATE(737), 1,
      sym_column_definition_list,
  [10720] = 2,
    ACTIONS(1336), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1334), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10728] = 3,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_column_definition_list_repeat1,
  [10738] = 2,
    ACTIONS(1343), 1,
      aux_sym_primary_key_column_token1,
    STATE(123), 1,
      sym_primary_key_element,
  [10745] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(394), 1,
      sym_table_name,
  [10752] = 2,
    ACTIONS(1347), 1,
      sym_object_name,
    STATE(199), 1,
      sym_type_name,
  [10759] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(203), 1,
      sym_table_name,
  [10766] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_assignment_tuple,
  [10773] = 2,
    ACTIONS(874), 1,
      aux_sym__decimal_literal_token1,
    STATE(713), 1,
      sym__decimal_literal,
  [10780] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(988), 1,
      sym_trigger_name,
  [10787] = 1,
    ACTIONS(1322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10792] = 1,
    ACTIONS(1351), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10797] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(209), 1,
      sym_aggregate_name,
  [10804] = 1,
    ACTIONS(1313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10809] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(211), 1,
      sym_role_name,
  [10816] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(213), 1,
      sym_function_name,
  [10823] = 1,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10828] = 2,
    ACTIONS(1361), 1,
      sym_object_name,
    STATE(216), 1,
      sym_keyspace_name,
  [10835] = 2,
    ACTIONS(1363), 1,
      sym_object_name,
    STATE(568), 1,
      sym_init_cond_hash_item,
  [10842] = 1,
    ACTIONS(1365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10847] = 2,
    ACTIONS(1367), 1,
      aux_sym_from_spec_token1,
    STATE(38), 1,
      sym_from_spec,
  [10854] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(56), 1,
      sym_table_name,
  [10861] = 1,
    ACTIONS(1341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10866] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(662), 1,
      sym_user_name,
  [10873] = 2,
    ACTIONS(1367), 1,
      aux_sym_from_spec_token1,
    STATE(410), 1,
      sym_from_spec,
  [10880] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(722), 1,
      sym_table_name,
  [10887] = 2,
    ACTIONS(1347), 1,
      sym_object_name,
    STATE(755), 1,
      sym_type_name,
  [10894] = 1,
    ACTIONS(1371), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10899] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(390), 1,
      sym_table_name,
  [10906] = 2,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(219), 1,
      sym_index_name,
  [10913] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(270), 1,
      sym_table_name,
  [10920] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(594), 1,
      sym_column_not_null,
  [10927] = 2,
    ACTIONS(1377), 1,
      sym__string_literal,
    STATE(518), 1,
      sym_replication_list_item,
  [10934] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(224), 1,
      sym_table_name,
  [10941] = 1,
    ACTIONS(1379), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10946] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(759), 1,
      sym_trigger_name,
  [10953] = 1,
    ACTIONS(1210), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10958] = 2,
    ACTIONS(1381), 1,
      aux_sym_role_with_option_token1,
    STATE(74), 1,
      sym_user_password,
  [10965] = 2,
    ACTIONS(1343), 1,
      aux_sym_primary_key_column_token1,
    STATE(126), 1,
      sym_primary_key_element,
  [10972] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(519), 1,
      sym_typed_name,
  [10979] = 2,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    STATE(117), 1,
      sym_where_spec,
  [10986] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(925), 1,
      sym_clustering_key_list,
  [10993] = 2,
    ACTIONS(1385), 1,
      sym__string_literal,
    STATE(513), 1,
      sym_option_hash_item,
  [11000] = 2,
    ACTIONS(1387), 1,
      sym__string_literal,
    STATE(231), 1,
      sym_trigger_class,
  [11007] = 1,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11012] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(778), 1,
      sym_aggregate_name,
  [11019] = 1,
    ACTIONS(1060), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11024] = 2,
    ACTIONS(1391), 1,
      aux_sym_where_spec_token1,
    STATE(596), 1,
      sym_materialized_view_where,
  [11031] = 1,
    ACTIONS(1393), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11036] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(97), 1,
      sym_role_name,
  [11043] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(804), 1,
      sym_function_name,
  [11050] = 2,
    ACTIONS(1387), 1,
      sym__string_literal,
    STATE(215), 1,
      sym_trigger_class,
  [11057] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(511), 1,
      sym_typed_name,
  [11064] = 2,
    ACTIONS(1361), 1,
      sym_object_name,
    STATE(816), 1,
      sym_keyspace_name,
  [11071] = 1,
    ACTIONS(1395), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [11076] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(706), 1,
      sym_function_name,
  [11083] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(848), 1,
      sym_table_name,
  [11090] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(708), 1,
      sym_aggregate_name,
  [11097] = 1,
    ACTIONS(1397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11102] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(277), 1,
      sym_materialized_view_name,
  [11109] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(605), 1,
      sym_table_name,
  [11116] = 2,
    ACTIONS(1361), 1,
      sym_object_name,
    STATE(712), 1,
      sym_keyspace_name,
  [11123] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(152), 1,
      sym_role_name,
  [11130] = 2,
    ACTIONS(1401), 1,
      aux_sym_durable_writes_token1,
    STATE(305), 1,
      sym_durable_writes,
  [11137] = 2,
    ACTIONS(1347), 1,
      sym_object_name,
    STATE(363), 1,
      sym_type_name,
  [11144] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(884), 1,
      sym_clustering_key_list,
  [11151] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(684), 1,
      sym_user_name,
  [11158] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(958), 1,
      sym_table_name,
  [11165] = 2,
    ACTIONS(1403), 1,
      anon_sym_EQ,
    ACTIONS(1405), 1,
      anon_sym_LBRACK,
  [11172] = 2,
    ACTIONS(1367), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [11179] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(429), 1,
      sym_column_not_null,
  [11186] = 1,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11191] = 1,
    ACTIONS(1407), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11196] = 1,
    ACTIONS(1142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11201] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(878), 1,
      sym_table_name,
  [11208] = 1,
    ACTIONS(1409), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11213] = 2,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    STATE(94), 1,
      sym_where_spec,
  [11220] = 2,
    ACTIONS(1411), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_replication_list,
  [11227] = 2,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
  [11234] = 2,
    ACTIONS(1417), 1,
      sym_object_name,
    STATE(853), 1,
      sym_partition_key_list,
  [11241] = 2,
    ACTIONS(1419), 1,
      sym_object_name,
    STATE(178), 1,
      sym_alter_type_rename_item,
  [11248] = 2,
    ACTIONS(1421), 1,
      sym_object_name,
    STATE(643), 1,
      sym_delete_column_item,
  [11255] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(851), 1,
      sym_column_list,
  [11262] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(92), 1,
      sym_typed_name,
  [11269] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(814), 1,
      sym_table_name,
  [11276] = 1,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11281] = 2,
    ACTIONS(121), 1,
      aux_sym_where_spec_token1,
    STATE(104), 1,
      sym_where_spec,
  [11288] = 2,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_option_hash,
  [11295] = 2,
    ACTIONS(1391), 1,
      aux_sym_where_spec_token1,
    STATE(561), 1,
      sym_materialized_view_where,
  [11302] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(831), 1,
      sym_column_list,
  [11309] = 2,
    ACTIONS(1411), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_replication_list,
  [11316] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(198), 1,
      sym_user_name,
  [11323] = 1,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11328] = 1,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11333] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(894), 1,
      sym_materialized_view_name,
  [11340] = 2,
    ACTIONS(1385), 1,
      sym__string_literal,
    STATE(629), 1,
      sym_option_hash_item,
  [11347] = 2,
    ACTIONS(874), 1,
      aux_sym__decimal_literal_token1,
    STATE(177), 1,
      sym__decimal_literal,
  [11354] = 1,
    ACTIONS(1427), 2,
      sym__string_literal,
      sym__float_literal,
  [11359] = 2,
    ACTIONS(1423), 1,
      sym_object_name,
    STATE(888), 1,
      sym_column_list,
  [11366] = 2,
    ACTIONS(1377), 1,
      sym__string_literal,
    STATE(631), 1,
      sym_replication_list_item,
  [11373] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(501), 1,
      sym_assignment_tuple,
  [11380] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_assignment_tuple,
  [11387] = 2,
    ACTIONS(1411), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_replication_list,
  [11394] = 2,
    ACTIONS(1429), 1,
      aux_sym_create_keyspace_token1,
    STATE(236), 1,
      sym_user_with,
  [11401] = 2,
    ACTIONS(1429), 1,
      aux_sym_create_keyspace_token1,
    STATE(222), 1,
      sym_user_with,
  [11408] = 1,
    ACTIONS(1431), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11413] = 2,
    ACTIONS(1433), 1,
      aux_sym_resource_token5,
    ACTIONS(1435), 1,
      aux_sym_drop_aggregate_token1,
  [11420] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(333), 1,
      sym_table_name,
  [11427] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11432] = 2,
    ACTIONS(1419), 1,
      sym_object_name,
    STATE(148), 1,
      sym_alter_type_rename_item,
  [11439] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(470), 1,
      sym_assignment_tuple,
  [11446] = 1,
    ACTIONS(1255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11451] = 2,
    ACTIONS(1439), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1441), 1,
      sym_object_name,
  [11458] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(140), 1,
      sym_typed_name,
  [11465] = 1,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11470] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_assignment_tuple,
  [11477] = 1,
    ACTIONS(1443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11482] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(220), 1,
      sym_table_name,
  [11489] = 2,
    ACTIONS(1401), 1,
      aux_sym_durable_writes_token1,
    STATE(259), 1,
      sym_durable_writes,
  [11496] = 2,
    ACTIONS(1292), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
  [11503] = 2,
    ACTIONS(1367), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [11510] = 2,
    ACTIONS(1445), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1447), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11517] = 1,
    ACTIONS(1449), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11522] = 1,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11527] = 1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11532] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(100), 1,
      sym_materialized_view_name,
  [11539] = 2,
    ACTIONS(1429), 1,
      aux_sym_create_keyspace_token1,
    STATE(281), 1,
      sym_user_with,
  [11546] = 1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11551] = 2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(145), 1,
      sym_typed_name,
  [11558] = 2,
    ACTIONS(1401), 1,
      aux_sym_durable_writes_token1,
    STATE(253), 1,
      sym_durable_writes,
  [11565] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(646), 1,
      sym_table_name,
  [11572] = 2,
    ACTIONS(1367), 1,
      aux_sym_from_spec_token1,
    STATE(408), 1,
      sym_from_spec,
  [11579] = 1,
    ACTIONS(1453), 1,
      aux_sym_insert_statement_token3,
  [11583] = 1,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [11587] = 1,
    ACTIONS(1457), 1,
      aux_sym_return_mode_token2,
  [11591] = 1,
    ACTIONS(1459), 1,
      aux_sym_create_function_token2,
  [11595] = 1,
    ACTIONS(1461), 1,
      aux_sym_create_function_token1,
  [11599] = 1,
    ACTIONS(1463), 1,
      anon_sym_COLON,
  [11603] = 1,
    ACTIONS(1465), 1,
      aux_sym_create_keyspace_token2,
  [11607] = 1,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [11611] = 1,
    ACTIONS(1469), 1,
      aux_sym_create_aggregate_token4,
  [11615] = 1,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [11619] = 1,
    ACTIONS(1473), 1,
      sym_object_name,
  [11623] = 1,
    ACTIONS(1475), 1,
      sym_object_name,
  [11627] = 1,
    ACTIONS(1477), 1,
      aux_sym_select_statement_token1,
  [11631] = 1,
    ACTIONS(1479), 1,
      sym_object_name,
  [11635] = 1,
    ACTIONS(1481), 1,
      sym_object_name,
  [11639] = 1,
    ACTIONS(1483), 1,
      aux_sym_resource_token2,
  [11643] = 1,
    ACTIONS(1485), 1,
      anon_sym_LPAREN,
  [11647] = 1,
    ACTIONS(1487), 1,
      sym_object_name,
  [11651] = 1,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
  [11655] = 1,
    ACTIONS(1491), 1,
      aux_sym_create_aggregate_token3,
  [11659] = 1,
    ACTIONS(1493), 1,
      anon_sym_COLON,
  [11663] = 1,
    ACTIONS(1495), 1,
      anon_sym_EQ,
  [11667] = 1,
    ACTIONS(1497), 1,
      aux_sym_create_keyspace_token1,
  [11671] = 1,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
  [11675] = 1,
    ACTIONS(1501), 1,
      aux_sym_update_token2,
  [11679] = 1,
    ACTIONS(1503), 1,
      sym_object_name,
  [11683] = 1,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [11687] = 1,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [11691] = 1,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
  [11695] = 1,
    ACTIONS(1511), 1,
      sym_object_name,
  [11699] = 1,
    ACTIONS(1513), 1,
      aux_sym_delete_statement_token3,
  [11703] = 1,
    ACTIONS(1515), 1,
      sym_object_name,
  [11707] = 1,
    ACTIONS(1517), 1,
      anon_sym_LPAREN,
  [11711] = 1,
    ACTIONS(1519), 1,
      aux_sym_delete_statement_token3,
  [11715] = 1,
    ACTIONS(1521), 1,
      aux_sym_delete_statement_token3,
  [11719] = 1,
    ACTIONS(1523), 1,
      aux_sym_create_index_token3,
  [11723] = 1,
    ACTIONS(1525), 1,
      sym_object_name,
  [11727] = 1,
    ACTIONS(1527), 1,
      aux_sym_using_timestamp_spec_token2,
  [11731] = 1,
    ACTIONS(1529), 1,
      aux_sym_delete_statement_token3,
  [11735] = 1,
    ACTIONS(1531), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11739] = 1,
    ACTIONS(1533), 1,
      aux_sym_delete_statement_token3,
  [11743] = 1,
    ACTIONS(1535), 1,
      aux_sym_delete_statement_token3,
  [11747] = 1,
    ACTIONS(1537), 1,
      aux_sym_select_statement_token5,
  [11751] = 1,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
  [11755] = 1,
    ACTIONS(1541), 1,
      aux_sym_delete_statement_token3,
  [11759] = 1,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
  [11763] = 1,
    ACTIONS(1545), 1,
      aux_sym_delete_statement_token3,
  [11767] = 1,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [11771] = 1,
    ACTIONS(1549), 1,
      aux_sym_from_spec_token1,
  [11775] = 1,
    ACTIONS(1551), 1,
      aux_sym_delete_statement_token3,
  [11779] = 1,
    ACTIONS(1553), 1,
      aux_sym_delete_statement_token3,
  [11783] = 1,
    ACTIONS(1555), 1,
      sym_object_name,
  [11787] = 1,
    ACTIONS(1557), 1,
      sym_object_name,
  [11791] = 1,
    ACTIONS(1559), 1,
      aux_sym_delete_statement_token3,
  [11795] = 1,
    ACTIONS(1561), 1,
      aux_sym_grant_token2,
  [11799] = 1,
    ACTIONS(1563), 1,
      sym_object_name,
  [11803] = 1,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
  [11807] = 1,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
  [11811] = 1,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
  [11815] = 1,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
  [11819] = 1,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
  [11823] = 1,
    ACTIONS(1575), 1,
      aux_sym_order_spec_token2,
  [11827] = 1,
    ACTIONS(1577), 1,
      aux_sym_update_token2,
  [11831] = 1,
    ACTIONS(1579), 1,
      anon_sym_LPAREN,
  [11835] = 1,
    ACTIONS(1581), 1,
      aux_sym_insert_statement_token3,
  [11839] = 1,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
  [11843] = 1,
    ACTIONS(1585), 1,
      anon_sym_EQ,
  [11847] = 1,
    ACTIONS(1587), 1,
      anon_sym_LPAREN,
  [11851] = 1,
    ACTIONS(1589), 1,
      aux_sym_create_function_token1,
  [11855] = 1,
    ACTIONS(1591), 1,
      aux_sym_using_timestamp_spec_token1,
  [11859] = 1,
    ACTIONS(1593), 1,
      sym_object_name,
  [11863] = 1,
    ACTIONS(1595), 1,
      aux_sym_return_mode_token2,
  [11867] = 1,
    ACTIONS(1597), 1,
      aux_sym_create_function_token1,
  [11871] = 1,
    ACTIONS(1599), 1,
      sym_object_name,
  [11875] = 1,
    ACTIONS(1601), 1,
      aux_sym_create_function_token2,
  [11879] = 1,
    ACTIONS(1603), 1,
      aux_sym_insert_statement_token3,
  [11883] = 1,
    ACTIONS(1605), 1,
      aux_sym_select_statement_token5,
  [11887] = 1,
    ACTIONS(1607), 1,
      aux_sym_select_statement_token5,
  [11891] = 1,
    ACTIONS(1609), 1,
      aux_sym_using_timestamp_spec_token1,
  [11895] = 1,
    ACTIONS(1611), 1,
      aux_sym_select_statement_token5,
  [11899] = 1,
    ACTIONS(1613), 1,
      aux_sym_create_aggregate_token3,
  [11903] = 1,
    ACTIONS(1615), 1,
      sym_object_name,
  [11907] = 1,
    ACTIONS(1617), 1,
      aux_sym_order_spec_token2,
  [11911] = 1,
    ACTIONS(1619), 1,
      anon_sym_RBRACK,
  [11915] = 1,
    ACTIONS(1621), 1,
      sym_object_name,
  [11919] = 1,
    ACTIONS(1623), 1,
      sym_object_name,
  [11923] = 1,
    ACTIONS(1625), 1,
      sym_object_name,
  [11927] = 1,
    ACTIONS(1627), 1,
      aux_sym_create_aggregate_token3,
  [11931] = 1,
    ACTIONS(1629), 1,
      anon_sym_LPAREN,
  [11935] = 1,
    ACTIONS(1631), 1,
      sym_object_name,
  [11939] = 1,
    ACTIONS(1633), 1,
      anon_sym_LPAREN,
  [11943] = 1,
    ACTIONS(1635), 1,
      sym_object_name,
  [11947] = 1,
    ACTIONS(1637), 1,
      aux_sym_insert_statement_token3,
  [11951] = 1,
    ACTIONS(1639), 1,
      aux_sym_insert_statement_token3,
  [11955] = 1,
    ACTIONS(1641), 1,
      anon_sym_LPAREN,
  [11959] = 1,
    ACTIONS(1643), 1,
      aux_sym_insert_statement_token3,
  [11963] = 1,
    ACTIONS(1645), 1,
      aux_sym_insert_statement_token3,
  [11967] = 1,
    ACTIONS(1647), 1,
      aux_sym_create_keyspace_token1,
  [11971] = 1,
    ACTIONS(1649), 1,
      aux_sym_insert_statement_token3,
  [11975] = 1,
    ACTIONS(1651), 1,
      aux_sym_create_index_token3,
  [11979] = 1,
    ACTIONS(1653), 1,
      aux_sym__decimal_literal_token1,
  [11983] = 1,
    ACTIONS(1655), 1,
      aux_sym_insert_statement_token3,
  [11987] = 1,
    ACTIONS(1657), 1,
      sym__boolean_literal,
  [11991] = 1,
    ACTIONS(1659), 1,
      aux_sym_create_index_token3,
  [11995] = 1,
    ACTIONS(1661), 1,
      anon_sym_LPAREN,
  [11999] = 1,
    ACTIONS(1663), 1,
      aux_sym_insert_statement_token3,
  [12003] = 1,
    ACTIONS(1665), 1,
      sym_object_name,
  [12007] = 1,
    ACTIONS(1667), 1,
      sym__boolean_literal,
  [12011] = 1,
    ACTIONS(1669), 1,
      sym__string_literal,
  [12015] = 1,
    ACTIONS(1671), 1,
      aux_sym_insert_statement_token3,
  [12019] = 1,
    ACTIONS(1673), 1,
      anon_sym_LPAREN,
  [12023] = 1,
    ACTIONS(1675), 1,
      aux_sym_create_function_token1,
  [12027] = 1,
    ACTIONS(1677), 1,
      aux_sym_create_index_token3,
  [12031] = 1,
    ACTIONS(1679), 1,
      aux_sym_constant_token2,
  [12035] = 1,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
  [12039] = 1,
    ACTIONS(1683), 1,
      sym_object_name,
  [12043] = 1,
    ACTIONS(1685), 1,
      anon_sym_LPAREN,
  [12047] = 1,
    ACTIONS(1687), 1,
      aux_sym_delete_statement_token3,
  [12051] = 1,
    ACTIONS(1689), 1,
      anon_sym_RPAREN,
  [12055] = 1,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
  [12059] = 1,
    ACTIONS(1693), 1,
      anon_sym_EQ,
  [12063] = 1,
    ACTIONS(1695), 1,
      anon_sym_RPAREN,
  [12067] = 1,
    ACTIONS(1697), 1,
      aux_sym_delete_statement_token3,
  [12071] = 1,
    ACTIONS(1699), 1,
      anon_sym_LPAREN,
  [12075] = 1,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
  [12079] = 1,
    ACTIONS(1703), 1,
      aux_sym_using_timestamp_spec_token2,
  [12083] = 1,
    ACTIONS(1705), 1,
      aux_sym_create_keyspace_token1,
  [12087] = 1,
    ACTIONS(1707), 1,
      sym__boolean_literal,
  [12091] = 1,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
  [12095] = 1,
    ACTIONS(1711), 1,
      aux_sym_create_function_token1,
  [12099] = 1,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [12103] = 1,
    ACTIONS(1715), 1,
      aux_sym_create_function_token1,
  [12107] = 1,
    ACTIONS(1717), 1,
      aux_sym_select_element_token1,
  [12111] = 1,
    ACTIONS(1719), 1,
      sym_object_name,
  [12115] = 1,
    ACTIONS(1721), 1,
      aux_sym_create_function_token2,
  [12119] = 1,
    ACTIONS(1723), 1,
      aux_sym_delete_statement_token3,
  [12123] = 1,
    ACTIONS(1725), 1,
      sym_object_name,
  [12127] = 1,
    ACTIONS(1727), 1,
      sym_object_name,
  [12131] = 1,
    ACTIONS(1729), 1,
      anon_sym_RPAREN,
  [12135] = 1,
    ACTIONS(1731), 1,
      sym_object_name,
  [12139] = 1,
    ACTIONS(1733), 1,
      aux_sym_create_aggregate_token5,
  [12143] = 1,
    ACTIONS(1735), 1,
      aux_sym_from_spec_token1,
  [12147] = 1,
    ACTIONS(1737), 1,
      aux_sym_create_keyspace_token2,
  [12151] = 1,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
  [12155] = 1,
    ACTIONS(1741), 1,
      sym_object_name,
  [12159] = 1,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [12163] = 1,
    ACTIONS(1745), 1,
      anon_sym_RPAREN,
  [12167] = 1,
    ACTIONS(1747), 1,
      aux_sym_create_aggregate_token4,
  [12171] = 1,
    ACTIONS(1749), 1,
      anon_sym_STAR,
  [12175] = 1,
    ACTIONS(1751), 1,
      aux_sym_constant_token2,
  [12179] = 1,
    ACTIONS(1753), 1,
      anon_sym_LPAREN,
  [12183] = 1,
    ACTIONS(1755), 1,
      anon_sym_RPAREN,
  [12187] = 1,
    ACTIONS(1757), 1,
      aux_sym_delete_statement_token3,
  [12191] = 1,
    ACTIONS(1759), 1,
      aux_sym_create_index_token3,
  [12195] = 1,
    ACTIONS(1761), 1,
      sym_object_name,
  [12199] = 1,
    ACTIONS(1763), 1,
      aux_sym_insert_statement_token2,
  [12203] = 1,
    ACTIONS(1765), 1,
      sym_object_name,
  [12207] = 1,
    ACTIONS(1767), 1,
      anon_sym_EQ,
  [12211] = 1,
    ACTIONS(1769), 1,
      anon_sym_LPAREN,
  [12215] = 1,
    ACTIONS(1771), 1,
      anon_sym_COLON,
  [12219] = 1,
    ACTIONS(1773), 1,
      aux_sym_delete_statement_token3,
  [12223] = 1,
    ACTIONS(1775), 1,
      anon_sym_RPAREN,
  [12227] = 1,
    ACTIONS(1777), 1,
      aux_sym_insert_statement_token3,
  [12231] = 1,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
  [12235] = 1,
    ACTIONS(1781), 1,
      anon_sym_LPAREN,
  [12239] = 1,
    ACTIONS(1783), 1,
      aux_sym_delete_statement_token3,
  [12243] = 1,
    ACTIONS(1785), 1,
      aux_sym_drop_materialized_view_token2,
  [12247] = 1,
    ACTIONS(1787), 1,
      aux_sym__decimal_literal_token1,
  [12251] = 1,
    ACTIONS(1789), 1,
      aux_sym__decimal_literal_token1,
  [12255] = 1,
    ACTIONS(1791), 1,
      aux_sym_create_function_token2,
  [12259] = 1,
    ACTIONS(1793), 1,
      aux_sym__decimal_literal_token1,
  [12263] = 1,
    ACTIONS(1795), 1,
      aux_sym_create_function_token1,
  [12267] = 1,
    ACTIONS(1797), 1,
      sym__code_block,
  [12271] = 1,
    ACTIONS(1799), 1,
      aux_sym_select_element_token1,
  [12275] = 1,
    ACTIONS(1801), 1,
      sym_object_name,
  [12279] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_aggregate_token4,
  [12283] = 1,
    ACTIONS(1805), 1,
      sym_object_name,
  [12287] = 1,
    ACTIONS(1807), 1,
      aux_sym_update_token2,
  [12291] = 1,
    ACTIONS(804), 1,
      aux_sym_column_not_null_token1,
  [12295] = 1,
    ACTIONS(1809), 1,
      aux_sym__decimal_literal_token1,
  [12299] = 1,
    ACTIONS(1811), 1,
      aux_sym_delete_statement_token3,
  [12303] = 1,
    ACTIONS(1813), 1,
      aux_sym_insert_statement_token3,
  [12307] = 1,
    ACTIONS(1815), 1,
      anon_sym_RPAREN,
  [12311] = 1,
    ACTIONS(1817), 1,
      aux_sym_create_aggregate_token3,
  [12315] = 1,
    ACTIONS(1819), 1,
      aux_sym_create_index_token3,
  [12319] = 1,
    ACTIONS(1821), 1,
      aux_sym_create_index_token3,
  [12323] = 1,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
  [12327] = 1,
    ACTIONS(1825), 1,
      aux_sym_select_statement_token5,
  [12331] = 1,
    ACTIONS(1827), 1,
      anon_sym_LPAREN,
  [12335] = 1,
    ACTIONS(1829), 1,
      sym_object_name,
  [12339] = 1,
    ACTIONS(1831), 1,
      aux_sym_drop_materialized_view_token2,
  [12343] = 1,
    ACTIONS(1833), 1,
      anon_sym_EQ,
  [12347] = 1,
    ACTIONS(1835), 1,
      anon_sym_COMMA,
  [12351] = 1,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
  [12355] = 1,
    ACTIONS(1837), 1,
      anon_sym_RPAREN,
  [12359] = 1,
    ACTIONS(1839), 1,
      aux_sym_delete_statement_token3,
  [12363] = 1,
    ACTIONS(1841), 1,
      sym_object_name,
  [12367] = 1,
    ACTIONS(1843), 1,
      aux_sym_create_function_token2,
  [12371] = 1,
    ACTIONS(1845), 1,
      aux_sym_from_spec_token1,
  [12375] = 1,
    ACTIONS(1847), 1,
      anon_sym_EQ,
  [12379] = 1,
    ACTIONS(1849), 1,
      sym__code_block,
  [12383] = 1,
    ACTIONS(1851), 1,
      aux_sym_select_element_token1,
  [12387] = 1,
    ACTIONS(1853), 1,
      sym_object_name,
  [12391] = 1,
    ACTIONS(1855), 1,
      aux_sym_create_aggregate_token6,
  [12395] = 1,
    ACTIONS(1857), 1,
      aux_sym_select_element_token1,
  [12399] = 1,
    ACTIONS(1859), 1,
      aux_sym_insert_statement_token3,
  [12403] = 1,
    ACTIONS(1861), 1,
      anon_sym_EQ,
  [12407] = 1,
    ACTIONS(1863), 1,
      sym_object_name,
  [12411] = 1,
    ACTIONS(1865), 1,
      anon_sym_EQ,
  [12415] = 1,
    ACTIONS(1867), 1,
      anon_sym_EQ,
  [12419] = 1,
    ACTIONS(1869), 1,
      aux_sym_create_function_token1,
  [12423] = 1,
    ACTIONS(1871), 1,
      aux_sym_select_element_token1,
  [12427] = 1,
    ACTIONS(1873), 1,
      sym_object_name,
  [12431] = 1,
    ACTIONS(1875), 1,
      aux_sym_create_aggregate_token5,
  [12435] = 1,
    ACTIONS(1877), 1,
      aux_sym_create_aggregate_token2,
  [12439] = 1,
    ACTIONS(1879), 1,
      aux_sym_delete_statement_token3,
  [12443] = 1,
    ACTIONS(1881), 1,
      sym_object_name,
  [12447] = 1,
    ACTIONS(1883), 1,
      anon_sym_RPAREN,
  [12451] = 1,
    ACTIONS(1885), 1,
      aux_sym_select_element_token1,
  [12455] = 1,
    ACTIONS(1887), 1,
      sym_object_name,
  [12459] = 1,
    ACTIONS(1889), 1,
      aux_sym_create_function_token2,
  [12463] = 1,
    ACTIONS(1891), 1,
      aux_sym_select_statement_token5,
  [12467] = 1,
    ACTIONS(1893), 1,
      sym__code_block,
  [12471] = 1,
    ACTIONS(1895), 1,
      aux_sym_create_aggregate_token5,
  [12475] = 1,
    ACTIONS(1897), 1,
      aux_sym_delete_statement_token3,
  [12479] = 1,
    ACTIONS(1899), 1,
      sym_object_name,
  [12483] = 1,
    ACTIONS(1901), 1,
      aux_sym_constant_token2,
  [12487] = 1,
    ACTIONS(1903), 1,
      sym_object_name,
  [12491] = 1,
    ACTIONS(1905), 1,
      aux_sym_delete_statement_token3,
  [12495] = 1,
    ACTIONS(1907), 1,
      aux_sym_delete_statement_token3,
  [12499] = 1,
    ACTIONS(1909), 1,
      sym_object_name,
  [12503] = 1,
    ACTIONS(1911), 1,
      aux_sym_drop_materialized_view_token2,
  [12507] = 1,
    ACTIONS(1913), 1,
      aux_sym_create_function_token1,
  [12511] = 1,
    ACTIONS(1915), 1,
      aux_sym_create_aggregate_token4,
  [12515] = 1,
    ACTIONS(1917), 1,
      sym_object_name,
  [12519] = 1,
    ACTIONS(1919), 1,
      anon_sym_RPAREN,
  [12523] = 1,
    ACTIONS(1921), 1,
      sym__code_block,
  [12527] = 1,
    ACTIONS(1923), 1,
      aux_sym_select_element_token1,
  [12531] = 1,
    ACTIONS(1925), 1,
      sym_object_name,
  [12535] = 1,
    ACTIONS(1927), 1,
      aux_sym_grant_token2,
  [12539] = 1,
    ACTIONS(1929), 1,
      sym_object_name,
  [12543] = 1,
    ACTIONS(1931), 1,
      aux_sym_select_statement_token1,
  [12547] = 1,
    ACTIONS(1933), 1,
      aux_sym_drop_type_token1,
  [12551] = 1,
    ACTIONS(1935), 1,
      aux_sym_create_function_token1,
  [12555] = 1,
    ACTIONS(1937), 1,
      anon_sym_EQ,
  [12559] = 1,
    ACTIONS(1939), 1,
      aux_sym_constant_token2,
  [12563] = 1,
    ACTIONS(1941), 1,
      aux_sym_create_index_token3,
  [12567] = 1,
    ACTIONS(1943), 1,
      aux_sym_create_function_token2,
  [12571] = 1,
    ACTIONS(1945), 1,
      aux_sym_grant_token2,
  [12575] = 1,
    ACTIONS(1947), 1,
      aux_sym_create_keyspace_token2,
  [12579] = 1,
    ACTIONS(1949), 1,
      aux_sym_create_aggregate_token6,
  [12583] = 1,
    ACTIONS(1951), 1,
      anon_sym_RPAREN,
  [12587] = 1,
    ACTIONS(1953), 1,
      sym__code_block,
  [12591] = 1,
    ACTIONS(1955), 1,
      aux_sym_select_element_token1,
  [12595] = 1,
    ACTIONS(1957), 1,
      aux_sym_create_aggregate_token6,
  [12599] = 1,
    ACTIONS(1959), 1,
      sym_object_name,
  [12603] = 1,
    ACTIONS(1961), 1,
      anon_sym_COLON,
  [12607] = 1,
    ACTIONS(1963), 1,
      anon_sym_EQ,
  [12611] = 1,
    ACTIONS(1965), 1,
      sym_object_name,
  [12615] = 1,
    ACTIONS(1967), 1,
      anon_sym_EQ,
  [12619] = 1,
    ACTIONS(1969), 1,
      aux_sym_begin_batch_token4,
  [12623] = 1,
    ACTIONS(1971), 1,
      sym_object_name,
  [12627] = 1,
    ACTIONS(1973), 1,
      aux_sym_create_function_token2,
  [12631] = 1,
    ACTIONS(1975), 1,
      aux_sym_create_aggregate_token5,
  [12635] = 1,
    ACTIONS(1977), 1,
      aux_sym_order_spec_token1,
  [12639] = 1,
    ACTIONS(1979), 1,
      sym_object_name,
  [12643] = 1,
    ACTIONS(1981), 1,
      sym__code_block,
  [12647] = 1,
    ACTIONS(1983), 1,
      aux_sym_compact_storage_token2,
  [12651] = 1,
    ACTIONS(1985), 1,
      anon_sym_LPAREN,
  [12655] = 1,
    ACTIONS(1987), 1,
      anon_sym_RPAREN,
  [12659] = 1,
    ACTIONS(1989), 1,
      aux_sym_compact_storage_token2,
  [12663] = 1,
    ACTIONS(1991), 1,
      sym_object_name,
  [12667] = 1,
    ACTIONS(1993), 1,
      aux_sym_relation_contains_key_token2,
  [12671] = 1,
    ACTIONS(1995), 1,
      sym_object_name,
  [12675] = 1,
    ACTIONS(1997), 1,
      sym_object_name,
  [12679] = 1,
    ACTIONS(1999), 1,
      sym_object_name,
  [12683] = 1,
    ACTIONS(2001), 1,
      sym__string_literal,
  [12687] = 1,
    ACTIONS(2003), 1,
      aux_sym_select_element_token1,
  [12691] = 1,
    ACTIONS(2005), 1,
      sym_object_name,
  [12695] = 1,
    ACTIONS(2007), 1,
      sym_object_name,
  [12699] = 1,
    ACTIONS(2009), 1,
      aux_sym_insert_statement_token3,
  [12703] = 1,
    ACTIONS(2011), 1,
      anon_sym_LPAREN,
  [12707] = 1,
    ACTIONS(2013), 1,
      aux_sym_insert_statement_token3,
  [12711] = 1,
    ACTIONS(2015), 1,
      aux_sym_relation_contains_key_token2,
  [12715] = 1,
    ACTIONS(2017), 1,
      ts_builtin_sym_end,
  [12719] = 1,
    ACTIONS(2019), 1,
      aux_sym_delete_statement_token3,
  [12723] = 1,
    ACTIONS(2021), 1,
      aux_sym_begin_batch_token4,
  [12727] = 1,
    ACTIONS(2023), 1,
      anon_sym_RPAREN,
  [12731] = 1,
    ACTIONS(2025), 1,
      aux_sym_delete_statement_token3,
  [12735] = 1,
    ACTIONS(2027), 1,
      sym_object_name,
  [12739] = 1,
    ACTIONS(2029), 1,
      anon_sym_RPAREN,
  [12743] = 1,
    ACTIONS(2031), 1,
      sym__code_block,
  [12747] = 1,
    ACTIONS(2033), 1,
      aux_sym_select_element_token1,
  [12751] = 1,
    ACTIONS(2035), 1,
      aux_sym_create_aggregate_token6,
  [12755] = 1,
    ACTIONS(2037), 1,
      sym_object_name,
  [12759] = 1,
    ACTIONS(2039), 1,
      sym__code_block,
  [12763] = 1,
    ACTIONS(2041), 1,
      aux_sym_update_token2,
  [12767] = 1,
    ACTIONS(2043), 1,
      aux_sym_insert_statement_token2,
  [12771] = 1,
    ACTIONS(2045), 1,
      aux_sym_create_index_token3,
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
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 948,
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1015,
  [SMALL_STATE(29)] = 1047,
  [SMALL_STATE(30)] = 1077,
  [SMALL_STATE(31)] = 1109,
  [SMALL_STATE(32)] = 1140,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1202,
  [SMALL_STATE(35)] = 1233,
  [SMALL_STATE(36)] = 1260,
  [SMALL_STATE(37)] = 1287,
  [SMALL_STATE(38)] = 1317,
  [SMALL_STATE(39)] = 1357,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1413,
  [SMALL_STATE(42)] = 1453,
  [SMALL_STATE(43)] = 1493,
  [SMALL_STATE(44)] = 1518,
  [SMALL_STATE(45)] = 1543,
  [SMALL_STATE(46)] = 1568,
  [SMALL_STATE(47)] = 1593,
  [SMALL_STATE(48)] = 1618,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1697,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1776,
  [SMALL_STATE(55)] = 1801,
  [SMALL_STATE(56)] = 1835,
  [SMALL_STATE(57)] = 1859,
  [SMALL_STATE(58)] = 1893,
  [SMALL_STATE(59)] = 1927,
  [SMALL_STATE(60)] = 1951,
  [SMALL_STATE(61)] = 1975,
  [SMALL_STATE(62)] = 1999,
  [SMALL_STATE(63)] = 2024,
  [SMALL_STATE(64)] = 2047,
  [SMALL_STATE(65)] = 2072,
  [SMALL_STATE(66)] = 2097,
  [SMALL_STATE(67)] = 2122,
  [SMALL_STATE(68)] = 2147,
  [SMALL_STATE(69)] = 2172,
  [SMALL_STATE(70)] = 2200,
  [SMALL_STATE(71)] = 2228,
  [SMALL_STATE(72)] = 2250,
  [SMALL_STATE(73)] = 2272,
  [SMALL_STATE(74)] = 2300,
  [SMALL_STATE(75)] = 2326,
  [SMALL_STATE(76)] = 2348,
  [SMALL_STATE(77)] = 2372,
  [SMALL_STATE(78)] = 2394,
  [SMALL_STATE(79)] = 2422,
  [SMALL_STATE(80)] = 2448,
  [SMALL_STATE(81)] = 2470,
  [SMALL_STATE(82)] = 2492,
  [SMALL_STATE(83)] = 2520,
  [SMALL_STATE(84)] = 2544,
  [SMALL_STATE(85)] = 2566,
  [SMALL_STATE(86)] = 2592,
  [SMALL_STATE(87)] = 2620,
  [SMALL_STATE(88)] = 2642,
  [SMALL_STATE(89)] = 2670,
  [SMALL_STATE(90)] = 2708,
  [SMALL_STATE(91)] = 2746,
  [SMALL_STATE(92)] = 2771,
  [SMALL_STATE(93)] = 2792,
  [SMALL_STATE(94)] = 2813,
  [SMALL_STATE(95)] = 2838,
  [SMALL_STATE(96)] = 2863,
  [SMALL_STATE(97)] = 2886,
  [SMALL_STATE(98)] = 2911,
  [SMALL_STATE(99)] = 2936,
  [SMALL_STATE(100)] = 2961,
  [SMALL_STATE(101)] = 2986,
  [SMALL_STATE(102)] = 3009,
  [SMALL_STATE(103)] = 3034,
  [SMALL_STATE(104)] = 3059,
  [SMALL_STATE(105)] = 3084,
  [SMALL_STATE(106)] = 3105,
  [SMALL_STATE(107)] = 3130,
  [SMALL_STATE(108)] = 3151,
  [SMALL_STATE(109)] = 3176,
  [SMALL_STATE(110)] = 3201,
  [SMALL_STATE(111)] = 3226,
  [SMALL_STATE(112)] = 3251,
  [SMALL_STATE(113)] = 3276,
  [SMALL_STATE(114)] = 3301,
  [SMALL_STATE(115)] = 3326,
  [SMALL_STATE(116)] = 3349,
  [SMALL_STATE(117)] = 3374,
  [SMALL_STATE(118)] = 3399,
  [SMALL_STATE(119)] = 3420,
  [SMALL_STATE(120)] = 3445,
  [SMALL_STATE(121)] = 3466,
  [SMALL_STATE(122)] = 3489,
  [SMALL_STATE(123)] = 3510,
  [SMALL_STATE(124)] = 3535,
  [SMALL_STATE(125)] = 3560,
  [SMALL_STATE(126)] = 3585,
  [SMALL_STATE(127)] = 3610,
  [SMALL_STATE(128)] = 3631,
  [SMALL_STATE(129)] = 3652,
  [SMALL_STATE(130)] = 3677,
  [SMALL_STATE(131)] = 3702,
  [SMALL_STATE(132)] = 3723,
  [SMALL_STATE(133)] = 3748,
  [SMALL_STATE(134)] = 3773,
  [SMALL_STATE(135)] = 3798,
  [SMALL_STATE(136)] = 3823,
  [SMALL_STATE(137)] = 3844,
  [SMALL_STATE(138)] = 3879,
  [SMALL_STATE(139)] = 3904,
  [SMALL_STATE(140)] = 3929,
  [SMALL_STATE(141)] = 3954,
  [SMALL_STATE(142)] = 3975,
  [SMALL_STATE(143)] = 3996,
  [SMALL_STATE(144)] = 4017,
  [SMALL_STATE(145)] = 4042,
  [SMALL_STATE(146)] = 4067,
  [SMALL_STATE(147)] = 4088,
  [SMALL_STATE(148)] = 4113,
  [SMALL_STATE(149)] = 4138,
  [SMALL_STATE(150)] = 4163,
  [SMALL_STATE(151)] = 4188,
  [SMALL_STATE(152)] = 4213,
  [SMALL_STATE(153)] = 4238,
  [SMALL_STATE(154)] = 4263,
  [SMALL_STATE(155)] = 4284,
  [SMALL_STATE(156)] = 4309,
  [SMALL_STATE(157)] = 4330,
  [SMALL_STATE(158)] = 4351,
  [SMALL_STATE(159)] = 4371,
  [SMALL_STATE(160)] = 4391,
  [SMALL_STATE(161)] = 4411,
  [SMALL_STATE(162)] = 4431,
  [SMALL_STATE(163)] = 4451,
  [SMALL_STATE(164)] = 4471,
  [SMALL_STATE(165)] = 4491,
  [SMALL_STATE(166)] = 4511,
  [SMALL_STATE(167)] = 4533,
  [SMALL_STATE(168)] = 4555,
  [SMALL_STATE(169)] = 4575,
  [SMALL_STATE(170)] = 4595,
  [SMALL_STATE(171)] = 4617,
  [SMALL_STATE(172)] = 4639,
  [SMALL_STATE(173)] = 4659,
  [SMALL_STATE(174)] = 4681,
  [SMALL_STATE(175)] = 4701,
  [SMALL_STATE(176)] = 4721,
  [SMALL_STATE(177)] = 4741,
  [SMALL_STATE(178)] = 4761,
  [SMALL_STATE(179)] = 4781,
  [SMALL_STATE(180)] = 4801,
  [SMALL_STATE(181)] = 4823,
  [SMALL_STATE(182)] = 4843,
  [SMALL_STATE(183)] = 4863,
  [SMALL_STATE(184)] = 4883,
  [SMALL_STATE(185)] = 4905,
  [SMALL_STATE(186)] = 4925,
  [SMALL_STATE(187)] = 4947,
  [SMALL_STATE(188)] = 4969,
  [SMALL_STATE(189)] = 4989,
  [SMALL_STATE(190)] = 5009,
  [SMALL_STATE(191)] = 5029,
  [SMALL_STATE(192)] = 5051,
  [SMALL_STATE(193)] = 5071,
  [SMALL_STATE(194)] = 5093,
  [SMALL_STATE(195)] = 5112,
  [SMALL_STATE(196)] = 5131,
  [SMALL_STATE(197)] = 5150,
  [SMALL_STATE(198)] = 5169,
  [SMALL_STATE(199)] = 5188,
  [SMALL_STATE(200)] = 5207,
  [SMALL_STATE(201)] = 5226,
  [SMALL_STATE(202)] = 5245,
  [SMALL_STATE(203)] = 5264,
  [SMALL_STATE(204)] = 5283,
  [SMALL_STATE(205)] = 5302,
  [SMALL_STATE(206)] = 5321,
  [SMALL_STATE(207)] = 5340,
  [SMALL_STATE(208)] = 5359,
  [SMALL_STATE(209)] = 5394,
  [SMALL_STATE(210)] = 5413,
  [SMALL_STATE(211)] = 5432,
  [SMALL_STATE(212)] = 5451,
  [SMALL_STATE(213)] = 5470,
  [SMALL_STATE(214)] = 5489,
  [SMALL_STATE(215)] = 5508,
  [SMALL_STATE(216)] = 5527,
  [SMALL_STATE(217)] = 5546,
  [SMALL_STATE(218)] = 5565,
  [SMALL_STATE(219)] = 5584,
  [SMALL_STATE(220)] = 5603,
  [SMALL_STATE(221)] = 5622,
  [SMALL_STATE(222)] = 5641,
  [SMALL_STATE(223)] = 5660,
  [SMALL_STATE(224)] = 5679,
  [SMALL_STATE(225)] = 5698,
  [SMALL_STATE(226)] = 5717,
  [SMALL_STATE(227)] = 5736,
  [SMALL_STATE(228)] = 5755,
  [SMALL_STATE(229)] = 5774,
  [SMALL_STATE(230)] = 5793,
  [SMALL_STATE(231)] = 5812,
  [SMALL_STATE(232)] = 5831,
  [SMALL_STATE(233)] = 5850,
  [SMALL_STATE(234)] = 5869,
  [SMALL_STATE(235)] = 5888,
  [SMALL_STATE(236)] = 5907,
  [SMALL_STATE(237)] = 5926,
  [SMALL_STATE(238)] = 5945,
  [SMALL_STATE(239)] = 5964,
  [SMALL_STATE(240)] = 5983,
  [SMALL_STATE(241)] = 6002,
  [SMALL_STATE(242)] = 6021,
  [SMALL_STATE(243)] = 6040,
  [SMALL_STATE(244)] = 6059,
  [SMALL_STATE(245)] = 6078,
  [SMALL_STATE(246)] = 6097,
  [SMALL_STATE(247)] = 6118,
  [SMALL_STATE(248)] = 6137,
  [SMALL_STATE(249)] = 6156,
  [SMALL_STATE(250)] = 6175,
  [SMALL_STATE(251)] = 6194,
  [SMALL_STATE(252)] = 6213,
  [SMALL_STATE(253)] = 6232,
  [SMALL_STATE(254)] = 6251,
  [SMALL_STATE(255)] = 6270,
  [SMALL_STATE(256)] = 6289,
  [SMALL_STATE(257)] = 6308,
  [SMALL_STATE(258)] = 6327,
  [SMALL_STATE(259)] = 6346,
  [SMALL_STATE(260)] = 6365,
  [SMALL_STATE(261)] = 6384,
  [SMALL_STATE(262)] = 6403,
  [SMALL_STATE(263)] = 6422,
  [SMALL_STATE(264)] = 6441,
  [SMALL_STATE(265)] = 6460,
  [SMALL_STATE(266)] = 6479,
  [SMALL_STATE(267)] = 6498,
  [SMALL_STATE(268)] = 6517,
  [SMALL_STATE(269)] = 6536,
  [SMALL_STATE(270)] = 6555,
  [SMALL_STATE(271)] = 6574,
  [SMALL_STATE(272)] = 6593,
  [SMALL_STATE(273)] = 6612,
  [SMALL_STATE(274)] = 6631,
  [SMALL_STATE(275)] = 6650,
  [SMALL_STATE(276)] = 6669,
  [SMALL_STATE(277)] = 6688,
  [SMALL_STATE(278)] = 6707,
  [SMALL_STATE(279)] = 6726,
  [SMALL_STATE(280)] = 6745,
  [SMALL_STATE(281)] = 6764,
  [SMALL_STATE(282)] = 6783,
  [SMALL_STATE(283)] = 6802,
  [SMALL_STATE(284)] = 6821,
  [SMALL_STATE(285)] = 6840,
  [SMALL_STATE(286)] = 6859,
  [SMALL_STATE(287)] = 6878,
  [SMALL_STATE(288)] = 6897,
  [SMALL_STATE(289)] = 6916,
  [SMALL_STATE(290)] = 6935,
  [SMALL_STATE(291)] = 6954,
  [SMALL_STATE(292)] = 6973,
  [SMALL_STATE(293)] = 6992,
  [SMALL_STATE(294)] = 7011,
  [SMALL_STATE(295)] = 7030,
  [SMALL_STATE(296)] = 7049,
  [SMALL_STATE(297)] = 7068,
  [SMALL_STATE(298)] = 7087,
  [SMALL_STATE(299)] = 7106,
  [SMALL_STATE(300)] = 7125,
  [SMALL_STATE(301)] = 7144,
  [SMALL_STATE(302)] = 7163,
  [SMALL_STATE(303)] = 7182,
  [SMALL_STATE(304)] = 7201,
  [SMALL_STATE(305)] = 7220,
  [SMALL_STATE(306)] = 7239,
  [SMALL_STATE(307)] = 7258,
  [SMALL_STATE(308)] = 7277,
  [SMALL_STATE(309)] = 7296,
  [SMALL_STATE(310)] = 7324,
  [SMALL_STATE(311)] = 7352,
  [SMALL_STATE(312)] = 7380,
  [SMALL_STATE(313)] = 7408,
  [SMALL_STATE(314)] = 7426,
  [SMALL_STATE(315)] = 7454,
  [SMALL_STATE(316)] = 7485,
  [SMALL_STATE(317)] = 7518,
  [SMALL_STATE(318)] = 7546,
  [SMALL_STATE(319)] = 7571,
  [SMALL_STATE(320)] = 7594,
  [SMALL_STATE(321)] = 7619,
  [SMALL_STATE(322)] = 7653,
  [SMALL_STATE(323)] = 7673,
  [SMALL_STATE(324)] = 7695,
  [SMALL_STATE(325)] = 7717,
  [SMALL_STATE(326)] = 7748,
  [SMALL_STATE(327)] = 7767,
  [SMALL_STATE(328)] = 7786,
  [SMALL_STATE(329)] = 7805,
  [SMALL_STATE(330)] = 7824,
  [SMALL_STATE(331)] = 7847,
  [SMALL_STATE(332)] = 7866,
  [SMALL_STATE(333)] = 7885,
  [SMALL_STATE(334)] = 7908,
  [SMALL_STATE(335)] = 7927,
  [SMALL_STATE(336)] = 7946,
  [SMALL_STATE(337)] = 7963,
  [SMALL_STATE(338)] = 7982,
  [SMALL_STATE(339)] = 7999,
  [SMALL_STATE(340)] = 8018,
  [SMALL_STATE(341)] = 8038,
  [SMALL_STATE(342)] = 8061,
  [SMALL_STATE(343)] = 8084,
  [SMALL_STATE(344)] = 8107,
  [SMALL_STATE(345)] = 8130,
  [SMALL_STATE(346)] = 8153,
  [SMALL_STATE(347)] = 8176,
  [SMALL_STATE(348)] = 8199,
  [SMALL_STATE(349)] = 8220,
  [SMALL_STATE(350)] = 8241,
  [SMALL_STATE(351)] = 8264,
  [SMALL_STATE(352)] = 8287,
  [SMALL_STATE(353)] = 8310,
  [SMALL_STATE(354)] = 8333,
  [SMALL_STATE(355)] = 8354,
  [SMALL_STATE(356)] = 8375,
  [SMALL_STATE(357)] = 8398,
  [SMALL_STATE(358)] = 8421,
  [SMALL_STATE(359)] = 8444,
  [SMALL_STATE(360)] = 8467,
  [SMALL_STATE(361)] = 8488,
  [SMALL_STATE(362)] = 8511,
  [SMALL_STATE(363)] = 8525,
  [SMALL_STATE(364)] = 8543,
  [SMALL_STATE(365)] = 8561,
  [SMALL_STATE(366)] = 8583,
  [SMALL_STATE(367)] = 8605,
  [SMALL_STATE(368)] = 8627,
  [SMALL_STATE(369)] = 8647,
  [SMALL_STATE(370)] = 8661,
  [SMALL_STATE(371)] = 8683,
  [SMALL_STATE(372)] = 8703,
  [SMALL_STATE(373)] = 8721,
  [SMALL_STATE(374)] = 8740,
  [SMALL_STATE(375)] = 8757,
  [SMALL_STATE(376)] = 8768,
  [SMALL_STATE(377)] = 8787,
  [SMALL_STATE(378)] = 8795,
  [SMALL_STATE(379)] = 8807,
  [SMALL_STATE(380)] = 8815,
  [SMALL_STATE(381)] = 8831,
  [SMALL_STATE(382)] = 8843,
  [SMALL_STATE(383)] = 8851,
  [SMALL_STATE(384)] = 8859,
  [SMALL_STATE(385)] = 8875,
  [SMALL_STATE(386)] = 8883,
  [SMALL_STATE(387)] = 8899,
  [SMALL_STATE(388)] = 8915,
  [SMALL_STATE(389)] = 8927,
  [SMALL_STATE(390)] = 8943,
  [SMALL_STATE(391)] = 8959,
  [SMALL_STATE(392)] = 8975,
  [SMALL_STATE(393)] = 8989,
  [SMALL_STATE(394)] = 9001,
  [SMALL_STATE(395)] = 9017,
  [SMALL_STATE(396)] = 9025,
  [SMALL_STATE(397)] = 9039,
  [SMALL_STATE(398)] = 9047,
  [SMALL_STATE(399)] = 9063,
  [SMALL_STATE(400)] = 9076,
  [SMALL_STATE(401)] = 9089,
  [SMALL_STATE(402)] = 9102,
  [SMALL_STATE(403)] = 9115,
  [SMALL_STATE(404)] = 9128,
  [SMALL_STATE(405)] = 9137,
  [SMALL_STATE(406)] = 9150,
  [SMALL_STATE(407)] = 9163,
  [SMALL_STATE(408)] = 9176,
  [SMALL_STATE(409)] = 9189,
  [SMALL_STATE(410)] = 9196,
  [SMALL_STATE(411)] = 9209,
  [SMALL_STATE(412)] = 9222,
  [SMALL_STATE(413)] = 9235,
  [SMALL_STATE(414)] = 9248,
  [SMALL_STATE(415)] = 9261,
  [SMALL_STATE(416)] = 9274,
  [SMALL_STATE(417)] = 9287,
  [SMALL_STATE(418)] = 9300,
  [SMALL_STATE(419)] = 9313,
  [SMALL_STATE(420)] = 9324,
  [SMALL_STATE(421)] = 9335,
  [SMALL_STATE(422)] = 9348,
  [SMALL_STATE(423)] = 9361,
  [SMALL_STATE(424)] = 9374,
  [SMALL_STATE(425)] = 9385,
  [SMALL_STATE(426)] = 9398,
  [SMALL_STATE(427)] = 9411,
  [SMALL_STATE(428)] = 9422,
  [SMALL_STATE(429)] = 9435,
  [SMALL_STATE(430)] = 9448,
  [SMALL_STATE(431)] = 9461,
  [SMALL_STATE(432)] = 9474,
  [SMALL_STATE(433)] = 9481,
  [SMALL_STATE(434)] = 9494,
  [SMALL_STATE(435)] = 9504,
  [SMALL_STATE(436)] = 9514,
  [SMALL_STATE(437)] = 9524,
  [SMALL_STATE(438)] = 9534,
  [SMALL_STATE(439)] = 9544,
  [SMALL_STATE(440)] = 9552,
  [SMALL_STATE(441)] = 9562,
  [SMALL_STATE(442)] = 9572,
  [SMALL_STATE(443)] = 9582,
  [SMALL_STATE(444)] = 9592,
  [SMALL_STATE(445)] = 9602,
  [SMALL_STATE(446)] = 9612,
  [SMALL_STATE(447)] = 9622,
  [SMALL_STATE(448)] = 9632,
  [SMALL_STATE(449)] = 9642,
  [SMALL_STATE(450)] = 9652,
  [SMALL_STATE(451)] = 9662,
  [SMALL_STATE(452)] = 9672,
  [SMALL_STATE(453)] = 9682,
  [SMALL_STATE(454)] = 9692,
  [SMALL_STATE(455)] = 9702,
  [SMALL_STATE(456)] = 9712,
  [SMALL_STATE(457)] = 9722,
  [SMALL_STATE(458)] = 9732,
  [SMALL_STATE(459)] = 9742,
  [SMALL_STATE(460)] = 9752,
  [SMALL_STATE(461)] = 9762,
  [SMALL_STATE(462)] = 9772,
  [SMALL_STATE(463)] = 9782,
  [SMALL_STATE(464)] = 9792,
  [SMALL_STATE(465)] = 9802,
  [SMALL_STATE(466)] = 9812,
  [SMALL_STATE(467)] = 9822,
  [SMALL_STATE(468)] = 9832,
  [SMALL_STATE(469)] = 9842,
  [SMALL_STATE(470)] = 9852,
  [SMALL_STATE(471)] = 9862,
  [SMALL_STATE(472)] = 9872,
  [SMALL_STATE(473)] = 9878,
  [SMALL_STATE(474)] = 9888,
  [SMALL_STATE(475)] = 9898,
  [SMALL_STATE(476)] = 9908,
  [SMALL_STATE(477)] = 9918,
  [SMALL_STATE(478)] = 9928,
  [SMALL_STATE(479)] = 9936,
  [SMALL_STATE(480)] = 9946,
  [SMALL_STATE(481)] = 9956,
  [SMALL_STATE(482)] = 9966,
  [SMALL_STATE(483)] = 9976,
  [SMALL_STATE(484)] = 9986,
  [SMALL_STATE(485)] = 9994,
  [SMALL_STATE(486)] = 10004,
  [SMALL_STATE(487)] = 10014,
  [SMALL_STATE(488)] = 10024,
  [SMALL_STATE(489)] = 10034,
  [SMALL_STATE(490)] = 10044,
  [SMALL_STATE(491)] = 10054,
  [SMALL_STATE(492)] = 10064,
  [SMALL_STATE(493)] = 10074,
  [SMALL_STATE(494)] = 10084,
  [SMALL_STATE(495)] = 10094,
  [SMALL_STATE(496)] = 10104,
  [SMALL_STATE(497)] = 10114,
  [SMALL_STATE(498)] = 10124,
  [SMALL_STATE(499)] = 10134,
  [SMALL_STATE(500)] = 10144,
  [SMALL_STATE(501)] = 10154,
  [SMALL_STATE(502)] = 10164,
  [SMALL_STATE(503)] = 10174,
  [SMALL_STATE(504)] = 10184,
  [SMALL_STATE(505)] = 10194,
  [SMALL_STATE(506)] = 10204,
  [SMALL_STATE(507)] = 10214,
  [SMALL_STATE(508)] = 10224,
  [SMALL_STATE(509)] = 10234,
  [SMALL_STATE(510)] = 10244,
  [SMALL_STATE(511)] = 10254,
  [SMALL_STATE(512)] = 10264,
  [SMALL_STATE(513)] = 10274,
  [SMALL_STATE(514)] = 10284,
  [SMALL_STATE(515)] = 10294,
  [SMALL_STATE(516)] = 10304,
  [SMALL_STATE(517)] = 10314,
  [SMALL_STATE(518)] = 10324,
  [SMALL_STATE(519)] = 10334,
  [SMALL_STATE(520)] = 10344,
  [SMALL_STATE(521)] = 10354,
  [SMALL_STATE(522)] = 10364,
  [SMALL_STATE(523)] = 10374,
  [SMALL_STATE(524)] = 10384,
  [SMALL_STATE(525)] = 10394,
  [SMALL_STATE(526)] = 10404,
  [SMALL_STATE(527)] = 10414,
  [SMALL_STATE(528)] = 10424,
  [SMALL_STATE(529)] = 10432,
  [SMALL_STATE(530)] = 10442,
  [SMALL_STATE(531)] = 10452,
  [SMALL_STATE(532)] = 10460,
  [SMALL_STATE(533)] = 10468,
  [SMALL_STATE(534)] = 10478,
  [SMALL_STATE(535)] = 10484,
  [SMALL_STATE(536)] = 10494,
  [SMALL_STATE(537)] = 10504,
  [SMALL_STATE(538)] = 10514,
  [SMALL_STATE(539)] = 10524,
  [SMALL_STATE(540)] = 10534,
  [SMALL_STATE(541)] = 10544,
  [SMALL_STATE(542)] = 10554,
  [SMALL_STATE(543)] = 10564,
  [SMALL_STATE(544)] = 10574,
  [SMALL_STATE(545)] = 10584,
  [SMALL_STATE(546)] = 10594,
  [SMALL_STATE(547)] = 10604,
  [SMALL_STATE(548)] = 10614,
  [SMALL_STATE(549)] = 10624,
  [SMALL_STATE(550)] = 10634,
  [SMALL_STATE(551)] = 10644,
  [SMALL_STATE(552)] = 10654,
  [SMALL_STATE(553)] = 10660,
  [SMALL_STATE(554)] = 10670,
  [SMALL_STATE(555)] = 10680,
  [SMALL_STATE(556)] = 10690,
  [SMALL_STATE(557)] = 10700,
  [SMALL_STATE(558)] = 10710,
  [SMALL_STATE(559)] = 10720,
  [SMALL_STATE(560)] = 10728,
  [SMALL_STATE(561)] = 10738,
  [SMALL_STATE(562)] = 10745,
  [SMALL_STATE(563)] = 10752,
  [SMALL_STATE(564)] = 10759,
  [SMALL_STATE(565)] = 10766,
  [SMALL_STATE(566)] = 10773,
  [SMALL_STATE(567)] = 10780,
  [SMALL_STATE(568)] = 10787,
  [SMALL_STATE(569)] = 10792,
  [SMALL_STATE(570)] = 10797,
  [SMALL_STATE(571)] = 10804,
  [SMALL_STATE(572)] = 10809,
  [SMALL_STATE(573)] = 10816,
  [SMALL_STATE(574)] = 10823,
  [SMALL_STATE(575)] = 10828,
  [SMALL_STATE(576)] = 10835,
  [SMALL_STATE(577)] = 10842,
  [SMALL_STATE(578)] = 10847,
  [SMALL_STATE(579)] = 10854,
  [SMALL_STATE(580)] = 10861,
  [SMALL_STATE(581)] = 10866,
  [SMALL_STATE(582)] = 10873,
  [SMALL_STATE(583)] = 10880,
  [SMALL_STATE(584)] = 10887,
  [SMALL_STATE(585)] = 10894,
  [SMALL_STATE(586)] = 10899,
  [SMALL_STATE(587)] = 10906,
  [SMALL_STATE(588)] = 10913,
  [SMALL_STATE(589)] = 10920,
  [SMALL_STATE(590)] = 10927,
  [SMALL_STATE(591)] = 10934,
  [SMALL_STATE(592)] = 10941,
  [SMALL_STATE(593)] = 10946,
  [SMALL_STATE(594)] = 10953,
  [SMALL_STATE(595)] = 10958,
  [SMALL_STATE(596)] = 10965,
  [SMALL_STATE(597)] = 10972,
  [SMALL_STATE(598)] = 10979,
  [SMALL_STATE(599)] = 10986,
  [SMALL_STATE(600)] = 10993,
  [SMALL_STATE(601)] = 11000,
  [SMALL_STATE(602)] = 11007,
  [SMALL_STATE(603)] = 11012,
  [SMALL_STATE(604)] = 11019,
  [SMALL_STATE(605)] = 11024,
  [SMALL_STATE(606)] = 11031,
  [SMALL_STATE(607)] = 11036,
  [SMALL_STATE(608)] = 11043,
  [SMALL_STATE(609)] = 11050,
  [SMALL_STATE(610)] = 11057,
  [SMALL_STATE(611)] = 11064,
  [SMALL_STATE(612)] = 11071,
  [SMALL_STATE(613)] = 11076,
  [SMALL_STATE(614)] = 11083,
  [SMALL_STATE(615)] = 11090,
  [SMALL_STATE(616)] = 11097,
  [SMALL_STATE(617)] = 11102,
  [SMALL_STATE(618)] = 11109,
  [SMALL_STATE(619)] = 11116,
  [SMALL_STATE(620)] = 11123,
  [SMALL_STATE(621)] = 11130,
  [SMALL_STATE(622)] = 11137,
  [SMALL_STATE(623)] = 11144,
  [SMALL_STATE(624)] = 11151,
  [SMALL_STATE(625)] = 11158,
  [SMALL_STATE(626)] = 11165,
  [SMALL_STATE(627)] = 11172,
  [SMALL_STATE(628)] = 11179,
  [SMALL_STATE(629)] = 11186,
  [SMALL_STATE(630)] = 11191,
  [SMALL_STATE(631)] = 11196,
  [SMALL_STATE(632)] = 11201,
  [SMALL_STATE(633)] = 11208,
  [SMALL_STATE(634)] = 11213,
  [SMALL_STATE(635)] = 11220,
  [SMALL_STATE(636)] = 11227,
  [SMALL_STATE(637)] = 11234,
  [SMALL_STATE(638)] = 11241,
  [SMALL_STATE(639)] = 11248,
  [SMALL_STATE(640)] = 11255,
  [SMALL_STATE(641)] = 11262,
  [SMALL_STATE(642)] = 11269,
  [SMALL_STATE(643)] = 11276,
  [SMALL_STATE(644)] = 11281,
  [SMALL_STATE(645)] = 11288,
  [SMALL_STATE(646)] = 11295,
  [SMALL_STATE(647)] = 11302,
  [SMALL_STATE(648)] = 11309,
  [SMALL_STATE(649)] = 11316,
  [SMALL_STATE(650)] = 11323,
  [SMALL_STATE(651)] = 11328,
  [SMALL_STATE(652)] = 11333,
  [SMALL_STATE(653)] = 11340,
  [SMALL_STATE(654)] = 11347,
  [SMALL_STATE(655)] = 11354,
  [SMALL_STATE(656)] = 11359,
  [SMALL_STATE(657)] = 11366,
  [SMALL_STATE(658)] = 11373,
  [SMALL_STATE(659)] = 11380,
  [SMALL_STATE(660)] = 11387,
  [SMALL_STATE(661)] = 11394,
  [SMALL_STATE(662)] = 11401,
  [SMALL_STATE(663)] = 11408,
  [SMALL_STATE(664)] = 11413,
  [SMALL_STATE(665)] = 11420,
  [SMALL_STATE(666)] = 11427,
  [SMALL_STATE(667)] = 11432,
  [SMALL_STATE(668)] = 11439,
  [SMALL_STATE(669)] = 11446,
  [SMALL_STATE(670)] = 11451,
  [SMALL_STATE(671)] = 11458,
  [SMALL_STATE(672)] = 11465,
  [SMALL_STATE(673)] = 11470,
  [SMALL_STATE(674)] = 11477,
  [SMALL_STATE(675)] = 11482,
  [SMALL_STATE(676)] = 11489,
  [SMALL_STATE(677)] = 11496,
  [SMALL_STATE(678)] = 11503,
  [SMALL_STATE(679)] = 11510,
  [SMALL_STATE(680)] = 11517,
  [SMALL_STATE(681)] = 11522,
  [SMALL_STATE(682)] = 11527,
  [SMALL_STATE(683)] = 11532,
  [SMALL_STATE(684)] = 11539,
  [SMALL_STATE(685)] = 11546,
  [SMALL_STATE(686)] = 11551,
  [SMALL_STATE(687)] = 11558,
  [SMALL_STATE(688)] = 11565,
  [SMALL_STATE(689)] = 11572,
  [SMALL_STATE(690)] = 11579,
  [SMALL_STATE(691)] = 11583,
  [SMALL_STATE(692)] = 11587,
  [SMALL_STATE(693)] = 11591,
  [SMALL_STATE(694)] = 11595,
  [SMALL_STATE(695)] = 11599,
  [SMALL_STATE(696)] = 11603,
  [SMALL_STATE(697)] = 11607,
  [SMALL_STATE(698)] = 11611,
  [SMALL_STATE(699)] = 11615,
  [SMALL_STATE(700)] = 11619,
  [SMALL_STATE(701)] = 11623,
  [SMALL_STATE(702)] = 11627,
  [SMALL_STATE(703)] = 11631,
  [SMALL_STATE(704)] = 11635,
  [SMALL_STATE(705)] = 11639,
  [SMALL_STATE(706)] = 11643,
  [SMALL_STATE(707)] = 11647,
  [SMALL_STATE(708)] = 11651,
  [SMALL_STATE(709)] = 11655,
  [SMALL_STATE(710)] = 11659,
  [SMALL_STATE(711)] = 11663,
  [SMALL_STATE(712)] = 11667,
  [SMALL_STATE(713)] = 11671,
  [SMALL_STATE(714)] = 11675,
  [SMALL_STATE(715)] = 11679,
  [SMALL_STATE(716)] = 11683,
  [SMALL_STATE(717)] = 11687,
  [SMALL_STATE(718)] = 11691,
  [SMALL_STATE(719)] = 11695,
  [SMALL_STATE(720)] = 11699,
  [SMALL_STATE(721)] = 11703,
  [SMALL_STATE(722)] = 11707,
  [SMALL_STATE(723)] = 11711,
  [SMALL_STATE(724)] = 11715,
  [SMALL_STATE(725)] = 11719,
  [SMALL_STATE(726)] = 11723,
  [SMALL_STATE(727)] = 11727,
  [SMALL_STATE(728)] = 11731,
  [SMALL_STATE(729)] = 11735,
  [SMALL_STATE(730)] = 11739,
  [SMALL_STATE(731)] = 11743,
  [SMALL_STATE(732)] = 11747,
  [SMALL_STATE(733)] = 11751,
  [SMALL_STATE(734)] = 11755,
  [SMALL_STATE(735)] = 11759,
  [SMALL_STATE(736)] = 11763,
  [SMALL_STATE(737)] = 11767,
  [SMALL_STATE(738)] = 11771,
  [SMALL_STATE(739)] = 11775,
  [SMALL_STATE(740)] = 11779,
  [SMALL_STATE(741)] = 11783,
  [SMALL_STATE(742)] = 11787,
  [SMALL_STATE(743)] = 11791,
  [SMALL_STATE(744)] = 11795,
  [SMALL_STATE(745)] = 11799,
  [SMALL_STATE(746)] = 11803,
  [SMALL_STATE(747)] = 11807,
  [SMALL_STATE(748)] = 11811,
  [SMALL_STATE(749)] = 11815,
  [SMALL_STATE(750)] = 11819,
  [SMALL_STATE(751)] = 11823,
  [SMALL_STATE(752)] = 11827,
  [SMALL_STATE(753)] = 11831,
  [SMALL_STATE(754)] = 11835,
  [SMALL_STATE(755)] = 11839,
  [SMALL_STATE(756)] = 11843,
  [SMALL_STATE(757)] = 11847,
  [SMALL_STATE(758)] = 11851,
  [SMALL_STATE(759)] = 11855,
  [SMALL_STATE(760)] = 11859,
  [SMALL_STATE(761)] = 11863,
  [SMALL_STATE(762)] = 11867,
  [SMALL_STATE(763)] = 11871,
  [SMALL_STATE(764)] = 11875,
  [SMALL_STATE(765)] = 11879,
  [SMALL_STATE(766)] = 11883,
  [SMALL_STATE(767)] = 11887,
  [SMALL_STATE(768)] = 11891,
  [SMALL_STATE(769)] = 11895,
  [SMALL_STATE(770)] = 11899,
  [SMALL_STATE(771)] = 11903,
  [SMALL_STATE(772)] = 11907,
  [SMALL_STATE(773)] = 11911,
  [SMALL_STATE(774)] = 11915,
  [SMALL_STATE(775)] = 11919,
  [SMALL_STATE(776)] = 11923,
  [SMALL_STATE(777)] = 11927,
  [SMALL_STATE(778)] = 11931,
  [SMALL_STATE(779)] = 11935,
  [SMALL_STATE(780)] = 11939,
  [SMALL_STATE(781)] = 11943,
  [SMALL_STATE(782)] = 11947,
  [SMALL_STATE(783)] = 11951,
  [SMALL_STATE(784)] = 11955,
  [SMALL_STATE(785)] = 11959,
  [SMALL_STATE(786)] = 11963,
  [SMALL_STATE(787)] = 11967,
  [SMALL_STATE(788)] = 11971,
  [SMALL_STATE(789)] = 11975,
  [SMALL_STATE(790)] = 11979,
  [SMALL_STATE(791)] = 11983,
  [SMALL_STATE(792)] = 11987,
  [SMALL_STATE(793)] = 11991,
  [SMALL_STATE(794)] = 11995,
  [SMALL_STATE(795)] = 11999,
  [SMALL_STATE(796)] = 12003,
  [SMALL_STATE(797)] = 12007,
  [SMALL_STATE(798)] = 12011,
  [SMALL_STATE(799)] = 12015,
  [SMALL_STATE(800)] = 12019,
  [SMALL_STATE(801)] = 12023,
  [SMALL_STATE(802)] = 12027,
  [SMALL_STATE(803)] = 12031,
  [SMALL_STATE(804)] = 12035,
  [SMALL_STATE(805)] = 12039,
  [SMALL_STATE(806)] = 12043,
  [SMALL_STATE(807)] = 12047,
  [SMALL_STATE(808)] = 12051,
  [SMALL_STATE(809)] = 12055,
  [SMALL_STATE(810)] = 12059,
  [SMALL_STATE(811)] = 12063,
  [SMALL_STATE(812)] = 12067,
  [SMALL_STATE(813)] = 12071,
  [SMALL_STATE(814)] = 12075,
  [SMALL_STATE(815)] = 12079,
  [SMALL_STATE(816)] = 12083,
  [SMALL_STATE(817)] = 12087,
  [SMALL_STATE(818)] = 12091,
  [SMALL_STATE(819)] = 12095,
  [SMALL_STATE(820)] = 12099,
  [SMALL_STATE(821)] = 12103,
  [SMALL_STATE(822)] = 12107,
  [SMALL_STATE(823)] = 12111,
  [SMALL_STATE(824)] = 12115,
  [SMALL_STATE(825)] = 12119,
  [SMALL_STATE(826)] = 12123,
  [SMALL_STATE(827)] = 12127,
  [SMALL_STATE(828)] = 12131,
  [SMALL_STATE(829)] = 12135,
  [SMALL_STATE(830)] = 12139,
  [SMALL_STATE(831)] = 12143,
  [SMALL_STATE(832)] = 12147,
  [SMALL_STATE(833)] = 12151,
  [SMALL_STATE(834)] = 12155,
  [SMALL_STATE(835)] = 12159,
  [SMALL_STATE(836)] = 12163,
  [SMALL_STATE(837)] = 12167,
  [SMALL_STATE(838)] = 12171,
  [SMALL_STATE(839)] = 12175,
  [SMALL_STATE(840)] = 12179,
  [SMALL_STATE(841)] = 12183,
  [SMALL_STATE(842)] = 12187,
  [SMALL_STATE(843)] = 12191,
  [SMALL_STATE(844)] = 12195,
  [SMALL_STATE(845)] = 12199,
  [SMALL_STATE(846)] = 12203,
  [SMALL_STATE(847)] = 12207,
  [SMALL_STATE(848)] = 12211,
  [SMALL_STATE(849)] = 12215,
  [SMALL_STATE(850)] = 12219,
  [SMALL_STATE(851)] = 12223,
  [SMALL_STATE(852)] = 12227,
  [SMALL_STATE(853)] = 12231,
  [SMALL_STATE(854)] = 12235,
  [SMALL_STATE(855)] = 12239,
  [SMALL_STATE(856)] = 12243,
  [SMALL_STATE(857)] = 12247,
  [SMALL_STATE(858)] = 12251,
  [SMALL_STATE(859)] = 12255,
  [SMALL_STATE(860)] = 12259,
  [SMALL_STATE(861)] = 12263,
  [SMALL_STATE(862)] = 12267,
  [SMALL_STATE(863)] = 12271,
  [SMALL_STATE(864)] = 12275,
  [SMALL_STATE(865)] = 12279,
  [SMALL_STATE(866)] = 12283,
  [SMALL_STATE(867)] = 12287,
  [SMALL_STATE(868)] = 12291,
  [SMALL_STATE(869)] = 12295,
  [SMALL_STATE(870)] = 12299,
  [SMALL_STATE(871)] = 12303,
  [SMALL_STATE(872)] = 12307,
  [SMALL_STATE(873)] = 12311,
  [SMALL_STATE(874)] = 12315,
  [SMALL_STATE(875)] = 12319,
  [SMALL_STATE(876)] = 12323,
  [SMALL_STATE(877)] = 12327,
  [SMALL_STATE(878)] = 12331,
  [SMALL_STATE(879)] = 12335,
  [SMALL_STATE(880)] = 12339,
  [SMALL_STATE(881)] = 12343,
  [SMALL_STATE(882)] = 12347,
  [SMALL_STATE(883)] = 12351,
  [SMALL_STATE(884)] = 12355,
  [SMALL_STATE(885)] = 12359,
  [SMALL_STATE(886)] = 12363,
  [SMALL_STATE(887)] = 12367,
  [SMALL_STATE(888)] = 12371,
  [SMALL_STATE(889)] = 12375,
  [SMALL_STATE(890)] = 12379,
  [SMALL_STATE(891)] = 12383,
  [SMALL_STATE(892)] = 12387,
  [SMALL_STATE(893)] = 12391,
  [SMALL_STATE(894)] = 12395,
  [SMALL_STATE(895)] = 12399,
  [SMALL_STATE(896)] = 12403,
  [SMALL_STATE(897)] = 12407,
  [SMALL_STATE(898)] = 12411,
  [SMALL_STATE(899)] = 12415,
  [SMALL_STATE(900)] = 12419,
  [SMALL_STATE(901)] = 12423,
  [SMALL_STATE(902)] = 12427,
  [SMALL_STATE(903)] = 12431,
  [SMALL_STATE(904)] = 12435,
  [SMALL_STATE(905)] = 12439,
  [SMALL_STATE(906)] = 12443,
  [SMALL_STATE(907)] = 12447,
  [SMALL_STATE(908)] = 12451,
  [SMALL_STATE(909)] = 12455,
  [SMALL_STATE(910)] = 12459,
  [SMALL_STATE(911)] = 12463,
  [SMALL_STATE(912)] = 12467,
  [SMALL_STATE(913)] = 12471,
  [SMALL_STATE(914)] = 12475,
  [SMALL_STATE(915)] = 12479,
  [SMALL_STATE(916)] = 12483,
  [SMALL_STATE(917)] = 12487,
  [SMALL_STATE(918)] = 12491,
  [SMALL_STATE(919)] = 12495,
  [SMALL_STATE(920)] = 12499,
  [SMALL_STATE(921)] = 12503,
  [SMALL_STATE(922)] = 12507,
  [SMALL_STATE(923)] = 12511,
  [SMALL_STATE(924)] = 12515,
  [SMALL_STATE(925)] = 12519,
  [SMALL_STATE(926)] = 12523,
  [SMALL_STATE(927)] = 12527,
  [SMALL_STATE(928)] = 12531,
  [SMALL_STATE(929)] = 12535,
  [SMALL_STATE(930)] = 12539,
  [SMALL_STATE(931)] = 12543,
  [SMALL_STATE(932)] = 12547,
  [SMALL_STATE(933)] = 12551,
  [SMALL_STATE(934)] = 12555,
  [SMALL_STATE(935)] = 12559,
  [SMALL_STATE(936)] = 12563,
  [SMALL_STATE(937)] = 12567,
  [SMALL_STATE(938)] = 12571,
  [SMALL_STATE(939)] = 12575,
  [SMALL_STATE(940)] = 12579,
  [SMALL_STATE(941)] = 12583,
  [SMALL_STATE(942)] = 12587,
  [SMALL_STATE(943)] = 12591,
  [SMALL_STATE(944)] = 12595,
  [SMALL_STATE(945)] = 12599,
  [SMALL_STATE(946)] = 12603,
  [SMALL_STATE(947)] = 12607,
  [SMALL_STATE(948)] = 12611,
  [SMALL_STATE(949)] = 12615,
  [SMALL_STATE(950)] = 12619,
  [SMALL_STATE(951)] = 12623,
  [SMALL_STATE(952)] = 12627,
  [SMALL_STATE(953)] = 12631,
  [SMALL_STATE(954)] = 12635,
  [SMALL_STATE(955)] = 12639,
  [SMALL_STATE(956)] = 12643,
  [SMALL_STATE(957)] = 12647,
  [SMALL_STATE(958)] = 12651,
  [SMALL_STATE(959)] = 12655,
  [SMALL_STATE(960)] = 12659,
  [SMALL_STATE(961)] = 12663,
  [SMALL_STATE(962)] = 12667,
  [SMALL_STATE(963)] = 12671,
  [SMALL_STATE(964)] = 12675,
  [SMALL_STATE(965)] = 12679,
  [SMALL_STATE(966)] = 12683,
  [SMALL_STATE(967)] = 12687,
  [SMALL_STATE(968)] = 12691,
  [SMALL_STATE(969)] = 12695,
  [SMALL_STATE(970)] = 12699,
  [SMALL_STATE(971)] = 12703,
  [SMALL_STATE(972)] = 12707,
  [SMALL_STATE(973)] = 12711,
  [SMALL_STATE(974)] = 12715,
  [SMALL_STATE(975)] = 12719,
  [SMALL_STATE(976)] = 12723,
  [SMALL_STATE(977)] = 12727,
  [SMALL_STATE(978)] = 12731,
  [SMALL_STATE(979)] = 12735,
  [SMALL_STATE(980)] = 12739,
  [SMALL_STATE(981)] = 12743,
  [SMALL_STATE(982)] = 12747,
  [SMALL_STATE(983)] = 12751,
  [SMALL_STATE(984)] = 12755,
  [SMALL_STATE(985)] = 12759,
  [SMALL_STATE(986)] = 12763,
  [SMALL_STATE(987)] = 12767,
  [SMALL_STATE(988)] = 12771,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(559),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(987),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(556),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(984),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(979),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(336),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(976),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(673),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(374),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 34),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 34),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 27),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 24),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(742),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 40),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 38),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 46),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(641),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 31),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(638),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 26),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 20),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 27),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 27),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 33),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 38),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 33),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(372),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 33),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 30),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 47),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 47),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 38),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 38),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(391),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 44),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 37),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 53),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 22),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 43),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 35),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 18),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 42),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 53),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 68),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 34),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 41),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 67),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 25),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 66),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 64),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 27),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 63),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 32),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 62),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 27),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 61),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 33),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 32),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 32),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 60),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 59),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 58),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 57),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 38),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 47),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 33),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 54),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 38),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 56),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 47),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(329),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(892),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 20),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(320),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(335),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(653),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(657),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(27),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(589),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(978),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(545),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(462),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(137),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(639),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(319),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(576),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 34),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(972),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(677),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 19),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 65),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 52),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 52),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 51),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 45),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 48),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 49),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 50),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 39),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 55),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2017] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
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
