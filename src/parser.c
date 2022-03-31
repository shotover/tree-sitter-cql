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
#define STATE_COUNT 958
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 305
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
  aux_sym_update_assignments_token1 = 67,
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
  sym_update_assignments = 187,
  sym_assignment_element = 188,
  sym_indexed_column = 189,
  sym_use = 190,
  sym_grant = 191,
  sym_revoke = 192,
  sym_privilege = 193,
  sym_resource = 194,
  sym_list_roles = 195,
  sym_list_permissions = 196,
  sym_drop_aggregate = 197,
  sym_drop_materialized_view = 198,
  sym_drop_function = 199,
  sym_drop_keyspace = 200,
  sym_drop_role = 201,
  sym_drop_table = 202,
  sym_drop_trigger = 203,
  sym_drop_type = 204,
  sym_drop_user = 205,
  sym_create_aggregate = 206,
  sym_init_cond_definition = 207,
  sym_init_cond_list = 208,
  sym_init_cond_nested_list = 209,
  sym_init_cond_hash = 210,
  sym_init_cond_hash_item = 211,
  sym_create_materialized_view = 212,
  sym_materialized_view_where = 213,
  sym_column_not_null = 214,
  sym_create_function = 215,
  sym_data_type = 216,
  sym_data_type_name = 217,
  sym_data_type_definition = 218,
  sym_return_mode = 219,
  sym_create_keyspace = 220,
  sym_replication_list_item = 221,
  sym_durable_writes = 222,
  sym_create_role = 223,
  sym_role_with = 224,
  sym_role_with_option = 225,
  sym_option_hash = 226,
  sym_option_hash_item = 227,
  sym_create_table = 228,
  sym_column_definition_list = 229,
  sym_column_definition = 230,
  sym_primary_key_column = 231,
  sym_primary_key_element = 232,
  sym_primary_key_definition = 233,
  sym_compound_key = 234,
  sym_clustering_key_list = 235,
  sym_composite_key = 236,
  sym_partition_key_list = 237,
  sym_with_element = 238,
  sym_table_options = 239,
  sym_table_option_item = 240,
  sym_table_option_name = 241,
  sym_table_option_value = 242,
  sym_compact_storage = 243,
  sym_clustering_order = 244,
  sym_create_trigger = 245,
  sym_trigger_class = 246,
  sym_create_type = 247,
  sym_typed_name = 248,
  sym_create_user = 249,
  sym_user_with = 250,
  sym_user_password = 251,
  sym_user_super_user = 252,
  sym_alter_materialized_view = 253,
  sym_alter_keyspace = 254,
  sym_replication_list = 255,
  sym_alter_role = 256,
  sym_alter_table = 257,
  sym_alter_table_operation = 258,
  sym_alter_table_add = 259,
  sym_alter_table_drop_columns = 260,
  sym_alter_table_drop_compact_storage = 261,
  sym_alter_table_rename = 262,
  sym_alter_type = 263,
  sym_alter_type_operation = 264,
  sym_alter_type_alter_type = 265,
  sym_alter_type_add = 266,
  sym_alter_type_rename = 267,
  sym_alter_type_rename_item = 268,
  sym_alter_user = 269,
  sym_apply_batch = 270,
  sym_aggregate_name = 271,
  sym_function_name = 272,
  sym_short_index_name = 273,
  sym_index_name = 274,
  sym_keyspace_name = 275,
  sym_materialized_view_name = 276,
  sym_role_name = 277,
  sym_table_name = 278,
  sym_trigger_name = 279,
  sym_type_name = 280,
  sym_user_name = 281,
  aux_sym_source_file_repeat1 = 282,
  aux_sym_select_elements_repeat1 = 283,
  aux_sym_function_args_repeat1 = 284,
  aux_sym_relation_elements_repeat1 = 285,
  aux_sym_relation_element_repeat1 = 286,
  aux_sym_relation_element_repeat2 = 287,
  aux_sym_delete_column_list_repeat1 = 288,
  aux_sym_expression_list_repeat1 = 289,
  aux_sym_assignment_map_repeat1 = 290,
  aux_sym_assignment_set_repeat1 = 291,
  aux_sym_update_assignments_repeat1 = 292,
  aux_sym_init_cond_nested_list_repeat1 = 293,
  aux_sym_init_cond_hash_repeat1 = 294,
  aux_sym_materialized_view_where_repeat1 = 295,
  aux_sym_create_function_repeat1 = 296,
  aux_sym_data_type_definition_repeat1 = 297,
  aux_sym_role_with_repeat1 = 298,
  aux_sym_option_hash_repeat1 = 299,
  aux_sym_column_definition_list_repeat1 = 300,
  aux_sym_clustering_key_list_repeat1 = 301,
  aux_sym_table_options_repeat1 = 302,
  aux_sym_replication_list_repeat1 = 303,
  aux_sym_alter_type_rename_repeat1 = 304,
  anon_alias_sym_aggregate = 305,
  anon_alias_sym_alias = 306,
  anon_alias_sym_assignment_operand = 307,
  anon_alias_sym_code_block = 308,
  anon_alias_sym_column = 309,
  anon_alias_sym_entry = 310,
  anon_alias_sym_finalfunc = 311,
  anon_alias_sym_full = 312,
  anon_alias_sym_function = 313,
  anon_alias_sym_function_name = 314,
  anon_alias_sym_hash_key = 315,
  anon_alias_sym_index = 316,
  anon_alias_sym_key = 317,
  anon_alias_sym_keyspace = 318,
  anon_alias_sym_language = 319,
  anon_alias_sym_limit_value = 320,
  anon_alias_sym_login = 321,
  anon_alias_sym_materialized_view = 322,
  anon_alias_sym_partition_key = 323,
  anon_alias_sym_password = 324,
  anon_alias_sym_primary_key = 325,
  anon_alias_sym_role = 326,
  anon_alias_sym_sfunc = 327,
  anon_alias_sym_table = 328,
  anon_alias_sym_time = 329,
  anon_alias_sym_trigger = 330,
  anon_alias_sym_ttl = 331,
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
  [aux_sym_update_assignments_token1] = "SET",
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
  [sym_update_assignments] = "update_assignments",
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
  [aux_sym_update_assignments_repeat1] = "update_assignments_repeat1",
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
  [aux_sym_update_assignments_token1] = aux_sym_update_assignments_token1,
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
  [sym_update_assignments] = sym_update_assignments,
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
  [aux_sym_update_assignments_repeat1] = aux_sym_update_assignments_repeat1,
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
  [aux_sym_update_assignments_token1] = {
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
  [sym_update_assignments] = {
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
  [aux_sym_update_assignments_repeat1] = {
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
    [1] = anon_alias_sym_table,
  },
  [17] = {
    [3] = anon_alias_sym_role,
  },
  [18] = {
    [0] = anon_alias_sym_function_name,
  },
  [19] = {
    [1] = anon_alias_sym_limit_value,
  },
  [20] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [21] = {
    [2] = anon_alias_sym_time,
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
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_index,
  },
  [27] = {
    [2] = anon_alias_sym_ttl,
  },
  [28] = {
    [1] = anon_alias_sym_function,
  },
  [29] = {
    [1] = anon_alias_sym_role,
  },
  [30] = {
    [2] = anon_alias_sym_table,
  },
  [31] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_materialized_view,
  },
  [32] = {
    [1] = anon_alias_sym_password,
  },
  [33] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [34] = {
    [5] = anon_alias_sym_role,
  },
  [35] = {
    [1] = anon_alias_sym_column,
  },
  [36] = {
    [2] = anon_alias_sym_password,
  },
  [37] = {
    [2] = anon_alias_sym_login,
  },
  [38] = {
    [2] = anon_alias_sym_user,
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
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [44] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [45] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [46] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [47] = {
    [4] = anon_alias_sym_keyspace,
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
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
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
          lookahead == 'p') ADVANCE(43);
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
          lookahead == 'n') ADVANCE(917);
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
          lookahead == 'd') ADVANCE(814);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(889);
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
          lookahead == 'j') ADVANCE(889);
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
          lookahead == 'f') ADVANCE(914);
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
          lookahead == 'f') ADVANCE(918);
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
          lookahead == 'a') ADVANCE(251);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
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
    case 42:
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
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 44:
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
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
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
          lookahead == 'e') ADVANCE(48);
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
          lookahead == 'l') ADVANCE(47);
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
          lookahead == 'n') ADVANCE(50);
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
          lookahead == 'm') ADVANCE(49);
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
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
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
          lookahead == 't') ADVANCE(46);
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
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
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
          lookahead == 'u') ADVANCE(915);
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
          lookahead == 'c') ADVANCE(810);
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
          lookahead == 'c') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
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
          lookahead == 'e') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
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
          lookahead == 'i') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
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
          lookahead == 'i') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
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
          lookahead == 'l') ADVANCE(885);
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
          lookahead == 'l') ADVANCE(794);
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
          lookahead == 'l') ADVANCE(816);
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
          lookahead == 'n') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
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
          lookahead == 'n') ADVANCE(903);
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
          lookahead == 'r') ADVANCE(916);
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
          lookahead == 'r') ADVANCE(809);
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
          lookahead == 's') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
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
          lookahead == 's') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
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
          lookahead == 't') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
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
          lookahead == 't') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(817);
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
          lookahead == 'u') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(829);
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
          lookahead == 'y') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(815);
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 549},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 549},
  [58] = {.lex_state = 549},
  [59] = {.lex_state = 549},
  [60] = {.lex_state = 549},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 548},
  [64] = {.lex_state = 549},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 549},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 549},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 548},
  [80] = {.lex_state = 549},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 549},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 549},
  [88] = {.lex_state = 548},
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
  [118] = {.lex_state = 549},
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
  [139] = {.lex_state = 548},
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
  [154] = {.lex_state = 549},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 549},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 549},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 549},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 549},
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
  [185] = {.lex_state = 549},
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
  [217] = {.lex_state = 1},
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
  [297] = {.lex_state = 548},
  [298] = {.lex_state = 548},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 548},
  [301] = {.lex_state = 548},
  [302] = {.lex_state = 548},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 548},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 40},
  [310] = {.lex_state = 51},
  [311] = {.lex_state = 548},
  [312] = {.lex_state = 548},
  [313] = {.lex_state = 51},
  [314] = {.lex_state = 548},
  [315] = {.lex_state = 548},
  [316] = {.lex_state = 548},
  [317] = {.lex_state = 548},
  [318] = {.lex_state = 548},
  [319] = {.lex_state = 40},
  [320] = {.lex_state = 40},
  [321] = {.lex_state = 548},
  [322] = {.lex_state = 548},
  [323] = {.lex_state = 549},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 548},
  [326] = {.lex_state = 548},
  [327] = {.lex_state = 548},
  [328] = {.lex_state = 549},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 11},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 11},
  [333] = {.lex_state = 11},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 549},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 549},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 15},
  [354] = {.lex_state = 549},
  [355] = {.lex_state = 12},
  [356] = {.lex_state = 15},
  [357] = {.lex_state = 13},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 10},
  [360] = {.lex_state = 51},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 24},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 549},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 19},
  [373] = {.lex_state = 10},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 10},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 10},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 25},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 20},
  [405] = {.lex_state = 20},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 10},
  [412] = {.lex_state = 10},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 20},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 549},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 20},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 20},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 20},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 549},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 549},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 22},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 10},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 10},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 10},
  [495] = {.lex_state = 10},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 548},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 20},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 20},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 10},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 10},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 10},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 10},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 10},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 10},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 17},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 549},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 10},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 549},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 10},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
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
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 549},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 548},
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
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 10},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 10},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 549},
  [722] = {.lex_state = 549},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 549},
  [725] = {.lex_state = 549},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 548},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 549},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 548},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 548},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
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
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 40},
  [808] = {.lex_state = 10},
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
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 10},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 548},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 548},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 10},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 548},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 548},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 10},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 10},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 548},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 10},
  [938] = {.lex_state = 10},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 549},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 10},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 548},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
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
    [aux_sym_update_assignments_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(774),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(193),
    [sym_delete_statement] = STATE(193),
    [sym_begin_batch] = STATE(486),
    [sym_insert_statement] = STATE(193),
    [sym_truncate] = STATE(193),
    [sym_create_index] = STATE(193),
    [sym_drop_index] = STATE(193),
    [sym_update] = STATE(193),
    [sym_use] = STATE(193),
    [sym_grant] = STATE(193),
    [sym_revoke] = STATE(193),
    [sym_list_roles] = STATE(193),
    [sym_list_permissions] = STATE(193),
    [sym_drop_aggregate] = STATE(193),
    [sym_drop_materialized_view] = STATE(193),
    [sym_drop_function] = STATE(193),
    [sym_drop_keyspace] = STATE(193),
    [sym_drop_role] = STATE(193),
    [sym_drop_table] = STATE(193),
    [sym_drop_trigger] = STATE(193),
    [sym_drop_type] = STATE(193),
    [sym_drop_user] = STATE(193),
    [sym_create_aggregate] = STATE(193),
    [sym_create_materialized_view] = STATE(193),
    [sym_create_function] = STATE(193),
    [sym_create_keyspace] = STATE(193),
    [sym_create_role] = STATE(193),
    [sym_create_table] = STATE(193),
    [sym_create_trigger] = STATE(193),
    [sym_create_type] = STATE(193),
    [sym_create_user] = STATE(193),
    [sym_alter_materialized_view] = STATE(193),
    [sym_alter_keyspace] = STATE(193),
    [sym_alter_role] = STATE(193),
    [sym_alter_table] = STATE(193),
    [sym_alter_type] = STATE(193),
    [sym_alter_user] = STATE(193),
    [sym_apply_batch] = STATE(193),
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
    STATE(486), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(193), 37,
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
    STATE(486), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(193), 37,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(93), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(674), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(878), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(872), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(856), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(829), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(240), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(846), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(921), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(811), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(805), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(799), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(922), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(387), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(723), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(881), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(744), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(906), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(37), 1,
      sym_data_type_name,
    STATE(665), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(571), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(462), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_assignments_token1,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1045] = 1,
    ACTIONS(93), 25,
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
  [1073] = 3,
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
  [1105] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(36), 1,
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
  [1163] = 3,
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
  [1194] = 1,
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
  [1221] = 3,
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
  [1252] = 3,
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
  [1283] = 3,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(55), 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1313] = 1,
    ACTIONS(114), 23,
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
  [1339] = 3,
    ACTIONS(118), 1,
      aux_sym_relation_elements_token1,
    STATE(39), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(116), 21,
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
  [1369] = 8,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(59), 1,
      sym_where_spec,
    STATE(75), 1,
      sym_order_spec,
    STATE(154), 1,
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
    STATE(60), 1,
      sym_where_spec,
    STATE(82), 1,
      sym_order_spec,
    STATE(161), 1,
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
    STATE(87), 1,
      sym_order_spec,
    STATE(185), 1,
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
  [1514] = 1,
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
  [1539] = 1,
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
  [1564] = 1,
    ACTIONS(116), 22,
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
  [1614] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    STATE(39), 1,
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
  [1643] = 1,
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
  [1668] = 1,
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
  [1693] = 1,
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
  [1718] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    STATE(48), 1,
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
  [1797] = 1,
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
  [1821] = 1,
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
  [1845] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(82), 1,
      sym_order_spec,
    STATE(161), 1,
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
  [1879] = 1,
    ACTIONS(165), 21,
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
  [1903] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    STATE(80), 1,
      sym_order_spec,
    STATE(163), 1,
      sym_limit_spec,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1937] = 6,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(75), 1,
      sym_order_spec,
    STATE(154), 1,
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
  [1971] = 1,
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
    ACTIONS(179), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(177), 18,
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
  [2045] = 1,
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
  [2068] = 2,
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
  [2093] = 2,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(187), 19,
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
  [2118] = 2,
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
  [2143] = 2,
    ACTIONS(197), 1,
      aux_sym_relation_element_token1,
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
  [2190] = 1,
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
  [2212] = 1,
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
  [2234] = 1,
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
  [2256] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(73), 1,
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
  [2282] = 1,
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
  [2304] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    STATE(163), 1,
      sym_limit_spec,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2332] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2354] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(214), 17,
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
  [2380] = 2,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(219), 18,
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
  [2404] = 9,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(496), 1,
      sym_expression,
    STATE(694), 1,
      sym_expression_list,
    STATE(554), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2442] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(235), 1,
      aux_sym_select_statement_token4,
    STATE(172), 1,
      sym_limit_spec,
    ACTIONS(233), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2470] = 1,
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
  [2492] = 4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    STATE(154), 1,
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
  [2520] = 4,
    ACTIONS(241), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(237), 1,
      sym_using_ttl_timestamp,
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
  [2548] = 4,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(247), 1,
      aux_sym_delete_statement_token2,
    STATE(251), 1,
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
  [2576] = 2,
    ACTIONS(251), 1,
      aux_sym_privilege_token2,
    ACTIONS(249), 18,
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
  [2600] = 3,
    STATE(276), 1,
      sym_user_super_user,
    ACTIONS(255), 2,
      aux_sym_role_with_option_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2626] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(161), 1,
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
  [2654] = 9,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(496), 1,
      sym_expression,
    STATE(766), 1,
      sym_expression_list,
    STATE(554), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2692] = 1,
    ACTIONS(257), 19,
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
  [2714] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [2739] = 1,
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
  [2760] = 3,
    ACTIONS(267), 1,
      aux_sym_delete_statement_token2,
    STATE(218), 1,
      sym_if_spec,
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
  [2785] = 1,
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
  [2806] = 3,
    ACTIONS(273), 1,
      aux_sym_create_keyspace_token1,
    STATE(262), 1,
      sym_role_with,
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
  [2831] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(249), 1,
      sym_with_element,
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
  [2856] = 3,
    ACTIONS(281), 1,
      aux_sym_relation_elements_token1,
    STATE(128), 1,
      aux_sym_role_with_repeat1,
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
  [2881] = 1,
    ACTIONS(283), 18,
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
  [2902] = 1,
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
  [2923] = 1,
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
  [2944] = 3,
    ACTIONS(281), 1,
      aux_sym_relation_elements_token1,
    STATE(96), 1,
      aux_sym_role_with_repeat1,
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
  [2969] = 3,
    ACTIONS(293), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
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
  [2994] = 3,
    ACTIONS(297), 1,
      aux_sym_delete_statement_token2,
    STATE(272), 1,
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
  [3019] = 3,
    ACTIONS(273), 1,
      aux_sym_create_keyspace_token1,
    STATE(273), 1,
      sym_role_with,
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
  [3044] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_create_function_repeat1,
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
  [3069] = 3,
    ACTIONS(307), 1,
      aux_sym_delete_statement_token2,
    STATE(212), 1,
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
  [3094] = 3,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
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
  [3119] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(73), 1,
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
  [3144] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
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
  [3169] = 3,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3194] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_create_function_repeat1,
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
  [3219] = 2,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(323), 17,
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
  [3242] = 1,
    ACTIONS(327), 18,
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
  [3263] = 3,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3288] = 3,
    ACTIONS(333), 1,
      aux_sym_delete_statement_token2,
    STATE(232), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3313] = 3,
    ACTIONS(273), 1,
      aux_sym_create_keyspace_token1,
    STATE(234), 1,
      sym_role_with,
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
  [3338] = 2,
    ACTIONS(339), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(337), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3361] = 2,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(341), 17,
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
  [3384] = 1,
    ACTIONS(345), 18,
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
  [3405] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(290), 1,
      sym_with_element,
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
  [3430] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(250), 1,
      sym_with_element,
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
  [3455] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(268), 1,
      sym_with_element,
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
  [3480] = 2,
    ACTIONS(355), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(353), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3503] = 1,
    ACTIONS(357), 18,
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
  [3524] = 3,
    ACTIONS(361), 1,
      aux_sym_delete_statement_token2,
    STATE(282), 1,
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
  [3549] = 1,
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
  [3570] = 1,
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
  [3591] = 3,
    ACTIONS(367), 1,
      aux_sym_delete_statement_token2,
    STATE(211), 1,
      sym_if_spec,
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
  [3616] = 3,
    ACTIONS(371), 1,
      aux_sym_relation_elements_token1,
    STATE(128), 1,
      aux_sym_role_with_repeat1,
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
  [3641] = 3,
    ACTIONS(376), 1,
      aux_sym_delete_statement_token2,
    STATE(222), 1,
      sym_if_spec,
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
  [3666] = 3,
    ACTIONS(380), 1,
      aux_sym_create_index_token3,
    ACTIONS(382), 1,
      aux_sym_list_roles_token2,
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
  [3691] = 3,
    ACTIONS(386), 1,
      aux_sym_list_roles_token2,
    ACTIONS(388), 1,
      aux_sym_list_roles_token3,
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
  [3716] = 1,
    ACTIONS(214), 18,
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
  [3737] = 1,
    ACTIONS(390), 18,
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
  [3758] = 3,
    ACTIONS(394), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
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
  [3783] = 3,
    ACTIONS(399), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3808] = 1,
    ACTIONS(402), 18,
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
  [3829] = 3,
    ACTIONS(406), 1,
      aux_sym_delete_statement_token2,
    STATE(208), 1,
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
  [3854] = 1,
    ACTIONS(408), 18,
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
  [3875] = 8,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(610), 1,
      sym_expression,
    STATE(554), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3910] = 3,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(200), 1,
      sym_using_ttl_timestamp,
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
  [3935] = 1,
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
  [3956] = 3,
    ACTIONS(416), 1,
      aux_sym_delete_statement_token2,
    STATE(293), 1,
      sym_if_spec,
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
  [3981] = 1,
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
  [4002] = 3,
    ACTIONS(422), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
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
  [4027] = 3,
    ACTIONS(426), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
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
  [4052] = 1,
    ACTIONS(249), 18,
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
  [4073] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4098] = 3,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(261), 1,
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
  [4123] = 3,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    STATE(106), 1,
      aux_sym_table_options_repeat1,
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
  [4148] = 1,
    ACTIONS(434), 18,
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
  [4169] = 3,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    STATE(213), 1,
      sym_with_element,
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
  [4194] = 2,
    ACTIONS(440), 1,
      aux_sym_relation_elements_token1,
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
  [4216] = 1,
    ACTIONS(442), 17,
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
  [4236] = 2,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4258] = 1,
    ACTIONS(444), 17,
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
  [4278] = 1,
    ACTIONS(446), 17,
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
  [4298] = 1,
    ACTIONS(448), 17,
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
  [4318] = 1,
    ACTIONS(450), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4338] = 1,
    ACTIONS(452), 17,
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
  [4358] = 1,
    ACTIONS(454), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4378] = 2,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
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
  [4400] = 1,
    ACTIONS(456), 17,
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
  [4420] = 2,
    ACTIONS(235), 1,
      aux_sym_select_statement_token4,
    ACTIONS(233), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4442] = 2,
    ACTIONS(460), 1,
      aux_sym_list_roles_token2,
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
  [4464] = 2,
    ACTIONS(464), 1,
      aux_sym_list_roles_token3,
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
  [4486] = 1,
    ACTIONS(397), 17,
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
  [4526] = 1,
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
  [4546] = 1,
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
  [4566] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [4586] = 1,
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
  [4606] = 2,
    ACTIONS(478), 1,
      aux_sym_select_statement_token4,
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
  [4628] = 1,
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
  [4648] = 1,
    ACTIONS(482), 17,
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
  [4668] = 1,
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
  [4688] = 1,
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
  [4708] = 1,
    ACTIONS(488), 17,
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
  [4728] = 2,
    ACTIONS(492), 1,
      aux_sym_relation_elements_token1,
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
  [4750] = 2,
    ACTIONS(496), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(494), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(392), 17,
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
  [4792] = 1,
    ACTIONS(498), 17,
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
  [4812] = 1,
    ACTIONS(500), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4832] = 1,
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
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4852] = 2,
    ACTIONS(506), 1,
      anon_sym_DOT,
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
  [4874] = 2,
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
  [4896] = 1,
    ACTIONS(369), 17,
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
  [4916] = 1,
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
  [4936] = 1,
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
  [4955] = 1,
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
  [4974] = 1,
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
  [4993] = 1,
    ACTIONS(516), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5012] = 1,
    ACTIONS(518), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5031] = 2,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(520), 15,
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
  [5052] = 1,
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
  [5071] = 1,
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
  [5090] = 1,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5109] = 1,
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
  [5128] = 1,
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
  [5147] = 1,
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
  [5166] = 1,
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
  [5185] = 1,
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
  [5204] = 1,
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
  [5223] = 1,
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
  [5242] = 1,
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
  [5261] = 1,
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
  [5280] = 1,
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
  [5299] = 1,
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
  [5318] = 1,
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
  [5337] = 1,
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
  [5356] = 1,
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
  [5375] = 1,
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
  [5394] = 1,
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
  [5413] = 1,
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
  [5432] = 1,
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
  [5451] = 1,
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
  [5470] = 1,
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
  [5489] = 9,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(550), 1,
      sym_constant,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(386), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [5524] = 1,
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
  [5543] = 1,
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
  [5562] = 1,
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
  [5581] = 1,
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
  [5600] = 1,
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
  [5619] = 1,
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
  [5638] = 1,
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
  [5657] = 1,
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
  [5676] = 1,
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
  [5695] = 1,
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
  [5714] = 1,
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
  [5733] = 1,
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
  [5752] = 1,
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
  [5771] = 1,
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
  [5790] = 1,
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
  [5809] = 1,
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
  [5828] = 1,
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
  [5847] = 1,
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
  [5866] = 1,
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
  [5885] = 1,
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
  [5904] = 1,
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
  [5923] = 1,
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
  [5942] = 1,
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
  [5961] = 1,
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
  [5980] = 1,
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
  [5999] = 1,
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
  [6018] = 1,
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
  [6037] = 1,
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
  [6056] = 1,
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
  [6075] = 1,
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
  [6094] = 1,
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
  [6113] = 1,
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
  [6132] = 1,
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
  [6151] = 1,
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
  [6170] = 1,
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
  [6189] = 1,
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
  [6208] = 1,
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
  [6227] = 1,
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
  [6246] = 1,
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
  [6265] = 1,
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
  [6284] = 1,
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
  [6303] = 1,
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
  [6322] = 1,
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
  [6341] = 1,
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
  [6360] = 1,
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
  [6379] = 1,
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
  [6398] = 1,
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
  [6417] = 1,
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
  [6436] = 1,
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
  [6455] = 1,
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
  [6474] = 1,
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
  [6493] = 1,
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
  [6512] = 1,
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
  [6531] = 1,
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
  [6550] = 1,
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
  [6569] = 1,
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
  [6588] = 1,
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
  [6607] = 1,
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
  [6626] = 1,
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
  [6645] = 1,
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
  [6664] = 1,
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
  [6683] = 1,
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
  [6702] = 1,
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
  [6721] = 1,
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
  [6740] = 1,
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
  [6759] = 1,
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
  [6778] = 1,
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
  [6797] = 1,
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
  [6816] = 1,
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
  [6835] = 1,
    ACTIONS(233), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6854] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6873] = 1,
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
  [6892] = 1,
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
  [6911] = 1,
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
  [6930] = 1,
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
  [6949] = 1,
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
  [6968] = 1,
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
  [6987] = 1,
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
  [7006] = 1,
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
  [7025] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(209), 1,
      sym_init_cond_definition,
    STATE(98), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7053] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(260), 1,
      sym_init_cond_definition,
    STATE(98), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7081] = 1,
    ACTIONS(708), 15,
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
  [7099] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(650), 1,
      sym_init_cond_definition,
    STATE(98), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7127] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(202), 1,
      sym_init_cond_definition,
    STATE(98), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7155] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(274), 1,
      sym_init_cond_definition,
    STATE(98), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7183] = 9,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(712), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(438), 1,
      sym_init_cond_hash_item,
    STATE(442), 1,
      sym_init_cond_list,
    STATE(443), 1,
      sym_constant,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7216] = 8,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(714), 1,
      anon_sym_STAR,
    ACTIONS(716), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(727), 1,
      sym_function_args,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(457), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7247] = 7,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(716), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(770), 1,
      sym_function_args,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(457), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7275] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(718), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(43), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7300] = 5,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(652), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7323] = 6,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(720), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(560), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(639), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(225), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7348] = 4,
    ACTIONS(724), 1,
      aux_sym_privilege_token1,
    ACTIONS(726), 1,
      aux_sym_resource_token4,
    STATE(130), 1,
      sym_privilege,
    ACTIONS(722), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7368] = 11,
    ACTIONS(728), 1,
      aux_sym_truncate_token2,
    ACTIONS(730), 1,
      aux_sym_create_index_token2,
    ACTIONS(732), 1,
      aux_sym_resource_token2,
    ACTIONS(734), 1,
      aux_sym_resource_token5,
    ACTIONS(736), 1,
      aux_sym_resource_token6,
    ACTIONS(738), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(740), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(742), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(744), 1,
      aux_sym_drop_type_token1,
    ACTIONS(746), 1,
      aux_sym_drop_user_token1,
    ACTIONS(748), 1,
      aux_sym_create_aggregate_token1,
  [7402] = 5,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(750), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(44), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7424] = 5,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(396), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7446] = 10,
    ACTIONS(754), 1,
      aux_sym_truncate_token2,
    ACTIONS(756), 1,
      aux_sym_create_index_token2,
    ACTIONS(758), 1,
      aux_sym_resource_token2,
    ACTIONS(760), 1,
      aux_sym_resource_token5,
    ACTIONS(762), 1,
      aux_sym_resource_token6,
    ACTIONS(764), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(766), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(768), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(770), 1,
      aux_sym_drop_type_token1,
    ACTIONS(772), 1,
      aux_sym_drop_user_token1,
  [7477] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(443), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7496] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(112), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7515] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(45), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7534] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(53), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7553] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(605), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7572] = 3,
    ACTIONS(724), 1,
      aux_sym_privilege_token1,
    STATE(955), 1,
      sym_privilege,
    ACTIONS(722), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7589] = 3,
    ACTIONS(724), 1,
      aux_sym_privilege_token1,
    STATE(953), 1,
      sym_privilege,
    ACTIONS(722), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7606] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(815), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7625] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(550), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7644] = 6,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      aux_sym_relation_element_token1,
    ACTIONS(782), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(784), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(776), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(778), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7667] = 6,
    ACTIONS(277), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(786), 1,
      aux_sym_drop_index_token1,
    ACTIONS(788), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(790), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(270), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7690] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(452), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7709] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(499), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7728] = 4,
    ACTIONS(227), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(397), 1,
      sym_constant,
    ACTIONS(225), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7747] = 5,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      aux_sym_relation_element_token1,
    ACTIONS(782), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(776), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(778), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7767] = 6,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(752), 1,
      sym_index_column_spec,
    STATE(901), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7788] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(804), 1,
      sym_object_name,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7811] = 6,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(726), 1,
      sym_index_column_spec,
    STATE(901), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7832] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7855] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(808), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7878] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(810), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7901] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(812), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7924] = 6,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(902), 1,
      sym_index_column_spec,
    STATE(901), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7945] = 6,
    ACTIONS(814), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(816), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(818), 1,
      sym_object_name,
    STATE(195), 1,
      sym_table_options,
    STATE(940), 1,
      sym_table_option_name,
    STATE(149), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7966] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(820), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7989] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(822), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8012] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(824), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8035] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(826), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8058] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(828), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8081] = 6,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(786), 1,
      sym_index_column_spec,
    STATE(901), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8102] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(830), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8125] = 7,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(832), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(292), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8148] = 3,
    ACTIONS(838), 1,
      aux_sym_relation_element_token1,
    ACTIONS(834), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(836), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8162] = 5,
    ACTIONS(814), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(816), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(818), 1,
      sym_object_name,
    STATE(940), 1,
      sym_table_option_name,
    STATE(180), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8180] = 5,
    ACTIONS(840), 1,
      aux_sym_privilege_token3,
    ACTIONS(842), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(844), 1,
      aux_sym_alter_table_rename_token1,
    STATE(278), 1,
      sym_alter_type_operation,
    STATE(279), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8198] = 6,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(846), 1,
      sym_object_name,
    STATE(46), 1,
      sym_relation_element,
    STATE(358), 1,
      sym_function_call,
    STATE(600), 1,
      sym_column_not_null,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8218] = 6,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(848), 1,
      sym_object_name,
    STATE(52), 1,
      sym_relation_element,
    STATE(64), 1,
      sym_relation_elements,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8238] = 5,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(850), 1,
      aux_sym__decimal_literal_token1,
    STATE(634), 1,
      sym__decimal_literal,
    STATE(633), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8256] = 7,
    ACTIONS(852), 1,
      aux_sym_truncate_token2,
    ACTIONS(854), 1,
      aux_sym_privilege_token1,
    ACTIONS(856), 1,
      aux_sym_resource_token2,
    ACTIONS(858), 1,
      aux_sym_resource_token5,
    ACTIONS(860), 1,
      aux_sym_resource_token6,
    ACTIONS(862), 1,
      sym_object_name,
    STATE(164), 1,
      sym_resource,
  [8278] = 7,
    ACTIONS(852), 1,
      aux_sym_truncate_token2,
    ACTIONS(854), 1,
      aux_sym_privilege_token1,
    ACTIONS(856), 1,
      aux_sym_resource_token2,
    ACTIONS(858), 1,
      aux_sym_resource_token5,
    ACTIONS(860), 1,
      aux_sym_resource_token6,
    ACTIONS(862), 1,
      sym_object_name,
    STATE(746), 1,
      sym_resource,
  [8300] = 3,
    ACTIONS(868), 1,
      aux_sym_relation_element_token1,
    ACTIONS(864), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(866), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8314] = 7,
    ACTIONS(870), 1,
      aux_sym_select_statement_token2,
    ACTIONS(872), 1,
      aux_sym_select_statement_token3,
    ACTIONS(874), 1,
      anon_sym_STAR,
    ACTIONS(876), 1,
      sym_object_name,
    STATE(451), 1,
      sym_select_element,
    STATE(519), 1,
      sym_function_call,
    STATE(658), 1,
      sym_select_elements,
  [8336] = 7,
    ACTIONS(852), 1,
      aux_sym_truncate_token2,
    ACTIONS(854), 1,
      aux_sym_privilege_token1,
    ACTIONS(856), 1,
      aux_sym_resource_token2,
    ACTIONS(858), 1,
      aux_sym_resource_token5,
    ACTIONS(860), 1,
      aux_sym_resource_token6,
    ACTIONS(862), 1,
      sym_object_name,
    STATE(789), 1,
      sym_resource,
  [8358] = 6,
    ACTIONS(874), 1,
      anon_sym_STAR,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      aux_sym_select_statement_token3,
    STATE(451), 1,
      sym_select_element,
    STATE(519), 1,
      sym_function_call,
    STATE(642), 1,
      sym_select_elements,
  [8377] = 2,
    ACTIONS(880), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(882), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8388] = 5,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(848), 1,
      sym_object_name,
    STATE(46), 1,
      sym_relation_element,
    STATE(358), 1,
      sym_function_call,
    STATE(51), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8405] = 6,
    ACTIONS(884), 1,
      aux_sym_truncate_token2,
    ACTIONS(886), 1,
      aux_sym_resource_token2,
    ACTIONS(888), 1,
      aux_sym_resource_token6,
    ACTIONS(890), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(892), 1,
      aux_sym_drop_type_token1,
    ACTIONS(894), 1,
      aux_sym_drop_user_token1,
  [8424] = 5,
    ACTIONS(896), 1,
      aux_sym_from_spec_token1,
    ACTIONS(898), 1,
      sym_object_name,
    STATE(392), 1,
      sym_from_spec,
    STATE(500), 1,
      sym_delete_column_item,
    STATE(580), 1,
      sym_delete_column_list,
  [8440] = 3,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(903), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8452] = 5,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(905), 1,
      anon_sym_DOT,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(540), 1,
      sym_update_assignments,
    STATE(542), 1,
      sym_using_ttl_timestamp,
  [8468] = 5,
    ACTIONS(909), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(911), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(913), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(915), 1,
      aux_sym_role_with_option_token4,
    STATE(100), 1,
      sym_role_with_option,
  [8484] = 1,
    ACTIONS(917), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8492] = 5,
    ACTIONS(919), 1,
      sym__string_literal,
    ACTIONS(921), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(923), 1,
      aux_sym_create_index_token3,
    ACTIONS(925), 1,
      sym_object_name,
    STATE(868), 1,
      sym_short_index_name,
  [8508] = 1,
    ACTIONS(927), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8516] = 3,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
    ACTIONS(929), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(174), 2,
      sym_option_hash,
      sym_table_option_value,
  [8528] = 5,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    ACTIONS(933), 1,
      anon_sym_DOT,
    STATE(543), 1,
      sym_using_ttl_timestamp,
    STATE(547), 1,
      sym_update_assignments,
  [8544] = 1,
    ACTIONS(935), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8552] = 1,
    ACTIONS(937), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8560] = 5,
    ACTIONS(896), 1,
      aux_sym_from_spec_token1,
    ACTIONS(898), 1,
      sym_object_name,
    STATE(394), 1,
      sym_from_spec,
    STATE(500), 1,
      sym_delete_column_item,
    STATE(557), 1,
      sym_delete_column_list,
  [8576] = 4,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(783), 1,
      sym_primary_key_definition,
    STATE(784), 2,
      sym_compound_key,
      sym_composite_key,
  [8590] = 1,
    ACTIONS(943), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8598] = 5,
    ACTIONS(874), 1,
      anon_sym_STAR,
    ACTIONS(945), 1,
      sym_object_name,
    STATE(451), 1,
      sym_select_element,
    STATE(519), 1,
      sym_function_call,
    STATE(642), 1,
      sym_select_elements,
  [8614] = 5,
    ACTIONS(909), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(911), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(913), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(915), 1,
      aux_sym_role_with_option_token4,
    STATE(186), 1,
      sym_role_with_option,
  [8630] = 1,
    ACTIONS(947), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8638] = 3,
    ACTIONS(951), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(423), 1,
      sym_using_timestamp_spec,
    ACTIONS(949), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8650] = 4,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_DOT,
    ACTIONS(957), 1,
      aux_sym_select_element_token1,
    ACTIONS(953), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8664] = 1,
    ACTIONS(959), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8672] = 5,
    ACTIONS(874), 1,
      anon_sym_STAR,
    ACTIONS(945), 1,
      sym_object_name,
    STATE(451), 1,
      sym_select_element,
    STATE(519), 1,
      sym_function_call,
    STATE(564), 1,
      sym_select_elements,
  [8688] = 3,
    ACTIONS(951), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(454), 1,
      sym_using_timestamp_spec,
    ACTIONS(961), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8700] = 4,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(661), 1,
      sym_update_assignments,
    STATE(663), 1,
      sym_using_ttl_timestamp,
  [8713] = 4,
    ACTIONS(963), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(965), 1,
      aux_sym_primary_key_column_token1,
    STATE(400), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(471), 1,
      aux_sym_relation_elements_repeat1,
  [8726] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(970), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8737] = 2,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(974), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8746] = 3,
    ACTIONS(978), 1,
      aux_sym_primary_key_column_token1,
    STATE(560), 1,
      sym_primary_key_column,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8757] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(951), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(105), 1,
      sym_where_spec,
    STATE(641), 1,
      sym_using_timestamp_spec,
  [8770] = 4,
    ACTIONS(980), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(563), 1,
      sym_column_definition,
    STATE(683), 1,
      sym_primary_key_element,
  [8783] = 4,
    ACTIONS(919), 1,
      sym__string_literal,
    ACTIONS(925), 1,
      sym_object_name,
    ACTIONS(984), 1,
      aux_sym_create_index_token3,
    STATE(908), 1,
      sym_short_index_name,
  [8796] = 4,
    ACTIONS(243), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(535), 1,
      sym_using_ttl_timestamp,
    STATE(536), 1,
      sym_update_assignments,
  [8809] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(951), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(92), 1,
      sym_where_spec,
    STATE(628), 1,
      sym_using_timestamp_spec,
  [8822] = 4,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_function_args_repeat1,
  [8835] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(951), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(142), 1,
      sym_where_spec,
    STATE(636), 1,
      sym_using_timestamp_spec,
  [8848] = 4,
    ACTIONS(980), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(563), 1,
      sym_column_definition,
    STATE(758), 1,
      sym_primary_key_element,
  [8861] = 4,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_COLON,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(432), 1,
      aux_sym_assignment_set_repeat1,
  [8874] = 1,
    ACTIONS(903), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8881] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(998), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8892] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1000), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8903] = 4,
    ACTIONS(963), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1002), 1,
      aux_sym_primary_key_column_token1,
    STATE(458), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(460), 1,
      aux_sym_relation_elements_repeat1,
  [8916] = 1,
    ACTIONS(1004), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8923] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [8933] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      aux_sym_relation_element_repeat2,
  [8943] = 3,
    ACTIONS(1010), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1012), 1,
      sym_object_name,
    STATE(207), 1,
      sym_type_name,
  [8953] = 3,
    ACTIONS(1014), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(281), 1,
      sym_user_name,
  [8963] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_init_cond_hash_repeat1,
  [8973] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      aux_sym_create_function_repeat1,
  [8983] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(738), 1,
      sym_return_mode,
  [8993] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    STATE(472), 1,
      aux_sym_replication_list_repeat1,
  [9003] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_data_type_definition_repeat1,
  [9013] = 3,
    ACTIONS(1037), 1,
      sym_object_name,
    STATE(515), 1,
      sym_column_definition,
    STATE(800), 1,
      sym_column_definition_list,
  [9023] = 3,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(577), 1,
      sym_assignment_element,
    STATE(734), 1,
      sym_indexed_column,
  [9033] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1043), 1,
      aux_sym_where_spec_token1,
    STATE(512), 1,
      aux_sym_update_assignments_repeat1,
  [9043] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_expression_list_repeat1,
  [9053] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9063] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_create_function_repeat1,
  [9073] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [9083] = 3,
    ACTIONS(1056), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1058), 1,
      sym_object_name,
    STATE(245), 1,
      sym_index_name,
  [9093] = 3,
    ACTIONS(1060), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1062), 1,
      aux_sym_insert_values_spec_token1,
    STATE(84), 1,
      sym_insert_values_spec,
  [9103] = 2,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9111] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(501), 1,
      sym_typed_name,
  [9121] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_init_cond_hash_repeat1,
  [9131] = 1,
    ACTIONS(1076), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9137] = 3,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9147] = 3,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      aux_sym_from_spec_token1,
    STATE(425), 1,
      aux_sym_delete_column_list_repeat1,
  [9157] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_assignment_set_repeat1,
  [9167] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_assignment_set_repeat1,
  [9177] = 3,
    ACTIONS(1060), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1062), 1,
      aux_sym_insert_values_spec_token1,
    STATE(83), 1,
      sym_insert_values_spec,
  [9187] = 3,
    ACTIONS(1091), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1093), 1,
      sym_object_name,
    STATE(247), 1,
      sym_table_name,
  [9197] = 3,
    ACTIONS(945), 1,
      sym_object_name,
    STATE(519), 1,
      sym_function_call,
    STATE(576), 1,
      sym_select_element,
  [9207] = 2,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9215] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_assignment_set_repeat1,
  [9225] = 3,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_function_args_repeat1,
  [9235] = 3,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      aux_sym_from_spec_token1,
    STATE(479), 1,
      aux_sym_select_elements_repeat1,
  [9245] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_relation_element_repeat1,
  [9255] = 3,
    ACTIONS(850), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1108), 1,
      sym__string_literal,
    STATE(711), 1,
      sym__decimal_literal,
  [9265] = 3,
    ACTIONS(1110), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(865), 1,
      sym_keyspace_name,
  [9275] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_init_cond_hash_repeat1,
  [9285] = 3,
    ACTIONS(1093), 1,
      sym_object_name,
    ACTIONS(1116), 1,
      aux_sym_delete_statement_token2,
    STATE(885), 1,
      sym_table_name,
  [9295] = 3,
    ACTIONS(1112), 1,
      sym_object_name,
    ACTIONS(1118), 1,
      aux_sym_delete_statement_token2,
    STATE(239), 1,
      sym_keyspace_name,
  [9305] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_create_function_repeat1,
  [9315] = 3,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9325] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_assignment_set_repeat1,
  [9335] = 3,
    ACTIONS(1126), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1128), 1,
      sym_object_name,
    STATE(837), 1,
      sym_function_name,
  [9345] = 3,
    ACTIONS(1130), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1132), 1,
      sym_object_name,
    STATE(956), 1,
      sym_aggregate_name,
  [9355] = 3,
    ACTIONS(1128), 1,
      sym_object_name,
    ACTIONS(1134), 1,
      aux_sym_delete_statement_token2,
    STATE(236), 1,
      sym_function_name,
  [9365] = 2,
    ACTIONS(1136), 1,
      anon_sym_DOT,
    ACTIONS(1138), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9373] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_column_definition_list_repeat1,
  [9383] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      aux_sym_relation_element_repeat2,
  [9393] = 2,
    ACTIONS(1148), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1146), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [9401] = 3,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      aux_sym_from_spec_token1,
    STATE(434), 1,
      aux_sym_select_elements_repeat1,
  [9411] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_assignment_set_repeat1,
  [9421] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      aux_sym_from_spec_token1,
    STATE(425), 1,
      aux_sym_delete_column_list_repeat1,
  [9431] = 1,
    ACTIONS(949), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9437] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_expression_list_repeat1,
  [9447] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_create_function_repeat1,
  [9457] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_function_args_repeat1,
  [9467] = 3,
    ACTIONS(1165), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1168), 1,
      aux_sym_primary_key_column_token1,
    STATE(458), 1,
      aux_sym_materialized_view_where_repeat1,
  [9477] = 3,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(229), 1,
      sym_role_name,
  [9487] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1174), 1,
      aux_sym_primary_key_column_token1,
    STATE(39), 1,
      aux_sym_relation_elements_repeat1,
  [9497] = 3,
    ACTIONS(1132), 1,
      sym_object_name,
    ACTIONS(1176), 1,
      aux_sym_delete_statement_token2,
    STATE(225), 1,
      sym_aggregate_name,
  [9507] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_GT,
    STATE(410), 1,
      aux_sym_data_type_definition_repeat1,
  [9517] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_clustering_key_list_repeat1,
  [9527] = 3,
    ACTIONS(850), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1182), 1,
      sym__string_literal,
    STATE(529), 1,
      sym__decimal_literal,
  [9537] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      aux_sym_where_spec_token1,
    STATE(413), 1,
      aux_sym_update_assignments_repeat1,
  [9547] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(745), 1,
      sym_return_mode,
  [9557] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [9567] = 3,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(484), 1,
      aux_sym_option_hash_repeat1,
  [9577] = 2,
    ACTIONS(1192), 1,
      aux_sym_resource_token1,
    ACTIONS(1194), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [9585] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(890), 1,
      sym_return_mode,
  [9595] = 3,
    ACTIONS(149), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1002), 1,
      aux_sym_primary_key_column_token1,
    STATE(39), 1,
      aux_sym_relation_elements_repeat1,
  [9605] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_replication_list_repeat1,
  [9615] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(794), 1,
      sym_return_mode,
  [9625] = 3,
    ACTIONS(1093), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_truncate_token2,
    STATE(216), 1,
      sym_table_name,
  [9635] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_clustering_key_list_repeat1,
  [9645] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_clustering_key_list_repeat1,
  [9655] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(676), 1,
      sym_return_mode,
  [9665] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [9675] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      aux_sym_from_spec_token1,
    STATE(479), 1,
      aux_sym_select_elements_repeat1,
  [9685] = 3,
    ACTIONS(1172), 1,
      sym_object_name,
    ACTIONS(1211), 1,
      aux_sym_delete_statement_token2,
    STATE(115), 1,
      sym_role_name,
  [9695] = 3,
    ACTIONS(1070), 1,
      sym_object_name,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_typed_name,
  [9705] = 3,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
    STATE(482), 1,
      aux_sym_assignment_map_repeat1,
  [9715] = 3,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1220), 1,
      sym_object_name,
    STATE(681), 1,
      sym_materialized_view_name,
  [9725] = 3,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
    STATE(511), 1,
      aux_sym_option_hash_repeat1,
  [9735] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [9745] = 3,
    ACTIONS(1226), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1228), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1230), 1,
      aux_sym_update_token1,
  [9755] = 3,
    ACTIONS(1132), 1,
      sym_object_name,
    ACTIONS(1232), 1,
      aux_sym_delete_statement_token2,
    STATE(848), 1,
      sym_aggregate_name,
  [9765] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_data_type_definition_repeat1,
  [9775] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(869), 1,
      sym_return_mode,
  [9785] = 3,
    ACTIONS(1239), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1241), 1,
      sym_object_name,
    STATE(785), 1,
      sym_trigger_name,
  [9795] = 3,
    ACTIONS(1070), 1,
      sym_object_name,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_typed_name,
  [9805] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_column_definition_list_repeat1,
  [9815] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_create_function_repeat1,
  [9825] = 3,
    ACTIONS(1070), 1,
      sym_object_name,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym_typed_name,
  [9835] = 3,
    ACTIONS(1037), 1,
      sym_object_name,
    STATE(515), 1,
      sym_column_definition,
    STATE(686), 1,
      sym_column_definition_list,
  [9845] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_expression_list_repeat1,
  [9855] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_clustering_key_list_repeat1,
  [9865] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [9875] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_assignment_map_repeat1,
  [9885] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      aux_sym_from_spec_token1,
    STATE(453), 1,
      aux_sym_delete_column_list_repeat1,
  [9895] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_create_function_repeat1,
  [9905] = 2,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    ACTIONS(1266), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [9913] = 1,
    ACTIONS(1268), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9919] = 3,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(465), 1,
      sym_assignment_element,
    STATE(734), 1,
      sym_indexed_column,
  [9929] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_RBRACE,
    STATE(482), 1,
      aux_sym_assignment_map_repeat1,
  [9939] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_create_function_repeat1,
  [9949] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(883), 1,
      sym_return_mode,
  [9959] = 3,
    ACTIONS(1128), 1,
      sym_object_name,
    ACTIONS(1274), 1,
      aux_sym_delete_statement_token2,
    STATE(857), 1,
      sym_function_name,
  [9969] = 3,
    ACTIONS(1016), 1,
      sym_object_name,
    ACTIONS(1276), 1,
      aux_sym_delete_statement_token2,
    STATE(556), 1,
      sym_user_name,
  [9979] = 3,
    ACTIONS(1012), 1,
      sym_object_name,
    ACTIONS(1278), 1,
      aux_sym_delete_statement_token2,
    STATE(825), 1,
      sym_type_name,
  [9989] = 3,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RBRACE,
    STATE(511), 1,
      aux_sym_option_hash_repeat1,
  [9999] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      aux_sym_where_spec_token1,
    STATE(512), 1,
      aux_sym_update_assignments_repeat1,
  [10009] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_function_args_repeat1,
  [10019] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [10029] = 3,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_column_definition_list_repeat1,
  [10039] = 3,
    ACTIONS(1025), 1,
      aux_sym_create_function_token1,
    ACTIONS(1027), 1,
      aux_sym_return_mode_token1,
    STATE(831), 1,
      sym_return_mode,
  [10049] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_replication_list_repeat1,
  [10059] = 3,
    ACTIONS(1241), 1,
      sym_object_name,
    ACTIONS(1301), 1,
      aux_sym_delete_statement_token2,
    STATE(828), 1,
      sym_trigger_name,
  [10069] = 2,
    ACTIONS(1305), 1,
      aux_sym_select_element_token1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10077] = 3,
    ACTIONS(1220), 1,
      sym_object_name,
    ACTIONS(1307), 1,
      aux_sym_delete_statement_token2,
    STATE(253), 1,
      sym_materialized_view_name,
  [10087] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym_relation_element_repeat1,
  [10097] = 2,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(894), 1,
      sym_clustering_key_list,
  [10104] = 2,
    ACTIONS(1313), 1,
      anon_sym_EQ,
    ACTIONS(1315), 1,
      anon_sym_LBRACK,
  [10111] = 1,
    ACTIONS(1283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10116] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(893), 1,
      sym_keyspace_name,
  [10123] = 1,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10128] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(916), 1,
      sym_table_name,
  [10135] = 1,
    ACTIONS(1299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10140] = 1,
    ACTIONS(1323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10145] = 2,
    ACTIONS(1325), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [10152] = 2,
    ACTIONS(1329), 1,
      sym_object_name,
    STATE(823), 1,
      sym_partition_key_list,
  [10159] = 2,
    ACTIONS(1331), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_replication_list,
  [10166] = 2,
    ACTIONS(1333), 1,
      sym_object_name,
    STATE(166), 1,
      sym_alter_type_rename_item,
  [10173] = 1,
    ACTIONS(1335), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10178] = 2,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(638), 1,
      sym_update_assignments,
  [10185] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(137), 1,
      sym_where_spec,
  [10192] = 2,
    ACTIONS(1337), 1,
      sym_object_name,
    STATE(277), 1,
      sym_materialized_view_name,
  [10199] = 2,
    ACTIONS(1339), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1341), 1,
      aux_sym_using_ttl_timestamp_token1,
  [10206] = 2,
    ACTIONS(1343), 1,
      aux_sym_primary_key_column_token1,
    STATE(119), 1,
      sym_primary_key_element,
  [10213] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(144), 1,
      sym_where_spec,
  [10220] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(888), 1,
      sym_function_name,
  [10227] = 2,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(640), 1,
      sym_update_assignments,
  [10234] = 2,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(590), 1,
      sym_update_assignments,
  [10241] = 2,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
    STATE(428), 1,
      sym_insert_column_spec,
  [10248] = 2,
    ACTIONS(1349), 1,
      aux_sym_resource_token5,
    ACTIONS(1351), 1,
      aux_sym_drop_aggregate_token1,
  [10255] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_assignment_tuple,
  [10262] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(127), 1,
      sym_where_spec,
  [10269] = 2,
    ACTIONS(1333), 1,
      sym_object_name,
    STATE(113), 1,
      sym_alter_type_rename_item,
  [10276] = 2,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(110), 1,
      sym_typed_name,
  [10283] = 1,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10288] = 1,
    ACTIONS(1353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10293] = 2,
    ACTIONS(1337), 1,
      sym_object_name,
    STATE(120), 1,
      sym_materialized_view_name,
  [10300] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(94), 1,
      sym_role_name,
  [10307] = 1,
    ACTIONS(1357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10312] = 2,
    ACTIONS(1359), 1,
      aux_sym_create_keyspace_token1,
    STATE(280), 1,
      sym_user_with,
  [10319] = 2,
    ACTIONS(1359), 1,
      aux_sym_create_keyspace_token1,
    STATE(244), 1,
      sym_user_with,
  [10326] = 2,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(388), 1,
      sym_from_spec,
  [10333] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(129), 1,
      sym_where_spec,
  [10340] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(544), 1,
      sym_table_name,
  [10347] = 1,
    ACTIONS(1363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10352] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(256), 1,
      sym_table_name,
  [10359] = 2,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(853), 1,
      sym_clustering_key_list,
  [10366] = 1,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10371] = 2,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [10378] = 2,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(104), 1,
      sym_typed_name,
  [10385] = 2,
    ACTIONS(1365), 1,
      aux_sym_durable_writes_token1,
    STATE(294), 1,
      sym_durable_writes,
  [10392] = 2,
    ACTIONS(1367), 1,
      aux_sym_where_spec_token1,
    STATE(539), 1,
      sym_materialized_view_where,
  [10399] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(668), 1,
      sym_table_name,
  [10406] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(806), 1,
      sym_column_list,
  [10413] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(586), 1,
      sym_table_name,
  [10420] = 1,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10425] = 2,
    ACTIONS(1371), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1373), 1,
      sym_object_name,
  [10432] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(861), 1,
      sym_aggregate_name,
  [10439] = 2,
    ACTIONS(1359), 1,
      aux_sym_create_keyspace_token1,
    STATE(257), 1,
      sym_user_with,
  [10446] = 2,
    ACTIONS(1377), 1,
      sym__string_literal,
    STATE(409), 1,
      sym_replication_list_item,
  [10453] = 1,
    ACTIONS(1209), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10458] = 1,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10463] = 2,
    ACTIONS(1379), 1,
      sym__string_literal,
    STATE(524), 1,
      sym_option_hash_item,
  [10470] = 1,
    ACTIONS(1381), 2,
      sym__string_literal,
      sym__float_literal,
  [10475] = 2,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(394), 1,
      sym_from_spec,
  [10482] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(731), 1,
      sym_column_list,
  [10489] = 2,
    ACTIONS(1337), 1,
      sym_object_name,
    STATE(732), 1,
      sym_materialized_view_name,
  [10496] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(612), 1,
      sym_table_name,
  [10503] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(188), 1,
      sym_table_name,
  [10510] = 1,
    ACTIONS(1383), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10515] = 2,
    ACTIONS(1367), 1,
      aux_sym_where_spec_token1,
    STATE(597), 1,
      sym_materialized_view_where,
  [10522] = 2,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_option_hash,
  [10529] = 1,
    ACTIONS(1385), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10534] = 2,
    ACTIONS(1379), 1,
      sym__string_literal,
    STATE(468), 1,
      sym_option_hash_item,
  [10541] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
  [10548] = 2,
    ACTIONS(1377), 1,
      sym__string_literal,
    STATE(528), 1,
      sym_replication_list_item,
  [10555] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(675), 1,
      sym_table_name,
  [10562] = 2,
    ACTIONS(1387), 1,
      sym_object_name,
    STATE(384), 1,
      sym_column_not_null,
  [10569] = 2,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(125), 1,
      sym_typed_name,
  [10576] = 2,
    ACTIONS(1389), 1,
      sym_object_name,
    STATE(850), 1,
      sym_trigger_name,
  [10583] = 2,
    ACTIONS(1331), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_replication_list,
  [10590] = 2,
    ACTIONS(1343), 1,
      aux_sym_primary_key_column_token1,
    STATE(95), 1,
      sym_primary_key_element,
  [10597] = 2,
    ACTIONS(1391), 1,
      sym__string_literal,
    STATE(224), 1,
      sym_trigger_class,
  [10604] = 2,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(416), 1,
      sym_typed_name,
  [10611] = 1,
    ACTIONS(1168), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10616] = 2,
    ACTIONS(1331), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_replication_list,
  [10623] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(688), 1,
      sym_function_name,
  [10630] = 1,
    ACTIONS(1393), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10635] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(690), 1,
      sym_aggregate_name,
  [10642] = 1,
    ACTIONS(1395), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10647] = 2,
    ACTIONS(1397), 1,
      sym_object_name,
    STATE(220), 1,
      sym_user_name,
  [10654] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(221), 1,
      sym_type_name,
  [10661] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(223), 1,
      sym_table_name,
  [10668] = 2,
    ACTIONS(1389), 1,
      sym_object_name,
    STATE(949), 1,
      sym_trigger_name,
  [10675] = 1,
    ACTIONS(1161), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10680] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_assignment_tuple,
  [10687] = 2,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
    STATE(419), 1,
      sym_insert_column_spec,
  [10694] = 1,
    ACTIONS(1401), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10699] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(228), 1,
      sym_aggregate_name,
  [10706] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(230), 1,
      sym_role_name,
  [10713] = 2,
    ACTIONS(1387), 1,
      sym_object_name,
    STATE(600), 1,
      sym_column_not_null,
  [10720] = 2,
    ACTIONS(850), 1,
      aux_sym__decimal_literal_token1,
    STATE(159), 1,
      sym__decimal_literal,
  [10727] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(233), 1,
      sym_function_name,
  [10734] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(235), 1,
      sym_keyspace_name,
  [10741] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_assignment_tuple,
  [10748] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(757), 1,
      sym_table_name,
  [10755] = 2,
    ACTIONS(1403), 1,
      sym_object_name,
    STATE(241), 1,
      sym_index_name,
  [10762] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(246), 1,
      sym_table_name,
  [10769] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(847), 1,
      sym_type_name,
  [10776] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(637), 1,
      sym_delete_column_item,
  [10783] = 2,
    ACTIONS(1397), 1,
      sym_object_name,
    STATE(574), 1,
      sym_user_name,
  [10790] = 2,
    ACTIONS(1407), 1,
      aux_sym_role_with_option_token1,
    STATE(86), 1,
      sym_user_password,
  [10797] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(142), 1,
      sym_where_spec,
  [10804] = 2,
    ACTIONS(1070), 1,
      sym_object_name,
    STATE(441), 1,
      sym_typed_name,
  [10811] = 2,
    ACTIONS(1365), 1,
      aux_sym_durable_writes_token1,
    STATE(291), 1,
      sym_durable_writes,
  [10818] = 1,
    ACTIONS(1409), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10823] = 2,
    ACTIONS(1391), 1,
      sym__string_literal,
    STATE(255), 1,
      sym_trigger_class,
  [10830] = 1,
    ACTIONS(1411), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10835] = 1,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10840] = 1,
    ACTIONS(1415), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10845] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
  [10852] = 1,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10857] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(145), 1,
      sym_where_spec,
  [10864] = 1,
    ACTIONS(1095), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10869] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
  [10876] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(102), 1,
      sym_where_spec,
  [10883] = 2,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [10890] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(910), 1,
      sym_column_list,
  [10897] = 2,
    ACTIONS(1417), 1,
      sym_object_name,
    STATE(654), 1,
      sym_init_cond_hash_item,
  [10904] = 2,
    ACTIONS(1397), 1,
      sym_object_name,
    STATE(555), 1,
      sym_user_name,
  [10911] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(449), 1,
      sym_assignment_tuple,
  [10918] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_assignment_tuple,
  [10925] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(348), 1,
      sym_type_name,
  [10932] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(58), 1,
      sym_table_name,
  [10939] = 1,
    ACTIONS(1419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10944] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(103), 1,
      sym_role_name,
  [10951] = 1,
    ACTIONS(1052), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10956] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(769), 1,
      sym_keyspace_name,
  [10963] = 1,
    ACTIONS(1021), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10968] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(567), 1,
      sym_table_name,
  [10975] = 1,
    ACTIONS(1421), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10980] = 2,
    ACTIONS(850), 1,
      aux_sym__decimal_literal_token1,
    STATE(845), 1,
      sym__decimal_literal,
  [10987] = 2,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [10994] = 2,
    ACTIONS(1037), 1,
      sym_object_name,
    STATE(563), 1,
      sym_column_definition,
  [11001] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(801), 1,
      sym_table_name,
  [11008] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(101), 1,
      sym_where_spec,
  [11015] = 2,
    ACTIONS(1365), 1,
      aux_sym_durable_writes_token1,
    STATE(197), 1,
      sym_durable_writes,
  [11022] = 2,
    ACTIONS(907), 1,
      aux_sym_update_assignments_token1,
    STATE(558), 1,
      sym_update_assignments,
  [11029] = 2,
    ACTIONS(1321), 1,
      sym_object_name,
    STATE(324), 1,
      sym_table_name,
  [11036] = 1,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
  [11040] = 1,
    ACTIONS(1425), 1,
      aux_sym_create_aggregate_token4,
  [11044] = 1,
    ACTIONS(1427), 1,
      anon_sym_COLON,
  [11048] = 1,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
  [11052] = 1,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
  [11056] = 1,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
  [11060] = 1,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
  [11064] = 1,
    ACTIONS(1437), 1,
      aux_sym_constant_token2,
  [11068] = 1,
    ACTIONS(1439), 1,
      aux_sym_return_mode_token2,
  [11072] = 1,
    ACTIONS(1441), 1,
      aux_sym_create_function_token2,
  [11076] = 1,
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
  [11080] = 1,
    ACTIONS(1445), 1,
      aux_sym_create_function_token1,
  [11084] = 1,
    ACTIONS(1447), 1,
      anon_sym_COLON,
  [11088] = 1,
    ACTIONS(1449), 1,
      aux_sym_delete_statement_token3,
  [11092] = 1,
    ACTIONS(1451), 1,
      aux_sym_insert_statement_token3,
  [11096] = 1,
    ACTIONS(1453), 1,
      aux_sym_create_aggregate_token4,
  [11100] = 1,
    ACTIONS(1455), 1,
      aux_sym_select_element_token1,
  [11104] = 1,
    ACTIONS(1457), 1,
      aux_sym_delete_statement_token3,
  [11108] = 1,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [11112] = 1,
    ACTIONS(1461), 1,
      aux_sym_select_statement_token1,
  [11116] = 1,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
  [11120] = 1,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
  [11124] = 1,
    ACTIONS(1467), 1,
      aux_sym_create_keyspace_token2,
  [11128] = 1,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
  [11132] = 1,
    ACTIONS(1471), 1,
      aux_sym_delete_statement_token3,
  [11136] = 1,
    ACTIONS(1473), 1,
      anon_sym_LPAREN,
  [11140] = 1,
    ACTIONS(1475), 1,
      aux_sym_create_aggregate_token3,
  [11144] = 1,
    ACTIONS(1477), 1,
      aux_sym_delete_statement_token3,
  [11148] = 1,
    ACTIONS(1479), 1,
      sym_object_name,
  [11152] = 1,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
  [11156] = 1,
    ACTIONS(1483), 1,
      anon_sym_LPAREN,
  [11160] = 1,
    ACTIONS(1485), 1,
      aux_sym_select_statement_token5,
  [11164] = 1,
    ACTIONS(1487), 1,
      aux_sym_delete_statement_token3,
  [11168] = 1,
    ACTIONS(1489), 1,
      aux_sym_delete_statement_token3,
  [11172] = 1,
    ACTIONS(1491), 1,
      sym_object_name,
  [11176] = 1,
    ACTIONS(1493), 1,
      aux_sym_insert_statement_token3,
  [11180] = 1,
    ACTIONS(1495), 1,
      aux_sym_insert_statement_token3,
  [11184] = 1,
    ACTIONS(1497), 1,
      sym_object_name,
  [11188] = 1,
    ACTIONS(1499), 1,
      aux_sym_delete_statement_token3,
  [11192] = 1,
    ACTIONS(1501), 1,
      sym_object_name,
  [11196] = 1,
    ACTIONS(1503), 1,
      sym_object_name,
  [11200] = 1,
    ACTIONS(1505), 1,
      aux_sym_delete_statement_token3,
  [11204] = 1,
    ACTIONS(1507), 1,
      sym_object_name,
  [11208] = 1,
    ACTIONS(1509), 1,
      aux_sym_delete_statement_token3,
  [11212] = 1,
    ACTIONS(1511), 1,
      aux_sym_delete_statement_token3,
  [11216] = 1,
    ACTIONS(1513), 1,
      sym_object_name,
  [11220] = 1,
    ACTIONS(1515), 1,
      anon_sym_RBRACK,
  [11224] = 1,
    ACTIONS(1517), 1,
      anon_sym_LPAREN,
  [11228] = 1,
    ACTIONS(1519), 1,
      aux_sym_order_spec_token2,
  [11232] = 1,
    ACTIONS(1521), 1,
      aux_sym_select_statement_token5,
  [11236] = 1,
    ACTIONS(1523), 1,
      sym_object_name,
  [11240] = 1,
    ACTIONS(1525), 1,
      sym_object_name,
  [11244] = 1,
    ACTIONS(1527), 1,
      anon_sym_EQ,
  [11248] = 1,
    ACTIONS(1529), 1,
      sym_object_name,
  [11252] = 1,
    ACTIONS(1531), 1,
      aux_sym_delete_statement_token3,
  [11256] = 1,
    ACTIONS(1533), 1,
      aux_sym_select_statement_token5,
  [11260] = 1,
    ACTIONS(1535), 1,
      aux_sym__decimal_literal_token1,
  [11264] = 1,
    ACTIONS(1537), 1,
      aux_sym__decimal_literal_token1,
  [11268] = 1,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
  [11272] = 1,
    ACTIONS(1541), 1,
      aux_sym__decimal_literal_token1,
  [11276] = 1,
    ACTIONS(1543), 1,
      aux_sym__decimal_literal_token1,
  [11280] = 1,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
  [11284] = 1,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [11288] = 1,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
  [11292] = 1,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
  [11296] = 1,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
  [11300] = 1,
    ACTIONS(1555), 1,
      aux_sym_from_spec_token1,
  [11304] = 1,
    ACTIONS(1557), 1,
      aux_sym_select_element_token1,
  [11308] = 1,
    ACTIONS(1559), 1,
      sym_object_name,
  [11312] = 1,
    ACTIONS(1561), 1,
      anon_sym_EQ,
  [11316] = 1,
    ACTIONS(1563), 1,
      sym_object_name,
  [11320] = 1,
    ACTIONS(1565), 1,
      anon_sym_EQ,
  [11324] = 1,
    ACTIONS(1567), 1,
      sym_object_name,
  [11328] = 1,
    ACTIONS(1569), 1,
      aux_sym_create_function_token1,
  [11332] = 1,
    ACTIONS(1571), 1,
      sym_object_name,
  [11336] = 1,
    ACTIONS(1573), 1,
      sym_object_name,
  [11340] = 1,
    ACTIONS(1575), 1,
      aux_sym_return_mode_token2,
  [11344] = 1,
    ACTIONS(1577), 1,
      aux_sym_create_function_token1,
  [11348] = 1,
    ACTIONS(1579), 1,
      sym_object_name,
  [11352] = 1,
    ACTIONS(1581), 1,
      aux_sym_create_function_token2,
  [11356] = 1,
    ACTIONS(1583), 1,
      aux_sym_create_function_token1,
  [11360] = 1,
    ACTIONS(1585), 1,
      aux_sym_grant_token2,
  [11364] = 1,
    ACTIONS(1587), 1,
      aux_sym_constant_token2,
  [11368] = 1,
    ACTIONS(1589), 1,
      aux_sym_create_index_token3,
  [11372] = 1,
    ACTIONS(1591), 1,
      aux_sym__decimal_literal_token1,
  [11376] = 1,
    ACTIONS(1593), 1,
      aux_sym_create_aggregate_token3,
  [11380] = 1,
    ACTIONS(1595), 1,
      aux_sym_create_keyspace_token2,
  [11384] = 1,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
  [11388] = 1,
    ACTIONS(1599), 1,
      aux_sym_create_aggregate_token2,
  [11392] = 1,
    ACTIONS(1601), 1,
      sym_object_name,
  [11396] = 1,
    ACTIONS(1603), 1,
      sym_object_name,
  [11400] = 1,
    ACTIONS(1605), 1,
      sym_object_name,
  [11404] = 1,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
  [11408] = 1,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [11412] = 1,
    ACTIONS(1611), 1,
      aux_sym_relation_contains_key_token2,
  [11416] = 1,
    ACTIONS(1613), 1,
      sym_object_name,
  [11420] = 1,
    ACTIONS(1615), 1,
      sym_object_name,
  [11424] = 1,
    ACTIONS(1617), 1,
      aux_sym_relation_contains_key_token2,
  [11428] = 1,
    ACTIONS(1619), 1,
      sym_object_name,
  [11432] = 1,
    ACTIONS(1621), 1,
      sym_object_name,
  [11436] = 1,
    ACTIONS(1623), 1,
      aux_sym_delete_statement_token3,
  [11440] = 1,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
  [11444] = 1,
    ACTIONS(1627), 1,
      aux_sym_create_keyspace_token2,
  [11448] = 1,
    ACTIONS(1629), 1,
      sym_object_name,
  [11452] = 1,
    ACTIONS(1631), 1,
      aux_sym_create_keyspace_token1,
  [11456] = 1,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
  [11460] = 1,
    ACTIONS(1635), 1,
      anon_sym_LPAREN,
  [11464] = 1,
    ACTIONS(1637), 1,
      sym_object_name,
  [11468] = 1,
    ACTIONS(1639), 1,
      aux_sym_select_statement_token5,
  [11472] = 1,
    ACTIONS(1641), 1,
      ts_builtin_sym_end,
  [11476] = 1,
    ACTIONS(1643), 1,
      aux_sym_begin_batch_token4,
  [11480] = 1,
    ACTIONS(1645), 1,
      sym_object_name,
  [11484] = 1,
    ACTIONS(1647), 1,
      aux_sym_select_statement_token5,
  [11488] = 1,
    ACTIONS(1649), 1,
      aux_sym_delete_statement_token3,
  [11492] = 1,
    ACTIONS(1651), 1,
      anon_sym_EQ,
  [11496] = 1,
    ACTIONS(1653), 1,
      aux_sym_delete_statement_token3,
  [11500] = 1,
    ACTIONS(1655), 1,
      sym_object_name,
  [11504] = 1,
    ACTIONS(1657), 1,
      sym_object_name,
  [11508] = 1,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
  [11512] = 1,
    ACTIONS(1661), 1,
      anon_sym_RPAREN,
  [11516] = 1,
    ACTIONS(1663), 1,
      aux_sym_create_index_token3,
  [11520] = 1,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
  [11524] = 1,
    ACTIONS(1667), 1,
      aux_sym_delete_statement_token3,
  [11528] = 1,
    ACTIONS(1669), 1,
      anon_sym_LPAREN,
  [11532] = 1,
    ACTIONS(1671), 1,
      aux_sym_from_spec_token1,
  [11536] = 1,
    ACTIONS(1673), 1,
      anon_sym_LPAREN,
  [11540] = 1,
    ACTIONS(1675), 1,
      aux_sym_order_spec_token2,
  [11544] = 1,
    ACTIONS(1677), 1,
      sym__boolean_literal,
  [11548] = 1,
    ACTIONS(1679), 1,
      aux_sym_delete_statement_token3,
  [11552] = 1,
    ACTIONS(1681), 1,
      aux_sym_create_function_token1,
  [11556] = 1,
    ACTIONS(1683), 1,
      sym_object_name,
  [11560] = 1,
    ACTIONS(1685), 1,
      aux_sym_create_function_token1,
  [11564] = 1,
    ACTIONS(1687), 1,
      aux_sym_select_element_token1,
  [11568] = 1,
    ACTIONS(1689), 1,
      sym_object_name,
  [11572] = 1,
    ACTIONS(1691), 1,
      aux_sym_create_function_token2,
  [11576] = 1,
    ACTIONS(1693), 1,
      anon_sym_RPAREN,
  [11580] = 1,
    ACTIONS(1695), 1,
      anon_sym_LPAREN,
  [11584] = 1,
    ACTIONS(1697), 1,
      aux_sym_delete_statement_token3,
  [11588] = 1,
    ACTIONS(1699), 1,
      sym_object_name,
  [11592] = 1,
    ACTIONS(1701), 1,
      sym_object_name,
  [11596] = 1,
    ACTIONS(1703), 1,
      aux_sym_create_aggregate_token5,
  [11600] = 1,
    ACTIONS(1705), 1,
      aux_sym_from_spec_token1,
  [11604] = 1,
    ACTIONS(1707), 1,
      aux_sym_resource_token2,
  [11608] = 1,
    ACTIONS(1709), 1,
      sym_object_name,
  [11612] = 1,
    ACTIONS(1711), 1,
      aux_sym_delete_statement_token3,
  [11616] = 1,
    ACTIONS(1713), 1,
      anon_sym_EQ,
  [11620] = 1,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
  [11624] = 1,
    ACTIONS(1717), 1,
      anon_sym_EQ,
  [11628] = 1,
    ACTIONS(1719), 1,
      aux_sym_delete_statement_token3,
  [11632] = 1,
    ACTIONS(1721), 1,
      aux_sym_delete_statement_token3,
  [11636] = 1,
    ACTIONS(1723), 1,
      anon_sym_COLON,
  [11640] = 1,
    ACTIONS(1725), 1,
      aux_sym_delete_statement_token3,
  [11644] = 1,
    ACTIONS(1727), 1,
      anon_sym_RPAREN,
  [11648] = 1,
    ACTIONS(1729), 1,
      aux_sym_drop_materialized_view_token2,
  [11652] = 1,
    ACTIONS(1731), 1,
      aux_sym_drop_materialized_view_token2,
  [11656] = 1,
    ACTIONS(1733), 1,
      aux_sym_insert_statement_token3,
  [11660] = 1,
    ACTIONS(1735), 1,
      aux_sym_using_timestamp_spec_token2,
  [11664] = 1,
    ACTIONS(1737), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11668] = 1,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
  [11672] = 1,
    ACTIONS(1741), 1,
      anon_sym_EQ,
  [11676] = 1,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [11680] = 1,
    ACTIONS(1745), 1,
      aux_sym_insert_statement_token3,
  [11684] = 1,
    ACTIONS(1747), 1,
      anon_sym_EQ,
  [11688] = 1,
    ACTIONS(1749), 1,
      aux_sym_using_timestamp_spec_token1,
  [11692] = 1,
    ACTIONS(1751), 1,
      aux_sym_create_function_token2,
  [11696] = 1,
    ACTIONS(1753), 1,
      sym_object_name,
  [11700] = 1,
    ACTIONS(1755), 1,
      aux_sym_create_function_token1,
  [11704] = 1,
    ACTIONS(1757), 1,
      sym__code_block,
  [11708] = 1,
    ACTIONS(1759), 1,
      aux_sym_select_element_token1,
  [11712] = 1,
    ACTIONS(1761), 1,
      sym_object_name,
  [11716] = 1,
    ACTIONS(1763), 1,
      aux_sym_create_aggregate_token4,
  [11720] = 1,
    ACTIONS(1765), 1,
      sym_object_name,
  [11724] = 1,
    ACTIONS(1767), 1,
      anon_sym_LPAREN,
  [11728] = 1,
    ACTIONS(784), 1,
      aux_sym_column_not_null_token1,
  [11732] = 1,
    ACTIONS(1769), 1,
      aux_sym_delete_statement_token3,
  [11736] = 1,
    ACTIONS(1771), 1,
      aux_sym_insert_statement_token3,
  [11740] = 1,
    ACTIONS(1773), 1,
      aux_sym_delete_statement_token3,
  [11744] = 1,
    ACTIONS(1775), 1,
      anon_sym_EQ,
  [11748] = 1,
    ACTIONS(1777), 1,
      aux_sym_create_aggregate_token3,
  [11752] = 1,
    ACTIONS(1779), 1,
      sym_object_name,
  [11756] = 1,
    ACTIONS(1781), 1,
      anon_sym_RBRACK,
  [11760] = 1,
    ACTIONS(1783), 1,
      anon_sym_RPAREN,
  [11764] = 1,
    ACTIONS(1785), 1,
      anon_sym_LPAREN,
  [11768] = 1,
    ACTIONS(1787), 1,
      anon_sym_LPAREN,
  [11772] = 1,
    ACTIONS(1789), 1,
      aux_sym_insert_statement_token3,
  [11776] = 1,
    ACTIONS(1791), 1,
      aux_sym_using_timestamp_spec_token1,
  [11780] = 1,
    ACTIONS(1793), 1,
      anon_sym_COMMA,
  [11784] = 1,
    ACTIONS(1795), 1,
      aux_sym_create_aggregate_token3,
  [11788] = 1,
    ACTIONS(1797), 1,
      anon_sym_RPAREN,
  [11792] = 1,
    ACTIONS(1799), 1,
      aux_sym_insert_statement_token3,
  [11796] = 1,
    ACTIONS(1801), 1,
      sym_object_name,
  [11800] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_function_token2,
  [11804] = 1,
    ACTIONS(1805), 1,
      anon_sym_LPAREN,
  [11808] = 1,
    ACTIONS(1807), 1,
      aux_sym_insert_statement_token3,
  [11812] = 1,
    ACTIONS(1809), 1,
      sym__code_block,
  [11816] = 1,
    ACTIONS(1811), 1,
      aux_sym_select_element_token1,
  [11820] = 1,
    ACTIONS(1813), 1,
      anon_sym_LPAREN,
  [11824] = 1,
    ACTIONS(1815), 1,
      aux_sym_create_aggregate_token6,
  [11828] = 1,
    ACTIONS(1817), 1,
      aux_sym_delete_statement_token3,
  [11832] = 1,
    ACTIONS(1819), 1,
      aux_sym_insert_statement_token3,
  [11836] = 1,
    ACTIONS(1821), 1,
      aux_sym_create_keyspace_token1,
  [11840] = 1,
    ACTIONS(1823), 1,
      sym_object_name,
  [11844] = 1,
    ACTIONS(1825), 1,
      aux_sym_insert_statement_token3,
  [11848] = 1,
    ACTIONS(1827), 1,
      aux_sym_create_index_token3,
  [11852] = 1,
    ACTIONS(1829), 1,
      aux_sym_create_function_token1,
  [11856] = 1,
    ACTIONS(1831), 1,
      sym__boolean_literal,
  [11860] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [11864] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_aggregate_token5,
  [11868] = 1,
    ACTIONS(1837), 1,
      sym__boolean_literal,
  [11872] = 1,
    ACTIONS(1839), 1,
      sym__string_literal,
  [11876] = 1,
    ACTIONS(1841), 1,
      aux_sym_select_statement_token1,
  [11880] = 1,
    ACTIONS(1843), 1,
      aux_sym_select_element_token1,
  [11884] = 1,
    ACTIONS(1845), 1,
      sym_object_name,
  [11888] = 1,
    ACTIONS(1847), 1,
      aux_sym_create_function_token2,
  [11892] = 1,
    ACTIONS(1849), 1,
      aux_sym_insert_statement_token3,
  [11896] = 1,
    ACTIONS(1851), 1,
      sym__code_block,
  [11900] = 1,
    ACTIONS(1853), 1,
      aux_sym_create_aggregate_token5,
  [11904] = 1,
    ACTIONS(1855), 1,
      aux_sym_create_index_token3,
  [11908] = 1,
    ACTIONS(1857), 1,
      aux_sym_create_function_token1,
  [11912] = 1,
    ACTIONS(1859), 1,
      aux_sym_constant_token2,
  [11916] = 1,
    ACTIONS(1861), 1,
      anon_sym_LPAREN,
  [11920] = 1,
    ACTIONS(1863), 1,
      aux_sym_create_index_token3,
  [11924] = 1,
    ACTIONS(1865), 1,
      aux_sym_constant_token2,
  [11928] = 1,
    ACTIONS(1867), 1,
      anon_sym_LPAREN,
  [11932] = 1,
    ACTIONS(1869), 1,
      aux_sym_insert_statement_token2,
  [11936] = 1,
    ACTIONS(1871), 1,
      aux_sym_create_function_token1,
  [11940] = 1,
    ACTIONS(1873), 1,
      aux_sym_create_aggregate_token4,
  [11944] = 1,
    ACTIONS(1875), 1,
      sym_object_name,
  [11948] = 1,
    ACTIONS(1877), 1,
      aux_sym_create_keyspace_token1,
  [11952] = 1,
    ACTIONS(1879), 1,
      anon_sym_RPAREN,
  [11956] = 1,
    ACTIONS(1881), 1,
      sym__code_block,
  [11960] = 1,
    ACTIONS(1883), 1,
      aux_sym_select_element_token1,
  [11964] = 1,
    ACTIONS(1885), 1,
      sym_object_name,
  [11968] = 1,
    ACTIONS(1887), 1,
      aux_sym_insert_statement_token3,
  [11972] = 1,
    ACTIONS(1889), 1,
      sym_object_name,
  [11976] = 1,
    ACTIONS(1891), 1,
      sym_object_name,
  [11980] = 1,
    ACTIONS(1893), 1,
      anon_sym_RPAREN,
  [11984] = 1,
    ACTIONS(1895), 1,
      anon_sym_RPAREN,
  [11988] = 1,
    ACTIONS(1897), 1,
      anon_sym_RPAREN,
  [11992] = 1,
    ACTIONS(1899), 1,
      anon_sym_LPAREN,
  [11996] = 1,
    ACTIONS(1901), 1,
      anon_sym_LPAREN,
  [12000] = 1,
    ACTIONS(1903), 1,
      aux_sym_create_function_token2,
  [12004] = 1,
    ACTIONS(1905), 1,
      anon_sym_LPAREN,
  [12008] = 1,
    ACTIONS(1907), 1,
      aux_sym_create_index_token3,
  [12012] = 1,
    ACTIONS(1909), 1,
      aux_sym_create_aggregate_token6,
  [12016] = 1,
    ACTIONS(1911), 1,
      anon_sym_RPAREN,
  [12020] = 1,
    ACTIONS(1913), 1,
      sym__code_block,
  [12024] = 1,
    ACTIONS(1915), 1,
      aux_sym_select_element_token1,
  [12028] = 1,
    ACTIONS(1917), 1,
      aux_sym_create_aggregate_token6,
  [12032] = 1,
    ACTIONS(1919), 1,
      aux_sym_using_timestamp_spec_token2,
  [12036] = 1,
    ACTIONS(1921), 1,
      anon_sym_COLON,
  [12040] = 1,
    ACTIONS(1923), 1,
      anon_sym_LPAREN,
  [12044] = 1,
    ACTIONS(1925), 1,
      sym__string_literal,
  [12048] = 1,
    ACTIONS(1927), 1,
      aux_sym_insert_statement_token3,
  [12052] = 1,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
  [12056] = 1,
    ACTIONS(1929), 1,
      sym_object_name,
  [12060] = 1,
    ACTIONS(1931), 1,
      aux_sym_create_function_token2,
  [12064] = 1,
    ACTIONS(1933), 1,
      aux_sym_create_aggregate_token5,
  [12068] = 1,
    ACTIONS(1935), 1,
      sym_object_name,
  [12072] = 1,
    ACTIONS(1937), 1,
      sym_object_name,
  [12076] = 1,
    ACTIONS(1939), 1,
      sym__code_block,
  [12080] = 1,
    ACTIONS(1941), 1,
      anon_sym_STAR,
  [12084] = 1,
    ACTIONS(1943), 1,
      aux_sym_begin_batch_token4,
  [12088] = 1,
    ACTIONS(1945), 1,
      sym_object_name,
  [12092] = 1,
    ACTIONS(1947), 1,
      aux_sym_select_statement_token5,
  [12096] = 1,
    ACTIONS(1949), 1,
      sym_object_name,
  [12100] = 1,
    ACTIONS(1951), 1,
      sym_object_name,
  [12104] = 1,
    ACTIONS(1953), 1,
      aux_sym_grant_token2,
  [12108] = 1,
    ACTIONS(1955), 1,
      aux_sym_drop_type_token1,
  [12112] = 1,
    ACTIONS(1957), 1,
      aux_sym_insert_statement_token2,
  [12116] = 1,
    ACTIONS(1959), 1,
      anon_sym_EQ,
  [12120] = 1,
    ACTIONS(1961), 1,
      aux_sym_select_element_token1,
  [12124] = 1,
    ACTIONS(1963), 1,
      sym_object_name,
  [12128] = 1,
    ACTIONS(1965), 1,
      sym_object_name,
  [12132] = 1,
    ACTIONS(1967), 1,
      aux_sym_grant_token2,
  [12136] = 1,
    ACTIONS(1969), 1,
      anon_sym_EQ,
  [12140] = 1,
    ACTIONS(1971), 1,
      aux_sym_drop_materialized_view_token2,
  [12144] = 1,
    ACTIONS(1973), 1,
      anon_sym_EQ,
  [12148] = 1,
    ACTIONS(1975), 1,
      aux_sym_order_spec_token1,
  [12152] = 1,
    ACTIONS(1977), 1,
      aux_sym_compact_storage_token2,
  [12156] = 1,
    ACTIONS(1979), 1,
      aux_sym_compact_storage_token2,
  [12160] = 1,
    ACTIONS(1981), 1,
      sym_object_name,
  [12164] = 1,
    ACTIONS(1983), 1,
      sym_object_name,
  [12168] = 1,
    ACTIONS(1985), 1,
      sym_object_name,
  [12172] = 1,
    ACTIONS(1987), 1,
      aux_sym_create_index_token3,
  [12176] = 1,
    ACTIONS(1989), 1,
      sym__code_block,
  [12180] = 1,
    ACTIONS(1991), 1,
      aux_sym_select_element_token1,
  [12184] = 1,
    ACTIONS(1993), 1,
      aux_sym_create_aggregate_token6,
  [12188] = 1,
    ACTIONS(1995), 1,
      aux_sym_create_index_token3,
  [12192] = 1,
    ACTIONS(1997), 1,
      sym__code_block,
  [12196] = 1,
    ACTIONS(1999), 1,
      aux_sym_create_index_token3,
  [12200] = 1,
    ACTIONS(2001), 1,
      anon_sym_LPAREN,
  [12204] = 1,
    ACTIONS(2003), 1,
      aux_sym_insert_statement_token3,
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
  [SMALL_STATE(30)] = 1073,
  [SMALL_STATE(31)] = 1105,
  [SMALL_STATE(32)] = 1136,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1221,
  [SMALL_STATE(36)] = 1252,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1313,
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
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1718,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1772,
  [SMALL_STATE(55)] = 1797,
  [SMALL_STATE(56)] = 1821,
  [SMALL_STATE(57)] = 1845,
  [SMALL_STATE(58)] = 1879,
  [SMALL_STATE(59)] = 1903,
  [SMALL_STATE(60)] = 1937,
  [SMALL_STATE(61)] = 1971,
  [SMALL_STATE(62)] = 1995,
  [SMALL_STATE(63)] = 2020,
  [SMALL_STATE(64)] = 2045,
  [SMALL_STATE(65)] = 2068,
  [SMALL_STATE(66)] = 2093,
  [SMALL_STATE(67)] = 2118,
  [SMALL_STATE(68)] = 2143,
  [SMALL_STATE(69)] = 2168,
  [SMALL_STATE(70)] = 2190,
  [SMALL_STATE(71)] = 2212,
  [SMALL_STATE(72)] = 2234,
  [SMALL_STATE(73)] = 2256,
  [SMALL_STATE(74)] = 2282,
  [SMALL_STATE(75)] = 2304,
  [SMALL_STATE(76)] = 2332,
  [SMALL_STATE(77)] = 2354,
  [SMALL_STATE(78)] = 2380,
  [SMALL_STATE(79)] = 2404,
  [SMALL_STATE(80)] = 2442,
  [SMALL_STATE(81)] = 2470,
  [SMALL_STATE(82)] = 2492,
  [SMALL_STATE(83)] = 2520,
  [SMALL_STATE(84)] = 2548,
  [SMALL_STATE(85)] = 2576,
  [SMALL_STATE(86)] = 2600,
  [SMALL_STATE(87)] = 2626,
  [SMALL_STATE(88)] = 2654,
  [SMALL_STATE(89)] = 2692,
  [SMALL_STATE(90)] = 2714,
  [SMALL_STATE(91)] = 2739,
  [SMALL_STATE(92)] = 2760,
  [SMALL_STATE(93)] = 2785,
  [SMALL_STATE(94)] = 2806,
  [SMALL_STATE(95)] = 2831,
  [SMALL_STATE(96)] = 2856,
  [SMALL_STATE(97)] = 2881,
  [SMALL_STATE(98)] = 2902,
  [SMALL_STATE(99)] = 2923,
  [SMALL_STATE(100)] = 2944,
  [SMALL_STATE(101)] = 2969,
  [SMALL_STATE(102)] = 2994,
  [SMALL_STATE(103)] = 3019,
  [SMALL_STATE(104)] = 3044,
  [SMALL_STATE(105)] = 3069,
  [SMALL_STATE(106)] = 3094,
  [SMALL_STATE(107)] = 3119,
  [SMALL_STATE(108)] = 3144,
  [SMALL_STATE(109)] = 3169,
  [SMALL_STATE(110)] = 3194,
  [SMALL_STATE(111)] = 3219,
  [SMALL_STATE(112)] = 3242,
  [SMALL_STATE(113)] = 3263,
  [SMALL_STATE(114)] = 3288,
  [SMALL_STATE(115)] = 3313,
  [SMALL_STATE(116)] = 3338,
  [SMALL_STATE(117)] = 3361,
  [SMALL_STATE(118)] = 3384,
  [SMALL_STATE(119)] = 3405,
  [SMALL_STATE(120)] = 3430,
  [SMALL_STATE(121)] = 3455,
  [SMALL_STATE(122)] = 3480,
  [SMALL_STATE(123)] = 3503,
  [SMALL_STATE(124)] = 3524,
  [SMALL_STATE(125)] = 3549,
  [SMALL_STATE(126)] = 3570,
  [SMALL_STATE(127)] = 3591,
  [SMALL_STATE(128)] = 3616,
  [SMALL_STATE(129)] = 3641,
  [SMALL_STATE(130)] = 3666,
  [SMALL_STATE(131)] = 3691,
  [SMALL_STATE(132)] = 3716,
  [SMALL_STATE(133)] = 3737,
  [SMALL_STATE(134)] = 3758,
  [SMALL_STATE(135)] = 3783,
  [SMALL_STATE(136)] = 3808,
  [SMALL_STATE(137)] = 3829,
  [SMALL_STATE(138)] = 3854,
  [SMALL_STATE(139)] = 3875,
  [SMALL_STATE(140)] = 3910,
  [SMALL_STATE(141)] = 3935,
  [SMALL_STATE(142)] = 3956,
  [SMALL_STATE(143)] = 3981,
  [SMALL_STATE(144)] = 4002,
  [SMALL_STATE(145)] = 4027,
  [SMALL_STATE(146)] = 4052,
  [SMALL_STATE(147)] = 4073,
  [SMALL_STATE(148)] = 4098,
  [SMALL_STATE(149)] = 4123,
  [SMALL_STATE(150)] = 4148,
  [SMALL_STATE(151)] = 4169,
  [SMALL_STATE(152)] = 4194,
  [SMALL_STATE(153)] = 4216,
  [SMALL_STATE(154)] = 4236,
  [SMALL_STATE(155)] = 4258,
  [SMALL_STATE(156)] = 4278,
  [SMALL_STATE(157)] = 4298,
  [SMALL_STATE(158)] = 4318,
  [SMALL_STATE(159)] = 4338,
  [SMALL_STATE(160)] = 4358,
  [SMALL_STATE(161)] = 4378,
  [SMALL_STATE(162)] = 4400,
  [SMALL_STATE(163)] = 4420,
  [SMALL_STATE(164)] = 4442,
  [SMALL_STATE(165)] = 4464,
  [SMALL_STATE(166)] = 4486,
  [SMALL_STATE(167)] = 4506,
  [SMALL_STATE(168)] = 4526,
  [SMALL_STATE(169)] = 4546,
  [SMALL_STATE(170)] = 4566,
  [SMALL_STATE(171)] = 4586,
  [SMALL_STATE(172)] = 4606,
  [SMALL_STATE(173)] = 4628,
  [SMALL_STATE(174)] = 4648,
  [SMALL_STATE(175)] = 4668,
  [SMALL_STATE(176)] = 4688,
  [SMALL_STATE(177)] = 4708,
  [SMALL_STATE(178)] = 4728,
  [SMALL_STATE(179)] = 4750,
  [SMALL_STATE(180)] = 4772,
  [SMALL_STATE(181)] = 4792,
  [SMALL_STATE(182)] = 4812,
  [SMALL_STATE(183)] = 4832,
  [SMALL_STATE(184)] = 4852,
  [SMALL_STATE(185)] = 4874,
  [SMALL_STATE(186)] = 4896,
  [SMALL_STATE(187)] = 4916,
  [SMALL_STATE(188)] = 4936,
  [SMALL_STATE(189)] = 4955,
  [SMALL_STATE(190)] = 4974,
  [SMALL_STATE(191)] = 4993,
  [SMALL_STATE(192)] = 5012,
  [SMALL_STATE(193)] = 5031,
  [SMALL_STATE(194)] = 5052,
  [SMALL_STATE(195)] = 5071,
  [SMALL_STATE(196)] = 5090,
  [SMALL_STATE(197)] = 5109,
  [SMALL_STATE(198)] = 5128,
  [SMALL_STATE(199)] = 5147,
  [SMALL_STATE(200)] = 5166,
  [SMALL_STATE(201)] = 5185,
  [SMALL_STATE(202)] = 5204,
  [SMALL_STATE(203)] = 5223,
  [SMALL_STATE(204)] = 5242,
  [SMALL_STATE(205)] = 5261,
  [SMALL_STATE(206)] = 5280,
  [SMALL_STATE(207)] = 5299,
  [SMALL_STATE(208)] = 5318,
  [SMALL_STATE(209)] = 5337,
  [SMALL_STATE(210)] = 5356,
  [SMALL_STATE(211)] = 5375,
  [SMALL_STATE(212)] = 5394,
  [SMALL_STATE(213)] = 5413,
  [SMALL_STATE(214)] = 5432,
  [SMALL_STATE(215)] = 5451,
  [SMALL_STATE(216)] = 5470,
  [SMALL_STATE(217)] = 5489,
  [SMALL_STATE(218)] = 5524,
  [SMALL_STATE(219)] = 5543,
  [SMALL_STATE(220)] = 5562,
  [SMALL_STATE(221)] = 5581,
  [SMALL_STATE(222)] = 5600,
  [SMALL_STATE(223)] = 5619,
  [SMALL_STATE(224)] = 5638,
  [SMALL_STATE(225)] = 5657,
  [SMALL_STATE(226)] = 5676,
  [SMALL_STATE(227)] = 5695,
  [SMALL_STATE(228)] = 5714,
  [SMALL_STATE(229)] = 5733,
  [SMALL_STATE(230)] = 5752,
  [SMALL_STATE(231)] = 5771,
  [SMALL_STATE(232)] = 5790,
  [SMALL_STATE(233)] = 5809,
  [SMALL_STATE(234)] = 5828,
  [SMALL_STATE(235)] = 5847,
  [SMALL_STATE(236)] = 5866,
  [SMALL_STATE(237)] = 5885,
  [SMALL_STATE(238)] = 5904,
  [SMALL_STATE(239)] = 5923,
  [SMALL_STATE(240)] = 5942,
  [SMALL_STATE(241)] = 5961,
  [SMALL_STATE(242)] = 5980,
  [SMALL_STATE(243)] = 5999,
  [SMALL_STATE(244)] = 6018,
  [SMALL_STATE(245)] = 6037,
  [SMALL_STATE(246)] = 6056,
  [SMALL_STATE(247)] = 6075,
  [SMALL_STATE(248)] = 6094,
  [SMALL_STATE(249)] = 6113,
  [SMALL_STATE(250)] = 6132,
  [SMALL_STATE(251)] = 6151,
  [SMALL_STATE(252)] = 6170,
  [SMALL_STATE(253)] = 6189,
  [SMALL_STATE(254)] = 6208,
  [SMALL_STATE(255)] = 6227,
  [SMALL_STATE(256)] = 6246,
  [SMALL_STATE(257)] = 6265,
  [SMALL_STATE(258)] = 6284,
  [SMALL_STATE(259)] = 6303,
  [SMALL_STATE(260)] = 6322,
  [SMALL_STATE(261)] = 6341,
  [SMALL_STATE(262)] = 6360,
  [SMALL_STATE(263)] = 6379,
  [SMALL_STATE(264)] = 6398,
  [SMALL_STATE(265)] = 6417,
  [SMALL_STATE(266)] = 6436,
  [SMALL_STATE(267)] = 6455,
  [SMALL_STATE(268)] = 6474,
  [SMALL_STATE(269)] = 6493,
  [SMALL_STATE(270)] = 6512,
  [SMALL_STATE(271)] = 6531,
  [SMALL_STATE(272)] = 6550,
  [SMALL_STATE(273)] = 6569,
  [SMALL_STATE(274)] = 6588,
  [SMALL_STATE(275)] = 6607,
  [SMALL_STATE(276)] = 6626,
  [SMALL_STATE(277)] = 6645,
  [SMALL_STATE(278)] = 6664,
  [SMALL_STATE(279)] = 6683,
  [SMALL_STATE(280)] = 6702,
  [SMALL_STATE(281)] = 6721,
  [SMALL_STATE(282)] = 6740,
  [SMALL_STATE(283)] = 6759,
  [SMALL_STATE(284)] = 6778,
  [SMALL_STATE(285)] = 6797,
  [SMALL_STATE(286)] = 6816,
  [SMALL_STATE(287)] = 6835,
  [SMALL_STATE(288)] = 6854,
  [SMALL_STATE(289)] = 6873,
  [SMALL_STATE(290)] = 6892,
  [SMALL_STATE(291)] = 6911,
  [SMALL_STATE(292)] = 6930,
  [SMALL_STATE(293)] = 6949,
  [SMALL_STATE(294)] = 6968,
  [SMALL_STATE(295)] = 6987,
  [SMALL_STATE(296)] = 7006,
  [SMALL_STATE(297)] = 7025,
  [SMALL_STATE(298)] = 7053,
  [SMALL_STATE(299)] = 7081,
  [SMALL_STATE(300)] = 7099,
  [SMALL_STATE(301)] = 7127,
  [SMALL_STATE(302)] = 7155,
  [SMALL_STATE(303)] = 7183,
  [SMALL_STATE(304)] = 7216,
  [SMALL_STATE(305)] = 7247,
  [SMALL_STATE(306)] = 7275,
  [SMALL_STATE(307)] = 7300,
  [SMALL_STATE(308)] = 7323,
  [SMALL_STATE(309)] = 7348,
  [SMALL_STATE(310)] = 7368,
  [SMALL_STATE(311)] = 7402,
  [SMALL_STATE(312)] = 7424,
  [SMALL_STATE(313)] = 7446,
  [SMALL_STATE(314)] = 7477,
  [SMALL_STATE(315)] = 7496,
  [SMALL_STATE(316)] = 7515,
  [SMALL_STATE(317)] = 7534,
  [SMALL_STATE(318)] = 7553,
  [SMALL_STATE(319)] = 7572,
  [SMALL_STATE(320)] = 7589,
  [SMALL_STATE(321)] = 7606,
  [SMALL_STATE(322)] = 7625,
  [SMALL_STATE(323)] = 7644,
  [SMALL_STATE(324)] = 7667,
  [SMALL_STATE(325)] = 7690,
  [SMALL_STATE(326)] = 7709,
  [SMALL_STATE(327)] = 7728,
  [SMALL_STATE(328)] = 7747,
  [SMALL_STATE(329)] = 7767,
  [SMALL_STATE(330)] = 7788,
  [SMALL_STATE(331)] = 7811,
  [SMALL_STATE(332)] = 7832,
  [SMALL_STATE(333)] = 7855,
  [SMALL_STATE(334)] = 7878,
  [SMALL_STATE(335)] = 7901,
  [SMALL_STATE(336)] = 7924,
  [SMALL_STATE(337)] = 7945,
  [SMALL_STATE(338)] = 7966,
  [SMALL_STATE(339)] = 7989,
  [SMALL_STATE(340)] = 8012,
  [SMALL_STATE(341)] = 8035,
  [SMALL_STATE(342)] = 8058,
  [SMALL_STATE(343)] = 8081,
  [SMALL_STATE(344)] = 8102,
  [SMALL_STATE(345)] = 8125,
  [SMALL_STATE(346)] = 8148,
  [SMALL_STATE(347)] = 8162,
  [SMALL_STATE(348)] = 8180,
  [SMALL_STATE(349)] = 8198,
  [SMALL_STATE(350)] = 8218,
  [SMALL_STATE(351)] = 8238,
  [SMALL_STATE(352)] = 8256,
  [SMALL_STATE(353)] = 8278,
  [SMALL_STATE(354)] = 8300,
  [SMALL_STATE(355)] = 8314,
  [SMALL_STATE(356)] = 8336,
  [SMALL_STATE(357)] = 8358,
  [SMALL_STATE(358)] = 8377,
  [SMALL_STATE(359)] = 8388,
  [SMALL_STATE(360)] = 8405,
  [SMALL_STATE(361)] = 8424,
  [SMALL_STATE(362)] = 8440,
  [SMALL_STATE(363)] = 8452,
  [SMALL_STATE(364)] = 8468,
  [SMALL_STATE(365)] = 8484,
  [SMALL_STATE(366)] = 8492,
  [SMALL_STATE(367)] = 8508,
  [SMALL_STATE(368)] = 8516,
  [SMALL_STATE(369)] = 8528,
  [SMALL_STATE(370)] = 8544,
  [SMALL_STATE(371)] = 8552,
  [SMALL_STATE(372)] = 8560,
  [SMALL_STATE(373)] = 8576,
  [SMALL_STATE(374)] = 8590,
  [SMALL_STATE(375)] = 8598,
  [SMALL_STATE(376)] = 8614,
  [SMALL_STATE(377)] = 8630,
  [SMALL_STATE(378)] = 8638,
  [SMALL_STATE(379)] = 8650,
  [SMALL_STATE(380)] = 8664,
  [SMALL_STATE(381)] = 8672,
  [SMALL_STATE(382)] = 8688,
  [SMALL_STATE(383)] = 8700,
  [SMALL_STATE(384)] = 8713,
  [SMALL_STATE(385)] = 8726,
  [SMALL_STATE(386)] = 8737,
  [SMALL_STATE(387)] = 8746,
  [SMALL_STATE(388)] = 8757,
  [SMALL_STATE(389)] = 8770,
  [SMALL_STATE(390)] = 8783,
  [SMALL_STATE(391)] = 8796,
  [SMALL_STATE(392)] = 8809,
  [SMALL_STATE(393)] = 8822,
  [SMALL_STATE(394)] = 8835,
  [SMALL_STATE(395)] = 8848,
  [SMALL_STATE(396)] = 8861,
  [SMALL_STATE(397)] = 8874,
  [SMALL_STATE(398)] = 8881,
  [SMALL_STATE(399)] = 8892,
  [SMALL_STATE(400)] = 8903,
  [SMALL_STATE(401)] = 8916,
  [SMALL_STATE(402)] = 8923,
  [SMALL_STATE(403)] = 8933,
  [SMALL_STATE(404)] = 8943,
  [SMALL_STATE(405)] = 8953,
  [SMALL_STATE(406)] = 8963,
  [SMALL_STATE(407)] = 8973,
  [SMALL_STATE(408)] = 8983,
  [SMALL_STATE(409)] = 8993,
  [SMALL_STATE(410)] = 9003,
  [SMALL_STATE(411)] = 9013,
  [SMALL_STATE(412)] = 9023,
  [SMALL_STATE(413)] = 9033,
  [SMALL_STATE(414)] = 9043,
  [SMALL_STATE(415)] = 9053,
  [SMALL_STATE(416)] = 9063,
  [SMALL_STATE(417)] = 9073,
  [SMALL_STATE(418)] = 9083,
  [SMALL_STATE(419)] = 9093,
  [SMALL_STATE(420)] = 9103,
  [SMALL_STATE(421)] = 9111,
  [SMALL_STATE(422)] = 9121,
  [SMALL_STATE(423)] = 9131,
  [SMALL_STATE(424)] = 9137,
  [SMALL_STATE(425)] = 9147,
  [SMALL_STATE(426)] = 9157,
  [SMALL_STATE(427)] = 9167,
  [SMALL_STATE(428)] = 9177,
  [SMALL_STATE(429)] = 9187,
  [SMALL_STATE(430)] = 9197,
  [SMALL_STATE(431)] = 9207,
  [SMALL_STATE(432)] = 9215,
  [SMALL_STATE(433)] = 9225,
  [SMALL_STATE(434)] = 9235,
  [SMALL_STATE(435)] = 9245,
  [SMALL_STATE(436)] = 9255,
  [SMALL_STATE(437)] = 9265,
  [SMALL_STATE(438)] = 9275,
  [SMALL_STATE(439)] = 9285,
  [SMALL_STATE(440)] = 9295,
  [SMALL_STATE(441)] = 9305,
  [SMALL_STATE(442)] = 9315,
  [SMALL_STATE(443)] = 9325,
  [SMALL_STATE(444)] = 9335,
  [SMALL_STATE(445)] = 9345,
  [SMALL_STATE(446)] = 9355,
  [SMALL_STATE(447)] = 9365,
  [SMALL_STATE(448)] = 9373,
  [SMALL_STATE(449)] = 9383,
  [SMALL_STATE(450)] = 9393,
  [SMALL_STATE(451)] = 9401,
  [SMALL_STATE(452)] = 9411,
  [SMALL_STATE(453)] = 9421,
  [SMALL_STATE(454)] = 9431,
  [SMALL_STATE(455)] = 9437,
  [SMALL_STATE(456)] = 9447,
  [SMALL_STATE(457)] = 9457,
  [SMALL_STATE(458)] = 9467,
  [SMALL_STATE(459)] = 9477,
  [SMALL_STATE(460)] = 9487,
  [SMALL_STATE(461)] = 9497,
  [SMALL_STATE(462)] = 9507,
  [SMALL_STATE(463)] = 9517,
  [SMALL_STATE(464)] = 9527,
  [SMALL_STATE(465)] = 9537,
  [SMALL_STATE(466)] = 9547,
  [SMALL_STATE(467)] = 9557,
  [SMALL_STATE(468)] = 9567,
  [SMALL_STATE(469)] = 9577,
  [SMALL_STATE(470)] = 9585,
  [SMALL_STATE(471)] = 9595,
  [SMALL_STATE(472)] = 9605,
  [SMALL_STATE(473)] = 9615,
  [SMALL_STATE(474)] = 9625,
  [SMALL_STATE(475)] = 9635,
  [SMALL_STATE(476)] = 9645,
  [SMALL_STATE(477)] = 9655,
  [SMALL_STATE(478)] = 9665,
  [SMALL_STATE(479)] = 9675,
  [SMALL_STATE(480)] = 9685,
  [SMALL_STATE(481)] = 9695,
  [SMALL_STATE(482)] = 9705,
  [SMALL_STATE(483)] = 9715,
  [SMALL_STATE(484)] = 9725,
  [SMALL_STATE(485)] = 9735,
  [SMALL_STATE(486)] = 9745,
  [SMALL_STATE(487)] = 9755,
  [SMALL_STATE(488)] = 9765,
  [SMALL_STATE(489)] = 9775,
  [SMALL_STATE(490)] = 9785,
  [SMALL_STATE(491)] = 9795,
  [SMALL_STATE(492)] = 9805,
  [SMALL_STATE(493)] = 9815,
  [SMALL_STATE(494)] = 9825,
  [SMALL_STATE(495)] = 9835,
  [SMALL_STATE(496)] = 9845,
  [SMALL_STATE(497)] = 9855,
  [SMALL_STATE(498)] = 9865,
  [SMALL_STATE(499)] = 9875,
  [SMALL_STATE(500)] = 9885,
  [SMALL_STATE(501)] = 9895,
  [SMALL_STATE(502)] = 9905,
  [SMALL_STATE(503)] = 9913,
  [SMALL_STATE(504)] = 9919,
  [SMALL_STATE(505)] = 9929,
  [SMALL_STATE(506)] = 9939,
  [SMALL_STATE(507)] = 9949,
  [SMALL_STATE(508)] = 9959,
  [SMALL_STATE(509)] = 9969,
  [SMALL_STATE(510)] = 9979,
  [SMALL_STATE(511)] = 9989,
  [SMALL_STATE(512)] = 9999,
  [SMALL_STATE(513)] = 10009,
  [SMALL_STATE(514)] = 10019,
  [SMALL_STATE(515)] = 10029,
  [SMALL_STATE(516)] = 10039,
  [SMALL_STATE(517)] = 10049,
  [SMALL_STATE(518)] = 10059,
  [SMALL_STATE(519)] = 10069,
  [SMALL_STATE(520)] = 10077,
  [SMALL_STATE(521)] = 10087,
  [SMALL_STATE(522)] = 10097,
  [SMALL_STATE(523)] = 10104,
  [SMALL_STATE(524)] = 10111,
  [SMALL_STATE(525)] = 10116,
  [SMALL_STATE(526)] = 10123,
  [SMALL_STATE(527)] = 10128,
  [SMALL_STATE(528)] = 10135,
  [SMALL_STATE(529)] = 10140,
  [SMALL_STATE(530)] = 10145,
  [SMALL_STATE(531)] = 10152,
  [SMALL_STATE(532)] = 10159,
  [SMALL_STATE(533)] = 10166,
  [SMALL_STATE(534)] = 10173,
  [SMALL_STATE(535)] = 10178,
  [SMALL_STATE(536)] = 10185,
  [SMALL_STATE(537)] = 10192,
  [SMALL_STATE(538)] = 10199,
  [SMALL_STATE(539)] = 10206,
  [SMALL_STATE(540)] = 10213,
  [SMALL_STATE(541)] = 10220,
  [SMALL_STATE(542)] = 10227,
  [SMALL_STATE(543)] = 10234,
  [SMALL_STATE(544)] = 10241,
  [SMALL_STATE(545)] = 10248,
  [SMALL_STATE(546)] = 10255,
  [SMALL_STATE(547)] = 10262,
  [SMALL_STATE(548)] = 10269,
  [SMALL_STATE(549)] = 10276,
  [SMALL_STATE(550)] = 10283,
  [SMALL_STATE(551)] = 10288,
  [SMALL_STATE(552)] = 10293,
  [SMALL_STATE(553)] = 10300,
  [SMALL_STATE(554)] = 10307,
  [SMALL_STATE(555)] = 10312,
  [SMALL_STATE(556)] = 10319,
  [SMALL_STATE(557)] = 10326,
  [SMALL_STATE(558)] = 10333,
  [SMALL_STATE(559)] = 10340,
  [SMALL_STATE(560)] = 10347,
  [SMALL_STATE(561)] = 10352,
  [SMALL_STATE(562)] = 10359,
  [SMALL_STATE(563)] = 10366,
  [SMALL_STATE(564)] = 10371,
  [SMALL_STATE(565)] = 10378,
  [SMALL_STATE(566)] = 10385,
  [SMALL_STATE(567)] = 10392,
  [SMALL_STATE(568)] = 10399,
  [SMALL_STATE(569)] = 10406,
  [SMALL_STATE(570)] = 10413,
  [SMALL_STATE(571)] = 10420,
  [SMALL_STATE(572)] = 10425,
  [SMALL_STATE(573)] = 10432,
  [SMALL_STATE(574)] = 10439,
  [SMALL_STATE(575)] = 10446,
  [SMALL_STATE(576)] = 10453,
  [SMALL_STATE(577)] = 10458,
  [SMALL_STATE(578)] = 10463,
  [SMALL_STATE(579)] = 10470,
  [SMALL_STATE(580)] = 10475,
  [SMALL_STATE(581)] = 10482,
  [SMALL_STATE(582)] = 10489,
  [SMALL_STATE(583)] = 10496,
  [SMALL_STATE(584)] = 10503,
  [SMALL_STATE(585)] = 10510,
  [SMALL_STATE(586)] = 10515,
  [SMALL_STATE(587)] = 10522,
  [SMALL_STATE(588)] = 10529,
  [SMALL_STATE(589)] = 10534,
  [SMALL_STATE(590)] = 10541,
  [SMALL_STATE(591)] = 10548,
  [SMALL_STATE(592)] = 10555,
  [SMALL_STATE(593)] = 10562,
  [SMALL_STATE(594)] = 10569,
  [SMALL_STATE(595)] = 10576,
  [SMALL_STATE(596)] = 10583,
  [SMALL_STATE(597)] = 10590,
  [SMALL_STATE(598)] = 10597,
  [SMALL_STATE(599)] = 10604,
  [SMALL_STATE(600)] = 10611,
  [SMALL_STATE(601)] = 10616,
  [SMALL_STATE(602)] = 10623,
  [SMALL_STATE(603)] = 10630,
  [SMALL_STATE(604)] = 10635,
  [SMALL_STATE(605)] = 10642,
  [SMALL_STATE(606)] = 10647,
  [SMALL_STATE(607)] = 10654,
  [SMALL_STATE(608)] = 10661,
  [SMALL_STATE(609)] = 10668,
  [SMALL_STATE(610)] = 10675,
  [SMALL_STATE(611)] = 10680,
  [SMALL_STATE(612)] = 10687,
  [SMALL_STATE(613)] = 10694,
  [SMALL_STATE(614)] = 10699,
  [SMALL_STATE(615)] = 10706,
  [SMALL_STATE(616)] = 10713,
  [SMALL_STATE(617)] = 10720,
  [SMALL_STATE(618)] = 10727,
  [SMALL_STATE(619)] = 10734,
  [SMALL_STATE(620)] = 10741,
  [SMALL_STATE(621)] = 10748,
  [SMALL_STATE(622)] = 10755,
  [SMALL_STATE(623)] = 10762,
  [SMALL_STATE(624)] = 10769,
  [SMALL_STATE(625)] = 10776,
  [SMALL_STATE(626)] = 10783,
  [SMALL_STATE(627)] = 10790,
  [SMALL_STATE(628)] = 10797,
  [SMALL_STATE(629)] = 10804,
  [SMALL_STATE(630)] = 10811,
  [SMALL_STATE(631)] = 10818,
  [SMALL_STATE(632)] = 10823,
  [SMALL_STATE(633)] = 10830,
  [SMALL_STATE(634)] = 10835,
  [SMALL_STATE(635)] = 10840,
  [SMALL_STATE(636)] = 10845,
  [SMALL_STATE(637)] = 10852,
  [SMALL_STATE(638)] = 10857,
  [SMALL_STATE(639)] = 10864,
  [SMALL_STATE(640)] = 10869,
  [SMALL_STATE(641)] = 10876,
  [SMALL_STATE(642)] = 10883,
  [SMALL_STATE(643)] = 10890,
  [SMALL_STATE(644)] = 10897,
  [SMALL_STATE(645)] = 10904,
  [SMALL_STATE(646)] = 10911,
  [SMALL_STATE(647)] = 10918,
  [SMALL_STATE(648)] = 10925,
  [SMALL_STATE(649)] = 10932,
  [SMALL_STATE(650)] = 10939,
  [SMALL_STATE(651)] = 10944,
  [SMALL_STATE(652)] = 10951,
  [SMALL_STATE(653)] = 10956,
  [SMALL_STATE(654)] = 10963,
  [SMALL_STATE(655)] = 10968,
  [SMALL_STATE(656)] = 10975,
  [SMALL_STATE(657)] = 10980,
  [SMALL_STATE(658)] = 10987,
  [SMALL_STATE(659)] = 10994,
  [SMALL_STATE(660)] = 11001,
  [SMALL_STATE(661)] = 11008,
  [SMALL_STATE(662)] = 11015,
  [SMALL_STATE(663)] = 11022,
  [SMALL_STATE(664)] = 11029,
  [SMALL_STATE(665)] = 11036,
  [SMALL_STATE(666)] = 11040,
  [SMALL_STATE(667)] = 11044,
  [SMALL_STATE(668)] = 11048,
  [SMALL_STATE(669)] = 11052,
  [SMALL_STATE(670)] = 11056,
  [SMALL_STATE(671)] = 11060,
  [SMALL_STATE(672)] = 11064,
  [SMALL_STATE(673)] = 11068,
  [SMALL_STATE(674)] = 11072,
  [SMALL_STATE(675)] = 11076,
  [SMALL_STATE(676)] = 11080,
  [SMALL_STATE(677)] = 11084,
  [SMALL_STATE(678)] = 11088,
  [SMALL_STATE(679)] = 11092,
  [SMALL_STATE(680)] = 11096,
  [SMALL_STATE(681)] = 11100,
  [SMALL_STATE(682)] = 11104,
  [SMALL_STATE(683)] = 11108,
  [SMALL_STATE(684)] = 11112,
  [SMALL_STATE(685)] = 11116,
  [SMALL_STATE(686)] = 11120,
  [SMALL_STATE(687)] = 11124,
  [SMALL_STATE(688)] = 11128,
  [SMALL_STATE(689)] = 11132,
  [SMALL_STATE(690)] = 11136,
  [SMALL_STATE(691)] = 11140,
  [SMALL_STATE(692)] = 11144,
  [SMALL_STATE(693)] = 11148,
  [SMALL_STATE(694)] = 11152,
  [SMALL_STATE(695)] = 11156,
  [SMALL_STATE(696)] = 11160,
  [SMALL_STATE(697)] = 11164,
  [SMALL_STATE(698)] = 11168,
  [SMALL_STATE(699)] = 11172,
  [SMALL_STATE(700)] = 11176,
  [SMALL_STATE(701)] = 11180,
  [SMALL_STATE(702)] = 11184,
  [SMALL_STATE(703)] = 11188,
  [SMALL_STATE(704)] = 11192,
  [SMALL_STATE(705)] = 11196,
  [SMALL_STATE(706)] = 11200,
  [SMALL_STATE(707)] = 11204,
  [SMALL_STATE(708)] = 11208,
  [SMALL_STATE(709)] = 11212,
  [SMALL_STATE(710)] = 11216,
  [SMALL_STATE(711)] = 11220,
  [SMALL_STATE(712)] = 11224,
  [SMALL_STATE(713)] = 11228,
  [SMALL_STATE(714)] = 11232,
  [SMALL_STATE(715)] = 11236,
  [SMALL_STATE(716)] = 11240,
  [SMALL_STATE(717)] = 11244,
  [SMALL_STATE(718)] = 11248,
  [SMALL_STATE(719)] = 11252,
  [SMALL_STATE(720)] = 11256,
  [SMALL_STATE(721)] = 11260,
  [SMALL_STATE(722)] = 11264,
  [SMALL_STATE(723)] = 11268,
  [SMALL_STATE(724)] = 11272,
  [SMALL_STATE(725)] = 11276,
  [SMALL_STATE(726)] = 11280,
  [SMALL_STATE(727)] = 11284,
  [SMALL_STATE(728)] = 11288,
  [SMALL_STATE(729)] = 11292,
  [SMALL_STATE(730)] = 11296,
  [SMALL_STATE(731)] = 11300,
  [SMALL_STATE(732)] = 11304,
  [SMALL_STATE(733)] = 11308,
  [SMALL_STATE(734)] = 11312,
  [SMALL_STATE(735)] = 11316,
  [SMALL_STATE(736)] = 11320,
  [SMALL_STATE(737)] = 11324,
  [SMALL_STATE(738)] = 11328,
  [SMALL_STATE(739)] = 11332,
  [SMALL_STATE(740)] = 11336,
  [SMALL_STATE(741)] = 11340,
  [SMALL_STATE(742)] = 11344,
  [SMALL_STATE(743)] = 11348,
  [SMALL_STATE(744)] = 11352,
  [SMALL_STATE(745)] = 11356,
  [SMALL_STATE(746)] = 11360,
  [SMALL_STATE(747)] = 11364,
  [SMALL_STATE(748)] = 11368,
  [SMALL_STATE(749)] = 11372,
  [SMALL_STATE(750)] = 11376,
  [SMALL_STATE(751)] = 11380,
  [SMALL_STATE(752)] = 11384,
  [SMALL_STATE(753)] = 11388,
  [SMALL_STATE(754)] = 11392,
  [SMALL_STATE(755)] = 11396,
  [SMALL_STATE(756)] = 11400,
  [SMALL_STATE(757)] = 11404,
  [SMALL_STATE(758)] = 11408,
  [SMALL_STATE(759)] = 11412,
  [SMALL_STATE(760)] = 11416,
  [SMALL_STATE(761)] = 11420,
  [SMALL_STATE(762)] = 11424,
  [SMALL_STATE(763)] = 11428,
  [SMALL_STATE(764)] = 11432,
  [SMALL_STATE(765)] = 11436,
  [SMALL_STATE(766)] = 11440,
  [SMALL_STATE(767)] = 11444,
  [SMALL_STATE(768)] = 11448,
  [SMALL_STATE(769)] = 11452,
  [SMALL_STATE(770)] = 11456,
  [SMALL_STATE(771)] = 11460,
  [SMALL_STATE(772)] = 11464,
  [SMALL_STATE(773)] = 11468,
  [SMALL_STATE(774)] = 11472,
  [SMALL_STATE(775)] = 11476,
  [SMALL_STATE(776)] = 11480,
  [SMALL_STATE(777)] = 11484,
  [SMALL_STATE(778)] = 11488,
  [SMALL_STATE(779)] = 11492,
  [SMALL_STATE(780)] = 11496,
  [SMALL_STATE(781)] = 11500,
  [SMALL_STATE(782)] = 11504,
  [SMALL_STATE(783)] = 11508,
  [SMALL_STATE(784)] = 11512,
  [SMALL_STATE(785)] = 11516,
  [SMALL_STATE(786)] = 11520,
  [SMALL_STATE(787)] = 11524,
  [SMALL_STATE(788)] = 11528,
  [SMALL_STATE(789)] = 11532,
  [SMALL_STATE(790)] = 11536,
  [SMALL_STATE(791)] = 11540,
  [SMALL_STATE(792)] = 11544,
  [SMALL_STATE(793)] = 11548,
  [SMALL_STATE(794)] = 11552,
  [SMALL_STATE(795)] = 11556,
  [SMALL_STATE(796)] = 11560,
  [SMALL_STATE(797)] = 11564,
  [SMALL_STATE(798)] = 11568,
  [SMALL_STATE(799)] = 11572,
  [SMALL_STATE(800)] = 11576,
  [SMALL_STATE(801)] = 11580,
  [SMALL_STATE(802)] = 11584,
  [SMALL_STATE(803)] = 11588,
  [SMALL_STATE(804)] = 11592,
  [SMALL_STATE(805)] = 11596,
  [SMALL_STATE(806)] = 11600,
  [SMALL_STATE(807)] = 11604,
  [SMALL_STATE(808)] = 11608,
  [SMALL_STATE(809)] = 11612,
  [SMALL_STATE(810)] = 11616,
  [SMALL_STATE(811)] = 11620,
  [SMALL_STATE(812)] = 11624,
  [SMALL_STATE(813)] = 11628,
  [SMALL_STATE(814)] = 11632,
  [SMALL_STATE(815)] = 11636,
  [SMALL_STATE(816)] = 11640,
  [SMALL_STATE(817)] = 11644,
  [SMALL_STATE(818)] = 11648,
  [SMALL_STATE(819)] = 11652,
  [SMALL_STATE(820)] = 11656,
  [SMALL_STATE(821)] = 11660,
  [SMALL_STATE(822)] = 11664,
  [SMALL_STATE(823)] = 11668,
  [SMALL_STATE(824)] = 11672,
  [SMALL_STATE(825)] = 11676,
  [SMALL_STATE(826)] = 11680,
  [SMALL_STATE(827)] = 11684,
  [SMALL_STATE(828)] = 11688,
  [SMALL_STATE(829)] = 11692,
  [SMALL_STATE(830)] = 11696,
  [SMALL_STATE(831)] = 11700,
  [SMALL_STATE(832)] = 11704,
  [SMALL_STATE(833)] = 11708,
  [SMALL_STATE(834)] = 11712,
  [SMALL_STATE(835)] = 11716,
  [SMALL_STATE(836)] = 11720,
  [SMALL_STATE(837)] = 11724,
  [SMALL_STATE(838)] = 11728,
  [SMALL_STATE(839)] = 11732,
  [SMALL_STATE(840)] = 11736,
  [SMALL_STATE(841)] = 11740,
  [SMALL_STATE(842)] = 11744,
  [SMALL_STATE(843)] = 11748,
  [SMALL_STATE(844)] = 11752,
  [SMALL_STATE(845)] = 11756,
  [SMALL_STATE(846)] = 11760,
  [SMALL_STATE(847)] = 11764,
  [SMALL_STATE(848)] = 11768,
  [SMALL_STATE(849)] = 11772,
  [SMALL_STATE(850)] = 11776,
  [SMALL_STATE(851)] = 11780,
  [SMALL_STATE(852)] = 11784,
  [SMALL_STATE(853)] = 11788,
  [SMALL_STATE(854)] = 11792,
  [SMALL_STATE(855)] = 11796,
  [SMALL_STATE(856)] = 11800,
  [SMALL_STATE(857)] = 11804,
  [SMALL_STATE(858)] = 11808,
  [SMALL_STATE(859)] = 11812,
  [SMALL_STATE(860)] = 11816,
  [SMALL_STATE(861)] = 11820,
  [SMALL_STATE(862)] = 11824,
  [SMALL_STATE(863)] = 11828,
  [SMALL_STATE(864)] = 11832,
  [SMALL_STATE(865)] = 11836,
  [SMALL_STATE(866)] = 11840,
  [SMALL_STATE(867)] = 11844,
  [SMALL_STATE(868)] = 11848,
  [SMALL_STATE(869)] = 11852,
  [SMALL_STATE(870)] = 11856,
  [SMALL_STATE(871)] = 11860,
  [SMALL_STATE(872)] = 11864,
  [SMALL_STATE(873)] = 11868,
  [SMALL_STATE(874)] = 11872,
  [SMALL_STATE(875)] = 11876,
  [SMALL_STATE(876)] = 11880,
  [SMALL_STATE(877)] = 11884,
  [SMALL_STATE(878)] = 11888,
  [SMALL_STATE(879)] = 11892,
  [SMALL_STATE(880)] = 11896,
  [SMALL_STATE(881)] = 11900,
  [SMALL_STATE(882)] = 11904,
  [SMALL_STATE(883)] = 11908,
  [SMALL_STATE(884)] = 11912,
  [SMALL_STATE(885)] = 11916,
  [SMALL_STATE(886)] = 11920,
  [SMALL_STATE(887)] = 11924,
  [SMALL_STATE(888)] = 11928,
  [SMALL_STATE(889)] = 11932,
  [SMALL_STATE(890)] = 11936,
  [SMALL_STATE(891)] = 11940,
  [SMALL_STATE(892)] = 11944,
  [SMALL_STATE(893)] = 11948,
  [SMALL_STATE(894)] = 11952,
  [SMALL_STATE(895)] = 11956,
  [SMALL_STATE(896)] = 11960,
  [SMALL_STATE(897)] = 11964,
  [SMALL_STATE(898)] = 11968,
  [SMALL_STATE(899)] = 11972,
  [SMALL_STATE(900)] = 11976,
  [SMALL_STATE(901)] = 11980,
  [SMALL_STATE(902)] = 11984,
  [SMALL_STATE(903)] = 11988,
  [SMALL_STATE(904)] = 11992,
  [SMALL_STATE(905)] = 11996,
  [SMALL_STATE(906)] = 12000,
  [SMALL_STATE(907)] = 12004,
  [SMALL_STATE(908)] = 12008,
  [SMALL_STATE(909)] = 12012,
  [SMALL_STATE(910)] = 12016,
  [SMALL_STATE(911)] = 12020,
  [SMALL_STATE(912)] = 12024,
  [SMALL_STATE(913)] = 12028,
  [SMALL_STATE(914)] = 12032,
  [SMALL_STATE(915)] = 12036,
  [SMALL_STATE(916)] = 12040,
  [SMALL_STATE(917)] = 12044,
  [SMALL_STATE(918)] = 12048,
  [SMALL_STATE(919)] = 12052,
  [SMALL_STATE(920)] = 12056,
  [SMALL_STATE(921)] = 12060,
  [SMALL_STATE(922)] = 12064,
  [SMALL_STATE(923)] = 12068,
  [SMALL_STATE(924)] = 12072,
  [SMALL_STATE(925)] = 12076,
  [SMALL_STATE(926)] = 12080,
  [SMALL_STATE(927)] = 12084,
  [SMALL_STATE(928)] = 12088,
  [SMALL_STATE(929)] = 12092,
  [SMALL_STATE(930)] = 12096,
  [SMALL_STATE(931)] = 12100,
  [SMALL_STATE(932)] = 12104,
  [SMALL_STATE(933)] = 12108,
  [SMALL_STATE(934)] = 12112,
  [SMALL_STATE(935)] = 12116,
  [SMALL_STATE(936)] = 12120,
  [SMALL_STATE(937)] = 12124,
  [SMALL_STATE(938)] = 12128,
  [SMALL_STATE(939)] = 12132,
  [SMALL_STATE(940)] = 12136,
  [SMALL_STATE(941)] = 12140,
  [SMALL_STATE(942)] = 12144,
  [SMALL_STATE(943)] = 12148,
  [SMALL_STATE(944)] = 12152,
  [SMALL_STATE(945)] = 12156,
  [SMALL_STATE(946)] = 12160,
  [SMALL_STATE(947)] = 12164,
  [SMALL_STATE(948)] = 12168,
  [SMALL_STATE(949)] = 12172,
  [SMALL_STATE(950)] = 12176,
  [SMALL_STATE(951)] = 12180,
  [SMALL_STATE(952)] = 12184,
  [SMALL_STATE(953)] = 12188,
  [SMALL_STATE(954)] = 12192,
  [SMALL_STATE(955)] = 12196,
  [SMALL_STATE(956)] = 12200,
  [SMALL_STATE(957)] = 12204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(361),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(450),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(889),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(844),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(830),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(360),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(775),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(620),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 35),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 35),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(359),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 35),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 33),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 40),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(594),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(795),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 47),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 25),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 31),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 32),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 33),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 30),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 21),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 27),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 16),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4, .production_id = 16),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(376),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(347),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(533),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 43),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 30),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 43),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 23),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 22),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 53),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 17),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 42),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 38),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 37),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 53),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 45),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 44),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 34),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 67),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 33),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 66),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 64),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 63),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 30),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 54),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 62),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 17),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 33),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 61),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 30),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 26),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 35),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 41),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 16),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 60),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 59),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 43),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 43),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 58),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 68),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 16),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 17),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 57),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 34),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 34),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 56),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(327),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(928),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 21),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(644),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(307),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(625),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(308),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(139),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(616),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(430),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(321),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(26),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(659),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 35),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(578),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2), SHIFT_REPEAT(412),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(591),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 52),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 52),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 51),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 20),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 46),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 65),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 39),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 48),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 49),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 50),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1641] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 55),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
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
