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
#define STATE_COUNT 929
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 305
#define ALIAS_COUNT 30
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 67

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
    [1] = anon_alias_sym_column,
  },
  [34] = {
    [2] = anon_alias_sym_password,
  },
  [35] = {
    [2] = anon_alias_sym_login,
  },
  [36] = {
    [2] = anon_alias_sym_user,
  },
  [37] = {
    [2] = anon_alias_sym_index,
  },
  [38] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [39] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [40] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [41] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [42] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [43] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [44] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [45] = {
    [4] = anon_alias_sym_keyspace,
  },
  [46] = {
    [2] = anon_alias_sym_key,
  },
  [47] = {
    [2] = anon_alias_sym_entry,
  },
  [48] = {
    [2] = anon_alias_sym_full,
  },
  [49] = {
    [0] = anon_alias_sym_primary_key,
  },
  [50] = {
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [51] = {
    [4] = anon_alias_sym_column,
  },
  [52] = {
    [2] = anon_alias_sym_value,
  },
  [53] = {
    [0] = anon_alias_sym_partition_key,
  },
  [54] = {
    [9] = anon_alias_sym_language,
    [11] = anon_alias_sym_code_block,
  },
  [55] = {
    [10] = anon_alias_sym_language,
    [12] = anon_alias_sym_code_block,
  },
  [56] = {
    [11] = anon_alias_sym_language,
    [13] = anon_alias_sym_code_block,
  },
  [57] = {
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [58] = {
    [12] = anon_alias_sym_language,
    [14] = anon_alias_sym_code_block,
  },
  [59] = {
    [13] = anon_alias_sym_language,
    [15] = anon_alias_sym_code_block,
  },
  [60] = {
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [61] = {
    [14] = anon_alias_sym_language,
    [16] = anon_alias_sym_code_block,
  },
  [62] = {
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [63] = {
    [0] = anon_alias_sym_hash_key,
  },
  [64] = {
    [15] = anon_alias_sym_language,
    [17] = anon_alias_sym_code_block,
  },
  [65] = {
    [16] = anon_alias_sym_language,
    [18] = anon_alias_sym_code_block,
  },
  [66] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(551);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '+') ADVANCE(645);
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '-') ADVANCE(646);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == ';') ADVANCE(552);
      if (lookahead == '<') ADVANCE(591);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(595);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(615);
      if (lookahead == ']') ADVANCE(616);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(420);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(113);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
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
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '0') ADVANCE(574);
      if (lookahead == 'X') ADVANCE(752);
      if (lookahead == '[') ADVANCE(615);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(757);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(917);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(933);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(548);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(586);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(572);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(802);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(754);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(826);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(842);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(806);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(755);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(789);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(912);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(919);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(796);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(918);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(517);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(513);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(603);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(490);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
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
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(691);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(681);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(683);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
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
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(475);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(503);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(485);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(617);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(745);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
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
          lookahead == 'g') ADVANCE(489);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(733);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 251:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
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
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 358:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(641);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(618);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(739);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 492:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 493:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 494:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(674);
      END_STATE();
    case 495:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(558);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(349);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(397);
      END_STATE();
    case 498:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(632);
      END_STATE();
    case 499:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(438);
      END_STATE();
    case 500:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 501:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 502:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(750);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(658);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(740);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 509:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(142);
      END_STATE();
    case 510:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(170);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(568);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(571);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 547:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 548:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 549:
      if (eof) ADVANCE(551);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '0') ADVANCE(574);
      if (lookahead == ';') ADVANCE(552);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == '[') ADVANCE(615);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(549)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 550:
      if (eof) ADVANCE(551);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == ';') ADVANCE(552);
      if (lookahead == '<') ADVANCE(591);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(595);
      if (lookahead == '[') ADVANCE(615);
      if (lookahead == ']') ADVANCE(616);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(398);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(550)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == 'X') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(592);
      if (lookahead == '>') ADVANCE(593);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(635);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(920);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(758);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(741);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(934);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
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
  [4] = {.lex_state = 550},
  [5] = {.lex_state = 550},
  [6] = {.lex_state = 550},
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
  [28] = {.lex_state = 550},
  [29] = {.lex_state = 550},
  [30] = {.lex_state = 550},
  [31] = {.lex_state = 550},
  [32] = {.lex_state = 550},
  [33] = {.lex_state = 550},
  [34] = {.lex_state = 550},
  [35] = {.lex_state = 550},
  [36] = {.lex_state = 550},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 550},
  [39] = {.lex_state = 550},
  [40] = {.lex_state = 550},
  [41] = {.lex_state = 550},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 550},
  [44] = {.lex_state = 550},
  [45] = {.lex_state = 550},
  [46] = {.lex_state = 550},
  [47] = {.lex_state = 550},
  [48] = {.lex_state = 550},
  [49] = {.lex_state = 550},
  [50] = {.lex_state = 550},
  [51] = {.lex_state = 550},
  [52] = {.lex_state = 550},
  [53] = {.lex_state = 550},
  [54] = {.lex_state = 550},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 550},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 550},
  [59] = {.lex_state = 550},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 550},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 550},
  [64] = {.lex_state = 550},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 549},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 550},
  [75] = {.lex_state = 550},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 549},
  [81] = {.lex_state = 550},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 550},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
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
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 549},
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
  [123] = {.lex_state = 550},
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
  [150] = {.lex_state = 550},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 550},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 550},
  [160] = {.lex_state = 550},
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
  [176] = {.lex_state = 550},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 550},
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
  [246] = {.lex_state = 1},
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
  [284] = {.lex_state = 549},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 549},
  [287] = {.lex_state = 549},
  [288] = {.lex_state = 549},
  [289] = {.lex_state = 549},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 549},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 549},
  [297] = {.lex_state = 40},
  [298] = {.lex_state = 51},
  [299] = {.lex_state = 549},
  [300] = {.lex_state = 549},
  [301] = {.lex_state = 549},
  [302] = {.lex_state = 549},
  [303] = {.lex_state = 549},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 51},
  [306] = {.lex_state = 550},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 549},
  [309] = {.lex_state = 549},
  [310] = {.lex_state = 549},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 549},
  [313] = {.lex_state = 549},
  [314] = {.lex_state = 549},
  [315] = {.lex_state = 550},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 11},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 11},
  [326] = {.lex_state = 11},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 12},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 550},
  [333] = {.lex_state = 15},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 550},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 550},
  [339] = {.lex_state = 10},
  [340] = {.lex_state = 51},
  [341] = {.lex_state = 13},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 19},
  [350] = {.lex_state = 550},
  [351] = {.lex_state = 19},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 21},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 25},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 10},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 20},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 20},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 20},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 20},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 20},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 20},
  [408] = {.lex_state = 20},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 20},
  [411] = {.lex_state = 20},
  [412] = {.lex_state = 550},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 20},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 20},
  [421] = {.lex_state = 549},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 10},
  [424] = {.lex_state = 20},
  [425] = {.lex_state = 20},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 20},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 20},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 550},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 550},
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
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 10},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 10},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 10},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 10},
  [520] = {.lex_state = 10},
  [521] = {.lex_state = 10},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 10},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 10},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 10},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 10},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 10},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 10},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 10},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 10},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 10},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 550},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 550},
  [598] = {.lex_state = 10},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 10},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 10},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 550},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 17},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 10},
  [634] = {.lex_state = 10},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
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
  [653] = {.lex_state = 549},
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
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
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
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 10},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 550},
  [700] = {.lex_state = 550},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 549},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 550},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 550},
  [727] = {.lex_state = 550},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 550},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 10},
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
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
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
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 549},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 549},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 549},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 549},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 10},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
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
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 549},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 549},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 10},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 549},
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
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 10},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 10},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 40},
  [918] = {.lex_state = 10},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 549},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 0},
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
    [sym_source_file] = STATE(924),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(206),
    [sym_delete_statement] = STATE(206),
    [sym_begin_batch] = STATE(467),
    [sym_insert_statement] = STATE(206),
    [sym_truncate] = STATE(206),
    [sym_create_index] = STATE(206),
    [sym_drop_index] = STATE(206),
    [sym_update] = STATE(206),
    [sym_use] = STATE(206),
    [sym_grant] = STATE(206),
    [sym_revoke] = STATE(206),
    [sym_list_roles] = STATE(206),
    [sym_list_permissions] = STATE(206),
    [sym_drop_aggregate] = STATE(206),
    [sym_drop_materialized_view] = STATE(206),
    [sym_drop_function] = STATE(206),
    [sym_drop_keyspace] = STATE(206),
    [sym_drop_role] = STATE(206),
    [sym_drop_table] = STATE(206),
    [sym_drop_trigger] = STATE(206),
    [sym_drop_type] = STATE(206),
    [sym_drop_user] = STATE(206),
    [sym_create_aggregate] = STATE(206),
    [sym_create_materialized_view] = STATE(206),
    [sym_create_function] = STATE(206),
    [sym_create_keyspace] = STATE(206),
    [sym_create_role] = STATE(206),
    [sym_create_table] = STATE(206),
    [sym_create_trigger] = STATE(206),
    [sym_create_type] = STATE(206),
    [sym_create_user] = STATE(206),
    [sym_alter_materialized_view] = STATE(206),
    [sym_alter_keyspace] = STATE(206),
    [sym_alter_role] = STATE(206),
    [sym_alter_table] = STATE(206),
    [sym_alter_type] = STATE(206),
    [sym_alter_user] = STATE(206),
    [sym_apply_batch] = STATE(206),
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
    STATE(467), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(206), 37,
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
    STATE(467), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(206), 37,
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
    STATE(892), 1,
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
    STATE(719), 1,
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
    STATE(777), 1,
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
    STATE(800), 1,
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
    STATE(827), 1,
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
    STATE(675), 1,
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
    STATE(730), 1,
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
    STATE(843), 1,
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
    STATE(877), 1,
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
    STATE(121), 1,
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
    STATE(367), 1,
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
    STATE(266), 1,
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
    STATE(771), 1,
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
    STATE(659), 1,
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
    STATE(654), 1,
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
    STATE(849), 1,
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
    STATE(893), 1,
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
    STATE(852), 1,
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
    STATE(783), 1,
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
    STATE(593), 1,
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
    STATE(404), 1,
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
    ACTIONS(89), 26,
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
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1046] = 1,
    ACTIONS(93), 26,
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
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1075] = 3,
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
  [1107] = 3,
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
  [1138] = 1,
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
  [1165] = 3,
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
  [1196] = 3,
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
  [1227] = 1,
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
  [1254] = 3,
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
  [1285] = 3,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(60), 1,
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
  [1315] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(56), 1,
      sym_where_spec,
    STATE(83), 1,
      sym_order_spec,
    STATE(176), 1,
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
  [1355] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(61), 1,
      sym_where_spec,
    STATE(74), 1,
      sym_order_spec,
    STATE(150), 1,
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
  [1395] = 3,
    ACTIONS(130), 1,
      aux_sym_relation_elements_token1,
    STATE(40), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(128), 21,
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
  [1425] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(59), 1,
      sym_where_spec,
    STATE(81), 1,
      sym_order_spec,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1465] = 1,
    ACTIONS(137), 23,
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
  [1491] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(40), 1,
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
  [1520] = 1,
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
  [1545] = 1,
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
  [1570] = 1,
    ACTIONS(128), 22,
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
  [1595] = 1,
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
  [1620] = 1,
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
  [1645] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(43), 1,
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
  [1674] = 1,
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
  [1699] = 1,
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
  [1724] = 1,
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
  [1749] = 1,
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
  [1774] = 1,
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
  [1799] = 1,
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
  [1823] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(75), 1,
      sym_order_spec,
    STATE(181), 1,
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
  [1857] = 1,
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
  [1881] = 1,
    ACTIONS(169), 21,
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
  [1905] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(83), 1,
      sym_order_spec,
    STATE(176), 1,
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
  [1939] = 1,
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
  [1963] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(81), 1,
      sym_order_spec,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1997] = 2,
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
  [2022] = 2,
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
  [2047] = 1,
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
  [2070] = 2,
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
  [2095] = 2,
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
  [2120] = 2,
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
  [2145] = 2,
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
  [2170] = 1,
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
  [2192] = 4,
    ACTIONS(203), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(273), 1,
      sym_using_ttl_timestamp,
    ACTIONS(201), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2220] = 1,
    ACTIONS(207), 19,
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
  [2242] = 1,
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
  [2264] = 1,
    ACTIONS(209), 19,
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
  [2286] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2314] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(213), 1,
      aux_sym_select_statement_token4,
    STATE(156), 1,
      sym_limit_spec,
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
  [2342] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(215), 17,
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
  [2368] = 1,
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
  [2390] = 1,
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
  [2412] = 4,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(226), 1,
      aux_sym_delete_statement_token2,
    STATE(216), 1,
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
  [2440] = 9,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(452), 1,
      sym_expression,
    STATE(672), 1,
      sym_expression_list,
    STATE(540), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2478] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(176), 1,
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
  [2506] = 2,
    ACTIONS(240), 1,
      aux_sym_privilege_token2,
    ACTIONS(238), 18,
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
  [2530] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(165), 1,
      aux_sym_select_statement_token4,
    STATE(181), 1,
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
  [2558] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(242), 17,
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
  [2584] = 3,
    STATE(198), 1,
      sym_user_super_user,
    ACTIONS(249), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(247), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2610] = 1,
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
  [2632] = 2,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(253), 18,
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
  [2656] = 9,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(452), 1,
      sym_expression,
    STATE(857), 1,
      sym_expression_list,
    STATE(540), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2694] = 1,
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
  [2716] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_table_options_repeat1,
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
  [2741] = 3,
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
  [2766] = 1,
    ACTIONS(238), 18,
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
  [2787] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [2812] = 1,
    ACTIONS(272), 18,
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
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_create_function_repeat1,
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
  [2858] = 3,
    ACTIONS(280), 1,
      aux_sym_relation_elements_token1,
    STATE(96), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [2883] = 3,
    ACTIONS(285), 1,
      aux_sym_delete_statement_token2,
    STATE(212), 1,
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
  [2908] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_create_function_repeat1,
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
  [2933] = 1,
    ACTIONS(289), 18,
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
  [2954] = 3,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    STATE(139), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [2979] = 3,
    ACTIONS(297), 1,
      aux_sym_relation_elements_token1,
    STATE(101), 1,
      aux_sym_role_with_repeat1,
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
  [3004] = 3,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    STATE(245), 1,
      sym_with_element,
    ACTIONS(300), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3029] = 3,
    ACTIONS(306), 1,
      aux_sym_relation_elements_token1,
    STATE(129), 1,
      aux_sym_role_with_repeat1,
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
  [3054] = 1,
    ACTIONS(308), 18,
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
  [3075] = 1,
    ACTIONS(310), 18,
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
  [3096] = 8,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(611), 1,
      sym_expression,
    STATE(540), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3131] = 3,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(183), 1,
      sym_using_ttl_timestamp,
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
  [3156] = 1,
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
  [3177] = 1,
    ACTIONS(316), 18,
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
  [3198] = 3,
    ACTIONS(320), 1,
      aux_sym_create_keyspace_token1,
    STATE(226), 1,
      sym_role_with,
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
  [3223] = 3,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    STATE(209), 1,
      sym_with_element,
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
  [3248] = 2,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(324), 17,
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
  [3271] = 3,
    ACTIONS(330), 1,
      aux_sym_delete_statement_token2,
    STATE(219), 1,
      sym_if_spec,
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
  [3296] = 1,
    ACTIONS(332), 18,
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
  [3317] = 1,
    ACTIONS(242), 18,
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
  [3338] = 1,
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
  [3359] = 3,
    ACTIONS(338), 1,
      aux_sym_list_roles_token2,
    ACTIONS(340), 1,
      aux_sym_list_roles_token3,
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
  [3384] = 1,
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
  [3405] = 3,
    ACTIONS(346), 1,
      aux_sym_delete_statement_token2,
    STATE(200), 1,
      sym_if_spec,
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
  [3430] = 3,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(196), 1,
      sym_using_ttl_timestamp,
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
  [3455] = 1,
    ACTIONS(350), 18,
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
  [3476] = 3,
    ACTIONS(320), 1,
      aux_sym_create_keyspace_token1,
    STATE(217), 1,
      sym_role_with,
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
  [3501] = 1,
    ACTIONS(354), 18,
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
  [3522] = 3,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    STATE(229), 1,
      sym_with_element,
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
  [3547] = 2,
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
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3570] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
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
  [3595] = 2,
    ACTIONS(366), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(364), 17,
      ts_builtin_sym_end,
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
  [3618] = 3,
    ACTIONS(370), 1,
      aux_sym_delete_statement_token2,
    STATE(184), 1,
      sym_if_spec,
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
  [3643] = 3,
    ACTIONS(306), 1,
      aux_sym_relation_elements_token1,
    STATE(101), 1,
      aux_sym_role_with_repeat1,
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
  [3668] = 3,
    ACTIONS(376), 1,
      aux_sym_delete_statement_token2,
    STATE(233), 1,
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
  [3693] = 1,
    ACTIONS(378), 18,
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
  [3714] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(91), 1,
      aux_sym_table_options_repeat1,
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
  [3739] = 3,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    STATE(214), 1,
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
  [3764] = 3,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    STATE(189), 1,
      sym_with_element,
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
  [3789] = 2,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(386), 17,
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
  [3812] = 3,
    ACTIONS(392), 1,
      aux_sym_delete_statement_token2,
    STATE(208), 1,
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
  [3837] = 3,
    ACTIONS(396), 1,
      aux_sym_delete_statement_token2,
    STATE(185), 1,
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
  [3862] = 1,
    ACTIONS(398), 18,
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
  [3883] = 3,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    STATE(96), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3908] = 1,
    ACTIONS(402), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3929] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(84), 1,
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
  [3954] = 3,
    ACTIONS(320), 1,
      aux_sym_create_keyspace_token1,
    STATE(271), 1,
      sym_role_with,
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
  [3979] = 1,
    ACTIONS(408), 18,
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
  [4000] = 3,
    ACTIONS(412), 1,
      aux_sym_create_index_token3,
    ACTIONS(414), 1,
      aux_sym_list_roles_token2,
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
  [4025] = 1,
    ACTIONS(215), 18,
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
  [4046] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4071] = 1,
    ACTIONS(418), 17,
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
  [4091] = 2,
    ACTIONS(422), 1,
      aux_sym_list_roles_token3,
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
  [4113] = 1,
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
  [4133] = 2,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4155] = 1,
    ACTIONS(426), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4175] = 1,
    ACTIONS(428), 17,
      ts_builtin_sym_end,
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
  [4195] = 1,
    ACTIONS(430), 17,
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
  [4215] = 1,
    ACTIONS(432), 17,
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
  [4235] = 1,
    ACTIONS(434), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4255] = 2,
    ACTIONS(438), 1,
      aux_sym_select_statement_token4,
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
  [4277] = 1,
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
  [4297] = 1,
    ACTIONS(442), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4317] = 1,
    ACTIONS(444), 17,
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
  [4337] = 2,
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
  [4359] = 1,
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
  [4379] = 1,
    ACTIONS(448), 17,
      ts_builtin_sym_end,
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
  [4399] = 2,
    ACTIONS(452), 1,
      aux_sym_list_roles_token2,
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
  [4421] = 2,
    ACTIONS(456), 1,
      anon_sym_DOT,
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
  [4443] = 2,
    ACTIONS(460), 1,
      aux_sym_relation_elements_token1,
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
  [4465] = 1,
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
  [4485] = 1,
    ACTIONS(278), 17,
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
  [4505] = 1,
    ACTIONS(464), 17,
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
  [4525] = 1,
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
  [4545] = 2,
    ACTIONS(470), 1,
      aux_sym_relation_elements_token1,
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
  [4567] = 1,
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
  [4587] = 1,
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
  [4607] = 1,
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
  [4627] = 1,
    ACTIONS(295), 17,
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
  [4647] = 1,
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
  [4667] = 2,
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
  [4689] = 1,
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
  [4709] = 1,
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
  [4729] = 1,
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
  [4749] = 2,
    ACTIONS(486), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(484), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4771] = 2,
    ACTIONS(213), 1,
      aux_sym_select_statement_token4,
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
  [4793] = 1,
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
  [4813] = 1,
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
  [4832] = 1,
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
  [4851] = 1,
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
  [4870] = 1,
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
  [4889] = 1,
    ACTIONS(492), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4908] = 1,
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
  [4927] = 1,
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
  [4946] = 1,
    ACTIONS(498), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4965] = 1,
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
  [4984] = 1,
    ACTIONS(502), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5003] = 1,
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
  [5022] = 1,
    ACTIONS(506), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5041] = 1,
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
  [5060] = 1,
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
  [5079] = 1,
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
  [5098] = 1,
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
  [5117] = 1,
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
  [5136] = 1,
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
  [5155] = 1,
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
  [5174] = 1,
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
  [5193] = 1,
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
  [5212] = 1,
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
  [5231] = 1,
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
  [5250] = 2,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(528), 15,
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
  [5271] = 1,
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
  [5290] = 1,
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
  [5309] = 1,
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
  [5328] = 1,
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
  [5347] = 1,
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
  [5366] = 1,
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
  [5385] = 1,
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
  [5404] = 1,
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
  [5423] = 1,
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
  [5442] = 1,
    ACTIONS(201), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5461] = 1,
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
  [5480] = 1,
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
  [5499] = 1,
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
  [5518] = 1,
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
  [5537] = 1,
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
  [5556] = 1,
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
  [5575] = 1,
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
  [5594] = 1,
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
  [5613] = 1,
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
  [5632] = 1,
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
  [5651] = 1,
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
  [5670] = 1,
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
  [5689] = 1,
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
  [5708] = 1,
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
  [5727] = 1,
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
  [5746] = 1,
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
  [5765] = 1,
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
  [5784] = 1,
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
  [5803] = 1,
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
  [5822] = 1,
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
  [5841] = 1,
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
  [5860] = 1,
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
  [5879] = 1,
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
  [5898] = 1,
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
  [5917] = 1,
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
  [5936] = 1,
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
  [5955] = 1,
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
  [5974] = 1,
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
  [5993] = 1,
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
  [6012] = 9,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(507), 1,
      sym_constant,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(376), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6047] = 1,
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
  [6066] = 1,
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
  [6085] = 1,
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
  [6104] = 1,
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
  [6123] = 1,
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
  [6142] = 1,
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
  [6161] = 1,
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
  [6180] = 1,
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
  [6199] = 1,
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
  [6218] = 1,
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
  [6237] = 1,
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
  [6256] = 1,
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
  [6275] = 1,
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
  [6294] = 1,
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
  [6313] = 1,
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
  [6332] = 1,
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
  [6351] = 1,
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
  [6370] = 1,
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
  [6389] = 1,
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
  [6408] = 1,
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
  [6427] = 1,
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
  [6446] = 1,
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
  [6465] = 1,
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
  [6484] = 1,
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
  [6503] = 1,
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
  [6522] = 1,
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
  [6541] = 1,
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
  [6560] = 1,
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
  [6579] = 1,
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
  [6598] = 1,
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
  [6617] = 1,
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
  [6636] = 1,
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
  [6655] = 1,
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
  [6674] = 1,
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
  [6693] = 1,
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
  [6712] = 1,
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
  [6731] = 1,
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
  [6750] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(220), 1,
      sym_init_cond_definition,
    STATE(104), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6778] = 1,
    ACTIONS(676), 15,
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
  [6796] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(211), 1,
      sym_init_cond_definition,
    STATE(104), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6824] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(283), 1,
      sym_init_cond_definition,
    STATE(104), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6852] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(514), 1,
      sym_init_cond_definition,
    STATE(104), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6880] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(187), 1,
      sym_init_cond_definition,
    STATE(104), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6908] = 9,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(418), 1,
      sym_init_cond_hash_item,
    STATE(449), 1,
      sym_init_cond_list,
    STATE(450), 1,
      sym_constant,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6941] = 8,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(682), 1,
      anon_sym_STAR,
    ACTIONS(684), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(782), 1,
      sym_function_args,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(472), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6972] = 7,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(875), 1,
      sym_function_args,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(472), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7000] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(577), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7025] = 5,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(512), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7048] = 6,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(688), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(598), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(44), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(230), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7073] = 5,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(690), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7095] = 4,
    ACTIONS(694), 1,
      aux_sym_privilege_token1,
    ACTIONS(696), 1,
      aux_sym_resource_token4,
    STATE(144), 1,
      sym_privilege,
    ACTIONS(692), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7115] = 11,
    ACTIONS(698), 1,
      aux_sym_truncate_token2,
    ACTIONS(700), 1,
      aux_sym_create_index_token2,
    ACTIONS(702), 1,
      aux_sym_resource_token2,
    ACTIONS(704), 1,
      aux_sym_resource_token5,
    ACTIONS(706), 1,
      aux_sym_resource_token6,
    ACTIONS(708), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(710), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(712), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(714), 1,
      aux_sym_drop_type_token1,
    ACTIONS(716), 1,
      aux_sym_drop_user_token1,
    ACTIONS(718), 1,
      aux_sym_create_aggregate_token1,
  [7149] = 5,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(372), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7171] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7190] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(816), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7209] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(48), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7228] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(507), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7247] = 3,
    ACTIONS(694), 1,
      aux_sym_privilege_token1,
    STATE(903), 1,
      sym_privilege,
    ACTIONS(692), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7264] = 10,
    ACTIONS(722), 1,
      aux_sym_truncate_token2,
    ACTIONS(724), 1,
      aux_sym_create_index_token2,
    ACTIONS(726), 1,
      aux_sym_resource_token2,
    ACTIONS(728), 1,
      aux_sym_resource_token5,
    ACTIONS(730), 1,
      aux_sym_resource_token6,
    ACTIONS(732), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(734), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(736), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(738), 1,
      aux_sym_drop_type_token1,
    ACTIONS(740), 1,
      aux_sym_drop_user_token1,
  [7295] = 6,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(748), 1,
      aux_sym_relation_element_token1,
    ACTIONS(750), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(752), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(744), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(746), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7318] = 3,
    ACTIONS(694), 1,
      aux_sym_privilege_token1,
    STATE(905), 1,
      sym_privilege,
    ACTIONS(692), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7335] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(397), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7354] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(377), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7373] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(108), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7392] = 6,
    ACTIONS(302), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(754), 1,
      aux_sym_drop_index_token1,
    ACTIONS(756), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(758), 1,
      aux_sym_alter_table_rename_token1,
    STATE(269), 1,
      sym_alter_table_operation,
    STATE(268), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7415] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(450), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7434] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(538), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7453] = 4,
    ACTIONS(232), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(382), 1,
      sym_constant,
    ACTIONS(230), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7472] = 5,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(748), 1,
      aux_sym_relation_element_token1,
    ACTIONS(750), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(744), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(746), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7492] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(764), 1,
      sym_object_name,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7515] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(766), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7538] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(768), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7561] = 6,
    ACTIONS(770), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(772), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(774), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(790), 1,
      sym_index_column_spec,
    STATE(798), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7582] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(778), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7605] = 6,
    ACTIONS(780), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(782), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(231), 1,
      sym_table_options,
    STATE(722), 1,
      sym_table_option_name,
    STATE(90), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7626] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(786), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7649] = 6,
    ACTIONS(770), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(772), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(774), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(701), 1,
      sym_index_column_spec,
    STATE(798), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7670] = 6,
    ACTIONS(770), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(772), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(774), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(788), 1,
      sym_index_column_spec,
    STATE(798), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7691] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(788), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7714] = 7,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(790), 1,
      aux_sym_delete_statement_token3,
    STATE(49), 1,
      sym_relation_element,
    STATE(195), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7737] = 6,
    ACTIONS(770), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(772), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(774), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(758), 1,
      sym_index_column_spec,
    STATE(798), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7758] = 5,
    ACTIONS(792), 1,
      aux_sym_privilege_token3,
    ACTIONS(794), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(796), 1,
      aux_sym_alter_table_rename_token1,
    STATE(276), 1,
      sym_alter_type_operation,
    STATE(277), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [7776] = 6,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(49), 1,
      sym_relation_element,
    STATE(64), 1,
      sym_relation_elements,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7796] = 7,
    ACTIONS(800), 1,
      aux_sym_select_statement_token2,
    ACTIONS(802), 1,
      aux_sym_select_statement_token3,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      sym_object_name,
    STATE(456), 1,
      sym_function_call,
    STATE(463), 1,
      sym_select_element,
    STATE(505), 1,
      sym_select_elements,
  [7818] = 6,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_object_name,
    STATE(46), 1,
      sym_relation_element,
    STATE(342), 1,
      sym_function_call,
    STATE(541), 1,
      sym_column_not_null,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7838] = 3,
    ACTIONS(814), 1,
      aux_sym_relation_element_token1,
    ACTIONS(810), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(812), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7852] = 7,
    ACTIONS(816), 1,
      aux_sym_truncate_token2,
    ACTIONS(818), 1,
      aux_sym_privilege_token1,
    ACTIONS(820), 1,
      aux_sym_resource_token2,
    ACTIONS(822), 1,
      aux_sym_resource_token5,
    ACTIONS(824), 1,
      aux_sym_resource_token6,
    ACTIONS(826), 1,
      sym_object_name,
    STATE(673), 1,
      sym_resource,
  [7874] = 7,
    ACTIONS(816), 1,
      aux_sym_truncate_token2,
    ACTIONS(818), 1,
      aux_sym_privilege_token1,
    ACTIONS(820), 1,
      aux_sym_resource_token2,
    ACTIONS(822), 1,
      aux_sym_resource_token5,
    ACTIONS(824), 1,
      aux_sym_resource_token6,
    ACTIONS(826), 1,
      sym_object_name,
    STATE(685), 1,
      sym_resource,
  [7896] = 3,
    ACTIONS(832), 1,
      aux_sym_relation_element_token1,
    ACTIONS(828), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(830), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7910] = 5,
    ACTIONS(780), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(782), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(722), 1,
      sym_table_option_name,
    STATE(173), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7928] = 7,
    ACTIONS(816), 1,
      aux_sym_truncate_token2,
    ACTIONS(818), 1,
      aux_sym_privilege_token1,
    ACTIONS(820), 1,
      aux_sym_resource_token2,
    ACTIONS(822), 1,
      aux_sym_resource_token5,
    ACTIONS(824), 1,
      aux_sym_resource_token6,
    ACTIONS(826), 1,
      sym_object_name,
    STATE(163), 1,
      sym_resource,
  [7950] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(834), 1,
      aux_sym__decimal_literal_token1,
    STATE(623), 1,
      sym__decimal_literal,
    STATE(622), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [7968] = 5,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(46), 1,
      sym_relation_element,
    STATE(342), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7985] = 6,
    ACTIONS(836), 1,
      aux_sym_truncate_token2,
    ACTIONS(838), 1,
      aux_sym_resource_token2,
    ACTIONS(840), 1,
      aux_sym_resource_token6,
    ACTIONS(842), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(844), 1,
      aux_sym_drop_type_token1,
    ACTIONS(846), 1,
      aux_sym_drop_user_token1,
  [8004] = 6,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      sym_object_name,
    ACTIONS(848), 1,
      aux_sym_select_statement_token3,
    STATE(456), 1,
      sym_function_call,
    STATE(463), 1,
      sym_select_element,
    STATE(529), 1,
      sym_select_elements,
  [8023] = 2,
    ACTIONS(850), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(852), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8034] = 5,
    ACTIONS(854), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(856), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(858), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(860), 1,
      aux_sym_role_with_option_token4,
    STATE(103), 1,
      sym_role_with_option,
  [8050] = 5,
    ACTIONS(862), 1,
      sym__string_literal,
    ACTIONS(864), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(866), 1,
      aux_sym_create_index_token3,
    ACTIONS(868), 1,
      sym_object_name,
    STATE(859), 1,
      sym_short_index_name,
  [8066] = 1,
    ACTIONS(870), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8074] = 1,
    ACTIONS(872), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8082] = 4,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      anon_sym_DOT,
    ACTIONS(878), 1,
      aux_sym_select_element_token1,
    ACTIONS(874), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8096] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(883), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8108] = 5,
    ACTIONS(885), 1,
      aux_sym_from_spec_token1,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(381), 1,
      sym_from_spec,
    STATE(443), 1,
      sym_delete_column_item,
    STATE(557), 1,
      sym_delete_column_list,
  [8124] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(171), 2,
      sym_option_hash,
      sym_table_option_value,
  [8136] = 5,
    ACTIONS(885), 1,
      aux_sym_from_spec_token1,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(371), 1,
      sym_from_spec,
    STATE(443), 1,
      sym_delete_column_item,
    STATE(511), 1,
      sym_delete_column_list,
  [8152] = 1,
    ACTIONS(893), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8160] = 1,
    ACTIONS(895), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8168] = 5,
    ACTIONS(854), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(856), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(858), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(860), 1,
      aux_sym_role_with_option_token4,
    STATE(174), 1,
      sym_role_with_option,
  [8184] = 1,
    ACTIONS(897), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8192] = 3,
    ACTIONS(901), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(436), 1,
      sym_using_timestamp_spec,
    ACTIONS(899), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8204] = 1,
    ACTIONS(903), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8212] = 1,
    ACTIONS(905), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8220] = 3,
    ACTIONS(901), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(465), 1,
      sym_using_timestamp_spec,
    ACTIONS(907), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8232] = 5,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(456), 1,
      sym_function_call,
    STATE(463), 1,
      sym_select_element,
    STATE(559), 1,
      sym_select_elements,
  [8248] = 4,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(913), 1,
      sym_object_name,
    STATE(755), 1,
      sym_primary_key_definition,
    STATE(756), 2,
      sym_compound_key,
      sym_composite_key,
  [8262] = 5,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(456), 1,
      sym_function_call,
    STATE(463), 1,
      sym_select_element,
    STATE(529), 1,
      sym_select_elements,
  [8278] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(917), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8289] = 1,
    ACTIONS(919), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8296] = 4,
    ACTIONS(921), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(923), 1,
      aux_sym_primary_key_column_token1,
    STATE(370), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(486), 1,
      aux_sym_relation_elements_repeat1,
  [8309] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(901), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(113), 1,
      sym_where_spec,
    STATE(581), 1,
      sym_using_timestamp_spec,
  [8322] = 3,
    ACTIONS(927), 1,
      aux_sym_primary_key_column_token1,
    STATE(546), 1,
      sym_primary_key_column,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8333] = 4,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(929), 1,
      aux_sym_update_assignments_token1,
    STATE(612), 1,
      sym_update_assignments,
    STATE(630), 1,
      sym_using_ttl_timestamp,
  [8346] = 4,
    ACTIONS(931), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(549), 1,
      sym_column_definition,
    STATE(810), 1,
      sym_primary_key_element,
  [8359] = 4,
    ACTIONS(921), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(935), 1,
      aux_sym_primary_key_column_token1,
    STATE(475), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(478), 1,
      aux_sym_relation_elements_repeat1,
  [8372] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(901), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(97), 1,
      sym_where_spec,
    STATE(531), 1,
      sym_using_timestamp_spec,
  [8385] = 4,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    STATE(448), 1,
      aux_sym_assignment_set_repeat1,
  [8398] = 4,
    ACTIONS(931), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(549), 1,
      sym_column_definition,
    STATE(640), 1,
      sym_primary_key_element,
  [8411] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(943), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8422] = 4,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_function_args_repeat1,
  [8435] = 2,
    ACTIONS(949), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(951), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8444] = 1,
    ACTIONS(883), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8451] = 4,
    ACTIONS(862), 1,
      sym__string_literal,
    ACTIONS(868), 1,
      sym_object_name,
    ACTIONS(953), 1,
      aux_sym_create_index_token3,
    STATE(767), 1,
      sym_short_index_name,
  [8464] = 4,
    ACTIONS(205), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(929), 1,
      aux_sym_update_assignments_token1,
    STATE(550), 1,
      sym_using_ttl_timestamp,
    STATE(615), 1,
      sym_update_assignments,
  [8477] = 3,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(958), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8488] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(901), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(574), 1,
      sym_using_timestamp_spec,
  [8501] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    STATE(482), 1,
      aux_sym_assignment_map_repeat1,
  [8511] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(656), 1,
      sym_return_mode,
  [8521] = 3,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [8531] = 3,
    ACTIONS(972), 1,
      sym_object_name,
    STATE(429), 1,
      sym_assignment_element,
    STATE(697), 1,
      sym_indexed_column,
  [8541] = 3,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    STATE(468), 1,
      aux_sym_replication_list_repeat1,
  [8551] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(766), 1,
      sym_return_mode,
  [8561] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [8571] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_option_hash_repeat1,
  [8581] = 3,
    ACTIONS(984), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(986), 1,
      sym_object_name,
    STATE(696), 1,
      sym_aggregate_name,
  [8591] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_assignment_set_repeat1,
  [8601] = 3,
    ACTIONS(990), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(992), 1,
      sym_object_name,
    STATE(694), 1,
      sym_function_name,
  [8611] = 3,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8621] = 3,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_GT,
    STATE(394), 1,
      aux_sym_data_type_definition_repeat1,
  [8631] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [8641] = 3,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(476), 1,
      sym_typed_name,
  [8651] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
    STATE(460), 1,
      aux_sym_assignment_set_repeat1,
  [8661] = 3,
    ACTIONS(1009), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(249), 1,
      sym_user_name,
  [8671] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_create_function_repeat1,
  [8681] = 3,
    ACTIONS(1015), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(250), 1,
      sym_type_name,
  [8691] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_GT,
    STATE(394), 1,
      aux_sym_data_type_definition_repeat1,
  [8701] = 3,
    ACTIONS(1023), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(815), 1,
      sym_trigger_name,
  [8711] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_relation_element_repeat1,
  [8721] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_data_type_definition_repeat1,
  [8731] = 3,
    ACTIONS(986), 1,
      sym_object_name,
    ACTIONS(1031), 1,
      aux_sym_delete_statement_token2,
    STATE(258), 1,
      sym_aggregate_name,
  [8741] = 3,
    ACTIONS(1033), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1035), 1,
      aux_sym_insert_values_spec_token1,
    STATE(70), 1,
      sym_insert_values_spec,
  [8751] = 3,
    ACTIONS(1037), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(263), 1,
      sym_role_name,
  [8761] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(1041), 1,
      aux_sym_delete_statement_token2,
    STATE(275), 1,
      sym_function_name,
  [8771] = 3,
    ACTIONS(1043), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(279), 1,
      sym_keyspace_name,
  [8781] = 3,
    ACTIONS(1047), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1049), 1,
      sym_object_name,
    STATE(280), 1,
      sym_index_name,
  [8791] = 3,
    ACTIONS(1051), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(265), 1,
      sym_table_name,
  [8801] = 3,
    ACTIONS(834), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1055), 1,
      sym__string_literal,
    STATE(572), 1,
      sym__decimal_literal,
  [8811] = 2,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8819] = 3,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_init_cond_hash_repeat1,
  [8829] = 3,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym_function_args_repeat1,
  [8839] = 3,
    ACTIONS(1011), 1,
      sym_object_name,
    ACTIONS(1066), 1,
      aux_sym_delete_statement_token2,
    STATE(545), 1,
      sym_user_name,
  [8849] = 3,
    ACTIONS(1017), 1,
      sym_object_name,
    ACTIONS(1068), 1,
      aux_sym_delete_statement_token2,
    STATE(836), 1,
      sym_type_name,
  [8859] = 3,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_init_cond_hash_repeat1,
  [8869] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      aux_sym_relation_element_repeat1,
  [8879] = 3,
    ACTIONS(1025), 1,
      sym_object_name,
    ACTIONS(1074), 1,
      aux_sym_delete_statement_token2,
    STATE(838), 1,
      sym_trigger_name,
  [8889] = 2,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(1078), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [8897] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_expression_list_repeat1,
  [8907] = 3,
    ACTIONS(1005), 1,
      sym_object_name,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_typed_name,
  [8917] = 3,
    ACTIONS(986), 1,
      sym_object_name,
    ACTIONS(1087), 1,
      aux_sym_delete_statement_token2,
    STATE(841), 1,
      sym_aggregate_name,
  [8927] = 3,
    ACTIONS(1039), 1,
      sym_object_name,
    ACTIONS(1089), 1,
      aux_sym_delete_statement_token2,
    STATE(110), 1,
      sym_role_name,
  [8937] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(1091), 1,
      aux_sym_delete_statement_token2,
    STATE(850), 1,
      sym_function_name,
  [8947] = 3,
    ACTIONS(1045), 1,
      sym_object_name,
    ACTIONS(1093), 1,
      aux_sym_delete_statement_token2,
    STATE(856), 1,
      sym_keyspace_name,
  [8957] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [8967] = 3,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      aux_sym_where_spec_token1,
    STATE(384), 1,
      aux_sym_update_assignments_repeat1,
  [8977] = 3,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(456), 1,
      sym_function_call,
    STATE(560), 1,
      sym_select_element,
  [8987] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      aux_sym_from_spec_token1,
    STATE(480), 1,
      aux_sym_select_elements_repeat1,
  [8997] = 3,
    ACTIONS(1053), 1,
      sym_object_name,
    ACTIONS(1103), 1,
      aux_sym_delete_statement_token2,
    STATE(872), 1,
      sym_table_name,
  [9007] = 3,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(493), 1,
      sym_column_definition,
    STATE(655), 1,
      sym_column_definition_list,
  [9017] = 3,
    ACTIONS(1033), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1035), 1,
      aux_sym_insert_values_spec_token1,
    STATE(79), 1,
      sym_insert_values_spec,
  [9027] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_relation_element_repeat2,
  [9037] = 1,
    ACTIONS(1107), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9043] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(840), 1,
      sym_return_mode,
  [9053] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      aux_sym_from_spec_token1,
    STATE(438), 1,
      aux_sym_delete_column_list_repeat1,
  [9063] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [9073] = 3,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      aux_sym_column_definition_list_repeat1,
  [9083] = 3,
    ACTIONS(972), 1,
      sym_object_name,
    STATE(509), 1,
      sym_assignment_element,
    STATE(697), 1,
      sym_indexed_column,
  [9093] = 3,
    ACTIONS(1120), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1122), 1,
      sym_object_name,
    STATE(244), 1,
      sym_materialized_view_name,
  [9103] = 3,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      aux_sym_from_spec_token1,
    STATE(464), 1,
      aux_sym_delete_column_list_repeat1,
  [9113] = 3,
    ACTIONS(1005), 1,
      sym_object_name,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      sym_typed_name,
  [9123] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_relation_element_repeat2,
  [9133] = 2,
    ACTIONS(1130), 1,
      aux_sym_resource_token1,
    ACTIONS(1132), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [9141] = 3,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      aux_sym_column_definition_list_repeat1,
  [9151] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      aux_sym_assignment_set_repeat1,
  [9161] = 3,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9171] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_assignment_set_repeat1,
  [9181] = 3,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(493), 1,
      sym_column_definition,
    STATE(649), 1,
      sym_column_definition_list,
  [9191] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      aux_sym_expression_list_repeat1,
  [9201] = 2,
    ACTIONS(1151), 1,
      anon_sym_LBRACK,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9209] = 3,
    ACTIONS(834), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1153), 1,
      sym__string_literal,
    STATE(765), 1,
      sym__decimal_literal,
  [9219] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [9229] = 2,
    ACTIONS(1162), 1,
      aux_sym_select_element_token1,
    ACTIONS(1160), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9237] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_create_function_repeat1,
  [9247] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(772), 1,
      sym_return_mode,
  [9257] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [9267] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_assignment_set_repeat1,
  [9277] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    STATE(461), 1,
      aux_sym_assignment_map_repeat1,
  [9287] = 1,
    ACTIONS(1175), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9293] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      aux_sym_from_spec_token1,
    STATE(431), 1,
      aux_sym_select_elements_repeat1,
  [9303] = 3,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      aux_sym_from_spec_token1,
    STATE(438), 1,
      aux_sym_delete_column_list_repeat1,
  [9313] = 1,
    ACTIONS(899), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9319] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
  [9329] = 3,
    ACTIONS(1183), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1185), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1187), 1,
      aux_sym_update_token1,
  [9339] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(468), 1,
      aux_sym_replication_list_repeat1,
  [9349] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(802), 1,
      sym_return_mode,
  [9359] = 3,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_init_cond_hash_repeat1,
  [9369] = 3,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_option_hash_repeat1,
  [9379] = 3,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_function_args_repeat1,
  [9389] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [9399] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_create_function_repeat1,
  [9409] = 3,
    ACTIONS(1208), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1211), 1,
      aux_sym_primary_key_column_token1,
    STATE(475), 1,
      aux_sym_materialized_view_where_repeat1,
  [9419] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_create_function_repeat1,
  [9429] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_create_function_repeat1,
  [9439] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1217), 1,
      aux_sym_primary_key_column_token1,
    STATE(40), 1,
      aux_sym_relation_elements_repeat1,
  [9449] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_expression_list_repeat1,
  [9459] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      aux_sym_from_spec_token1,
    STATE(480), 1,
      aux_sym_select_elements_repeat1,
  [9469] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_create_function_repeat1,
  [9479] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
    STATE(461), 1,
      aux_sym_assignment_map_repeat1,
  [9489] = 3,
    ACTIONS(1005), 1,
      sym_object_name,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_typed_name,
  [9499] = 3,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_function_args_repeat1,
  [9509] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(864), 1,
      sym_return_mode,
  [9519] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(935), 1,
      aux_sym_primary_key_column_token1,
    STATE(40), 1,
      aux_sym_relation_elements_repeat1,
  [9529] = 3,
    ACTIONS(1053), 1,
      sym_object_name,
    ACTIONS(1232), 1,
      aux_sym_truncate_token2,
    STATE(218), 1,
      sym_table_name,
  [9539] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_relation_element_repeat2,
  [9549] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      aux_sym_clustering_key_list_repeat1,
  [9559] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_clustering_key_list_repeat1,
  [9569] = 3,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_replication_list_repeat1,
  [9579] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(713), 1,
      sym_return_mode,
  [9589] = 3,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      aux_sym_column_definition_list_repeat1,
  [9599] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_create_function_repeat1,
  [9609] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
  [9619] = 2,
    ACTIONS(1250), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1248), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [9627] = 3,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [9637] = 3,
    ACTIONS(964), 1,
      aux_sym_create_function_token1,
    ACTIONS(966), 1,
      aux_sym_return_mode_token1,
    STATE(861), 1,
      sym_return_mode,
  [9647] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      aux_sym_option_hash_repeat1,
  [9657] = 3,
    ACTIONS(1122), 1,
      sym_object_name,
    ACTIONS(1259), 1,
      aux_sym_delete_statement_token2,
    STATE(739), 1,
      sym_materialized_view_name,
  [9667] = 2,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1263), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9675] = 2,
    ACTIONS(1265), 1,
      aux_sym_role_with_option_token1,
    STATE(85), 1,
      sym_user_password,
  [9682] = 2,
    ACTIONS(1267), 1,
      sym_object_name,
    STATE(253), 1,
      sym_role_name,
  [9689] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(379), 1,
      sym_table_name,
  [9696] = 2,
    ACTIONS(1271), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [9703] = 1,
    ACTIONS(1273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9708] = 1,
    ACTIONS(949), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [9713] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(58), 1,
      sym_table_name,
  [9720] = 1,
    ACTIONS(1255), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [9725] = 1,
    ACTIONS(1197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9730] = 2,
    ACTIONS(1271), 1,
      aux_sym_from_spec_token1,
    STATE(381), 1,
      sym_from_spec,
  [9737] = 1,
    ACTIONS(1158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9742] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(534), 1,
      sym_table_name,
  [9749] = 1,
    ACTIONS(1275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9754] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(282), 1,
      sym_table_name,
  [9761] = 2,
    ACTIONS(1277), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_replication_list,
  [9768] = 2,
    ACTIONS(1277), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_replication_list,
  [9775] = 2,
    ACTIONS(1279), 1,
      sym_object_name,
    STATE(510), 1,
      sym_init_cond_hash_item,
  [9782] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(311), 1,
      sym_table_name,
  [9789] = 2,
    ACTIONS(1281), 1,
      sym_object_name,
    STATE(167), 1,
      sym_alter_type_rename_item,
  [9796] = 2,
    ACTIONS(1283), 1,
      sym_object_name,
    STATE(799), 1,
      sym_keyspace_name,
  [9803] = 2,
    ACTIONS(1285), 1,
      aux_sym_create_keyspace_token1,
    STATE(228), 1,
      sym_user_with,
  [9810] = 2,
    ACTIONS(1267), 1,
      sym_object_name,
    STATE(142), 1,
      sym_role_name,
  [9817] = 2,
    ACTIONS(1287), 1,
      sym_object_name,
    STATE(328), 1,
      sym_type_name,
  [9824] = 2,
    ACTIONS(1289), 1,
      sym_object_name,
    STATE(748), 1,
      sym_column_list,
  [9831] = 2,
    ACTIONS(1291), 1,
      sym_object_name,
    STATE(752), 1,
      sym_materialized_view_name,
  [9838] = 2,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(555), 1,
      sym_user_name,
  [9845] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(368), 1,
      sym_table_name,
  [9852] = 2,
    ACTIONS(1271), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [9859] = 2,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_option_hash,
  [9866] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
  [9873] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [9880] = 2,
    ACTIONS(1295), 1,
      sym_object_name,
    STATE(576), 1,
      sym_delete_column_item,
  [9887] = 2,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_insert_column_spec,
  [9894] = 2,
    ACTIONS(1299), 1,
      sym_object_name,
    STATE(541), 1,
      sym_column_not_null,
  [9901] = 1,
    ACTIONS(1301), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [9906] = 2,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(115), 1,
      sym_typed_name,
  [9913] = 1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9918] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(749), 1,
      sym_table_name,
  [9925] = 1,
    ACTIONS(1305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9930] = 1,
    ACTIONS(1211), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [9935] = 2,
    ACTIONS(1307), 1,
      aux_sym_primary_key_column_token1,
    STATE(102), 1,
      sym_primary_key_element,
  [9942] = 2,
    ACTIONS(1309), 1,
      sym_object_name,
    STATE(865), 1,
      sym_clustering_key_list,
  [9949] = 2,
    ACTIONS(1311), 1,
      aux_sym_where_spec_token1,
    STATE(542), 1,
      sym_materialized_view_where,
  [9956] = 2,
    ACTIONS(1285), 1,
      aux_sym_create_keyspace_token1,
    STATE(236), 1,
      sym_user_with,
  [9963] = 1,
    ACTIONS(1313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9968] = 2,
    ACTIONS(1315), 1,
      aux_sym_resource_token5,
    ACTIONS(1317), 1,
      aux_sym_drop_aggregate_token1,
  [9975] = 2,
    ACTIONS(1319), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1321), 1,
      aux_sym_using_ttl_timestamp_token1,
  [9982] = 1,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9987] = 2,
    ACTIONS(929), 1,
      aux_sym_update_assignments_token1,
    STATE(612), 1,
      sym_update_assignments,
  [9994] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(544), 1,
      sym_table_name,
  [10001] = 2,
    ACTIONS(1323), 1,
      aux_sym_durable_writes_token1,
    STATE(241), 1,
      sym_durable_writes,
  [10008] = 2,
    ACTIONS(1291), 1,
      sym_object_name,
    STATE(124), 1,
      sym_materialized_view_name,
  [10015] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(641), 1,
      sym_table_name,
  [10022] = 2,
    ACTIONS(1285), 1,
      aux_sym_create_keyspace_token1,
    STATE(278), 1,
      sym_user_with,
  [10029] = 2,
    ACTIONS(1309), 1,
      sym_object_name,
    STATE(824), 1,
      sym_clustering_key_list,
  [10036] = 2,
    ACTIONS(1271), 1,
      aux_sym_from_spec_token1,
    STATE(366), 1,
      sym_from_spec,
  [10043] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(601), 1,
      sym_table_name,
  [10050] = 2,
    ACTIONS(1271), 1,
      aux_sym_from_spec_token1,
    STATE(38), 1,
      sym_from_spec,
  [10057] = 1,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10062] = 2,
    ACTIONS(1325), 1,
      sym__string_literal,
    STATE(491), 1,
      sym_replication_list_item,
  [10069] = 1,
    ACTIONS(1327), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10074] = 1,
    ACTIONS(1329), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10079] = 2,
    ACTIONS(1307), 1,
      aux_sym_primary_key_column_token1,
    STATE(134), 1,
      sym_primary_key_element,
  [10086] = 2,
    ACTIONS(1299), 1,
      sym_object_name,
    STATE(365), 1,
      sym_column_not_null,
  [10093] = 2,
    ACTIONS(834), 1,
      aux_sym__decimal_literal_token1,
    STATE(159), 1,
      sym__decimal_literal,
  [10100] = 1,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10105] = 1,
    ACTIONS(1331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10110] = 1,
    ACTIONS(1333), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10115] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(797), 1,
      sym_table_name,
  [10122] = 1,
    ACTIONS(1192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10127] = 1,
    ACTIONS(1335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10132] = 1,
    ACTIONS(1337), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10137] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(113), 1,
      sym_where_spec,
  [10144] = 2,
    ACTIONS(1339), 1,
      sym__string_literal,
    STATE(499), 1,
      sym_option_hash_item,
  [10151] = 1,
    ACTIONS(1112), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10156] = 1,
    ACTIONS(1057), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10161] = 2,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [10168] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(130), 1,
      sym_where_spec,
  [10175] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(794), 1,
      sym_partition_key_list,
  [10182] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [10189] = 2,
    ACTIONS(1289), 1,
      sym_object_name,
    STATE(662), 1,
      sym_column_list,
  [10196] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(651), 1,
      sym_table_name,
  [10203] = 2,
    ACTIONS(1347), 1,
      sym__string_literal,
    STATE(204), 1,
      sym_trigger_class,
  [10210] = 2,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(474), 1,
      sym_typed_name,
  [10217] = 2,
    ACTIONS(1347), 1,
      sym__string_literal,
    STATE(270), 1,
      sym_trigger_class,
  [10224] = 2,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(457), 1,
      sym_typed_name,
  [10231] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(668), 1,
      sym_function_name,
  [10238] = 2,
    ACTIONS(1311), 1,
      aux_sym_where_spec_token1,
    STATE(564), 1,
      sym_materialized_view_where,
  [10245] = 2,
    ACTIONS(1351), 1,
      sym_object_name,
    STATE(670), 1,
      sym_aggregate_name,
  [10252] = 2,
    ACTIONS(1289), 1,
      sym_object_name,
    STATE(778), 1,
      sym_column_list,
  [10259] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(261), 1,
      sym_table_name,
  [10266] = 1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10271] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(257), 1,
      sym_index_name,
  [10278] = 2,
    ACTIONS(1283), 1,
      sym_object_name,
    STATE(255), 1,
      sym_keyspace_name,
  [10285] = 2,
    ACTIONS(1339), 1,
      sym__string_literal,
    STATE(567), 1,
      sym_option_hash_item,
  [10292] = 1,
    ACTIONS(1355), 2,
      sym__string_literal,
      sym__float_literal,
  [10297] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(254), 1,
      sym_function_name,
  [10304] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(230), 1,
      sym_table_name,
  [10311] = 2,
    ACTIONS(1351), 1,
      sym_object_name,
    STATE(252), 1,
      sym_aggregate_name,
  [10318] = 2,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_insert_column_spec,
  [10325] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(698), 1,
      sym_trigger_name,
  [10332] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(251), 1,
      sym_table_name,
  [10339] = 2,
    ACTIONS(1325), 1,
      sym__string_literal,
    STATE(571), 1,
      sym_replication_list_item,
  [10346] = 2,
    ACTIONS(1287), 1,
      sym_object_name,
    STATE(248), 1,
      sym_type_name,
  [10353] = 2,
    ACTIONS(1277), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_replication_list,
  [10360] = 2,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(247), 1,
      sym_user_name,
  [10367] = 2,
    ACTIONS(834), 1,
      aux_sym__decimal_literal_token1,
    STATE(919), 1,
      sym__decimal_literal,
  [10374] = 2,
    ACTIONS(1359), 1,
      anon_sym_EQ,
    ACTIONS(1361), 1,
      anon_sym_LBRACK,
  [10381] = 2,
    ACTIONS(1291), 1,
      sym_object_name,
    STATE(193), 1,
      sym_materialized_view_name,
  [10388] = 1,
    ACTIONS(1083), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10393] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(137), 1,
      sym_where_spec,
  [10400] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_assignment_tuple,
  [10407] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_assignment_tuple,
  [10414] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(128), 1,
      sym_where_spec,
  [10421] = 2,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(522), 1,
      sym_user_name,
  [10428] = 2,
    ACTIONS(1287), 1,
      sym_object_name,
    STATE(900), 1,
      sym_type_name,
  [10435] = 1,
    ACTIONS(1363), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10440] = 2,
    ACTIONS(1323), 1,
      aux_sym_durable_writes_token1,
    STATE(222), 1,
      sym_durable_writes,
  [10447] = 2,
    ACTIONS(1357), 1,
      sym_object_name,
    STATE(898), 1,
      sym_trigger_name,
  [10454] = 2,
    ACTIONS(1365), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1367), 1,
      sym_object_name,
  [10461] = 1,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10466] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10471] = 2,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(95), 1,
      sym_typed_name,
  [10478] = 2,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(98), 1,
      sym_typed_name,
  [10485] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_assignment_tuple,
  [10492] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_assignment_tuple,
  [10499] = 2,
    ACTIONS(1281), 1,
      sym_object_name,
    STATE(100), 1,
      sym_alter_type_rename_item,
  [10506] = 2,
    ACTIONS(1351), 1,
      sym_object_name,
    STATE(890), 1,
      sym_aggregate_name,
  [10513] = 2,
    ACTIONS(929), 1,
      aux_sym_update_assignments_token1,
    STATE(579), 1,
      sym_update_assignments,
  [10520] = 1,
    ACTIONS(1373), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10525] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(589), 1,
      sym_table_name,
  [10532] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(761), 1,
      sym_table_name,
  [10539] = 2,
    ACTIONS(1283), 1,
      sym_object_name,
    STATE(808), 1,
      sym_keyspace_name,
  [10546] = 2,
    ACTIONS(1323), 1,
      aux_sym_durable_writes_token1,
    STATE(242), 1,
      sym_durable_writes,
  [10553] = 1,
    ACTIONS(1375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10558] = 2,
    ACTIONS(1349), 1,
      sym_object_name,
    STATE(834), 1,
      sym_function_name,
  [10565] = 2,
    ACTIONS(1267), 1,
      sym_object_name,
    STATE(122), 1,
      sym_role_name,
  [10572] = 2,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(549), 1,
      sym_column_definition,
  [10579] = 1,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [10583] = 1,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
  [10587] = 1,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
  [10591] = 1,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
  [10595] = 1,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [10599] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [10603] = 1,
    ACTIONS(1389), 1,
      anon_sym_EQ,
  [10607] = 1,
    ACTIONS(1391), 1,
      anon_sym_COLON,
  [10611] = 1,
    ACTIONS(1393), 1,
      anon_sym_EQ,
  [10615] = 1,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
  [10619] = 1,
    ACTIONS(1397), 1,
      anon_sym_EQ,
  [10623] = 1,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
  [10627] = 1,
    ACTIONS(1401), 1,
      aux_sym_constant_token2,
  [10631] = 1,
    ACTIONS(1403), 1,
      aux_sym_return_mode_token2,
  [10635] = 1,
    ACTIONS(1405), 1,
      aux_sym_create_function_token2,
  [10639] = 1,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [10643] = 1,
    ACTIONS(1409), 1,
      aux_sym_create_function_token1,
  [10647] = 1,
    ACTIONS(1411), 1,
      anon_sym_COLON,
  [10651] = 1,
    ACTIONS(1413), 1,
      anon_sym_EQ,
  [10655] = 1,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
  [10659] = 1,
    ACTIONS(1417), 1,
      aux_sym_create_aggregate_token4,
  [10663] = 1,
    ACTIONS(1419), 1,
      anon_sym_LPAREN,
  [10667] = 1,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
  [10671] = 1,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
  [10675] = 1,
    ACTIONS(1425), 1,
      aux_sym_select_statement_token1,
  [10679] = 1,
    ACTIONS(1427), 1,
      anon_sym_EQ,
  [10683] = 1,
    ACTIONS(1429), 1,
      anon_sym_EQ,
  [10687] = 1,
    ACTIONS(1431), 1,
      sym_object_name,
  [10691] = 1,
    ACTIONS(1433), 1,
      anon_sym_LPAREN,
  [10695] = 1,
    ACTIONS(1435), 1,
      aux_sym_select_statement_token5,
  [10699] = 1,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
  [10703] = 1,
    ACTIONS(1439), 1,
      aux_sym_create_aggregate_token3,
  [10707] = 1,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
  [10711] = 1,
    ACTIONS(1443), 1,
      aux_sym_grant_token2,
  [10715] = 1,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
  [10719] = 1,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
  [10723] = 1,
    ACTIONS(1449), 1,
      sym_object_name,
  [10727] = 1,
    ACTIONS(1451), 1,
      aux_sym_create_keyspace_token2,
  [10731] = 1,
    ACTIONS(1453), 1,
      sym_object_name,
  [10735] = 1,
    ACTIONS(1455), 1,
      aux_sym_delete_statement_token3,
  [10739] = 1,
    ACTIONS(1457), 1,
      aux_sym_select_statement_token5,
  [10743] = 1,
    ACTIONS(1459), 1,
      sym_object_name,
  [10747] = 1,
    ACTIONS(1461), 1,
      aux_sym_select_statement_token1,
  [10751] = 1,
    ACTIONS(1463), 1,
      sym_object_name,
  [10755] = 1,
    ACTIONS(1465), 1,
      aux_sym_insert_statement_token3,
  [10759] = 1,
    ACTIONS(1467), 1,
      aux_sym_from_spec_token1,
  [10763] = 1,
    ACTIONS(1469), 1,
      aux_sym_delete_statement_token3,
  [10767] = 1,
    ACTIONS(1471), 1,
      sym__string_literal,
  [10771] = 1,
    ACTIONS(1473), 1,
      sym_object_name,
  [10775] = 1,
    ACTIONS(1475), 1,
      aux_sym_select_statement_token5,
  [10779] = 1,
    ACTIONS(1477), 1,
      aux_sym_insert_statement_token3,
  [10783] = 1,
    ACTIONS(1479), 1,
      sym_object_name,
  [10787] = 1,
    ACTIONS(1481), 1,
      sym_object_name,
  [10791] = 1,
    ACTIONS(1483), 1,
      sym_object_name,
  [10795] = 1,
    ACTIONS(1485), 1,
      anon_sym_LPAREN,
  [10799] = 1,
    ACTIONS(1487), 1,
      aux_sym_insert_statement_token3,
  [10803] = 1,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
  [10807] = 1,
    ACTIONS(1491), 1,
      anon_sym_EQ,
  [10811] = 1,
    ACTIONS(1493), 1,
      aux_sym_create_index_token3,
  [10815] = 1,
    ACTIONS(1495), 1,
      aux_sym__decimal_literal_token1,
  [10819] = 1,
    ACTIONS(1497), 1,
      aux_sym__decimal_literal_token1,
  [10823] = 1,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
  [10827] = 1,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [10831] = 1,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [10835] = 1,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [10839] = 1,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [10843] = 1,
    ACTIONS(1509), 1,
      sym_object_name,
  [10847] = 1,
    ACTIONS(1511), 1,
      sym_object_name,
  [10851] = 1,
    ACTIONS(1513), 1,
      sym_object_name,
  [10855] = 1,
    ACTIONS(1515), 1,
      sym_object_name,
  [10859] = 1,
    ACTIONS(1517), 1,
      aux_sym_compact_storage_token2,
  [10863] = 1,
    ACTIONS(1519), 1,
      anon_sym_EQ,
  [10867] = 1,
    ACTIONS(1521), 1,
      aux_sym_delete_statement_token3,
  [10871] = 1,
    ACTIONS(1523), 1,
      aux_sym_create_function_token1,
  [10875] = 1,
    ACTIONS(1525), 1,
      anon_sym_EQ,
  [10879] = 1,
    ACTIONS(1527), 1,
      sym_object_name,
  [10883] = 1,
    ACTIONS(1529), 1,
      aux_sym_return_mode_token2,
  [10887] = 1,
    ACTIONS(1531), 1,
      aux_sym_create_function_token1,
  [10891] = 1,
    ACTIONS(1533), 1,
      sym_object_name,
  [10895] = 1,
    ACTIONS(1535), 1,
      aux_sym_create_function_token2,
  [10899] = 1,
    ACTIONS(1537), 1,
      aux_sym_order_spec_token1,
  [10903] = 1,
    ACTIONS(1539), 1,
      anon_sym_EQ,
  [10907] = 1,
    ACTIONS(1541), 1,
      anon_sym_EQ,
  [10911] = 1,
    ACTIONS(1543), 1,
      aux_sym_grant_token2,
  [10915] = 1,
    ACTIONS(1545), 1,
      sym_object_name,
  [10919] = 1,
    ACTIONS(1547), 1,
      aux_sym_create_aggregate_token3,
  [10923] = 1,
    ACTIONS(1549), 1,
      aux_sym__decimal_literal_token1,
  [10927] = 1,
    ACTIONS(1551), 1,
      aux_sym__decimal_literal_token1,
  [10931] = 1,
    ACTIONS(1553), 1,
      anon_sym_EQ,
  [10935] = 1,
    ACTIONS(1555), 1,
      aux_sym_delete_statement_token3,
  [10939] = 1,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
  [10943] = 1,
    ACTIONS(1559), 1,
      aux_sym_drop_type_token1,
  [10947] = 1,
    ACTIONS(1561), 1,
      aux_sym_grant_token2,
  [10951] = 1,
    ACTIONS(1563), 1,
      sym_object_name,
  [10955] = 1,
    ACTIONS(1565), 1,
      aux_sym_delete_statement_token3,
  [10959] = 1,
    ACTIONS(1567), 1,
      sym_object_name,
  [10963] = 1,
    ACTIONS(1569), 1,
      sym_object_name,
  [10967] = 1,
    ACTIONS(1571), 1,
      sym_object_name,
  [10971] = 1,
    ACTIONS(1573), 1,
      aux_sym_delete_statement_token3,
  [10975] = 1,
    ACTIONS(1575), 1,
      aux_sym_select_element_token1,
  [10979] = 1,
    ACTIONS(1577), 1,
      aux_sym_insert_statement_token3,
  [10983] = 1,
    ACTIONS(1579), 1,
      sym_object_name,
  [10987] = 1,
    ACTIONS(1581), 1,
      aux_sym_delete_statement_token3,
  [10991] = 1,
    ACTIONS(1583), 1,
      aux_sym_delete_statement_token3,
  [10995] = 1,
    ACTIONS(1585), 1,
      sym_object_name,
  [10999] = 1,
    ACTIONS(1587), 1,
      aux_sym_delete_statement_token3,
  [11003] = 1,
    ACTIONS(1589), 1,
      aux_sym_create_keyspace_token2,
  [11007] = 1,
    ACTIONS(1591), 1,
      aux_sym_delete_statement_token3,
  [11011] = 1,
    ACTIONS(1593), 1,
      aux_sym_from_spec_token1,
  [11015] = 1,
    ACTIONS(1595), 1,
      anon_sym_LPAREN,
  [11019] = 1,
    ACTIONS(1597), 1,
      aux_sym_delete_statement_token3,
  [11023] = 1,
    ACTIONS(1599), 1,
      aux_sym_delete_statement_token3,
  [11027] = 1,
    ACTIONS(1601), 1,
      aux_sym_select_element_token1,
  [11031] = 1,
    ACTIONS(1603), 1,
      sym_object_name,
  [11035] = 1,
    ACTIONS(1605), 1,
      aux_sym_select_statement_token5,
  [11039] = 1,
    ACTIONS(1607), 1,
      anon_sym_RPAREN,
  [11043] = 1,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [11047] = 1,
    ACTIONS(1611), 1,
      sym_object_name,
  [11051] = 1,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
  [11055] = 1,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
  [11059] = 1,
    ACTIONS(1615), 1,
      aux_sym_insert_statement_token3,
  [11063] = 1,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
  [11067] = 1,
    ACTIONS(1619), 1,
      aux_sym__decimal_literal_token1,
  [11071] = 1,
    ACTIONS(1621), 1,
      sym_object_name,
  [11075] = 1,
    ACTIONS(1623), 1,
      sym__boolean_literal,
  [11079] = 1,
    ACTIONS(1625), 1,
      anon_sym_RBRACK,
  [11083] = 1,
    ACTIONS(1627), 1,
      aux_sym_create_function_token1,
  [11087] = 1,
    ACTIONS(1629), 1,
      aux_sym_create_index_token3,
  [11091] = 1,
    ACTIONS(1631), 1,
      aux_sym_create_function_token1,
  [11095] = 1,
    ACTIONS(1633), 1,
      aux_sym_select_element_token1,
  [11099] = 1,
    ACTIONS(1635), 1,
      sym_object_name,
  [11103] = 1,
    ACTIONS(1637), 1,
      aux_sym_create_function_token2,
  [11107] = 1,
    ACTIONS(1639), 1,
      aux_sym_create_function_token1,
  [11111] = 1,
    ACTIONS(1641), 1,
      anon_sym_LPAREN,
  [11115] = 1,
    ACTIONS(1643), 1,
      aux_sym_order_spec_token2,
  [11119] = 1,
    ACTIONS(1645), 1,
      anon_sym_LPAREN,
  [11123] = 1,
    ACTIONS(1647), 1,
      sym_object_name,
  [11127] = 1,
    ACTIONS(1649), 1,
      aux_sym_create_aggregate_token5,
  [11131] = 1,
    ACTIONS(1651), 1,
      aux_sym_from_spec_token1,
  [11135] = 1,
    ACTIONS(1653), 1,
      aux_sym_constant_token2,
  [11139] = 1,
    ACTIONS(1655), 1,
      aux_sym_create_index_token3,
  [11143] = 1,
    ACTIONS(1657), 1,
      aux_sym_select_statement_token5,
  [11147] = 1,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
  [11151] = 1,
    ACTIONS(1661), 1,
      anon_sym_RPAREN,
  [11155] = 1,
    ACTIONS(1663), 1,
      aux_sym_create_aggregate_token4,
  [11159] = 1,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
  [11163] = 1,
    ACTIONS(1667), 1,
      anon_sym_RPAREN,
  [11167] = 1,
    ACTIONS(1669), 1,
      aux_sym_create_keyspace_token2,
  [11171] = 1,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [11175] = 1,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
  [11179] = 1,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
  [11183] = 1,
    ACTIONS(1677), 1,
      sym_object_name,
  [11187] = 1,
    ACTIONS(1679), 1,
      sym_object_name,
  [11191] = 1,
    ACTIONS(1681), 1,
      sym_object_name,
  [11195] = 1,
    ACTIONS(1683), 1,
      anon_sym_RPAREN,
  [11199] = 1,
    ACTIONS(1685), 1,
      sym_object_name,
  [11203] = 1,
    ACTIONS(1687), 1,
      sym_object_name,
  [11207] = 1,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [11211] = 1,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
  [11215] = 1,
    ACTIONS(1693), 1,
      aux_sym_create_keyspace_token1,
  [11219] = 1,
    ACTIONS(1695), 1,
      aux_sym_create_function_token2,
  [11223] = 1,
    ACTIONS(1697), 1,
      aux_sym_delete_statement_token3,
  [11227] = 1,
    ACTIONS(1699), 1,
      aux_sym_create_function_token1,
  [11231] = 1,
    ACTIONS(1701), 1,
      sym__code_block,
  [11235] = 1,
    ACTIONS(1703), 1,
      aux_sym_select_element_token1,
  [11239] = 1,
    ACTIONS(1705), 1,
      sym_object_name,
  [11243] = 1,
    ACTIONS(1707), 1,
      aux_sym_create_aggregate_token4,
  [11247] = 1,
    ACTIONS(1709), 1,
      sym_object_name,
  [11251] = 1,
    ACTIONS(1711), 1,
      aux_sym_create_keyspace_token1,
  [11255] = 1,
    ACTIONS(752), 1,
      aux_sym_column_not_null_token1,
  [11259] = 1,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [11263] = 1,
    ACTIONS(1715), 1,
      aux_sym_relation_contains_key_token2,
  [11267] = 1,
    ACTIONS(1717), 1,
      aux_sym_delete_statement_token3,
  [11271] = 1,
    ACTIONS(1719), 1,
      aux_sym_delete_statement_token3,
  [11275] = 1,
    ACTIONS(1721), 1,
      aux_sym_create_aggregate_token3,
  [11279] = 1,
    ACTIONS(1723), 1,
      aux_sym_create_index_token3,
  [11283] = 1,
    ACTIONS(1725), 1,
      anon_sym_COLON,
  [11287] = 1,
    ACTIONS(1727), 1,
      aux_sym_delete_statement_token3,
  [11291] = 1,
    ACTIONS(1729), 1,
      aux_sym_delete_statement_token3,
  [11295] = 1,
    ACTIONS(1731), 1,
      aux_sym_delete_statement_token3,
  [11299] = 1,
    ACTIONS(1733), 1,
      aux_sym_delete_statement_token3,
  [11303] = 1,
    ACTIONS(1735), 1,
      aux_sym_insert_statement_token2,
  [11307] = 1,
    ACTIONS(1737), 1,
      anon_sym_COMMA,
  [11311] = 1,
    ACTIONS(1739), 1,
      aux_sym_delete_statement_token3,
  [11315] = 1,
    ACTIONS(1741), 1,
      anon_sym_RPAREN,
  [11319] = 1,
    ACTIONS(1743), 1,
      aux_sym_delete_statement_token3,
  [11323] = 1,
    ACTIONS(1745), 1,
      sym_object_name,
  [11327] = 1,
    ACTIONS(1747), 1,
      aux_sym_create_function_token2,
  [11331] = 1,
    ACTIONS(1749), 1,
      aux_sym_compact_storage_token2,
  [11335] = 1,
    ACTIONS(1751), 1,
      aux_sym_relation_contains_key_token2,
  [11339] = 1,
    ACTIONS(1753), 1,
      sym__code_block,
  [11343] = 1,
    ACTIONS(1755), 1,
      aux_sym_select_element_token1,
  [11347] = 1,
    ACTIONS(1757), 1,
      aux_sym_insert_statement_token3,
  [11351] = 1,
    ACTIONS(1759), 1,
      aux_sym_create_aggregate_token6,
  [11355] = 1,
    ACTIONS(1761), 1,
      anon_sym_LPAREN,
  [11359] = 1,
    ACTIONS(1763), 1,
      aux_sym_insert_statement_token3,
  [11363] = 1,
    ACTIONS(1765), 1,
      anon_sym_LPAREN,
  [11367] = 1,
    ACTIONS(1767), 1,
      aux_sym_insert_statement_token3,
  [11371] = 1,
    ACTIONS(1769), 1,
      aux_sym_using_timestamp_spec_token1,
  [11375] = 1,
    ACTIONS(1771), 1,
      aux_sym_insert_statement_token3,
  [11379] = 1,
    ACTIONS(1773), 1,
      aux_sym_create_function_token1,
  [11383] = 1,
    ACTIONS(1775), 1,
      anon_sym_LPAREN,
  [11387] = 1,
    ACTIONS(1777), 1,
      sym_object_name,
  [11391] = 1,
    ACTIONS(1779), 1,
      aux_sym_create_aggregate_token5,
  [11395] = 1,
    ACTIONS(1781), 1,
      aux_sym_insert_statement_token3,
  [11399] = 1,
    ACTIONS(1783), 1,
      aux_sym_delete_statement_token3,
  [11403] = 1,
    ACTIONS(1785), 1,
      aux_sym_insert_statement_token3,
  [11407] = 1,
    ACTIONS(1787), 1,
      aux_sym_select_element_token1,
  [11411] = 1,
    ACTIONS(1789), 1,
      sym_object_name,
  [11415] = 1,
    ACTIONS(1791), 1,
      aux_sym_create_function_token2,
  [11419] = 1,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
  [11423] = 1,
    ACTIONS(1795), 1,
      sym__code_block,
  [11427] = 1,
    ACTIONS(1797), 1,
      aux_sym_create_aggregate_token5,
  [11431] = 1,
    ACTIONS(1799), 1,
      aux_sym_insert_statement_token3,
  [11435] = 1,
    ACTIONS(1801), 1,
      aux_sym_constant_token2,
  [11439] = 1,
    ACTIONS(1803), 1,
      aux_sym_constant_token2,
  [11443] = 1,
    ACTIONS(1805), 1,
      aux_sym_create_keyspace_token1,
  [11447] = 1,
    ACTIONS(1807), 1,
      anon_sym_RPAREN,
  [11451] = 1,
    ACTIONS(1809), 1,
      aux_sym_insert_statement_token3,
  [11455] = 1,
    ACTIONS(1811), 1,
      aux_sym_create_index_token3,
  [11459] = 1,
    ACTIONS(1813), 1,
      aux_sym_create_index_token3,
  [11463] = 1,
    ACTIONS(1815), 1,
      aux_sym_create_function_token1,
  [11467] = 1,
    ACTIONS(1817), 1,
      aux_sym_create_aggregate_token4,
  [11471] = 1,
    ACTIONS(1819), 1,
      sym_object_name,
  [11475] = 1,
    ACTIONS(1821), 1,
      aux_sym_create_function_token1,
  [11479] = 1,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
  [11483] = 1,
    ACTIONS(1825), 1,
      sym__code_block,
  [11487] = 1,
    ACTIONS(1827), 1,
      aux_sym_select_element_token1,
  [11491] = 1,
    ACTIONS(1829), 1,
      sym_object_name,
  [11495] = 1,
    ACTIONS(1831), 1,
      aux_sym_insert_statement_token3,
  [11499] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [11503] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_index_token3,
  [11507] = 1,
    ACTIONS(1837), 1,
      anon_sym_LPAREN,
  [11511] = 1,
    ACTIONS(1839), 1,
      aux_sym_insert_statement_token3,
  [11515] = 1,
    ACTIONS(1841), 1,
      sym_object_name,
  [11519] = 1,
    ACTIONS(1843), 1,
      anon_sym_RPAREN,
  [11523] = 1,
    ACTIONS(1845), 1,
      sym__string_literal,
  [11527] = 1,
    ACTIONS(1847), 1,
      aux_sym_create_function_token2,
  [11531] = 1,
    ACTIONS(1849), 1,
      sym__boolean_literal,
  [11535] = 1,
    ACTIONS(1851), 1,
      anon_sym_LPAREN,
  [11539] = 1,
    ACTIONS(1853), 1,
      aux_sym_create_aggregate_token6,
  [11543] = 1,
    ACTIONS(1855), 1,
      sym__boolean_literal,
  [11547] = 1,
    ACTIONS(1857), 1,
      sym__code_block,
  [11551] = 1,
    ACTIONS(1859), 1,
      aux_sym_select_element_token1,
  [11555] = 1,
    ACTIONS(1861), 1,
      aux_sym_create_aggregate_token6,
  [11559] = 1,
    ACTIONS(1863), 1,
      aux_sym_using_timestamp_spec_token2,
  [11563] = 1,
    ACTIONS(1865), 1,
      anon_sym_COLON,
  [11567] = 1,
    ACTIONS(1867), 1,
      sym_object_name,
  [11571] = 1,
    ACTIONS(1869), 1,
      sym_object_name,
  [11575] = 1,
    ACTIONS(1871), 1,
      anon_sym_STAR,
  [11579] = 1,
    ACTIONS(1873), 1,
      anon_sym_LPAREN,
  [11583] = 1,
    ACTIONS(1875), 1,
      sym_object_name,
  [11587] = 1,
    ACTIONS(1877), 1,
      aux_sym_create_function_token2,
  [11591] = 1,
    ACTIONS(1879), 1,
      aux_sym_create_aggregate_token5,
  [11595] = 1,
    ACTIONS(1881), 1,
      aux_sym_create_aggregate_token3,
  [11599] = 1,
    ACTIONS(1883), 1,
      aux_sym_insert_statement_token2,
  [11603] = 1,
    ACTIONS(1885), 1,
      sym__code_block,
  [11607] = 1,
    ACTIONS(1887), 1,
      aux_sym_select_statement_token5,
  [11611] = 1,
    ACTIONS(1889), 1,
      aux_sym_using_timestamp_spec_token1,
  [11615] = 1,
    ACTIONS(1891), 1,
      aux_sym_drop_materialized_view_token2,
  [11619] = 1,
    ACTIONS(1893), 1,
      anon_sym_LPAREN,
  [11623] = 1,
    ACTIONS(1895), 1,
      aux_sym_delete_statement_token3,
  [11627] = 1,
    ACTIONS(1897), 1,
      sym_object_name,
  [11631] = 1,
    ACTIONS(1899), 1,
      aux_sym_create_index_token3,
  [11635] = 1,
    ACTIONS(1901), 1,
      aux_sym_delete_statement_token3,
  [11639] = 1,
    ACTIONS(1903), 1,
      aux_sym_create_index_token3,
  [11643] = 1,
    ACTIONS(1905), 1,
      aux_sym_drop_materialized_view_token2,
  [11647] = 1,
    ACTIONS(1907), 1,
      aux_sym_select_element_token1,
  [11651] = 1,
    ACTIONS(1909), 1,
      sym_object_name,
  [11655] = 1,
    ACTIONS(1911), 1,
      sym_object_name,
  [11659] = 1,
    ACTIONS(1913), 1,
      aux_sym_create_aggregate_token2,
  [11663] = 1,
    ACTIONS(1915), 1,
      aux_sym_drop_materialized_view_token2,
  [11667] = 1,
    ACTIONS(1917), 1,
      sym_object_name,
  [11671] = 1,
    ACTIONS(1919), 1,
      aux_sym_order_spec_token2,
  [11675] = 1,
    ACTIONS(1921), 1,
      sym_object_name,
  [11679] = 1,
    ACTIONS(1923), 1,
      sym_object_name,
  [11683] = 1,
    ACTIONS(1925), 1,
      aux_sym_begin_batch_token4,
  [11687] = 1,
    ACTIONS(1927), 1,
      aux_sym_resource_token2,
  [11691] = 1,
    ACTIONS(1929), 1,
      sym_object_name,
  [11695] = 1,
    ACTIONS(1931), 1,
      anon_sym_RBRACK,
  [11699] = 1,
    ACTIONS(1933), 1,
      aux_sym_using_timestamp_spec_token2,
  [11703] = 1,
    ACTIONS(1935), 1,
      sym__code_block,
  [11707] = 1,
    ACTIONS(1937), 1,
      aux_sym_select_element_token1,
  [11711] = 1,
    ACTIONS(1939), 1,
      aux_sym_create_aggregate_token6,
  [11715] = 1,
    ACTIONS(1941), 1,
      ts_builtin_sym_end,
  [11719] = 1,
    ACTIONS(1943), 1,
      sym__code_block,
  [11723] = 1,
    ACTIONS(1945), 1,
      aux_sym_begin_batch_token4,
  [11727] = 1,
    ACTIONS(1947), 1,
      sym_object_name,
  [11731] = 1,
    ACTIONS(1949), 1,
      aux_sym_using_ttl_timestamp_token1,
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
  [SMALL_STATE(29)] = 1046,
  [SMALL_STATE(30)] = 1075,
  [SMALL_STATE(31)] = 1107,
  [SMALL_STATE(32)] = 1138,
  [SMALL_STATE(33)] = 1165,
  [SMALL_STATE(34)] = 1196,
  [SMALL_STATE(35)] = 1227,
  [SMALL_STATE(36)] = 1254,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1315,
  [SMALL_STATE(39)] = 1355,
  [SMALL_STATE(40)] = 1395,
  [SMALL_STATE(41)] = 1425,
  [SMALL_STATE(42)] = 1465,
  [SMALL_STATE(43)] = 1491,
  [SMALL_STATE(44)] = 1520,
  [SMALL_STATE(45)] = 1545,
  [SMALL_STATE(46)] = 1570,
  [SMALL_STATE(47)] = 1595,
  [SMALL_STATE(48)] = 1620,
  [SMALL_STATE(49)] = 1645,
  [SMALL_STATE(50)] = 1674,
  [SMALL_STATE(51)] = 1699,
  [SMALL_STATE(52)] = 1724,
  [SMALL_STATE(53)] = 1749,
  [SMALL_STATE(54)] = 1774,
  [SMALL_STATE(55)] = 1799,
  [SMALL_STATE(56)] = 1823,
  [SMALL_STATE(57)] = 1857,
  [SMALL_STATE(58)] = 1881,
  [SMALL_STATE(59)] = 1905,
  [SMALL_STATE(60)] = 1939,
  [SMALL_STATE(61)] = 1963,
  [SMALL_STATE(62)] = 1997,
  [SMALL_STATE(63)] = 2022,
  [SMALL_STATE(64)] = 2047,
  [SMALL_STATE(65)] = 2070,
  [SMALL_STATE(66)] = 2095,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2145,
  [SMALL_STATE(69)] = 2170,
  [SMALL_STATE(70)] = 2192,
  [SMALL_STATE(71)] = 2220,
  [SMALL_STATE(72)] = 2242,
  [SMALL_STATE(73)] = 2264,
  [SMALL_STATE(74)] = 2286,
  [SMALL_STATE(75)] = 2314,
  [SMALL_STATE(76)] = 2342,
  [SMALL_STATE(77)] = 2368,
  [SMALL_STATE(78)] = 2390,
  [SMALL_STATE(79)] = 2412,
  [SMALL_STATE(80)] = 2440,
  [SMALL_STATE(81)] = 2478,
  [SMALL_STATE(82)] = 2506,
  [SMALL_STATE(83)] = 2530,
  [SMALL_STATE(84)] = 2558,
  [SMALL_STATE(85)] = 2584,
  [SMALL_STATE(86)] = 2610,
  [SMALL_STATE(87)] = 2632,
  [SMALL_STATE(88)] = 2656,
  [SMALL_STATE(89)] = 2694,
  [SMALL_STATE(90)] = 2716,
  [SMALL_STATE(91)] = 2741,
  [SMALL_STATE(92)] = 2766,
  [SMALL_STATE(93)] = 2787,
  [SMALL_STATE(94)] = 2812,
  [SMALL_STATE(95)] = 2833,
  [SMALL_STATE(96)] = 2858,
  [SMALL_STATE(97)] = 2883,
  [SMALL_STATE(98)] = 2908,
  [SMALL_STATE(99)] = 2933,
  [SMALL_STATE(100)] = 2954,
  [SMALL_STATE(101)] = 2979,
  [SMALL_STATE(102)] = 3004,
  [SMALL_STATE(103)] = 3029,
  [SMALL_STATE(104)] = 3054,
  [SMALL_STATE(105)] = 3075,
  [SMALL_STATE(106)] = 3096,
  [SMALL_STATE(107)] = 3131,
  [SMALL_STATE(108)] = 3156,
  [SMALL_STATE(109)] = 3177,
  [SMALL_STATE(110)] = 3198,
  [SMALL_STATE(111)] = 3223,
  [SMALL_STATE(112)] = 3248,
  [SMALL_STATE(113)] = 3271,
  [SMALL_STATE(114)] = 3296,
  [SMALL_STATE(115)] = 3317,
  [SMALL_STATE(116)] = 3338,
  [SMALL_STATE(117)] = 3359,
  [SMALL_STATE(118)] = 3384,
  [SMALL_STATE(119)] = 3405,
  [SMALL_STATE(120)] = 3430,
  [SMALL_STATE(121)] = 3455,
  [SMALL_STATE(122)] = 3476,
  [SMALL_STATE(123)] = 3501,
  [SMALL_STATE(124)] = 3522,
  [SMALL_STATE(125)] = 3547,
  [SMALL_STATE(126)] = 3570,
  [SMALL_STATE(127)] = 3595,
  [SMALL_STATE(128)] = 3618,
  [SMALL_STATE(129)] = 3643,
  [SMALL_STATE(130)] = 3668,
  [SMALL_STATE(131)] = 3693,
  [SMALL_STATE(132)] = 3714,
  [SMALL_STATE(133)] = 3739,
  [SMALL_STATE(134)] = 3764,
  [SMALL_STATE(135)] = 3789,
  [SMALL_STATE(136)] = 3812,
  [SMALL_STATE(137)] = 3837,
  [SMALL_STATE(138)] = 3862,
  [SMALL_STATE(139)] = 3883,
  [SMALL_STATE(140)] = 3908,
  [SMALL_STATE(141)] = 3929,
  [SMALL_STATE(142)] = 3954,
  [SMALL_STATE(143)] = 3979,
  [SMALL_STATE(144)] = 4000,
  [SMALL_STATE(145)] = 4025,
  [SMALL_STATE(146)] = 4046,
  [SMALL_STATE(147)] = 4071,
  [SMALL_STATE(148)] = 4091,
  [SMALL_STATE(149)] = 4113,
  [SMALL_STATE(150)] = 4133,
  [SMALL_STATE(151)] = 4155,
  [SMALL_STATE(152)] = 4175,
  [SMALL_STATE(153)] = 4195,
  [SMALL_STATE(154)] = 4215,
  [SMALL_STATE(155)] = 4235,
  [SMALL_STATE(156)] = 4255,
  [SMALL_STATE(157)] = 4277,
  [SMALL_STATE(158)] = 4297,
  [SMALL_STATE(159)] = 4317,
  [SMALL_STATE(160)] = 4337,
  [SMALL_STATE(161)] = 4359,
  [SMALL_STATE(162)] = 4379,
  [SMALL_STATE(163)] = 4399,
  [SMALL_STATE(164)] = 4421,
  [SMALL_STATE(165)] = 4443,
  [SMALL_STATE(166)] = 4465,
  [SMALL_STATE(167)] = 4485,
  [SMALL_STATE(168)] = 4505,
  [SMALL_STATE(169)] = 4525,
  [SMALL_STATE(170)] = 4545,
  [SMALL_STATE(171)] = 4567,
  [SMALL_STATE(172)] = 4587,
  [SMALL_STATE(173)] = 4607,
  [SMALL_STATE(174)] = 4627,
  [SMALL_STATE(175)] = 4647,
  [SMALL_STATE(176)] = 4667,
  [SMALL_STATE(177)] = 4689,
  [SMALL_STATE(178)] = 4709,
  [SMALL_STATE(179)] = 4729,
  [SMALL_STATE(180)] = 4749,
  [SMALL_STATE(181)] = 4771,
  [SMALL_STATE(182)] = 4793,
  [SMALL_STATE(183)] = 4813,
  [SMALL_STATE(184)] = 4832,
  [SMALL_STATE(185)] = 4851,
  [SMALL_STATE(186)] = 4870,
  [SMALL_STATE(187)] = 4889,
  [SMALL_STATE(188)] = 4908,
  [SMALL_STATE(189)] = 4927,
  [SMALL_STATE(190)] = 4946,
  [SMALL_STATE(191)] = 4965,
  [SMALL_STATE(192)] = 4984,
  [SMALL_STATE(193)] = 5003,
  [SMALL_STATE(194)] = 5022,
  [SMALL_STATE(195)] = 5041,
  [SMALL_STATE(196)] = 5060,
  [SMALL_STATE(197)] = 5079,
  [SMALL_STATE(198)] = 5098,
  [SMALL_STATE(199)] = 5117,
  [SMALL_STATE(200)] = 5136,
  [SMALL_STATE(201)] = 5155,
  [SMALL_STATE(202)] = 5174,
  [SMALL_STATE(203)] = 5193,
  [SMALL_STATE(204)] = 5212,
  [SMALL_STATE(205)] = 5231,
  [SMALL_STATE(206)] = 5250,
  [SMALL_STATE(207)] = 5271,
  [SMALL_STATE(208)] = 5290,
  [SMALL_STATE(209)] = 5309,
  [SMALL_STATE(210)] = 5328,
  [SMALL_STATE(211)] = 5347,
  [SMALL_STATE(212)] = 5366,
  [SMALL_STATE(213)] = 5385,
  [SMALL_STATE(214)] = 5404,
  [SMALL_STATE(215)] = 5423,
  [SMALL_STATE(216)] = 5442,
  [SMALL_STATE(217)] = 5461,
  [SMALL_STATE(218)] = 5480,
  [SMALL_STATE(219)] = 5499,
  [SMALL_STATE(220)] = 5518,
  [SMALL_STATE(221)] = 5537,
  [SMALL_STATE(222)] = 5556,
  [SMALL_STATE(223)] = 5575,
  [SMALL_STATE(224)] = 5594,
  [SMALL_STATE(225)] = 5613,
  [SMALL_STATE(226)] = 5632,
  [SMALL_STATE(227)] = 5651,
  [SMALL_STATE(228)] = 5670,
  [SMALL_STATE(229)] = 5689,
  [SMALL_STATE(230)] = 5708,
  [SMALL_STATE(231)] = 5727,
  [SMALL_STATE(232)] = 5746,
  [SMALL_STATE(233)] = 5765,
  [SMALL_STATE(234)] = 5784,
  [SMALL_STATE(235)] = 5803,
  [SMALL_STATE(236)] = 5822,
  [SMALL_STATE(237)] = 5841,
  [SMALL_STATE(238)] = 5860,
  [SMALL_STATE(239)] = 5879,
  [SMALL_STATE(240)] = 5898,
  [SMALL_STATE(241)] = 5917,
  [SMALL_STATE(242)] = 5936,
  [SMALL_STATE(243)] = 5955,
  [SMALL_STATE(244)] = 5974,
  [SMALL_STATE(245)] = 5993,
  [SMALL_STATE(246)] = 6012,
  [SMALL_STATE(247)] = 6047,
  [SMALL_STATE(248)] = 6066,
  [SMALL_STATE(249)] = 6085,
  [SMALL_STATE(250)] = 6104,
  [SMALL_STATE(251)] = 6123,
  [SMALL_STATE(252)] = 6142,
  [SMALL_STATE(253)] = 6161,
  [SMALL_STATE(254)] = 6180,
  [SMALL_STATE(255)] = 6199,
  [SMALL_STATE(256)] = 6218,
  [SMALL_STATE(257)] = 6237,
  [SMALL_STATE(258)] = 6256,
  [SMALL_STATE(259)] = 6275,
  [SMALL_STATE(260)] = 6294,
  [SMALL_STATE(261)] = 6313,
  [SMALL_STATE(262)] = 6332,
  [SMALL_STATE(263)] = 6351,
  [SMALL_STATE(264)] = 6370,
  [SMALL_STATE(265)] = 6389,
  [SMALL_STATE(266)] = 6408,
  [SMALL_STATE(267)] = 6427,
  [SMALL_STATE(268)] = 6446,
  [SMALL_STATE(269)] = 6465,
  [SMALL_STATE(270)] = 6484,
  [SMALL_STATE(271)] = 6503,
  [SMALL_STATE(272)] = 6522,
  [SMALL_STATE(273)] = 6541,
  [SMALL_STATE(274)] = 6560,
  [SMALL_STATE(275)] = 6579,
  [SMALL_STATE(276)] = 6598,
  [SMALL_STATE(277)] = 6617,
  [SMALL_STATE(278)] = 6636,
  [SMALL_STATE(279)] = 6655,
  [SMALL_STATE(280)] = 6674,
  [SMALL_STATE(281)] = 6693,
  [SMALL_STATE(282)] = 6712,
  [SMALL_STATE(283)] = 6731,
  [SMALL_STATE(284)] = 6750,
  [SMALL_STATE(285)] = 6778,
  [SMALL_STATE(286)] = 6796,
  [SMALL_STATE(287)] = 6824,
  [SMALL_STATE(288)] = 6852,
  [SMALL_STATE(289)] = 6880,
  [SMALL_STATE(290)] = 6908,
  [SMALL_STATE(291)] = 6941,
  [SMALL_STATE(292)] = 6972,
  [SMALL_STATE(293)] = 7000,
  [SMALL_STATE(294)] = 7025,
  [SMALL_STATE(295)] = 7048,
  [SMALL_STATE(296)] = 7073,
  [SMALL_STATE(297)] = 7095,
  [SMALL_STATE(298)] = 7115,
  [SMALL_STATE(299)] = 7149,
  [SMALL_STATE(300)] = 7171,
  [SMALL_STATE(301)] = 7190,
  [SMALL_STATE(302)] = 7209,
  [SMALL_STATE(303)] = 7228,
  [SMALL_STATE(304)] = 7247,
  [SMALL_STATE(305)] = 7264,
  [SMALL_STATE(306)] = 7295,
  [SMALL_STATE(307)] = 7318,
  [SMALL_STATE(308)] = 7335,
  [SMALL_STATE(309)] = 7354,
  [SMALL_STATE(310)] = 7373,
  [SMALL_STATE(311)] = 7392,
  [SMALL_STATE(312)] = 7415,
  [SMALL_STATE(313)] = 7434,
  [SMALL_STATE(314)] = 7453,
  [SMALL_STATE(315)] = 7472,
  [SMALL_STATE(316)] = 7492,
  [SMALL_STATE(317)] = 7515,
  [SMALL_STATE(318)] = 7538,
  [SMALL_STATE(319)] = 7561,
  [SMALL_STATE(320)] = 7582,
  [SMALL_STATE(321)] = 7605,
  [SMALL_STATE(322)] = 7626,
  [SMALL_STATE(323)] = 7649,
  [SMALL_STATE(324)] = 7670,
  [SMALL_STATE(325)] = 7691,
  [SMALL_STATE(326)] = 7714,
  [SMALL_STATE(327)] = 7737,
  [SMALL_STATE(328)] = 7758,
  [SMALL_STATE(329)] = 7776,
  [SMALL_STATE(330)] = 7796,
  [SMALL_STATE(331)] = 7818,
  [SMALL_STATE(332)] = 7838,
  [SMALL_STATE(333)] = 7852,
  [SMALL_STATE(334)] = 7874,
  [SMALL_STATE(335)] = 7896,
  [SMALL_STATE(336)] = 7910,
  [SMALL_STATE(337)] = 7928,
  [SMALL_STATE(338)] = 7950,
  [SMALL_STATE(339)] = 7968,
  [SMALL_STATE(340)] = 7985,
  [SMALL_STATE(341)] = 8004,
  [SMALL_STATE(342)] = 8023,
  [SMALL_STATE(343)] = 8034,
  [SMALL_STATE(344)] = 8050,
  [SMALL_STATE(345)] = 8066,
  [SMALL_STATE(346)] = 8074,
  [SMALL_STATE(347)] = 8082,
  [SMALL_STATE(348)] = 8096,
  [SMALL_STATE(349)] = 8108,
  [SMALL_STATE(350)] = 8124,
  [SMALL_STATE(351)] = 8136,
  [SMALL_STATE(352)] = 8152,
  [SMALL_STATE(353)] = 8160,
  [SMALL_STATE(354)] = 8168,
  [SMALL_STATE(355)] = 8184,
  [SMALL_STATE(356)] = 8192,
  [SMALL_STATE(357)] = 8204,
  [SMALL_STATE(358)] = 8212,
  [SMALL_STATE(359)] = 8220,
  [SMALL_STATE(360)] = 8232,
  [SMALL_STATE(361)] = 8248,
  [SMALL_STATE(362)] = 8262,
  [SMALL_STATE(363)] = 8278,
  [SMALL_STATE(364)] = 8289,
  [SMALL_STATE(365)] = 8296,
  [SMALL_STATE(366)] = 8309,
  [SMALL_STATE(367)] = 8322,
  [SMALL_STATE(368)] = 8333,
  [SMALL_STATE(369)] = 8346,
  [SMALL_STATE(370)] = 8359,
  [SMALL_STATE(371)] = 8372,
  [SMALL_STATE(372)] = 8385,
  [SMALL_STATE(373)] = 8398,
  [SMALL_STATE(374)] = 8411,
  [SMALL_STATE(375)] = 8422,
  [SMALL_STATE(376)] = 8435,
  [SMALL_STATE(377)] = 8444,
  [SMALL_STATE(378)] = 8451,
  [SMALL_STATE(379)] = 8464,
  [SMALL_STATE(380)] = 8477,
  [SMALL_STATE(381)] = 8488,
  [SMALL_STATE(382)] = 8501,
  [SMALL_STATE(383)] = 8511,
  [SMALL_STATE(384)] = 8521,
  [SMALL_STATE(385)] = 8531,
  [SMALL_STATE(386)] = 8541,
  [SMALL_STATE(387)] = 8551,
  [SMALL_STATE(388)] = 8561,
  [SMALL_STATE(389)] = 8571,
  [SMALL_STATE(390)] = 8581,
  [SMALL_STATE(391)] = 8591,
  [SMALL_STATE(392)] = 8601,
  [SMALL_STATE(393)] = 8611,
  [SMALL_STATE(394)] = 8621,
  [SMALL_STATE(395)] = 8631,
  [SMALL_STATE(396)] = 8641,
  [SMALL_STATE(397)] = 8651,
  [SMALL_STATE(398)] = 8661,
  [SMALL_STATE(399)] = 8671,
  [SMALL_STATE(400)] = 8681,
  [SMALL_STATE(401)] = 8691,
  [SMALL_STATE(402)] = 8701,
  [SMALL_STATE(403)] = 8711,
  [SMALL_STATE(404)] = 8721,
  [SMALL_STATE(405)] = 8731,
  [SMALL_STATE(406)] = 8741,
  [SMALL_STATE(407)] = 8751,
  [SMALL_STATE(408)] = 8761,
  [SMALL_STATE(409)] = 8771,
  [SMALL_STATE(410)] = 8781,
  [SMALL_STATE(411)] = 8791,
  [SMALL_STATE(412)] = 8801,
  [SMALL_STATE(413)] = 8811,
  [SMALL_STATE(414)] = 8819,
  [SMALL_STATE(415)] = 8829,
  [SMALL_STATE(416)] = 8839,
  [SMALL_STATE(417)] = 8849,
  [SMALL_STATE(418)] = 8859,
  [SMALL_STATE(419)] = 8869,
  [SMALL_STATE(420)] = 8879,
  [SMALL_STATE(421)] = 8889,
  [SMALL_STATE(422)] = 8897,
  [SMALL_STATE(423)] = 8907,
  [SMALL_STATE(424)] = 8917,
  [SMALL_STATE(425)] = 8927,
  [SMALL_STATE(426)] = 8937,
  [SMALL_STATE(427)] = 8947,
  [SMALL_STATE(428)] = 8957,
  [SMALL_STATE(429)] = 8967,
  [SMALL_STATE(430)] = 8977,
  [SMALL_STATE(431)] = 8987,
  [SMALL_STATE(432)] = 8997,
  [SMALL_STATE(433)] = 9007,
  [SMALL_STATE(434)] = 9017,
  [SMALL_STATE(435)] = 9027,
  [SMALL_STATE(436)] = 9037,
  [SMALL_STATE(437)] = 9043,
  [SMALL_STATE(438)] = 9053,
  [SMALL_STATE(439)] = 9063,
  [SMALL_STATE(440)] = 9073,
  [SMALL_STATE(441)] = 9083,
  [SMALL_STATE(442)] = 9093,
  [SMALL_STATE(443)] = 9103,
  [SMALL_STATE(444)] = 9113,
  [SMALL_STATE(445)] = 9123,
  [SMALL_STATE(446)] = 9133,
  [SMALL_STATE(447)] = 9141,
  [SMALL_STATE(448)] = 9151,
  [SMALL_STATE(449)] = 9161,
  [SMALL_STATE(450)] = 9171,
  [SMALL_STATE(451)] = 9181,
  [SMALL_STATE(452)] = 9191,
  [SMALL_STATE(453)] = 9201,
  [SMALL_STATE(454)] = 9209,
  [SMALL_STATE(455)] = 9219,
  [SMALL_STATE(456)] = 9229,
  [SMALL_STATE(457)] = 9237,
  [SMALL_STATE(458)] = 9247,
  [SMALL_STATE(459)] = 9257,
  [SMALL_STATE(460)] = 9267,
  [SMALL_STATE(461)] = 9277,
  [SMALL_STATE(462)] = 9287,
  [SMALL_STATE(463)] = 9293,
  [SMALL_STATE(464)] = 9303,
  [SMALL_STATE(465)] = 9313,
  [SMALL_STATE(466)] = 9319,
  [SMALL_STATE(467)] = 9329,
  [SMALL_STATE(468)] = 9339,
  [SMALL_STATE(469)] = 9349,
  [SMALL_STATE(470)] = 9359,
  [SMALL_STATE(471)] = 9369,
  [SMALL_STATE(472)] = 9379,
  [SMALL_STATE(473)] = 9389,
  [SMALL_STATE(474)] = 9399,
  [SMALL_STATE(475)] = 9409,
  [SMALL_STATE(476)] = 9419,
  [SMALL_STATE(477)] = 9429,
  [SMALL_STATE(478)] = 9439,
  [SMALL_STATE(479)] = 9449,
  [SMALL_STATE(480)] = 9459,
  [SMALL_STATE(481)] = 9469,
  [SMALL_STATE(482)] = 9479,
  [SMALL_STATE(483)] = 9489,
  [SMALL_STATE(484)] = 9499,
  [SMALL_STATE(485)] = 9509,
  [SMALL_STATE(486)] = 9519,
  [SMALL_STATE(487)] = 9529,
  [SMALL_STATE(488)] = 9539,
  [SMALL_STATE(489)] = 9549,
  [SMALL_STATE(490)] = 9559,
  [SMALL_STATE(491)] = 9569,
  [SMALL_STATE(492)] = 9579,
  [SMALL_STATE(493)] = 9589,
  [SMALL_STATE(494)] = 9599,
  [SMALL_STATE(495)] = 9609,
  [SMALL_STATE(496)] = 9619,
  [SMALL_STATE(497)] = 9627,
  [SMALL_STATE(498)] = 9637,
  [SMALL_STATE(499)] = 9647,
  [SMALL_STATE(500)] = 9657,
  [SMALL_STATE(501)] = 9667,
  [SMALL_STATE(502)] = 9675,
  [SMALL_STATE(503)] = 9682,
  [SMALL_STATE(504)] = 9689,
  [SMALL_STATE(505)] = 9696,
  [SMALL_STATE(506)] = 9703,
  [SMALL_STATE(507)] = 9708,
  [SMALL_STATE(508)] = 9713,
  [SMALL_STATE(509)] = 9720,
  [SMALL_STATE(510)] = 9725,
  [SMALL_STATE(511)] = 9730,
  [SMALL_STATE(512)] = 9737,
  [SMALL_STATE(513)] = 9742,
  [SMALL_STATE(514)] = 9749,
  [SMALL_STATE(515)] = 9754,
  [SMALL_STATE(516)] = 9761,
  [SMALL_STATE(517)] = 9768,
  [SMALL_STATE(518)] = 9775,
  [SMALL_STATE(519)] = 9782,
  [SMALL_STATE(520)] = 9789,
  [SMALL_STATE(521)] = 9796,
  [SMALL_STATE(522)] = 9803,
  [SMALL_STATE(523)] = 9810,
  [SMALL_STATE(524)] = 9817,
  [SMALL_STATE(525)] = 9824,
  [SMALL_STATE(526)] = 9831,
  [SMALL_STATE(527)] = 9838,
  [SMALL_STATE(528)] = 9845,
  [SMALL_STATE(529)] = 9852,
  [SMALL_STATE(530)] = 9859,
  [SMALL_STATE(531)] = 9866,
  [SMALL_STATE(532)] = 9873,
  [SMALL_STATE(533)] = 9880,
  [SMALL_STATE(534)] = 9887,
  [SMALL_STATE(535)] = 9894,
  [SMALL_STATE(536)] = 9901,
  [SMALL_STATE(537)] = 9906,
  [SMALL_STATE(538)] = 9913,
  [SMALL_STATE(539)] = 9918,
  [SMALL_STATE(540)] = 9925,
  [SMALL_STATE(541)] = 9930,
  [SMALL_STATE(542)] = 9935,
  [SMALL_STATE(543)] = 9942,
  [SMALL_STATE(544)] = 9949,
  [SMALL_STATE(545)] = 9956,
  [SMALL_STATE(546)] = 9963,
  [SMALL_STATE(547)] = 9968,
  [SMALL_STATE(548)] = 9975,
  [SMALL_STATE(549)] = 9982,
  [SMALL_STATE(550)] = 9987,
  [SMALL_STATE(551)] = 9994,
  [SMALL_STATE(552)] = 10001,
  [SMALL_STATE(553)] = 10008,
  [SMALL_STATE(554)] = 10015,
  [SMALL_STATE(555)] = 10022,
  [SMALL_STATE(556)] = 10029,
  [SMALL_STATE(557)] = 10036,
  [SMALL_STATE(558)] = 10043,
  [SMALL_STATE(559)] = 10050,
  [SMALL_STATE(560)] = 10057,
  [SMALL_STATE(561)] = 10062,
  [SMALL_STATE(562)] = 10069,
  [SMALL_STATE(563)] = 10074,
  [SMALL_STATE(564)] = 10079,
  [SMALL_STATE(565)] = 10086,
  [SMALL_STATE(566)] = 10093,
  [SMALL_STATE(567)] = 10100,
  [SMALL_STATE(568)] = 10105,
  [SMALL_STATE(569)] = 10110,
  [SMALL_STATE(570)] = 10115,
  [SMALL_STATE(571)] = 10122,
  [SMALL_STATE(572)] = 10127,
  [SMALL_STATE(573)] = 10132,
  [SMALL_STATE(574)] = 10137,
  [SMALL_STATE(575)] = 10144,
  [SMALL_STATE(576)] = 10151,
  [SMALL_STATE(577)] = 10156,
  [SMALL_STATE(578)] = 10161,
  [SMALL_STATE(579)] = 10168,
  [SMALL_STATE(580)] = 10175,
  [SMALL_STATE(581)] = 10182,
  [SMALL_STATE(582)] = 10189,
  [SMALL_STATE(583)] = 10196,
  [SMALL_STATE(584)] = 10203,
  [SMALL_STATE(585)] = 10210,
  [SMALL_STATE(586)] = 10217,
  [SMALL_STATE(587)] = 10224,
  [SMALL_STATE(588)] = 10231,
  [SMALL_STATE(589)] = 10238,
  [SMALL_STATE(590)] = 10245,
  [SMALL_STATE(591)] = 10252,
  [SMALL_STATE(592)] = 10259,
  [SMALL_STATE(593)] = 10266,
  [SMALL_STATE(594)] = 10271,
  [SMALL_STATE(595)] = 10278,
  [SMALL_STATE(596)] = 10285,
  [SMALL_STATE(597)] = 10292,
  [SMALL_STATE(598)] = 10297,
  [SMALL_STATE(599)] = 10304,
  [SMALL_STATE(600)] = 10311,
  [SMALL_STATE(601)] = 10318,
  [SMALL_STATE(602)] = 10325,
  [SMALL_STATE(603)] = 10332,
  [SMALL_STATE(604)] = 10339,
  [SMALL_STATE(605)] = 10346,
  [SMALL_STATE(606)] = 10353,
  [SMALL_STATE(607)] = 10360,
  [SMALL_STATE(608)] = 10367,
  [SMALL_STATE(609)] = 10374,
  [SMALL_STATE(610)] = 10381,
  [SMALL_STATE(611)] = 10388,
  [SMALL_STATE(612)] = 10393,
  [SMALL_STATE(613)] = 10400,
  [SMALL_STATE(614)] = 10407,
  [SMALL_STATE(615)] = 10414,
  [SMALL_STATE(616)] = 10421,
  [SMALL_STATE(617)] = 10428,
  [SMALL_STATE(618)] = 10435,
  [SMALL_STATE(619)] = 10440,
  [SMALL_STATE(620)] = 10447,
  [SMALL_STATE(621)] = 10454,
  [SMALL_STATE(622)] = 10461,
  [SMALL_STATE(623)] = 10466,
  [SMALL_STATE(624)] = 10471,
  [SMALL_STATE(625)] = 10478,
  [SMALL_STATE(626)] = 10485,
  [SMALL_STATE(627)] = 10492,
  [SMALL_STATE(628)] = 10499,
  [SMALL_STATE(629)] = 10506,
  [SMALL_STATE(630)] = 10513,
  [SMALL_STATE(631)] = 10520,
  [SMALL_STATE(632)] = 10525,
  [SMALL_STATE(633)] = 10532,
  [SMALL_STATE(634)] = 10539,
  [SMALL_STATE(635)] = 10546,
  [SMALL_STATE(636)] = 10553,
  [SMALL_STATE(637)] = 10558,
  [SMALL_STATE(638)] = 10565,
  [SMALL_STATE(639)] = 10572,
  [SMALL_STATE(640)] = 10579,
  [SMALL_STATE(641)] = 10583,
  [SMALL_STATE(642)] = 10587,
  [SMALL_STATE(643)] = 10591,
  [SMALL_STATE(644)] = 10595,
  [SMALL_STATE(645)] = 10599,
  [SMALL_STATE(646)] = 10603,
  [SMALL_STATE(647)] = 10607,
  [SMALL_STATE(648)] = 10611,
  [SMALL_STATE(649)] = 10615,
  [SMALL_STATE(650)] = 10619,
  [SMALL_STATE(651)] = 10623,
  [SMALL_STATE(652)] = 10627,
  [SMALL_STATE(653)] = 10631,
  [SMALL_STATE(654)] = 10635,
  [SMALL_STATE(655)] = 10639,
  [SMALL_STATE(656)] = 10643,
  [SMALL_STATE(657)] = 10647,
  [SMALL_STATE(658)] = 10651,
  [SMALL_STATE(659)] = 10655,
  [SMALL_STATE(660)] = 10659,
  [SMALL_STATE(661)] = 10663,
  [SMALL_STATE(662)] = 10667,
  [SMALL_STATE(663)] = 10671,
  [SMALL_STATE(664)] = 10675,
  [SMALL_STATE(665)] = 10679,
  [SMALL_STATE(666)] = 10683,
  [SMALL_STATE(667)] = 10687,
  [SMALL_STATE(668)] = 10691,
  [SMALL_STATE(669)] = 10695,
  [SMALL_STATE(670)] = 10699,
  [SMALL_STATE(671)] = 10703,
  [SMALL_STATE(672)] = 10707,
  [SMALL_STATE(673)] = 10711,
  [SMALL_STATE(674)] = 10715,
  [SMALL_STATE(675)] = 10719,
  [SMALL_STATE(676)] = 10723,
  [SMALL_STATE(677)] = 10727,
  [SMALL_STATE(678)] = 10731,
  [SMALL_STATE(679)] = 10735,
  [SMALL_STATE(680)] = 10739,
  [SMALL_STATE(681)] = 10743,
  [SMALL_STATE(682)] = 10747,
  [SMALL_STATE(683)] = 10751,
  [SMALL_STATE(684)] = 10755,
  [SMALL_STATE(685)] = 10759,
  [SMALL_STATE(686)] = 10763,
  [SMALL_STATE(687)] = 10767,
  [SMALL_STATE(688)] = 10771,
  [SMALL_STATE(689)] = 10775,
  [SMALL_STATE(690)] = 10779,
  [SMALL_STATE(691)] = 10783,
  [SMALL_STATE(692)] = 10787,
  [SMALL_STATE(693)] = 10791,
  [SMALL_STATE(694)] = 10795,
  [SMALL_STATE(695)] = 10799,
  [SMALL_STATE(696)] = 10803,
  [SMALL_STATE(697)] = 10807,
  [SMALL_STATE(698)] = 10811,
  [SMALL_STATE(699)] = 10815,
  [SMALL_STATE(700)] = 10819,
  [SMALL_STATE(701)] = 10823,
  [SMALL_STATE(702)] = 10827,
  [SMALL_STATE(703)] = 10831,
  [SMALL_STATE(704)] = 10835,
  [SMALL_STATE(705)] = 10839,
  [SMALL_STATE(706)] = 10843,
  [SMALL_STATE(707)] = 10847,
  [SMALL_STATE(708)] = 10851,
  [SMALL_STATE(709)] = 10855,
  [SMALL_STATE(710)] = 10859,
  [SMALL_STATE(711)] = 10863,
  [SMALL_STATE(712)] = 10867,
  [SMALL_STATE(713)] = 10871,
  [SMALL_STATE(714)] = 10875,
  [SMALL_STATE(715)] = 10879,
  [SMALL_STATE(716)] = 10883,
  [SMALL_STATE(717)] = 10887,
  [SMALL_STATE(718)] = 10891,
  [SMALL_STATE(719)] = 10895,
  [SMALL_STATE(720)] = 10899,
  [SMALL_STATE(721)] = 10903,
  [SMALL_STATE(722)] = 10907,
  [SMALL_STATE(723)] = 10911,
  [SMALL_STATE(724)] = 10915,
  [SMALL_STATE(725)] = 10919,
  [SMALL_STATE(726)] = 10923,
  [SMALL_STATE(727)] = 10927,
  [SMALL_STATE(728)] = 10931,
  [SMALL_STATE(729)] = 10935,
  [SMALL_STATE(730)] = 10939,
  [SMALL_STATE(731)] = 10943,
  [SMALL_STATE(732)] = 10947,
  [SMALL_STATE(733)] = 10951,
  [SMALL_STATE(734)] = 10955,
  [SMALL_STATE(735)] = 10959,
  [SMALL_STATE(736)] = 10963,
  [SMALL_STATE(737)] = 10967,
  [SMALL_STATE(738)] = 10971,
  [SMALL_STATE(739)] = 10975,
  [SMALL_STATE(740)] = 10979,
  [SMALL_STATE(741)] = 10983,
  [SMALL_STATE(742)] = 10987,
  [SMALL_STATE(743)] = 10991,
  [SMALL_STATE(744)] = 10995,
  [SMALL_STATE(745)] = 10999,
  [SMALL_STATE(746)] = 11003,
  [SMALL_STATE(747)] = 11007,
  [SMALL_STATE(748)] = 11011,
  [SMALL_STATE(749)] = 11015,
  [SMALL_STATE(750)] = 11019,
  [SMALL_STATE(751)] = 11023,
  [SMALL_STATE(752)] = 11027,
  [SMALL_STATE(753)] = 11031,
  [SMALL_STATE(754)] = 11035,
  [SMALL_STATE(755)] = 11039,
  [SMALL_STATE(756)] = 11043,
  [SMALL_STATE(757)] = 11047,
  [SMALL_STATE(758)] = 11051,
  [SMALL_STATE(759)] = 11055,
  [SMALL_STATE(760)] = 11059,
  [SMALL_STATE(761)] = 11063,
  [SMALL_STATE(762)] = 11067,
  [SMALL_STATE(763)] = 11071,
  [SMALL_STATE(764)] = 11075,
  [SMALL_STATE(765)] = 11079,
  [SMALL_STATE(766)] = 11083,
  [SMALL_STATE(767)] = 11087,
  [SMALL_STATE(768)] = 11091,
  [SMALL_STATE(769)] = 11095,
  [SMALL_STATE(770)] = 11099,
  [SMALL_STATE(771)] = 11103,
  [SMALL_STATE(772)] = 11107,
  [SMALL_STATE(773)] = 11111,
  [SMALL_STATE(774)] = 11115,
  [SMALL_STATE(775)] = 11119,
  [SMALL_STATE(776)] = 11123,
  [SMALL_STATE(777)] = 11127,
  [SMALL_STATE(778)] = 11131,
  [SMALL_STATE(779)] = 11135,
  [SMALL_STATE(780)] = 11139,
  [SMALL_STATE(781)] = 11143,
  [SMALL_STATE(782)] = 11147,
  [SMALL_STATE(783)] = 11151,
  [SMALL_STATE(784)] = 11155,
  [SMALL_STATE(785)] = 11159,
  [SMALL_STATE(786)] = 11163,
  [SMALL_STATE(787)] = 11167,
  [SMALL_STATE(788)] = 11171,
  [SMALL_STATE(789)] = 11175,
  [SMALL_STATE(790)] = 11179,
  [SMALL_STATE(791)] = 11183,
  [SMALL_STATE(792)] = 11187,
  [SMALL_STATE(793)] = 11191,
  [SMALL_STATE(794)] = 11195,
  [SMALL_STATE(795)] = 11199,
  [SMALL_STATE(796)] = 11203,
  [SMALL_STATE(797)] = 11207,
  [SMALL_STATE(798)] = 11211,
  [SMALL_STATE(799)] = 11215,
  [SMALL_STATE(800)] = 11219,
  [SMALL_STATE(801)] = 11223,
  [SMALL_STATE(802)] = 11227,
  [SMALL_STATE(803)] = 11231,
  [SMALL_STATE(804)] = 11235,
  [SMALL_STATE(805)] = 11239,
  [SMALL_STATE(806)] = 11243,
  [SMALL_STATE(807)] = 11247,
  [SMALL_STATE(808)] = 11251,
  [SMALL_STATE(809)] = 11255,
  [SMALL_STATE(810)] = 11259,
  [SMALL_STATE(811)] = 11263,
  [SMALL_STATE(812)] = 11267,
  [SMALL_STATE(813)] = 11271,
  [SMALL_STATE(814)] = 11275,
  [SMALL_STATE(815)] = 11279,
  [SMALL_STATE(816)] = 11283,
  [SMALL_STATE(817)] = 11287,
  [SMALL_STATE(818)] = 11291,
  [SMALL_STATE(819)] = 11295,
  [SMALL_STATE(820)] = 11299,
  [SMALL_STATE(821)] = 11303,
  [SMALL_STATE(822)] = 11307,
  [SMALL_STATE(823)] = 11311,
  [SMALL_STATE(824)] = 11315,
  [SMALL_STATE(825)] = 11319,
  [SMALL_STATE(826)] = 11323,
  [SMALL_STATE(827)] = 11327,
  [SMALL_STATE(828)] = 11331,
  [SMALL_STATE(829)] = 11335,
  [SMALL_STATE(830)] = 11339,
  [SMALL_STATE(831)] = 11343,
  [SMALL_STATE(832)] = 11347,
  [SMALL_STATE(833)] = 11351,
  [SMALL_STATE(834)] = 11355,
  [SMALL_STATE(835)] = 11359,
  [SMALL_STATE(836)] = 11363,
  [SMALL_STATE(837)] = 11367,
  [SMALL_STATE(838)] = 11371,
  [SMALL_STATE(839)] = 11375,
  [SMALL_STATE(840)] = 11379,
  [SMALL_STATE(841)] = 11383,
  [SMALL_STATE(842)] = 11387,
  [SMALL_STATE(843)] = 11391,
  [SMALL_STATE(844)] = 11395,
  [SMALL_STATE(845)] = 11399,
  [SMALL_STATE(846)] = 11403,
  [SMALL_STATE(847)] = 11407,
  [SMALL_STATE(848)] = 11411,
  [SMALL_STATE(849)] = 11415,
  [SMALL_STATE(850)] = 11419,
  [SMALL_STATE(851)] = 11423,
  [SMALL_STATE(852)] = 11427,
  [SMALL_STATE(853)] = 11431,
  [SMALL_STATE(854)] = 11435,
  [SMALL_STATE(855)] = 11439,
  [SMALL_STATE(856)] = 11443,
  [SMALL_STATE(857)] = 11447,
  [SMALL_STATE(858)] = 11451,
  [SMALL_STATE(859)] = 11455,
  [SMALL_STATE(860)] = 11459,
  [SMALL_STATE(861)] = 11463,
  [SMALL_STATE(862)] = 11467,
  [SMALL_STATE(863)] = 11471,
  [SMALL_STATE(864)] = 11475,
  [SMALL_STATE(865)] = 11479,
  [SMALL_STATE(866)] = 11483,
  [SMALL_STATE(867)] = 11487,
  [SMALL_STATE(868)] = 11491,
  [SMALL_STATE(869)] = 11495,
  [SMALL_STATE(870)] = 11499,
  [SMALL_STATE(871)] = 11503,
  [SMALL_STATE(872)] = 11507,
  [SMALL_STATE(873)] = 11511,
  [SMALL_STATE(874)] = 11515,
  [SMALL_STATE(875)] = 11519,
  [SMALL_STATE(876)] = 11523,
  [SMALL_STATE(877)] = 11527,
  [SMALL_STATE(878)] = 11531,
  [SMALL_STATE(879)] = 11535,
  [SMALL_STATE(880)] = 11539,
  [SMALL_STATE(881)] = 11543,
  [SMALL_STATE(882)] = 11547,
  [SMALL_STATE(883)] = 11551,
  [SMALL_STATE(884)] = 11555,
  [SMALL_STATE(885)] = 11559,
  [SMALL_STATE(886)] = 11563,
  [SMALL_STATE(887)] = 11567,
  [SMALL_STATE(888)] = 11571,
  [SMALL_STATE(889)] = 11575,
  [SMALL_STATE(890)] = 11579,
  [SMALL_STATE(891)] = 11583,
  [SMALL_STATE(892)] = 11587,
  [SMALL_STATE(893)] = 11591,
  [SMALL_STATE(894)] = 11595,
  [SMALL_STATE(895)] = 11599,
  [SMALL_STATE(896)] = 11603,
  [SMALL_STATE(897)] = 11607,
  [SMALL_STATE(898)] = 11611,
  [SMALL_STATE(899)] = 11615,
  [SMALL_STATE(900)] = 11619,
  [SMALL_STATE(901)] = 11623,
  [SMALL_STATE(902)] = 11627,
  [SMALL_STATE(903)] = 11631,
  [SMALL_STATE(904)] = 11635,
  [SMALL_STATE(905)] = 11639,
  [SMALL_STATE(906)] = 11643,
  [SMALL_STATE(907)] = 11647,
  [SMALL_STATE(908)] = 11651,
  [SMALL_STATE(909)] = 11655,
  [SMALL_STATE(910)] = 11659,
  [SMALL_STATE(911)] = 11663,
  [SMALL_STATE(912)] = 11667,
  [SMALL_STATE(913)] = 11671,
  [SMALL_STATE(914)] = 11675,
  [SMALL_STATE(915)] = 11679,
  [SMALL_STATE(916)] = 11683,
  [SMALL_STATE(917)] = 11687,
  [SMALL_STATE(918)] = 11691,
  [SMALL_STATE(919)] = 11695,
  [SMALL_STATE(920)] = 11699,
  [SMALL_STATE(921)] = 11703,
  [SMALL_STATE(922)] = 11707,
  [SMALL_STATE(923)] = 11711,
  [SMALL_STATE(924)] = 11715,
  [SMALL_STATE(925)] = 11719,
  [SMALL_STATE(926)] = 11723,
  [SMALL_STATE(927)] = 11727,
  [SMALL_STATE(928)] = 11731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(821),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(487),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(504),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(927),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(926),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(614),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 33),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 33),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(339),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 33),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 27),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 45),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(914),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 39),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(537),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 38),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 24),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(336),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(520),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(354),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 20),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 26),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 30),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 31),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 43),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 51),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 21),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 18),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 22),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 42),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 51),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 41),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 35),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 34),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 52),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 66),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 32),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 32),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 65),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 32),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 64),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 62),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 61),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 60),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 55),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 54),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 59),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 56),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 25),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 40),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 33),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 58),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 57),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(886),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(309),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 20),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(757),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(26),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(293),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(106),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(533),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(639),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(294),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(301),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 33),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(604),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(518),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(596),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(535),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(430),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2), SHIFT_REPEAT(441),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 63),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 50),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 50),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 49),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 44),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 19),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 46),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 47),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 48),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 37),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 53),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1941] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
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
