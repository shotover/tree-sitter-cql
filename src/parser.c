#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 934
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 30
#define TOKEN_COUNT 146
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 67

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  aux_sym_select_statement_token1 = 2,
  aux_sym_select_statement_token2 = 3,
  aux_sym_select_statement_token3 = 4,
  aux_sym_select_statement_token4 = 5,
  aux_sym_select_statement_token5 = 6,
  aux_sym_limit_spec_token1 = 7,
  anon_sym_STAR = 8,
  anon_sym_COMMA = 9,
  aux_sym_select_element_token1 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  aux_sym_constant_token1 = 13,
  aux_sym_constant_token2 = 14,
  aux_sym_constant_token3 = 15,
  anon_sym_QMARK = 16,
  anon_sym_COLON = 17,
  sym__string_literal = 18,
  aux_sym__decimal_literal_token1 = 19,
  sym__float_literal = 20,
  sym__boolean_literal = 21,
  sym__code_block = 22,
  aux_sym_from_spec_token1 = 23,
  aux_sym_where_spec_token1 = 24,
  aux_sym_relation_elements_token1 = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_LT_GT = 28,
  anon_sym_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_GT_EQ = 31,
  aux_sym_relation_element_token1 = 32,
  aux_sym_relation_contains_key_token1 = 33,
  aux_sym_relation_contains_key_token2 = 34,
  aux_sym_order_spec_token1 = 35,
  aux_sym_order_spec_token2 = 36,
  aux_sym_order_spec_token3 = 37,
  aux_sym_order_spec_token4 = 38,
  aux_sym_delete_statement_token1 = 39,
  aux_sym_delete_statement_token2 = 40,
  aux_sym_delete_statement_token3 = 41,
  aux_sym_begin_batch_token1 = 42,
  aux_sym_begin_batch_token2 = 43,
  aux_sym_begin_batch_token3 = 44,
  aux_sym_begin_batch_token4 = 45,
  aux_sym_begin_batch_token5 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  aux_sym_using_timestamp_spec_token1 = 49,
  aux_sym_using_timestamp_spec_token2 = 50,
  aux_sym_insert_statement_token1 = 51,
  aux_sym_insert_statement_token2 = 52,
  aux_sym_insert_statement_token3 = 53,
  aux_sym_insert_values_spec_token1 = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  aux_sym_using_ttl_timestamp_token1 = 57,
  aux_sym_truncate_token1 = 58,
  aux_sym_truncate_token2 = 59,
  aux_sym_create_index_token1 = 60,
  aux_sym_create_index_token2 = 61,
  aux_sym_create_index_token3 = 62,
  aux_sym_index_keys_spec_token1 = 63,
  aux_sym_index_entries_s_spec_token1 = 64,
  aux_sym_index_full_spec_token1 = 65,
  aux_sym_drop_index_token1 = 66,
  aux_sym_update_token1 = 67,
  aux_sym_update_assignments_token1 = 68,
  anon_sym_PLUS = 69,
  anon_sym_DASH = 70,
  aux_sym_use_token1 = 71,
  aux_sym_grant_token1 = 72,
  aux_sym_grant_token2 = 73,
  aux_sym_revoke_token1 = 74,
  aux_sym_privilege_token1 = 75,
  aux_sym_privilege_token2 = 76,
  aux_sym_privilege_token3 = 77,
  aux_sym_privilege_token4 = 78,
  aux_sym_privilege_token5 = 79,
  aux_sym_privilege_token6 = 80,
  aux_sym_privilege_token7 = 81,
  aux_sym_resource_token1 = 82,
  aux_sym_resource_token2 = 83,
  aux_sym_resource_token3 = 84,
  aux_sym_resource_token4 = 85,
  aux_sym_resource_token5 = 86,
  anon_sym_DOT = 87,
  aux_sym_resource_token6 = 88,
  aux_sym_list_roles_token1 = 89,
  aux_sym_list_roles_token2 = 90,
  aux_sym_list_roles_token3 = 91,
  aux_sym_drop_aggregate_token1 = 92,
  aux_sym_drop_materialized_view_token1 = 93,
  aux_sym_drop_materialized_view_token2 = 94,
  aux_sym_drop_trigger_token1 = 95,
  aux_sym_drop_type_token1 = 96,
  aux_sym_drop_user_token1 = 97,
  aux_sym_create_aggregate_token1 = 98,
  aux_sym_create_aggregate_token2 = 99,
  aux_sym_create_aggregate_token3 = 100,
  aux_sym_create_aggregate_token4 = 101,
  aux_sym_create_aggregate_token5 = 102,
  aux_sym_create_aggregate_token6 = 103,
  aux_sym_column_not_null_token1 = 104,
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
  aux_sym_return_mode_token1 = 128,
  aux_sym_return_mode_token2 = 129,
  aux_sym_create_keyspace_token1 = 130,
  aux_sym_create_keyspace_token2 = 131,
  aux_sym_durable_writes_token1 = 132,
  aux_sym_role_with_option_token1 = 133,
  aux_sym_role_with_option_token2 = 134,
  aux_sym_role_with_option_token3 = 135,
  aux_sym_role_with_option_token4 = 136,
  aux_sym_primary_key_column_token1 = 137,
  aux_sym_compact_storage_token1 = 138,
  aux_sym_compact_storage_token2 = 139,
  aux_sym_clustering_order_token1 = 140,
  aux_sym_user_super_user_token1 = 141,
  aux_sym_alter_table_add_token1 = 142,
  aux_sym_alter_table_rename_token1 = 143,
  aux_sym_apply_batch_token1 = 144,
  sym_object_name = 145,
  sym_source_file = 146,
  sym__statement = 147,
  sym_select_statement = 148,
  sym_limit_spec = 149,
  sym_select_elements = 150,
  sym_select_element = 151,
  sym_function_call = 152,
  sym_function_args = 153,
  sym_constant = 154,
  sym_bind_marker = 155,
  sym__value_marker = 156,
  sym__decimal_literal = 157,
  sym_from_spec = 158,
  sym_where_spec = 159,
  sym_relation_elements = 160,
  sym_relation_element = 161,
  sym_relation_contains_key = 162,
  sym_relation_contains = 163,
  sym_order_spec = 164,
  sym_delete_statement = 165,
  sym_begin_batch = 166,
  sym_delete_column_list = 167,
  sym_delete_column_item = 168,
  sym_using_timestamp_spec = 169,
  sym_if_spec = 170,
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
  sym_index_column_spec = 184,
  sym_index_keys_spec = 185,
  sym_index_entries_s_spec = 186,
  sym_index_full_spec = 187,
  sym_drop_index = 188,
  sym_update = 189,
  sym_update_assignments = 190,
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
  sym_init_cond_nested_list = 212,
  sym_init_cond_hash = 213,
  sym_init_cond_hash_item = 214,
  sym_create_materialized_view = 215,
  sym_materialized_view_where = 216,
  sym_column_not_null = 217,
  sym_create_function = 218,
  sym_data_type = 219,
  sym_data_type_name = 220,
  sym_data_type_definition = 221,
  sym_return_mode = 222,
  sym_create_keyspace = 223,
  sym_replication_list_item = 224,
  sym_durable_writes = 225,
  sym_create_role = 226,
  sym_role_with = 227,
  sym_role_with_option = 228,
  sym_option_hash = 229,
  sym_option_hash_item = 230,
  sym_create_table = 231,
  sym_column_definition_list = 232,
  sym_column_definition = 233,
  sym_primary_key_column = 234,
  sym_primary_key_element = 235,
  sym_primary_key_definition = 236,
  sym_compound_key = 237,
  sym_clustering_key_list = 238,
  sym_composite_key = 239,
  sym_partition_key_list = 240,
  sym_with_element = 241,
  sym_table_options = 242,
  sym_table_option_item = 243,
  sym_table_option_name = 244,
  sym_table_option_value = 245,
  sym_compact_storage = 246,
  sym_clustering_order = 247,
  sym_create_trigger = 248,
  sym_trigger_class = 249,
  sym_create_type = 250,
  sym_typed_name = 251,
  sym_create_user = 252,
  sym_user_with = 253,
  sym_user_password = 254,
  sym_user_super_user = 255,
  sym_alter_materialized_view = 256,
  sym_alter_keyspace = 257,
  sym_replication_list = 258,
  sym_alter_role = 259,
  sym_alter_table = 260,
  sym_alter_table_operation = 261,
  sym_alter_table_add = 262,
  sym_alter_table_drop_columns = 263,
  sym_alter_table_drop_compact_storage = 264,
  sym_alter_table_rename = 265,
  sym_alter_type = 266,
  sym_alter_type_operation = 267,
  sym_alter_type_alter_type = 268,
  sym_alter_type_add = 269,
  sym_alter_type_rename = 270,
  sym_alter_type_rename_item = 271,
  sym_alter_user = 272,
  sym_apply_batch = 273,
  sym_aggregate_name = 274,
  sym_function_name = 275,
  sym_short_index_name = 276,
  sym_index_name = 277,
  sym_keyspace_name = 278,
  sym_materialized_view_name = 279,
  sym_role_name = 280,
  sym_table_name = 281,
  sym_trigger_name = 282,
  sym_type_name = 283,
  sym_user_name = 284,
  aux_sym_source_file_repeat1 = 285,
  aux_sym_select_elements_repeat1 = 286,
  aux_sym_function_args_repeat1 = 287,
  aux_sym_relation_elements_repeat1 = 288,
  aux_sym_relation_element_repeat1 = 289,
  aux_sym_relation_element_repeat2 = 290,
  aux_sym_delete_column_list_repeat1 = 291,
  aux_sym_expression_list_repeat1 = 292,
  aux_sym_assignment_map_repeat1 = 293,
  aux_sym_assignment_set_repeat1 = 294,
  aux_sym_update_assignments_repeat1 = 295,
  aux_sym_init_cond_list_repeat1 = 296,
  aux_sym_init_cond_nested_list_repeat1 = 297,
  aux_sym_init_cond_hash_repeat1 = 298,
  aux_sym_materialized_view_where_repeat1 = 299,
  aux_sym_create_function_repeat1 = 300,
  aux_sym_data_type_definition_repeat1 = 301,
  aux_sym_role_with_repeat1 = 302,
  aux_sym_option_hash_repeat1 = 303,
  aux_sym_column_definition_list_repeat1 = 304,
  aux_sym_clustering_key_list_repeat1 = 305,
  aux_sym_table_options_repeat1 = 306,
  aux_sym_replication_list_repeat1 = 307,
  aux_sym_alter_type_rename_repeat1 = 308,
  anon_alias_sym_aggregate = 309,
  anon_alias_sym_alias = 310,
  anon_alias_sym_assignment_operand = 311,
  anon_alias_sym_code_block = 312,
  anon_alias_sym_column = 313,
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
  [aux_sym_select_element_token1] = "AS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "NULL",
  [aux_sym_constant_token3] = "constant_token3",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
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
  [aux_sym_begin_batch_token4] = "COUNTER",
  [aux_sym_begin_batch_token5] = "BATCH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_using_timestamp_spec_token1] = "USING",
  [aux_sym_using_timestamp_spec_token2] = "TIMESTAMP",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_insert_statement_token3] = "NOT",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
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
  [anon_sym_DOT] = ".",
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
  [aux_sym_data_type_name_token5] = "DATE",
  [aux_sym_data_type_name_token6] = "DECIMAL",
  [aux_sym_data_type_name_token7] = "DOUBLE",
  [aux_sym_data_type_name_token8] = "FLOAT",
  [aux_sym_data_type_name_token9] = "FROZEN",
  [aux_sym_data_type_name_token10] = "INET",
  [aux_sym_data_type_name_token11] = "INT",
  [aux_sym_data_type_name_token12] = "MAP",
  [aux_sym_data_type_name_token13] = "SMALLINT",
  [aux_sym_data_type_name_token14] = "TEXT",
  [aux_sym_data_type_name_token15] = "TIME",
  [aux_sym_data_type_name_token16] = "TIMEUUID",
  [aux_sym_data_type_name_token17] = "TINYINT",
  [aux_sym_data_type_name_token18] = "TUPLE",
  [aux_sym_data_type_name_token19] = "VARCHAR",
  [aux_sym_data_type_name_token20] = "VARINT",
  [aux_sym_data_type_name_token21] = "UUID",
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
  [sym_bind_marker] = "bind_marker",
  [sym__value_marker] = "_value_marker",
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
  [aux_sym_init_cond_list_repeat1] = "init_cond_list_repeat1",
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
  [aux_sym_select_element_token1] = aux_sym_select_element_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [aux_sym_begin_batch_token5] = aux_sym_begin_batch_token5,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_using_timestamp_spec_token1] = aux_sym_using_timestamp_spec_token1,
  [aux_sym_using_timestamp_spec_token2] = aux_sym_using_timestamp_spec_token2,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [aux_sym_insert_statement_token3] = aux_sym_insert_statement_token3,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_bind_marker] = sym_bind_marker,
  [sym__value_marker] = sym__value_marker,
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
  [aux_sym_init_cond_list_repeat1] = aux_sym_init_cond_list_repeat1,
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [aux_sym_begin_batch_token5] = {
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
  [anon_sym_DOT] = {
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
  [sym_bind_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__value_marker] = {
    .visible = false,
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
  [aux_sym_init_cond_list_repeat1] = {
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
  sym_function_name, 3,
    sym_function_name,
    anon_alias_sym_finalfunc,
    anon_alias_sym_sfunc,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(556);
      ADVANCE_MAP(
        '$', 18,
        '\'', 25,
        '(', 569,
        ')', 570,
        '*', 566,
        '+', 662,
        ',', 567,
        '-', 663,
        '.', 683,
        '0', 34,
        ':', 576,
        ';', 557,
        '<', 607,
        '=', 610,
        '>', 611,
        '?', 575,
        '[', 633,
        ']', 634,
        '{', 642,
        '}', 643,
        'A', 100,
        'a', 100,
        'B', 45,
        'b', 45,
        'C', 36,
        'c', 36,
        'D', 48,
        'd', 48,
        'E', 308,
        'e', 308,
        'F', 46,
        'f', 46,
        'G', 375,
        'g', 375,
        'I', 194,
        'i', 194,
        'J', 423,
        'j', 423,
        'K', 116,
        'k', 116,
        'L', 37,
        'l', 37,
        'M', 38,
        'm', 38,
        'N', 335,
        'n', 335,
        'O', 197,
        'o', 197,
        'P', 47,
        'p', 47,
        'R', 117,
        'r', 117,
        'S', 152,
        's', 152,
        'T', 39,
        't', 39,
        'U', 310,
        'u', 310,
        'V', 41,
        'v', 41,
        'W', 220,
        'w', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 551,
        '$', 18,
        '\'', 23,
        '(', 569,
        '*', 566,
        '-', 515,
        '0', 582,
        ':', 576,
        '?', 575,
        '[', 633,
        '{', 642,
        'F', 772,
        'f', 772,
        'N', 933,
        'n', 933,
        'T', 891,
        't', 891,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(948);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 551,
        '\'', 25,
        '-', 517,
        'A', 896,
        'a', 896,
        'B', 817,
        'b', 817,
        'C', 875,
        'c', 875,
        'D', 769,
        'd', 769,
        'F', 841,
        'f', 841,
        'I', 857,
        'i', 857,
        'L', 821,
        'l', 821,
        'M', 770,
        'm', 770,
        'S', 804,
        's', 804,
        'T', 795,
        't', 795,
        'U', 927,
        'u', 927,
        'V', 771,
        'v', 771,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(830);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(905);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(905);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 551,
        'A', 846,
        'a', 846,
        'F', 930,
        'f', 930,
        'K', 811,
        'k', 811,
        'R', 881,
        'r', 881,
        'T', 782,
        't', 782,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(844);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(934);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(892);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(895);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(782);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(553);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(602);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '+') ADVANCE(593);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(578);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(597);
      END_STATE();
    case 29:
      if (lookahead == '+') ADVANCE(599);
      if (lookahead == '-') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
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
      if (lookahead == 'X') ADVANCE(519);
      if (lookahead == 'x') ADVANCE(519);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'A', 287,
        'a', 287,
        'L', 484,
        'l', 484,
        'O', 291,
        'o', 291,
        'R', 156,
        'r', 156,
      );
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        'A', 76,
        'a', 76,
        'E', 502,
        'e', 502,
        'I', 296,
        'i', 296,
        'O', 666,
        'o', 666,
        'R', 231,
        'r', 231,
        'T', 257,
        't', 257,
        'U', 372,
        'u', 372,
        'Y', 370,
        'y', 370,
      );
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        'A', 200,
        'a', 200,
        'C', 387,
        'c', 387,
        'D', 180,
        'd', 180,
        'E', 503,
        'e', 503,
        'F', 493,
        'f', 493,
        'I', 325,
        'i', 325,
        'K', 193,
        'k', 193,
        'M', 71,
        'm', 71,
        'O', 385,
        'o', 385,
        'R', 342,
        'r', 342,
        'S', 190,
        's', 190,
        'T', 40,
        't', 40,
        'U', 432,
        'u', 432,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        'A', 255,
        'a', 255,
        'C', 387,
        'c', 387,
        'D', 180,
        'd', 180,
        'E', 503,
        'e', 503,
        'M', 341,
        'm', 341,
        'R', 359,
        'r', 359,
        'S', 190,
        's', 190,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        'A', 438,
        'a', 438,
        'E', 206,
        'e', 206,
        'I', 208,
        'i', 208,
        'L', 340,
        'l', 340,
        'O', 353,
        'o', 353,
        'Y', 619,
        'y', 619,
      );
      END_STATE();
    case 46:
      ADVANCE_MAP(
        'A', 265,
        'a', 265,
        'I', 285,
        'i', 285,
        'L', 347,
        'l', 347,
        'R', 337,
        'r', 337,
        'U', 269,
        'u', 269,
      );
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        'A', 458,
        'a', 458,
        'E', 96,
        'e', 96,
        'I', 424,
        'i', 424,
        'O', 491,
        'o', 491,
        'R', 344,
        'r', 344,
        'U', 388,
        'u', 388,
      );
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
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
          lookahead == 'a') ADVANCE(213);
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
          lookahead == 'a') ADVANCE(248);
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
          lookahead == 'a') ADVANCE(215);
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
          lookahead == 'b') ADVANCE(709);
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
          lookahead == 'c') ADVANCE(621);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(701);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
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
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
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
      ADVANCE_MAP(
        'D', 102,
        'd', 102,
        'G', 205,
        'g', 205,
        'L', 256,
        'l', 256,
        'N', 103,
        'n', 103,
        'P', 366,
        'p', 366,
        'S', 568,
        's', 568,
        'U', 437,
        'u', 437,
      );
      END_STATE();
    case 101:
      ADVANCE_MAP(
        'D', 102,
        'd', 102,
        'L', 277,
        'l', 277,
        'N', 103,
        'n', 103,
        'P', 366,
        'p', 366,
        'S', 568,
        's', 568,
      );
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(702);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
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
          lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 152:
      ADVANCE_MAP(
        'E', 276,
        'e', 276,
        'F', 478,
        'f', 478,
        'M', 62,
        'm', 62,
        'T', 354,
        't', 354,
        'U', 369,
        'u', 369,
      );
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
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
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(703);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(688);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        'F', 688,
        'f', 688,
        'N', 650,
        'n', 650,
        'P', 459,
        'p', 459,
        'R', 697,
        'r', 697,
      );
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(402);
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
          lookahead == 'g') ADVANCE(492);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 217:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(749);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 222:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
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
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 233:
      ADVANCE_MAP(
        'I', 456,
        'i', 456,
        'P', 481,
        'p', 481,
        'S', 160,
        's', 160,
        'T', 338,
        't', 338,
      );
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 254:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 263:
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
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
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
          lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
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
          lookahead == 'l') ADVANCE(259);
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
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
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
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(474);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
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
          lookahead == 'm') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(703);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 310:
      ADVANCE_MAP(
        'N', 271,
        'n', 271,
        'P', 115,
        'p', 115,
        'S', 119,
        's', 119,
        'U', 229,
        'u', 229,
      );
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
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 314:
      ADVANCE_MAP(
        'N', 49,
        'n', 49,
        'P', 261,
        'p', 261,
        'T', 479,
        't', 479,
        'V', 339,
        'v', 339,
      );
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
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
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
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
          lookahead == 'o') ADVANCE(393);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(666);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
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
          lookahead == 'o') ADVANCE(56);
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
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
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
          lookahead == 'o') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(727);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(658);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
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
          lookahead == 'p') ADVANCE(170);
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
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(625);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(615);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(670);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(751);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
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
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
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
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(758);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
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
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
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
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 476:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
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
          lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
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
          lookahead == 'u') ADVANCE(234);
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
          lookahead == 'w') ADVANCE(692);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 500:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(399);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(649);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 503:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(617);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(766);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(675);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(616);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 511:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 512:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 513:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(145);
      END_STATE();
    case 514:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 518:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(571);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 521:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(574);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 552:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 553:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(21);
      END_STATE();
    case 554:
      if (eof) ADVANCE(556);
      ADVANCE_MAP(
        '$', 18,
        '\'', 23,
        '(', 569,
        ')', 570,
        '-', 515,
        '0', 582,
        ':', 576,
        ';', 557,
        '<', 607,
        '=', 610,
        '>', 611,
        '?', 575,
        '[', 633,
        '{', 642,
        '}', 643,
        'A', 263,
        'a', 263,
        'B', 148,
        'b', 148,
        'C', 358,
        'c', 358,
        'D', 149,
        'd', 149,
        'E', 537,
        'e', 537,
        'F', 42,
        'f', 42,
        'G', 375,
        'g', 375,
        'I', 306,
        'i', 306,
        'K', 169,
        'k', 169,
        'L', 223,
        'l', 223,
        'N', 483,
        'n', 483,
        'O', 196,
        'o', 196,
        'R', 155,
        'r', 155,
        'S', 190,
        's', 190,
        'T', 336,
        't', 336,
        'U', 365,
        'u', 365,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(554);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 555:
      if (eof) ADVANCE(556);
      ADVANCE_MAP(
        '\'', 23,
        '(', 569,
        ')', 570,
        ',', 567,
        '-', 515,
        '.', 683,
        ':', 576,
        ';', 557,
        '<', 607,
        '=', 610,
        '>', 611,
        '[', 633,
        ']', 634,
        '{', 642,
        '}', 643,
        'A', 101,
        'a', 101,
        'B', 151,
        'b', 151,
        'C', 387,
        'c', 387,
        'D', 189,
        'd', 189,
        'F', 400,
        'f', 400,
        'G', 375,
        'g', 375,
        'I', 195,
        'i', 195,
        'K', 162,
        'k', 162,
        'L', 223,
        'l', 223,
        'O', 398,
        'o', 398,
        'P', 376,
        'p', 376,
        'R', 147,
        'r', 147,
        'S', 153,
        's', 153,
        'T', 409,
        't', 409,
        'U', 364,
        'u', 364,
        'W', 220,
        'w', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__string_literal);
      if (lookahead == '\'') ADVANCE(25);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__string_literal);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__string_literal);
      if (lookahead == '\'') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__string_literal);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (lookahead == 'X') ADVANCE(519);
      if (lookahead == 'x') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__float_literal);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == '\'') ADVANCE(580);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__float_literal);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(608);
      if (lookahead == '>') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      ADVANCE_MAP(
        'D', 154,
        'd', 154,
        'E', 439,
        'e', 439,
        'I', 456,
        'i', 456,
        'P', 481,
        'p', 481,
        'S', 160,
        's', 160,
        'T', 725,
        't', 725,
      );
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(652);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_begin_batch_token5);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '"') ADVANCE(17);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(907);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(872);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(940);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(941);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(937);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(924);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(687);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(757);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(949);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(942);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
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
  [4] = {.lex_state = 555},
  [5] = {.lex_state = 555},
  [6] = {.lex_state = 555},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 555},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 555},
  [30] = {.lex_state = 555},
  [31] = {.lex_state = 555},
  [32] = {.lex_state = 555},
  [33] = {.lex_state = 555},
  [34] = {.lex_state = 555},
  [35] = {.lex_state = 555},
  [36] = {.lex_state = 555},
  [37] = {.lex_state = 555},
  [38] = {.lex_state = 555},
  [39] = {.lex_state = 555},
  [40] = {.lex_state = 555},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 555},
  [43] = {.lex_state = 555},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 555},
  [46] = {.lex_state = 555},
  [47] = {.lex_state = 555},
  [48] = {.lex_state = 554},
  [49] = {.lex_state = 555},
  [50] = {.lex_state = 555},
  [51] = {.lex_state = 555},
  [52] = {.lex_state = 555},
  [53] = {.lex_state = 555},
  [54] = {.lex_state = 555},
  [55] = {.lex_state = 554},
  [56] = {.lex_state = 555},
  [57] = {.lex_state = 555},
  [58] = {.lex_state = 555},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 555},
  [61] = {.lex_state = 554},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 555},
  [64] = {.lex_state = 555},
  [65] = {.lex_state = 555},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 554},
  [69] = {.lex_state = 555},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 555},
  [74] = {.lex_state = 554},
  [75] = {.lex_state = 555},
  [76] = {.lex_state = 555},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 555},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 555},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 555},
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
  [129] = {.lex_state = 555},
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
  [153] = {.lex_state = 555},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 555},
  [160] = {.lex_state = 555},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 555},
  [165] = {.lex_state = 555},
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
  [182] = {.lex_state = 555},
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
  [204] = {.lex_state = 1},
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
  [272] = {.lex_state = 1},
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
  [288] = {.lex_state = 554},
  [289] = {.lex_state = 554},
  [290] = {.lex_state = 554},
  [291] = {.lex_state = 554},
  [292] = {.lex_state = 554},
  [293] = {.lex_state = 554},
  [294] = {.lex_state = 554},
  [295] = {.lex_state = 554},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 554},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 554},
  [300] = {.lex_state = 554},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 554},
  [304] = {.lex_state = 43},
  [305] = {.lex_state = 554},
  [306] = {.lex_state = 44},
  [307] = {.lex_state = 554},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 554},
  [310] = {.lex_state = 554},
  [311] = {.lex_state = 43},
  [312] = {.lex_state = 554},
  [313] = {.lex_state = 554},
  [314] = {.lex_state = 554},
  [315] = {.lex_state = 554},
  [316] = {.lex_state = 43},
  [317] = {.lex_state = 43},
  [318] = {.lex_state = 554},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 12},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 12},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 12},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 554},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 555},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 554},
  [342] = {.lex_state = 43},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 555},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 3},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 13},
  [362] = {.lex_state = 13},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 4},
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
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 14},
  [385] = {.lex_state = 555},
  [386] = {.lex_state = 16},
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
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 14},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 14},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 14},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 14},
  [415] = {.lex_state = 14},
  [416] = {.lex_state = 14},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 14},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 14},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 14},
  [428] = {.lex_state = 14},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 5},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 554},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 5},
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
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 14},
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
  [483] = {.lex_state = 5},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 5},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 5},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 5},
  [500] = {.lex_state = 14},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 5},
  [503] = {.lex_state = 5},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 5},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 5},
  [510] = {.lex_state = 5},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 5},
  [519] = {.lex_state = 5},
  [520] = {.lex_state = 5},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 5},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 555},
  [526] = {.lex_state = 5},
  [527] = {.lex_state = 5},
  [528] = {.lex_state = 5},
  [529] = {.lex_state = 5},
  [530] = {.lex_state = 5},
  [531] = {.lex_state = 5},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 5},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 5},
  [537] = {.lex_state = 5},
  [538] = {.lex_state = 5},
  [539] = {.lex_state = 5},
  [540] = {.lex_state = 5},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 5},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 5},
  [546] = {.lex_state = 5},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 5},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 5},
  [552] = {.lex_state = 5},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 5},
  [555] = {.lex_state = 5},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 5},
  [558] = {.lex_state = 5},
  [559] = {.lex_state = 5},
  [560] = {.lex_state = 5},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 5},
  [564] = {.lex_state = 5},
  [565] = {.lex_state = 5},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 5},
  [569] = {.lex_state = 5},
  [570] = {.lex_state = 5},
  [571] = {.lex_state = 5},
  [572] = {.lex_state = 5},
  [573] = {.lex_state = 5},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 5},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 5},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 5},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 5},
  [582] = {.lex_state = 5},
  [583] = {.lex_state = 5},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 5},
  [587] = {.lex_state = 5},
  [588] = {.lex_state = 5},
  [589] = {.lex_state = 5},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 5},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 5},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 5},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 5},
  [605] = {.lex_state = 5},
  [606] = {.lex_state = 5},
  [607] = {.lex_state = 5},
  [608] = {.lex_state = 5},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 5},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 5},
  [614] = {.lex_state = 11},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 555},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 555},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 5},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 5},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 5},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 5},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 5},
  [648] = {.lex_state = 5},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 5},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 555},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 5},
  [668] = {.lex_state = 5},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
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
  [685] = {.lex_state = 5},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 5},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
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
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 555},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 5},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 5},
  [724] = {.lex_state = 555},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
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
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 5},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 5},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 5},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 5},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 5},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 555},
  [775] = {.lex_state = 555},
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
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 5},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 5},
  [798] = {.lex_state = 5},
  [799] = {.lex_state = 5},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 5},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 5},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 555},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 555},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 5},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 5},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 5},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 555},
  [836] = {.lex_state = 43},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 5},
  [847] = {.lex_state = 5},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 5},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 5},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 5},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 5},
  [862] = {.lex_state = 5},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 554},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 5},
  [871] = {.lex_state = 5},
  [872] = {.lex_state = 554},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 5},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 5},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 555},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 555},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 5},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 5},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 555},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 555},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 5},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 5},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 5},
  [914] = {.lex_state = 5},
  [915] = {.lex_state = 5},
  [916] = {.lex_state = 5},
  [917] = {.lex_state = 5},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 5},
  [920] = {.lex_state = 5},
  [921] = {.lex_state = 5},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 5},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 555},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 555},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 5},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
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
    [aux_sym_select_element_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [aux_sym_begin_batch_token5] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_using_timestamp_spec_token1] = ACTIONS(1),
    [aux_sym_using_timestamp_spec_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token3] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(257),
    [sym_delete_statement] = STATE(257),
    [sym_begin_batch] = STATE(389),
    [sym_insert_statement] = STATE(257),
    [sym_truncate] = STATE(257),
    [sym_create_index] = STATE(257),
    [sym_drop_index] = STATE(257),
    [sym_update] = STATE(257),
    [sym_use] = STATE(257),
    [sym_grant] = STATE(257),
    [sym_revoke] = STATE(257),
    [sym_list_roles] = STATE(257),
    [sym_list_permissions] = STATE(257),
    [sym_drop_aggregate] = STATE(257),
    [sym_drop_materialized_view] = STATE(257),
    [sym_drop_function] = STATE(257),
    [sym_drop_keyspace] = STATE(257),
    [sym_drop_role] = STATE(257),
    [sym_drop_table] = STATE(257),
    [sym_drop_trigger] = STATE(257),
    [sym_drop_type] = STATE(257),
    [sym_drop_user] = STATE(257),
    [sym_create_aggregate] = STATE(257),
    [sym_create_materialized_view] = STATE(257),
    [sym_create_function] = STATE(257),
    [sym_create_keyspace] = STATE(257),
    [sym_create_role] = STATE(257),
    [sym_create_table] = STATE(257),
    [sym_create_trigger] = STATE(257),
    [sym_create_type] = STATE(257),
    [sym_create_user] = STATE(257),
    [sym_alter_materialized_view] = STATE(257),
    [sym_alter_keyspace] = STATE(257),
    [sym_alter_role] = STATE(257),
    [sym_alter_table] = STATE(257),
    [sym_alter_type] = STATE(257),
    [sym_alter_user] = STATE(257),
    [sym_apply_batch] = STATE(257),
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
    STATE(389), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(257), 37,
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
    STATE(389), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(257), 37,
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
      anon_sym_COLON,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
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
      anon_sym_COLON,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
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
    STATE(895), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [320] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(802), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [355] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(829), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [390] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(665), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [425] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(879), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [460] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(721), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [495] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(894), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [530] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(215), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [565] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(779), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [600] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(105), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [635] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(374), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [670] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(841), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [705] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(785), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [740] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(851), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [775] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(773), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [810] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(778), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [845] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(854), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [880] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(845), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [915] = 3,
    STATE(41), 1,
      sym_data_type_name,
    STATE(662), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [950] = 2,
    STATE(496), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
  [982] = 2,
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
  [1014] = 2,
    STATE(612), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_begin_batch_token4,
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
      sym_object_name,
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
  [1075] = 1,
    ACTIONS(95), 26,
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
      anon_sym_RBRACK,
      aux_sym_insert_statement_token1,
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
  [1104] = 1,
    ACTIONS(97), 26,
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
      anon_sym_RBRACK,
      aux_sym_insert_statement_token1,
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
  [1133] = 3,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(99), 23,
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
  [1165] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(37), 1,
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
    ACTIONS(106), 1,
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
  [1227] = 1,
    ACTIONS(110), 24,
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
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_relation_element_repeat2,
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
  [1285] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
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
  [1316] = 1,
    ACTIONS(99), 24,
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
  [1343] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(63), 1,
      sym_where_spec,
    STATE(81), 1,
      sym_order_spec,
    STATE(153), 1,
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
  [1383] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(64), 1,
      sym_where_spec,
    STATE(76), 1,
      sym_order_spec,
    STATE(164), 1,
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
  [1423] = 3,
    ACTIONS(130), 1,
      anon_sym_LT,
    STATE(62), 1,
      sym_data_type_definition,
    ACTIONS(128), 21,
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
  [1453] = 3,
    ACTIONS(134), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(132), 21,
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
  [1483] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(60), 1,
      sym_where_spec,
    STATE(75), 1,
      sym_order_spec,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1523] = 1,
    ACTIONS(141), 23,
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
  [1549] = 1,
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
  [1574] = 1,
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
  [1599] = 1,
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
  [1624] = 12,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(504), 1,
      sym_expression,
    STATE(890), 1,
      sym_expression_list,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
  [1671] = 1,
    ACTIONS(165), 22,
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
  [1696] = 1,
    ACTIONS(167), 22,
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
  [1721] = 1,
    ACTIONS(132), 22,
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
  [1746] = 3,
    ACTIONS(171), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(169), 20,
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
  [1775] = 3,
    ACTIONS(171), 1,
      aux_sym_relation_elements_token1,
    STATE(52), 1,
      aux_sym_relation_elements_repeat1,
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
  [1804] = 1,
    ACTIONS(175), 22,
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
  [1829] = 12,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(504), 1,
      sym_expression,
    STATE(696), 1,
      sym_expression_list,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
  [1876] = 1,
    ACTIONS(177), 22,
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
  [1901] = 1,
    ACTIONS(179), 22,
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
  [1926] = 1,
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
  [1951] = 1,
    ACTIONS(181), 21,
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
  [1975] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(81), 1,
      sym_order_spec,
    STATE(153), 1,
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
  [2009] = 11,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(630), 1,
      sym_expression,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
  [2053] = 1,
    ACTIONS(183), 21,
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
  [2077] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_order_spec,
    STATE(165), 1,
      sym_limit_spec,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2111] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(75), 1,
      sym_order_spec,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2145] = 1,
    ACTIONS(189), 21,
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
  [2169] = 1,
    ACTIONS(191), 21,
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
  [2193] = 2,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(193), 19,
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
  [2218] = 2,
    ACTIONS(199), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(197), 18,
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
  [2243] = 1,
    ACTIONS(201), 20,
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
  [2266] = 2,
    ACTIONS(205), 1,
      anon_sym_DOT,
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
  [2291] = 2,
    ACTIONS(209), 1,
      anon_sym_DOT,
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
  [2316] = 2,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(211), 19,
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
  [2341] = 2,
    ACTIONS(217), 1,
      anon_sym_DOT,
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
      aux_sym_create_aggregate_token4,
      aux_sym_create_aggregate_token6,
      aux_sym_apply_batch_token1,
  [2366] = 2,
    ACTIONS(221), 1,
      aux_sym_relation_element_token1,
    ACTIONS(219), 19,
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
  [2391] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(153), 1,
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
  [2419] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(160), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2447] = 1,
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
  [2469] = 1,
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
  [2491] = 2,
    ACTIONS(229), 1,
      aux_sym_privilege_token2,
    ACTIONS(227), 18,
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
  [2515] = 1,
    ACTIONS(219), 19,
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
  [2537] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(165), 1,
      sym_limit_spec,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2565] = 1,
    ACTIONS(231), 19,
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
  [2587] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(233), 17,
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
  [2613] = 1,
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
  [2635] = 1,
    ACTIONS(240), 19,
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
  [2657] = 2,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(242), 18,
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
  [2681] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(246), 17,
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
  [2707] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(253), 1,
      aux_sym_select_statement_token4,
    STATE(182), 1,
      sym_limit_spec,
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
  [2735] = 4,
    ACTIONS(257), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(205), 1,
      sym_using_ttl_timestamp,
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
  [2763] = 1,
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
  [2785] = 1,
    ACTIONS(263), 19,
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
      aux_sym_create_aggregate_token4,
      aux_sym_create_aggregate_token6,
      aux_sym_apply_batch_token1,
  [2807] = 4,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_delete_statement_token2,
    STATE(256), 1,
      sym_using_ttl_timestamp,
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
  [2835] = 3,
    STATE(281), 1,
      sym_user_super_user,
    ACTIONS(271), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
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
  [2861] = 1,
    ACTIONS(273), 19,
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
  [2883] = 1,
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
  [2904] = 3,
    ACTIONS(279), 1,
      aux_sym_delete_statement_token2,
    STATE(196), 1,
      sym_if_spec,
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
  [2929] = 3,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    STATE(220), 1,
      sym_with_element,
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
  [2954] = 1,
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
  [2975] = 1,
    ACTIONS(287), 18,
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
  [2996] = 3,
    ACTIONS(291), 1,
      aux_sym_relation_elements_token1,
    STATE(107), 1,
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
  [3021] = 1,
    ACTIONS(293), 18,
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
  [3042] = 1,
    ACTIONS(295), 18,
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
  [3063] = 3,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    STATE(242), 1,
      sym_with_element,
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
  [3088] = 3,
    ACTIONS(301), 1,
      aux_sym_delete_statement_token2,
    STATE(214), 1,
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
  [3113] = 1,
    ACTIONS(303), 18,
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
  [3134] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(234), 1,
      sym_role_with,
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
  [3159] = 3,
    ACTIONS(291), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_role_with_repeat1,
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
  [3184] = 1,
    ACTIONS(311), 18,
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
    ACTIONS(313), 18,
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
  [3226] = 3,
    ACTIONS(317), 1,
      aux_sym_delete_statement_token2,
    STATE(247), 1,
      sym_if_spec,
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
  [3251] = 1,
    ACTIONS(319), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3272] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3297] = 3,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    STATE(199), 1,
      sym_with_element,
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
  [3322] = 3,
    ACTIONS(329), 1,
      aux_sym_relation_elements_token1,
    STATE(118), 1,
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
  [3347] = 3,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(250), 1,
      sym_using_ttl_timestamp,
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
  [3372] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3397] = 1,
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
  [3418] = 3,
    ACTIONS(329), 1,
      aux_sym_relation_elements_token1,
    STATE(147), 1,
      aux_sym_table_options_repeat1,
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
  [3443] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(229), 1,
      sym_role_with,
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
  [3468] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
    ACTIONS(341), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3493] = 2,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(345), 17,
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
  [3516] = 3,
    ACTIONS(351), 1,
      aux_sym_relation_elements_token1,
    STATE(124), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3541] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
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
  [3566] = 3,
    ACTIONS(351), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3591] = 3,
    ACTIONS(359), 1,
      aux_sym_delete_statement_token2,
    STATE(244), 1,
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
  [3616] = 2,
    ACTIONS(363), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(361), 17,
      ts_builtin_sym_end,
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
  [3639] = 3,
    ACTIONS(367), 1,
      aux_sym_delete_statement_token2,
    STATE(222), 1,
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
  [3664] = 2,
    ACTIONS(371), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(369), 17,
      ts_builtin_sym_end,
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
  [3687] = 1,
    ACTIONS(373), 18,
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
  [3708] = 1,
    ACTIONS(375), 18,
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
  [3729] = 3,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    STATE(285), 1,
      sym_with_element,
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
  [3754] = 1,
    ACTIONS(246), 18,
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
  [3775] = 3,
    ACTIONS(381), 1,
      aux_sym_create_index_token3,
    ACTIONS(383), 1,
      aux_sym_list_roles_token2,
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
  [3800] = 3,
    ACTIONS(387), 1,
      aux_sym_list_roles_token2,
    ACTIONS(389), 1,
      aux_sym_list_roles_token3,
    ACTIONS(385), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3825] = 3,
    ACTIONS(393), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_role_with_repeat1,
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
  [3850] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_create_function_repeat1,
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
  [3875] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(120), 1,
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
  [3900] = 1,
    ACTIONS(233), 18,
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
  [3921] = 3,
    ACTIONS(402), 1,
      aux_sym_delete_statement_token2,
    STATE(271), 1,
      sym_if_spec,
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
  [3946] = 3,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(235), 1,
      sym_using_ttl_timestamp,
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
  [3971] = 3,
    ACTIONS(408), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
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
  [3996] = 1,
    ACTIONS(410), 18,
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
  [4017] = 3,
    ACTIONS(414), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [4042] = 1,
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
  [4063] = 1,
    ACTIONS(227), 18,
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
  [4084] = 1,
    ACTIONS(419), 18,
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
  [4105] = 3,
    ACTIONS(423), 1,
      aux_sym_relation_elements_token1,
    STATE(147), 1,
      aux_sym_table_options_repeat1,
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
  [4130] = 3,
    ACTIONS(307), 1,
      aux_sym_create_keyspace_token1,
    STATE(269), 1,
      sym_role_with,
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
  [4155] = 3,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    STATE(210), 1,
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
  [4180] = 1,
    ACTIONS(430), 17,
      ts_builtin_sym_end,
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
  [4200] = 2,
    ACTIONS(434), 1,
      anon_sym_DOT,
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
  [4222] = 1,
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
  [4242] = 2,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4264] = 1,
    ACTIONS(438), 17,
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
  [4284] = 1,
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
  [4304] = 1,
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
  [4324] = 1,
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
  [4344] = 2,
    ACTIONS(448), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(446), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4366] = 1,
    ACTIONS(450), 17,
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
  [4386] = 2,
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
  [4408] = 1,
    ACTIONS(452), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4428] = 2,
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
  [4450] = 2,
    ACTIONS(460), 1,
      aux_sym_list_roles_token3,
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
  [4472] = 2,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4494] = 2,
    ACTIONS(253), 1,
      aux_sym_select_statement_token4,
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
  [4516] = 1,
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
      aux_sym_update_assignments_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4536] = 1,
    ACTIONS(391), 17,
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
  [4556] = 1,
    ACTIONS(412), 17,
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
  [4576] = 1,
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
  [4596] = 1,
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
  [4616] = 1,
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
  [4636] = 1,
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
  [4656] = 1,
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
  [4676] = 1,
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
  [4696] = 1,
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
  [4716] = 1,
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
  [4736] = 1,
    ACTIONS(480), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4756] = 2,
    ACTIONS(484), 1,
      aux_sym_relation_elements_token1,
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
  [4778] = 1,
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
  [4798] = 1,
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
  [4818] = 1,
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
  [4838] = 2,
    ACTIONS(494), 1,
      aux_sym_select_statement_token4,
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
  [4860] = 2,
    ACTIONS(498), 1,
      aux_sym_relation_elements_token1,
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
  [4882] = 1,
    ACTIONS(421), 17,
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
  [4902] = 1,
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
  [4921] = 1,
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
  [4940] = 1,
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
  [4959] = 1,
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
  [4978] = 1,
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
  [4997] = 1,
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
  [5016] = 1,
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
  [5035] = 1,
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
  [5054] = 1,
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
  [5073] = 1,
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
  [5092] = 1,
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
  [5111] = 1,
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
  [5130] = 1,
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
  [5149] = 1,
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
  [5168] = 1,
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
  [5187] = 1,
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
  [5206] = 1,
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
  [5225] = 1,
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
  [5244] = 1,
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
  [5263] = 9,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(598), 1,
      sym_constant,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    STATE(370), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
  [5298] = 1,
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
  [5317] = 1,
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
  [5336] = 1,
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
  [5355] = 1,
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
  [5374] = 1,
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
  [5393] = 1,
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
  [5412] = 1,
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
  [5431] = 1,
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
  [5450] = 1,
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
  [5469] = 1,
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
  [5488] = 1,
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
  [5507] = 1,
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
  [5526] = 1,
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
  [5545] = 1,
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
  [5564] = 1,
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
  [5583] = 1,
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
  [5602] = 1,
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
  [5621] = 1,
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
  [5640] = 1,
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
  [5659] = 1,
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
  [5678] = 1,
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
  [5697] = 1,
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
  [5716] = 1,
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
  [5735] = 1,
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
  [5754] = 1,
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
  [5773] = 1,
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
  [5792] = 1,
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
  [5811] = 1,
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
  [5830] = 1,
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
  [5849] = 1,
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
  [5868] = 1,
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
  [5887] = 1,
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
  [5906] = 1,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5925] = 1,
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
  [5944] = 1,
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
  [5963] = 1,
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
  [5982] = 1,
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
  [6001] = 1,
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
  [6020] = 1,
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
  [6039] = 1,
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
  [6058] = 1,
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
  [6077] = 1,
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
  [6096] = 1,
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
  [6115] = 1,
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
  [6134] = 1,
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
  [6153] = 1,
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
  [6172] = 1,
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
  [6191] = 1,
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
  [6210] = 1,
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
  [6229] = 1,
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
  [6248] = 1,
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
  [6267] = 1,
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
  [6286] = 2,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(628), 15,
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
  [6307] = 1,
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
  [6326] = 1,
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
  [6345] = 1,
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
  [6364] = 1,
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
  [6383] = 1,
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
  [6402] = 1,
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
  [6421] = 1,
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
  [6440] = 1,
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
  [6459] = 1,
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
  [6478] = 1,
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
  [6497] = 1,
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
  [6516] = 1,
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
  [6535] = 1,
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
  [6554] = 1,
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
  [6573] = 8,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(656), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
    STATE(57), 4,
      sym_function_call,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
  [6606] = 1,
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
  [6625] = 1,
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
  [6644] = 1,
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
  [6663] = 1,
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
  [6682] = 1,
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
  [6701] = 1,
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
  [6720] = 1,
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
  [6739] = 1,
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
  [6758] = 1,
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
  [6777] = 1,
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
  [6796] = 1,
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
  [6815] = 1,
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
  [6834] = 1,
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
  [6853] = 1,
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
  [6872] = 1,
    ACTIONS(684), 15,
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
  [6890] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(194), 1,
      sym_init_cond_definition,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(146), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [6920] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(515), 1,
      sym_init_cond_definition,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(146), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [6950] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(200), 1,
      sym_init_cond_definition,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(146), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [6980] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(267), 1,
      sym_init_cond_definition,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(146), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7010] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(286), 1,
      sym_init_cond_definition,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(146), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7040] = 9,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(492), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(491), 2,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7074] = 7,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(455), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7103] = 7,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(548), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7132] = 9,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(405), 1,
      sym_init_cond_hash_item,
    STATE(406), 1,
      sym_init_cond_list,
    STATE(407), 1,
      sym_constant,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
  [7165] = 7,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(49), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7194] = 8,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(694), 1,
      anon_sym_STAR,
    ACTIONS(696), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(698), 1,
      sym_function_args,
    STATE(485), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
  [7225] = 7,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(453), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7254] = 7,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(493), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7283] = 7,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(696), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(892), 1,
      sym_function_args,
    STATE(485), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
  [7311] = 6,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(698), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(542), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(151), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__code_block,
    ACTIONS(157), 4,
      aux_sym_constant_token2,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
  [7336] = 6,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(513), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7361] = 11,
    ACTIONS(700), 1,
      aux_sym_truncate_token2,
    ACTIONS(702), 1,
      aux_sym_create_index_token2,
    ACTIONS(704), 1,
      aux_sym_resource_token2,
    ACTIONS(706), 1,
      aux_sym_resource_token5,
    ACTIONS(708), 1,
      aux_sym_resource_token6,
    ACTIONS(710), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(712), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(714), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(716), 1,
      aux_sym_drop_type_token1,
    ACTIONS(718), 1,
      aux_sym_drop_user_token1,
    ACTIONS(720), 1,
      aux_sym_create_aggregate_token1,
  [7395] = 6,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7419] = 4,
    ACTIONS(726), 1,
      aux_sym_privilege_token1,
    ACTIONS(728), 1,
      aux_sym_resource_token4,
    STATE(133), 1,
      sym_privilege,
    ACTIONS(724), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7439] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(407), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7460] = 6,
    ACTIONS(283), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(730), 1,
      aux_sym_drop_index_token1,
    ACTIONS(732), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(734), 1,
      aux_sym_alter_table_rename_token1,
    STATE(185), 1,
      sym_alter_table_operation,
    STATE(266), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7483] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(818), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7504] = 6,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      aux_sym_relation_element_token1,
    ACTIONS(744), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(746), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(738), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(740), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7527] = 10,
    ACTIONS(748), 1,
      aux_sym_truncate_token2,
    ACTIONS(750), 1,
      aux_sym_create_index_token2,
    ACTIONS(752), 1,
      aux_sym_resource_token2,
    ACTIONS(754), 1,
      aux_sym_resource_token5,
    ACTIONS(756), 1,
      aux_sym_resource_token6,
    ACTIONS(758), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(760), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(762), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(764), 1,
      aux_sym_drop_type_token1,
    ACTIONS(766), 1,
      aux_sym_drop_user_token1,
  [7558] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(101), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7579] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(514), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7600] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(598), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7621] = 5,
    ACTIONS(159), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(56), 1,
      sym_constant,
    ACTIONS(157), 2,
      sym__string_literal,
      sym__float_literal,
    ACTIONS(151), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__boolean_literal,
      sym__code_block,
  [7642] = 3,
    ACTIONS(726), 1,
      aux_sym_privilege_token1,
    STATE(838), 1,
      sym_privilege,
    ACTIONS(724), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7659] = 3,
    ACTIONS(726), 1,
      aux_sym_privilege_token1,
    STATE(834), 1,
      sym_privilege,
    ACTIONS(724), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [7676] = 5,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      aux_sym_relation_element_token1,
    ACTIONS(744), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(738), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(740), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7696] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(772), 1,
      sym_object_name,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7719] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(774), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7742] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(776), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7765] = 6,
    ACTIONS(778), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(780), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(782), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(844), 1,
      sym_index_column_spec,
    STATE(777), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7786] = 6,
    ACTIONS(786), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(788), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(790), 1,
      sym_object_name,
    STATE(187), 1,
      sym_table_options,
    STATE(918), 1,
      sym_table_option_name,
    STATE(114), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7807] = 6,
    ACTIONS(778), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(780), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(782), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(703), 1,
      sym_index_column_spec,
    STATE(777), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7828] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(792), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7851] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(794), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7874] = 6,
    ACTIONS(778), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(780), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(782), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(783), 1,
      sym_index_column_spec,
    STATE(777), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7895] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(796), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7918] = 6,
    ACTIONS(778), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(780), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(782), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(784), 1,
      sym_object_name,
    STATE(760), 1,
      sym_index_column_spec,
    STATE(777), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7939] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(798), 1,
      aux_sym_delete_statement_token3,
    STATE(53), 1,
      sym_relation_element,
    STATE(261), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7962] = 6,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(53), 1,
      sym_relation_element,
    STATE(69), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7982] = 5,
    ACTIONS(802), 1,
      aux_sym_privilege_token3,
    ACTIONS(804), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(806), 1,
      aux_sym_alter_table_rename_token1,
    STATE(274), 1,
      sym_alter_type_operation,
    STATE(275), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8000] = 5,
    ACTIONS(786), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(788), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(790), 1,
      sym_object_name,
    STATE(918), 1,
      sym_table_option_name,
    STATE(184), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [8018] = 3,
    ACTIONS(812), 1,
      aux_sym_relation_element_token1,
    ACTIONS(808), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(810), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8032] = 7,
    ACTIONS(814), 1,
      aux_sym_truncate_token2,
    ACTIONS(816), 1,
      aux_sym_privilege_token1,
    ACTIONS(818), 1,
      aux_sym_resource_token2,
    ACTIONS(820), 1,
      aux_sym_resource_token5,
    ACTIONS(822), 1,
      aux_sym_resource_token6,
    ACTIONS(824), 1,
      sym_object_name,
    STATE(860), 1,
      sym_resource,
  [8054] = 7,
    ACTIONS(826), 1,
      aux_sym_select_statement_token2,
    ACTIONS(828), 1,
      aux_sym_select_statement_token3,
    ACTIONS(830), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      sym_object_name,
    STATE(391), 1,
      sym_select_element,
    STATE(392), 1,
      sym_function_call,
    STATE(517), 1,
      sym_select_elements,
  [8076] = 7,
    ACTIONS(814), 1,
      aux_sym_truncate_token2,
    ACTIONS(816), 1,
      aux_sym_privilege_token1,
    ACTIONS(818), 1,
      aux_sym_resource_token2,
    ACTIONS(820), 1,
      aux_sym_resource_token5,
    ACTIONS(822), 1,
      aux_sym_resource_token6,
    ACTIONS(824), 1,
      sym_object_name,
    STATE(932), 1,
      sym_resource,
  [8098] = 6,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(553), 1,
      sym_column_not_null,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8118] = 5,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(836), 1,
      aux_sym__decimal_literal_token1,
    STATE(640), 1,
      sym__decimal_literal,
    STATE(639), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8136] = 7,
    ACTIONS(814), 1,
      aux_sym_truncate_token2,
    ACTIONS(816), 1,
      aux_sym_privilege_token1,
    ACTIONS(818), 1,
      aux_sym_resource_token2,
    ACTIONS(820), 1,
      aux_sym_resource_token5,
    ACTIONS(822), 1,
      aux_sym_resource_token6,
    ACTIONS(824), 1,
      sym_object_name,
    STATE(162), 1,
      sym_resource,
  [8158] = 3,
    ACTIONS(842), 1,
      aux_sym_relation_element_token1,
    ACTIONS(838), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(840), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8172] = 6,
    ACTIONS(844), 1,
      aux_sym_truncate_token2,
    ACTIONS(846), 1,
      aux_sym_resource_token2,
    ACTIONS(848), 1,
      aux_sym_resource_token6,
    ACTIONS(850), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(852), 1,
      aux_sym_drop_type_token1,
    ACTIONS(854), 1,
      aux_sym_drop_user_token1,
  [8191] = 5,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(45), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8208] = 2,
    ACTIONS(856), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8219] = 6,
    ACTIONS(830), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      sym_object_name,
    ACTIONS(860), 1,
      aux_sym_select_statement_token3,
    STATE(391), 1,
      sym_select_element,
    STATE(392), 1,
      sym_function_call,
    STATE(626), 1,
      sym_select_elements,
  [8238] = 1,
    ACTIONS(862), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8246] = 1,
    ACTIONS(864), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8254] = 5,
    ACTIONS(830), 1,
      anon_sym_STAR,
    ACTIONS(866), 1,
      sym_object_name,
    STATE(391), 1,
      sym_select_element,
    STATE(392), 1,
      sym_function_call,
    STATE(626), 1,
      sym_select_elements,
  [8270] = 3,
    ACTIONS(870), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(446), 1,
      sym_using_timestamp_spec,
    ACTIONS(868), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8282] = 1,
    ACTIONS(872), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8290] = 5,
    ACTIONS(830), 1,
      anon_sym_STAR,
    ACTIONS(866), 1,
      sym_object_name,
    STATE(391), 1,
      sym_select_element,
    STATE(392), 1,
      sym_function_call,
    STATE(642), 1,
      sym_select_elements,
  [8306] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(180), 2,
      sym_option_hash,
      sym_table_option_value,
  [8318] = 1,
    ACTIONS(878), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8326] = 5,
    ACTIONS(880), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(882), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(884), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(886), 1,
      aux_sym_role_with_option_token4,
    STATE(100), 1,
      sym_role_with_option,
  [8342] = 1,
    ACTIONS(888), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8350] = 5,
    ACTIONS(880), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(882), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(884), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(886), 1,
      aux_sym_role_with_option_token4,
    STATE(167), 1,
      sym_role_with_option,
  [8366] = 1,
    ACTIONS(890), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8374] = 1,
    ACTIONS(892), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8382] = 5,
    ACTIONS(894), 1,
      sym__string_literal,
    ACTIONS(896), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(898), 1,
      aux_sym_create_index_token3,
    ACTIONS(900), 1,
      sym_object_name,
    STATE(750), 1,
      sym_short_index_name,
  [8398] = 4,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      sym_object_name,
    STATE(757), 1,
      sym_primary_key_definition,
    STATE(758), 2,
      sym_compound_key,
      sym_composite_key,
  [8412] = 5,
    ACTIONS(906), 1,
      aux_sym_from_spec_token1,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(375), 1,
      sym_from_spec,
    STATE(397), 1,
      sym_delete_column_item,
    STATE(523), 1,
      sym_delete_column_list,
  [8428] = 5,
    ACTIONS(906), 1,
      aux_sym_from_spec_token1,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(378), 1,
      sym_from_spec,
    STATE(397), 1,
      sym_delete_column_item,
    STATE(649), 1,
      sym_delete_column_list,
  [8444] = 3,
    ACTIONS(870), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(488), 1,
      sym_using_timestamp_spec,
    ACTIONS(910), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8456] = 1,
    ACTIONS(912), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8463] = 4,
    ACTIONS(894), 1,
      sym__string_literal,
    ACTIONS(900), 1,
      sym_object_name,
    ACTIONS(914), 1,
      aux_sym_create_index_token3,
    STATE(654), 1,
      sym_short_index_name,
  [8476] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(919), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8487] = 4,
    ACTIONS(921), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(923), 1,
      aux_sym_primary_key_column_token1,
    STATE(419), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(421), 1,
      aux_sym_relation_elements_repeat1,
  [8500] = 4,
    ACTIONS(921), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(925), 1,
      aux_sym_primary_key_column_token1,
    STATE(367), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(429), 1,
      aux_sym_relation_elements_repeat1,
  [8513] = 4,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      aux_sym_function_args_repeat1,
  [8526] = 2,
    ACTIONS(931), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(933), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8535] = 3,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(938), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8546] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(942), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8557] = 4,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(944), 1,
      aux_sym_update_assignments_token1,
    STATE(521), 1,
      sym_update_assignments,
    STATE(610), 1,
      sym_using_ttl_timestamp,
  [8570] = 3,
    ACTIONS(948), 1,
      aux_sym_primary_key_column_token1,
    STATE(547), 1,
      sym_primary_key_column,
    ACTIONS(946), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8581] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(870), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(104), 1,
      sym_where_spec,
    STATE(580), 1,
      sym_using_timestamp_spec,
  [8594] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(870), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(533), 1,
      sym_using_timestamp_spec,
  [8607] = 2,
    ACTIONS(952), 1,
      aux_sym_begin_batch_token5,
    ACTIONS(950), 3,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
      aux_sym_begin_batch_token4,
  [8616] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(870), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(141), 1,
      sym_where_spec,
    STATE(617), 1,
      sym_using_timestamp_spec,
  [8629] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(954), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8640] = 4,
    ACTIONS(956), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(958), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
    STATE(683), 1,
      sym_primary_key_element,
  [8653] = 4,
    ACTIONS(956), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(958), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
    STATE(865), 1,
      sym_primary_key_element,
  [8666] = 4,
    ACTIONS(259), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(944), 1,
      aux_sym_update_assignments_token1,
    STATE(644), 1,
      sym_using_ttl_timestamp,
    STATE(646), 1,
      sym_update_assignments,
  [8679] = 3,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      aux_sym_select_element_token1,
    ACTIONS(960), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8690] = 3,
    ACTIONS(964), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(966), 1,
      sym_object_name,
    STATE(889), 1,
      sym_aggregate_name,
  [8700] = 2,
    ACTIONS(968), 1,
      aux_sym_resource_token1,
    ACTIONS(970), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [8708] = 3,
    ACTIONS(972), 1,
      aux_sym_truncate_token2,
    ACTIONS(974), 1,
      sym_object_name,
    STATE(230), 1,
      sym_table_name,
  [8718] = 3,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_init_cond_hash_repeat1,
  [8728] = 3,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8738] = 3,
    ACTIONS(986), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(988), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(990), 1,
      aux_sym_update_token1,
  [8748] = 3,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_init_cond_list_repeat1,
  [8758] = 3,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      aux_sym_from_spec_token1,
    STATE(436), 1,
      aux_sym_select_elements_repeat1,
  [8768] = 2,
    ACTIONS(1003), 1,
      aux_sym_select_element_token1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8776] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_init_cond_hash_repeat1,
  [8786] = 2,
    ACTIONS(1011), 1,
      anon_sym_LBRACK,
    ACTIONS(1009), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8794] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8804] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [8814] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      aux_sym_from_spec_token1,
    STATE(444), 1,
      aux_sym_delete_column_list_repeat1,
  [8824] = 3,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(590), 1,
      sym_assignment_element,
    STATE(912), 1,
      sym_indexed_column,
  [8834] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_init_cond_list_repeat1,
  [8844] = 3,
    ACTIONS(974), 1,
      sym_object_name,
    ACTIONS(1031), 1,
      aux_sym_delete_statement_token2,
    STATE(761), 1,
      sym_table_name,
  [8854] = 3,
    ACTIONS(1033), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1035), 1,
      sym_object_name,
    STATE(748), 1,
      sym_keyspace_name,
  [8864] = 3,
    ACTIONS(1037), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(746), 1,
      sym_function_name,
  [8874] = 3,
    ACTIONS(1041), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1043), 1,
      sym_object_name,
    STATE(119), 1,
      sym_role_name,
  [8884] = 3,
    ACTIONS(1045), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1047), 1,
      aux_sym_insert_values_spec_token1,
    STATE(89), 1,
      sym_insert_values_spec,
  [8894] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_init_cond_hash_repeat1,
  [8904] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8914] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_init_cond_list_repeat1,
  [8924] = 3,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1055), 1,
      aux_sym_delete_statement_token2,
    STATE(741), 1,
      sym_aggregate_name,
  [8934] = 3,
    ACTIONS(1057), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1059), 1,
      sym_object_name,
    STATE(730), 1,
      sym_trigger_name,
  [8944] = 3,
    ACTIONS(1061), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(725), 1,
      sym_type_name,
  [8954] = 2,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8962] = 3,
    ACTIONS(1067), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(620), 1,
      sym_user_name,
  [8972] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_function_args_repeat1,
  [8982] = 3,
    ACTIONS(974), 1,
      sym_object_name,
    ACTIONS(1074), 1,
      aux_sym_delete_statement_token2,
    STATE(249), 1,
      sym_table_name,
  [8992] = 3,
    ACTIONS(1076), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(236), 1,
      sym_index_name,
  [9002] = 3,
    ACTIONS(1035), 1,
      sym_object_name,
    ACTIONS(1080), 1,
      aux_sym_delete_statement_token2,
    STATE(233), 1,
      sym_keyspace_name,
  [9012] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_relation_element_repeat1,
  [9022] = 3,
    ACTIONS(1039), 1,
      sym_object_name,
    ACTIONS(1084), 1,
      aux_sym_delete_statement_token2,
    STATE(221), 1,
      sym_function_name,
  [9032] = 3,
    ACTIONS(1086), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1089), 1,
      aux_sym_primary_key_column_token1,
    STATE(419), 1,
      aux_sym_materialized_view_where_repeat1,
  [9042] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_create_function_repeat1,
  [9052] = 3,
    ACTIONS(171), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1093), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [9062] = 3,
    ACTIONS(1043), 1,
      sym_object_name,
    ACTIONS(1095), 1,
      aux_sym_delete_statement_token2,
    STATE(219), 1,
      sym_role_name,
  [9072] = 3,
    ACTIONS(966), 1,
      sym_object_name,
    ACTIONS(1097), 1,
      aux_sym_delete_statement_token2,
    STATE(277), 1,
      sym_aggregate_name,
  [9082] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_clustering_key_list_repeat1,
  [9092] = 3,
    ACTIONS(1059), 1,
      sym_object_name,
    ACTIONS(1101), 1,
      aux_sym_delete_statement_token2,
    STATE(689), 1,
      sym_trigger_name,
  [9102] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(863), 1,
      sym_return_mode,
  [9112] = 3,
    ACTIONS(1063), 1,
      sym_object_name,
    ACTIONS(1107), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
      sym_type_name,
  [9122] = 3,
    ACTIONS(1069), 1,
      sym_object_name,
    ACTIONS(1109), 1,
      aux_sym_delete_statement_token2,
    STATE(260), 1,
      sym_user_name,
  [9132] = 3,
    ACTIONS(171), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(923), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [9142] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_clustering_key_list_repeat1,
  [9152] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_clustering_key_list_repeat1,
  [9162] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(432), 1,
      aux_sym_assignment_map_repeat1,
  [9172] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9182] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(842), 1,
      sym_return_mode,
  [9192] = 3,
    ACTIONS(866), 1,
      sym_object_name,
    STATE(392), 1,
      sym_function_call,
    STATE(636), 1,
      sym_select_element,
  [9202] = 3,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      aux_sym_from_spec_token1,
    STATE(484), 1,
      aux_sym_select_elements_repeat1,
  [9212] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      aux_sym_clustering_key_list_repeat1,
  [9222] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_create_function_repeat1,
  [9232] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(740), 1,
      sym_return_mode,
  [9242] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_column_definition_list_repeat1,
  [9252] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
  [9262] = 3,
    ACTIONS(836), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1134), 1,
      sym__string_literal,
    STATE(717), 1,
      sym__decimal_literal,
  [9272] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
    STATE(432), 1,
      aux_sym_assignment_map_repeat1,
  [9282] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      aux_sym_from_spec_token1,
    STATE(487), 1,
      aux_sym_delete_column_list_repeat1,
  [9292] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_create_function_repeat1,
  [9302] = 1,
    ACTIONS(910), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9308] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      aux_sym_option_hash_repeat1,
  [9318] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(804), 1,
      sym_return_mode,
  [9328] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(449), 1,
      aux_sym_replication_list_repeat1,
  [9338] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_relation_element_repeat2,
  [9348] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
  [9358] = 2,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [9366] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_assignment_map_repeat1,
  [9376] = 3,
    ACTIONS(1162), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(801), 1,
      sym_materialized_view_name,
  [9386] = 1,
    ACTIONS(919), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9392] = 3,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(445), 1,
      sym_typed_name,
  [9402] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9412] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(821), 1,
      sym_return_mode,
  [9422] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9432] = 2,
    ACTIONS(1176), 1,
      anon_sym_DOT,
    ACTIONS(1174), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9440] = 3,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_GT,
    STATE(461), 1,
      aux_sym_data_type_definition_repeat1,
  [9450] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      aux_sym_option_hash_repeat1,
  [9460] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9470] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(768), 1,
      sym_return_mode,
  [9480] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    STATE(449), 1,
      aux_sym_replication_list_repeat1,
  [9490] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      aux_sym_column_definition_list_repeat1,
  [9500] = 3,
    ACTIONS(836), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1195), 1,
      sym__string_literal,
    STATE(600), 1,
      sym__decimal_literal,
  [9510] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_expression_list_repeat1,
  [9520] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_relation_element_repeat2,
  [9530] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1204), 1,
      aux_sym_delete_statement_token2,
    STATE(248), 1,
      sym_materialized_view_name,
  [9540] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_assignment_set_repeat1,
  [9550] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_assignment_set_repeat1,
  [9560] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9570] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      aux_sym_create_function_repeat1,
  [9580] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_GT,
    STATE(461), 1,
      aux_sym_data_type_definition_repeat1,
  [9590] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(462), 1,
      aux_sym_option_hash_repeat1,
  [9600] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_create_function_repeat1,
  [9610] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_create_function_repeat1,
  [9620] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(715), 1,
      sym_return_mode,
  [9630] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_relation_element_repeat1,
  [9640] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(465), 1,
      aux_sym_replication_list_repeat1,
  [9650] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_expression_list_repeat1,
  [9660] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_typed_name,
  [9670] = 3,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1235), 1,
      aux_sym_from_spec_token1,
    STATE(484), 1,
      aux_sym_select_elements_repeat1,
  [9680] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      aux_sym_function_args_repeat1,
  [9690] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_function_args_repeat1,
  [9700] = 3,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      aux_sym_from_spec_token1,
    STATE(487), 1,
      aux_sym_delete_column_list_repeat1,
  [9710] = 1,
    ACTIONS(1244), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9716] = 3,
    ACTIONS(1045), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1047), 1,
      aux_sym_insert_values_spec_token1,
    STATE(92), 1,
      sym_insert_values_spec,
  [9726] = 3,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(466), 1,
      sym_column_definition,
    STATE(699), 1,
      sym_column_definition_list,
  [9736] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_assignment_set_repeat1,
  [9746] = 2,
    ACTIONS(1252), 1,
      anon_sym_COLON,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9754] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RBRACK,
    STATE(472), 1,
      aux_sym_assignment_set_repeat1,
  [9764] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_typed_name,
  [9774] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_create_function_repeat1,
  [9784] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_GT,
    STATE(475), 1,
      aux_sym_data_type_definition_repeat1,
  [9794] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [9804] = 3,
    ACTIONS(1103), 1,
      aux_sym_create_function_token1,
    ACTIONS(1105), 1,
      aux_sym_return_mode_token1,
    STATE(663), 1,
      sym_return_mode,
  [9814] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      sym_typed_name,
  [9824] = 3,
    ACTIONS(1039), 1,
      sym_object_name,
    ACTIONS(1267), 1,
      aux_sym_delete_statement_token2,
    STATE(881), 1,
      sym_function_name,
  [9834] = 3,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_column_definition_list_repeat1,
  [9844] = 3,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(506), 1,
      sym_assignment_element,
    STATE(912), 1,
      sym_indexed_column,
  [9854] = 3,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(466), 1,
      sym_column_definition,
    STATE(692), 1,
      sym_column_definition_list,
  [9864] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_expression_list_repeat1,
  [9874] = 1,
    ACTIONS(1276), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9880] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      aux_sym_where_spec_token1,
    STATE(396), 1,
      aux_sym_update_assignments_repeat1,
  [9890] = 2,
    ACTIONS(1280), 1,
      sym_object_name,
    STATE(826), 1,
      sym_clustering_key_list,
  [9897] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(276), 1,
      sym_user_with,
  [9904] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(224), 1,
      sym_index_name,
  [9911] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(382), 1,
      sym_table_name,
  [9918] = 1,
    ACTIONS(979), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9923] = 1,
    ACTIONS(1288), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9928] = 1,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9933] = 1,
    ACTIONS(995), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9938] = 1,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9943] = 2,
    ACTIONS(1292), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_replication_list,
  [9950] = 2,
    ACTIONS(1294), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [9957] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(65), 1,
      sym_table_name,
  [9964] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(928), 1,
      sym_function_name,
  [9971] = 2,
    ACTIONS(1298), 1,
      sym_object_name,
    STATE(168), 1,
      sym_alter_type_rename_item,
  [9978] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(139), 1,
      sym_where_spec,
  [9985] = 2,
    ACTIONS(1300), 1,
      sym_object_name,
    STATE(511), 1,
      sym_init_cond_hash_item,
  [9992] = 2,
    ACTIONS(1294), 1,
      aux_sym_from_spec_token1,
    STATE(378), 1,
      sym_from_spec,
  [9999] = 2,
    ACTIONS(1302), 1,
      anon_sym_EQ,
    ACTIONS(1304), 1,
      anon_sym_LBRACK,
  [10006] = 2,
    ACTIONS(836), 1,
      aux_sym__decimal_literal_token1,
    STATE(776), 1,
      sym__decimal_literal,
  [10013] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(592), 1,
      sym_table_name,
  [10020] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(259), 1,
      sym_table_name,
  [10027] = 2,
    ACTIONS(1306), 1,
      sym_object_name,
    STATE(206), 1,
      sym_user_name,
  [10034] = 2,
    ACTIONS(1308), 1,
      sym_object_name,
    STATE(207), 1,
      sym_type_name,
  [10041] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(208), 1,
      sym_table_name,
  [10048] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(137), 1,
      sym_typed_name,
  [10055] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_assignment_tuple,
  [10062] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
  [10069] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(899), 1,
      sym_trigger_name,
  [10076] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(127), 1,
      sym_where_spec,
  [10083] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(211), 1,
      sym_aggregate_name,
  [10090] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(284), 1,
      sym_materialized_view_name,
  [10097] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(212), 1,
      sym_role_name,
  [10104] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(213), 1,
      sym_function_name,
  [10111] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(218), 1,
      sym_keyspace_name,
  [10118] = 1,
    ACTIONS(1320), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10123] = 1,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10128] = 2,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(553), 1,
      sym_column_not_null,
  [10135] = 1,
    ACTIONS(1324), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10140] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(886), 1,
      sym_function_name,
  [10147] = 2,
    ACTIONS(1306), 1,
      sym_object_name,
    STATE(645), 1,
      sym_user_name,
  [10154] = 1,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10159] = 1,
    ACTIONS(1328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10164] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(882), 1,
      sym_function_name,
  [10171] = 1,
    ACTIONS(1272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10176] = 2,
    ACTIONS(1308), 1,
      sym_object_name,
    STATE(671), 1,
      sym_type_name,
  [10183] = 2,
    ACTIONS(1330), 1,
      sym_object_name,
    STATE(788), 1,
      sym_column_list,
  [10190] = 1,
    ACTIONS(1089), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10195] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(673), 1,
      sym_trigger_name,
  [10202] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(682), 1,
      sym_table_name,
  [10209] = 2,
    ACTIONS(1332), 1,
      aux_sym_primary_key_column_token1,
    STATE(149), 1,
      sym_primary_key_element,
  [10216] = 2,
    ACTIONS(1280), 1,
      sym_object_name,
    STATE(867), 1,
      sym_clustering_key_list,
  [10223] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(864), 1,
      sym_function_name,
  [10230] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(228), 1,
      sym_table_name,
  [10237] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(712), 1,
      sym_aggregate_name,
  [10244] = 2,
    ACTIONS(1334), 1,
      aux_sym_where_spec_token1,
    STATE(556), 1,
      sym_materialized_view_where,
  [10251] = 2,
    ACTIONS(1336), 1,
      sym__string_literal,
    STATE(481), 1,
      sym_replication_list_item,
  [10258] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(308), 1,
      sym_table_name,
  [10265] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(676), 1,
      sym_keyspace_name,
  [10272] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(148), 1,
      sym_role_name,
  [10279] = 1,
    ACTIONS(1338), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10284] = 2,
    ACTIONS(1340), 1,
      aux_sym_role_with_option_token1,
    STATE(93), 1,
      sym_user_password,
  [10291] = 2,
    ACTIONS(1308), 1,
      sym_object_name,
    STATE(332), 1,
      sym_type_name,
  [10298] = 2,
    ACTIONS(1306), 1,
      sym_object_name,
    STATE(508), 1,
      sym_user_name,
  [10305] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(136), 1,
      sym_typed_name,
  [10312] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(420), 1,
      sym_typed_name,
  [10319] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(373), 1,
      sym_table_name,
  [10326] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(561), 1,
      sym_table_name,
  [10333] = 2,
    ACTIONS(1342), 1,
      sym__string_literal,
    STATE(243), 1,
      sym_trigger_class,
  [10340] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(835), 1,
      sym_function_name,
  [10347] = 2,
    ACTIONS(1344), 1,
      sym__string_literal,
    STATE(476), 1,
      sym_option_hash_item,
  [10354] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(106), 1,
      sym_role_name,
  [10361] = 2,
    ACTIONS(1346), 1,
      aux_sym_durable_writes_token1,
    STATE(193), 1,
      sym_durable_writes,
  [10368] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(859), 1,
      sym_table_name,
  [10375] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(141), 1,
      sym_where_spec,
  [10382] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(666), 1,
      sym_function_name,
  [10389] = 2,
    ACTIONS(1298), 1,
      sym_object_name,
    STATE(122), 1,
      sym_alter_type_rename_item,
  [10396] = 2,
    ACTIONS(1348), 1,
      sym_object_name,
    STATE(616), 1,
      sym_delete_column_item,
  [10403] = 2,
    ACTIONS(1332), 1,
      aux_sym_primary_key_column_token1,
    STATE(97), 1,
      sym_primary_key_element,
  [10410] = 2,
    ACTIONS(1342), 1,
      sym__string_literal,
    STATE(188), 1,
      sym_trigger_class,
  [10417] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(474), 1,
      sym_typed_name,
  [10424] = 2,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(368), 1,
      sym_column_not_null,
  [10431] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(808), 1,
      sym_function_name,
  [10438] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(672), 1,
      sym_function_name,
  [10445] = 1,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10450] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(674), 1,
      sym_aggregate_name,
  [10457] = 2,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
    STATE(489), 1,
      sym_insert_column_spec,
  [10464] = 1,
    ACTIONS(1147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10469] = 1,
    ACTIONS(1352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10474] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(751), 1,
      sym_function_name,
  [10481] = 2,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_insert_column_spec,
  [10488] = 1,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10493] = 1,
    ACTIONS(931), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10498] = 1,
    ACTIONS(1354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10503] = 1,
    ACTIONS(1356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10508] = 2,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [10515] = 2,
    ACTIONS(1362), 1,
      sym_object_name,
    STATE(796), 1,
      sym_partition_key_list,
  [10522] = 2,
    ACTIONS(1292), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_replication_list,
  [10529] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(738), 1,
      sym_table_name,
  [10536] = 2,
    ACTIONS(1296), 1,
      sym_object_name,
    STATE(786), 1,
      sym_function_name,
  [10543] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(716), 1,
      sym_table_name,
  [10550] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(132), 1,
      sym_typed_name,
  [10557] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(765), 1,
      sym_keyspace_name,
  [10564] = 2,
    ACTIONS(1334), 1,
      aux_sym_where_spec_token1,
    STATE(584), 1,
      sym_materialized_view_where,
  [10571] = 2,
    ACTIONS(944), 1,
      aux_sym_update_assignments_token1,
    STATE(535), 1,
      sym_update_assignments,
  [10578] = 2,
    ACTIONS(1330), 1,
      sym_object_name,
    STATE(780), 1,
      sym_column_list,
  [10585] = 1,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10590] = 2,
    ACTIONS(1330), 1,
      sym_object_name,
    STATE(669), 1,
      sym_column_list,
  [10597] = 2,
    ACTIONS(1364), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1366), 1,
      sym_object_name,
  [10604] = 2,
    ACTIONS(1344), 1,
      sym__string_literal,
    STATE(593), 1,
      sym_option_hash_item,
  [10611] = 1,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10616] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
  [10623] = 1,
    ACTIONS(1368), 2,
      sym__string_literal,
      sym__float_literal,
  [10628] = 2,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_option_hash,
  [10635] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(238), 1,
      sym_user_with,
  [10642] = 2,
    ACTIONS(1370), 1,
      aux_sym_resource_token5,
    ACTIONS(1372), 1,
      aux_sym_drop_aggregate_token1,
  [10649] = 1,
    ACTIONS(1374), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10654] = 2,
    ACTIONS(1336), 1,
      sym__string_literal,
    STATE(597), 1,
      sym_replication_list_item,
  [10661] = 2,
    ACTIONS(836), 1,
      aux_sym__decimal_literal_token1,
    STATE(159), 1,
      sym__decimal_literal,
  [10668] = 2,
    ACTIONS(1292), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_replication_list,
  [10675] = 2,
    ACTIONS(1294), 1,
      aux_sym_from_spec_token1,
    STATE(43), 1,
      sym_from_spec,
  [10682] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(225), 1,
      sym_table_name,
  [10689] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(469), 1,
      sym_assignment_tuple,
  [10696] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [10703] = 1,
    ACTIONS(1200), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10708] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
      sym_assignment_tuple,
  [10715] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(803), 1,
      sym_table_name,
  [10722] = 1,
    ACTIONS(1376), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10727] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(790), 1,
      sym_materialized_view_name,
  [10734] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_assignment_tuple,
  [10741] = 1,
    ACTIONS(1235), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10746] = 2,
    ACTIONS(1346), 1,
      aux_sym_durable_writes_token1,
    STATE(268), 1,
      sym_durable_writes,
  [10753] = 1,
    ACTIONS(1378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10758] = 1,
    ACTIONS(1380), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10763] = 1,
    ACTIONS(1382), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10768] = 2,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
  [10775] = 2,
    ACTIONS(1294), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [10782] = 2,
    ACTIONS(1384), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1386), 1,
      aux_sym_using_ttl_timestamp_token1,
  [10789] = 2,
    ACTIONS(944), 1,
      aux_sym_update_assignments_token1,
    STATE(521), 1,
      sym_update_assignments,
  [10796] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(226), 1,
      sym_user_with,
  [10803] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
  [10810] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(596), 1,
      sym_table_name,
  [10817] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(113), 1,
      sym_materialized_view_name,
  [10824] = 2,
    ACTIONS(1294), 1,
      aux_sym_from_spec_token1,
    STATE(376), 1,
      sym_from_spec,
  [10831] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(609), 1,
      sym_table_name,
  [10838] = 2,
    ACTIONS(1346), 1,
      aux_sym_durable_writes_token1,
    STATE(254), 1,
      sym_durable_writes,
  [10845] = 1,
    ACTIONS(1388), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10850] = 1,
    ACTIONS(1390), 1,
      aux_sym_using_timestamp_spec_token2,
  [10854] = 1,
    ACTIONS(1392), 1,
      aux_sym_create_index_token3,
  [10858] = 1,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
  [10862] = 1,
    ACTIONS(1396), 1,
      anon_sym_EQ,
  [10866] = 1,
    ACTIONS(1398), 1,
      anon_sym_COLON,
  [10870] = 1,
    ACTIONS(1400), 1,
      aux_sym_delete_statement_token3,
  [10874] = 1,
    ACTIONS(1402), 1,
      anon_sym_LPAREN,
  [10878] = 1,
    ACTIONS(1404), 1,
      aux_sym_constant_token2,
  [10882] = 1,
    ACTIONS(1406), 1,
      aux_sym_return_mode_token2,
  [10886] = 1,
    ACTIONS(1408), 1,
      aux_sym_create_function_token2,
  [10890] = 1,
    ACTIONS(1410), 1,
      aux_sym_create_function_token1,
  [10894] = 1,
    ACTIONS(1412), 1,
      anon_sym_COLON,
  [10898] = 1,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
  [10902] = 1,
    ACTIONS(1416), 1,
      aux_sym_create_aggregate_token4,
  [10906] = 1,
    ACTIONS(1418), 1,
      sym_object_name,
  [10910] = 1,
    ACTIONS(1420), 1,
      sym_object_name,
  [10914] = 1,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
  [10918] = 1,
    ACTIONS(1424), 1,
      aux_sym_select_statement_token1,
  [10922] = 1,
    ACTIONS(1426), 1,
      anon_sym_LPAREN,
  [10926] = 1,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
  [10930] = 1,
    ACTIONS(1430), 1,
      aux_sym_using_timestamp_spec_token1,
  [10934] = 1,
    ACTIONS(1432), 1,
      anon_sym_LPAREN,
  [10938] = 1,
    ACTIONS(1434), 1,
      aux_sym_create_aggregate_token3,
  [10942] = 1,
    ACTIONS(1436), 1,
      aux_sym_create_keyspace_token1,
  [10946] = 1,
    ACTIONS(1438), 1,
      anon_sym_LPAREN,
  [10950] = 1,
    ACTIONS(1440), 1,
      anon_sym_EQ,
  [10954] = 1,
    ACTIONS(1442), 1,
      aux_sym_delete_statement_token3,
  [10958] = 1,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
  [10962] = 1,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
  [10966] = 1,
    ACTIONS(1448), 1,
      anon_sym_LPAREN,
  [10970] = 1,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
  [10974] = 1,
    ACTIONS(1452), 1,
      aux_sym_delete_statement_token3,
  [10978] = 1,
    ACTIONS(1454), 1,
      sym_object_name,
  [10982] = 1,
    ACTIONS(1456), 1,
      aux_sym_delete_statement_token3,
  [10986] = 1,
    ACTIONS(1458), 1,
      aux_sym_delete_statement_token3,
  [10990] = 1,
    ACTIONS(1460), 1,
      aux_sym_delete_statement_token3,
  [10994] = 1,
    ACTIONS(1462), 1,
      aux_sym_create_index_token3,
  [10998] = 1,
    ACTIONS(1464), 1,
      aux_sym_delete_statement_token3,
  [11002] = 1,
    ACTIONS(1466), 1,
      aux_sym_select_statement_token5,
  [11006] = 1,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
  [11010] = 1,
    ACTIONS(1470), 1,
      aux_sym_delete_statement_token3,
  [11014] = 1,
    ACTIONS(1472), 1,
      sym_object_name,
  [11018] = 1,
    ACTIONS(1474), 1,
      aux_sym_delete_statement_token3,
  [11022] = 1,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
  [11026] = 1,
    ACTIONS(1478), 1,
      aux_sym_delete_statement_token3,
  [11030] = 1,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
  [11034] = 1,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
  [11038] = 1,
    ACTIONS(1484), 1,
      aux_sym_delete_statement_token3,
  [11042] = 1,
    ACTIONS(1486), 1,
      anon_sym_LPAREN,
  [11046] = 1,
    ACTIONS(1488), 1,
      aux_sym_delete_statement_token3,
  [11050] = 1,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
  [11054] = 1,
    ACTIONS(1492), 1,
      aux_sym_delete_statement_token3,
  [11058] = 1,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
  [11062] = 1,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
  [11066] = 1,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
  [11070] = 1,
    ACTIONS(1500), 1,
      aux_sym_select_statement_token5,
  [11074] = 1,
    ACTIONS(1502), 1,
      aux_sym_create_aggregate_token3,
  [11078] = 1,
    ACTIONS(1504), 1,
      aux_sym_select_statement_token5,
  [11082] = 1,
    ACTIONS(1506), 1,
      aux_sym_order_spec_token2,
  [11086] = 1,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
  [11090] = 1,
    ACTIONS(1510), 1,
      anon_sym_EQ,
  [11094] = 1,
    ACTIONS(1512), 1,
      aux_sym_insert_statement_token3,
  [11098] = 1,
    ACTIONS(1514), 1,
      aux_sym_create_function_token1,
  [11102] = 1,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [11106] = 1,
    ACTIONS(1518), 1,
      anon_sym_RBRACK,
  [11110] = 1,
    ACTIONS(1520), 1,
      aux_sym_return_mode_token2,
  [11114] = 1,
    ACTIONS(1522), 1,
      aux_sym_create_function_token1,
  [11118] = 1,
    ACTIONS(1524), 1,
      sym_object_name,
  [11122] = 1,
    ACTIONS(1526), 1,
      aux_sym_create_function_token2,
  [11126] = 1,
    ACTIONS(1528), 1,
      aux_sym_insert_statement_token3,
  [11130] = 1,
    ACTIONS(1530), 1,
      sym_object_name,
  [11134] = 1,
    ACTIONS(1532), 1,
      aux_sym__decimal_literal_token1,
  [11138] = 1,
    ACTIONS(1534), 1,
      anon_sym_LPAREN,
  [11142] = 1,
    ACTIONS(1536), 1,
      sym__boolean_literal,
  [11146] = 1,
    ACTIONS(1538), 1,
      aux_sym_create_aggregate_token3,
  [11150] = 1,
    ACTIONS(1540), 1,
      aux_sym_insert_statement_token3,
  [11154] = 1,
    ACTIONS(1542), 1,
      aux_sym_using_ttl_timestamp_token1,
  [11158] = 1,
    ACTIONS(1544), 1,
      aux_sym_using_timestamp_spec_token1,
  [11162] = 1,
    ACTIONS(1546), 1,
      sym__boolean_literal,
  [11166] = 1,
    ACTIONS(1548), 1,
      aux_sym_select_statement_token5,
  [11170] = 1,
    ACTIONS(1550), 1,
      aux_sym_delete_statement_token3,
  [11174] = 1,
    ACTIONS(1552), 1,
      sym__string_literal,
  [11178] = 1,
    ACTIONS(1554), 1,
      anon_sym_LPAREN,
  [11182] = 1,
    ACTIONS(1556), 1,
      aux_sym_delete_statement_token3,
  [11186] = 1,
    ACTIONS(1558), 1,
      aux_sym_insert_statement_token3,
  [11190] = 1,
    ACTIONS(1560), 1,
      anon_sym_LPAREN,
  [11194] = 1,
    ACTIONS(1562), 1,
      anon_sym_EQ,
  [11198] = 1,
    ACTIONS(1564), 1,
      aux_sym_create_function_token1,
  [11202] = 1,
    ACTIONS(1566), 1,
      anon_sym_LPAREN,
  [11206] = 1,
    ACTIONS(1568), 1,
      aux_sym_create_index_token3,
  [11210] = 1,
    ACTIONS(1570), 1,
      aux_sym_insert_statement_token3,
  [11214] = 1,
    ACTIONS(1572), 1,
      aux_sym_constant_token2,
  [11218] = 1,
    ACTIONS(1574), 1,
      aux_sym_insert_statement_token3,
  [11222] = 1,
    ACTIONS(1576), 1,
      anon_sym_LPAREN,
  [11226] = 1,
    ACTIONS(1578), 1,
      aux_sym_insert_statement_token3,
  [11230] = 1,
    ACTIONS(1580), 1,
      aux_sym_create_keyspace_token1,
  [11234] = 1,
    ACTIONS(1582), 1,
      aux_sym_insert_statement_token3,
  [11238] = 1,
    ACTIONS(1584), 1,
      aux_sym_create_index_token3,
  [11242] = 1,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
  [11246] = 1,
    ACTIONS(1588), 1,
      sym_object_name,
  [11250] = 1,
    ACTIONS(1590), 1,
      aux_sym_delete_statement_token3,
  [11254] = 1,
    ACTIONS(1592), 1,
      aux_sym_insert_statement_token3,
  [11258] = 1,
    ACTIONS(1594), 1,
      aux_sym_create_keyspace_token2,
  [11262] = 1,
    ACTIONS(1596), 1,
      anon_sym_EQ,
  [11266] = 1,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
  [11270] = 1,
    ACTIONS(1600), 1,
      anon_sym_RPAREN,
  [11274] = 1,
    ACTIONS(1602), 1,
      aux_sym_create_index_token3,
  [11278] = 1,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
  [11282] = 1,
    ACTIONS(1606), 1,
      anon_sym_LPAREN,
  [11286] = 1,
    ACTIONS(1608), 1,
      sym_object_name,
  [11290] = 1,
    ACTIONS(1610), 1,
      aux_sym_delete_statement_token3,
  [11294] = 1,
    ACTIONS(1612), 1,
      aux_sym_insert_statement_token3,
  [11298] = 1,
    ACTIONS(1614), 1,
      aux_sym_create_keyspace_token1,
  [11302] = 1,
    ACTIONS(1616), 1,
      sym__boolean_literal,
  [11306] = 1,
    ACTIONS(1618), 1,
      sym_object_name,
  [11310] = 1,
    ACTIONS(1620), 1,
      aux_sym_create_function_token1,
  [11314] = 1,
    ACTIONS(1622), 1,
      sym_object_name,
  [11318] = 1,
    ACTIONS(1624), 1,
      aux_sym_create_function_token1,
  [11322] = 1,
    ACTIONS(1626), 1,
      aux_sym_select_element_token1,
  [11326] = 1,
    ACTIONS(1628), 1,
      sym_object_name,
  [11330] = 1,
    ACTIONS(1630), 1,
      aux_sym_create_function_token2,
  [11334] = 1,
    ACTIONS(1632), 1,
      aux_sym__decimal_literal_token1,
  [11338] = 1,
    ACTIONS(1634), 1,
      aux_sym__decimal_literal_token1,
  [11342] = 1,
    ACTIONS(1636), 1,
      anon_sym_RBRACK,
  [11346] = 1,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
  [11350] = 1,
    ACTIONS(1640), 1,
      anon_sym_RPAREN,
  [11354] = 1,
    ACTIONS(1642), 1,
      aux_sym_create_aggregate_token5,
  [11358] = 1,
    ACTIONS(1644), 1,
      aux_sym_from_spec_token1,
  [11362] = 1,
    ACTIONS(1646), 1,
      aux_sym_delete_statement_token3,
  [11366] = 1,
    ACTIONS(1648), 1,
      aux_sym_delete_statement_token3,
  [11370] = 1,
    ACTIONS(1650), 1,
      anon_sym_RPAREN,
  [11374] = 1,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
  [11378] = 1,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [11382] = 1,
    ACTIONS(1656), 1,
      aux_sym_create_aggregate_token4,
  [11386] = 1,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
  [11390] = 1,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
  [11394] = 1,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [11398] = 1,
    ACTIONS(1664), 1,
      aux_sym_select_element_token1,
  [11402] = 1,
    ACTIONS(1666), 1,
      anon_sym_RPAREN,
  [11406] = 1,
    ACTIONS(1668), 1,
      aux_sym_using_timestamp_spec_token2,
  [11410] = 1,
    ACTIONS(1670), 1,
      anon_sym_LPAREN,
  [11414] = 1,
    ACTIONS(1672), 1,
      anon_sym_RPAREN,
  [11418] = 1,
    ACTIONS(1674), 1,
      sym_object_name,
  [11422] = 1,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
  [11426] = 1,
    ACTIONS(1678), 1,
      sym_object_name,
  [11430] = 1,
    ACTIONS(1680), 1,
      sym_object_name,
  [11434] = 1,
    ACTIONS(1682), 1,
      sym_object_name,
  [11438] = 1,
    ACTIONS(1684), 1,
      aux_sym_insert_statement_token3,
  [11442] = 1,
    ACTIONS(1686), 1,
      aux_sym_select_element_token1,
  [11446] = 1,
    ACTIONS(1688), 1,
      aux_sym_create_function_token2,
  [11450] = 1,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
  [11454] = 1,
    ACTIONS(1692), 1,
      aux_sym_create_function_token1,
  [11458] = 1,
    ACTIONS(1694), 1,
      sym__code_block,
  [11462] = 1,
    ACTIONS(1696), 1,
      aux_sym_select_element_token1,
  [11466] = 1,
    ACTIONS(1698), 1,
      sym_object_name,
  [11470] = 1,
    ACTIONS(1700), 1,
      aux_sym_create_aggregate_token4,
  [11474] = 1,
    ACTIONS(1702), 1,
      aux_sym_order_spec_token2,
  [11478] = 1,
    ACTIONS(1704), 1,
      sym_object_name,
  [11482] = 1,
    ACTIONS(746), 1,
      aux_sym_column_not_null_token1,
  [11486] = 1,
    ACTIONS(1706), 1,
      aux_sym_insert_statement_token2,
  [11490] = 1,
    ACTIONS(1708), 1,
      aux_sym_delete_statement_token3,
  [11494] = 1,
    ACTIONS(1710), 1,
      aux_sym_compact_storage_token2,
  [11498] = 1,
    ACTIONS(1712), 1,
      aux_sym_insert_statement_token3,
  [11502] = 1,
    ACTIONS(1714), 1,
      aux_sym_create_aggregate_token3,
  [11506] = 1,
    ACTIONS(1716), 1,
      aux_sym_insert_statement_token2,
  [11510] = 1,
    ACTIONS(1718), 1,
      anon_sym_COLON,
  [11514] = 1,
    ACTIONS(1720), 1,
      sym_object_name,
  [11518] = 1,
    ACTIONS(1722), 1,
      anon_sym_EQ,
  [11522] = 1,
    ACTIONS(1724), 1,
      aux_sym_create_function_token1,
  [11526] = 1,
    ACTIONS(1726), 1,
      aux_sym_drop_materialized_view_token2,
  [11530] = 1,
    ACTIONS(1728), 1,
      anon_sym_EQ,
  [11534] = 1,
    ACTIONS(1730), 1,
      anon_sym_COMMA,
  [11538] = 1,
    ACTIONS(1732), 1,
      aux_sym_delete_statement_token3,
  [11542] = 1,
    ACTIONS(1734), 1,
      anon_sym_RPAREN,
  [11546] = 1,
    ACTIONS(1736), 1,
      aux_sym_constant_token2,
  [11550] = 1,
    ACTIONS(1738), 1,
      sym_object_name,
  [11554] = 1,
    ACTIONS(1740), 1,
      aux_sym_create_function_token2,
  [11558] = 1,
    ACTIONS(1742), 1,
      aux_sym_create_index_token3,
  [11562] = 1,
    ACTIONS(1744), 1,
      sym_object_name,
  [11566] = 1,
    ACTIONS(1746), 1,
      sym__code_block,
  [11570] = 1,
    ACTIONS(1748), 1,
      aux_sym_select_element_token1,
  [11574] = 1,
    ACTIONS(1750), 1,
      aux_sym_create_index_token3,
  [11578] = 1,
    ACTIONS(1752), 1,
      aux_sym_create_aggregate_token6,
  [11582] = 1,
    ACTIONS(1754), 1,
      aux_sym_resource_token2,
  [11586] = 1,
    ACTIONS(1756), 1,
      aux_sym_insert_statement_token3,
  [11590] = 1,
    ACTIONS(1758), 1,
      aux_sym_create_index_token3,
  [11594] = 1,
    ACTIONS(1760), 1,
      anon_sym_EQ,
  [11598] = 1,
    ACTIONS(1762), 1,
      aux_sym_create_keyspace_token2,
  [11602] = 1,
    ACTIONS(1764), 1,
      anon_sym_RPAREN,
  [11606] = 1,
    ACTIONS(1766), 1,
      aux_sym_create_function_token1,
  [11610] = 1,
    ACTIONS(1768), 1,
      aux_sym_delete_statement_token3,
  [11614] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [11618] = 1,
    ACTIONS(1772), 1,
      aux_sym_create_aggregate_token5,
  [11622] = 1,
    ACTIONS(1774), 1,
      sym_object_name,
  [11626] = 1,
    ACTIONS(1776), 1,
      sym_object_name,
  [11630] = 1,
    ACTIONS(1778), 1,
      aux_sym_select_statement_token1,
  [11634] = 1,
    ACTIONS(1780), 1,
      aux_sym_select_element_token1,
  [11638] = 1,
    ACTIONS(1782), 1,
      sym_object_name,
  [11642] = 1,
    ACTIONS(1784), 1,
      aux_sym_create_function_token2,
  [11646] = 1,
    ACTIONS(1786), 1,
      aux_sym_drop_materialized_view_token2,
  [11650] = 1,
    ACTIONS(1788), 1,
      sym__code_block,
  [11654] = 1,
    ACTIONS(1790), 1,
      aux_sym_create_aggregate_token5,
  [11658] = 1,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
  [11662] = 1,
    ACTIONS(1792), 1,
      sym_object_name,
  [11666] = 1,
    ACTIONS(1794), 1,
      aux_sym_constant_token2,
  [11670] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [11674] = 1,
    ACTIONS(1798), 1,
      anon_sym_LPAREN,
  [11678] = 1,
    ACTIONS(1800), 1,
      aux_sym_from_spec_token1,
  [11682] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [11686] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [11690] = 1,
    ACTIONS(1806), 1,
      aux_sym_create_function_token1,
  [11694] = 1,
    ACTIONS(1808), 1,
      aux_sym_create_aggregate_token4,
  [11698] = 1,
    ACTIONS(1810), 1,
      anon_sym_RPAREN,
  [11702] = 1,
    ACTIONS(1812), 1,
      aux_sym_relation_contains_key_token2,
  [11706] = 1,
    ACTIONS(1814), 1,
      anon_sym_RPAREN,
  [11710] = 1,
    ACTIONS(1816), 1,
      sym__code_block,
  [11714] = 1,
    ACTIONS(1818), 1,
      aux_sym_select_element_token1,
  [11718] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [11722] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [11726] = 1,
    ACTIONS(1824), 1,
      aux_sym_relation_contains_key_token2,
  [11730] = 1,
    ACTIONS(1826), 1,
      sym__string_literal,
  [11734] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [11738] = 1,
    ACTIONS(1830), 1,
      aux_sym_create_aggregate_token2,
  [11742] = 1,
    ACTIONS(1832), 1,
      aux_sym_insert_statement_token3,
  [11746] = 1,
    ACTIONS(1834), 1,
      aux_sym_create_keyspace_token2,
  [11750] = 1,
    ACTIONS(1836), 1,
      aux_sym_delete_statement_token3,
  [11754] = 1,
    ACTIONS(1838), 1,
      aux_sym_create_function_token2,
  [11758] = 1,
    ACTIONS(1840), 1,
      sym_object_name,
  [11762] = 1,
    ACTIONS(1842), 1,
      anon_sym_LPAREN,
  [11766] = 1,
    ACTIONS(1844), 1,
      aux_sym_create_aggregate_token6,
  [11770] = 1,
    ACTIONS(1846), 1,
      aux_sym_drop_materialized_view_token2,
  [11774] = 1,
    ACTIONS(1848), 1,
      sym__code_block,
  [11778] = 1,
    ACTIONS(1850), 1,
      aux_sym_select_element_token1,
  [11782] = 1,
    ACTIONS(1852), 1,
      aux_sym_create_aggregate_token6,
  [11786] = 1,
    ACTIONS(1854), 1,
      aux_sym_insert_statement_token3,
  [11790] = 1,
    ACTIONS(1856), 1,
      anon_sym_COLON,
  [11794] = 1,
    ACTIONS(1858), 1,
      anon_sym_LPAREN,
  [11798] = 1,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
  [11802] = 1,
    ACTIONS(1862), 1,
      aux_sym_select_statement_token5,
  [11806] = 1,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
  [11810] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [11814] = 1,
    ACTIONS(1868), 1,
      aux_sym_create_function_token2,
  [11818] = 1,
    ACTIONS(1870), 1,
      aux_sym_create_aggregate_token5,
  [11822] = 1,
    ACTIONS(1872), 1,
      aux_sym_delete_statement_token3,
  [11826] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [11830] = 1,
    ACTIONS(1876), 1,
      sym__code_block,
  [11834] = 1,
    ACTIONS(1878), 1,
      aux_sym_create_index_token3,
  [11838] = 1,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
  [11842] = 1,
    ACTIONS(1882), 1,
      aux_sym_select_statement_token5,
  [11846] = 1,
    ACTIONS(1884), 1,
      aux_sym_begin_batch_token5,
  [11850] = 1,
    ACTIONS(1886), 1,
      aux_sym__decimal_literal_token1,
  [11854] = 1,
    ACTIONS(1888), 1,
      aux_sym_grant_token2,
  [11858] = 1,
    ACTIONS(1890), 1,
      aux_sym__decimal_literal_token1,
  [11862] = 1,
    ACTIONS(1892), 1,
      aux_sym_drop_type_token1,
  [11866] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [11870] = 1,
    ACTIONS(1896), 1,
      anon_sym_EQ,
  [11874] = 1,
    ACTIONS(1898), 1,
      aux_sym_grant_token2,
  [11878] = 1,
    ACTIONS(1900), 1,
      aux_sym_select_element_token1,
  [11882] = 1,
    ACTIONS(1902), 1,
      sym_object_name,
  [11886] = 1,
    ACTIONS(1904), 1,
      anon_sym_EQ,
  [11890] = 1,
    ACTIONS(1906), 1,
      sym_object_name,
  [11894] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [11898] = 1,
    ACTIONS(1910), 1,
      sym_object_name,
  [11902] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [11906] = 1,
    ACTIONS(1914), 1,
      sym_object_name,
  [11910] = 1,
    ACTIONS(1916), 1,
      anon_sym_EQ,
  [11914] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [11918] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [11922] = 1,
    ACTIONS(1922), 1,
      sym_object_name,
  [11926] = 1,
    ACTIONS(1924), 1,
      anon_sym_EQ,
  [11930] = 1,
    ACTIONS(1926), 1,
      sym_object_name,
  [11934] = 1,
    ACTIONS(1928), 1,
      ts_builtin_sym_end,
  [11938] = 1,
    ACTIONS(1930), 1,
      aux_sym_order_spec_token1,
  [11942] = 1,
    ACTIONS(1932), 1,
      sym__code_block,
  [11946] = 1,
    ACTIONS(1934), 1,
      aux_sym_select_element_token1,
  [11950] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_aggregate_token6,
  [11954] = 1,
    ACTIONS(1938), 1,
      aux_sym_begin_batch_token5,
  [11958] = 1,
    ACTIONS(1940), 1,
      sym__code_block,
  [11962] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [11966] = 1,
    ACTIONS(1944), 1,
      aux_sym_grant_token2,
  [11970] = 1,
    ACTIONS(1946), 1,
      aux_sym_compact_storage_token2,
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
  [SMALL_STATE(31)] = 1104,
  [SMALL_STATE(32)] = 1133,
  [SMALL_STATE(33)] = 1165,
  [SMALL_STATE(34)] = 1196,
  [SMALL_STATE(35)] = 1227,
  [SMALL_STATE(36)] = 1254,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1316,
  [SMALL_STATE(39)] = 1343,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1423,
  [SMALL_STATE(42)] = 1453,
  [SMALL_STATE(43)] = 1483,
  [SMALL_STATE(44)] = 1523,
  [SMALL_STATE(45)] = 1549,
  [SMALL_STATE(46)] = 1574,
  [SMALL_STATE(47)] = 1599,
  [SMALL_STATE(48)] = 1624,
  [SMALL_STATE(49)] = 1671,
  [SMALL_STATE(50)] = 1696,
  [SMALL_STATE(51)] = 1721,
  [SMALL_STATE(52)] = 1746,
  [SMALL_STATE(53)] = 1775,
  [SMALL_STATE(54)] = 1804,
  [SMALL_STATE(55)] = 1829,
  [SMALL_STATE(56)] = 1876,
  [SMALL_STATE(57)] = 1901,
  [SMALL_STATE(58)] = 1926,
  [SMALL_STATE(59)] = 1951,
  [SMALL_STATE(60)] = 1975,
  [SMALL_STATE(61)] = 2009,
  [SMALL_STATE(62)] = 2053,
  [SMALL_STATE(63)] = 2077,
  [SMALL_STATE(64)] = 2111,
  [SMALL_STATE(65)] = 2145,
  [SMALL_STATE(66)] = 2169,
  [SMALL_STATE(67)] = 2193,
  [SMALL_STATE(68)] = 2218,
  [SMALL_STATE(69)] = 2243,
  [SMALL_STATE(70)] = 2266,
  [SMALL_STATE(71)] = 2291,
  [SMALL_STATE(72)] = 2316,
  [SMALL_STATE(73)] = 2341,
  [SMALL_STATE(74)] = 2366,
  [SMALL_STATE(75)] = 2391,
  [SMALL_STATE(76)] = 2419,
  [SMALL_STATE(77)] = 2447,
  [SMALL_STATE(78)] = 2469,
  [SMALL_STATE(79)] = 2491,
  [SMALL_STATE(80)] = 2515,
  [SMALL_STATE(81)] = 2537,
  [SMALL_STATE(82)] = 2565,
  [SMALL_STATE(83)] = 2587,
  [SMALL_STATE(84)] = 2613,
  [SMALL_STATE(85)] = 2635,
  [SMALL_STATE(86)] = 2657,
  [SMALL_STATE(87)] = 2681,
  [SMALL_STATE(88)] = 2707,
  [SMALL_STATE(89)] = 2735,
  [SMALL_STATE(90)] = 2763,
  [SMALL_STATE(91)] = 2785,
  [SMALL_STATE(92)] = 2807,
  [SMALL_STATE(93)] = 2835,
  [SMALL_STATE(94)] = 2861,
  [SMALL_STATE(95)] = 2883,
  [SMALL_STATE(96)] = 2904,
  [SMALL_STATE(97)] = 2929,
  [SMALL_STATE(98)] = 2954,
  [SMALL_STATE(99)] = 2975,
  [SMALL_STATE(100)] = 2996,
  [SMALL_STATE(101)] = 3021,
  [SMALL_STATE(102)] = 3042,
  [SMALL_STATE(103)] = 3063,
  [SMALL_STATE(104)] = 3088,
  [SMALL_STATE(105)] = 3113,
  [SMALL_STATE(106)] = 3134,
  [SMALL_STATE(107)] = 3159,
  [SMALL_STATE(108)] = 3184,
  [SMALL_STATE(109)] = 3205,
  [SMALL_STATE(110)] = 3226,
  [SMALL_STATE(111)] = 3251,
  [SMALL_STATE(112)] = 3272,
  [SMALL_STATE(113)] = 3297,
  [SMALL_STATE(114)] = 3322,
  [SMALL_STATE(115)] = 3347,
  [SMALL_STATE(116)] = 3372,
  [SMALL_STATE(117)] = 3397,
  [SMALL_STATE(118)] = 3418,
  [SMALL_STATE(119)] = 3443,
  [SMALL_STATE(120)] = 3468,
  [SMALL_STATE(121)] = 3493,
  [SMALL_STATE(122)] = 3516,
  [SMALL_STATE(123)] = 3541,
  [SMALL_STATE(124)] = 3566,
  [SMALL_STATE(125)] = 3591,
  [SMALL_STATE(126)] = 3616,
  [SMALL_STATE(127)] = 3639,
  [SMALL_STATE(128)] = 3664,
  [SMALL_STATE(129)] = 3687,
  [SMALL_STATE(130)] = 3708,
  [SMALL_STATE(131)] = 3729,
  [SMALL_STATE(132)] = 3754,
  [SMALL_STATE(133)] = 3775,
  [SMALL_STATE(134)] = 3800,
  [SMALL_STATE(135)] = 3825,
  [SMALL_STATE(136)] = 3850,
  [SMALL_STATE(137)] = 3875,
  [SMALL_STATE(138)] = 3900,
  [SMALL_STATE(139)] = 3921,
  [SMALL_STATE(140)] = 3946,
  [SMALL_STATE(141)] = 3971,
  [SMALL_STATE(142)] = 3996,
  [SMALL_STATE(143)] = 4017,
  [SMALL_STATE(144)] = 4042,
  [SMALL_STATE(145)] = 4063,
  [SMALL_STATE(146)] = 4084,
  [SMALL_STATE(147)] = 4105,
  [SMALL_STATE(148)] = 4130,
  [SMALL_STATE(149)] = 4155,
  [SMALL_STATE(150)] = 4180,
  [SMALL_STATE(151)] = 4200,
  [SMALL_STATE(152)] = 4222,
  [SMALL_STATE(153)] = 4242,
  [SMALL_STATE(154)] = 4264,
  [SMALL_STATE(155)] = 4284,
  [SMALL_STATE(156)] = 4304,
  [SMALL_STATE(157)] = 4324,
  [SMALL_STATE(158)] = 4344,
  [SMALL_STATE(159)] = 4366,
  [SMALL_STATE(160)] = 4386,
  [SMALL_STATE(161)] = 4408,
  [SMALL_STATE(162)] = 4428,
  [SMALL_STATE(163)] = 4450,
  [SMALL_STATE(164)] = 4472,
  [SMALL_STATE(165)] = 4494,
  [SMALL_STATE(166)] = 4516,
  [SMALL_STATE(167)] = 4536,
  [SMALL_STATE(168)] = 4556,
  [SMALL_STATE(169)] = 4576,
  [SMALL_STATE(170)] = 4596,
  [SMALL_STATE(171)] = 4616,
  [SMALL_STATE(172)] = 4636,
  [SMALL_STATE(173)] = 4656,
  [SMALL_STATE(174)] = 4676,
  [SMALL_STATE(175)] = 4696,
  [SMALL_STATE(176)] = 4716,
  [SMALL_STATE(177)] = 4736,
  [SMALL_STATE(178)] = 4756,
  [SMALL_STATE(179)] = 4778,
  [SMALL_STATE(180)] = 4798,
  [SMALL_STATE(181)] = 4818,
  [SMALL_STATE(182)] = 4838,
  [SMALL_STATE(183)] = 4860,
  [SMALL_STATE(184)] = 4882,
  [SMALL_STATE(185)] = 4902,
  [SMALL_STATE(186)] = 4921,
  [SMALL_STATE(187)] = 4940,
  [SMALL_STATE(188)] = 4959,
  [SMALL_STATE(189)] = 4978,
  [SMALL_STATE(190)] = 4997,
  [SMALL_STATE(191)] = 5016,
  [SMALL_STATE(192)] = 5035,
  [SMALL_STATE(193)] = 5054,
  [SMALL_STATE(194)] = 5073,
  [SMALL_STATE(195)] = 5092,
  [SMALL_STATE(196)] = 5111,
  [SMALL_STATE(197)] = 5130,
  [SMALL_STATE(198)] = 5149,
  [SMALL_STATE(199)] = 5168,
  [SMALL_STATE(200)] = 5187,
  [SMALL_STATE(201)] = 5206,
  [SMALL_STATE(202)] = 5225,
  [SMALL_STATE(203)] = 5244,
  [SMALL_STATE(204)] = 5263,
  [SMALL_STATE(205)] = 5298,
  [SMALL_STATE(206)] = 5317,
  [SMALL_STATE(207)] = 5336,
  [SMALL_STATE(208)] = 5355,
  [SMALL_STATE(209)] = 5374,
  [SMALL_STATE(210)] = 5393,
  [SMALL_STATE(211)] = 5412,
  [SMALL_STATE(212)] = 5431,
  [SMALL_STATE(213)] = 5450,
  [SMALL_STATE(214)] = 5469,
  [SMALL_STATE(215)] = 5488,
  [SMALL_STATE(216)] = 5507,
  [SMALL_STATE(217)] = 5526,
  [SMALL_STATE(218)] = 5545,
  [SMALL_STATE(219)] = 5564,
  [SMALL_STATE(220)] = 5583,
  [SMALL_STATE(221)] = 5602,
  [SMALL_STATE(222)] = 5621,
  [SMALL_STATE(223)] = 5640,
  [SMALL_STATE(224)] = 5659,
  [SMALL_STATE(225)] = 5678,
  [SMALL_STATE(226)] = 5697,
  [SMALL_STATE(227)] = 5716,
  [SMALL_STATE(228)] = 5735,
  [SMALL_STATE(229)] = 5754,
  [SMALL_STATE(230)] = 5773,
  [SMALL_STATE(231)] = 5792,
  [SMALL_STATE(232)] = 5811,
  [SMALL_STATE(233)] = 5830,
  [SMALL_STATE(234)] = 5849,
  [SMALL_STATE(235)] = 5868,
  [SMALL_STATE(236)] = 5887,
  [SMALL_STATE(237)] = 5906,
  [SMALL_STATE(238)] = 5925,
  [SMALL_STATE(239)] = 5944,
  [SMALL_STATE(240)] = 5963,
  [SMALL_STATE(241)] = 5982,
  [SMALL_STATE(242)] = 6001,
  [SMALL_STATE(243)] = 6020,
  [SMALL_STATE(244)] = 6039,
  [SMALL_STATE(245)] = 6058,
  [SMALL_STATE(246)] = 6077,
  [SMALL_STATE(247)] = 6096,
  [SMALL_STATE(248)] = 6115,
  [SMALL_STATE(249)] = 6134,
  [SMALL_STATE(250)] = 6153,
  [SMALL_STATE(251)] = 6172,
  [SMALL_STATE(252)] = 6191,
  [SMALL_STATE(253)] = 6210,
  [SMALL_STATE(254)] = 6229,
  [SMALL_STATE(255)] = 6248,
  [SMALL_STATE(256)] = 6267,
  [SMALL_STATE(257)] = 6286,
  [SMALL_STATE(258)] = 6307,
  [SMALL_STATE(259)] = 6326,
  [SMALL_STATE(260)] = 6345,
  [SMALL_STATE(261)] = 6364,
  [SMALL_STATE(262)] = 6383,
  [SMALL_STATE(263)] = 6402,
  [SMALL_STATE(264)] = 6421,
  [SMALL_STATE(265)] = 6440,
  [SMALL_STATE(266)] = 6459,
  [SMALL_STATE(267)] = 6478,
  [SMALL_STATE(268)] = 6497,
  [SMALL_STATE(269)] = 6516,
  [SMALL_STATE(270)] = 6535,
  [SMALL_STATE(271)] = 6554,
  [SMALL_STATE(272)] = 6573,
  [SMALL_STATE(273)] = 6606,
  [SMALL_STATE(274)] = 6625,
  [SMALL_STATE(275)] = 6644,
  [SMALL_STATE(276)] = 6663,
  [SMALL_STATE(277)] = 6682,
  [SMALL_STATE(278)] = 6701,
  [SMALL_STATE(279)] = 6720,
  [SMALL_STATE(280)] = 6739,
  [SMALL_STATE(281)] = 6758,
  [SMALL_STATE(282)] = 6777,
  [SMALL_STATE(283)] = 6796,
  [SMALL_STATE(284)] = 6815,
  [SMALL_STATE(285)] = 6834,
  [SMALL_STATE(286)] = 6853,
  [SMALL_STATE(287)] = 6872,
  [SMALL_STATE(288)] = 6890,
  [SMALL_STATE(289)] = 6920,
  [SMALL_STATE(290)] = 6950,
  [SMALL_STATE(291)] = 6980,
  [SMALL_STATE(292)] = 7010,
  [SMALL_STATE(293)] = 7040,
  [SMALL_STATE(294)] = 7074,
  [SMALL_STATE(295)] = 7103,
  [SMALL_STATE(296)] = 7132,
  [SMALL_STATE(297)] = 7165,
  [SMALL_STATE(298)] = 7194,
  [SMALL_STATE(299)] = 7225,
  [SMALL_STATE(300)] = 7254,
  [SMALL_STATE(301)] = 7283,
  [SMALL_STATE(302)] = 7311,
  [SMALL_STATE(303)] = 7336,
  [SMALL_STATE(304)] = 7361,
  [SMALL_STATE(305)] = 7395,
  [SMALL_STATE(306)] = 7419,
  [SMALL_STATE(307)] = 7439,
  [SMALL_STATE(308)] = 7460,
  [SMALL_STATE(309)] = 7483,
  [SMALL_STATE(310)] = 7504,
  [SMALL_STATE(311)] = 7527,
  [SMALL_STATE(312)] = 7558,
  [SMALL_STATE(313)] = 7579,
  [SMALL_STATE(314)] = 7600,
  [SMALL_STATE(315)] = 7621,
  [SMALL_STATE(316)] = 7642,
  [SMALL_STATE(317)] = 7659,
  [SMALL_STATE(318)] = 7676,
  [SMALL_STATE(319)] = 7696,
  [SMALL_STATE(320)] = 7719,
  [SMALL_STATE(321)] = 7742,
  [SMALL_STATE(322)] = 7765,
  [SMALL_STATE(323)] = 7786,
  [SMALL_STATE(324)] = 7807,
  [SMALL_STATE(325)] = 7828,
  [SMALL_STATE(326)] = 7851,
  [SMALL_STATE(327)] = 7874,
  [SMALL_STATE(328)] = 7895,
  [SMALL_STATE(329)] = 7918,
  [SMALL_STATE(330)] = 7939,
  [SMALL_STATE(331)] = 7962,
  [SMALL_STATE(332)] = 7982,
  [SMALL_STATE(333)] = 8000,
  [SMALL_STATE(334)] = 8018,
  [SMALL_STATE(335)] = 8032,
  [SMALL_STATE(336)] = 8054,
  [SMALL_STATE(337)] = 8076,
  [SMALL_STATE(338)] = 8098,
  [SMALL_STATE(339)] = 8118,
  [SMALL_STATE(340)] = 8136,
  [SMALL_STATE(341)] = 8158,
  [SMALL_STATE(342)] = 8172,
  [SMALL_STATE(343)] = 8191,
  [SMALL_STATE(344)] = 8208,
  [SMALL_STATE(345)] = 8219,
  [SMALL_STATE(346)] = 8238,
  [SMALL_STATE(347)] = 8246,
  [SMALL_STATE(348)] = 8254,
  [SMALL_STATE(349)] = 8270,
  [SMALL_STATE(350)] = 8282,
  [SMALL_STATE(351)] = 8290,
  [SMALL_STATE(352)] = 8306,
  [SMALL_STATE(353)] = 8318,
  [SMALL_STATE(354)] = 8326,
  [SMALL_STATE(355)] = 8342,
  [SMALL_STATE(356)] = 8350,
  [SMALL_STATE(357)] = 8366,
  [SMALL_STATE(358)] = 8374,
  [SMALL_STATE(359)] = 8382,
  [SMALL_STATE(360)] = 8398,
  [SMALL_STATE(361)] = 8412,
  [SMALL_STATE(362)] = 8428,
  [SMALL_STATE(363)] = 8444,
  [SMALL_STATE(364)] = 8456,
  [SMALL_STATE(365)] = 8463,
  [SMALL_STATE(366)] = 8476,
  [SMALL_STATE(367)] = 8487,
  [SMALL_STATE(368)] = 8500,
  [SMALL_STATE(369)] = 8513,
  [SMALL_STATE(370)] = 8526,
  [SMALL_STATE(371)] = 8535,
  [SMALL_STATE(372)] = 8546,
  [SMALL_STATE(373)] = 8557,
  [SMALL_STATE(374)] = 8570,
  [SMALL_STATE(375)] = 8581,
  [SMALL_STATE(376)] = 8594,
  [SMALL_STATE(377)] = 8607,
  [SMALL_STATE(378)] = 8616,
  [SMALL_STATE(379)] = 8629,
  [SMALL_STATE(380)] = 8640,
  [SMALL_STATE(381)] = 8653,
  [SMALL_STATE(382)] = 8666,
  [SMALL_STATE(383)] = 8679,
  [SMALL_STATE(384)] = 8690,
  [SMALL_STATE(385)] = 8700,
  [SMALL_STATE(386)] = 8708,
  [SMALL_STATE(387)] = 8718,
  [SMALL_STATE(388)] = 8728,
  [SMALL_STATE(389)] = 8738,
  [SMALL_STATE(390)] = 8748,
  [SMALL_STATE(391)] = 8758,
  [SMALL_STATE(392)] = 8768,
  [SMALL_STATE(393)] = 8776,
  [SMALL_STATE(394)] = 8786,
  [SMALL_STATE(395)] = 8794,
  [SMALL_STATE(396)] = 8804,
  [SMALL_STATE(397)] = 8814,
  [SMALL_STATE(398)] = 8824,
  [SMALL_STATE(399)] = 8834,
  [SMALL_STATE(400)] = 8844,
  [SMALL_STATE(401)] = 8854,
  [SMALL_STATE(402)] = 8864,
  [SMALL_STATE(403)] = 8874,
  [SMALL_STATE(404)] = 8884,
  [SMALL_STATE(405)] = 8894,
  [SMALL_STATE(406)] = 8904,
  [SMALL_STATE(407)] = 8914,
  [SMALL_STATE(408)] = 8924,
  [SMALL_STATE(409)] = 8934,
  [SMALL_STATE(410)] = 8944,
  [SMALL_STATE(411)] = 8954,
  [SMALL_STATE(412)] = 8962,
  [SMALL_STATE(413)] = 8972,
  [SMALL_STATE(414)] = 8982,
  [SMALL_STATE(415)] = 8992,
  [SMALL_STATE(416)] = 9002,
  [SMALL_STATE(417)] = 9012,
  [SMALL_STATE(418)] = 9022,
  [SMALL_STATE(419)] = 9032,
  [SMALL_STATE(420)] = 9042,
  [SMALL_STATE(421)] = 9052,
  [SMALL_STATE(422)] = 9062,
  [SMALL_STATE(423)] = 9072,
  [SMALL_STATE(424)] = 9082,
  [SMALL_STATE(425)] = 9092,
  [SMALL_STATE(426)] = 9102,
  [SMALL_STATE(427)] = 9112,
  [SMALL_STATE(428)] = 9122,
  [SMALL_STATE(429)] = 9132,
  [SMALL_STATE(430)] = 9142,
  [SMALL_STATE(431)] = 9152,
  [SMALL_STATE(432)] = 9162,
  [SMALL_STATE(433)] = 9172,
  [SMALL_STATE(434)] = 9182,
  [SMALL_STATE(435)] = 9192,
  [SMALL_STATE(436)] = 9202,
  [SMALL_STATE(437)] = 9212,
  [SMALL_STATE(438)] = 9222,
  [SMALL_STATE(439)] = 9232,
  [SMALL_STATE(440)] = 9242,
  [SMALL_STATE(441)] = 9252,
  [SMALL_STATE(442)] = 9262,
  [SMALL_STATE(443)] = 9272,
  [SMALL_STATE(444)] = 9282,
  [SMALL_STATE(445)] = 9292,
  [SMALL_STATE(446)] = 9302,
  [SMALL_STATE(447)] = 9308,
  [SMALL_STATE(448)] = 9318,
  [SMALL_STATE(449)] = 9328,
  [SMALL_STATE(450)] = 9338,
  [SMALL_STATE(451)] = 9348,
  [SMALL_STATE(452)] = 9358,
  [SMALL_STATE(453)] = 9366,
  [SMALL_STATE(454)] = 9376,
  [SMALL_STATE(455)] = 9386,
  [SMALL_STATE(456)] = 9392,
  [SMALL_STATE(457)] = 9402,
  [SMALL_STATE(458)] = 9412,
  [SMALL_STATE(459)] = 9422,
  [SMALL_STATE(460)] = 9432,
  [SMALL_STATE(461)] = 9440,
  [SMALL_STATE(462)] = 9450,
  [SMALL_STATE(463)] = 9460,
  [SMALL_STATE(464)] = 9470,
  [SMALL_STATE(465)] = 9480,
  [SMALL_STATE(466)] = 9490,
  [SMALL_STATE(467)] = 9500,
  [SMALL_STATE(468)] = 9510,
  [SMALL_STATE(469)] = 9520,
  [SMALL_STATE(470)] = 9530,
  [SMALL_STATE(471)] = 9540,
  [SMALL_STATE(472)] = 9550,
  [SMALL_STATE(473)] = 9560,
  [SMALL_STATE(474)] = 9570,
  [SMALL_STATE(475)] = 9580,
  [SMALL_STATE(476)] = 9590,
  [SMALL_STATE(477)] = 9600,
  [SMALL_STATE(478)] = 9610,
  [SMALL_STATE(479)] = 9620,
  [SMALL_STATE(480)] = 9630,
  [SMALL_STATE(481)] = 9640,
  [SMALL_STATE(482)] = 9650,
  [SMALL_STATE(483)] = 9660,
  [SMALL_STATE(484)] = 9670,
  [SMALL_STATE(485)] = 9680,
  [SMALL_STATE(486)] = 9690,
  [SMALL_STATE(487)] = 9700,
  [SMALL_STATE(488)] = 9710,
  [SMALL_STATE(489)] = 9716,
  [SMALL_STATE(490)] = 9726,
  [SMALL_STATE(491)] = 9736,
  [SMALL_STATE(492)] = 9746,
  [SMALL_STATE(493)] = 9754,
  [SMALL_STATE(494)] = 9764,
  [SMALL_STATE(495)] = 9774,
  [SMALL_STATE(496)] = 9784,
  [SMALL_STATE(497)] = 9794,
  [SMALL_STATE(498)] = 9804,
  [SMALL_STATE(499)] = 9814,
  [SMALL_STATE(500)] = 9824,
  [SMALL_STATE(501)] = 9834,
  [SMALL_STATE(502)] = 9844,
  [SMALL_STATE(503)] = 9854,
  [SMALL_STATE(504)] = 9864,
  [SMALL_STATE(505)] = 9874,
  [SMALL_STATE(506)] = 9880,
  [SMALL_STATE(507)] = 9890,
  [SMALL_STATE(508)] = 9897,
  [SMALL_STATE(509)] = 9904,
  [SMALL_STATE(510)] = 9911,
  [SMALL_STATE(511)] = 9918,
  [SMALL_STATE(512)] = 9923,
  [SMALL_STATE(513)] = 9928,
  [SMALL_STATE(514)] = 9933,
  [SMALL_STATE(515)] = 9938,
  [SMALL_STATE(516)] = 9943,
  [SMALL_STATE(517)] = 9950,
  [SMALL_STATE(518)] = 9957,
  [SMALL_STATE(519)] = 9964,
  [SMALL_STATE(520)] = 9971,
  [SMALL_STATE(521)] = 9978,
  [SMALL_STATE(522)] = 9985,
  [SMALL_STATE(523)] = 9992,
  [SMALL_STATE(524)] = 9999,
  [SMALL_STATE(525)] = 10006,
  [SMALL_STATE(526)] = 10013,
  [SMALL_STATE(527)] = 10020,
  [SMALL_STATE(528)] = 10027,
  [SMALL_STATE(529)] = 10034,
  [SMALL_STATE(530)] = 10041,
  [SMALL_STATE(531)] = 10048,
  [SMALL_STATE(532)] = 10055,
  [SMALL_STATE(533)] = 10062,
  [SMALL_STATE(534)] = 10069,
  [SMALL_STATE(535)] = 10076,
  [SMALL_STATE(536)] = 10083,
  [SMALL_STATE(537)] = 10090,
  [SMALL_STATE(538)] = 10097,
  [SMALL_STATE(539)] = 10104,
  [SMALL_STATE(540)] = 10111,
  [SMALL_STATE(541)] = 10118,
  [SMALL_STATE(542)] = 10123,
  [SMALL_STATE(543)] = 10128,
  [SMALL_STATE(544)] = 10135,
  [SMALL_STATE(545)] = 10140,
  [SMALL_STATE(546)] = 10147,
  [SMALL_STATE(547)] = 10154,
  [SMALL_STATE(548)] = 10159,
  [SMALL_STATE(549)] = 10164,
  [SMALL_STATE(550)] = 10171,
  [SMALL_STATE(551)] = 10176,
  [SMALL_STATE(552)] = 10183,
  [SMALL_STATE(553)] = 10190,
  [SMALL_STATE(554)] = 10195,
  [SMALL_STATE(555)] = 10202,
  [SMALL_STATE(556)] = 10209,
  [SMALL_STATE(557)] = 10216,
  [SMALL_STATE(558)] = 10223,
  [SMALL_STATE(559)] = 10230,
  [SMALL_STATE(560)] = 10237,
  [SMALL_STATE(561)] = 10244,
  [SMALL_STATE(562)] = 10251,
  [SMALL_STATE(563)] = 10258,
  [SMALL_STATE(564)] = 10265,
  [SMALL_STATE(565)] = 10272,
  [SMALL_STATE(566)] = 10279,
  [SMALL_STATE(567)] = 10284,
  [SMALL_STATE(568)] = 10291,
  [SMALL_STATE(569)] = 10298,
  [SMALL_STATE(570)] = 10305,
  [SMALL_STATE(571)] = 10312,
  [SMALL_STATE(572)] = 10319,
  [SMALL_STATE(573)] = 10326,
  [SMALL_STATE(574)] = 10333,
  [SMALL_STATE(575)] = 10340,
  [SMALL_STATE(576)] = 10347,
  [SMALL_STATE(577)] = 10354,
  [SMALL_STATE(578)] = 10361,
  [SMALL_STATE(579)] = 10368,
  [SMALL_STATE(580)] = 10375,
  [SMALL_STATE(581)] = 10382,
  [SMALL_STATE(582)] = 10389,
  [SMALL_STATE(583)] = 10396,
  [SMALL_STATE(584)] = 10403,
  [SMALL_STATE(585)] = 10410,
  [SMALL_STATE(586)] = 10417,
  [SMALL_STATE(587)] = 10424,
  [SMALL_STATE(588)] = 10431,
  [SMALL_STATE(589)] = 10438,
  [SMALL_STATE(590)] = 10445,
  [SMALL_STATE(591)] = 10450,
  [SMALL_STATE(592)] = 10457,
  [SMALL_STATE(593)] = 10464,
  [SMALL_STATE(594)] = 10469,
  [SMALL_STATE(595)] = 10474,
  [SMALL_STATE(596)] = 10481,
  [SMALL_STATE(597)] = 10488,
  [SMALL_STATE(598)] = 10493,
  [SMALL_STATE(599)] = 10498,
  [SMALL_STATE(600)] = 10503,
  [SMALL_STATE(601)] = 10508,
  [SMALL_STATE(602)] = 10515,
  [SMALL_STATE(603)] = 10522,
  [SMALL_STATE(604)] = 10529,
  [SMALL_STATE(605)] = 10536,
  [SMALL_STATE(606)] = 10543,
  [SMALL_STATE(607)] = 10550,
  [SMALL_STATE(608)] = 10557,
  [SMALL_STATE(609)] = 10564,
  [SMALL_STATE(610)] = 10571,
  [SMALL_STATE(611)] = 10578,
  [SMALL_STATE(612)] = 10585,
  [SMALL_STATE(613)] = 10590,
  [SMALL_STATE(614)] = 10597,
  [SMALL_STATE(615)] = 10604,
  [SMALL_STATE(616)] = 10611,
  [SMALL_STATE(617)] = 10616,
  [SMALL_STATE(618)] = 10623,
  [SMALL_STATE(619)] = 10628,
  [SMALL_STATE(620)] = 10635,
  [SMALL_STATE(621)] = 10642,
  [SMALL_STATE(622)] = 10649,
  [SMALL_STATE(623)] = 10654,
  [SMALL_STATE(624)] = 10661,
  [SMALL_STATE(625)] = 10668,
  [SMALL_STATE(626)] = 10675,
  [SMALL_STATE(627)] = 10682,
  [SMALL_STATE(628)] = 10689,
  [SMALL_STATE(629)] = 10696,
  [SMALL_STATE(630)] = 10703,
  [SMALL_STATE(631)] = 10708,
  [SMALL_STATE(632)] = 10715,
  [SMALL_STATE(633)] = 10722,
  [SMALL_STATE(634)] = 10727,
  [SMALL_STATE(635)] = 10734,
  [SMALL_STATE(636)] = 10741,
  [SMALL_STATE(637)] = 10746,
  [SMALL_STATE(638)] = 10753,
  [SMALL_STATE(639)] = 10758,
  [SMALL_STATE(640)] = 10763,
  [SMALL_STATE(641)] = 10768,
  [SMALL_STATE(642)] = 10775,
  [SMALL_STATE(643)] = 10782,
  [SMALL_STATE(644)] = 10789,
  [SMALL_STATE(645)] = 10796,
  [SMALL_STATE(646)] = 10803,
  [SMALL_STATE(647)] = 10810,
  [SMALL_STATE(648)] = 10817,
  [SMALL_STATE(649)] = 10824,
  [SMALL_STATE(650)] = 10831,
  [SMALL_STATE(651)] = 10838,
  [SMALL_STATE(652)] = 10845,
  [SMALL_STATE(653)] = 10850,
  [SMALL_STATE(654)] = 10854,
  [SMALL_STATE(655)] = 10858,
  [SMALL_STATE(656)] = 10862,
  [SMALL_STATE(657)] = 10866,
  [SMALL_STATE(658)] = 10870,
  [SMALL_STATE(659)] = 10874,
  [SMALL_STATE(660)] = 10878,
  [SMALL_STATE(661)] = 10882,
  [SMALL_STATE(662)] = 10886,
  [SMALL_STATE(663)] = 10890,
  [SMALL_STATE(664)] = 10894,
  [SMALL_STATE(665)] = 10898,
  [SMALL_STATE(666)] = 10902,
  [SMALL_STATE(667)] = 10906,
  [SMALL_STATE(668)] = 10910,
  [SMALL_STATE(669)] = 10914,
  [SMALL_STATE(670)] = 10918,
  [SMALL_STATE(671)] = 10922,
  [SMALL_STATE(672)] = 10926,
  [SMALL_STATE(673)] = 10930,
  [SMALL_STATE(674)] = 10934,
  [SMALL_STATE(675)] = 10938,
  [SMALL_STATE(676)] = 10942,
  [SMALL_STATE(677)] = 10946,
  [SMALL_STATE(678)] = 10950,
  [SMALL_STATE(679)] = 10954,
  [SMALL_STATE(680)] = 10958,
  [SMALL_STATE(681)] = 10962,
  [SMALL_STATE(682)] = 10966,
  [SMALL_STATE(683)] = 10970,
  [SMALL_STATE(684)] = 10974,
  [SMALL_STATE(685)] = 10978,
  [SMALL_STATE(686)] = 10982,
  [SMALL_STATE(687)] = 10986,
  [SMALL_STATE(688)] = 10990,
  [SMALL_STATE(689)] = 10994,
  [SMALL_STATE(690)] = 10998,
  [SMALL_STATE(691)] = 11002,
  [SMALL_STATE(692)] = 11006,
  [SMALL_STATE(693)] = 11010,
  [SMALL_STATE(694)] = 11014,
  [SMALL_STATE(695)] = 11018,
  [SMALL_STATE(696)] = 11022,
  [SMALL_STATE(697)] = 11026,
  [SMALL_STATE(698)] = 11030,
  [SMALL_STATE(699)] = 11034,
  [SMALL_STATE(700)] = 11038,
  [SMALL_STATE(701)] = 11042,
  [SMALL_STATE(702)] = 11046,
  [SMALL_STATE(703)] = 11050,
  [SMALL_STATE(704)] = 11054,
  [SMALL_STATE(705)] = 11058,
  [SMALL_STATE(706)] = 11062,
  [SMALL_STATE(707)] = 11066,
  [SMALL_STATE(708)] = 11070,
  [SMALL_STATE(709)] = 11074,
  [SMALL_STATE(710)] = 11078,
  [SMALL_STATE(711)] = 11082,
  [SMALL_STATE(712)] = 11086,
  [SMALL_STATE(713)] = 11090,
  [SMALL_STATE(714)] = 11094,
  [SMALL_STATE(715)] = 11098,
  [SMALL_STATE(716)] = 11102,
  [SMALL_STATE(717)] = 11106,
  [SMALL_STATE(718)] = 11110,
  [SMALL_STATE(719)] = 11114,
  [SMALL_STATE(720)] = 11118,
  [SMALL_STATE(721)] = 11122,
  [SMALL_STATE(722)] = 11126,
  [SMALL_STATE(723)] = 11130,
  [SMALL_STATE(724)] = 11134,
  [SMALL_STATE(725)] = 11138,
  [SMALL_STATE(726)] = 11142,
  [SMALL_STATE(727)] = 11146,
  [SMALL_STATE(728)] = 11150,
  [SMALL_STATE(729)] = 11154,
  [SMALL_STATE(730)] = 11158,
  [SMALL_STATE(731)] = 11162,
  [SMALL_STATE(732)] = 11166,
  [SMALL_STATE(733)] = 11170,
  [SMALL_STATE(734)] = 11174,
  [SMALL_STATE(735)] = 11178,
  [SMALL_STATE(736)] = 11182,
  [SMALL_STATE(737)] = 11186,
  [SMALL_STATE(738)] = 11190,
  [SMALL_STATE(739)] = 11194,
  [SMALL_STATE(740)] = 11198,
  [SMALL_STATE(741)] = 11202,
  [SMALL_STATE(742)] = 11206,
  [SMALL_STATE(743)] = 11210,
  [SMALL_STATE(744)] = 11214,
  [SMALL_STATE(745)] = 11218,
  [SMALL_STATE(746)] = 11222,
  [SMALL_STATE(747)] = 11226,
  [SMALL_STATE(748)] = 11230,
  [SMALL_STATE(749)] = 11234,
  [SMALL_STATE(750)] = 11238,
  [SMALL_STATE(751)] = 11242,
  [SMALL_STATE(752)] = 11246,
  [SMALL_STATE(753)] = 11250,
  [SMALL_STATE(754)] = 11254,
  [SMALL_STATE(755)] = 11258,
  [SMALL_STATE(756)] = 11262,
  [SMALL_STATE(757)] = 11266,
  [SMALL_STATE(758)] = 11270,
  [SMALL_STATE(759)] = 11274,
  [SMALL_STATE(760)] = 11278,
  [SMALL_STATE(761)] = 11282,
  [SMALL_STATE(762)] = 11286,
  [SMALL_STATE(763)] = 11290,
  [SMALL_STATE(764)] = 11294,
  [SMALL_STATE(765)] = 11298,
  [SMALL_STATE(766)] = 11302,
  [SMALL_STATE(767)] = 11306,
  [SMALL_STATE(768)] = 11310,
  [SMALL_STATE(769)] = 11314,
  [SMALL_STATE(770)] = 11318,
  [SMALL_STATE(771)] = 11322,
  [SMALL_STATE(772)] = 11326,
  [SMALL_STATE(773)] = 11330,
  [SMALL_STATE(774)] = 11334,
  [SMALL_STATE(775)] = 11338,
  [SMALL_STATE(776)] = 11342,
  [SMALL_STATE(777)] = 11346,
  [SMALL_STATE(778)] = 11350,
  [SMALL_STATE(779)] = 11354,
  [SMALL_STATE(780)] = 11358,
  [SMALL_STATE(781)] = 11362,
  [SMALL_STATE(782)] = 11366,
  [SMALL_STATE(783)] = 11370,
  [SMALL_STATE(784)] = 11374,
  [SMALL_STATE(785)] = 11378,
  [SMALL_STATE(786)] = 11382,
  [SMALL_STATE(787)] = 11386,
  [SMALL_STATE(788)] = 11390,
  [SMALL_STATE(789)] = 11394,
  [SMALL_STATE(790)] = 11398,
  [SMALL_STATE(791)] = 11402,
  [SMALL_STATE(792)] = 11406,
  [SMALL_STATE(793)] = 11410,
  [SMALL_STATE(794)] = 11414,
  [SMALL_STATE(795)] = 11418,
  [SMALL_STATE(796)] = 11422,
  [SMALL_STATE(797)] = 11426,
  [SMALL_STATE(798)] = 11430,
  [SMALL_STATE(799)] = 11434,
  [SMALL_STATE(800)] = 11438,
  [SMALL_STATE(801)] = 11442,
  [SMALL_STATE(802)] = 11446,
  [SMALL_STATE(803)] = 11450,
  [SMALL_STATE(804)] = 11454,
  [SMALL_STATE(805)] = 11458,
  [SMALL_STATE(806)] = 11462,
  [SMALL_STATE(807)] = 11466,
  [SMALL_STATE(808)] = 11470,
  [SMALL_STATE(809)] = 11474,
  [SMALL_STATE(810)] = 11478,
  [SMALL_STATE(811)] = 11482,
  [SMALL_STATE(812)] = 11486,
  [SMALL_STATE(813)] = 11490,
  [SMALL_STATE(814)] = 11494,
  [SMALL_STATE(815)] = 11498,
  [SMALL_STATE(816)] = 11502,
  [SMALL_STATE(817)] = 11506,
  [SMALL_STATE(818)] = 11510,
  [SMALL_STATE(819)] = 11514,
  [SMALL_STATE(820)] = 11518,
  [SMALL_STATE(821)] = 11522,
  [SMALL_STATE(822)] = 11526,
  [SMALL_STATE(823)] = 11530,
  [SMALL_STATE(824)] = 11534,
  [SMALL_STATE(825)] = 11538,
  [SMALL_STATE(826)] = 11542,
  [SMALL_STATE(827)] = 11546,
  [SMALL_STATE(828)] = 11550,
  [SMALL_STATE(829)] = 11554,
  [SMALL_STATE(830)] = 11558,
  [SMALL_STATE(831)] = 11562,
  [SMALL_STATE(832)] = 11566,
  [SMALL_STATE(833)] = 11570,
  [SMALL_STATE(834)] = 11574,
  [SMALL_STATE(835)] = 11578,
  [SMALL_STATE(836)] = 11582,
  [SMALL_STATE(837)] = 11586,
  [SMALL_STATE(838)] = 11590,
  [SMALL_STATE(839)] = 11594,
  [SMALL_STATE(840)] = 11598,
  [SMALL_STATE(841)] = 11602,
  [SMALL_STATE(842)] = 11606,
  [SMALL_STATE(843)] = 11610,
  [SMALL_STATE(844)] = 11614,
  [SMALL_STATE(845)] = 11618,
  [SMALL_STATE(846)] = 11622,
  [SMALL_STATE(847)] = 11626,
  [SMALL_STATE(848)] = 11630,
  [SMALL_STATE(849)] = 11634,
  [SMALL_STATE(850)] = 11638,
  [SMALL_STATE(851)] = 11642,
  [SMALL_STATE(852)] = 11646,
  [SMALL_STATE(853)] = 11650,
  [SMALL_STATE(854)] = 11654,
  [SMALL_STATE(855)] = 11658,
  [SMALL_STATE(856)] = 11662,
  [SMALL_STATE(857)] = 11666,
  [SMALL_STATE(858)] = 11670,
  [SMALL_STATE(859)] = 11674,
  [SMALL_STATE(860)] = 11678,
  [SMALL_STATE(861)] = 11682,
  [SMALL_STATE(862)] = 11686,
  [SMALL_STATE(863)] = 11690,
  [SMALL_STATE(864)] = 11694,
  [SMALL_STATE(865)] = 11698,
  [SMALL_STATE(866)] = 11702,
  [SMALL_STATE(867)] = 11706,
  [SMALL_STATE(868)] = 11710,
  [SMALL_STATE(869)] = 11714,
  [SMALL_STATE(870)] = 11718,
  [SMALL_STATE(871)] = 11722,
  [SMALL_STATE(872)] = 11726,
  [SMALL_STATE(873)] = 11730,
  [SMALL_STATE(874)] = 11734,
  [SMALL_STATE(875)] = 11738,
  [SMALL_STATE(876)] = 11742,
  [SMALL_STATE(877)] = 11746,
  [SMALL_STATE(878)] = 11750,
  [SMALL_STATE(879)] = 11754,
  [SMALL_STATE(880)] = 11758,
  [SMALL_STATE(881)] = 11762,
  [SMALL_STATE(882)] = 11766,
  [SMALL_STATE(883)] = 11770,
  [SMALL_STATE(884)] = 11774,
  [SMALL_STATE(885)] = 11778,
  [SMALL_STATE(886)] = 11782,
  [SMALL_STATE(887)] = 11786,
  [SMALL_STATE(888)] = 11790,
  [SMALL_STATE(889)] = 11794,
  [SMALL_STATE(890)] = 11798,
  [SMALL_STATE(891)] = 11802,
  [SMALL_STATE(892)] = 11806,
  [SMALL_STATE(893)] = 11810,
  [SMALL_STATE(894)] = 11814,
  [SMALL_STATE(895)] = 11818,
  [SMALL_STATE(896)] = 11822,
  [SMALL_STATE(897)] = 11826,
  [SMALL_STATE(898)] = 11830,
  [SMALL_STATE(899)] = 11834,
  [SMALL_STATE(900)] = 11838,
  [SMALL_STATE(901)] = 11842,
  [SMALL_STATE(902)] = 11846,
  [SMALL_STATE(903)] = 11850,
  [SMALL_STATE(904)] = 11854,
  [SMALL_STATE(905)] = 11858,
  [SMALL_STATE(906)] = 11862,
  [SMALL_STATE(907)] = 11866,
  [SMALL_STATE(908)] = 11870,
  [SMALL_STATE(909)] = 11874,
  [SMALL_STATE(910)] = 11878,
  [SMALL_STATE(911)] = 11882,
  [SMALL_STATE(912)] = 11886,
  [SMALL_STATE(913)] = 11890,
  [SMALL_STATE(914)] = 11894,
  [SMALL_STATE(915)] = 11898,
  [SMALL_STATE(916)] = 11902,
  [SMALL_STATE(917)] = 11906,
  [SMALL_STATE(918)] = 11910,
  [SMALL_STATE(919)] = 11914,
  [SMALL_STATE(920)] = 11918,
  [SMALL_STATE(921)] = 11922,
  [SMALL_STATE(922)] = 11926,
  [SMALL_STATE(923)] = 11930,
  [SMALL_STATE(924)] = 11934,
  [SMALL_STATE(925)] = 11938,
  [SMALL_STATE(926)] = 11942,
  [SMALL_STATE(927)] = 11946,
  [SMALL_STATE(928)] = 11950,
  [SMALL_STATE(929)] = 11954,
  [SMALL_STATE(930)] = 11958,
  [SMALL_STATE(931)] = 11962,
  [SMALL_STATE(932)] = 11966,
  [SMALL_STATE(933)] = 11970,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(812),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(931),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(929),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, 0, 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_marker, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_marker, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2, 0, 0), SHIFT_REPEAT(635),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, 0, 33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, 0, 33),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, 0, 33),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, 0, 33),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, 0, 33),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 28),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 27),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 29),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, 0, 45),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2, 0, 0), SHIFT_REPEAT(907),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 39),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 38),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, 0, 15),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2, 0, 0), SHIFT_REPEAT(607),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 14),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, 0, 21),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 24),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, 0, 30),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, 0, 31),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, 0, 8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, 0, 26),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, 0, 43),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, 0, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, 0, 51),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, 0, 22),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, 0, 51),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, 0, 18),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, 0, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, 0, 16),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, 0, 42),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, 0, 36),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, 0, 35),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, 0, 34),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, 0, 41),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, 0, 11),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, 0, 7),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, 0, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, 0, 55),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, 0, 54),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, 0, 66),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, 0, 56),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, 0, 57),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, 0, 58),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, 0, 16),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, 0, 33),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, 0, 40),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, 0, 59),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, 0, 25),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, 0, 65),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, 0, 52),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, 0, 64),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, 0, 32),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, 0, 32),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, 0, 32),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, 0, 62),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, 0, 16),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, 0, 61),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, 0, 60),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(933),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, 0, 20),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, 0, 0), SHIFT_REPEAT(874),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, 0, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, 0, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, 0, 1),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, 0, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2, 0, 0),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_repeat1, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, 0, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 3, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, 0, 0),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2, 0, 0),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, 0, 0),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2, 0, 0), SHIFT_REPEAT(615),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2, 0, 0),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2, 0, 0), SHIFT_REPEAT(623),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, 0, 9),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(896),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [1232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2, 0, 0),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2, 0, 0),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_marker, 1, 0, 0),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2, 0, 0), SHIFT_REPEAT(641),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2, 0, 0),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, 0, 33),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 2, 0, 0),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, 0, 23),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, 0, 63),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, 0, 1),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, 0, 50),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, 0, 50),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, 0, 49),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, 0, 13),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, 0, 12),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2, 0, 0),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, 0, 0),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, 0, 44),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, 0, 19),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, 0, 46),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, 0, 47),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, 0, 48),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, 0, 37),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, 0, 4),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, 0, 0),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, 0, 1),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, 0, 53),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3, 0, 0),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5, 0, 0),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, 0, 0),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1928] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cql(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
