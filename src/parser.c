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
#define STATE_COUNT 1232
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 305
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
  aux_sym_create_function_repeat1 = 296,
  aux_sym_data_type_definition_repeat1 = 297,
  aux_sym_role_with_repeat1 = 298,
  aux_sym_option_hash_repeat1 = 299,
  aux_sym_column_definition_list_repeat1 = 300,
  aux_sym_clustering_key_list_repeat1 = 301,
  aux_sym_table_options_repeat1 = 302,
  aux_sym_replication_list_repeat1 = 303,
  aux_sym_alter_type_rename_list_repeat1 = 304,
  anon_alias_sym_aggregate = 305,
  anon_alias_sym_alias = 306,
  anon_alias_sym_assignment_operand = 307,
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
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
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
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
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
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
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
          lookahead == 'n') ADVANCE(920);
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
          lookahead == 'j') ADVANCE(889);
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
          lookahead == 'j') ADVANCE(889);
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
          lookahead == 'f') ADVANCE(922);
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
          lookahead == 'f') ADVANCE(921);
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
          lookahead == 'u') ADVANCE(918);
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
          lookahead == 'a') ADVANCE(778);
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
          lookahead == 'c') ADVANCE(813);
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
          lookahead == 'c') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(912);
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
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
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
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
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
          lookahead == 'l') ADVANCE(890);
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
          lookahead == 'l') ADVANCE(821);
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
          lookahead == 'n') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
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
          lookahead == 'n') ADVANCE(779);
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
          lookahead == 'r') ADVANCE(919);
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
          lookahead == 'r') ADVANCE(812);
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
          lookahead == 's') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
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
          lookahead == 't') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(818);
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
          lookahead == 'u') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(859);
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
          lookahead == 'x') ADVANCE(819);
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
          lookahead == 'y') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(820);
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
  [36] = {.lex_state = 553},
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
  [61] = {.lex_state = 553},
  [62] = {.lex_state = 553},
  [63] = {.lex_state = 553},
  [64] = {.lex_state = 553},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
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
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 553},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 553},
  [85] = {.lex_state = 553},
  [86] = {.lex_state = 553},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 553},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 552},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 552},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 552},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 553},
  [103] = {.lex_state = 553},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 553},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 553},
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
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 552},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 553},
  [180] = {.lex_state = 553},
  [181] = {.lex_state = 553},
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
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 553},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 553},
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
  [287] = {.lex_state = 1},
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
  [364] = {.lex_state = 552},
  [365] = {.lex_state = 552},
  [366] = {.lex_state = 552},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 552},
  [369] = {.lex_state = 552},
  [370] = {.lex_state = 552},
  [371] = {.lex_state = 552},
  [372] = {.lex_state = 552},
  [373] = {.lex_state = 552},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 552},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 552},
  [381] = {.lex_state = 42},
  [382] = {.lex_state = 53},
  [383] = {.lex_state = 552},
  [384] = {.lex_state = 552},
  [385] = {.lex_state = 553},
  [386] = {.lex_state = 552},
  [387] = {.lex_state = 42},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 552},
  [390] = {.lex_state = 552},
  [391] = {.lex_state = 552},
  [392] = {.lex_state = 552},
  [393] = {.lex_state = 552},
  [394] = {.lex_state = 552},
  [395] = {.lex_state = 42},
  [396] = {.lex_state = 552},
  [397] = {.lex_state = 552},
  [398] = {.lex_state = 53},
  [399] = {.lex_state = 552},
  [400] = {.lex_state = 553},
  [401] = {.lex_state = 18},
  [402] = {.lex_state = 18},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 18},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 553},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 553},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 553},
  [415] = {.lex_state = 11},
  [416] = {.lex_state = 14},
  [417] = {.lex_state = 14},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 53},
  [423] = {.lex_state = 12},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 24},
  [427] = {.lex_state = 553},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 17},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 17},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 17},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 26},
  [461] = {.lex_state = 17},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 17},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 17},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 17},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 17},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 17},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 17},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 17},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 17},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 17},
  [492] = {.lex_state = 17},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 10},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 10},
  [511] = {.lex_state = 22},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 10},
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
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 553},
  [533] = {.lex_state = 10},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 10},
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
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 20},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 25},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 552},
  [578] = {.lex_state = 20},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 553},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 553},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 20},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 20},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 553},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 10},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 10},
  [680] = {.lex_state = 553},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 10},
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 10},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 10},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 10},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 20},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 20},
  [705] = {.lex_state = 20},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 20},
  [709] = {.lex_state = 20},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 10},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 20},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 20},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 27},
  [730] = {.lex_state = 27},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 10},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 16},
  [762] = {.lex_state = 27},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 553},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 552},
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
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 553},
  [822] = {.lex_state = 553},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 552},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 10},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 10},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 10},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 10},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 552},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 552},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 42},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 10},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 10},
  [881] = {.lex_state = 0},
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
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
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
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 10},
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
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 552},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 10},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 10},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 10},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 10},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 552},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 10},
  [1016] = {.lex_state = 10},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 10},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 10},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 10},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 553},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 553},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 10},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 10},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 10},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 10},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 10},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 10},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 10},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 10},
  [1087] = {.lex_state = 10},
  [1088] = {.lex_state = 552},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 552},
  [1093] = {.lex_state = 10},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 10},
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
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 552},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 10},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 552},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 553},
  [1126] = {.lex_state = 10},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 10},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 10},
  [1148] = {.lex_state = 10},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 10},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 10},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 552},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 10},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 10},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 10},
  [1177] = {.lex_state = 552},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 552},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 552},
  [1204] = {.lex_state = 10},
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 10},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 552},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 10},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 10},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 552},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 10},
  [1231] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1227),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(360),
    [sym_delete_statement] = STATE(360),
    [sym_begin_batch] = STATE(514),
    [sym_insert_statement] = STATE(360),
    [sym_truncate] = STATE(360),
    [sym_create_index] = STATE(360),
    [sym_drop_index] = STATE(360),
    [sym_update] = STATE(360),
    [sym_use] = STATE(360),
    [sym_grant] = STATE(360),
    [sym_revoke] = STATE(360),
    [sym_list_roles] = STATE(360),
    [sym_list_permissions] = STATE(360),
    [sym_drop_aggregate] = STATE(360),
    [sym_drop_materialized_view] = STATE(360),
    [sym_drop_function] = STATE(360),
    [sym_drop_keyspace] = STATE(360),
    [sym_drop_role] = STATE(360),
    [sym_drop_table] = STATE(360),
    [sym_drop_trigger] = STATE(360),
    [sym_drop_type] = STATE(360),
    [sym_drop_user] = STATE(360),
    [sym_create_aggregate] = STATE(360),
    [sym_create_materialized_view] = STATE(360),
    [sym_create_function] = STATE(360),
    [sym_create_keyspace] = STATE(360),
    [sym_create_role] = STATE(360),
    [sym_create_table] = STATE(360),
    [sym_create_trigger] = STATE(360),
    [sym_create_type] = STATE(360),
    [sym_create_user] = STATE(360),
    [sym_alter_materialized_view] = STATE(360),
    [sym_alter_keyspace] = STATE(360),
    [sym_alter_role] = STATE(360),
    [sym_alter_table] = STATE(360),
    [sym_alter_type] = STATE(360),
    [sym_alter_user] = STATE(360),
    [sym_apply_batch] = STATE(360),
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
    STATE(514), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(360), 37,
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
    STATE(514), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(360), 37,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(839), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1023), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(898), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1196), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(909), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(904), 1,
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
    STATE(66), 1,
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
  [530] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(912), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1004), 1,
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
    STATE(66), 1,
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
    STATE(66), 1,
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
  [670] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(792), 1,
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
    STATE(66), 1,
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
  [740] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(979), 1,
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
    STATE(66), 1,
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
  [810] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1166), 1,
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
    STATE(66), 1,
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
  [880] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1066), 1,
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
    STATE(66), 1,
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
  [950] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(927), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(800), 1,
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
    STATE(66), 1,
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
  [1055] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(254), 1,
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
    STATE(66), 1,
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
  [1125] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1029), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1032), 1,
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
    STATE(66), 1,
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
  [1230] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(167), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1202), 1,
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
  [1300] = 2,
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
  [1333] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1104), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1049), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(829), 1,
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
    STATE(66), 1,
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
  [1473] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(468), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1135), 1,
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
    STATE(66), 1,
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
  [1578] = 3,
    STATE(66), 1,
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
  [1613] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1037), 1,
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
    STATE(66), 1,
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
  [1683] = 3,
    STATE(66), 1,
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
  [1718] = 3,
    STATE(66), 1,
      sym_data_type_name,
    STATE(1042), 1,
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
    STATE(66), 1,
      sym_data_type_name,
    STATE(1120), 1,
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
    STATE(66), 1,
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
    STATE(643), 1,
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
    STATE(569), 1,
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
  [1976] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(57), 1,
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
  [2007] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(54), 1,
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
  [2038] = 3,
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
  [2069] = 1,
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
  [2127] = 8,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(79), 1,
      sym_where_spec,
    STATE(106), 1,
      sym_order_spec,
    STATE(201), 1,
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
  [2167] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(82), 1,
      sym_where_spec,
    STATE(102), 1,
      sym_order_spec,
    STATE(179), 1,
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
  [2207] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(84), 1,
      sym_where_spec,
    STATE(108), 1,
      sym_order_spec,
    STATE(181), 1,
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
  [2247] = 3,
    ACTIONS(130), 1,
      aux_sym_relation_elements_token1,
    STATE(64), 1,
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
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2277] = 1,
    ACTIONS(133), 23,
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
  [2303] = 3,
    ACTIONS(137), 1,
      anon_sym_LT,
    STATE(81), 1,
      sym_data_type_definition,
    ACTIONS(135), 21,
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
  [2333] = 1,
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
  [2358] = 1,
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
  [2383] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(75), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(143), 20,
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
  [2487] = 1,
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
  [2512] = 1,
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
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2537] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(64), 1,
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
  [2566] = 1,
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
  [2591] = 1,
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
  [2616] = 1,
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
  [2641] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(163), 1,
      aux_sym_select_statement_token4,
    STATE(103), 1,
      sym_order_spec,
    STATE(207), 1,
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
  [2675] = 1,
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
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
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
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(106), 1,
      sym_order_spec,
    STATE(201), 1,
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
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(102), 1,
      sym_order_spec,
    STATE(179), 1,
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
  [2815] = 1,
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
  [2839] = 1,
    ACTIONS(173), 20,
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
  [2862] = 2,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(175), 19,
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
  [2887] = 2,
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
  [2962] = 2,
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
  [2987] = 1,
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
  [3009] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(197), 17,
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
  [3035] = 9,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(633), 1,
      sym_expression,
    STATE(859), 1,
      sym_expression_list,
    STATE(742), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3073] = 1,
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
  [3095] = 4,
    ACTIONS(216), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(327), 1,
      sym_using_ttl_timestamp,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3123] = 1,
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
  [3145] = 9,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(633), 1,
      sym_expression,
    STATE(922), 1,
      sym_expression_list,
    STATE(742), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3183] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(224), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
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
  [3211] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(228), 1,
      aux_sym_delete_statement_token2,
    STATE(290), 1,
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
  [3239] = 1,
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
  [3261] = 4,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    STATE(201), 1,
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
  [3289] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(234), 1,
      aux_sym_select_statement_token4,
    STATE(180), 1,
      sym_limit_spec,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [3339] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(105), 1,
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
  [3365] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(163), 1,
      aux_sym_select_statement_token4,
    STATE(207), 1,
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
  [3393] = 3,
    STATE(274), 1,
      sym_user_super_user,
    ACTIONS(245), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
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
  [3419] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(179), 1,
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
  [3447] = 1,
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
  [3469] = 2,
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
  [3493] = 1,
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
  [3515] = 3,
    ACTIONS(255), 1,
      aux_sym_delete_statement_token2,
    STATE(345), 1,
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
  [3540] = 3,
    ACTIONS(259), 1,
      aux_sym_delete_statement_token2,
    STATE(312), 1,
      sym_if_spec,
    ACTIONS(257), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3565] = 3,
    ACTIONS(263), 1,
      aux_sym_delete_statement_token2,
    STATE(335), 1,
      sym_if_spec,
    ACTIONS(261), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3590] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_create_function_repeat1,
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
  [3615] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(133), 1,
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
  [3640] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3665] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(228), 1,
      sym_role_with,
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
  [3690] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(256), 1,
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
  [3715] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_create_function_repeat1,
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
  [3740] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(173), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [3765] = 2,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(291), 17,
      ts_builtin_sym_end,
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
  [3788] = 2,
    ACTIONS(297), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(295), 17,
      ts_builtin_sym_end,
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
  [3811] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(121), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [3836] = 1,
    ACTIONS(301), 18,
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
  [3857] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
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
  [3882] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(309), 1,
      sym_with_element,
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
  [3907] = 3,
    ACTIONS(311), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
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
  [3932] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(265), 1,
      sym_using_ttl_timestamp,
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
  [3957] = 3,
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
  [3982] = 3,
    ACTIONS(323), 1,
      aux_sym_delete_statement_token2,
    STATE(291), 1,
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
  [4007] = 1,
    ACTIONS(325), 18,
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
  [4028] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(147), 1,
      aux_sym_table_options_repeat1,
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
  [4053] = 1,
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
  [4074] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [4099] = 3,
    ACTIONS(335), 1,
      aux_sym_relation_elements_token1,
    STATE(136), 1,
      aux_sym_role_with_repeat1,
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
  [4124] = 3,
    ACTIONS(340), 1,
      aux_sym_delete_statement_token2,
    STATE(303), 1,
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
  [4149] = 1,
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
  [4170] = 3,
    ACTIONS(346), 1,
      aux_sym_list_roles_token2,
    ACTIONS(348), 1,
      aux_sym_list_roles_token3,
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
  [4195] = 3,
    ACTIONS(352), 1,
      aux_sym_delete_statement_token2,
    STATE(294), 1,
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
  [4220] = 1,
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
  [4241] = 1,
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
  [4262] = 1,
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
  [4283] = 3,
    ACTIONS(360), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
      sym_if_spec,
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
  [4308] = 3,
    ACTIONS(364), 1,
      aux_sym_delete_statement_token2,
    STATE(253), 1,
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
  [4333] = 3,
    ACTIONS(368), 1,
      aux_sym_delete_statement_token2,
    STATE(241), 1,
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
  [4358] = 3,
    ACTIONS(372), 1,
      aux_sym_relation_elements_token1,
    STATE(147), 1,
      aux_sym_table_options_repeat1,
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
  [4383] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
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
  [4408] = 3,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      aux_sym_create_keyspace_token1,
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
  [4433] = 1,
    ACTIONS(383), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4454] = 1,
    ACTIONS(385), 18,
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
  [4475] = 3,
    ACTIONS(389), 1,
      aux_sym_delete_statement_token2,
    STATE(278), 1,
      sym_if_spec,
    ACTIONS(387), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(393), 1,
      aux_sym_delete_statement_token2,
    STATE(289), 1,
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
  [4525] = 3,
    ACTIONS(397), 1,
      aux_sym_relation_elements_token1,
    STATE(172), 1,
      aux_sym_role_with_repeat1,
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
  [4550] = 3,
    ACTIONS(401), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
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
  [4575] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(275), 1,
      sym_role_with,
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
  [4600] = 3,
    ACTIONS(408), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4625] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(301), 1,
      sym_with_element,
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
  [4650] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(271), 1,
      sym_with_element,
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
  [4675] = 1,
    ACTIONS(414), 18,
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
  [4696] = 3,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token2,
    STATE(334), 1,
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
  [4721] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(246), 1,
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
  [4746] = 3,
    ACTIONS(408), 1,
      aux_sym_relation_elements_token1,
    STATE(157), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4771] = 1,
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
  [4792] = 1,
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
  [4813] = 1,
    ACTIONS(426), 18,
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
  [4834] = 1,
    ACTIONS(428), 18,
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
  [4855] = 3,
    ACTIONS(279), 1,
      aux_sym_create_keyspace_token1,
    STATE(347), 1,
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
  [4880] = 8,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(717), 1,
      sym_expression,
    STATE(742), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4915] = 1,
    ACTIONS(197), 18,
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
  [4936] = 1,
    ACTIONS(432), 18,
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
  [4957] = 3,
    ACTIONS(397), 1,
      aux_sym_relation_elements_token1,
    STATE(136), 1,
      aux_sym_role_with_repeat1,
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
  [4982] = 3,
    ACTIONS(438), 1,
      aux_sym_relation_elements_token1,
    STATE(173), 1,
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
  [5007] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(322), 1,
      sym_using_ttl_timestamp,
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
  [5032] = 3,
    ACTIONS(445), 1,
      aux_sym_delete_statement_token2,
    STATE(357), 1,
      sym_if_spec,
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
  [5057] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(298), 1,
      sym_with_element,
    ACTIONS(447), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5082] = 3,
    ACTIONS(451), 1,
      aux_sym_delete_statement_token2,
    STATE(349), 1,
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
  [5107] = 2,
    ACTIONS(455), 1,
      aux_sym_relation_elements_token1,
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
  [5129] = 2,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
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
  [5151] = 2,
    ACTIONS(459), 1,
      aux_sym_select_statement_token4,
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
  [5173] = 2,
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
  [5195] = 1,
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
  [5215] = 1,
    ACTIONS(463), 17,
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
  [5235] = 1,
    ACTIONS(465), 17,
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
  [5255] = 2,
    ACTIONS(469), 1,
      aux_sym_relation_elements_token1,
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
  [5277] = 1,
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
  [5297] = 2,
    ACTIONS(475), 1,
      aux_sym_list_roles_token2,
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
  [5319] = 1,
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
  [5339] = 1,
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
  [5359] = 2,
    ACTIONS(483), 1,
      aux_sym_list_roles_token3,
    ACTIONS(481), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(370), 17,
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
  [5401] = 1,
    ACTIONS(485), 17,
      ts_builtin_sym_end,
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
  [5421] = 1,
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
  [5441] = 1,
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
  [5461] = 1,
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
  [5481] = 1,
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
  [5501] = 1,
    ACTIONS(493), 17,
      ts_builtin_sym_end,
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
  [5521] = 2,
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
  [5543] = 1,
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
  [5563] = 1,
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
  [5583] = 2,
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
  [5605] = 2,
    ACTIONS(503), 1,
      anon_sym_DOT,
    ACTIONS(501), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5627] = 1,
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
  [5647] = 1,
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
  [5667] = 2,
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
  [5689] = 2,
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
  [5711] = 2,
    ACTIONS(234), 1,
      aux_sym_select_statement_token4,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5733] = 2,
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
  [5755] = 2,
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
  [5777] = 1,
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
  [5797] = 2,
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
  [5819] = 1,
    ACTIONS(529), 17,
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
  [5839] = 2,
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
  [5861] = 1,
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
  [5881] = 2,
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
  [5903] = 2,
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
  [5925] = 2,
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
  [5947] = 2,
    ACTIONS(551), 1,
      aux_sym_create_keyspace_token1,
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
  [5969] = 1,
    ACTIONS(553), 17,
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
  [5989] = 2,
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
  [6011] = 2,
    ACTIONS(561), 1,
      aux_sym_relation_elements_token1,
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
  [6033] = 1,
    ACTIONS(563), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6073] = 1,
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
  [6092] = 1,
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
  [6111] = 1,
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
  [6130] = 1,
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
  [6149] = 1,
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
  [6168] = 1,
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
  [6187] = 1,
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
  [6206] = 1,
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
  [6225] = 1,
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
  [6244] = 1,
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
  [6263] = 1,
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
  [6282] = 1,
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
  [6301] = 1,
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
  [6320] = 1,
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
  [6339] = 1,
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
  [6358] = 1,
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
  [6377] = 1,
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
  [6396] = 1,
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
  [6415] = 1,
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
  [6434] = 1,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6453] = 1,
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
  [6472] = 1,
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
  [6491] = 1,
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
  [6510] = 1,
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
  [6529] = 1,
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
  [6548] = 1,
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
  [6567] = 1,
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
  [6586] = 1,
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
  [6605] = 1,
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
  [6624] = 1,
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
  [6643] = 1,
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
  [6662] = 1,
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
  [6681] = 1,
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
  [6700] = 1,
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
  [6719] = 1,
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
  [6738] = 1,
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
  [6757] = 1,
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
  [6776] = 1,
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
  [6795] = 1,
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
  [6814] = 1,
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
  [6833] = 1,
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
  [6852] = 1,
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
  [6871] = 1,
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
  [6890] = 1,
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
  [6909] = 1,
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
  [6928] = 1,
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
  [6947] = 1,
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
  [6966] = 1,
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
  [6985] = 1,
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
  [7004] = 1,
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
  [7023] = 1,
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
  [7042] = 1,
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
  [7061] = 1,
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
  [7080] = 1,
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
  [7099] = 1,
    ACTIONS(257), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7118] = 1,
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
  [7137] = 1,
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
  [7156] = 1,
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
  [7175] = 1,
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
  [7194] = 1,
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
  [7213] = 1,
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
  [7232] = 1,
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
  [7251] = 1,
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
  [7270] = 9,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(685), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(748), 1,
      sym_constant,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(453), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7305] = 1,
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
  [7324] = 1,
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
  [7343] = 1,
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
  [7362] = 1,
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
  [7381] = 1,
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
  [7400] = 1,
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
  [7419] = 1,
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
  [7438] = 1,
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
  [7457] = 1,
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
  [7533] = 1,
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
  [7552] = 1,
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
  [7571] = 1,
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
  [7590] = 1,
    ACTIONS(261), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7647] = 1,
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
  [7666] = 1,
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
  [7685] = 1,
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
  [7704] = 1,
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
  [7723] = 1,
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
  [7742] = 1,
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
  [7761] = 1,
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
  [7780] = 1,
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
  [7799] = 1,
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
  [7818] = 1,
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
  [7837] = 1,
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
  [7856] = 1,
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
  [7875] = 1,
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
  [7894] = 1,
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
  [7913] = 1,
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
  [7932] = 1,
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
  [7951] = 1,
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
  [7970] = 1,
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
  [7989] = 1,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8027] = 1,
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
  [8046] = 1,
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
  [8065] = 1,
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
  [8084] = 1,
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
  [8103] = 1,
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
  [8122] = 1,
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
  [8141] = 1,
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
  [8160] = 1,
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
  [8179] = 1,
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
  [8198] = 1,
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
  [8217] = 1,
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
  [8236] = 1,
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
  [8255] = 1,
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
  [8274] = 1,
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
  [8293] = 1,
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
  [8312] = 1,
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
  [8331] = 1,
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
  [8350] = 1,
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
  [8369] = 1,
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
  [8388] = 1,
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
  [8407] = 1,
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
  [8426] = 1,
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
  [8445] = 1,
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
  [8464] = 1,
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
  [8483] = 1,
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
  [8502] = 1,
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
  [8521] = 1,
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
  [8540] = 1,
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
  [8559] = 1,
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
  [8578] = 1,
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
  [8597] = 1,
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
  [8616] = 1,
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
  [8635] = 1,
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
  [8654] = 1,
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
  [8673] = 2,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(797), 15,
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
  [8713] = 1,
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
  [8732] = 1,
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
  [8751] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(661), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8779] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(295), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8807] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(284), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8835] = 1,
    ACTIONS(809), 15,
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
  [8853] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(230), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8881] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(266), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8909] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(361), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8937] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(250), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8965] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(260), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [8993] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(354), 1,
      sym_init_cond_definition,
    STATE(125), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9021] = 9,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(596), 1,
      sym_constant,
    STATE(597), 1,
      sym_init_cond_list,
    STATE(600), 1,
      sym_init_cond_hash_item,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9054] = 8,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(815), 1,
      anon_sym_STAR,
    ACTIONS(817), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1139), 1,
      sym_function_args,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(604), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9085] = 7,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(817), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(860), 1,
      sym_function_args,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(604), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9113] = 5,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(663), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9136] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(819), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(734), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9161] = 6,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(821), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(683), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(67), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(204), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9186] = 5,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(823), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9208] = 4,
    ACTIONS(827), 1,
      aux_sym_privilege_token1,
    ACTIONS(829), 1,
      aux_sym_resource_token4,
    STATE(130), 1,
      sym_privilege,
    ACTIONS(825), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9228] = 11,
    ACTIONS(831), 1,
      aux_sym_truncate_token2,
    ACTIONS(833), 1,
      aux_sym_create_index_token2,
    ACTIONS(835), 1,
      aux_sym_resource_token2,
    ACTIONS(837), 1,
      aux_sym_resource_token5,
    ACTIONS(839), 1,
      aux_sym_resource_token6,
    ACTIONS(841), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(843), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(845), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(847), 1,
      aux_sym_drop_type_token1,
    ACTIONS(849), 1,
      aux_sym_drop_user_token1,
    ACTIONS(851), 1,
      aux_sym_create_aggregate_token1,
  [9262] = 5,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(467), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9284] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(756), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9303] = 6,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      aux_sym_relation_element_token1,
    ACTIONS(863), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(865), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(857), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(859), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9326] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(68), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9345] = 3,
    ACTIONS(827), 1,
      aux_sym_privilege_token1,
    STATE(1218), 1,
      sym_privilege,
    ACTIONS(825), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9362] = 6,
    ACTIONS(867), 1,
      aux_sym_drop_index_token1,
    ACTIONS(869), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(871), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(873), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [9385] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(941), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9404] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(196), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9423] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(160), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9442] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(493), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9461] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(748), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9480] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(596), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9499] = 3,
    ACTIONS(827), 1,
      aux_sym_privilege_token1,
    STATE(1219), 1,
      sym_privilege,
    ACTIONS(825), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [9516] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(70), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9535] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(507), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9554] = 10,
    ACTIONS(875), 1,
      aux_sym_truncate_token2,
    ACTIONS(877), 1,
      aux_sym_create_index_token2,
    ACTIONS(879), 1,
      aux_sym_resource_token2,
    ACTIONS(881), 1,
      aux_sym_resource_token5,
    ACTIONS(883), 1,
      aux_sym_resource_token6,
    ACTIONS(885), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(887), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(889), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(891), 1,
      aux_sym_drop_type_token1,
    ACTIONS(893), 1,
      aux_sym_drop_user_token1,
  [9585] = 4,
    ACTIONS(206), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(593), 1,
      sym_constant,
    ACTIONS(204), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9604] = 5,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      aux_sym_relation_element_token1,
    ACTIONS(863), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(857), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(859), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9624] = 6,
    ACTIONS(895), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(897), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(899), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(847), 1,
      sym_index_column_spec,
    STATE(899), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9645] = 6,
    ACTIONS(895), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(897), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(899), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(807), 1,
      sym_index_column_spec,
    STATE(899), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9666] = 6,
    ACTIONS(903), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      aux_sym_privilege_token3,
    ACTIONS(907), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(909), 1,
      aux_sym_alter_table_rename_token1,
    STATE(281), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9687] = 6,
    ACTIONS(895), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(897), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(899), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(905), 1,
      sym_index_column_spec,
    STATE(899), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9708] = 6,
    ACTIONS(895), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(897), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(899), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(886), 1,
      sym_index_column_spec,
    STATE(899), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9729] = 6,
    ACTIONS(911), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(913), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(915), 1,
      sym_object_name,
    STATE(239), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(116), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9750] = 6,
    ACTIONS(911), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(913), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(915), 1,
      sym_object_name,
    STATE(350), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(116), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9771] = 6,
    ACTIONS(911), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(913), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(915), 1,
      sym_object_name,
    STATE(242), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(116), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9792] = 6,
    ACTIONS(911), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(913), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(915), 1,
      sym_object_name,
    STATE(326), 1,
      sym_table_options,
    STATE(939), 1,
      sym_table_option_name,
    STATE(116), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9813] = 3,
    ACTIONS(921), 1,
      aux_sym_relation_element_token1,
    ACTIONS(917), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(919), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9827] = 5,
    ACTIONS(911), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(913), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(915), 1,
      sym_object_name,
    STATE(939), 1,
      sym_table_option_name,
    STATE(191), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [9845] = 5,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 1,
      aux_sym__decimal_literal_token1,
    STATE(753), 1,
      sym__decimal_literal,
    STATE(754), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [9863] = 6,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      sym_object_name,
    STATE(69), 1,
      sym_relation_element,
    STATE(86), 1,
      sym_relation_elements,
    STATE(421), 1,
      sym_function_call,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [9883] = 3,
    ACTIONS(933), 1,
      aux_sym_relation_element_token1,
    ACTIONS(929), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(931), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [9897] = 7,
    ACTIONS(935), 1,
      aux_sym_select_statement_token2,
    ACTIONS(937), 1,
      aux_sym_select_statement_token3,
    ACTIONS(939), 1,
      anon_sym_STAR,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(526), 1,
      sym_select_element,
    STATE(529), 1,
      sym_function_call,
    STATE(759), 1,
      sym_select_elements,
  [9919] = 7,
    ACTIONS(943), 1,
      aux_sym_truncate_token2,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    ACTIONS(947), 1,
      aux_sym_resource_token2,
    ACTIONS(949), 1,
      aux_sym_resource_token5,
    ACTIONS(951), 1,
      aux_sym_resource_token6,
    ACTIONS(953), 1,
      sym_object_name,
    STATE(1022), 1,
      sym_resource,
  [9941] = 7,
    ACTIONS(943), 1,
      aux_sym_truncate_token2,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    ACTIONS(947), 1,
      aux_sym_resource_token2,
    ACTIONS(949), 1,
      aux_sym_resource_token5,
    ACTIONS(951), 1,
      aux_sym_resource_token6,
    ACTIONS(953), 1,
      sym_object_name,
    STATE(1020), 1,
      sym_resource,
  [9963] = 5,
    ACTIONS(905), 1,
      aux_sym_privilege_token3,
    ACTIONS(907), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(909), 1,
      aux_sym_alter_table_rename_token1,
    STATE(238), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9981] = 6,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(74), 1,
      sym_relation_element,
    STATE(421), 1,
      sym_function_call,
    STATE(735), 1,
      sym_column_not_null,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10001] = 7,
    ACTIONS(943), 1,
      aux_sym_truncate_token2,
    ACTIONS(945), 1,
      aux_sym_privilege_token1,
    ACTIONS(947), 1,
      aux_sym_resource_token2,
    ACTIONS(949), 1,
      aux_sym_resource_token5,
    ACTIONS(951), 1,
      aux_sym_resource_token6,
    ACTIONS(953), 1,
      sym_object_name,
    STATE(187), 1,
      sym_resource,
  [10023] = 2,
    ACTIONS(957), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(959), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10034] = 6,
    ACTIONS(961), 1,
      aux_sym_truncate_token2,
    ACTIONS(963), 1,
      aux_sym_resource_token2,
    ACTIONS(965), 1,
      aux_sym_resource_token6,
    ACTIONS(967), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(969), 1,
      aux_sym_drop_type_token1,
    ACTIONS(971), 1,
      aux_sym_drop_user_token1,
  [10053] = 6,
    ACTIONS(939), 1,
      anon_sym_STAR,
    ACTIONS(941), 1,
      sym_object_name,
    ACTIONS(973), 1,
      aux_sym_select_statement_token3,
    STATE(526), 1,
      sym_select_element,
    STATE(529), 1,
      sym_function_call,
    STATE(687), 1,
      sym_select_elements,
  [10072] = 5,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      sym_object_name,
    STATE(74), 1,
      sym_relation_element,
    STATE(421), 1,
      sym_function_call,
    STATE(77), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10089] = 4,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(977), 1,
      sym_object_name,
    STATE(883), 1,
      sym_primary_key_definition,
    STATE(884), 2,
      sym_compound_key,
      sym_composite_key,
  [10103] = 5,
    ACTIONS(979), 1,
      sym__string_literal,
    ACTIONS(981), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(983), 1,
      aux_sym_create_index_token3,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(1188), 1,
      sym_index_name,
  [10119] = 3,
    ACTIONS(989), 1,
      anon_sym_LBRACE,
    ACTIONS(987), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(214), 2,
      sym_option_hash,
      sym_table_option_value,
  [10131] = 5,
    ACTIONS(991), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(993), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(995), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(997), 1,
      aux_sym_role_with_option_token4,
    STATE(154), 1,
      sym_role_with_option,
  [10147] = 5,
    ACTIONS(939), 1,
      anon_sym_STAR,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(526), 1,
      sym_select_element,
    STATE(529), 1,
      sym_function_call,
    STATE(669), 1,
      sym_select_elements,
  [10163] = 4,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1005), 1,
      aux_sym_select_element_token1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10177] = 1,
    ACTIONS(1007), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10185] = 1,
    ACTIONS(1009), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10193] = 1,
    ACTIONS(1011), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10201] = 5,
    ACTIONS(1013), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    ACTIONS(1017), 1,
      aux_sym_insert_values_spec_token1,
    STATE(96), 1,
      sym_insert_values_spec,
    STATE(518), 1,
      sym_insert_column_spec,
  [10217] = 3,
    ACTIONS(1021), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(607), 1,
      sym_using_timestamp_spec,
    ACTIONS(1019), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10229] = 5,
    ACTIONS(939), 1,
      anon_sym_STAR,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(526), 1,
      sym_select_element,
    STATE(529), 1,
      sym_function_call,
    STATE(687), 1,
      sym_select_elements,
  [10245] = 1,
    ACTIONS(1023), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10253] = 1,
    ACTIONS(1025), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10261] = 1,
    ACTIONS(1027), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10269] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1032), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10281] = 5,
    ACTIONS(991), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(993), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(995), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(997), 1,
      aux_sym_role_with_option_token4,
    STATE(204), 1,
      sym_role_with_option,
  [10297] = 1,
    ACTIONS(1034), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10305] = 5,
    ACTIONS(1036), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(448), 1,
      sym_from_spec,
    STATE(536), 1,
      sym_delete_column_item,
    STATE(749), 1,
      sym_delete_column_list,
  [10321] = 3,
    ACTIONS(1021), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(586), 1,
      sym_using_timestamp_spec,
    ACTIONS(1040), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10333] = 5,
    ACTIONS(1036), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(452), 1,
      sym_from_spec,
    STATE(536), 1,
      sym_delete_column_item,
    STATE(658), 1,
      sym_delete_column_list,
  [10349] = 5,
    ACTIONS(1013), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    ACTIONS(1017), 1,
      aux_sym_insert_values_spec_token1,
    STATE(99), 1,
      sym_insert_values_spec,
    STATE(580), 1,
      sym_insert_column_spec,
  [10365] = 4,
    ACTIONS(1042), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1044), 1,
      sym_object_name,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10378] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1021), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(152), 1,
      sym_where_spec,
    STATE(682), 1,
      sym_using_timestamp_spec,
  [10391] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1046), 1,
      anon_sym_DOT,
    ACTIONS(1048), 1,
      aux_sym_update_token2,
    STATE(1153), 1,
      sym_using_ttl_timestamp,
  [10404] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1050), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10417] = 4,
    ACTIONS(1052), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1054), 1,
      aux_sym_create_materialized_view_token1,
    STATE(489), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(520), 1,
      aux_sym_relation_elements_repeat1,
  [10430] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1021), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(113), 1,
      sym_where_spec,
    STATE(689), 1,
      sym_using_timestamp_spec,
  [10443] = 2,
    ACTIONS(1056), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1058), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10452] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(469), 1,
      aux_sym_update_repeat1,
  [10465] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1062), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10478] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1066), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10489] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10502] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1068), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10515] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1070), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10528] = 4,
    ACTIONS(979), 1,
      sym__string_literal,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(1072), 1,
      aux_sym_create_index_token3,
    STATE(916), 1,
      sym_index_name,
  [10541] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1074), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10554] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10567] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1076), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10580] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1078), 1,
      anon_sym_DOT,
    ACTIONS(1080), 1,
      aux_sym_update_token2,
    STATE(1012), 1,
      sym_using_ttl_timestamp,
  [10593] = 4,
    ACTIONS(1082), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(677), 1,
      sym_column_definition,
    STATE(795), 1,
      sym_primary_key_element,
  [10606] = 4,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_function_args_repeat1,
  [10619] = 4,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_COLON,
    ACTIONS(1094), 1,
      anon_sym_RBRACE,
    STATE(566), 1,
      aux_sym_assignment_set_repeat1,
  [10632] = 3,
    ACTIONS(1098), 1,
      aux_sym_create_materialized_view_token1,
    STATE(678), 1,
      sym_primary_key_column,
    ACTIONS(1096), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10643] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10656] = 4,
    ACTIONS(1082), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(677), 1,
      sym_column_definition,
    STATE(852), 1,
      sym_primary_key_element,
  [10669] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1100), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10682] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(483), 1,
      aux_sym_update_repeat1,
  [10695] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1102), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10708] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1107), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10719] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1109), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10732] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_where_spec,
    STATE(462), 1,
      aux_sym_update_repeat1,
  [10745] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10758] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1111), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [10769] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_where_spec,
    STATE(477), 1,
      aux_sym_update_repeat1,
  [10782] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1113), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10795] = 1,
    ACTIONS(1115), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10802] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1117), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10815] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10828] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_where_spec,
    STATE(485), 1,
      aux_sym_update_repeat1,
  [10841] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10854] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1119), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10867] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10880] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1121), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10893] = 4,
    ACTIONS(1052), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1123), 1,
      aux_sym_create_materialized_view_token1,
    STATE(551), 1,
      aux_sym_relation_elements_repeat1,
    STATE(552), 1,
      aux_sym_materialized_view_where_repeat1,
  [10906] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_where_spec,
    STATE(457), 1,
      aux_sym_update_repeat1,
  [10919] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1125), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10932] = 4,
    ACTIONS(1044), 1,
      sym_object_name,
    ACTIONS(1127), 1,
      aux_sym_delete_statement_token3,
    STATE(163), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [10945] = 1,
    ACTIONS(1032), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10952] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_where_spec,
    STATE(496), 1,
      aux_sym_update_repeat1,
  [10965] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1021), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(161), 1,
      sym_where_spec,
    STATE(765), 1,
      sym_using_timestamp_spec,
  [10978] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [10991] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(487), 1,
      aux_sym_update_repeat1,
  [11004] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(529), 1,
      sym_function_call,
    STATE(672), 1,
      sym_select_element,
  [11014] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      aux_sym_assignment_set_repeat1,
  [11024] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(841), 1,
      sym_return_mode,
  [11034] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11044] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1039), 1,
      sym_return_mode,
  [11054] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat1,
  [11064] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_clustering_key_list_repeat1,
  [11074] = 2,
    ACTIONS(1143), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1141), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [11082] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_assignment_map_repeat1,
  [11092] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(521), 1,
      aux_sym_assignment_map_repeat1,
  [11102] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(746), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11112] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      aux_sym_function_args_repeat1,
  [11122] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(479), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11132] = 3,
    ACTIONS(1158), 1,
      aux_sym_truncate_token2,
    ACTIONS(1160), 1,
      sym_object_name,
    STATE(337), 1,
      sym_table_name,
  [11142] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_relation_element_repeat2,
  [11152] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_create_function_repeat1,
  [11162] = 3,
    ACTIONS(1166), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1168), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1170), 1,
      aux_sym_update_token1,
  [11172] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(490), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11182] = 3,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(124), 1,
      sym_alter_type_rename_item,
    STATE(302), 1,
      sym_alter_type_rename_list,
  [11192] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11202] = 3,
    ACTIONS(1013), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1017), 1,
      aux_sym_insert_values_spec_token1,
    STATE(100), 1,
      sym_insert_values_spec,
  [11212] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1176), 1,
      aux_sym_update_token2,
    STATE(863), 1,
      sym_using_ttl_timestamp,
  [11222] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1123), 1,
      aux_sym_create_materialized_view_token1,
    STATE(64), 1,
      aux_sym_relation_elements_repeat1,
  [11232] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_assignment_map_repeat1,
  [11242] = 3,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(637), 1,
      sym_typed_name,
  [11252] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1059), 1,
      sym_return_mode,
  [11262] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(476), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11272] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_relation_element_repeat2,
  [11282] = 3,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1188), 1,
      aux_sym_from_spec_token1,
    STATE(591), 1,
      aux_sym_select_elements_repeat1,
  [11292] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(997), 1,
      sym_return_mode,
  [11302] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_relation_element_repeat2,
  [11312] = 2,
    ACTIONS(1192), 1,
      aux_sym_select_element_token1,
    ACTIONS(1190), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11320] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1064), 1,
      sym_return_mode,
  [11330] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11340] = 2,
    ACTIONS(1196), 1,
      aux_sym_resource_token1,
    ACTIONS(1198), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [11348] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(454), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11358] = 2,
    ACTIONS(1202), 1,
      anon_sym_LBRACK,
    ACTIONS(1200), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11366] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(497), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11376] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      aux_sym_from_spec_token1,
    STATE(602), 1,
      aux_sym_delete_column_list_repeat1,
  [11386] = 2,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11394] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_init_cond_hash_repeat1,
  [11404] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11414] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(851), 1,
      sym_return_mode,
  [11424] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      aux_sym_where_spec_token1,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [11434] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_typed_name,
  [11444] = 3,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(543), 1,
      aux_sym_replication_list_repeat1,
  [11454] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_clustering_key_list_repeat1,
  [11464] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(951), 1,
      sym_return_mode,
  [11474] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1230), 1,
      aux_sym_update_token2,
    STATE(950), 1,
      sym_using_ttl_timestamp,
  [11484] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_create_function_repeat1,
  [11494] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_GT,
    STATE(626), 1,
      aux_sym_data_type_definition_repeat1,
  [11504] = 3,
    ACTIONS(1160), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token2,
    STATE(1191), 1,
      sym_table_name,
  [11514] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    STATE(640), 1,
      aux_sym_option_hash_repeat1,
  [11524] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1244), 1,
      aux_sym_create_materialized_view_token1,
    STATE(64), 1,
      aux_sym_relation_elements_repeat1,
  [11534] = 3,
    ACTIONS(1246), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1249), 1,
      aux_sym_create_materialized_view_token1,
    STATE(552), 1,
      aux_sym_materialized_view_where_repeat1,
  [11544] = 3,
    ACTIONS(1251), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1253), 1,
      sym_object_name,
    STATE(1185), 1,
      sym_keyspace_name,
  [11554] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_create_function_repeat1,
  [11564] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1097), 1,
      sym_return_mode,
  [11574] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      sym_typed_name,
  [11584] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11594] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11604] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(824), 1,
      sym_return_mode,
  [11614] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_create_function_repeat1,
  [11624] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(820), 1,
      sym_return_mode,
  [11634] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(615), 1,
      aux_sym_replication_list_repeat1,
  [11644] = 3,
    ACTIONS(1269), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1271), 1,
      sym_object_name,
    STATE(1175), 1,
      sym_trigger_name,
  [11654] = 3,
    ACTIONS(1273), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1275), 1,
      sym_object_name,
    STATE(1171), 1,
      sym_type_name,
  [11664] = 3,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      aux_sym_expression_list_repeat1,
  [11674] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RBRACE,
    STATE(440), 1,
      aux_sym_assignment_set_repeat1,
  [11684] = 3,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    STATE(567), 1,
      aux_sym_function_args_repeat1,
  [11694] = 3,
    ACTIONS(1287), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1289), 1,
      sym_object_name,
    STATE(650), 1,
      sym_user_name,
  [11704] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_GT,
    STATE(548), 1,
      aux_sym_data_type_definition_repeat1,
  [11714] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_create_function_repeat1,
  [11724] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(472), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11734] = 3,
    ACTIONS(1295), 1,
      sym__string_literal,
    ACTIONS(1297), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1299), 1,
      sym_object_name,
  [11744] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_typed_name,
  [11754] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(956), 1,
      sym_return_mode,
  [11764] = 3,
    ACTIONS(1271), 1,
      sym_object_name,
    ACTIONS(1303), 1,
      aux_sym_delete_statement_token2,
    STATE(1157), 1,
      sym_trigger_name,
  [11774] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1132), 1,
      sym_return_mode,
  [11784] = 2,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(1307), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [11792] = 3,
    ACTIONS(1289), 1,
      sym_object_name,
    ACTIONS(1309), 1,
      aux_sym_delete_statement_token2,
    STATE(358), 1,
      sym_user_name,
  [11802] = 3,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(627), 1,
      sym_column_definition,
    STATE(993), 1,
      sym_column_definition_list,
  [11812] = 3,
    ACTIONS(1013), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1017), 1,
      aux_sym_insert_values_spec_token1,
    STATE(96), 1,
      sym_insert_values_spec,
  [11822] = 1,
    ACTIONS(1313), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11828] = 3,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_relation_element_repeat1,
  [11838] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(484), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [11848] = 3,
    ACTIONS(923), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1317), 1,
      sym__string_literal,
    STATE(779), 1,
      sym__decimal_literal,
  [11858] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_clustering_key_list_repeat1,
  [11868] = 1,
    ACTIONS(1321), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11874] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      aux_sym_from_spec_token1,
    STATE(587), 1,
      aux_sym_delete_column_list_repeat1,
  [11884] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [11894] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym_typed_name,
  [11904] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RBRACE,
    STATE(590), 1,
      aux_sym_option_hash_repeat1,
  [11914] = 3,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      aux_sym_from_spec_token1,
    STATE(616), 1,
      aux_sym_select_elements_repeat1,
  [11924] = 3,
    ACTIONS(923), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1339), 1,
      sym__string_literal,
    STATE(1127), 1,
      sym__decimal_literal,
  [11934] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      aux_sym_assignment_set_repeat1,
  [11944] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_column_definition_list_repeat1,
  [11954] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1021), 1,
      sym_return_mode,
  [11964] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_assignment_set_repeat1,
  [11974] = 3,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [11984] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      aux_sym_expression_list_repeat1,
  [11994] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [12004] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_init_cond_hash_repeat1,
  [12014] = 3,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(627), 1,
      sym_column_definition,
    STATE(804), 1,
      sym_column_definition_list,
  [12024] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      aux_sym_from_spec_token1,
    STATE(587), 1,
      aux_sym_delete_column_list_repeat1,
  [12034] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(1025), 1,
      sym_return_mode,
  [12044] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_function_args_repeat1,
  [12054] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_clustering_key_list_repeat1,
  [12064] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(925), 1,
      sym_return_mode,
  [12074] = 1,
    ACTIONS(1040), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12080] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_create_function_repeat1,
  [12090] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(972), 1,
      sym_return_mode,
  [12100] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_column_definition_list_repeat1,
  [12110] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_function_repeat1,
  [12120] = 3,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_init_cond_hash_repeat1,
  [12130] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(920), 1,
      sym_return_mode,
  [12140] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_typed_name,
  [12150] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RBRACE,
    STATE(543), 1,
      aux_sym_replication_list_repeat1,
  [12160] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1386), 1,
      aux_sym_from_spec_token1,
    STATE(616), 1,
      aux_sym_select_elements_repeat1,
  [12170] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [12180] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(893), 1,
      sym_return_mode,
  [12190] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_typed_name,
  [12200] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(896), 1,
      sym_return_mode,
  [12210] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12220] = 3,
    ACTIONS(1182), 1,
      sym_object_name,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      sym_typed_name,
  [12230] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(786), 1,
      sym_return_mode,
  [12240] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_create_function_repeat1,
  [12250] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_function_repeat1,
  [12260] = 3,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_GT,
    STATE(626), 1,
      aux_sym_data_type_definition_repeat1,
  [12270] = 3,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_column_definition_list_repeat1,
  [12280] = 3,
    ACTIONS(1412), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1414), 1,
      sym_object_name,
    STATE(1090), 1,
      sym_materialized_view_name,
  [12290] = 2,
    ACTIONS(1416), 1,
      anon_sym_DOT,
    ACTIONS(1418), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [12298] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(796), 1,
      sym_return_mode,
  [12308] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_create_function_repeat1,
  [12318] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(900), 1,
      sym_return_mode,
  [12328] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_expression_list_repeat1,
  [12338] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(976), 1,
      sym_return_mode,
  [12348] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(494), 1,
      sym_assignment_element,
    STATE(1036), 1,
      sym_indexed_column,
  [12358] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_relation_element_repeat2,
  [12368] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_create_function_repeat1,
  [12378] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      aux_sym_assignment_set_repeat1,
  [12388] = 3,
    ACTIONS(1131), 1,
      aux_sym_create_function_token1,
    ACTIONS(1133), 1,
      aux_sym_return_mode_token1,
    STATE(788), 1,
      sym_return_mode,
  [12398] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RBRACE,
    STATE(590), 1,
      aux_sym_option_hash_repeat1,
  [12408] = 3,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12418] = 2,
    ACTIONS(1434), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1436), 1,
      sym_object_name,
  [12425] = 1,
    ACTIONS(1406), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12430] = 2,
    ACTIONS(1438), 1,
      sym_object_name,
    STATE(671), 1,
      sym_init_cond_hash_item,
  [12437] = 2,
    ACTIONS(1440), 1,
      anon_sym_DOT,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
  [12444] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_column_list,
  [12451] = 2,
    ACTIONS(1446), 1,
      sym__string_literal,
    STATE(341), 1,
      sym_trigger_class,
  [12458] = 2,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(547), 1,
      sym_typed_name,
  [12465] = 2,
    ACTIONS(1448), 1,
      aux_sym_resource_token5,
    ACTIONS(1450), 1,
      aux_sym_drop_aggregate_token1,
  [12472] = 2,
    ACTIONS(1452), 1,
      aux_sym_create_keyspace_token1,
    STATE(237), 1,
      sym_user_with,
  [12479] = 2,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(697), 1,
      sym_option_hash_item,
  [12486] = 1,
    ACTIONS(1456), 2,
      sym__string_literal,
      sym__float_literal,
  [12491] = 2,
    ACTIONS(1452), 1,
      aux_sym_create_keyspace_token1,
    STATE(283), 1,
      sym_user_with,
  [12498] = 2,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(164), 1,
      sym_typed_name,
  [12505] = 2,
    ACTIONS(1458), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1460), 1,
      aux_sym_using_ttl_timestamp_token1,
  [12512] = 2,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(550), 1,
      sym_option_hash_item,
  [12519] = 1,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12524] = 2,
    ACTIONS(1462), 1,
      aux_sym_from_spec_token1,
    STATE(495), 1,
      sym_from_spec,
  [12531] = 2,
    ACTIONS(1464), 1,
      anon_sym_DOT,
    ACTIONS(1466), 1,
      anon_sym_LPAREN,
  [12538] = 2,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1470), 1,
      anon_sym_LPAREN,
  [12545] = 1,
    ACTIONS(1472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12550] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(434), 1,
      sym_table_name,
  [12557] = 1,
    ACTIONS(1395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12562] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(1115), 1,
      sym_table_name,
  [12569] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(913), 1,
      sym_column_list,
  [12576] = 2,
    ACTIONS(1476), 1,
      sym_object_name,
    STATE(897), 1,
      sym_keyspace_name,
  [12583] = 1,
    ACTIONS(1478), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [12588] = 2,
    ACTIONS(1480), 1,
      aux_sym_where_spec_token1,
    STATE(915), 1,
      sym_materialized_view_where,
  [12595] = 2,
    ACTIONS(1462), 1,
      aux_sym_from_spec_token1,
    STATE(61), 1,
      sym_from_spec,
  [12602] = 2,
    ACTIONS(1482), 1,
      sym__string_literal,
    STATE(562), 1,
      sym_replication_list_item,
  [12609] = 1,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12614] = 1,
    ACTIONS(1386), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12619] = 1,
    ACTIONS(1484), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12624] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(783), 1,
      sym_table_name,
  [12631] = 2,
    ACTIONS(1486), 1,
      sym_object_name,
    STATE(193), 1,
      sym_if_condition,
  [12638] = 1,
    ACTIONS(1488), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12643] = 1,
    ACTIONS(1370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12648] = 1,
    ACTIONS(1490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12653] = 2,
    ACTIONS(1492), 1,
      sym_object_name,
    STATE(694), 1,
      sym_delete_column_item,
  [12660] = 2,
    ACTIONS(923), 1,
      aux_sym__decimal_literal_token1,
    STATE(183), 1,
      sym__decimal_literal,
  [12667] = 2,
    ACTIONS(1482), 1,
      sym__string_literal,
    STATE(657), 1,
      sym_replication_list_item,
  [12674] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(113), 1,
      sym_where_spec,
  [12681] = 1,
    ACTIONS(1494), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12686] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(918), 1,
      sym_table_name,
  [12693] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(850), 1,
      sym_table_name,
  [12700] = 2,
    ACTIONS(1496), 1,
      sym_object_name,
    STATE(994), 1,
      sym_clustering_key_list,
  [12707] = 2,
    ACTIONS(1462), 1,
      aux_sym_from_spec_token1,
    STATE(62), 1,
      sym_from_spec,
  [12714] = 2,
    ACTIONS(1498), 1,
      sym_object_name,
    STATE(451), 1,
      sym_column_not_null,
  [12721] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(161), 1,
      sym_where_spec,
  [12728] = 2,
    ACTIONS(1500), 1,
      sym_object_name,
    STATE(653), 1,
      sym_user_name,
  [12735] = 2,
    ACTIONS(1476), 1,
      sym_object_name,
    STATE(1152), 1,
      sym_keyspace_name,
  [12742] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(388), 1,
      sym_table_name,
  [12749] = 2,
    ACTIONS(1502), 1,
      sym_object_name,
    STATE(885), 1,
      sym_trigger_name,
  [12756] = 1,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12761] = 1,
    ACTIONS(1504), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [12766] = 2,
    ACTIONS(1506), 1,
      sym_object_name,
    STATE(882), 1,
      sym_type_name,
  [12773] = 1,
    ACTIONS(1335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12778] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(996), 1,
      sym_column_list,
  [12785] = 2,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_assignment_tuple,
  [12792] = 2,
    ACTIONS(1508), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1510), 1,
      sym_object_name,
  [12799] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(774), 1,
      sym_table_name,
  [12806] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(991), 1,
      sym_table_name,
  [12813] = 2,
    ACTIONS(1512), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_replication_list,
  [12820] = 2,
    ACTIONS(1514), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1516), 1,
      sym_object_name,
  [12827] = 2,
    ACTIONS(1518), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1520), 1,
      sym_object_name,
  [12834] = 2,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(512), 1,
      sym_assignment_tuple,
  [12841] = 2,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_assignment_tuple,
  [12848] = 2,
    ACTIONS(1522), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1524), 1,
      sym_object_name,
  [12855] = 2,
    ACTIONS(1526), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1528), 1,
      sym_object_name,
  [12862] = 1,
    ACTIONS(1530), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12867] = 2,
    ACTIONS(1532), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1534), 1,
      sym_object_name,
  [12874] = 2,
    ACTIONS(1498), 1,
      sym_object_name,
    STATE(735), 1,
      sym_column_not_null,
  [12881] = 2,
    ACTIONS(1512), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_replication_list,
  [12888] = 1,
    ACTIONS(1536), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [12893] = 2,
    ACTIONS(1538), 1,
      anon_sym_DOT,
    ACTIONS(1540), 1,
      aux_sym_select_element_token1,
  [12900] = 2,
    ACTIONS(1446), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_trigger_class,
  [12907] = 1,
    ACTIONS(1280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12912] = 2,
    ACTIONS(1172), 1,
      sym_object_name,
    STATE(200), 1,
      sym_alter_type_rename_item,
  [12919] = 2,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(570), 1,
      sym_typed_name,
  [12926] = 2,
    ACTIONS(1542), 1,
      aux_sym_role_with_option_token1,
    STATE(107), 1,
      sym_user_password,
  [12933] = 1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12938] = 2,
    ACTIONS(1546), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1548), 1,
      sym_object_name,
  [12945] = 2,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(677), 1,
      sym_column_definition,
  [12952] = 2,
    ACTIONS(1550), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1552), 1,
      sym_object_name,
  [12959] = 2,
    ACTIONS(1554), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1556), 1,
      sym_object_name,
  [12966] = 2,
    ACTIONS(1558), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1560), 1,
      sym_object_name,
  [12973] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(299), 1,
      sym_durable_writes,
  [12980] = 2,
    ACTIONS(1564), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1566), 1,
      sym_object_name,
  [12987] = 2,
    ACTIONS(1568), 1,
      sym__string_literal,
    ACTIONS(1570), 1,
      sym_object_name,
  [12994] = 2,
    ACTIONS(1572), 1,
      sym__string_literal,
    ACTIONS(1574), 1,
      sym_object_name,
  [13001] = 2,
    ACTIONS(1512), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_replication_list,
  [13008] = 2,
    ACTIONS(1576), 1,
      anon_sym_DOT,
    ACTIONS(1578), 1,
      anon_sym_LPAREN,
  [13015] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(1095), 1,
      sym_column_list,
  [13022] = 1,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13027] = 1,
    ACTIONS(1249), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13032] = 2,
    ACTIONS(1502), 1,
      sym_object_name,
    STATE(952), 1,
      sym_trigger_name,
  [13039] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(668), 1,
      sym_table_name,
  [13046] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(297), 1,
      sym_table_name,
  [13053] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(311), 1,
      sym_table_name,
  [13060] = 2,
    ACTIONS(1580), 1,
      anon_sym_DOT,
    ACTIONS(1582), 1,
      anon_sym_LPAREN,
  [13067] = 2,
    ACTIONS(1500), 1,
      sym_object_name,
    STATE(307), 1,
      sym_user_name,
  [13074] = 1,
    ACTIONS(1584), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13079] = 2,
    ACTIONS(1586), 1,
      anon_sym_EQ,
    ACTIONS(1588), 1,
      anon_sym_LBRACK,
  [13086] = 2,
    ACTIONS(1590), 1,
      anon_sym_DOT,
    ACTIONS(1592), 1,
      anon_sym_LPAREN,
  [13093] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(446), 1,
      sym_table_name,
  [13100] = 1,
    ACTIONS(1219), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13105] = 2,
    ACTIONS(1500), 1,
      sym_object_name,
    STATE(766), 1,
      sym_user_name,
  [13112] = 1,
    ACTIONS(1056), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13117] = 2,
    ACTIONS(1462), 1,
      aux_sym_from_spec_token1,
    STATE(452), 1,
      sym_from_spec,
  [13124] = 2,
    ACTIONS(1594), 1,
      anon_sym_DOT,
    ACTIONS(1596), 1,
      anon_sym_LPAREN,
  [13131] = 2,
    ACTIONS(1598), 1,
      anon_sym_DOT,
    ACTIONS(1600), 1,
      anon_sym_LPAREN,
  [13138] = 1,
    ACTIONS(1602), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [13143] = 1,
    ACTIONS(1604), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13148] = 1,
    ACTIONS(1606), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13153] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(85), 1,
      sym_table_name,
  [13160] = 1,
    ACTIONS(1608), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13165] = 2,
    ACTIONS(1474), 1,
      sym_object_name,
    STATE(225), 1,
      sym_table_name,
  [13172] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(226), 1,
      sym_durable_writes,
  [13179] = 2,
    ACTIONS(1462), 1,
      aux_sym_from_spec_token1,
    STATE(63), 1,
      sym_from_spec,
  [13186] = 2,
    ACTIONS(1496), 1,
      sym_object_name,
    STATE(1075), 1,
      sym_clustering_key_list,
  [13193] = 2,
    ACTIONS(1610), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1612), 1,
      sym_object_name,
  [13200] = 2,
    ACTIONS(1614), 1,
      sym__string_literal,
    ACTIONS(1616), 1,
      sym_object_name,
  [13207] = 2,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(115), 1,
      sym_typed_name,
  [13214] = 2,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(120), 1,
      sym_typed_name,
  [13221] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(128), 1,
      sym_where_spec,
  [13228] = 2,
    ACTIONS(1452), 1,
      aux_sym_create_keyspace_token1,
    STATE(292), 1,
      sym_user_with,
  [13235] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(945), 1,
      sym_partition_key_list,
  [13242] = 2,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_assignment_tuple,
  [13249] = 2,
    ACTIONS(1620), 1,
      anon_sym_COMMA,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
  [13256] = 2,
    ACTIONS(1444), 1,
      sym_object_name,
    STATE(834), 1,
      sym_column_list,
  [13263] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(808), 1,
      sym_materialized_view_name,
  [13270] = 2,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(525), 1,
      sym_assignment_tuple,
  [13277] = 2,
    ACTIONS(923), 1,
      aux_sym__decimal_literal_token1,
    STATE(871), 1,
      sym__decimal_literal,
  [13284] = 2,
    ACTIONS(1480), 1,
      aux_sym_where_spec_token1,
    STATE(1052), 1,
      sym_materialized_view_where,
  [13291] = 2,
    ACTIONS(1562), 1,
      aux_sym_durable_writes_token1,
    STATE(320), 1,
      sym_durable_writes,
  [13298] = 2,
    ACTIONS(1626), 1,
      anon_sym_DOT,
    ACTIONS(1628), 1,
      anon_sym_LPAREN,
  [13305] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13310] = 2,
    ACTIONS(989), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_option_hash,
  [13317] = 1,
    ACTIONS(1632), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13322] = 1,
    ACTIONS(1634), 1,
      sym_object_name,
  [13326] = 1,
    ACTIONS(1636), 1,
      sym_object_name,
  [13330] = 1,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
  [13334] = 1,
    ACTIONS(1640), 1,
      anon_sym_LPAREN,
  [13338] = 1,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
  [13342] = 1,
    ACTIONS(1644), 1,
      aux_sym_delete_statement_token3,
  [13346] = 1,
    ACTIONS(1646), 1,
      aux_sym_create_function_token1,
  [13350] = 1,
    ACTIONS(1648), 1,
      anon_sym_RPAREN,
  [13354] = 1,
    ACTIONS(1650), 1,
      aux_sym_create_function_token1,
  [13358] = 1,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
  [13362] = 1,
    ACTIONS(1654), 1,
      aux_sym_constant_token2,
  [13366] = 1,
    ACTIONS(1656), 1,
      aux_sym_return_mode_token2,
  [13370] = 1,
    ACTIONS(1658), 1,
      aux_sym_create_function_token2,
  [13374] = 1,
    ACTIONS(1660), 1,
      aux_sym_select_statement_token5,
  [13378] = 1,
    ACTIONS(1662), 1,
      aux_sym_create_aggregate_token3,
  [13382] = 1,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
  [13386] = 1,
    ACTIONS(1666), 1,
      aux_sym_create_function_token1,
  [13390] = 1,
    ACTIONS(1668), 1,
      anon_sym_COLON,
  [13394] = 1,
    ACTIONS(1670), 1,
      anon_sym_EQ,
  [13398] = 1,
    ACTIONS(1672), 1,
      anon_sym_LPAREN,
  [13402] = 1,
    ACTIONS(1674), 1,
      anon_sym_RPAREN,
  [13406] = 1,
    ACTIONS(1676), 1,
      aux_sym_create_aggregate_token3,
  [13410] = 1,
    ACTIONS(1678), 1,
      aux_sym_create_aggregate_token4,
  [13414] = 1,
    ACTIONS(1680), 1,
      anon_sym_COLON,
  [13418] = 1,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
  [13422] = 1,
    ACTIONS(1684), 1,
      anon_sym_LPAREN,
  [13426] = 1,
    ACTIONS(1686), 1,
      aux_sym_select_statement_token1,
  [13430] = 1,
    ACTIONS(1688), 1,
      anon_sym_RPAREN,
  [13434] = 1,
    ACTIONS(1690), 1,
      aux_sym_select_element_token1,
  [13438] = 1,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
  [13442] = 1,
    ACTIONS(1694), 1,
      anon_sym_RPAREN,
  [13446] = 1,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [13450] = 1,
    ACTIONS(1698), 1,
      anon_sym_LPAREN,
  [13454] = 1,
    ACTIONS(1700), 1,
      aux_sym_select_statement_token5,
  [13458] = 1,
    ACTIONS(1702), 1,
      aux_sym_insert_statement_token3,
  [13462] = 1,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
  [13466] = 1,
    ACTIONS(1706), 1,
      sym_object_name,
  [13470] = 1,
    ACTIONS(1708), 1,
      anon_sym_EQ,
  [13474] = 1,
    ACTIONS(1710), 1,
      anon_sym_EQ,
  [13478] = 1,
    ACTIONS(1712), 1,
      sym_object_name,
  [13482] = 1,
    ACTIONS(1714), 1,
      aux_sym_create_function_token1,
  [13486] = 1,
    ACTIONS(1716), 1,
      aux_sym__decimal_literal_token1,
  [13490] = 1,
    ACTIONS(1718), 1,
      aux_sym__decimal_literal_token1,
  [13494] = 1,
    ACTIONS(1720), 1,
      sym_object_name,
  [13498] = 1,
    ACTIONS(1722), 1,
      aux_sym_create_function_token1,
  [13502] = 1,
    ACTIONS(1724), 1,
      anon_sym_RPAREN,
  [13506] = 1,
    ACTIONS(1726), 1,
      aux_sym_return_mode_token2,
  [13510] = 1,
    ACTIONS(1728), 1,
      aux_sym_create_function_token1,
  [13514] = 1,
    ACTIONS(1730), 1,
      sym_object_name,
  [13518] = 1,
    ACTIONS(1732), 1,
      aux_sym_create_function_token2,
  [13522] = 1,
    ACTIONS(1734), 1,
      anon_sym_LPAREN,
  [13526] = 1,
    ACTIONS(1736), 1,
      sym_object_name,
  [13530] = 1,
    ACTIONS(1738), 1,
      anon_sym_LPAREN,
  [13534] = 1,
    ACTIONS(1740), 1,
      sym_object_name,
  [13538] = 1,
    ACTIONS(1742), 1,
      aux_sym_from_spec_token1,
  [13542] = 1,
    ACTIONS(1744), 1,
      sym_object_name,
  [13546] = 1,
    ACTIONS(1746), 1,
      aux_sym_create_aggregate_token3,
  [13550] = 1,
    ACTIONS(1748), 1,
      sym_object_name,
  [13554] = 1,
    ACTIONS(1750), 1,
      sym_object_name,
  [13558] = 1,
    ACTIONS(1752), 1,
      anon_sym_RPAREN,
  [13562] = 1,
    ACTIONS(1754), 1,
      sym_object_name,
  [13566] = 1,
    ACTIONS(1756), 1,
      aux_sym_create_function_token1,
  [13570] = 1,
    ACTIONS(1758), 1,
      aux_sym_constant_token2,
  [13574] = 1,
    ACTIONS(1760), 1,
      aux_sym_create_index_token3,
  [13578] = 1,
    ACTIONS(1762), 1,
      sym_object_name,
  [13582] = 1,
    ACTIONS(1764), 1,
      aux_sym_create_keyspace_token2,
  [13586] = 1,
    ACTIONS(1766), 1,
      sym_object_name,
  [13590] = 1,
    ACTIONS(1768), 1,
      anon_sym_RPAREN,
  [13594] = 1,
    ACTIONS(1770), 1,
      aux_sym_delete_statement_token3,
  [13598] = 1,
    ACTIONS(1772), 1,
      sym_object_name,
  [13602] = 1,
    ACTIONS(1774), 1,
      anon_sym_LPAREN,
  [13606] = 1,
    ACTIONS(1776), 1,
      aux_sym_create_function_token1,
  [13610] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [13614] = 1,
    ACTIONS(1780), 1,
      sym_object_name,
  [13618] = 1,
    ACTIONS(1782), 1,
      aux_sym_relation_contains_key_token2,
  [13622] = 1,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [13626] = 1,
    ACTIONS(1786), 1,
      sym_object_name,
  [13630] = 1,
    ACTIONS(1788), 1,
      aux_sym_relation_contains_key_token2,
  [13634] = 1,
    ACTIONS(1790), 1,
      aux_sym_delete_statement_token3,
  [13638] = 1,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
  [13642] = 1,
    ACTIONS(1794), 1,
      anon_sym_RPAREN,
  [13646] = 1,
    ACTIONS(1796), 1,
      anon_sym_LPAREN,
  [13650] = 1,
    ACTIONS(1798), 1,
      aux_sym_select_statement_token5,
  [13654] = 1,
    ACTIONS(1800), 1,
      aux_sym_update_token2,
  [13658] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [13662] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [13666] = 1,
    ACTIONS(1806), 1,
      aux_sym_order_spec_token2,
  [13670] = 1,
    ACTIONS(1808), 1,
      sym_object_name,
  [13674] = 1,
    ACTIONS(1810), 1,
      sym_object_name,
  [13678] = 1,
    ACTIONS(1812), 1,
      aux_sym_resource_token2,
  [13682] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [13686] = 1,
    ACTIONS(1816), 1,
      anon_sym_RBRACK,
  [13690] = 1,
    ACTIONS(1818), 1,
      aux_sym_using_timestamp_spec_token2,
  [13694] = 1,
    ACTIONS(1820), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13698] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [13702] = 1,
    ACTIONS(1824), 1,
      sym_object_name,
  [13706] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [13710] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [13714] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [13718] = 1,
    ACTIONS(1832), 1,
      sym_object_name,
  [13722] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [13726] = 1,
    ACTIONS(1836), 1,
      aux_sym_delete_statement_token3,
  [13730] = 1,
    ACTIONS(1838), 1,
      anon_sym_LPAREN,
  [13734] = 1,
    ACTIONS(1840), 1,
      anon_sym_RPAREN,
  [13738] = 1,
    ACTIONS(1842), 1,
      anon_sym_RPAREN,
  [13742] = 1,
    ACTIONS(1844), 1,
      aux_sym_using_timestamp_spec_token1,
  [13746] = 1,
    ACTIONS(1846), 1,
      anon_sym_RPAREN,
  [13750] = 1,
    ACTIONS(1848), 1,
      aux_sym_select_element_token1,
  [13754] = 1,
    ACTIONS(1850), 1,
      aux_sym_create_aggregate_token3,
  [13758] = 1,
    ACTIONS(1852), 1,
      sym__boolean_literal,
  [13762] = 1,
    ACTIONS(1854), 1,
      sym__boolean_literal,
  [13766] = 1,
    ACTIONS(1856), 1,
      sym__string_literal,
  [13770] = 1,
    ACTIONS(1858), 1,
      sym__boolean_literal,
  [13774] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token1,
  [13778] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_index_token3,
  [13782] = 1,
    ACTIONS(1864), 1,
      aux_sym_constant_token2,
  [13786] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_function_token1,
  [13790] = 1,
    ACTIONS(1868), 1,
      aux_sym_create_keyspace_token1,
  [13794] = 1,
    ACTIONS(1870), 1,
      aux_sym_create_function_token2,
  [13798] = 1,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
  [13802] = 1,
    ACTIONS(1874), 1,
      aux_sym_create_function_token1,
  [13806] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_function_token1,
  [13810] = 1,
    ACTIONS(1878), 1,
      aux_sym_select_element_token1,
  [13814] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [13818] = 1,
    ACTIONS(1882), 1,
      aux_sym_create_function_token2,
  [13822] = 1,
    ACTIONS(1884), 1,
      anon_sym_RPAREN,
  [13826] = 1,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [13830] = 1,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
  [13834] = 1,
    ACTIONS(1890), 1,
      anon_sym_LPAREN,
  [13838] = 1,
    ACTIONS(1892), 1,
      anon_sym_RPAREN,
  [13842] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [13846] = 1,
    ACTIONS(1896), 1,
      aux_sym_create_aggregate_token4,
  [13850] = 1,
    ACTIONS(1898), 1,
      aux_sym_create_aggregate_token5,
  [13854] = 1,
    ACTIONS(1900), 1,
      aux_sym_from_spec_token1,
  [13858] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [13862] = 1,
    ACTIONS(1904), 1,
      aux_sym_create_materialized_view_token1,
  [13866] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_index_token3,
  [13870] = 1,
    ACTIONS(1908), 1,
      anon_sym_LPAREN,
  [13874] = 1,
    ACTIONS(1910), 1,
      anon_sym_LPAREN,
  [13878] = 1,
    ACTIONS(1912), 1,
      aux_sym_delete_statement_token3,
  [13882] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [13886] = 1,
    ACTIONS(1916), 1,
      aux_sym_insert_statement_token3,
  [13890] = 1,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
  [13894] = 1,
    ACTIONS(1920), 1,
      aux_sym_create_function_token2,
  [13898] = 1,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
  [13902] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_function_token1,
  [13906] = 1,
    ACTIONS(1924), 1,
      anon_sym_LPAREN,
  [13910] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [13914] = 1,
    ACTIONS(1928), 1,
      aux_sym_create_aggregate_token3,
  [13918] = 1,
    ACTIONS(1930), 1,
      aux_sym_create_aggregate_token4,
  [13922] = 1,
    ACTIONS(1932), 1,
      sym_object_name,
  [13926] = 1,
    ACTIONS(1934), 1,
      aux_sym_select_statement_token5,
  [13930] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [13934] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [13938] = 1,
    ACTIONS(1940), 1,
      aux_sym_grant_token2,
  [13942] = 1,
    ACTIONS(1942), 1,
      aux_sym_drop_type_token1,
  [13946] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [13950] = 1,
    ACTIONS(1946), 1,
      anon_sym_EQ,
  [13954] = 1,
    ACTIONS(1948), 1,
      aux_sym_grant_token2,
  [13958] = 1,
    ACTIONS(1950), 1,
      anon_sym_EQ,
  [13962] = 1,
    ACTIONS(1952), 1,
      anon_sym_EQ,
  [13966] = 1,
    ACTIONS(1954), 1,
      anon_sym_COLON,
  [13970] = 1,
    ACTIONS(1956), 1,
      aux_sym_order_spec_token1,
  [13974] = 1,
    ACTIONS(1958), 1,
      aux_sym_compact_storage_token2,
  [13978] = 1,
    ACTIONS(1960), 1,
      aux_sym_compact_storage_token2,
  [13982] = 1,
    ACTIONS(1962), 1,
      anon_sym_RPAREN,
  [13986] = 1,
    ACTIONS(1964), 1,
      sym_object_name,
  [13990] = 1,
    ACTIONS(1966), 1,
      anon_sym_RPAREN,
  [13994] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [13998] = 1,
    ACTIONS(1970), 1,
      anon_sym_LPAREN,
  [14002] = 1,
    ACTIONS(1972), 1,
      aux_sym_update_token2,
  [14006] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_function_token1,
  [14010] = 1,
    ACTIONS(1976), 1,
      aux_sym_create_index_token3,
  [14014] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [14018] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_function_token2,
  [14022] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [14026] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_function_token1,
  [14030] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [14034] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_function_token2,
  [14038] = 1,
    ACTIONS(1990), 1,
      aux_sym_insert_statement_token3,
  [14042] = 1,
    ACTIONS(1992), 1,
      sym__code_block,
  [14046] = 1,
    ACTIONS(1994), 1,
      aux_sym_select_element_token1,
  [14050] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14054] = 1,
    ACTIONS(1998), 1,
      aux_sym_create_aggregate_token3,
  [14058] = 1,
    ACTIONS(2000), 1,
      aux_sym_create_aggregate_token4,
  [14062] = 1,
    ACTIONS(2002), 1,
      aux_sym_insert_statement_token3,
  [14066] = 1,
    ACTIONS(2004), 1,
      sym_object_name,
  [14070] = 1,
    ACTIONS(2006), 1,
      sym__string_literal,
  [14074] = 1,
    ACTIONS(865), 1,
      aux_sym_column_not_null_token1,
  [14078] = 1,
    ACTIONS(2008), 1,
      anon_sym_LPAREN,
  [14082] = 1,
    ACTIONS(2010), 1,
      aux_sym_relation_contains_key_token2,
  [14086] = 1,
    ACTIONS(2012), 1,
      aux_sym_select_statement_token1,
  [14090] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_function_token1,
  [14094] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [14098] = 1,
    ACTIONS(2018), 1,
      aux_sym_delete_statement_token3,
  [14102] = 1,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
  [14106] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token1,
  [14110] = 1,
    ACTIONS(2024), 1,
      sym_object_name,
  [14114] = 1,
    ACTIONS(2026), 1,
      sym_object_name,
  [14118] = 1,
    ACTIONS(2028), 1,
      aux_sym_create_function_token2,
  [14122] = 1,
    ACTIONS(2030), 1,
      sym_object_name,
  [14126] = 1,
    ACTIONS(2032), 1,
      anon_sym_EQ,
  [14130] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_aggregate_token3,
  [14134] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [14138] = 1,
    ACTIONS(2038), 1,
      anon_sym_EQ,
  [14142] = 1,
    ACTIONS(2040), 1,
      anon_sym_EQ,
  [14146] = 1,
    ACTIONS(2042), 1,
      anon_sym_EQ,
  [14150] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [14154] = 1,
    ACTIONS(2046), 1,
      anon_sym_LPAREN,
  [14158] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [14162] = 1,
    ACTIONS(2050), 1,
      anon_sym_EQ,
  [14166] = 1,
    ACTIONS(2052), 1,
      anon_sym_LPAREN,
  [14170] = 1,
    ACTIONS(2054), 1,
      anon_sym_COMMA,
  [14174] = 1,
    ACTIONS(2056), 1,
      anon_sym_RPAREN,
  [14178] = 1,
    ACTIONS(2058), 1,
      anon_sym_RPAREN,
  [14182] = 1,
    ACTIONS(2060), 1,
      aux_sym_insert_statement_token3,
  [14186] = 1,
    ACTIONS(2062), 1,
      anon_sym_RPAREN,
  [14190] = 1,
    ACTIONS(2064), 1,
      aux_sym_create_function_token1,
  [14194] = 1,
    ACTIONS(2066), 1,
      anon_sym_EQ,
  [14198] = 1,
    ACTIONS(2068), 1,
      sym_object_name,
  [14202] = 1,
    ACTIONS(2070), 1,
      aux_sym_create_function_token2,
  [14206] = 1,
    ACTIONS(2072), 1,
      anon_sym_LPAREN,
  [14210] = 1,
    ACTIONS(2074), 1,
      aux_sym_select_element_token1,
  [14214] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [14218] = 1,
    ACTIONS(2078), 1,
      aux_sym_create_function_token2,
  [14222] = 1,
    ACTIONS(2080), 1,
      sym_object_name,
  [14226] = 1,
    ACTIONS(2082), 1,
      sym__code_block,
  [14230] = 1,
    ACTIONS(2084), 1,
      aux_sym_select_element_token1,
  [14234] = 1,
    ACTIONS(2086), 1,
      sym_object_name,
  [14238] = 1,
    ACTIONS(2088), 1,
      aux_sym_select_statement_token5,
  [14242] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_aggregate_token5,
  [14246] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_aggregate_token6,
  [14250] = 1,
    ACTIONS(2094), 1,
      aux_sym_update_token2,
  [14254] = 1,
    ACTIONS(2096), 1,
      aux_sym_insert_statement_token3,
  [14258] = 1,
    ACTIONS(2098), 1,
      sym_object_name,
  [14262] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [14266] = 1,
    ACTIONS(2102), 1,
      sym_object_name,
  [14270] = 1,
    ACTIONS(2104), 1,
      anon_sym_LPAREN,
  [14274] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_keyspace_token2,
  [14278] = 1,
    ACTIONS(2108), 1,
      sym_object_name,
  [14282] = 1,
    ACTIONS(2110), 1,
      aux_sym_from_spec_token1,
  [14286] = 1,
    ACTIONS(2112), 1,
      aux_sym_create_function_token1,
  [14290] = 1,
    ACTIONS(2114), 1,
      aux_sym_grant_token2,
  [14294] = 1,
    ACTIONS(2116), 1,
      aux_sym_create_function_token2,
  [14298] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [14302] = 1,
    ACTIONS(2120), 1,
      aux_sym_create_function_token1,
  [14306] = 1,
    ACTIONS(2122), 1,
      aux_sym_select_element_token1,
  [14310] = 1,
    ACTIONS(2124), 1,
      sym_object_name,
  [14314] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_function_token2,
  [14318] = 1,
    ACTIONS(2128), 1,
      anon_sym_RPAREN,
  [14322] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [14326] = 1,
    ACTIONS(2132), 1,
      aux_sym_create_aggregate_token4,
  [14330] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_aggregate_token5,
  [14334] = 1,
    ACTIONS(2136), 1,
      sym_object_name,
  [14338] = 1,
    ACTIONS(2138), 1,
      aux_sym_create_keyspace_token2,
  [14342] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [14346] = 1,
    ACTIONS(2142), 1,
      anon_sym_EQ,
  [14350] = 1,
    ACTIONS(2144), 1,
      aux_sym_create_function_token2,
  [14354] = 1,
    ACTIONS(2146), 1,
      aux_sym__decimal_literal_token1,
  [14358] = 1,
    ACTIONS(2148), 1,
      aux_sym_create_function_token1,
  [14362] = 1,
    ACTIONS(2150), 1,
      aux_sym_select_element_token1,
  [14366] = 1,
    ACTIONS(2152), 1,
      sym_object_name,
  [14370] = 1,
    ACTIONS(2154), 1,
      aux_sym_create_function_token2,
  [14374] = 1,
    ACTIONS(2156), 1,
      sym__code_block,
  [14378] = 1,
    ACTIONS(2158), 1,
      aux_sym_select_element_token1,
  [14382] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [14386] = 1,
    ACTIONS(2162), 1,
      aux_sym__decimal_literal_token1,
  [14390] = 1,
    ACTIONS(2164), 1,
      sym__code_block,
  [14394] = 1,
    ACTIONS(2166), 1,
      aux_sym_create_aggregate_token4,
  [14398] = 1,
    ACTIONS(2168), 1,
      aux_sym_create_aggregate_token5,
  [14402] = 1,
    ACTIONS(2170), 1,
      sym_object_name,
  [14406] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [14410] = 1,
    ACTIONS(2174), 1,
      aux_sym_create_materialized_view_token1,
  [14414] = 1,
    ACTIONS(2176), 1,
      aux_sym_constant_token2,
  [14418] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [14422] = 1,
    ACTIONS(2180), 1,
      aux_sym_delete_statement_token3,
  [14426] = 1,
    ACTIONS(2182), 1,
      sym_object_name,
  [14430] = 1,
    ACTIONS(2184), 1,
      sym_object_name,
  [14434] = 1,
    ACTIONS(2186), 1,
      sym_object_name,
  [14438] = 1,
    ACTIONS(2188), 1,
      aux_sym_create_function_token1,
  [14442] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [14446] = 1,
    ACTIONS(2192), 1,
      sym_object_name,
  [14450] = 1,
    ACTIONS(2194), 1,
      aux_sym_create_function_token2,
  [14454] = 1,
    ACTIONS(2196), 1,
      sym_object_name,
  [14458] = 1,
    ACTIONS(2198), 1,
      aux_sym_create_function_token1,
  [14462] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [14466] = 1,
    ACTIONS(2202), 1,
      aux_sym_create_function_token2,
  [14470] = 1,
    ACTIONS(2204), 1,
      sym_object_name,
  [14474] = 1,
    ACTIONS(2206), 1,
      sym__code_block,
  [14478] = 1,
    ACTIONS(2208), 1,
      aux_sym_select_element_token1,
  [14482] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [14486] = 1,
    ACTIONS(2212), 1,
      aux_sym_create_aggregate_token3,
  [14490] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_aggregate_token4,
  [14494] = 1,
    ACTIONS(2216), 1,
      sym_object_name,
  [14498] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [14502] = 1,
    ACTIONS(2220), 1,
      anon_sym_RPAREN,
  [14506] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [14510] = 1,
    ACTIONS(2224), 1,
      aux_sym_create_function_token2,
  [14514] = 1,
    ACTIONS(2226), 1,
      aux_sym_delete_statement_token3,
  [14518] = 1,
    ACTIONS(2228), 1,
      sym__code_block,
  [14522] = 1,
    ACTIONS(2230), 1,
      aux_sym_select_element_token1,
  [14526] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [14530] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [14534] = 1,
    ACTIONS(2236), 1,
      sym__code_block,
  [14538] = 1,
    ACTIONS(2238), 1,
      aux_sym_select_element_token1,
  [14542] = 1,
    ACTIONS(2240), 1,
      aux_sym_delete_statement_token3,
  [14546] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [14550] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [14554] = 1,
    ACTIONS(2246), 1,
      aux_sym_create_aggregate_token6,
  [14558] = 1,
    ACTIONS(2248), 1,
      aux_sym_delete_statement_token3,
  [14562] = 1,
    ACTIONS(2250), 1,
      aux_sym_select_element_token1,
  [14566] = 1,
    ACTIONS(2252), 1,
      aux_sym_insert_statement_token3,
  [14570] = 1,
    ACTIONS(2254), 1,
      aux_sym_relation_contains_key_token2,
  [14574] = 1,
    ACTIONS(2256), 1,
      sym_object_name,
  [14578] = 1,
    ACTIONS(2258), 1,
      aux_sym_delete_statement_token3,
  [14582] = 1,
    ACTIONS(2260), 1,
      anon_sym_RPAREN,
  [14586] = 1,
    ACTIONS(2262), 1,
      aux_sym_delete_statement_token3,
  [14590] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_function_token1,
  [14594] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [14598] = 1,
    ACTIONS(2268), 1,
      sym_object_name,
  [14602] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_function_token2,
  [14606] = 1,
    ACTIONS(2272), 1,
      aux_sym_delete_statement_token3,
  [14610] = 1,
    ACTIONS(2274), 1,
      aux_sym_select_element_token1,
  [14614] = 1,
    ACTIONS(2276), 1,
      sym_object_name,
  [14618] = 1,
    ACTIONS(2278), 1,
      aux_sym_create_function_token2,
  [14622] = 1,
    ACTIONS(2280), 1,
      aux_sym_delete_statement_token3,
  [14626] = 1,
    ACTIONS(2282), 1,
      sym__code_block,
  [14630] = 1,
    ACTIONS(2284), 1,
      aux_sym_select_element_token1,
  [14634] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [14638] = 1,
    ACTIONS(2288), 1,
      aux_sym_delete_statement_token3,
  [14642] = 1,
    ACTIONS(2290), 1,
      aux_sym_create_aggregate_token5,
  [14646] = 1,
    ACTIONS(2292), 1,
      aux_sym_create_aggregate_token6,
  [14650] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_element_token1,
  [14654] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [14658] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_function_token2,
  [14662] = 1,
    ACTIONS(2300), 1,
      anon_sym_LPAREN,
  [14666] = 1,
    ACTIONS(2302), 1,
      sym__code_block,
  [14670] = 1,
    ACTIONS(2304), 1,
      aux_sym_select_element_token1,
  [14674] = 1,
    ACTIONS(2306), 1,
      aux_sym_delete_statement_token3,
  [14678] = 1,
    ACTIONS(2308), 1,
      sym__code_block,
  [14682] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_aggregate_token5,
  [14686] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_aggregate_token6,
  [14690] = 1,
    ACTIONS(2314), 1,
      aux_sym_delete_statement_token3,
  [14694] = 1,
    ACTIONS(2316), 1,
      anon_sym_LPAREN,
  [14698] = 1,
    ACTIONS(2318), 1,
      anon_sym_COLON,
  [14702] = 1,
    ACTIONS(2320), 1,
      aux_sym__decimal_literal_token1,
  [14706] = 1,
    ACTIONS(2322), 1,
      sym_object_name,
  [14710] = 1,
    ACTIONS(2324), 1,
      anon_sym_RBRACK,
  [14714] = 1,
    ACTIONS(2326), 1,
      anon_sym_LPAREN,
  [14718] = 1,
    ACTIONS(2328), 1,
      aux_sym_order_spec_token2,
  [14722] = 1,
    ACTIONS(2330), 1,
      aux_sym_create_function_token2,
  [14726] = 1,
    ACTIONS(2332), 1,
      aux_sym_select_statement_token5,
  [14730] = 1,
    ACTIONS(2334), 1,
      aux_sym_create_function_token1,
  [14734] = 1,
    ACTIONS(2336), 1,
      aux_sym_select_element_token1,
  [14738] = 1,
    ACTIONS(2338), 1,
      sym_object_name,
  [14742] = 1,
    ACTIONS(2340), 1,
      aux_sym_create_function_token2,
  [14746] = 1,
    ACTIONS(2342), 1,
      sym__code_block,
  [14750] = 1,
    ACTIONS(2344), 1,
      aux_sym_select_element_token1,
  [14754] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [14758] = 1,
    ACTIONS(2348), 1,
      anon_sym_RPAREN,
  [14762] = 1,
    ACTIONS(2350), 1,
      sym__code_block,
  [14766] = 1,
    ACTIONS(2352), 1,
      aux_sym_create_aggregate_token4,
  [14770] = 1,
    ACTIONS(2354), 1,
      aux_sym_create_aggregate_token5,
  [14774] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [14778] = 1,
    ACTIONS(2358), 1,
      sym_object_name,
  [14782] = 1,
    ACTIONS(2360), 1,
      sym__code_block,
  [14786] = 1,
    ACTIONS(2362), 1,
      aux_sym_select_element_token1,
  [14790] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [14794] = 1,
    ACTIONS(2366), 1,
      sym_object_name,
  [14798] = 1,
    ACTIONS(2368), 1,
      sym__code_block,
  [14802] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [14806] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [14810] = 1,
    ACTIONS(2374), 1,
      aux_sym_create_keyspace_token1,
  [14814] = 1,
    ACTIONS(2376), 1,
      aux_sym_update_token2,
  [14818] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [14822] = 1,
    ACTIONS(2380), 1,
      aux_sym_delete_statement_token3,
  [14826] = 1,
    ACTIONS(2382), 1,
      aux_sym_delete_statement_token3,
  [14830] = 1,
    ACTIONS(2384), 1,
      aux_sym_create_index_token3,
  [14834] = 1,
    ACTIONS(2386), 1,
      aux_sym_delete_statement_token3,
  [14838] = 1,
    ACTIONS(2388), 1,
      aux_sym_delete_statement_token3,
  [14842] = 1,
    ACTIONS(2390), 1,
      aux_sym_delete_statement_token3,
  [14846] = 1,
    ACTIONS(2392), 1,
      aux_sym_insert_statement_token2,
  [14850] = 1,
    ACTIONS(2394), 1,
      aux_sym_delete_statement_token3,
  [14854] = 1,
    ACTIONS(2396), 1,
      aux_sym_delete_statement_token3,
  [14858] = 1,
    ACTIONS(2398), 1,
      aux_sym_delete_statement_token3,
  [14862] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [14866] = 1,
    ACTIONS(2402), 1,
      aux_sym_create_function_token2,
  [14870] = 1,
    ACTIONS(2404), 1,
      aux_sym_insert_statement_token3,
  [14874] = 1,
    ACTIONS(2406), 1,
      sym__code_block,
  [14878] = 1,
    ACTIONS(2408), 1,
      aux_sym_select_element_token1,
  [14882] = 1,
    ACTIONS(2410), 1,
      sym_object_name,
  [14886] = 1,
    ACTIONS(2412), 1,
      anon_sym_LPAREN,
  [14890] = 1,
    ACTIONS(2414), 1,
      sym__code_block,
  [14894] = 1,
    ACTIONS(2416), 1,
      aux_sym_select_element_token1,
  [14898] = 1,
    ACTIONS(2418), 1,
      aux_sym_insert_statement_token3,
  [14902] = 1,
    ACTIONS(2420), 1,
      aux_sym_using_timestamp_spec_token1,
  [14906] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [14910] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_aggregate_token6,
  [14914] = 1,
    ACTIONS(2426), 1,
      aux_sym_insert_statement_token3,
  [14918] = 1,
    ACTIONS(2428), 1,
      aux_sym_insert_statement_token3,
  [14922] = 1,
    ACTIONS(2430), 1,
      sym__code_block,
  [14926] = 1,
    ACTIONS(2432), 1,
      aux_sym_select_element_token1,
  [14930] = 1,
    ACTIONS(2434), 1,
      aux_sym_insert_statement_token3,
  [14934] = 1,
    ACTIONS(2436), 1,
      aux_sym_create_aggregate_token6,
  [14938] = 1,
    ACTIONS(2438), 1,
      aux_sym_insert_statement_token3,
  [14942] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_keyspace_token1,
  [14946] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_keyspace_token1,
  [14950] = 1,
    ACTIONS(2444), 1,
      aux_sym_insert_statement_token3,
  [14954] = 1,
    ACTIONS(2446), 1,
      aux_sym_create_index_token3,
  [14958] = 1,
    ACTIONS(2448), 1,
      aux_sym_insert_statement_token3,
  [14962] = 1,
    ACTIONS(2450), 1,
      aux_sym_create_index_token3,
  [14966] = 1,
    ACTIONS(2452), 1,
      anon_sym_LPAREN,
  [14970] = 1,
    ACTIONS(2454), 1,
      aux_sym_insert_statement_token3,
  [14974] = 1,
    ACTIONS(2456), 1,
      anon_sym_RPAREN,
  [14978] = 1,
    ACTIONS(2458), 1,
      aux_sym_select_element_token1,
  [14982] = 1,
    ACTIONS(2460), 1,
      sym_object_name,
  [14986] = 1,
    ACTIONS(2462), 1,
      aux_sym_create_function_token2,
  [14990] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [14994] = 1,
    ACTIONS(2466), 1,
      sym__code_block,
  [14998] = 1,
    ACTIONS(2468), 1,
      aux_sym_select_element_token1,
  [15002] = 1,
    ACTIONS(2470), 1,
      aux_sym_using_timestamp_spec_token2,
  [15006] = 1,
    ACTIONS(2472), 1,
      sym__code_block,
  [15010] = 1,
    ACTIONS(2474), 1,
      aux_sym_create_aggregate_token5,
  [15014] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_aggregate_token6,
  [15018] = 1,
    ACTIONS(2478), 1,
      sym_object_name,
  [15022] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [15026] = 1,
    ACTIONS(2482), 1,
      sym__code_block,
  [15030] = 1,
    ACTIONS(2484), 1,
      anon_sym_STAR,
  [15034] = 1,
    ACTIONS(2486), 1,
      sym_object_name,
  [15038] = 1,
    ACTIONS(2488), 1,
      sym__code_block,
  [15042] = 1,
    ACTIONS(2490), 1,
      aux_sym_select_element_token1,
  [15046] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [15050] = 1,
    ACTIONS(2494), 1,
      aux_sym_insert_statement_token2,
  [15054] = 1,
    ACTIONS(2496), 1,
      sym__code_block,
  [15058] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [15062] = 1,
    ACTIONS(2500), 1,
      sym_object_name,
  [15066] = 1,
    ACTIONS(2502), 1,
      aux_sym_drop_materialized_view_token2,
  [15070] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [15074] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_index_token3,
  [15078] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_index_token3,
  [15082] = 1,
    ACTIONS(2510), 1,
      aux_sym_drop_materialized_view_token2,
  [15086] = 1,
    ACTIONS(2512), 1,
      aux_sym_create_aggregate_token2,
  [15090] = 1,
    ACTIONS(2514), 1,
      sym__code_block,
  [15094] = 1,
    ACTIONS(2516), 1,
      aux_sym_select_element_token1,
  [15098] = 1,
    ACTIONS(2518), 1,
      aux_sym_drop_materialized_view_token2,
  [15102] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_aggregate_token6,
  [15106] = 1,
    ACTIONS(2522), 1,
      aux_sym_begin_batch_token4,
  [15110] = 1,
    ACTIONS(2524), 1,
      ts_builtin_sym_end,
  [15114] = 1,
    ACTIONS(2526), 1,
      sym__code_block,
  [15118] = 1,
    ACTIONS(2528), 1,
      aux_sym_begin_batch_token4,
  [15122] = 1,
    ACTIONS(2530), 1,
      sym_object_name,
  [15126] = 1,
    ACTIONS(2532), 1,
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
  [SMALL_STATE(52)] = 1853,
  [SMALL_STATE(53)] = 1885,
  [SMALL_STATE(54)] = 1917,
  [SMALL_STATE(55)] = 1949,
  [SMALL_STATE(56)] = 1976,
  [SMALL_STATE(57)] = 2007,
  [SMALL_STATE(58)] = 2038,
  [SMALL_STATE(59)] = 2069,
  [SMALL_STATE(60)] = 2096,
  [SMALL_STATE(61)] = 2127,
  [SMALL_STATE(62)] = 2167,
  [SMALL_STATE(63)] = 2207,
  [SMALL_STATE(64)] = 2247,
  [SMALL_STATE(65)] = 2277,
  [SMALL_STATE(66)] = 2303,
  [SMALL_STATE(67)] = 2333,
  [SMALL_STATE(68)] = 2358,
  [SMALL_STATE(69)] = 2383,
  [SMALL_STATE(70)] = 2412,
  [SMALL_STATE(71)] = 2437,
  [SMALL_STATE(72)] = 2462,
  [SMALL_STATE(73)] = 2487,
  [SMALL_STATE(74)] = 2512,
  [SMALL_STATE(75)] = 2537,
  [SMALL_STATE(76)] = 2566,
  [SMALL_STATE(77)] = 2591,
  [SMALL_STATE(78)] = 2616,
  [SMALL_STATE(79)] = 2641,
  [SMALL_STATE(80)] = 2675,
  [SMALL_STATE(81)] = 2699,
  [SMALL_STATE(82)] = 2723,
  [SMALL_STATE(83)] = 2757,
  [SMALL_STATE(84)] = 2781,
  [SMALL_STATE(85)] = 2815,
  [SMALL_STATE(86)] = 2839,
  [SMALL_STATE(87)] = 2862,
  [SMALL_STATE(88)] = 2887,
  [SMALL_STATE(89)] = 2912,
  [SMALL_STATE(90)] = 2937,
  [SMALL_STATE(91)] = 2962,
  [SMALL_STATE(92)] = 2987,
  [SMALL_STATE(93)] = 3009,
  [SMALL_STATE(94)] = 3035,
  [SMALL_STATE(95)] = 3073,
  [SMALL_STATE(96)] = 3095,
  [SMALL_STATE(97)] = 3123,
  [SMALL_STATE(98)] = 3145,
  [SMALL_STATE(99)] = 3183,
  [SMALL_STATE(100)] = 3211,
  [SMALL_STATE(101)] = 3239,
  [SMALL_STATE(102)] = 3261,
  [SMALL_STATE(103)] = 3289,
  [SMALL_STATE(104)] = 3317,
  [SMALL_STATE(105)] = 3339,
  [SMALL_STATE(106)] = 3365,
  [SMALL_STATE(107)] = 3393,
  [SMALL_STATE(108)] = 3419,
  [SMALL_STATE(109)] = 3447,
  [SMALL_STATE(110)] = 3469,
  [SMALL_STATE(111)] = 3493,
  [SMALL_STATE(112)] = 3515,
  [SMALL_STATE(113)] = 3540,
  [SMALL_STATE(114)] = 3565,
  [SMALL_STATE(115)] = 3590,
  [SMALL_STATE(116)] = 3615,
  [SMALL_STATE(117)] = 3640,
  [SMALL_STATE(118)] = 3665,
  [SMALL_STATE(119)] = 3690,
  [SMALL_STATE(120)] = 3715,
  [SMALL_STATE(121)] = 3740,
  [SMALL_STATE(122)] = 3765,
  [SMALL_STATE(123)] = 3788,
  [SMALL_STATE(124)] = 3811,
  [SMALL_STATE(125)] = 3836,
  [SMALL_STATE(126)] = 3857,
  [SMALL_STATE(127)] = 3882,
  [SMALL_STATE(128)] = 3907,
  [SMALL_STATE(129)] = 3932,
  [SMALL_STATE(130)] = 3957,
  [SMALL_STATE(131)] = 3982,
  [SMALL_STATE(132)] = 4007,
  [SMALL_STATE(133)] = 4028,
  [SMALL_STATE(134)] = 4053,
  [SMALL_STATE(135)] = 4074,
  [SMALL_STATE(136)] = 4099,
  [SMALL_STATE(137)] = 4124,
  [SMALL_STATE(138)] = 4149,
  [SMALL_STATE(139)] = 4170,
  [SMALL_STATE(140)] = 4195,
  [SMALL_STATE(141)] = 4220,
  [SMALL_STATE(142)] = 4241,
  [SMALL_STATE(143)] = 4262,
  [SMALL_STATE(144)] = 4283,
  [SMALL_STATE(145)] = 4308,
  [SMALL_STATE(146)] = 4333,
  [SMALL_STATE(147)] = 4358,
  [SMALL_STATE(148)] = 4383,
  [SMALL_STATE(149)] = 4408,
  [SMALL_STATE(150)] = 4433,
  [SMALL_STATE(151)] = 4454,
  [SMALL_STATE(152)] = 4475,
  [SMALL_STATE(153)] = 4500,
  [SMALL_STATE(154)] = 4525,
  [SMALL_STATE(155)] = 4550,
  [SMALL_STATE(156)] = 4575,
  [SMALL_STATE(157)] = 4600,
  [SMALL_STATE(158)] = 4625,
  [SMALL_STATE(159)] = 4650,
  [SMALL_STATE(160)] = 4675,
  [SMALL_STATE(161)] = 4696,
  [SMALL_STATE(162)] = 4721,
  [SMALL_STATE(163)] = 4746,
  [SMALL_STATE(164)] = 4771,
  [SMALL_STATE(165)] = 4792,
  [SMALL_STATE(166)] = 4813,
  [SMALL_STATE(167)] = 4834,
  [SMALL_STATE(168)] = 4855,
  [SMALL_STATE(169)] = 4880,
  [SMALL_STATE(170)] = 4915,
  [SMALL_STATE(171)] = 4936,
  [SMALL_STATE(172)] = 4957,
  [SMALL_STATE(173)] = 4982,
  [SMALL_STATE(174)] = 5007,
  [SMALL_STATE(175)] = 5032,
  [SMALL_STATE(176)] = 5057,
  [SMALL_STATE(177)] = 5082,
  [SMALL_STATE(178)] = 5107,
  [SMALL_STATE(179)] = 5129,
  [SMALL_STATE(180)] = 5151,
  [SMALL_STATE(181)] = 5173,
  [SMALL_STATE(182)] = 5195,
  [SMALL_STATE(183)] = 5215,
  [SMALL_STATE(184)] = 5235,
  [SMALL_STATE(185)] = 5255,
  [SMALL_STATE(186)] = 5277,
  [SMALL_STATE(187)] = 5297,
  [SMALL_STATE(188)] = 5319,
  [SMALL_STATE(189)] = 5339,
  [SMALL_STATE(190)] = 5359,
  [SMALL_STATE(191)] = 5381,
  [SMALL_STATE(192)] = 5401,
  [SMALL_STATE(193)] = 5421,
  [SMALL_STATE(194)] = 5441,
  [SMALL_STATE(195)] = 5461,
  [SMALL_STATE(196)] = 5481,
  [SMALL_STATE(197)] = 5501,
  [SMALL_STATE(198)] = 5521,
  [SMALL_STATE(199)] = 5543,
  [SMALL_STATE(200)] = 5563,
  [SMALL_STATE(201)] = 5583,
  [SMALL_STATE(202)] = 5605,
  [SMALL_STATE(203)] = 5627,
  [SMALL_STATE(204)] = 5647,
  [SMALL_STATE(205)] = 5667,
  [SMALL_STATE(206)] = 5689,
  [SMALL_STATE(207)] = 5711,
  [SMALL_STATE(208)] = 5733,
  [SMALL_STATE(209)] = 5755,
  [SMALL_STATE(210)] = 5777,
  [SMALL_STATE(211)] = 5797,
  [SMALL_STATE(212)] = 5819,
  [SMALL_STATE(213)] = 5839,
  [SMALL_STATE(214)] = 5861,
  [SMALL_STATE(215)] = 5881,
  [SMALL_STATE(216)] = 5903,
  [SMALL_STATE(217)] = 5925,
  [SMALL_STATE(218)] = 5947,
  [SMALL_STATE(219)] = 5969,
  [SMALL_STATE(220)] = 5989,
  [SMALL_STATE(221)] = 6011,
  [SMALL_STATE(222)] = 6033,
  [SMALL_STATE(223)] = 6053,
  [SMALL_STATE(224)] = 6073,
  [SMALL_STATE(225)] = 6092,
  [SMALL_STATE(226)] = 6111,
  [SMALL_STATE(227)] = 6130,
  [SMALL_STATE(228)] = 6149,
  [SMALL_STATE(229)] = 6168,
  [SMALL_STATE(230)] = 6187,
  [SMALL_STATE(231)] = 6206,
  [SMALL_STATE(232)] = 6225,
  [SMALL_STATE(233)] = 6244,
  [SMALL_STATE(234)] = 6263,
  [SMALL_STATE(235)] = 6282,
  [SMALL_STATE(236)] = 6301,
  [SMALL_STATE(237)] = 6320,
  [SMALL_STATE(238)] = 6339,
  [SMALL_STATE(239)] = 6358,
  [SMALL_STATE(240)] = 6377,
  [SMALL_STATE(241)] = 6396,
  [SMALL_STATE(242)] = 6415,
  [SMALL_STATE(243)] = 6434,
  [SMALL_STATE(244)] = 6453,
  [SMALL_STATE(245)] = 6472,
  [SMALL_STATE(246)] = 6491,
  [SMALL_STATE(247)] = 6510,
  [SMALL_STATE(248)] = 6529,
  [SMALL_STATE(249)] = 6548,
  [SMALL_STATE(250)] = 6567,
  [SMALL_STATE(251)] = 6586,
  [SMALL_STATE(252)] = 6605,
  [SMALL_STATE(253)] = 6624,
  [SMALL_STATE(254)] = 6643,
  [SMALL_STATE(255)] = 6662,
  [SMALL_STATE(256)] = 6681,
  [SMALL_STATE(257)] = 6700,
  [SMALL_STATE(258)] = 6719,
  [SMALL_STATE(259)] = 6738,
  [SMALL_STATE(260)] = 6757,
  [SMALL_STATE(261)] = 6776,
  [SMALL_STATE(262)] = 6795,
  [SMALL_STATE(263)] = 6814,
  [SMALL_STATE(264)] = 6833,
  [SMALL_STATE(265)] = 6852,
  [SMALL_STATE(266)] = 6871,
  [SMALL_STATE(267)] = 6890,
  [SMALL_STATE(268)] = 6909,
  [SMALL_STATE(269)] = 6928,
  [SMALL_STATE(270)] = 6947,
  [SMALL_STATE(271)] = 6966,
  [SMALL_STATE(272)] = 6985,
  [SMALL_STATE(273)] = 7004,
  [SMALL_STATE(274)] = 7023,
  [SMALL_STATE(275)] = 7042,
  [SMALL_STATE(276)] = 7061,
  [SMALL_STATE(277)] = 7080,
  [SMALL_STATE(278)] = 7099,
  [SMALL_STATE(279)] = 7118,
  [SMALL_STATE(280)] = 7137,
  [SMALL_STATE(281)] = 7156,
  [SMALL_STATE(282)] = 7175,
  [SMALL_STATE(283)] = 7194,
  [SMALL_STATE(284)] = 7213,
  [SMALL_STATE(285)] = 7232,
  [SMALL_STATE(286)] = 7251,
  [SMALL_STATE(287)] = 7270,
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
  [SMALL_STATE(307)] = 7666,
  [SMALL_STATE(308)] = 7685,
  [SMALL_STATE(309)] = 7704,
  [SMALL_STATE(310)] = 7723,
  [SMALL_STATE(311)] = 7742,
  [SMALL_STATE(312)] = 7761,
  [SMALL_STATE(313)] = 7780,
  [SMALL_STATE(314)] = 7799,
  [SMALL_STATE(315)] = 7818,
  [SMALL_STATE(316)] = 7837,
  [SMALL_STATE(317)] = 7856,
  [SMALL_STATE(318)] = 7875,
  [SMALL_STATE(319)] = 7894,
  [SMALL_STATE(320)] = 7913,
  [SMALL_STATE(321)] = 7932,
  [SMALL_STATE(322)] = 7951,
  [SMALL_STATE(323)] = 7970,
  [SMALL_STATE(324)] = 7989,
  [SMALL_STATE(325)] = 8008,
  [SMALL_STATE(326)] = 8027,
  [SMALL_STATE(327)] = 8046,
  [SMALL_STATE(328)] = 8065,
  [SMALL_STATE(329)] = 8084,
  [SMALL_STATE(330)] = 8103,
  [SMALL_STATE(331)] = 8122,
  [SMALL_STATE(332)] = 8141,
  [SMALL_STATE(333)] = 8160,
  [SMALL_STATE(334)] = 8179,
  [SMALL_STATE(335)] = 8198,
  [SMALL_STATE(336)] = 8217,
  [SMALL_STATE(337)] = 8236,
  [SMALL_STATE(338)] = 8255,
  [SMALL_STATE(339)] = 8274,
  [SMALL_STATE(340)] = 8293,
  [SMALL_STATE(341)] = 8312,
  [SMALL_STATE(342)] = 8331,
  [SMALL_STATE(343)] = 8350,
  [SMALL_STATE(344)] = 8369,
  [SMALL_STATE(345)] = 8388,
  [SMALL_STATE(346)] = 8407,
  [SMALL_STATE(347)] = 8426,
  [SMALL_STATE(348)] = 8445,
  [SMALL_STATE(349)] = 8464,
  [SMALL_STATE(350)] = 8483,
  [SMALL_STATE(351)] = 8502,
  [SMALL_STATE(352)] = 8521,
  [SMALL_STATE(353)] = 8540,
  [SMALL_STATE(354)] = 8559,
  [SMALL_STATE(355)] = 8578,
  [SMALL_STATE(356)] = 8597,
  [SMALL_STATE(357)] = 8616,
  [SMALL_STATE(358)] = 8635,
  [SMALL_STATE(359)] = 8654,
  [SMALL_STATE(360)] = 8673,
  [SMALL_STATE(361)] = 8694,
  [SMALL_STATE(362)] = 8713,
  [SMALL_STATE(363)] = 8732,
  [SMALL_STATE(364)] = 8751,
  [SMALL_STATE(365)] = 8779,
  [SMALL_STATE(366)] = 8807,
  [SMALL_STATE(367)] = 8835,
  [SMALL_STATE(368)] = 8853,
  [SMALL_STATE(369)] = 8881,
  [SMALL_STATE(370)] = 8909,
  [SMALL_STATE(371)] = 8937,
  [SMALL_STATE(372)] = 8965,
  [SMALL_STATE(373)] = 8993,
  [SMALL_STATE(374)] = 9021,
  [SMALL_STATE(375)] = 9054,
  [SMALL_STATE(376)] = 9085,
  [SMALL_STATE(377)] = 9113,
  [SMALL_STATE(378)] = 9136,
  [SMALL_STATE(379)] = 9161,
  [SMALL_STATE(380)] = 9186,
  [SMALL_STATE(381)] = 9208,
  [SMALL_STATE(382)] = 9228,
  [SMALL_STATE(383)] = 9262,
  [SMALL_STATE(384)] = 9284,
  [SMALL_STATE(385)] = 9303,
  [SMALL_STATE(386)] = 9326,
  [SMALL_STATE(387)] = 9345,
  [SMALL_STATE(388)] = 9362,
  [SMALL_STATE(389)] = 9385,
  [SMALL_STATE(390)] = 9404,
  [SMALL_STATE(391)] = 9423,
  [SMALL_STATE(392)] = 9442,
  [SMALL_STATE(393)] = 9461,
  [SMALL_STATE(394)] = 9480,
  [SMALL_STATE(395)] = 9499,
  [SMALL_STATE(396)] = 9516,
  [SMALL_STATE(397)] = 9535,
  [SMALL_STATE(398)] = 9554,
  [SMALL_STATE(399)] = 9585,
  [SMALL_STATE(400)] = 9604,
  [SMALL_STATE(401)] = 9624,
  [SMALL_STATE(402)] = 9645,
  [SMALL_STATE(403)] = 9666,
  [SMALL_STATE(404)] = 9687,
  [SMALL_STATE(405)] = 9708,
  [SMALL_STATE(406)] = 9729,
  [SMALL_STATE(407)] = 9750,
  [SMALL_STATE(408)] = 9771,
  [SMALL_STATE(409)] = 9792,
  [SMALL_STATE(410)] = 9813,
  [SMALL_STATE(411)] = 9827,
  [SMALL_STATE(412)] = 9845,
  [SMALL_STATE(413)] = 9863,
  [SMALL_STATE(414)] = 9883,
  [SMALL_STATE(415)] = 9897,
  [SMALL_STATE(416)] = 9919,
  [SMALL_STATE(417)] = 9941,
  [SMALL_STATE(418)] = 9963,
  [SMALL_STATE(419)] = 9981,
  [SMALL_STATE(420)] = 10001,
  [SMALL_STATE(421)] = 10023,
  [SMALL_STATE(422)] = 10034,
  [SMALL_STATE(423)] = 10053,
  [SMALL_STATE(424)] = 10072,
  [SMALL_STATE(425)] = 10089,
  [SMALL_STATE(426)] = 10103,
  [SMALL_STATE(427)] = 10119,
  [SMALL_STATE(428)] = 10131,
  [SMALL_STATE(429)] = 10147,
  [SMALL_STATE(430)] = 10163,
  [SMALL_STATE(431)] = 10177,
  [SMALL_STATE(432)] = 10185,
  [SMALL_STATE(433)] = 10193,
  [SMALL_STATE(434)] = 10201,
  [SMALL_STATE(435)] = 10217,
  [SMALL_STATE(436)] = 10229,
  [SMALL_STATE(437)] = 10245,
  [SMALL_STATE(438)] = 10253,
  [SMALL_STATE(439)] = 10261,
  [SMALL_STATE(440)] = 10269,
  [SMALL_STATE(441)] = 10281,
  [SMALL_STATE(442)] = 10297,
  [SMALL_STATE(443)] = 10305,
  [SMALL_STATE(444)] = 10321,
  [SMALL_STATE(445)] = 10333,
  [SMALL_STATE(446)] = 10349,
  [SMALL_STATE(447)] = 10365,
  [SMALL_STATE(448)] = 10378,
  [SMALL_STATE(449)] = 10391,
  [SMALL_STATE(450)] = 10404,
  [SMALL_STATE(451)] = 10417,
  [SMALL_STATE(452)] = 10430,
  [SMALL_STATE(453)] = 10443,
  [SMALL_STATE(454)] = 10452,
  [SMALL_STATE(455)] = 10465,
  [SMALL_STATE(456)] = 10478,
  [SMALL_STATE(457)] = 10489,
  [SMALL_STATE(458)] = 10502,
  [SMALL_STATE(459)] = 10515,
  [SMALL_STATE(460)] = 10528,
  [SMALL_STATE(461)] = 10541,
  [SMALL_STATE(462)] = 10554,
  [SMALL_STATE(463)] = 10567,
  [SMALL_STATE(464)] = 10580,
  [SMALL_STATE(465)] = 10593,
  [SMALL_STATE(466)] = 10606,
  [SMALL_STATE(467)] = 10619,
  [SMALL_STATE(468)] = 10632,
  [SMALL_STATE(469)] = 10643,
  [SMALL_STATE(470)] = 10656,
  [SMALL_STATE(471)] = 10669,
  [SMALL_STATE(472)] = 10682,
  [SMALL_STATE(473)] = 10695,
  [SMALL_STATE(474)] = 10708,
  [SMALL_STATE(475)] = 10719,
  [SMALL_STATE(476)] = 10732,
  [SMALL_STATE(477)] = 10745,
  [SMALL_STATE(478)] = 10758,
  [SMALL_STATE(479)] = 10769,
  [SMALL_STATE(480)] = 10782,
  [SMALL_STATE(481)] = 10795,
  [SMALL_STATE(482)] = 10802,
  [SMALL_STATE(483)] = 10815,
  [SMALL_STATE(484)] = 10828,
  [SMALL_STATE(485)] = 10841,
  [SMALL_STATE(486)] = 10854,
  [SMALL_STATE(487)] = 10867,
  [SMALL_STATE(488)] = 10880,
  [SMALL_STATE(489)] = 10893,
  [SMALL_STATE(490)] = 10906,
  [SMALL_STATE(491)] = 10919,
  [SMALL_STATE(492)] = 10932,
  [SMALL_STATE(493)] = 10945,
  [SMALL_STATE(494)] = 10952,
  [SMALL_STATE(495)] = 10965,
  [SMALL_STATE(496)] = 10978,
  [SMALL_STATE(497)] = 10991,
  [SMALL_STATE(498)] = 11004,
  [SMALL_STATE(499)] = 11014,
  [SMALL_STATE(500)] = 11024,
  [SMALL_STATE(501)] = 11034,
  [SMALL_STATE(502)] = 11044,
  [SMALL_STATE(503)] = 11054,
  [SMALL_STATE(504)] = 11064,
  [SMALL_STATE(505)] = 11074,
  [SMALL_STATE(506)] = 11082,
  [SMALL_STATE(507)] = 11092,
  [SMALL_STATE(508)] = 11102,
  [SMALL_STATE(509)] = 11112,
  [SMALL_STATE(510)] = 11122,
  [SMALL_STATE(511)] = 11132,
  [SMALL_STATE(512)] = 11142,
  [SMALL_STATE(513)] = 11152,
  [SMALL_STATE(514)] = 11162,
  [SMALL_STATE(515)] = 11172,
  [SMALL_STATE(516)] = 11182,
  [SMALL_STATE(517)] = 11192,
  [SMALL_STATE(518)] = 11202,
  [SMALL_STATE(519)] = 11212,
  [SMALL_STATE(520)] = 11222,
  [SMALL_STATE(521)] = 11232,
  [SMALL_STATE(522)] = 11242,
  [SMALL_STATE(523)] = 11252,
  [SMALL_STATE(524)] = 11262,
  [SMALL_STATE(525)] = 11272,
  [SMALL_STATE(526)] = 11282,
  [SMALL_STATE(527)] = 11292,
  [SMALL_STATE(528)] = 11302,
  [SMALL_STATE(529)] = 11312,
  [SMALL_STATE(530)] = 11320,
  [SMALL_STATE(531)] = 11330,
  [SMALL_STATE(532)] = 11340,
  [SMALL_STATE(533)] = 11348,
  [SMALL_STATE(534)] = 11358,
  [SMALL_STATE(535)] = 11366,
  [SMALL_STATE(536)] = 11376,
  [SMALL_STATE(537)] = 11386,
  [SMALL_STATE(538)] = 11394,
  [SMALL_STATE(539)] = 11404,
  [SMALL_STATE(540)] = 11414,
  [SMALL_STATE(541)] = 11424,
  [SMALL_STATE(542)] = 11434,
  [SMALL_STATE(543)] = 11444,
  [SMALL_STATE(544)] = 11454,
  [SMALL_STATE(545)] = 11464,
  [SMALL_STATE(546)] = 11474,
  [SMALL_STATE(547)] = 11484,
  [SMALL_STATE(548)] = 11494,
  [SMALL_STATE(549)] = 11504,
  [SMALL_STATE(550)] = 11514,
  [SMALL_STATE(551)] = 11524,
  [SMALL_STATE(552)] = 11534,
  [SMALL_STATE(553)] = 11544,
  [SMALL_STATE(554)] = 11554,
  [SMALL_STATE(555)] = 11564,
  [SMALL_STATE(556)] = 11574,
  [SMALL_STATE(557)] = 11584,
  [SMALL_STATE(558)] = 11594,
  [SMALL_STATE(559)] = 11604,
  [SMALL_STATE(560)] = 11614,
  [SMALL_STATE(561)] = 11624,
  [SMALL_STATE(562)] = 11634,
  [SMALL_STATE(563)] = 11644,
  [SMALL_STATE(564)] = 11654,
  [SMALL_STATE(565)] = 11664,
  [SMALL_STATE(566)] = 11674,
  [SMALL_STATE(567)] = 11684,
  [SMALL_STATE(568)] = 11694,
  [SMALL_STATE(569)] = 11704,
  [SMALL_STATE(570)] = 11714,
  [SMALL_STATE(571)] = 11724,
  [SMALL_STATE(572)] = 11734,
  [SMALL_STATE(573)] = 11744,
  [SMALL_STATE(574)] = 11754,
  [SMALL_STATE(575)] = 11764,
  [SMALL_STATE(576)] = 11774,
  [SMALL_STATE(577)] = 11784,
  [SMALL_STATE(578)] = 11792,
  [SMALL_STATE(579)] = 11802,
  [SMALL_STATE(580)] = 11812,
  [SMALL_STATE(581)] = 11822,
  [SMALL_STATE(582)] = 11828,
  [SMALL_STATE(583)] = 11838,
  [SMALL_STATE(584)] = 11848,
  [SMALL_STATE(585)] = 11858,
  [SMALL_STATE(586)] = 11868,
  [SMALL_STATE(587)] = 11874,
  [SMALL_STATE(588)] = 11884,
  [SMALL_STATE(589)] = 11894,
  [SMALL_STATE(590)] = 11904,
  [SMALL_STATE(591)] = 11914,
  [SMALL_STATE(592)] = 11924,
  [SMALL_STATE(593)] = 11934,
  [SMALL_STATE(594)] = 11944,
  [SMALL_STATE(595)] = 11954,
  [SMALL_STATE(596)] = 11964,
  [SMALL_STATE(597)] = 11974,
  [SMALL_STATE(598)] = 11984,
  [SMALL_STATE(599)] = 11994,
  [SMALL_STATE(600)] = 12004,
  [SMALL_STATE(601)] = 12014,
  [SMALL_STATE(602)] = 12024,
  [SMALL_STATE(603)] = 12034,
  [SMALL_STATE(604)] = 12044,
  [SMALL_STATE(605)] = 12054,
  [SMALL_STATE(606)] = 12064,
  [SMALL_STATE(607)] = 12074,
  [SMALL_STATE(608)] = 12080,
  [SMALL_STATE(609)] = 12090,
  [SMALL_STATE(610)] = 12100,
  [SMALL_STATE(611)] = 12110,
  [SMALL_STATE(612)] = 12120,
  [SMALL_STATE(613)] = 12130,
  [SMALL_STATE(614)] = 12140,
  [SMALL_STATE(615)] = 12150,
  [SMALL_STATE(616)] = 12160,
  [SMALL_STATE(617)] = 12170,
  [SMALL_STATE(618)] = 12180,
  [SMALL_STATE(619)] = 12190,
  [SMALL_STATE(620)] = 12200,
  [SMALL_STATE(621)] = 12210,
  [SMALL_STATE(622)] = 12220,
  [SMALL_STATE(623)] = 12230,
  [SMALL_STATE(624)] = 12240,
  [SMALL_STATE(625)] = 12250,
  [SMALL_STATE(626)] = 12260,
  [SMALL_STATE(627)] = 12270,
  [SMALL_STATE(628)] = 12280,
  [SMALL_STATE(629)] = 12290,
  [SMALL_STATE(630)] = 12298,
  [SMALL_STATE(631)] = 12308,
  [SMALL_STATE(632)] = 12318,
  [SMALL_STATE(633)] = 12328,
  [SMALL_STATE(634)] = 12338,
  [SMALL_STATE(635)] = 12348,
  [SMALL_STATE(636)] = 12358,
  [SMALL_STATE(637)] = 12368,
  [SMALL_STATE(638)] = 12378,
  [SMALL_STATE(639)] = 12388,
  [SMALL_STATE(640)] = 12398,
  [SMALL_STATE(641)] = 12408,
  [SMALL_STATE(642)] = 12418,
  [SMALL_STATE(643)] = 12425,
  [SMALL_STATE(644)] = 12430,
  [SMALL_STATE(645)] = 12437,
  [SMALL_STATE(646)] = 12444,
  [SMALL_STATE(647)] = 12451,
  [SMALL_STATE(648)] = 12458,
  [SMALL_STATE(649)] = 12465,
  [SMALL_STATE(650)] = 12472,
  [SMALL_STATE(651)] = 12479,
  [SMALL_STATE(652)] = 12486,
  [SMALL_STATE(653)] = 12491,
  [SMALL_STATE(654)] = 12498,
  [SMALL_STATE(655)] = 12505,
  [SMALL_STATE(656)] = 12512,
  [SMALL_STATE(657)] = 12519,
  [SMALL_STATE(658)] = 12524,
  [SMALL_STATE(659)] = 12531,
  [SMALL_STATE(660)] = 12538,
  [SMALL_STATE(661)] = 12545,
  [SMALL_STATE(662)] = 12550,
  [SMALL_STATE(663)] = 12557,
  [SMALL_STATE(664)] = 12562,
  [SMALL_STATE(665)] = 12569,
  [SMALL_STATE(666)] = 12576,
  [SMALL_STATE(667)] = 12583,
  [SMALL_STATE(668)] = 12588,
  [SMALL_STATE(669)] = 12595,
  [SMALL_STATE(670)] = 12602,
  [SMALL_STATE(671)] = 12609,
  [SMALL_STATE(672)] = 12614,
  [SMALL_STATE(673)] = 12619,
  [SMALL_STATE(674)] = 12624,
  [SMALL_STATE(675)] = 12631,
  [SMALL_STATE(676)] = 12638,
  [SMALL_STATE(677)] = 12643,
  [SMALL_STATE(678)] = 12648,
  [SMALL_STATE(679)] = 12653,
  [SMALL_STATE(680)] = 12660,
  [SMALL_STATE(681)] = 12667,
  [SMALL_STATE(682)] = 12674,
  [SMALL_STATE(683)] = 12681,
  [SMALL_STATE(684)] = 12686,
  [SMALL_STATE(685)] = 12693,
  [SMALL_STATE(686)] = 12700,
  [SMALL_STATE(687)] = 12707,
  [SMALL_STATE(688)] = 12714,
  [SMALL_STATE(689)] = 12721,
  [SMALL_STATE(690)] = 12728,
  [SMALL_STATE(691)] = 12735,
  [SMALL_STATE(692)] = 12742,
  [SMALL_STATE(693)] = 12749,
  [SMALL_STATE(694)] = 12756,
  [SMALL_STATE(695)] = 12761,
  [SMALL_STATE(696)] = 12766,
  [SMALL_STATE(697)] = 12773,
  [SMALL_STATE(698)] = 12778,
  [SMALL_STATE(699)] = 12785,
  [SMALL_STATE(700)] = 12792,
  [SMALL_STATE(701)] = 12799,
  [SMALL_STATE(702)] = 12806,
  [SMALL_STATE(703)] = 12813,
  [SMALL_STATE(704)] = 12820,
  [SMALL_STATE(705)] = 12827,
  [SMALL_STATE(706)] = 12834,
  [SMALL_STATE(707)] = 12841,
  [SMALL_STATE(708)] = 12848,
  [SMALL_STATE(709)] = 12855,
  [SMALL_STATE(710)] = 12862,
  [SMALL_STATE(711)] = 12867,
  [SMALL_STATE(712)] = 12874,
  [SMALL_STATE(713)] = 12881,
  [SMALL_STATE(714)] = 12888,
  [SMALL_STATE(715)] = 12893,
  [SMALL_STATE(716)] = 12900,
  [SMALL_STATE(717)] = 12907,
  [SMALL_STATE(718)] = 12912,
  [SMALL_STATE(719)] = 12919,
  [SMALL_STATE(720)] = 12926,
  [SMALL_STATE(721)] = 12933,
  [SMALL_STATE(722)] = 12938,
  [SMALL_STATE(723)] = 12945,
  [SMALL_STATE(724)] = 12952,
  [SMALL_STATE(725)] = 12959,
  [SMALL_STATE(726)] = 12966,
  [SMALL_STATE(727)] = 12973,
  [SMALL_STATE(728)] = 12980,
  [SMALL_STATE(729)] = 12987,
  [SMALL_STATE(730)] = 12994,
  [SMALL_STATE(731)] = 13001,
  [SMALL_STATE(732)] = 13008,
  [SMALL_STATE(733)] = 13015,
  [SMALL_STATE(734)] = 13022,
  [SMALL_STATE(735)] = 13027,
  [SMALL_STATE(736)] = 13032,
  [SMALL_STATE(737)] = 13039,
  [SMALL_STATE(738)] = 13046,
  [SMALL_STATE(739)] = 13053,
  [SMALL_STATE(740)] = 13060,
  [SMALL_STATE(741)] = 13067,
  [SMALL_STATE(742)] = 13074,
  [SMALL_STATE(743)] = 13079,
  [SMALL_STATE(744)] = 13086,
  [SMALL_STATE(745)] = 13093,
  [SMALL_STATE(746)] = 13100,
  [SMALL_STATE(747)] = 13105,
  [SMALL_STATE(748)] = 13112,
  [SMALL_STATE(749)] = 13117,
  [SMALL_STATE(750)] = 13124,
  [SMALL_STATE(751)] = 13131,
  [SMALL_STATE(752)] = 13138,
  [SMALL_STATE(753)] = 13143,
  [SMALL_STATE(754)] = 13148,
  [SMALL_STATE(755)] = 13153,
  [SMALL_STATE(756)] = 13160,
  [SMALL_STATE(757)] = 13165,
  [SMALL_STATE(758)] = 13172,
  [SMALL_STATE(759)] = 13179,
  [SMALL_STATE(760)] = 13186,
  [SMALL_STATE(761)] = 13193,
  [SMALL_STATE(762)] = 13200,
  [SMALL_STATE(763)] = 13207,
  [SMALL_STATE(764)] = 13214,
  [SMALL_STATE(765)] = 13221,
  [SMALL_STATE(766)] = 13228,
  [SMALL_STATE(767)] = 13235,
  [SMALL_STATE(768)] = 13242,
  [SMALL_STATE(769)] = 13249,
  [SMALL_STATE(770)] = 13256,
  [SMALL_STATE(771)] = 13263,
  [SMALL_STATE(772)] = 13270,
  [SMALL_STATE(773)] = 13277,
  [SMALL_STATE(774)] = 13284,
  [SMALL_STATE(775)] = 13291,
  [SMALL_STATE(776)] = 13298,
  [SMALL_STATE(777)] = 13305,
  [SMALL_STATE(778)] = 13310,
  [SMALL_STATE(779)] = 13317,
  [SMALL_STATE(780)] = 13322,
  [SMALL_STATE(781)] = 13326,
  [SMALL_STATE(782)] = 13330,
  [SMALL_STATE(783)] = 13334,
  [SMALL_STATE(784)] = 13338,
  [SMALL_STATE(785)] = 13342,
  [SMALL_STATE(786)] = 13346,
  [SMALL_STATE(787)] = 13350,
  [SMALL_STATE(788)] = 13354,
  [SMALL_STATE(789)] = 13358,
  [SMALL_STATE(790)] = 13362,
  [SMALL_STATE(791)] = 13366,
  [SMALL_STATE(792)] = 13370,
  [SMALL_STATE(793)] = 13374,
  [SMALL_STATE(794)] = 13378,
  [SMALL_STATE(795)] = 13382,
  [SMALL_STATE(796)] = 13386,
  [SMALL_STATE(797)] = 13390,
  [SMALL_STATE(798)] = 13394,
  [SMALL_STATE(799)] = 13398,
  [SMALL_STATE(800)] = 13402,
  [SMALL_STATE(801)] = 13406,
  [SMALL_STATE(802)] = 13410,
  [SMALL_STATE(803)] = 13414,
  [SMALL_STATE(804)] = 13418,
  [SMALL_STATE(805)] = 13422,
  [SMALL_STATE(806)] = 13426,
  [SMALL_STATE(807)] = 13430,
  [SMALL_STATE(808)] = 13434,
  [SMALL_STATE(809)] = 13438,
  [SMALL_STATE(810)] = 13442,
  [SMALL_STATE(811)] = 13446,
  [SMALL_STATE(812)] = 13450,
  [SMALL_STATE(813)] = 13454,
  [SMALL_STATE(814)] = 13458,
  [SMALL_STATE(815)] = 13462,
  [SMALL_STATE(816)] = 13466,
  [SMALL_STATE(817)] = 13470,
  [SMALL_STATE(818)] = 13474,
  [SMALL_STATE(819)] = 13478,
  [SMALL_STATE(820)] = 13482,
  [SMALL_STATE(821)] = 13486,
  [SMALL_STATE(822)] = 13490,
  [SMALL_STATE(823)] = 13494,
  [SMALL_STATE(824)] = 13498,
  [SMALL_STATE(825)] = 13502,
  [SMALL_STATE(826)] = 13506,
  [SMALL_STATE(827)] = 13510,
  [SMALL_STATE(828)] = 13514,
  [SMALL_STATE(829)] = 13518,
  [SMALL_STATE(830)] = 13522,
  [SMALL_STATE(831)] = 13526,
  [SMALL_STATE(832)] = 13530,
  [SMALL_STATE(833)] = 13534,
  [SMALL_STATE(834)] = 13538,
  [SMALL_STATE(835)] = 13542,
  [SMALL_STATE(836)] = 13546,
  [SMALL_STATE(837)] = 13550,
  [SMALL_STATE(838)] = 13554,
  [SMALL_STATE(839)] = 13558,
  [SMALL_STATE(840)] = 13562,
  [SMALL_STATE(841)] = 13566,
  [SMALL_STATE(842)] = 13570,
  [SMALL_STATE(843)] = 13574,
  [SMALL_STATE(844)] = 13578,
  [SMALL_STATE(845)] = 13582,
  [SMALL_STATE(846)] = 13586,
  [SMALL_STATE(847)] = 13590,
  [SMALL_STATE(848)] = 13594,
  [SMALL_STATE(849)] = 13598,
  [SMALL_STATE(850)] = 13602,
  [SMALL_STATE(851)] = 13606,
  [SMALL_STATE(852)] = 13610,
  [SMALL_STATE(853)] = 13614,
  [SMALL_STATE(854)] = 13618,
  [SMALL_STATE(855)] = 13622,
  [SMALL_STATE(856)] = 13626,
  [SMALL_STATE(857)] = 13630,
  [SMALL_STATE(858)] = 13634,
  [SMALL_STATE(859)] = 13638,
  [SMALL_STATE(860)] = 13642,
  [SMALL_STATE(861)] = 13646,
  [SMALL_STATE(862)] = 13650,
  [SMALL_STATE(863)] = 13654,
  [SMALL_STATE(864)] = 13658,
  [SMALL_STATE(865)] = 13662,
  [SMALL_STATE(866)] = 13666,
  [SMALL_STATE(867)] = 13670,
  [SMALL_STATE(868)] = 13674,
  [SMALL_STATE(869)] = 13678,
  [SMALL_STATE(870)] = 13682,
  [SMALL_STATE(871)] = 13686,
  [SMALL_STATE(872)] = 13690,
  [SMALL_STATE(873)] = 13694,
  [SMALL_STATE(874)] = 13698,
  [SMALL_STATE(875)] = 13702,
  [SMALL_STATE(876)] = 13706,
  [SMALL_STATE(877)] = 13710,
  [SMALL_STATE(878)] = 13714,
  [SMALL_STATE(879)] = 13718,
  [SMALL_STATE(880)] = 13722,
  [SMALL_STATE(881)] = 13726,
  [SMALL_STATE(882)] = 13730,
  [SMALL_STATE(883)] = 13734,
  [SMALL_STATE(884)] = 13738,
  [SMALL_STATE(885)] = 13742,
  [SMALL_STATE(886)] = 13746,
  [SMALL_STATE(887)] = 13750,
  [SMALL_STATE(888)] = 13754,
  [SMALL_STATE(889)] = 13758,
  [SMALL_STATE(890)] = 13762,
  [SMALL_STATE(891)] = 13766,
  [SMALL_STATE(892)] = 13770,
  [SMALL_STATE(893)] = 13774,
  [SMALL_STATE(894)] = 13778,
  [SMALL_STATE(895)] = 13782,
  [SMALL_STATE(896)] = 13786,
  [SMALL_STATE(897)] = 13790,
  [SMALL_STATE(898)] = 13794,
  [SMALL_STATE(899)] = 13798,
  [SMALL_STATE(900)] = 13802,
  [SMALL_STATE(901)] = 13806,
  [SMALL_STATE(902)] = 13810,
  [SMALL_STATE(903)] = 13814,
  [SMALL_STATE(904)] = 13818,
  [SMALL_STATE(905)] = 13822,
  [SMALL_STATE(906)] = 13826,
  [SMALL_STATE(907)] = 13830,
  [SMALL_STATE(908)] = 13834,
  [SMALL_STATE(909)] = 13838,
  [SMALL_STATE(910)] = 13842,
  [SMALL_STATE(911)] = 13846,
  [SMALL_STATE(912)] = 13850,
  [SMALL_STATE(913)] = 13854,
  [SMALL_STATE(914)] = 13858,
  [SMALL_STATE(915)] = 13862,
  [SMALL_STATE(916)] = 13866,
  [SMALL_STATE(917)] = 13870,
  [SMALL_STATE(918)] = 13874,
  [SMALL_STATE(919)] = 13878,
  [SMALL_STATE(920)] = 13882,
  [SMALL_STATE(921)] = 13886,
  [SMALL_STATE(922)] = 13890,
  [SMALL_STATE(923)] = 13894,
  [SMALL_STATE(924)] = 13898,
  [SMALL_STATE(925)] = 13902,
  [SMALL_STATE(926)] = 13906,
  [SMALL_STATE(927)] = 13910,
  [SMALL_STATE(928)] = 13914,
  [SMALL_STATE(929)] = 13918,
  [SMALL_STATE(930)] = 13922,
  [SMALL_STATE(931)] = 13926,
  [SMALL_STATE(932)] = 13930,
  [SMALL_STATE(933)] = 13934,
  [SMALL_STATE(934)] = 13938,
  [SMALL_STATE(935)] = 13942,
  [SMALL_STATE(936)] = 13946,
  [SMALL_STATE(937)] = 13950,
  [SMALL_STATE(938)] = 13954,
  [SMALL_STATE(939)] = 13958,
  [SMALL_STATE(940)] = 13962,
  [SMALL_STATE(941)] = 13966,
  [SMALL_STATE(942)] = 13970,
  [SMALL_STATE(943)] = 13974,
  [SMALL_STATE(944)] = 13978,
  [SMALL_STATE(945)] = 13982,
  [SMALL_STATE(946)] = 13986,
  [SMALL_STATE(947)] = 13990,
  [SMALL_STATE(948)] = 13994,
  [SMALL_STATE(949)] = 13998,
  [SMALL_STATE(950)] = 14002,
  [SMALL_STATE(951)] = 14006,
  [SMALL_STATE(952)] = 14010,
  [SMALL_STATE(953)] = 14014,
  [SMALL_STATE(954)] = 14018,
  [SMALL_STATE(955)] = 14022,
  [SMALL_STATE(956)] = 14026,
  [SMALL_STATE(957)] = 14030,
  [SMALL_STATE(958)] = 14034,
  [SMALL_STATE(959)] = 14038,
  [SMALL_STATE(960)] = 14042,
  [SMALL_STATE(961)] = 14046,
  [SMALL_STATE(962)] = 14050,
  [SMALL_STATE(963)] = 14054,
  [SMALL_STATE(964)] = 14058,
  [SMALL_STATE(965)] = 14062,
  [SMALL_STATE(966)] = 14066,
  [SMALL_STATE(967)] = 14070,
  [SMALL_STATE(968)] = 14074,
  [SMALL_STATE(969)] = 14078,
  [SMALL_STATE(970)] = 14082,
  [SMALL_STATE(971)] = 14086,
  [SMALL_STATE(972)] = 14090,
  [SMALL_STATE(973)] = 14094,
  [SMALL_STATE(974)] = 14098,
  [SMALL_STATE(975)] = 14102,
  [SMALL_STATE(976)] = 14106,
  [SMALL_STATE(977)] = 14110,
  [SMALL_STATE(978)] = 14114,
  [SMALL_STATE(979)] = 14118,
  [SMALL_STATE(980)] = 14122,
  [SMALL_STATE(981)] = 14126,
  [SMALL_STATE(982)] = 14130,
  [SMALL_STATE(983)] = 14134,
  [SMALL_STATE(984)] = 14138,
  [SMALL_STATE(985)] = 14142,
  [SMALL_STATE(986)] = 14146,
  [SMALL_STATE(987)] = 14150,
  [SMALL_STATE(988)] = 14154,
  [SMALL_STATE(989)] = 14158,
  [SMALL_STATE(990)] = 14162,
  [SMALL_STATE(991)] = 14166,
  [SMALL_STATE(992)] = 14170,
  [SMALL_STATE(993)] = 14174,
  [SMALL_STATE(994)] = 14178,
  [SMALL_STATE(995)] = 14182,
  [SMALL_STATE(996)] = 14186,
  [SMALL_STATE(997)] = 14190,
  [SMALL_STATE(998)] = 14194,
  [SMALL_STATE(999)] = 14198,
  [SMALL_STATE(1000)] = 14202,
  [SMALL_STATE(1001)] = 14206,
  [SMALL_STATE(1002)] = 14210,
  [SMALL_STATE(1003)] = 14214,
  [SMALL_STATE(1004)] = 14218,
  [SMALL_STATE(1005)] = 14222,
  [SMALL_STATE(1006)] = 14226,
  [SMALL_STATE(1007)] = 14230,
  [SMALL_STATE(1008)] = 14234,
  [SMALL_STATE(1009)] = 14238,
  [SMALL_STATE(1010)] = 14242,
  [SMALL_STATE(1011)] = 14246,
  [SMALL_STATE(1012)] = 14250,
  [SMALL_STATE(1013)] = 14254,
  [SMALL_STATE(1014)] = 14258,
  [SMALL_STATE(1015)] = 14262,
  [SMALL_STATE(1016)] = 14266,
  [SMALL_STATE(1017)] = 14270,
  [SMALL_STATE(1018)] = 14274,
  [SMALL_STATE(1019)] = 14278,
  [SMALL_STATE(1020)] = 14282,
  [SMALL_STATE(1021)] = 14286,
  [SMALL_STATE(1022)] = 14290,
  [SMALL_STATE(1023)] = 14294,
  [SMALL_STATE(1024)] = 14298,
  [SMALL_STATE(1025)] = 14302,
  [SMALL_STATE(1026)] = 14306,
  [SMALL_STATE(1027)] = 14310,
  [SMALL_STATE(1028)] = 14314,
  [SMALL_STATE(1029)] = 14318,
  [SMALL_STATE(1030)] = 14322,
  [SMALL_STATE(1031)] = 14326,
  [SMALL_STATE(1032)] = 14330,
  [SMALL_STATE(1033)] = 14334,
  [SMALL_STATE(1034)] = 14338,
  [SMALL_STATE(1035)] = 14342,
  [SMALL_STATE(1036)] = 14346,
  [SMALL_STATE(1037)] = 14350,
  [SMALL_STATE(1038)] = 14354,
  [SMALL_STATE(1039)] = 14358,
  [SMALL_STATE(1040)] = 14362,
  [SMALL_STATE(1041)] = 14366,
  [SMALL_STATE(1042)] = 14370,
  [SMALL_STATE(1043)] = 14374,
  [SMALL_STATE(1044)] = 14378,
  [SMALL_STATE(1045)] = 14382,
  [SMALL_STATE(1046)] = 14386,
  [SMALL_STATE(1047)] = 14390,
  [SMALL_STATE(1048)] = 14394,
  [SMALL_STATE(1049)] = 14398,
  [SMALL_STATE(1050)] = 14402,
  [SMALL_STATE(1051)] = 14406,
  [SMALL_STATE(1052)] = 14410,
  [SMALL_STATE(1053)] = 14414,
  [SMALL_STATE(1054)] = 14418,
  [SMALL_STATE(1055)] = 14422,
  [SMALL_STATE(1056)] = 14426,
  [SMALL_STATE(1057)] = 14430,
  [SMALL_STATE(1058)] = 14434,
  [SMALL_STATE(1059)] = 14438,
  [SMALL_STATE(1060)] = 14442,
  [SMALL_STATE(1061)] = 14446,
  [SMALL_STATE(1062)] = 14450,
  [SMALL_STATE(1063)] = 14454,
  [SMALL_STATE(1064)] = 14458,
  [SMALL_STATE(1065)] = 14462,
  [SMALL_STATE(1066)] = 14466,
  [SMALL_STATE(1067)] = 14470,
  [SMALL_STATE(1068)] = 14474,
  [SMALL_STATE(1069)] = 14478,
  [SMALL_STATE(1070)] = 14482,
  [SMALL_STATE(1071)] = 14486,
  [SMALL_STATE(1072)] = 14490,
  [SMALL_STATE(1073)] = 14494,
  [SMALL_STATE(1074)] = 14498,
  [SMALL_STATE(1075)] = 14502,
  [SMALL_STATE(1076)] = 14506,
  [SMALL_STATE(1077)] = 14510,
  [SMALL_STATE(1078)] = 14514,
  [SMALL_STATE(1079)] = 14518,
  [SMALL_STATE(1080)] = 14522,
  [SMALL_STATE(1081)] = 14526,
  [SMALL_STATE(1082)] = 14530,
  [SMALL_STATE(1083)] = 14534,
  [SMALL_STATE(1084)] = 14538,
  [SMALL_STATE(1085)] = 14542,
  [SMALL_STATE(1086)] = 14546,
  [SMALL_STATE(1087)] = 14550,
  [SMALL_STATE(1088)] = 14554,
  [SMALL_STATE(1089)] = 14558,
  [SMALL_STATE(1090)] = 14562,
  [SMALL_STATE(1091)] = 14566,
  [SMALL_STATE(1092)] = 14570,
  [SMALL_STATE(1093)] = 14574,
  [SMALL_STATE(1094)] = 14578,
  [SMALL_STATE(1095)] = 14582,
  [SMALL_STATE(1096)] = 14586,
  [SMALL_STATE(1097)] = 14590,
  [SMALL_STATE(1098)] = 14594,
  [SMALL_STATE(1099)] = 14598,
  [SMALL_STATE(1100)] = 14602,
  [SMALL_STATE(1101)] = 14606,
  [SMALL_STATE(1102)] = 14610,
  [SMALL_STATE(1103)] = 14614,
  [SMALL_STATE(1104)] = 14618,
  [SMALL_STATE(1105)] = 14622,
  [SMALL_STATE(1106)] = 14626,
  [SMALL_STATE(1107)] = 14630,
  [SMALL_STATE(1108)] = 14634,
  [SMALL_STATE(1109)] = 14638,
  [SMALL_STATE(1110)] = 14642,
  [SMALL_STATE(1111)] = 14646,
  [SMALL_STATE(1112)] = 14650,
  [SMALL_STATE(1113)] = 14654,
  [SMALL_STATE(1114)] = 14658,
  [SMALL_STATE(1115)] = 14662,
  [SMALL_STATE(1116)] = 14666,
  [SMALL_STATE(1117)] = 14670,
  [SMALL_STATE(1118)] = 14674,
  [SMALL_STATE(1119)] = 14678,
  [SMALL_STATE(1120)] = 14682,
  [SMALL_STATE(1121)] = 14686,
  [SMALL_STATE(1122)] = 14690,
  [SMALL_STATE(1123)] = 14694,
  [SMALL_STATE(1124)] = 14698,
  [SMALL_STATE(1125)] = 14702,
  [SMALL_STATE(1126)] = 14706,
  [SMALL_STATE(1127)] = 14710,
  [SMALL_STATE(1128)] = 14714,
  [SMALL_STATE(1129)] = 14718,
  [SMALL_STATE(1130)] = 14722,
  [SMALL_STATE(1131)] = 14726,
  [SMALL_STATE(1132)] = 14730,
  [SMALL_STATE(1133)] = 14734,
  [SMALL_STATE(1134)] = 14738,
  [SMALL_STATE(1135)] = 14742,
  [SMALL_STATE(1136)] = 14746,
  [SMALL_STATE(1137)] = 14750,
  [SMALL_STATE(1138)] = 14754,
  [SMALL_STATE(1139)] = 14758,
  [SMALL_STATE(1140)] = 14762,
  [SMALL_STATE(1141)] = 14766,
  [SMALL_STATE(1142)] = 14770,
  [SMALL_STATE(1143)] = 14774,
  [SMALL_STATE(1144)] = 14778,
  [SMALL_STATE(1145)] = 14782,
  [SMALL_STATE(1146)] = 14786,
  [SMALL_STATE(1147)] = 14790,
  [SMALL_STATE(1148)] = 14794,
  [SMALL_STATE(1149)] = 14798,
  [SMALL_STATE(1150)] = 14802,
  [SMALL_STATE(1151)] = 14806,
  [SMALL_STATE(1152)] = 14810,
  [SMALL_STATE(1153)] = 14814,
  [SMALL_STATE(1154)] = 14818,
  [SMALL_STATE(1155)] = 14822,
  [SMALL_STATE(1156)] = 14826,
  [SMALL_STATE(1157)] = 14830,
  [SMALL_STATE(1158)] = 14834,
  [SMALL_STATE(1159)] = 14838,
  [SMALL_STATE(1160)] = 14842,
  [SMALL_STATE(1161)] = 14846,
  [SMALL_STATE(1162)] = 14850,
  [SMALL_STATE(1163)] = 14854,
  [SMALL_STATE(1164)] = 14858,
  [SMALL_STATE(1165)] = 14862,
  [SMALL_STATE(1166)] = 14866,
  [SMALL_STATE(1167)] = 14870,
  [SMALL_STATE(1168)] = 14874,
  [SMALL_STATE(1169)] = 14878,
  [SMALL_STATE(1170)] = 14882,
  [SMALL_STATE(1171)] = 14886,
  [SMALL_STATE(1172)] = 14890,
  [SMALL_STATE(1173)] = 14894,
  [SMALL_STATE(1174)] = 14898,
  [SMALL_STATE(1175)] = 14902,
  [SMALL_STATE(1176)] = 14906,
  [SMALL_STATE(1177)] = 14910,
  [SMALL_STATE(1178)] = 14914,
  [SMALL_STATE(1179)] = 14918,
  [SMALL_STATE(1180)] = 14922,
  [SMALL_STATE(1181)] = 14926,
  [SMALL_STATE(1182)] = 14930,
  [SMALL_STATE(1183)] = 14934,
  [SMALL_STATE(1184)] = 14938,
  [SMALL_STATE(1185)] = 14942,
  [SMALL_STATE(1186)] = 14946,
  [SMALL_STATE(1187)] = 14950,
  [SMALL_STATE(1188)] = 14954,
  [SMALL_STATE(1189)] = 14958,
  [SMALL_STATE(1190)] = 14962,
  [SMALL_STATE(1191)] = 14966,
  [SMALL_STATE(1192)] = 14970,
  [SMALL_STATE(1193)] = 14974,
  [SMALL_STATE(1194)] = 14978,
  [SMALL_STATE(1195)] = 14982,
  [SMALL_STATE(1196)] = 14986,
  [SMALL_STATE(1197)] = 14990,
  [SMALL_STATE(1198)] = 14994,
  [SMALL_STATE(1199)] = 14998,
  [SMALL_STATE(1200)] = 15002,
  [SMALL_STATE(1201)] = 15006,
  [SMALL_STATE(1202)] = 15010,
  [SMALL_STATE(1203)] = 15014,
  [SMALL_STATE(1204)] = 15018,
  [SMALL_STATE(1205)] = 15022,
  [SMALL_STATE(1206)] = 15026,
  [SMALL_STATE(1207)] = 15030,
  [SMALL_STATE(1208)] = 15034,
  [SMALL_STATE(1209)] = 15038,
  [SMALL_STATE(1210)] = 15042,
  [SMALL_STATE(1211)] = 15046,
  [SMALL_STATE(1212)] = 15050,
  [SMALL_STATE(1213)] = 15054,
  [SMALL_STATE(1214)] = 15058,
  [SMALL_STATE(1215)] = 15062,
  [SMALL_STATE(1216)] = 15066,
  [SMALL_STATE(1217)] = 15070,
  [SMALL_STATE(1218)] = 15074,
  [SMALL_STATE(1219)] = 15078,
  [SMALL_STATE(1220)] = 15082,
  [SMALL_STATE(1221)] = 15086,
  [SMALL_STATE(1222)] = 15090,
  [SMALL_STATE(1223)] = 15094,
  [SMALL_STATE(1224)] = 15098,
  [SMALL_STATE(1225)] = 15102,
  [SMALL_STATE(1226)] = 15106,
  [SMALL_STATE(1227)] = 15110,
  [SMALL_STATE(1228)] = 15114,
  [SMALL_STATE(1229)] = 15118,
  [SMALL_STATE(1230)] = 15122,
  [SMALL_STATE(1231)] = 15126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(505),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1161),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(511),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(382),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1231),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1230),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(395),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(387),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1229),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(768),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 49),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 49),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(424),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 49),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 49),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 42),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 32),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(867),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 59),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 58),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 43),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(654),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 18),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 29),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 41),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 25),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 97),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 10),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(441),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 29),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 41),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 58),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 29),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(411),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 20),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 46),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 58),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(675),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 44),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(718),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 10),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 82),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 41),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 23),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 71),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 50),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 21),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 63),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 51),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 52),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 64),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 15),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 47),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 61),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 14),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 20),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 28),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 13),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 30),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 11),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 33),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 36),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 10),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 48),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 38),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 71),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 29),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 60),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 44),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 78),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 91),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 54),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 77),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 76),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 10),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 90),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 39),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 20),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 96),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 80),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 44),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 44),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 89),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 75),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 81),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 10),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 49),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 98),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 99),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 108),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 48),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 55),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 107),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 100),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 101),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 53),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 88),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 87),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 41),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 15),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 92),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 94),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 21),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 74),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 102),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 82),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 57),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 39),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 97),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 72),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 83),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 79),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 21),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 103),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 58),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 37),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 56),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 35),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 34),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 29),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 12),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 32),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 84),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 58),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 104),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 62),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 85),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 31),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 44),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 41),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 48),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 29),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 86),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 105),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 106),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1124),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(908),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1035),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(977),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1033),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1189),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1190),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(392),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(998),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(930),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 25),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(389),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(508),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(681),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1192),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(712),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1187),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1186),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1178),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1174),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(169),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(378),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1167),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1163),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1158),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1155),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 49),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(679),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(651),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(723),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(644),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(498),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(377),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(52),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1091),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1055),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 8),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 93),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 17),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 26),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1156),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1159),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1160),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1105),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1162),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 70),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1164),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 19),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1179),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1182),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 65),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 69),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 24),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 70),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 66),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 67),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 68),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 11),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 45),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 27),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 73),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
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
