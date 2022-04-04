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
#define STATE_COUNT 934
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 30
#define TOKEN_COUNT 146
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
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  aux_sym_using_timestamp_spec_token1 = 48,
  aux_sym_using_timestamp_spec_token2 = 49,
  aux_sym_insert_statement_token1 = 50,
  aux_sym_insert_statement_token2 = 51,
  aux_sym_insert_statement_token3 = 52,
  aux_sym_insert_values_spec_token1 = 53,
  anon_sym_LBRACE = 54,
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
  anon_sym_DOT = 86,
  aux_sym_resource_token6 = 87,
  aux_sym_list_roles_token1 = 88,
  aux_sym_list_roles_token2 = 89,
  aux_sym_list_roles_token3 = 90,
  aux_sym_drop_aggregate_token1 = 91,
  aux_sym_drop_materialized_view_token1 = 92,
  aux_sym_drop_materialized_view_token2 = 93,
  aux_sym_drop_trigger_token1 = 94,
  aux_sym_drop_type_token1 = 95,
  aux_sym_drop_user_token1 = 96,
  aux_sym_create_aggregate_token1 = 97,
  aux_sym_create_aggregate_token2 = 98,
  aux_sym_create_aggregate_token3 = 99,
  aux_sym_create_aggregate_token4 = 100,
  aux_sym_create_aggregate_token5 = 101,
  aux_sym_create_aggregate_token6 = 102,
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
      if (eof) ADVANCE(547);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '+') ADVANCE(640);
      if (lookahead == ',') ADVANCE(558);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(548);
      if (lookahead == '<') ADVANCE(587);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(591);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == '[') ADVANCE(611);
      if (lookahead == ']') ADVANCE(612);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(418);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(305);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead == '0') ADVANCE(570);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == '[') ADVANCE(611);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(752);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(928);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(544);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(582);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(568);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(797);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(750);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(907);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(910);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(791);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(861);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(914);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(875);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(747);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 29:
      if (lookahead == 'X') ADVANCE(511);
      if (lookahead == 'x') ADVANCE(511);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(495);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(354);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(687);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(744);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(473);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 189:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(603);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(603);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(454);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(501);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(483);
      END_STATE();
    case 195:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 196:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(741);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(487);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(729);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 249:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(162);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
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
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 356:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(707);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 357:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 358:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 405:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(595);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(731);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(658);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(471);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 472:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 490:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      END_STATE();
    case 491:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 492:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(670);
      END_STATE();
    case 493:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(554);
      END_STATE();
    case 494:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 495:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(395);
      END_STATE();
    case 496:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(627);
      END_STATE();
    case 497:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(436);
      END_STATE();
    case 498:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      END_STATE();
    case 499:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(597);
      END_STATE();
    case 500:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(746);
      END_STATE();
    case 501:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(653);
      END_STATE();
    case 502:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(736);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(596);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 507:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(140);
      END_STATE();
    case 508:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(168);
      END_STATE();
    case 509:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 510:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(565);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 523:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 524:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 525:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 535:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 536:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 537:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 538:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 543:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 544:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 545:
      if (eof) ADVANCE(547);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead == '0') ADVANCE(570);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(548);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == '[') ADVANCE(611);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(545)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 546:
      if (eof) ADVANCE(547);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == ',') ADVANCE(558);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead == '.') ADVANCE(661);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(548);
      if (lookahead == '<') ADVANCE(587);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(591);
      if (lookahead == '[') ADVANCE(611);
      if (lookahead == ']') ADVANCE(612);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(396);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(359);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(546)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (lookahead == 'X') ADVANCE(511);
      if (lookahead == 'x') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(588);
      if (lookahead == '>') ADVANCE(589);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_update_assignments_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(902);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(480);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(688);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(754);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(757);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(777);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(758);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(753);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(756);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(737);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(929);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(748);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(922);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(923);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(924);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(925);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(927);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
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
  [4] = {.lex_state = 546},
  [5] = {.lex_state = 546},
  [6] = {.lex_state = 546},
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
  [27] = {.lex_state = 546},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 546},
  [30] = {.lex_state = 546},
  [31] = {.lex_state = 546},
  [32] = {.lex_state = 546},
  [33] = {.lex_state = 546},
  [34] = {.lex_state = 546},
  [35] = {.lex_state = 546},
  [36] = {.lex_state = 546},
  [37] = {.lex_state = 546},
  [38] = {.lex_state = 546},
  [39] = {.lex_state = 546},
  [40] = {.lex_state = 546},
  [41] = {.lex_state = 546},
  [42] = {.lex_state = 546},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 546},
  [46] = {.lex_state = 546},
  [47] = {.lex_state = 546},
  [48] = {.lex_state = 546},
  [49] = {.lex_state = 546},
  [50] = {.lex_state = 546},
  [51] = {.lex_state = 546},
  [52] = {.lex_state = 546},
  [53] = {.lex_state = 546},
  [54] = {.lex_state = 546},
  [55] = {.lex_state = 545},
  [56] = {.lex_state = 546},
  [57] = {.lex_state = 545},
  [58] = {.lex_state = 546},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 546},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 546},
  [63] = {.lex_state = 546},
  [64] = {.lex_state = 546},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 545},
  [67] = {.lex_state = 546},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 545},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 546},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 546},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 546},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 546},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 546},
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 546},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 546},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 546},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 546},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 546},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 546},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 546},
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
  [210] = {.lex_state = 1},
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
  [255] = {.lex_state = 1},
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
  [287] = {.lex_state = 545},
  [288] = {.lex_state = 545},
  [289] = {.lex_state = 545},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 545},
  [292] = {.lex_state = 545},
  [293] = {.lex_state = 545},
  [294] = {.lex_state = 545},
  [295] = {.lex_state = 545},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 545},
  [298] = {.lex_state = 545},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 545},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 545},
  [304] = {.lex_state = 38},
  [305] = {.lex_state = 545},
  [306] = {.lex_state = 39},
  [307] = {.lex_state = 38},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 545},
  [310] = {.lex_state = 38},
  [311] = {.lex_state = 545},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 545},
  [314] = {.lex_state = 546},
  [315] = {.lex_state = 545},
  [316] = {.lex_state = 545},
  [317] = {.lex_state = 545},
  [318] = {.lex_state = 546},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 15},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 10},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 546},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 546},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 546},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 38},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 12},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 546},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 23},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 20},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 24},
  [373] = {.lex_state = 20},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 19},
  [384] = {.lex_state = 546},
  [385] = {.lex_state = 21},
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
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 19},
  [400] = {.lex_state = 19},
  [401] = {.lex_state = 19},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 19},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 19},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 19},
  [421] = {.lex_state = 19},
  [422] = {.lex_state = 19},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 19},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 19},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 9},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 546},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 545},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 19},
  [456] = {.lex_state = 9},
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
  [467] = {.lex_state = 546},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 19},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 9},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 9},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 9},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 9},
  [501] = {.lex_state = 19},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 9},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 9},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 9},
  [510] = {.lex_state = 9},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 9},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 9},
  [520] = {.lex_state = 9},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 546},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 9},
  [526] = {.lex_state = 9},
  [527] = {.lex_state = 9},
  [528] = {.lex_state = 9},
  [529] = {.lex_state = 9},
  [530] = {.lex_state = 9},
  [531] = {.lex_state = 16},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 9},
  [536] = {.lex_state = 9},
  [537] = {.lex_state = 9},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 9},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 9},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 9},
  [546] = {.lex_state = 9},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 9},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 9},
  [556] = {.lex_state = 9},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 9},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 9},
  [566] = {.lex_state = 9},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 9},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 9},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 9},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 9},
  [587] = {.lex_state = 9},
  [588] = {.lex_state = 9},
  [589] = {.lex_state = 9},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 9},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 9},
  [594] = {.lex_state = 9},
  [595] = {.lex_state = 9},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 9},
  [598] = {.lex_state = 9},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 546},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 9},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 9},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 9},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 9},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 9},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 546},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 9},
  [627] = {.lex_state = 9},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 9},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 9},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 9},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 9},
  [640] = {.lex_state = 9},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 9},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 9},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 545},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 9},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 9},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
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
  [685] = {.lex_state = 9},
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
  [698] = {.lex_state = 9},
  [699] = {.lex_state = 546},
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
  [717] = {.lex_state = 9},
  [718] = {.lex_state = 545},
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
  [729] = {.lex_state = 9},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 546},
  [738] = {.lex_state = 9},
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
  [750] = {.lex_state = 546},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 9},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 9},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 9},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 9},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 9},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 9},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 9},
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
  [793] = {.lex_state = 9},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 9},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 9},
  [799] = {.lex_state = 9},
  [800] = {.lex_state = 9},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 9},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 9},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 9},
  [813] = {.lex_state = 545},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 38},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 9},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 9},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 545},
  [836] = {.lex_state = 9},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 9},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 9},
  [844] = {.lex_state = 9},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 9},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 9},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 545},
  [861] = {.lex_state = 9},
  [862] = {.lex_state = 545},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 9},
  [866] = {.lex_state = 9},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 9},
  [871] = {.lex_state = 9},
  [872] = {.lex_state = 9},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 9},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 545},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 545},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 9},
  [893] = {.lex_state = 9},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 546},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 546},
  [904] = {.lex_state = 9},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 9},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 9},
  [912] = {.lex_state = 9},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 9},
  [915] = {.lex_state = 9},
  [916] = {.lex_state = 9},
  [917] = {.lex_state = 9},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 9},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 546},
  [923] = {.lex_state = 9},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 545},
  [929] = {.lex_state = 9},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 9},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 545},
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
    [sym_source_file] = STATE(921),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(254),
    [sym_delete_statement] = STATE(254),
    [sym_begin_batch] = STATE(389),
    [sym_insert_statement] = STATE(254),
    [sym_truncate] = STATE(254),
    [sym_create_index] = STATE(254),
    [sym_drop_index] = STATE(254),
    [sym_update] = STATE(254),
    [sym_use] = STATE(254),
    [sym_grant] = STATE(254),
    [sym_revoke] = STATE(254),
    [sym_list_roles] = STATE(254),
    [sym_list_permissions] = STATE(254),
    [sym_drop_aggregate] = STATE(254),
    [sym_drop_materialized_view] = STATE(254),
    [sym_drop_function] = STATE(254),
    [sym_drop_keyspace] = STATE(254),
    [sym_drop_role] = STATE(254),
    [sym_drop_table] = STATE(254),
    [sym_drop_trigger] = STATE(254),
    [sym_drop_type] = STATE(254),
    [sym_drop_user] = STATE(254),
    [sym_create_aggregate] = STATE(254),
    [sym_create_materialized_view] = STATE(254),
    [sym_create_function] = STATE(254),
    [sym_create_keyspace] = STATE(254),
    [sym_create_role] = STATE(254),
    [sym_create_table] = STATE(254),
    [sym_create_trigger] = STATE(254),
    [sym_create_type] = STATE(254),
    [sym_create_user] = STATE(254),
    [sym_alter_materialized_view] = STATE(254),
    [sym_alter_keyspace] = STATE(254),
    [sym_alter_role] = STATE(254),
    [sym_alter_table] = STATE(254),
    [sym_alter_type] = STATE(254),
    [sym_alter_user] = STATE(254),
    [sym_apply_batch] = STATE(254),
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
    STATE(389), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(254), 37,
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
    STATE(389), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(254), 37,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(194), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(851), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(894), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(895), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(721), 1,
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
    STATE(44), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(105), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(371), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(785), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(773), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(854), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(879), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(845), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(755), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(661), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(840), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(656), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(802), 1,
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
    STATE(44), 1,
      sym_data_type_name,
    STATE(779), 1,
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
    STATE(498), 1,
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
    STATE(600), 1,
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
  [1046] = 1,
    ACTIONS(93), 26,
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
  [1075] = 1,
    ACTIONS(95), 26,
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
  [1165] = 1,
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
  [1192] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(32), 1,
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
  [1223] = 1,
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
  [1250] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_relation_element_repeat2,
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
  [1281] = 3,
    ACTIONS(108), 1,
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
  [1312] = 3,
    ACTIONS(108), 1,
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
  [1343] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(64), 1,
      sym_where_spec,
    STATE(89), 1,
      sym_order_spec,
    STATE(184), 1,
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
    STATE(63), 1,
      sym_where_spec,
    STATE(75), 1,
      sym_order_spec,
    STATE(182), 1,
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
  [1423] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(60), 1,
      sym_where_spec,
    STATE(87), 1,
      sym_order_spec,
    STATE(164), 1,
      sym_limit_spec,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1463] = 3,
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
  [1493] = 1,
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
  [1519] = 3,
    ACTIONS(141), 1,
      anon_sym_LT,
    STATE(59), 1,
      sym_data_type_definition,
    ACTIONS(139), 21,
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
  [1549] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
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
  [1578] = 1,
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
  [1603] = 1,
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
  [1628] = 1,
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
  [1653] = 1,
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
  [1678] = 1,
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
  [1703] = 1,
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
  [1728] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(45), 1,
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
  [1757] = 1,
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
  [1782] = 1,
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
  [1807] = 11,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(504), 1,
      sym_expression,
    STATE(667), 1,
      sym_expression_list,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [1852] = 1,
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
  [1877] = 11,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(504), 1,
      sym_expression,
    STATE(877), 1,
      sym_expression_list,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [1922] = 1,
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
  [1947] = 1,
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
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1971] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(89), 1,
      sym_order_spec,
    STATE(184), 1,
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
  [2005] = 1,
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
  [2029] = 1,
    ACTIONS(183), 21,
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
  [2053] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(87), 1,
      sym_order_spec,
    STATE(164), 1,
      sym_limit_spec,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2087] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(82), 1,
      sym_order_spec,
    STATE(157), 1,
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
  [2121] = 1,
    ACTIONS(189), 21,
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
  [2145] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(617), 1,
      sym_expression,
    STATE(541), 6,
      sym_constant,
      sym_bind_marker,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [2187] = 1,
    ACTIONS(191), 20,
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
  [2210] = 2,
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
  [2235] = 2,
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
  [2260] = 2,
    ACTIONS(203), 1,
      anon_sym_DOT,
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
  [2285] = 2,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(205), 19,
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
  [2310] = 2,
    ACTIONS(211), 1,
      anon_sym_DOT,
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
  [2335] = 2,
    ACTIONS(215), 1,
      aux_sym_relation_element_token1,
    ACTIONS(213), 19,
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
  [2360] = 2,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(217), 18,
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
  [2384] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(164), 1,
      sym_limit_spec,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2412] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(221), 17,
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
  [2438] = 1,
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
  [2460] = 2,
    ACTIONS(230), 1,
      aux_sym_privilege_token2,
    ACTIONS(228), 18,
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
  [2484] = 1,
    ACTIONS(232), 19,
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
  [2506] = 4,
    ACTIONS(236), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_using_ttl_timestamp,
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
  [2534] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
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
  [2560] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(247), 1,
      aux_sym_select_statement_token4,
    STATE(174), 1,
      sym_limit_spec,
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
  [2588] = 1,
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
  [2610] = 4,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(253), 1,
      aux_sym_delete_statement_token2,
    STATE(187), 1,
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
  [2638] = 1,
    ACTIONS(255), 19,
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
  [2660] = 1,
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
  [2682] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(184), 1,
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
  [2710] = 1,
    ACTIONS(213), 19,
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
  [2732] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(157), 1,
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
  [2760] = 3,
    STATE(281), 1,
      sym_user_super_user,
    ACTIONS(261), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
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
  [2786] = 1,
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
  [2808] = 1,
    ACTIONS(265), 19,
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
  [2830] = 1,
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
  [2851] = 3,
    ACTIONS(269), 1,
      aux_sym_delete_statement_token2,
    STATE(195), 1,
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
  [2876] = 3,
    ACTIONS(273), 1,
      aux_sym_relation_elements_token1,
    STATE(136), 1,
      aux_sym_table_options_repeat1,
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
  [2901] = 1,
    ACTIONS(275), 18,
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
  [2922] = 1,
    ACTIONS(277), 18,
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
  [2943] = 3,
    ACTIONS(281), 1,
      aux_sym_delete_statement_token2,
    STATE(185), 1,
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
  [2968] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [2993] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_role_with_repeat1,
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
  [3018] = 1,
    ACTIONS(291), 18,
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
  [3039] = 3,
    ACTIONS(295), 1,
      aux_sym_delete_statement_token2,
    STATE(196), 1,
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
  [3064] = 3,
    ACTIONS(299), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_table_options_repeat1,
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
  [3089] = 3,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    STATE(234), 1,
      sym_with_element,
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
  [3114] = 1,
    ACTIONS(306), 18,
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
  [3135] = 1,
    ACTIONS(228), 18,
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
  [3156] = 3,
    ACTIONS(310), 1,
      aux_sym_create_keyspace_token1,
    STATE(225), 1,
      sym_role_with,
    ACTIONS(308), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3181] = 1,
    ACTIONS(312), 18,
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
  [3202] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_role_with_repeat1,
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
  [3227] = 1,
    ACTIONS(221), 18,
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
  [3248] = 1,
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
  [3269] = 1,
    ACTIONS(318), 18,
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
  [3290] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_create_function_repeat1,
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
  [3315] = 3,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(246), 1,
      sym_using_ttl_timestamp,
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
  [3340] = 3,
    ACTIONS(328), 1,
      aux_sym_delete_statement_token2,
    STATE(191), 1,
      sym_if_spec,
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
  [3365] = 2,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(330), 17,
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
  [3388] = 1,
    ACTIONS(334), 18,
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
  [3409] = 1,
    ACTIONS(336), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3430] = 2,
    ACTIONS(340), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(338), 17,
      ts_builtin_sym_end,
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
  [3453] = 3,
    ACTIONS(310), 1,
      aux_sym_create_keyspace_token1,
    STATE(216), 1,
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
  [3478] = 3,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(270), 1,
      sym_using_ttl_timestamp,
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
  [3503] = 2,
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
  [3526] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_role_with_repeat1,
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
  [3551] = 1,
    ACTIONS(355), 18,
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
  [3572] = 3,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    STATE(205), 1,
      sym_with_element,
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
  [3597] = 1,
    ACTIONS(359), 18,
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
  [3618] = 3,
    ACTIONS(310), 1,
      aux_sym_create_keyspace_token1,
    STATE(269), 1,
      sym_role_with,
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
  [3643] = 2,
    ACTIONS(365), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(363), 17,
      ts_builtin_sym_end,
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
  [3666] = 3,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    STATE(220), 1,
      sym_with_element,
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
  [3691] = 3,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    STATE(209), 1,
      sym_with_element,
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
  [3716] = 3,
    ACTIONS(373), 1,
      aux_sym_delete_statement_token2,
    STATE(268), 1,
      sym_if_spec,
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
  [3741] = 3,
    ACTIONS(377), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3766] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
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
  [3791] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_create_function_repeat1,
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
  [3816] = 1,
    ACTIONS(384), 18,
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
  [3837] = 3,
    ACTIONS(273), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_table_options_repeat1,
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
  [3862] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
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
  [3887] = 3,
    ACTIONS(392), 1,
      aux_sym_relation_elements_token1,
    STATE(140), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3912] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
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
  [3937] = 3,
    ACTIONS(392), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_alter_type_rename_repeat1,
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
  [3962] = 3,
    ACTIONS(400), 1,
      aux_sym_delete_statement_token2,
    STATE(236), 1,
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
  [3987] = 3,
    ACTIONS(404), 1,
      aux_sym_create_index_token3,
    ACTIONS(406), 1,
      aux_sym_list_roles_token2,
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
  [4012] = 3,
    ACTIONS(410), 1,
      aux_sym_delete_statement_token2,
    STATE(208), 1,
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
  [4037] = 3,
    ACTIONS(414), 1,
      aux_sym_list_roles_token2,
    ACTIONS(416), 1,
      aux_sym_list_roles_token3,
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
  [4062] = 1,
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
  [4083] = 3,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    STATE(193), 1,
      sym_with_element,
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
  [4108] = 1,
    ACTIONS(422), 18,
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
  [4129] = 1,
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
  [4150] = 1,
    ACTIONS(426), 17,
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
  [4170] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [4190] = 1,
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
  [4210] = 1,
    ACTIONS(350), 17,
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
  [4230] = 1,
    ACTIONS(432), 17,
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
  [4250] = 2,
    ACTIONS(436), 1,
      anon_sym_DOT,
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
  [4272] = 2,
    ACTIONS(440), 1,
      aux_sym_list_roles_token3,
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
  [4294] = 1,
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
  [4314] = 2,
    ACTIONS(247), 1,
      aux_sym_select_statement_token4,
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
  [4336] = 2,
    ACTIONS(446), 1,
      aux_sym_list_roles_token2,
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
  [4358] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [4378] = 1,
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
  [4398] = 1,
    ACTIONS(452), 17,
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
  [4418] = 1,
    ACTIONS(454), 17,
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
  [4438] = 1,
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
  [4458] = 2,
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
  [4480] = 1,
    ACTIONS(458), 17,
      ts_builtin_sym_end,
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
  [4500] = 2,
    ACTIONS(462), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(460), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [4542] = 1,
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
  [4562] = 1,
    ACTIONS(468), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4582] = 2,
    ACTIONS(472), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(470), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [4624] = 1,
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
  [4644] = 1,
    ACTIONS(297), 17,
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
  [4664] = 2,
    ACTIONS(480), 1,
      aux_sym_select_statement_token4,
    ACTIONS(478), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(482), 17,
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
  [4706] = 1,
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
  [4726] = 1,
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
  [4746] = 2,
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
  [4768] = 1,
    ACTIONS(375), 17,
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
  [4788] = 1,
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
  [4808] = 1,
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
  [4828] = 2,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4850] = 1,
    ACTIONS(496), 17,
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
  [4870] = 2,
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
  [4892] = 1,
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
  [4911] = 1,
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
  [4930] = 1,
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
  [4949] = 1,
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
  [4968] = 1,
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
  [4987] = 1,
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
  [5006] = 1,
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
  [5025] = 1,
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
  [5044] = 1,
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
  [5063] = 1,
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
  [5082] = 1,
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
  [5101] = 1,
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
  [5120] = 1,
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
  [5139] = 1,
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
  [5158] = 1,
    ACTIONS(478), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5177] = 1,
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
  [5196] = 1,
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
  [5215] = 1,
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
  [5234] = 1,
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
  [5253] = 1,
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
  [5272] = 1,
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
  [5291] = 1,
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
  [5310] = 1,
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
  [5329] = 1,
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
  [5348] = 1,
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
  [5367] = 9,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(536), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(599), 1,
      sym_constant,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(367), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [5402] = 1,
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
  [5421] = 1,
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
  [5440] = 1,
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
  [5459] = 1,
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
  [5478] = 1,
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
  [5497] = 1,
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
  [5516] = 1,
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
  [5535] = 1,
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
  [5554] = 1,
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
  [5573] = 1,
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
  [5592] = 1,
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
  [5611] = 1,
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
  [5630] = 1,
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
  [5649] = 1,
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
  [5668] = 1,
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
  [5687] = 1,
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
  [5706] = 1,
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
  [5725] = 1,
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
  [5744] = 1,
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
  [5763] = 1,
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
  [5782] = 1,
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
  [5801] = 1,
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
  [5820] = 1,
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
  [5839] = 1,
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
  [5858] = 1,
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
  [5877] = 1,
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
  [5896] = 1,
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
  [5915] = 1,
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
  [5934] = 1,
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
  [5953] = 1,
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
  [5972] = 1,
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
  [5991] = 1,
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
  [6010] = 1,
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
  [6029] = 1,
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
  [6048] = 1,
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
  [6067] = 1,
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
  [6086] = 1,
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
  [6105] = 1,
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
  [6124] = 1,
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
  [6143] = 1,
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
  [6162] = 1,
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
  [6181] = 1,
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
  [6200] = 1,
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
  [6219] = 2,
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
  [6240] = 8,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(626), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(50), 4,
      sym_function_call,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [6273] = 1,
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
  [6292] = 1,
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
  [6311] = 1,
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
  [6330] = 1,
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
  [6349] = 1,
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
  [6368] = 1,
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
  [6387] = 1,
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
  [6406] = 1,
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
  [6425] = 1,
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
  [6444] = 1,
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
  [6463] = 1,
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
  [6482] = 1,
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
  [6501] = 1,
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
  [6520] = 1,
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
  [6539] = 1,
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
  [6558] = 1,
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
  [6577] = 1,
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
  [6596] = 1,
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
  [6615] = 1,
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
  [6634] = 1,
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
  [6653] = 1,
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
  [6672] = 1,
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
  [6691] = 1,
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
  [6710] = 1,
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
  [6729] = 1,
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
  [6748] = 1,
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
  [6767] = 1,
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
  [6786] = 1,
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
  [6805] = 1,
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
  [6824] = 1,
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
  [6843] = 1,
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
  [6862] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(257), 1,
      sym_init_cond_definition,
    STATE(126), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6890] = 8,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(493), 1,
      sym_constant,
    STATE(492), 2,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6922] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(222), 1,
      sym_init_cond_definition,
    STATE(126), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6950] = 1,
    ACTIONS(688), 15,
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
  [6968] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(515), 1,
      sym_init_cond_definition,
    STATE(126), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6996] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(238), 1,
      sym_init_cond_definition,
    STATE(126), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7024] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(286), 1,
      sym_init_cond_definition,
    STATE(126), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_nested_list,
      sym_init_cond_hash,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7052] = 6,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(494), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7079] = 6,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(47), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7106] = 8,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(690), 1,
      anon_sym_STAR,
    ACTIONS(692), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(678), 1,
      sym_function_args,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(487), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7137] = 6,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(453), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7164] = 6,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(454), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7191] = 9,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(402), 1,
      sym_init_cond_hash_item,
    STATE(403), 1,
      sym_init_cond_list,
    STATE(405), 1,
      sym_constant,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7224] = 6,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(544), 3,
      sym_constant,
      sym_bind_marker,
      sym__value_marker,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7251] = 7,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(692), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(890), 1,
      sym_function_args,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(487), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7279] = 6,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(698), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(534), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(542), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(163), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [7304] = 5,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(512), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7327] = 11,
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
  [7361] = 5,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(722), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7383] = 4,
    ACTIONS(726), 1,
      aux_sym_privilege_token1,
    ACTIONS(728), 1,
      aux_sym_resource_token4,
    STATE(142), 1,
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
  [7403] = 3,
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
  [7420] = 6,
    ACTIONS(304), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(730), 1,
      aux_sym_drop_index_token1,
    ACTIONS(732), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(734), 1,
      aux_sym_alter_table_rename_token1,
    STATE(267), 1,
      sym_alter_table_operation,
    STATE(266), 5,
      sym_with_element,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
  [7443] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(101), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7462] = 10,
    ACTIONS(736), 1,
      aux_sym_truncate_token2,
    ACTIONS(738), 1,
      aux_sym_create_index_token2,
    ACTIONS(740), 1,
      aux_sym_resource_token2,
    ACTIONS(742), 1,
      aux_sym_resource_token5,
    ACTIONS(744), 1,
      aux_sym_resource_token6,
    ACTIONS(746), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(748), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(750), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(752), 1,
      aux_sym_drop_type_token1,
    ACTIONS(754), 1,
      aux_sym_drop_user_token1,
  [7493] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(818), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7512] = 3,
    ACTIONS(726), 1,
      aux_sym_privilege_token1,
    STATE(831), 1,
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
  [7529] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(599), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7548] = 6,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      aux_sym_relation_element_token1,
    ACTIONS(764), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(766), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(758), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(760), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7571] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(405), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7590] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(46), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7609] = 4,
    ACTIONS(169), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(514), 1,
      sym_constant,
    ACTIONS(163), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [7628] = 5,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      aux_sym_relation_element_token1,
    ACTIONS(764), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(758), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(760), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7648] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(772), 1,
      sym_object_name,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7671] = 6,
    ACTIONS(774), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(776), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(778), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(780), 1,
      sym_object_name,
    STATE(703), 1,
      sym_index_column_spec,
    STATE(776), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7692] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(782), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7715] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(784), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7738] = 6,
    ACTIONS(786), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(788), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(790), 1,
      sym_object_name,
    STATE(188), 1,
      sym_table_options,
    STATE(913), 1,
      sym_table_option_name,
    STATE(95), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7759] = 6,
    ACTIONS(774), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(776), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(778), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(780), 1,
      sym_object_name,
    STATE(827), 1,
      sym_index_column_spec,
    STATE(776), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7780] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(792), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7803] = 6,
    ACTIONS(774), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(776), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(778), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(780), 1,
      sym_object_name,
    STATE(777), 1,
      sym_index_column_spec,
    STATE(776), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7824] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(794), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7847] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(796), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7870] = 7,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(798), 1,
      aux_sym_delete_statement_token3,
    STATE(52), 1,
      sym_relation_element,
    STATE(243), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7893] = 6,
    ACTIONS(774), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(776), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(778), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(780), 1,
      sym_object_name,
    STATE(760), 1,
      sym_index_column_spec,
    STATE(776), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [7914] = 5,
    ACTIONS(786), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(788), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(790), 1,
      sym_object_name,
    STATE(913), 1,
      sym_table_option_name,
    STATE(173), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [7932] = 3,
    ACTIONS(804), 1,
      aux_sym_relation_element_token1,
    ACTIONS(800), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(802), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [7946] = 6,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_object_name,
    STATE(54), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(549), 1,
      sym_column_not_null,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [7966] = 5,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      aux_sym__decimal_literal_token1,
    STATE(625), 1,
      sym__decimal_literal,
    STATE(624), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [7984] = 6,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      sym_object_name,
    STATE(52), 1,
      sym_relation_element,
    STATE(67), 1,
      sym_relation_elements,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8004] = 7,
    ACTIONS(812), 1,
      aux_sym_truncate_token2,
    ACTIONS(814), 1,
      aux_sym_privilege_token1,
    ACTIONS(816), 1,
      aux_sym_resource_token2,
    ACTIONS(818), 1,
      aux_sym_resource_token5,
    ACTIONS(820), 1,
      aux_sym_resource_token6,
    ACTIONS(822), 1,
      sym_object_name,
    STATE(158), 1,
      sym_resource,
  [8026] = 5,
    ACTIONS(824), 1,
      aux_sym_privilege_token3,
    ACTIONS(826), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(828), 1,
      aux_sym_alter_table_rename_token1,
    STATE(274), 1,
      sym_alter_type_operation,
    STATE(275), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [8044] = 7,
    ACTIONS(812), 1,
      aux_sym_truncate_token2,
    ACTIONS(814), 1,
      aux_sym_privilege_token1,
    ACTIONS(816), 1,
      aux_sym_resource_token2,
    ACTIONS(818), 1,
      aux_sym_resource_token5,
    ACTIONS(820), 1,
      aux_sym_resource_token6,
    ACTIONS(822), 1,
      sym_object_name,
    STATE(720), 1,
      sym_resource,
  [8066] = 7,
    ACTIONS(830), 1,
      aux_sym_select_statement_token2,
    ACTIONS(832), 1,
      aux_sym_select_statement_token3,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(390), 1,
      sym_select_element,
    STATE(391), 1,
      sym_function_call,
    STATE(517), 1,
      sym_select_elements,
  [8088] = 3,
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
  [8102] = 7,
    ACTIONS(812), 1,
      aux_sym_truncate_token2,
    ACTIONS(814), 1,
      aux_sym_privilege_token1,
    ACTIONS(816), 1,
      aux_sym_resource_token2,
    ACTIONS(818), 1,
      aux_sym_resource_token5,
    ACTIONS(820), 1,
      aux_sym_resource_token6,
    ACTIONS(822), 1,
      sym_object_name,
    STATE(855), 1,
      sym_resource,
  [8124] = 5,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      sym_object_name,
    STATE(54), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(53), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [8141] = 6,
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
  [8160] = 2,
    ACTIONS(856), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [8171] = 6,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(836), 1,
      sym_object_name,
    ACTIONS(860), 1,
      aux_sym_select_statement_token3,
    STATE(390), 1,
      sym_select_element,
    STATE(391), 1,
      sym_function_call,
    STATE(567), 1,
      sym_select_elements,
  [8190] = 1,
    ACTIONS(862), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8198] = 5,
    ACTIONS(864), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(866), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(868), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(870), 1,
      aux_sym_role_with_option_token4,
    STATE(152), 1,
      sym_role_with_option,
  [8214] = 1,
    ACTIONS(872), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8222] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(177), 2,
      sym_option_hash,
      sym_table_option_value,
  [8234] = 1,
    ACTIONS(878), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8242] = 1,
    ACTIONS(880), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8250] = 5,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(390), 1,
      sym_select_element,
    STATE(391), 1,
      sym_function_call,
    STATE(636), 1,
      sym_select_elements,
  [8266] = 5,
    ACTIONS(884), 1,
      aux_sym_from_spec_token1,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(374), 1,
      sym_from_spec,
    STATE(398), 1,
      sym_delete_column_item,
    STATE(521), 1,
      sym_delete_column_list,
  [8282] = 3,
    ACTIONS(890), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(447), 1,
      sym_using_timestamp_spec,
    ACTIONS(888), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8294] = 1,
    ACTIONS(892), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8302] = 1,
    ACTIONS(894), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8310] = 5,
    ACTIONS(896), 1,
      sym__string_literal,
    ACTIONS(898), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(900), 1,
      aux_sym_create_index_token3,
    ACTIONS(902), 1,
      sym_object_name,
    STATE(749), 1,
      sym_short_index_name,
  [8326] = 3,
    ACTIONS(890), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(489), 1,
      sym_using_timestamp_spec,
    ACTIONS(904), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8338] = 1,
    ACTIONS(906), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8346] = 4,
    ACTIONS(908), 1,
      anon_sym_LPAREN,
    ACTIONS(910), 1,
      sym_object_name,
    STATE(757), 1,
      sym_primary_key_definition,
    STATE(758), 2,
      sym_compound_key,
      sym_composite_key,
  [8360] = 5,
    ACTIONS(884), 1,
      aux_sym_from_spec_token1,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(369), 1,
      sym_from_spec,
    STATE(398), 1,
      sym_delete_column_item,
    STATE(641), 1,
      sym_delete_column_list,
  [8376] = 5,
    ACTIONS(864), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(866), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(868), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(870), 1,
      aux_sym_role_with_option_token4,
    STATE(100), 1,
      sym_role_with_option,
  [8392] = 5,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(390), 1,
      sym_select_element,
    STATE(391), 1,
      sym_function_call,
    STATE(567), 1,
      sym_select_elements,
  [8408] = 3,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(915), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8419] = 4,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(917), 1,
      aux_sym_update_assignments_token1,
    STATE(518), 1,
      sym_update_assignments,
    STATE(613), 1,
      sym_using_ttl_timestamp,
  [8432] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(890), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(115), 1,
      sym_where_spec,
    STATE(533), 1,
      sym_using_timestamp_spec,
  [8445] = 2,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(921), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8454] = 4,
    ACTIONS(923), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(925), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
    STATE(859), 1,
      sym_primary_key_element,
  [8467] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(890), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(98), 1,
      sym_where_spec,
    STATE(616), 1,
      sym_using_timestamp_spec,
  [8480] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(929), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8491] = 3,
    ACTIONS(933), 1,
      aux_sym_primary_key_column_token1,
    STATE(547), 1,
      sym_primary_key_column,
    ACTIONS(931), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8502] = 4,
    ACTIONS(896), 1,
      sym__string_literal,
    ACTIONS(902), 1,
      sym_object_name,
    ACTIONS(935), 1,
      aux_sym_create_index_token3,
    STATE(794), 1,
      sym_short_index_name,
  [8515] = 4,
    ACTIONS(923), 1,
      aux_sym_primary_key_column_token1,
    ACTIONS(925), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
    STATE(651), 1,
      sym_primary_key_element,
  [8528] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(890), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(102), 1,
      sym_where_spec,
    STATE(574), 1,
      sym_using_timestamp_spec,
  [8541] = 4,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_function_args_repeat1,
  [8554] = 4,
    ACTIONS(238), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(917), 1,
      aux_sym_update_assignments_token1,
    STATE(630), 1,
      sym_using_ttl_timestamp,
    STATE(632), 1,
      sym_update_assignments,
  [8567] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(944), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8578] = 4,
    ACTIONS(946), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(948), 1,
      aux_sym_primary_key_column_token1,
    STATE(416), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(419), 1,
      aux_sym_relation_elements_repeat1,
  [8591] = 1,
    ACTIONS(950), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8598] = 4,
    ACTIONS(946), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(952), 1,
      aux_sym_primary_key_column_token1,
    STATE(378), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(427), 1,
      aux_sym_relation_elements_repeat1,
  [8611] = 3,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      aux_sym_select_element_token1,
    ACTIONS(954), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8622] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(958), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [8633] = 3,
    ACTIONS(960), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(962), 1,
      sym_object_name,
    STATE(887), 1,
      sym_aggregate_name,
  [8643] = 2,
    ACTIONS(964), 1,
      aux_sym_resource_token1,
    ACTIONS(966), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [8651] = 3,
    ACTIONS(968), 1,
      aux_sym_truncate_token2,
    ACTIONS(970), 1,
      sym_object_name,
    STATE(201), 1,
      sym_table_name,
  [8661] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_init_cond_hash_repeat1,
  [8671] = 3,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8681] = 3,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_init_cond_list_repeat1,
  [8691] = 3,
    ACTIONS(987), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(989), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(991), 1,
      aux_sym_update_token1,
  [8701] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      aux_sym_from_spec_token1,
    STATE(436), 1,
      aux_sym_select_elements_repeat1,
  [8711] = 2,
    ACTIONS(999), 1,
      aux_sym_select_element_token1,
    ACTIONS(997), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8719] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_init_cond_hash_repeat1,
  [8729] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [8739] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8749] = 2,
    ACTIONS(1015), 1,
      anon_sym_LBRACK,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8757] = 3,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(590), 1,
      sym_assignment_element,
    STATE(907), 1,
      sym_indexed_column,
  [8767] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_init_cond_list_repeat1,
  [8777] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      aux_sym_from_spec_token1,
    STATE(445), 1,
      aux_sym_delete_column_list_repeat1,
  [8787] = 3,
    ACTIONS(970), 1,
      sym_object_name,
    ACTIONS(1027), 1,
      aux_sym_delete_statement_token2,
    STATE(759), 1,
      sym_table_name,
  [8797] = 3,
    ACTIONS(1029), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1031), 1,
      sym_object_name,
    STATE(747), 1,
      sym_keyspace_name,
  [8807] = 3,
    ACTIONS(1033), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1035), 1,
      sym_object_name,
    STATE(745), 1,
      sym_function_name,
  [8817] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_init_cond_hash_repeat1,
  [8827] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_init_cond_nested_list_repeat1,
  [8837] = 3,
    ACTIONS(1041), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1043), 1,
      aux_sym_insert_values_spec_token1,
    STATE(84), 1,
      sym_insert_values_spec,
  [8847] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_init_cond_list_repeat1,
  [8857] = 3,
    ACTIONS(1047), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1049), 1,
      sym_object_name,
    STATE(120), 1,
      sym_role_name,
  [8867] = 3,
    ACTIONS(962), 1,
      sym_object_name,
    ACTIONS(1051), 1,
      aux_sym_delete_statement_token2,
    STATE(740), 1,
      sym_aggregate_name,
  [8877] = 3,
    ACTIONS(1053), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1055), 1,
      sym_object_name,
    STATE(728), 1,
      sym_trigger_name,
  [8887] = 3,
    ACTIONS(1057), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1059), 1,
      sym_object_name,
    STATE(722), 1,
      sym_type_name,
  [8897] = 3,
    ACTIONS(1061), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(605), 1,
      sym_user_name,
  [8907] = 2,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8915] = 3,
    ACTIONS(970), 1,
      sym_object_name,
    ACTIONS(1067), 1,
      aux_sym_delete_statement_token2,
    STATE(277), 1,
      sym_table_name,
  [8925] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_function_args_repeat1,
  [8935] = 3,
    ACTIONS(1072), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1074), 1,
      sym_object_name,
    STATE(265), 1,
      sym_index_name,
  [8945] = 3,
    ACTIONS(1031), 1,
      sym_object_name,
    ACTIONS(1076), 1,
      aux_sym_delete_statement_token2,
    STATE(259), 1,
      sym_keyspace_name,
  [8955] = 3,
    ACTIONS(1078), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1081), 1,
      aux_sym_primary_key_column_token1,
    STATE(416), 1,
      aux_sym_materialized_view_where_repeat1,
  [8965] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_relation_element_repeat1,
  [8975] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_create_function_repeat1,
  [8985] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1087), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [8995] = 3,
    ACTIONS(1035), 1,
      sym_object_name,
    ACTIONS(1089), 1,
      aux_sym_delete_statement_token2,
    STATE(256), 1,
      sym_function_name,
  [9005] = 3,
    ACTIONS(1049), 1,
      sym_object_name,
    ACTIONS(1091), 1,
      aux_sym_delete_statement_token2,
    STATE(253), 1,
      sym_role_name,
  [9015] = 3,
    ACTIONS(962), 1,
      sym_object_name,
    ACTIONS(1093), 1,
      aux_sym_delete_statement_token2,
    STATE(250), 1,
      sym_aggregate_name,
  [9025] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
  [9035] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(863), 1,
      sym_return_mode,
  [9045] = 3,
    ACTIONS(1055), 1,
      sym_object_name,
    ACTIONS(1101), 1,
      aux_sym_delete_statement_token2,
    STATE(687), 1,
      sym_trigger_name,
  [9055] = 3,
    ACTIONS(1059), 1,
      sym_object_name,
    ACTIONS(1103), 1,
      aux_sym_delete_statement_token2,
    STATE(244), 1,
      sym_type_name,
  [9065] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(948), 1,
      aux_sym_primary_key_column_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
  [9075] = 3,
    ACTIONS(1063), 1,
      sym_object_name,
    ACTIONS(1105), 1,
      aux_sym_delete_statement_token2,
    STATE(241), 1,
      sym_user_name,
  [9085] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_clustering_key_list_repeat1,
  [9095] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_clustering_key_list_repeat1,
  [9105] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      aux_sym_assignment_map_repeat1,
  [9115] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9125] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(842), 1,
      sym_return_mode,
  [9135] = 2,
    ACTIONS(1120), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1118), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [9143] = 3,
    ACTIONS(882), 1,
      sym_object_name,
    STATE(391), 1,
      sym_function_call,
    STATE(634), 1,
      sym_select_element,
  [9153] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      aux_sym_from_spec_token1,
    STATE(486), 1,
      aux_sym_select_elements_repeat1,
  [9163] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_create_function_repeat1,
  [9173] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(739), 1,
      sym_return_mode,
  [9183] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_clustering_key_list_repeat1,
  [9193] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_column_definition_list_repeat1,
  [9203] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
  [9213] = 3,
    ACTIONS(808), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1134), 1,
      sym__string_literal,
    STATE(696), 1,
      sym__decimal_literal,
  [9223] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      aux_sym_assignment_map_repeat1,
  [9233] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_create_function_repeat1,
  [9243] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      aux_sym_from_spec_token1,
    STATE(488), 1,
      aux_sym_delete_column_list_repeat1,
  [9253] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
    STATE(446), 1,
      aux_sym_option_hash_repeat1,
  [9263] = 1,
    ACTIONS(904), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9269] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(804), 1,
      sym_return_mode,
  [9279] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(449), 1,
      aux_sym_replication_list_repeat1,
  [9289] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_relation_element_repeat2,
  [9299] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_relation_element_repeat2,
  [9309] = 2,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [9317] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_assignment_map_repeat1,
  [9327] = 1,
    ACTIONS(915), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9333] = 3,
    ACTIONS(1162), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(787), 1,
      sym_materialized_view_name,
  [9343] = 3,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(444), 1,
      sym_typed_name,
  [9353] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9363] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(803), 1,
      sym_return_mode,
  [9373] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9383] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_GT,
    STATE(460), 1,
      aux_sym_data_type_definition_repeat1,
  [9393] = 2,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1179), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [9401] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    STATE(446), 1,
      aux_sym_option_hash_repeat1,
  [9411] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9421] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(768), 1,
      sym_return_mode,
  [9431] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      aux_sym_column_definition_list_repeat1,
  [9441] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RBRACE,
    STATE(449), 1,
      aux_sym_replication_list_repeat1,
  [9451] = 3,
    ACTIONS(808), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1195), 1,
      sym__string_literal,
    STATE(583), 1,
      sym__decimal_literal,
  [9461] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_expression_list_repeat1,
  [9471] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_relation_element_repeat2,
  [9481] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    ACTIONS(1204), 1,
      aux_sym_delete_statement_token2,
    STATE(242), 1,
      sym_materialized_view_name,
  [9491] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_assignment_set_repeat1,
  [9501] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_assignment_set_repeat1,
  [9511] = 3,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(506), 1,
      sym_assignment_element,
    STATE(907), 1,
      sym_indexed_column,
  [9521] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9531] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      aux_sym_create_function_repeat1,
  [9541] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_GT,
    STATE(460), 1,
      aux_sym_data_type_definition_repeat1,
  [9551] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_create_function_repeat1,
  [9561] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
    STATE(462), 1,
      aux_sym_option_hash_repeat1,
  [9571] = 3,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_relation_element_repeat1,
  [9581] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_create_function_repeat1,
  [9591] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(715), 1,
      sym_return_mode,
  [9601] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(466), 1,
      aux_sym_replication_list_repeat1,
  [9611] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_typed_name,
  [9621] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_expression_list_repeat1,
  [9631] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_function_args_repeat1,
  [9641] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      aux_sym_from_spec_token1,
    STATE(486), 1,
      aux_sym_select_elements_repeat1,
  [9651] = 3,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_function_args_repeat1,
  [9661] = 3,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      aux_sym_from_spec_token1,
    STATE(488), 1,
      aux_sym_delete_column_list_repeat1,
  [9671] = 1,
    ACTIONS(1244), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9677] = 3,
    ACTIONS(1041), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1043), 1,
      aux_sym_insert_values_spec_token1,
    STATE(80), 1,
      sym_insert_values_spec,
  [9687] = 3,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(465), 1,
      sym_column_definition,
    STATE(716), 1,
      sym_column_definition_list,
  [9697] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_assignment_set_repeat1,
  [9707] = 2,
    ACTIONS(1252), 1,
      anon_sym_COLON,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9715] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RBRACK,
    STATE(472), 1,
      aux_sym_assignment_set_repeat1,
  [9725] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_create_function_repeat1,
  [9735] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_typed_name,
  [9745] = 3,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      aux_sym_where_spec_token1,
    STATE(497), 1,
      aux_sym_update_assignments_repeat1,
  [9755] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_GT,
    STATE(476), 1,
      aux_sym_data_type_definition_repeat1,
  [9765] = 3,
    ACTIONS(1097), 1,
      aux_sym_create_function_token1,
    ACTIONS(1099), 1,
      aux_sym_return_mode_token1,
    STATE(658), 1,
      sym_return_mode,
  [9775] = 3,
    ACTIONS(1168), 1,
      sym_object_name,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      sym_typed_name,
  [9785] = 3,
    ACTIONS(1035), 1,
      sym_object_name,
    ACTIONS(1267), 1,
      aux_sym_delete_statement_token2,
    STATE(880), 1,
      sym_function_name,
  [9795] = 3,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_column_definition_list_repeat1,
  [9805] = 3,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(465), 1,
      sym_column_definition,
    STATE(668), 1,
      sym_column_definition_list,
  [9815] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_expression_list_repeat1,
  [9825] = 1,
    ACTIONS(1276), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [9831] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      aux_sym_where_spec_token1,
    STATE(393), 1,
      aux_sym_update_assignments_repeat1,
  [9841] = 2,
    ACTIONS(1280), 1,
      sym_object_name,
    STATE(179), 1,
      sym_alter_type_rename_item,
  [9848] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(212), 1,
      sym_user_with,
  [9855] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(237), 1,
      sym_table_name,
  [9862] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(376), 1,
      sym_table_name,
  [9869] = 1,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9874] = 1,
    ACTIONS(980), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9879] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(858), 1,
      sym_trigger_name,
  [9886] = 1,
    ACTIONS(985), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9891] = 1,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9896] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_replication_list,
  [9903] = 2,
    ACTIONS(1292), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [9910] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(131), 1,
      sym_where_spec,
  [9917] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(62), 1,
      sym_table_name,
  [9924] = 2,
    ACTIONS(1294), 1,
      sym_object_name,
    STATE(511), 1,
      sym_init_cond_hash_item,
  [9931] = 2,
    ACTIONS(1292), 1,
      aux_sym_from_spec_token1,
    STATE(369), 1,
      sym_from_spec,
  [9938] = 2,
    ACTIONS(808), 1,
      aux_sym__decimal_literal_token1,
    STATE(736), 1,
      sym__decimal_literal,
  [9945] = 2,
    ACTIONS(1296), 1,
      anon_sym_EQ,
    ACTIONS(1298), 1,
      anon_sym_LBRACK,
  [9952] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(581), 1,
      sym_table_name,
  [9959] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(202), 1,
      sym_table_name,
  [9966] = 2,
    ACTIONS(1300), 1,
      sym_object_name,
    STATE(215), 1,
      sym_user_name,
  [9973] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(282), 1,
      sym_materialized_view_name,
  [9980] = 2,
    ACTIONS(1304), 1,
      sym_object_name,
    STATE(217), 1,
      sym_type_name,
  [9987] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(218), 1,
      sym_table_name,
  [9994] = 2,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(897), 1,
      sym_trigger_name,
  [10001] = 2,
    ACTIONS(1306), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1308), 1,
      sym_object_name,
  [10008] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_assignment_tuple,
  [10015] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(141), 1,
      sym_where_spec,
  [10022] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(143), 1,
      sym_where_spec,
  [10029] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(223), 1,
      sym_aggregate_name,
  [10036] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(226), 1,
      sym_role_name,
  [10043] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(549), 1,
      sym_column_not_null,
  [10050] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(227), 1,
      sym_function_name,
  [10057] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(228), 1,
      sym_keyspace_name,
  [10064] = 1,
    ACTIONS(1320), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10069] = 1,
    ACTIONS(1322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10074] = 1,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10079] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(113), 1,
      sym_typed_name,
  [10086] = 1,
    ACTIONS(1324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10091] = 2,
    ACTIONS(1300), 1,
      sym_object_name,
    STATE(508), 1,
      sym_user_name,
  [10098] = 2,
    ACTIONS(1304), 1,
      sym_object_name,
    STATE(671), 1,
      sym_type_name,
  [10105] = 1,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10110] = 2,
    ACTIONS(1328), 1,
      sym_object_name,
    STATE(232), 1,
      sym_index_name,
  [10117] = 1,
    ACTIONS(1081), 2,
      aux_sym_relation_elements_token1,
      aux_sym_primary_key_column_token1,
  [10122] = 1,
    ACTIONS(1272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10127] = 1,
    ACTIONS(1330), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [10132] = 2,
    ACTIONS(1332), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1334), 1,
      aux_sym_using_ttl_timestamp_token1,
  [10139] = 2,
    ACTIONS(1336), 1,
      aux_sym_primary_key_column_token1,
    STATE(125), 1,
      sym_primary_key_element,
  [10146] = 2,
    ACTIONS(1338), 1,
      sym_object_name,
    STATE(867), 1,
      sym_clustering_key_list,
  [10153] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(660), 1,
      sym_table_name,
  [10160] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(712), 1,
      sym_aggregate_name,
  [10167] = 2,
    ACTIONS(1340), 1,
      aux_sym_where_spec_token1,
    STATE(553), 1,
      sym_materialized_view_where,
  [10174] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(308), 1,
      sym_table_name,
  [10181] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(674), 1,
      sym_keyspace_name,
  [10188] = 1,
    ACTIONS(1342), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10193] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(127), 1,
      sym_role_name,
  [10200] = 2,
    ACTIONS(1344), 1,
      sym__string_literal,
    STATE(482), 1,
      sym_replication_list_item,
  [10207] = 2,
    ACTIONS(1346), 1,
      aux_sym_role_with_option_token1,
    STATE(90), 1,
      sym_user_password,
  [10214] = 2,
    ACTIONS(1304), 1,
      sym_object_name,
    STATE(337), 1,
      sym_type_name,
  [10221] = 2,
    ACTIONS(1300), 1,
      sym_object_name,
    STATE(644), 1,
      sym_user_name,
  [10228] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(557), 1,
      sym_table_name,
  [10235] = 2,
    ACTIONS(1292), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [10242] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(418), 1,
      sym_typed_name,
  [10249] = 2,
    ACTIONS(1348), 1,
      aux_sym_durable_writes_token1,
    STATE(206), 1,
      sym_durable_writes,
  [10256] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(751), 1,
      sym_function_name,
  [10263] = 2,
    ACTIONS(1338), 1,
      sym_object_name,
    STATE(826), 1,
      sym_clustering_key_list,
  [10270] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(856), 1,
      sym_table_name,
  [10277] = 2,
    ACTIONS(1350), 1,
      sym__string_literal,
    STATE(260), 1,
      sym_trigger_class,
  [10284] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
  [10291] = 2,
    ACTIONS(1352), 1,
      sym_object_name,
    STATE(615), 1,
      sym_delete_column_item,
  [10298] = 2,
    ACTIONS(1354), 1,
      sym__string_literal,
    STATE(478), 1,
      sym_option_hash_item,
  [10305] = 2,
    ACTIONS(1336), 1,
      aux_sym_primary_key_column_token1,
    STATE(146), 1,
      sym_primary_key_element,
  [10312] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(380), 1,
      sym_column_not_null,
  [10319] = 1,
    ACTIONS(1147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10324] = 1,
    ACTIONS(1356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10329] = 2,
    ACTIONS(1358), 1,
      anon_sym_LPAREN,
    STATE(490), 1,
      sym_insert_column_spec,
  [10336] = 1,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10341] = 1,
    ACTIONS(1360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10346] = 2,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [10353] = 2,
    ACTIONS(1350), 1,
      sym__string_literal,
    STATE(224), 1,
      sym_trigger_class,
  [10360] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(475), 1,
      sym_typed_name,
  [10367] = 2,
    ACTIONS(1366), 1,
      sym_object_name,
    STATE(796), 1,
      sym_partition_key_list,
  [10374] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(134), 1,
      sym_typed_name,
  [10381] = 2,
    ACTIONS(1316), 1,
      sym_object_name,
    STATE(670), 1,
      sym_function_name,
  [10388] = 1,
    ACTIONS(1263), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10393] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(672), 1,
      sym_aggregate_name,
  [10400] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_replication_list,
  [10407] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(711), 1,
      sym_table_name,
  [10414] = 2,
    ACTIONS(1318), 1,
      sym_object_name,
    STATE(765), 1,
      sym_keyspace_name,
  [10421] = 2,
    ACTIONS(1168), 1,
      sym_object_name,
    STATE(93), 1,
      sym_typed_name,
  [10428] = 2,
    ACTIONS(1340), 1,
      aux_sym_where_spec_token1,
    STATE(577), 1,
      sym_materialized_view_where,
  [10435] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(780), 1,
      sym_column_list,
  [10442] = 2,
    ACTIONS(1280), 1,
      sym_object_name,
    STATE(138), 1,
      sym_alter_type_rename_item,
  [10449] = 1,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10454] = 1,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10459] = 2,
    ACTIONS(1354), 1,
      sym__string_literal,
    STATE(579), 1,
      sym_option_hash_item,
  [10466] = 1,
    ACTIONS(1370), 2,
      sym__string_literal,
      sym__float_literal,
  [10471] = 2,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_option_hash,
  [10478] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(735), 1,
      sym_table_name,
  [10485] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(231), 1,
      sym_user_with,
  [10492] = 2,
    ACTIONS(1344), 1,
      sym__string_literal,
    STATE(582), 1,
      sym_replication_list_item,
  [10499] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_replication_list,
  [10506] = 1,
    ACTIONS(1372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10511] = 2,
    ACTIONS(1374), 1,
      aux_sym_resource_token5,
    ACTIONS(1376), 1,
      aux_sym_drop_aggregate_token1,
  [10518] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(365), 1,
      sym_table_name,
  [10525] = 2,
    ACTIONS(1358), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_insert_column_spec,
  [10532] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(681), 1,
      sym_column_list,
  [10539] = 2,
    ACTIONS(917), 1,
      aux_sym_update_assignments_token1,
    STATE(534), 1,
      sym_update_assignments,
  [10546] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(801), 1,
      sym_table_name,
  [10553] = 1,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10558] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(115), 1,
      sym_where_spec,
  [10565] = 1,
    ACTIONS(1200), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10570] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
      sym_assignment_tuple,
  [10577] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_assignment_tuple,
  [10584] = 1,
    ACTIONS(1378), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10589] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(763), 1,
      sym_materialized_view_name,
  [10596] = 2,
    ACTIONS(1348), 1,
      aux_sym_durable_writes_token1,
    STATE(235), 1,
      sym_durable_writes,
  [10603] = 2,
    ACTIONS(808), 1,
      aux_sym__decimal_literal_token1,
    STATE(149), 1,
      sym__decimal_literal,
  [10610] = 1,
    ACTIONS(1380), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10615] = 1,
    ACTIONS(1382), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10620] = 2,
    ACTIONS(1368), 1,
      sym_object_name,
    STATE(762), 1,
      sym_column_list,
  [10627] = 2,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(107), 1,
      sym_role_name,
  [10634] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(469), 1,
      sym_assignment_tuple,
  [10641] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_assignment_tuple,
  [10648] = 2,
    ACTIONS(917), 1,
      aux_sym_update_assignments_token1,
    STATE(518), 1,
      sym_update_assignments,
  [10655] = 1,
    ACTIONS(1384), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10660] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(94), 1,
      sym_where_spec,
  [10667] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(211), 1,
      sym_table_name,
  [10674] = 1,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10679] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(130), 1,
      sym_materialized_view_name,
  [10686] = 2,
    ACTIONS(1292), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [10693] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(596), 1,
      sym_table_name,
  [10700] = 1,
    ACTIONS(1386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10705] = 2,
    ACTIONS(1246), 1,
      sym_object_name,
    STATE(550), 1,
      sym_column_definition,
  [10712] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(611), 1,
      sym_table_name,
  [10719] = 2,
    ACTIONS(1292), 1,
      aux_sym_from_spec_token1,
    STATE(366), 1,
      sym_from_spec,
  [10726] = 2,
    ACTIONS(1348), 1,
      aux_sym_durable_writes_token1,
    STATE(285), 1,
      sym_durable_writes,
  [10733] = 1,
    ACTIONS(1388), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10738] = 2,
    ACTIONS(1282), 1,
      aux_sym_create_keyspace_token1,
    STATE(276), 1,
      sym_user_with,
  [10745] = 1,
    ACTIONS(1390), 1,
      sym_object_name,
  [10749] = 1,
    ACTIONS(1392), 1,
      aux_sym_using_timestamp_spec_token2,
  [10753] = 1,
    ACTIONS(1394), 1,
      anon_sym_LPAREN,
  [10757] = 1,
    ACTIONS(1396), 1,
      anon_sym_EQ,
  [10761] = 1,
    ACTIONS(1398), 1,
      anon_sym_COLON,
  [10765] = 1,
    ACTIONS(1400), 1,
      aux_sym_delete_statement_token3,
  [10769] = 1,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
  [10773] = 1,
    ACTIONS(1404), 1,
      aux_sym_delete_statement_token3,
  [10777] = 1,
    ACTIONS(1406), 1,
      sym_object_name,
  [10781] = 1,
    ACTIONS(1408), 1,
      aux_sym_constant_token2,
  [10785] = 1,
    ACTIONS(1410), 1,
      aux_sym_return_mode_token2,
  [10789] = 1,
    ACTIONS(1412), 1,
      aux_sym_create_function_token2,
  [10793] = 1,
    ACTIONS(1414), 1,
      sym_object_name,
  [10797] = 1,
    ACTIONS(1416), 1,
      aux_sym_create_function_token1,
  [10801] = 1,
    ACTIONS(1418), 1,
      anon_sym_COLON,
  [10805] = 1,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
  [10809] = 1,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
  [10813] = 1,
    ACTIONS(1424), 1,
      aux_sym_create_aggregate_token4,
  [10817] = 1,
    ACTIONS(1426), 1,
      sym_object_name,
  [10821] = 1,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
  [10825] = 1,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
  [10829] = 1,
    ACTIONS(1432), 1,
      aux_sym_select_statement_token1,
  [10833] = 1,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
  [10837] = 1,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
  [10841] = 1,
    ACTIONS(1438), 1,
      anon_sym_LPAREN,
  [10845] = 1,
    ACTIONS(1440), 1,
      anon_sym_LPAREN,
  [10849] = 1,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
  [10853] = 1,
    ACTIONS(1444), 1,
      anon_sym_LPAREN,
  [10857] = 1,
    ACTIONS(1446), 1,
      aux_sym_create_aggregate_token3,
  [10861] = 1,
    ACTIONS(1448), 1,
      aux_sym_create_keyspace_token1,
  [10865] = 1,
    ACTIONS(1450), 1,
      aux_sym_select_statement_token5,
  [10869] = 1,
    ACTIONS(1452), 1,
      aux_sym_delete_statement_token3,
  [10873] = 1,
    ACTIONS(1454), 1,
      anon_sym_LPAREN,
  [10877] = 1,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
  [10881] = 1,
    ACTIONS(1458), 1,
      aux_sym_delete_statement_token3,
  [10885] = 1,
    ACTIONS(1460), 1,
      aux_sym_delete_statement_token3,
  [10889] = 1,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
  [10893] = 1,
    ACTIONS(1464), 1,
      aux_sym_using_ttl_timestamp_token1,
  [10897] = 1,
    ACTIONS(1466), 1,
      aux_sym_select_statement_token5,
  [10901] = 1,
    ACTIONS(1468), 1,
      aux_sym_delete_statement_token3,
  [10905] = 1,
    ACTIONS(1470), 1,
      sym_object_name,
  [10909] = 1,
    ACTIONS(1472), 1,
      aux_sym_select_statement_token5,
  [10913] = 1,
    ACTIONS(1474), 1,
      aux_sym_create_index_token3,
  [10917] = 1,
    ACTIONS(1476), 1,
      aux_sym_delete_statement_token3,
  [10921] = 1,
    ACTIONS(1478), 1,
      aux_sym_delete_statement_token3,
  [10925] = 1,
    ACTIONS(1480), 1,
      aux_sym_order_spec_token2,
  [10929] = 1,
    ACTIONS(1482), 1,
      aux_sym_select_statement_token5,
  [10933] = 1,
    ACTIONS(1484), 1,
      aux_sym_insert_statement_token3,
  [10937] = 1,
    ACTIONS(1486), 1,
      aux_sym_delete_statement_token3,
  [10941] = 1,
    ACTIONS(1488), 1,
      anon_sym_LPAREN,
  [10945] = 1,
    ACTIONS(1490), 1,
      aux_sym_delete_statement_token3,
  [10949] = 1,
    ACTIONS(1492), 1,
      anon_sym_RBRACK,
  [10953] = 1,
    ACTIONS(1494), 1,
      aux_sym_delete_statement_token3,
  [10957] = 1,
    ACTIONS(1496), 1,
      sym_object_name,
  [10961] = 1,
    ACTIONS(1498), 1,
      aux_sym__decimal_literal_token1,
  [10965] = 1,
    ACTIONS(1500), 1,
      aux_sym_using_timestamp_spec_token2,
  [10969] = 1,
    ACTIONS(1502), 1,
      aux_sym_delete_statement_token3,
  [10973] = 1,
    ACTIONS(1504), 1,
      aux_sym_delete_statement_token3,
  [10977] = 1,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
  [10981] = 1,
    ACTIONS(1508), 1,
      aux_sym_delete_statement_token3,
  [10985] = 1,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
  [10989] = 1,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
  [10993] = 1,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
  [10997] = 1,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [11001] = 1,
    ACTIONS(1518), 1,
      aux_sym_create_aggregate_token3,
  [11005] = 1,
    ACTIONS(1520), 1,
      aux_sym_delete_statement_token3,
  [11009] = 1,
    ACTIONS(1522), 1,
      anon_sym_LPAREN,
  [11013] = 1,
    ACTIONS(1524), 1,
      anon_sym_LPAREN,
  [11017] = 1,
    ACTIONS(1526), 1,
      anon_sym_EQ,
  [11021] = 1,
    ACTIONS(1528), 1,
      aux_sym_insert_statement_token3,
  [11025] = 1,
    ACTIONS(1530), 1,
      aux_sym_create_function_token1,
  [11029] = 1,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
  [11033] = 1,
    ACTIONS(1534), 1,
      sym_object_name,
  [11037] = 1,
    ACTIONS(1536), 1,
      aux_sym_return_mode_token2,
  [11041] = 1,
    ACTIONS(1538), 1,
      aux_sym_create_function_token1,
  [11045] = 1,
    ACTIONS(1540), 1,
      aux_sym_from_spec_token1,
  [11049] = 1,
    ACTIONS(1542), 1,
      aux_sym_create_function_token2,
  [11053] = 1,
    ACTIONS(1544), 1,
      anon_sym_LPAREN,
  [11057] = 1,
    ACTIONS(1546), 1,
      aux_sym_delete_statement_token3,
  [11061] = 1,
    ACTIONS(1548), 1,
      anon_sym_EQ,
  [11065] = 1,
    ACTIONS(1550), 1,
      aux_sym_insert_statement_token3,
  [11069] = 1,
    ACTIONS(1552), 1,
      sym__boolean_literal,
  [11073] = 1,
    ACTIONS(1554), 1,
      aux_sym_create_aggregate_token3,
  [11077] = 1,
    ACTIONS(1556), 1,
      aux_sym_using_timestamp_spec_token1,
  [11081] = 1,
    ACTIONS(1558), 1,
      sym_object_name,
  [11085] = 1,
    ACTIONS(1560), 1,
      sym__boolean_literal,
  [11089] = 1,
    ACTIONS(1562), 1,
      sym__string_literal,
  [11093] = 1,
    ACTIONS(1564), 1,
      aux_sym_create_keyspace_token2,
  [11097] = 1,
    ACTIONS(1566), 1,
      aux_sym_delete_statement_token3,
  [11101] = 1,
    ACTIONS(1568), 1,
      aux_sym_insert_statement_token3,
  [11105] = 1,
    ACTIONS(1570), 1,
      anon_sym_LPAREN,
  [11109] = 1,
    ACTIONS(1572), 1,
      anon_sym_RBRACK,
  [11113] = 1,
    ACTIONS(1574), 1,
      aux_sym__decimal_literal_token1,
  [11117] = 1,
    ACTIONS(1576), 1,
      sym_object_name,
  [11121] = 1,
    ACTIONS(1578), 1,
      aux_sym_create_function_token1,
  [11125] = 1,
    ACTIONS(1580), 1,
      anon_sym_LPAREN,
  [11129] = 1,
    ACTIONS(1582), 1,
      aux_sym_insert_statement_token3,
  [11133] = 1,
    ACTIONS(1584), 1,
      aux_sym_create_index_token3,
  [11137] = 1,
    ACTIONS(1586), 1,
      aux_sym_insert_statement_token3,
  [11141] = 1,
    ACTIONS(1588), 1,
      aux_sym_constant_token2,
  [11145] = 1,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [11149] = 1,
    ACTIONS(1592), 1,
      aux_sym_insert_statement_token3,
  [11153] = 1,
    ACTIONS(1594), 1,
      aux_sym_create_keyspace_token1,
  [11157] = 1,
    ACTIONS(1596), 1,
      aux_sym_insert_statement_token3,
  [11161] = 1,
    ACTIONS(1598), 1,
      aux_sym_create_index_token3,
  [11165] = 1,
    ACTIONS(1600), 1,
      aux_sym__decimal_literal_token1,
  [11169] = 1,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [11173] = 1,
    ACTIONS(1604), 1,
      aux_sym_insert_statement_token3,
  [11177] = 1,
    ACTIONS(1606), 1,
      sym_object_name,
  [11181] = 1,
    ACTIONS(1608), 1,
      aux_sym_create_index_token3,
  [11185] = 1,
    ACTIONS(1610), 1,
      anon_sym_RPAREN,
  [11189] = 1,
    ACTIONS(1612), 1,
      aux_sym_delete_statement_token3,
  [11193] = 1,
    ACTIONS(1614), 1,
      anon_sym_RPAREN,
  [11197] = 1,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
  [11201] = 1,
    ACTIONS(1618), 1,
      anon_sym_LPAREN,
  [11205] = 1,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
  [11209] = 1,
    ACTIONS(1622), 1,
      aux_sym_insert_statement_token3,
  [11213] = 1,
    ACTIONS(1624), 1,
      aux_sym_from_spec_token1,
  [11217] = 1,
    ACTIONS(1626), 1,
      aux_sym_select_element_token1,
  [11221] = 1,
    ACTIONS(1628), 1,
      sym_object_name,
  [11225] = 1,
    ACTIONS(1630), 1,
      aux_sym_create_keyspace_token1,
  [11229] = 1,
    ACTIONS(1632), 1,
      sym__boolean_literal,
  [11233] = 1,
    ACTIONS(1634), 1,
      sym_object_name,
  [11237] = 1,
    ACTIONS(1636), 1,
      aux_sym_create_function_token1,
  [11241] = 1,
    ACTIONS(1638), 1,
      anon_sym_EQ,
  [11245] = 1,
    ACTIONS(1640), 1,
      aux_sym_create_function_token1,
  [11249] = 1,
    ACTIONS(1642), 1,
      aux_sym_select_element_token1,
  [11253] = 1,
    ACTIONS(1644), 1,
      sym_object_name,
  [11257] = 1,
    ACTIONS(1646), 1,
      aux_sym_create_function_token2,
  [11261] = 1,
    ACTIONS(1648), 1,
      sym_object_name,
  [11265] = 1,
    ACTIONS(1650), 1,
      aux_sym_delete_statement_token3,
  [11269] = 1,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
  [11273] = 1,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [11277] = 1,
    ACTIONS(1656), 1,
      sym_object_name,
  [11281] = 1,
    ACTIONS(1658), 1,
      aux_sym_create_aggregate_token5,
  [11285] = 1,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
  [11289] = 1,
    ACTIONS(1662), 1,
      sym_object_name,
  [11293] = 1,
    ACTIONS(1664), 1,
      aux_sym_insert_statement_token3,
  [11297] = 1,
    ACTIONS(1666), 1,
      anon_sym_RPAREN,
  [11301] = 1,
    ACTIONS(1668), 1,
      anon_sym_LPAREN,
  [11305] = 1,
    ACTIONS(1670), 1,
      anon_sym_RPAREN,
  [11309] = 1,
    ACTIONS(1672), 1,
      aux_sym_create_aggregate_token4,
  [11313] = 1,
    ACTIONS(1674), 1,
      aux_sym_select_element_token1,
  [11317] = 1,
    ACTIONS(1676), 1,
      aux_sym_delete_statement_token3,
  [11321] = 1,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [11325] = 1,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
  [11329] = 1,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
  [11333] = 1,
    ACTIONS(1684), 1,
      anon_sym_LPAREN,
  [11337] = 1,
    ACTIONS(1686), 1,
      sym_object_name,
  [11341] = 1,
    ACTIONS(1688), 1,
      aux_sym_create_index_token3,
  [11345] = 1,
    ACTIONS(1690), 1,
      sym_object_name,
  [11349] = 1,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
  [11353] = 1,
    ACTIONS(1694), 1,
      aux_sym_delete_statement_token3,
  [11357] = 1,
    ACTIONS(1696), 1,
      sym_object_name,
  [11361] = 1,
    ACTIONS(1698), 1,
      sym_object_name,
  [11365] = 1,
    ACTIONS(1700), 1,
      sym_object_name,
  [11369] = 1,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
  [11373] = 1,
    ACTIONS(1704), 1,
      aux_sym_create_function_token2,
  [11377] = 1,
    ACTIONS(1706), 1,
      aux_sym_create_function_token1,
  [11381] = 1,
    ACTIONS(1708), 1,
      aux_sym_create_function_token1,
  [11385] = 1,
    ACTIONS(1710), 1,
      sym__code_block,
  [11389] = 1,
    ACTIONS(1712), 1,
      aux_sym_select_element_token1,
  [11393] = 1,
    ACTIONS(1714), 1,
      sym_object_name,
  [11397] = 1,
    ACTIONS(1716), 1,
      aux_sym_create_aggregate_token4,
  [11401] = 1,
    ACTIONS(1718), 1,
      sym_object_name,
  [11405] = 1,
    ACTIONS(1720), 1,
      aux_sym_order_spec_token2,
  [11409] = 1,
    ACTIONS(766), 1,
      aux_sym_column_not_null_token1,
  [11413] = 1,
    ACTIONS(1722), 1,
      sym_object_name,
  [11417] = 1,
    ACTIONS(1724), 1,
      aux_sym_insert_statement_token2,
  [11421] = 1,
    ACTIONS(1726), 1,
      aux_sym_insert_statement_token3,
  [11425] = 1,
    ACTIONS(1728), 1,
      anon_sym_EQ,
  [11429] = 1,
    ACTIONS(1730), 1,
      aux_sym_create_aggregate_token3,
  [11433] = 1,
    ACTIONS(1732), 1,
      aux_sym_constant_token2,
  [11437] = 1,
    ACTIONS(1734), 1,
      anon_sym_COLON,
  [11441] = 1,
    ACTIONS(1736), 1,
      aux_sym_create_index_token3,
  [11445] = 1,
    ACTIONS(1738), 1,
      anon_sym_EQ,
  [11449] = 1,
    ACTIONS(1740), 1,
      aux_sym_drop_materialized_view_token2,
  [11453] = 1,
    ACTIONS(1742), 1,
      aux_sym_resource_token2,
  [11457] = 1,
    ACTIONS(1744), 1,
      aux_sym_create_keyspace_token2,
  [11461] = 1,
    ACTIONS(1746), 1,
      anon_sym_COMMA,
  [11465] = 1,
    ACTIONS(1748), 1,
      anon_sym_EQ,
  [11469] = 1,
    ACTIONS(1750), 1,
      anon_sym_RPAREN,
  [11473] = 1,
    ACTIONS(1752), 1,
      anon_sym_RPAREN,
  [11477] = 1,
    ACTIONS(1754), 1,
      sym_object_name,
  [11481] = 1,
    ACTIONS(1756), 1,
      aux_sym_create_function_token2,
  [11485] = 1,
    ACTIONS(1758), 1,
      sym_object_name,
  [11489] = 1,
    ACTIONS(1760), 1,
      aux_sym_create_index_token3,
  [11493] = 1,
    ACTIONS(1762), 1,
      sym__code_block,
  [11497] = 1,
    ACTIONS(1764), 1,
      aux_sym_select_element_token1,
  [11501] = 1,
    ACTIONS(1766), 1,
      aux_sym_create_index_token3,
  [11505] = 1,
    ACTIONS(1768), 1,
      aux_sym_create_aggregate_token6,
  [11509] = 1,
    ACTIONS(1770), 1,
      sym_object_name,
  [11513] = 1,
    ACTIONS(1772), 1,
      aux_sym_insert_statement_token3,
  [11517] = 1,
    ACTIONS(1774), 1,
      anon_sym_EQ,
  [11521] = 1,
    ACTIONS(1776), 1,
      sym_object_name,
  [11525] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [11529] = 1,
    ACTIONS(1780), 1,
      aux_sym_delete_statement_token3,
  [11533] = 1,
    ACTIONS(1782), 1,
      aux_sym_create_function_token1,
  [11537] = 1,
    ACTIONS(1784), 1,
      sym_object_name,
  [11541] = 1,
    ACTIONS(1786), 1,
      sym_object_name,
  [11545] = 1,
    ACTIONS(1788), 1,
      aux_sym_create_aggregate_token5,
  [11549] = 1,
    ACTIONS(1790), 1,
      aux_sym_drop_materialized_view_token2,
  [11553] = 1,
    ACTIONS(1792), 1,
      sym_object_name,
  [11557] = 1,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
  [11561] = 1,
    ACTIONS(1794), 1,
      aux_sym_select_element_token1,
  [11565] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [11569] = 1,
    ACTIONS(1798), 1,
      aux_sym_create_function_token2,
  [11573] = 1,
    ACTIONS(1800), 1,
      aux_sym_select_statement_token1,
  [11577] = 1,
    ACTIONS(1802), 1,
      sym__code_block,
  [11581] = 1,
    ACTIONS(1804), 1,
      aux_sym_create_aggregate_token5,
  [11585] = 1,
    ACTIONS(1806), 1,
      aux_sym_grant_token2,
  [11589] = 1,
    ACTIONS(1808), 1,
      anon_sym_LPAREN,
  [11593] = 1,
    ACTIONS(1810), 1,
      aux_sym_constant_token2,
  [11597] = 1,
    ACTIONS(1812), 1,
      aux_sym_using_timestamp_spec_token1,
  [11601] = 1,
    ACTIONS(1814), 1,
      anon_sym_RPAREN,
  [11605] = 1,
    ACTIONS(1816), 1,
      aux_sym_relation_contains_key_token2,
  [11609] = 1,
    ACTIONS(1818), 1,
      sym_object_name,
  [11613] = 1,
    ACTIONS(1820), 1,
      aux_sym_relation_contains_key_token2,
  [11617] = 1,
    ACTIONS(1822), 1,
      aux_sym_create_function_token1,
  [11621] = 1,
    ACTIONS(1824), 1,
      aux_sym_create_aggregate_token4,
  [11625] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [11629] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [11633] = 1,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
  [11637] = 1,
    ACTIONS(1832), 1,
      sym__code_block,
  [11641] = 1,
    ACTIONS(1834), 1,
      aux_sym_select_element_token1,
  [11645] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [11649] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [11653] = 1,
    ACTIONS(1840), 1,
      sym_object_name,
  [11657] = 1,
    ACTIONS(1842), 1,
      sym__string_literal,
  [11661] = 1,
    ACTIONS(1844), 1,
      aux_sym_create_aggregate_token2,
  [11665] = 1,
    ACTIONS(1846), 1,
      aux_sym_delete_statement_token3,
  [11669] = 1,
    ACTIONS(1848), 1,
      aux_sym_insert_statement_token3,
  [11673] = 1,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
  [11677] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [11681] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_function_token2,
  [11685] = 1,
    ACTIONS(1856), 1,
      anon_sym_LPAREN,
  [11689] = 1,
    ACTIONS(1858), 1,
      aux_sym_drop_materialized_view_token2,
  [11693] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_aggregate_token6,
  [11697] = 1,
    ACTIONS(1862), 1,
      aux_sym_insert_statement_token3,
  [11701] = 1,
    ACTIONS(1864), 1,
      sym__code_block,
  [11705] = 1,
    ACTIONS(1866), 1,
      aux_sym_select_element_token1,
  [11709] = 1,
    ACTIONS(1868), 1,
      aux_sym_create_aggregate_token6,
  [11713] = 1,
    ACTIONS(1870), 1,
      anon_sym_LPAREN,
  [11717] = 1,
    ACTIONS(1872), 1,
      anon_sym_COLON,
  [11721] = 1,
    ACTIONS(1874), 1,
      aux_sym_select_statement_token5,
  [11725] = 1,
    ACTIONS(1876), 1,
      anon_sym_RPAREN,
  [11729] = 1,
    ACTIONS(1878), 1,
      aux_sym_delete_statement_token3,
  [11733] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [11737] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [11741] = 1,
    ACTIONS(1884), 1,
      aux_sym_create_function_token2,
  [11745] = 1,
    ACTIONS(1886), 1,
      aux_sym_create_aggregate_token5,
  [11749] = 1,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
  [11753] = 1,
    ACTIONS(1890), 1,
      aux_sym_create_index_token3,
  [11757] = 1,
    ACTIONS(1892), 1,
      sym__code_block,
  [11761] = 1,
    ACTIONS(1894), 1,
      aux_sym_select_statement_token5,
  [11765] = 1,
    ACTIONS(1896), 1,
      aux_sym__decimal_literal_token1,
  [11769] = 1,
    ACTIONS(1898), 1,
      aux_sym_begin_batch_token4,
  [11773] = 1,
    ACTIONS(1900), 1,
      aux_sym_grant_token2,
  [11777] = 1,
    ACTIONS(1902), 1,
      aux_sym__decimal_literal_token1,
  [11781] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [11785] = 1,
    ACTIONS(1906), 1,
      aux_sym_drop_type_token1,
  [11789] = 1,
    ACTIONS(1908), 1,
      anon_sym_EQ,
  [11793] = 1,
    ACTIONS(1910), 1,
      anon_sym_EQ,
  [11797] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [11801] = 1,
    ACTIONS(1914), 1,
      aux_sym_grant_token2,
  [11805] = 1,
    ACTIONS(1916), 1,
      aux_sym_select_element_token1,
  [11809] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [11813] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [11817] = 1,
    ACTIONS(1922), 1,
      anon_sym_EQ,
  [11821] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [11825] = 1,
    ACTIONS(1926), 1,
      sym_object_name,
  [11829] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [11833] = 1,
    ACTIONS(1930), 1,
      sym_object_name,
  [11837] = 1,
    ACTIONS(1932), 1,
      aux_sym_create_keyspace_token2,
  [11841] = 1,
    ACTIONS(1934), 1,
      anon_sym_EQ,
  [11845] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [11849] = 1,
    ACTIONS(1938), 1,
      ts_builtin_sym_end,
  [11853] = 1,
    ACTIONS(1940), 1,
      aux_sym_order_spec_token1,
  [11857] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [11861] = 1,
    ACTIONS(1944), 1,
      aux_sym_begin_batch_token4,
  [11865] = 1,
    ACTIONS(1946), 1,
      aux_sym_compact_storage_token2,
  [11869] = 1,
    ACTIONS(1948), 1,
      sym__code_block,
  [11873] = 1,
    ACTIONS(1950), 1,
      aux_sym_select_element_token1,
  [11877] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_aggregate_token6,
  [11881] = 1,
    ACTIONS(1954), 1,
      sym_object_name,
  [11885] = 1,
    ACTIONS(1956), 1,
      sym__code_block,
  [11889] = 1,
    ACTIONS(1958), 1,
      sym_object_name,
  [11893] = 1,
    ACTIONS(1960), 1,
      aux_sym_compact_storage_token2,
  [11897] = 1,
    ACTIONS(1962), 1,
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
  [SMALL_STATE(27)] = 982,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1046,
  [SMALL_STATE(30)] = 1075,
  [SMALL_STATE(31)] = 1104,
  [SMALL_STATE(32)] = 1133,
  [SMALL_STATE(33)] = 1165,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1223,
  [SMALL_STATE(36)] = 1250,
  [SMALL_STATE(37)] = 1281,
  [SMALL_STATE(38)] = 1312,
  [SMALL_STATE(39)] = 1343,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1423,
  [SMALL_STATE(42)] = 1463,
  [SMALL_STATE(43)] = 1493,
  [SMALL_STATE(44)] = 1519,
  [SMALL_STATE(45)] = 1549,
  [SMALL_STATE(46)] = 1578,
  [SMALL_STATE(47)] = 1603,
  [SMALL_STATE(48)] = 1628,
  [SMALL_STATE(49)] = 1653,
  [SMALL_STATE(50)] = 1678,
  [SMALL_STATE(51)] = 1703,
  [SMALL_STATE(52)] = 1728,
  [SMALL_STATE(53)] = 1757,
  [SMALL_STATE(54)] = 1782,
  [SMALL_STATE(55)] = 1807,
  [SMALL_STATE(56)] = 1852,
  [SMALL_STATE(57)] = 1877,
  [SMALL_STATE(58)] = 1922,
  [SMALL_STATE(59)] = 1947,
  [SMALL_STATE(60)] = 1971,
  [SMALL_STATE(61)] = 2005,
  [SMALL_STATE(62)] = 2029,
  [SMALL_STATE(63)] = 2053,
  [SMALL_STATE(64)] = 2087,
  [SMALL_STATE(65)] = 2121,
  [SMALL_STATE(66)] = 2145,
  [SMALL_STATE(67)] = 2187,
  [SMALL_STATE(68)] = 2210,
  [SMALL_STATE(69)] = 2235,
  [SMALL_STATE(70)] = 2260,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2310,
  [SMALL_STATE(73)] = 2335,
  [SMALL_STATE(74)] = 2360,
  [SMALL_STATE(75)] = 2384,
  [SMALL_STATE(76)] = 2412,
  [SMALL_STATE(77)] = 2438,
  [SMALL_STATE(78)] = 2460,
  [SMALL_STATE(79)] = 2484,
  [SMALL_STATE(80)] = 2506,
  [SMALL_STATE(81)] = 2534,
  [SMALL_STATE(82)] = 2560,
  [SMALL_STATE(83)] = 2588,
  [SMALL_STATE(84)] = 2610,
  [SMALL_STATE(85)] = 2638,
  [SMALL_STATE(86)] = 2660,
  [SMALL_STATE(87)] = 2682,
  [SMALL_STATE(88)] = 2710,
  [SMALL_STATE(89)] = 2732,
  [SMALL_STATE(90)] = 2760,
  [SMALL_STATE(91)] = 2786,
  [SMALL_STATE(92)] = 2808,
  [SMALL_STATE(93)] = 2830,
  [SMALL_STATE(94)] = 2851,
  [SMALL_STATE(95)] = 2876,
  [SMALL_STATE(96)] = 2901,
  [SMALL_STATE(97)] = 2922,
  [SMALL_STATE(98)] = 2943,
  [SMALL_STATE(99)] = 2968,
  [SMALL_STATE(100)] = 2993,
  [SMALL_STATE(101)] = 3018,
  [SMALL_STATE(102)] = 3039,
  [SMALL_STATE(103)] = 3064,
  [SMALL_STATE(104)] = 3089,
  [SMALL_STATE(105)] = 3114,
  [SMALL_STATE(106)] = 3135,
  [SMALL_STATE(107)] = 3156,
  [SMALL_STATE(108)] = 3181,
  [SMALL_STATE(109)] = 3202,
  [SMALL_STATE(110)] = 3227,
  [SMALL_STATE(111)] = 3248,
  [SMALL_STATE(112)] = 3269,
  [SMALL_STATE(113)] = 3290,
  [SMALL_STATE(114)] = 3315,
  [SMALL_STATE(115)] = 3340,
  [SMALL_STATE(116)] = 3365,
  [SMALL_STATE(117)] = 3388,
  [SMALL_STATE(118)] = 3409,
  [SMALL_STATE(119)] = 3430,
  [SMALL_STATE(120)] = 3453,
  [SMALL_STATE(121)] = 3478,
  [SMALL_STATE(122)] = 3503,
  [SMALL_STATE(123)] = 3526,
  [SMALL_STATE(124)] = 3551,
  [SMALL_STATE(125)] = 3572,
  [SMALL_STATE(126)] = 3597,
  [SMALL_STATE(127)] = 3618,
  [SMALL_STATE(128)] = 3643,
  [SMALL_STATE(129)] = 3666,
  [SMALL_STATE(130)] = 3691,
  [SMALL_STATE(131)] = 3716,
  [SMALL_STATE(132)] = 3741,
  [SMALL_STATE(133)] = 3766,
  [SMALL_STATE(134)] = 3791,
  [SMALL_STATE(135)] = 3816,
  [SMALL_STATE(136)] = 3837,
  [SMALL_STATE(137)] = 3862,
  [SMALL_STATE(138)] = 3887,
  [SMALL_STATE(139)] = 3912,
  [SMALL_STATE(140)] = 3937,
  [SMALL_STATE(141)] = 3962,
  [SMALL_STATE(142)] = 3987,
  [SMALL_STATE(143)] = 4012,
  [SMALL_STATE(144)] = 4037,
  [SMALL_STATE(145)] = 4062,
  [SMALL_STATE(146)] = 4083,
  [SMALL_STATE(147)] = 4108,
  [SMALL_STATE(148)] = 4129,
  [SMALL_STATE(149)] = 4150,
  [SMALL_STATE(150)] = 4170,
  [SMALL_STATE(151)] = 4190,
  [SMALL_STATE(152)] = 4210,
  [SMALL_STATE(153)] = 4230,
  [SMALL_STATE(154)] = 4250,
  [SMALL_STATE(155)] = 4272,
  [SMALL_STATE(156)] = 4294,
  [SMALL_STATE(157)] = 4314,
  [SMALL_STATE(158)] = 4336,
  [SMALL_STATE(159)] = 4358,
  [SMALL_STATE(160)] = 4378,
  [SMALL_STATE(161)] = 4398,
  [SMALL_STATE(162)] = 4418,
  [SMALL_STATE(163)] = 4438,
  [SMALL_STATE(164)] = 4458,
  [SMALL_STATE(165)] = 4480,
  [SMALL_STATE(166)] = 4500,
  [SMALL_STATE(167)] = 4522,
  [SMALL_STATE(168)] = 4542,
  [SMALL_STATE(169)] = 4562,
  [SMALL_STATE(170)] = 4582,
  [SMALL_STATE(171)] = 4604,
  [SMALL_STATE(172)] = 4624,
  [SMALL_STATE(173)] = 4644,
  [SMALL_STATE(174)] = 4664,
  [SMALL_STATE(175)] = 4686,
  [SMALL_STATE(176)] = 4706,
  [SMALL_STATE(177)] = 4726,
  [SMALL_STATE(178)] = 4746,
  [SMALL_STATE(179)] = 4768,
  [SMALL_STATE(180)] = 4788,
  [SMALL_STATE(181)] = 4808,
  [SMALL_STATE(182)] = 4828,
  [SMALL_STATE(183)] = 4850,
  [SMALL_STATE(184)] = 4870,
  [SMALL_STATE(185)] = 4892,
  [SMALL_STATE(186)] = 4911,
  [SMALL_STATE(187)] = 4930,
  [SMALL_STATE(188)] = 4949,
  [SMALL_STATE(189)] = 4968,
  [SMALL_STATE(190)] = 4987,
  [SMALL_STATE(191)] = 5006,
  [SMALL_STATE(192)] = 5025,
  [SMALL_STATE(193)] = 5044,
  [SMALL_STATE(194)] = 5063,
  [SMALL_STATE(195)] = 5082,
  [SMALL_STATE(196)] = 5101,
  [SMALL_STATE(197)] = 5120,
  [SMALL_STATE(198)] = 5139,
  [SMALL_STATE(199)] = 5158,
  [SMALL_STATE(200)] = 5177,
  [SMALL_STATE(201)] = 5196,
  [SMALL_STATE(202)] = 5215,
  [SMALL_STATE(203)] = 5234,
  [SMALL_STATE(204)] = 5253,
  [SMALL_STATE(205)] = 5272,
  [SMALL_STATE(206)] = 5291,
  [SMALL_STATE(207)] = 5310,
  [SMALL_STATE(208)] = 5329,
  [SMALL_STATE(209)] = 5348,
  [SMALL_STATE(210)] = 5367,
  [SMALL_STATE(211)] = 5402,
  [SMALL_STATE(212)] = 5421,
  [SMALL_STATE(213)] = 5440,
  [SMALL_STATE(214)] = 5459,
  [SMALL_STATE(215)] = 5478,
  [SMALL_STATE(216)] = 5497,
  [SMALL_STATE(217)] = 5516,
  [SMALL_STATE(218)] = 5535,
  [SMALL_STATE(219)] = 5554,
  [SMALL_STATE(220)] = 5573,
  [SMALL_STATE(221)] = 5592,
  [SMALL_STATE(222)] = 5611,
  [SMALL_STATE(223)] = 5630,
  [SMALL_STATE(224)] = 5649,
  [SMALL_STATE(225)] = 5668,
  [SMALL_STATE(226)] = 5687,
  [SMALL_STATE(227)] = 5706,
  [SMALL_STATE(228)] = 5725,
  [SMALL_STATE(229)] = 5744,
  [SMALL_STATE(230)] = 5763,
  [SMALL_STATE(231)] = 5782,
  [SMALL_STATE(232)] = 5801,
  [SMALL_STATE(233)] = 5820,
  [SMALL_STATE(234)] = 5839,
  [SMALL_STATE(235)] = 5858,
  [SMALL_STATE(236)] = 5877,
  [SMALL_STATE(237)] = 5896,
  [SMALL_STATE(238)] = 5915,
  [SMALL_STATE(239)] = 5934,
  [SMALL_STATE(240)] = 5953,
  [SMALL_STATE(241)] = 5972,
  [SMALL_STATE(242)] = 5991,
  [SMALL_STATE(243)] = 6010,
  [SMALL_STATE(244)] = 6029,
  [SMALL_STATE(245)] = 6048,
  [SMALL_STATE(246)] = 6067,
  [SMALL_STATE(247)] = 6086,
  [SMALL_STATE(248)] = 6105,
  [SMALL_STATE(249)] = 6124,
  [SMALL_STATE(250)] = 6143,
  [SMALL_STATE(251)] = 6162,
  [SMALL_STATE(252)] = 6181,
  [SMALL_STATE(253)] = 6200,
  [SMALL_STATE(254)] = 6219,
  [SMALL_STATE(255)] = 6240,
  [SMALL_STATE(256)] = 6273,
  [SMALL_STATE(257)] = 6292,
  [SMALL_STATE(258)] = 6311,
  [SMALL_STATE(259)] = 6330,
  [SMALL_STATE(260)] = 6349,
  [SMALL_STATE(261)] = 6368,
  [SMALL_STATE(262)] = 6387,
  [SMALL_STATE(263)] = 6406,
  [SMALL_STATE(264)] = 6425,
  [SMALL_STATE(265)] = 6444,
  [SMALL_STATE(266)] = 6463,
  [SMALL_STATE(267)] = 6482,
  [SMALL_STATE(268)] = 6501,
  [SMALL_STATE(269)] = 6520,
  [SMALL_STATE(270)] = 6539,
  [SMALL_STATE(271)] = 6558,
  [SMALL_STATE(272)] = 6577,
  [SMALL_STATE(273)] = 6596,
  [SMALL_STATE(274)] = 6615,
  [SMALL_STATE(275)] = 6634,
  [SMALL_STATE(276)] = 6653,
  [SMALL_STATE(277)] = 6672,
  [SMALL_STATE(278)] = 6691,
  [SMALL_STATE(279)] = 6710,
  [SMALL_STATE(280)] = 6729,
  [SMALL_STATE(281)] = 6748,
  [SMALL_STATE(282)] = 6767,
  [SMALL_STATE(283)] = 6786,
  [SMALL_STATE(284)] = 6805,
  [SMALL_STATE(285)] = 6824,
  [SMALL_STATE(286)] = 6843,
  [SMALL_STATE(287)] = 6862,
  [SMALL_STATE(288)] = 6890,
  [SMALL_STATE(289)] = 6922,
  [SMALL_STATE(290)] = 6950,
  [SMALL_STATE(291)] = 6968,
  [SMALL_STATE(292)] = 6996,
  [SMALL_STATE(293)] = 7024,
  [SMALL_STATE(294)] = 7052,
  [SMALL_STATE(295)] = 7079,
  [SMALL_STATE(296)] = 7106,
  [SMALL_STATE(297)] = 7137,
  [SMALL_STATE(298)] = 7164,
  [SMALL_STATE(299)] = 7191,
  [SMALL_STATE(300)] = 7224,
  [SMALL_STATE(301)] = 7251,
  [SMALL_STATE(302)] = 7279,
  [SMALL_STATE(303)] = 7304,
  [SMALL_STATE(304)] = 7327,
  [SMALL_STATE(305)] = 7361,
  [SMALL_STATE(306)] = 7383,
  [SMALL_STATE(307)] = 7403,
  [SMALL_STATE(308)] = 7420,
  [SMALL_STATE(309)] = 7443,
  [SMALL_STATE(310)] = 7462,
  [SMALL_STATE(311)] = 7493,
  [SMALL_STATE(312)] = 7512,
  [SMALL_STATE(313)] = 7529,
  [SMALL_STATE(314)] = 7548,
  [SMALL_STATE(315)] = 7571,
  [SMALL_STATE(316)] = 7590,
  [SMALL_STATE(317)] = 7609,
  [SMALL_STATE(318)] = 7628,
  [SMALL_STATE(319)] = 7648,
  [SMALL_STATE(320)] = 7671,
  [SMALL_STATE(321)] = 7692,
  [SMALL_STATE(322)] = 7715,
  [SMALL_STATE(323)] = 7738,
  [SMALL_STATE(324)] = 7759,
  [SMALL_STATE(325)] = 7780,
  [SMALL_STATE(326)] = 7803,
  [SMALL_STATE(327)] = 7824,
  [SMALL_STATE(328)] = 7847,
  [SMALL_STATE(329)] = 7870,
  [SMALL_STATE(330)] = 7893,
  [SMALL_STATE(331)] = 7914,
  [SMALL_STATE(332)] = 7932,
  [SMALL_STATE(333)] = 7946,
  [SMALL_STATE(334)] = 7966,
  [SMALL_STATE(335)] = 7984,
  [SMALL_STATE(336)] = 8004,
  [SMALL_STATE(337)] = 8026,
  [SMALL_STATE(338)] = 8044,
  [SMALL_STATE(339)] = 8066,
  [SMALL_STATE(340)] = 8088,
  [SMALL_STATE(341)] = 8102,
  [SMALL_STATE(342)] = 8124,
  [SMALL_STATE(343)] = 8141,
  [SMALL_STATE(344)] = 8160,
  [SMALL_STATE(345)] = 8171,
  [SMALL_STATE(346)] = 8190,
  [SMALL_STATE(347)] = 8198,
  [SMALL_STATE(348)] = 8214,
  [SMALL_STATE(349)] = 8222,
  [SMALL_STATE(350)] = 8234,
  [SMALL_STATE(351)] = 8242,
  [SMALL_STATE(352)] = 8250,
  [SMALL_STATE(353)] = 8266,
  [SMALL_STATE(354)] = 8282,
  [SMALL_STATE(355)] = 8294,
  [SMALL_STATE(356)] = 8302,
  [SMALL_STATE(357)] = 8310,
  [SMALL_STATE(358)] = 8326,
  [SMALL_STATE(359)] = 8338,
  [SMALL_STATE(360)] = 8346,
  [SMALL_STATE(361)] = 8360,
  [SMALL_STATE(362)] = 8376,
  [SMALL_STATE(363)] = 8392,
  [SMALL_STATE(364)] = 8408,
  [SMALL_STATE(365)] = 8419,
  [SMALL_STATE(366)] = 8432,
  [SMALL_STATE(367)] = 8445,
  [SMALL_STATE(368)] = 8454,
  [SMALL_STATE(369)] = 8467,
  [SMALL_STATE(370)] = 8480,
  [SMALL_STATE(371)] = 8491,
  [SMALL_STATE(372)] = 8502,
  [SMALL_STATE(373)] = 8515,
  [SMALL_STATE(374)] = 8528,
  [SMALL_STATE(375)] = 8541,
  [SMALL_STATE(376)] = 8554,
  [SMALL_STATE(377)] = 8567,
  [SMALL_STATE(378)] = 8578,
  [SMALL_STATE(379)] = 8591,
  [SMALL_STATE(380)] = 8598,
  [SMALL_STATE(381)] = 8611,
  [SMALL_STATE(382)] = 8622,
  [SMALL_STATE(383)] = 8633,
  [SMALL_STATE(384)] = 8643,
  [SMALL_STATE(385)] = 8651,
  [SMALL_STATE(386)] = 8661,
  [SMALL_STATE(387)] = 8671,
  [SMALL_STATE(388)] = 8681,
  [SMALL_STATE(389)] = 8691,
  [SMALL_STATE(390)] = 8701,
  [SMALL_STATE(391)] = 8711,
  [SMALL_STATE(392)] = 8719,
  [SMALL_STATE(393)] = 8729,
  [SMALL_STATE(394)] = 8739,
  [SMALL_STATE(395)] = 8749,
  [SMALL_STATE(396)] = 8757,
  [SMALL_STATE(397)] = 8767,
  [SMALL_STATE(398)] = 8777,
  [SMALL_STATE(399)] = 8787,
  [SMALL_STATE(400)] = 8797,
  [SMALL_STATE(401)] = 8807,
  [SMALL_STATE(402)] = 8817,
  [SMALL_STATE(403)] = 8827,
  [SMALL_STATE(404)] = 8837,
  [SMALL_STATE(405)] = 8847,
  [SMALL_STATE(406)] = 8857,
  [SMALL_STATE(407)] = 8867,
  [SMALL_STATE(408)] = 8877,
  [SMALL_STATE(409)] = 8887,
  [SMALL_STATE(410)] = 8897,
  [SMALL_STATE(411)] = 8907,
  [SMALL_STATE(412)] = 8915,
  [SMALL_STATE(413)] = 8925,
  [SMALL_STATE(414)] = 8935,
  [SMALL_STATE(415)] = 8945,
  [SMALL_STATE(416)] = 8955,
  [SMALL_STATE(417)] = 8965,
  [SMALL_STATE(418)] = 8975,
  [SMALL_STATE(419)] = 8985,
  [SMALL_STATE(420)] = 8995,
  [SMALL_STATE(421)] = 9005,
  [SMALL_STATE(422)] = 9015,
  [SMALL_STATE(423)] = 9025,
  [SMALL_STATE(424)] = 9035,
  [SMALL_STATE(425)] = 9045,
  [SMALL_STATE(426)] = 9055,
  [SMALL_STATE(427)] = 9065,
  [SMALL_STATE(428)] = 9075,
  [SMALL_STATE(429)] = 9085,
  [SMALL_STATE(430)] = 9095,
  [SMALL_STATE(431)] = 9105,
  [SMALL_STATE(432)] = 9115,
  [SMALL_STATE(433)] = 9125,
  [SMALL_STATE(434)] = 9135,
  [SMALL_STATE(435)] = 9143,
  [SMALL_STATE(436)] = 9153,
  [SMALL_STATE(437)] = 9163,
  [SMALL_STATE(438)] = 9173,
  [SMALL_STATE(439)] = 9183,
  [SMALL_STATE(440)] = 9193,
  [SMALL_STATE(441)] = 9203,
  [SMALL_STATE(442)] = 9213,
  [SMALL_STATE(443)] = 9223,
  [SMALL_STATE(444)] = 9233,
  [SMALL_STATE(445)] = 9243,
  [SMALL_STATE(446)] = 9253,
  [SMALL_STATE(447)] = 9263,
  [SMALL_STATE(448)] = 9269,
  [SMALL_STATE(449)] = 9279,
  [SMALL_STATE(450)] = 9289,
  [SMALL_STATE(451)] = 9299,
  [SMALL_STATE(452)] = 9309,
  [SMALL_STATE(453)] = 9317,
  [SMALL_STATE(454)] = 9327,
  [SMALL_STATE(455)] = 9333,
  [SMALL_STATE(456)] = 9343,
  [SMALL_STATE(457)] = 9353,
  [SMALL_STATE(458)] = 9363,
  [SMALL_STATE(459)] = 9373,
  [SMALL_STATE(460)] = 9383,
  [SMALL_STATE(461)] = 9393,
  [SMALL_STATE(462)] = 9401,
  [SMALL_STATE(463)] = 9411,
  [SMALL_STATE(464)] = 9421,
  [SMALL_STATE(465)] = 9431,
  [SMALL_STATE(466)] = 9441,
  [SMALL_STATE(467)] = 9451,
  [SMALL_STATE(468)] = 9461,
  [SMALL_STATE(469)] = 9471,
  [SMALL_STATE(470)] = 9481,
  [SMALL_STATE(471)] = 9491,
  [SMALL_STATE(472)] = 9501,
  [SMALL_STATE(473)] = 9511,
  [SMALL_STATE(474)] = 9521,
  [SMALL_STATE(475)] = 9531,
  [SMALL_STATE(476)] = 9541,
  [SMALL_STATE(477)] = 9551,
  [SMALL_STATE(478)] = 9561,
  [SMALL_STATE(479)] = 9571,
  [SMALL_STATE(480)] = 9581,
  [SMALL_STATE(481)] = 9591,
  [SMALL_STATE(482)] = 9601,
  [SMALL_STATE(483)] = 9611,
  [SMALL_STATE(484)] = 9621,
  [SMALL_STATE(485)] = 9631,
  [SMALL_STATE(486)] = 9641,
  [SMALL_STATE(487)] = 9651,
  [SMALL_STATE(488)] = 9661,
  [SMALL_STATE(489)] = 9671,
  [SMALL_STATE(490)] = 9677,
  [SMALL_STATE(491)] = 9687,
  [SMALL_STATE(492)] = 9697,
  [SMALL_STATE(493)] = 9707,
  [SMALL_STATE(494)] = 9715,
  [SMALL_STATE(495)] = 9725,
  [SMALL_STATE(496)] = 9735,
  [SMALL_STATE(497)] = 9745,
  [SMALL_STATE(498)] = 9755,
  [SMALL_STATE(499)] = 9765,
  [SMALL_STATE(500)] = 9775,
  [SMALL_STATE(501)] = 9785,
  [SMALL_STATE(502)] = 9795,
  [SMALL_STATE(503)] = 9805,
  [SMALL_STATE(504)] = 9815,
  [SMALL_STATE(505)] = 9825,
  [SMALL_STATE(506)] = 9831,
  [SMALL_STATE(507)] = 9841,
  [SMALL_STATE(508)] = 9848,
  [SMALL_STATE(509)] = 9855,
  [SMALL_STATE(510)] = 9862,
  [SMALL_STATE(511)] = 9869,
  [SMALL_STATE(512)] = 9874,
  [SMALL_STATE(513)] = 9879,
  [SMALL_STATE(514)] = 9886,
  [SMALL_STATE(515)] = 9891,
  [SMALL_STATE(516)] = 9896,
  [SMALL_STATE(517)] = 9903,
  [SMALL_STATE(518)] = 9910,
  [SMALL_STATE(519)] = 9917,
  [SMALL_STATE(520)] = 9924,
  [SMALL_STATE(521)] = 9931,
  [SMALL_STATE(522)] = 9938,
  [SMALL_STATE(523)] = 9945,
  [SMALL_STATE(524)] = 9952,
  [SMALL_STATE(525)] = 9959,
  [SMALL_STATE(526)] = 9966,
  [SMALL_STATE(527)] = 9973,
  [SMALL_STATE(528)] = 9980,
  [SMALL_STATE(529)] = 9987,
  [SMALL_STATE(530)] = 9994,
  [SMALL_STATE(531)] = 10001,
  [SMALL_STATE(532)] = 10008,
  [SMALL_STATE(533)] = 10015,
  [SMALL_STATE(534)] = 10022,
  [SMALL_STATE(535)] = 10029,
  [SMALL_STATE(536)] = 10036,
  [SMALL_STATE(537)] = 10043,
  [SMALL_STATE(538)] = 10050,
  [SMALL_STATE(539)] = 10057,
  [SMALL_STATE(540)] = 10064,
  [SMALL_STATE(541)] = 10069,
  [SMALL_STATE(542)] = 10074,
  [SMALL_STATE(543)] = 10079,
  [SMALL_STATE(544)] = 10086,
  [SMALL_STATE(545)] = 10091,
  [SMALL_STATE(546)] = 10098,
  [SMALL_STATE(547)] = 10105,
  [SMALL_STATE(548)] = 10110,
  [SMALL_STATE(549)] = 10117,
  [SMALL_STATE(550)] = 10122,
  [SMALL_STATE(551)] = 10127,
  [SMALL_STATE(552)] = 10132,
  [SMALL_STATE(553)] = 10139,
  [SMALL_STATE(554)] = 10146,
  [SMALL_STATE(555)] = 10153,
  [SMALL_STATE(556)] = 10160,
  [SMALL_STATE(557)] = 10167,
  [SMALL_STATE(558)] = 10174,
  [SMALL_STATE(559)] = 10181,
  [SMALL_STATE(560)] = 10188,
  [SMALL_STATE(561)] = 10193,
  [SMALL_STATE(562)] = 10200,
  [SMALL_STATE(563)] = 10207,
  [SMALL_STATE(564)] = 10214,
  [SMALL_STATE(565)] = 10221,
  [SMALL_STATE(566)] = 10228,
  [SMALL_STATE(567)] = 10235,
  [SMALL_STATE(568)] = 10242,
  [SMALL_STATE(569)] = 10249,
  [SMALL_STATE(570)] = 10256,
  [SMALL_STATE(571)] = 10263,
  [SMALL_STATE(572)] = 10270,
  [SMALL_STATE(573)] = 10277,
  [SMALL_STATE(574)] = 10284,
  [SMALL_STATE(575)] = 10291,
  [SMALL_STATE(576)] = 10298,
  [SMALL_STATE(577)] = 10305,
  [SMALL_STATE(578)] = 10312,
  [SMALL_STATE(579)] = 10319,
  [SMALL_STATE(580)] = 10324,
  [SMALL_STATE(581)] = 10329,
  [SMALL_STATE(582)] = 10336,
  [SMALL_STATE(583)] = 10341,
  [SMALL_STATE(584)] = 10346,
  [SMALL_STATE(585)] = 10353,
  [SMALL_STATE(586)] = 10360,
  [SMALL_STATE(587)] = 10367,
  [SMALL_STATE(588)] = 10374,
  [SMALL_STATE(589)] = 10381,
  [SMALL_STATE(590)] = 10388,
  [SMALL_STATE(591)] = 10393,
  [SMALL_STATE(592)] = 10400,
  [SMALL_STATE(593)] = 10407,
  [SMALL_STATE(594)] = 10414,
  [SMALL_STATE(595)] = 10421,
  [SMALL_STATE(596)] = 10428,
  [SMALL_STATE(597)] = 10435,
  [SMALL_STATE(598)] = 10442,
  [SMALL_STATE(599)] = 10449,
  [SMALL_STATE(600)] = 10454,
  [SMALL_STATE(601)] = 10459,
  [SMALL_STATE(602)] = 10466,
  [SMALL_STATE(603)] = 10471,
  [SMALL_STATE(604)] = 10478,
  [SMALL_STATE(605)] = 10485,
  [SMALL_STATE(606)] = 10492,
  [SMALL_STATE(607)] = 10499,
  [SMALL_STATE(608)] = 10506,
  [SMALL_STATE(609)] = 10511,
  [SMALL_STATE(610)] = 10518,
  [SMALL_STATE(611)] = 10525,
  [SMALL_STATE(612)] = 10532,
  [SMALL_STATE(613)] = 10539,
  [SMALL_STATE(614)] = 10546,
  [SMALL_STATE(615)] = 10553,
  [SMALL_STATE(616)] = 10558,
  [SMALL_STATE(617)] = 10565,
  [SMALL_STATE(618)] = 10570,
  [SMALL_STATE(619)] = 10577,
  [SMALL_STATE(620)] = 10584,
  [SMALL_STATE(621)] = 10589,
  [SMALL_STATE(622)] = 10596,
  [SMALL_STATE(623)] = 10603,
  [SMALL_STATE(624)] = 10610,
  [SMALL_STATE(625)] = 10615,
  [SMALL_STATE(626)] = 10620,
  [SMALL_STATE(627)] = 10627,
  [SMALL_STATE(628)] = 10634,
  [SMALL_STATE(629)] = 10641,
  [SMALL_STATE(630)] = 10648,
  [SMALL_STATE(631)] = 10655,
  [SMALL_STATE(632)] = 10660,
  [SMALL_STATE(633)] = 10667,
  [SMALL_STATE(634)] = 10674,
  [SMALL_STATE(635)] = 10679,
  [SMALL_STATE(636)] = 10686,
  [SMALL_STATE(637)] = 10693,
  [SMALL_STATE(638)] = 10700,
  [SMALL_STATE(639)] = 10705,
  [SMALL_STATE(640)] = 10712,
  [SMALL_STATE(641)] = 10719,
  [SMALL_STATE(642)] = 10726,
  [SMALL_STATE(643)] = 10733,
  [SMALL_STATE(644)] = 10738,
  [SMALL_STATE(645)] = 10745,
  [SMALL_STATE(646)] = 10749,
  [SMALL_STATE(647)] = 10753,
  [SMALL_STATE(648)] = 10757,
  [SMALL_STATE(649)] = 10761,
  [SMALL_STATE(650)] = 10765,
  [SMALL_STATE(651)] = 10769,
  [SMALL_STATE(652)] = 10773,
  [SMALL_STATE(653)] = 10777,
  [SMALL_STATE(654)] = 10781,
  [SMALL_STATE(655)] = 10785,
  [SMALL_STATE(656)] = 10789,
  [SMALL_STATE(657)] = 10793,
  [SMALL_STATE(658)] = 10797,
  [SMALL_STATE(659)] = 10801,
  [SMALL_STATE(660)] = 10805,
  [SMALL_STATE(661)] = 10809,
  [SMALL_STATE(662)] = 10813,
  [SMALL_STATE(663)] = 10817,
  [SMALL_STATE(664)] = 10821,
  [SMALL_STATE(665)] = 10825,
  [SMALL_STATE(666)] = 10829,
  [SMALL_STATE(667)] = 10833,
  [SMALL_STATE(668)] = 10837,
  [SMALL_STATE(669)] = 10841,
  [SMALL_STATE(670)] = 10845,
  [SMALL_STATE(671)] = 10849,
  [SMALL_STATE(672)] = 10853,
  [SMALL_STATE(673)] = 10857,
  [SMALL_STATE(674)] = 10861,
  [SMALL_STATE(675)] = 10865,
  [SMALL_STATE(676)] = 10869,
  [SMALL_STATE(677)] = 10873,
  [SMALL_STATE(678)] = 10877,
  [SMALL_STATE(679)] = 10881,
  [SMALL_STATE(680)] = 10885,
  [SMALL_STATE(681)] = 10889,
  [SMALL_STATE(682)] = 10893,
  [SMALL_STATE(683)] = 10897,
  [SMALL_STATE(684)] = 10901,
  [SMALL_STATE(685)] = 10905,
  [SMALL_STATE(686)] = 10909,
  [SMALL_STATE(687)] = 10913,
  [SMALL_STATE(688)] = 10917,
  [SMALL_STATE(689)] = 10921,
  [SMALL_STATE(690)] = 10925,
  [SMALL_STATE(691)] = 10929,
  [SMALL_STATE(692)] = 10933,
  [SMALL_STATE(693)] = 10937,
  [SMALL_STATE(694)] = 10941,
  [SMALL_STATE(695)] = 10945,
  [SMALL_STATE(696)] = 10949,
  [SMALL_STATE(697)] = 10953,
  [SMALL_STATE(698)] = 10957,
  [SMALL_STATE(699)] = 10961,
  [SMALL_STATE(700)] = 10965,
  [SMALL_STATE(701)] = 10969,
  [SMALL_STATE(702)] = 10973,
  [SMALL_STATE(703)] = 10977,
  [SMALL_STATE(704)] = 10981,
  [SMALL_STATE(705)] = 10985,
  [SMALL_STATE(706)] = 10989,
  [SMALL_STATE(707)] = 10993,
  [SMALL_STATE(708)] = 10997,
  [SMALL_STATE(709)] = 11001,
  [SMALL_STATE(710)] = 11005,
  [SMALL_STATE(711)] = 11009,
  [SMALL_STATE(712)] = 11013,
  [SMALL_STATE(713)] = 11017,
  [SMALL_STATE(714)] = 11021,
  [SMALL_STATE(715)] = 11025,
  [SMALL_STATE(716)] = 11029,
  [SMALL_STATE(717)] = 11033,
  [SMALL_STATE(718)] = 11037,
  [SMALL_STATE(719)] = 11041,
  [SMALL_STATE(720)] = 11045,
  [SMALL_STATE(721)] = 11049,
  [SMALL_STATE(722)] = 11053,
  [SMALL_STATE(723)] = 11057,
  [SMALL_STATE(724)] = 11061,
  [SMALL_STATE(725)] = 11065,
  [SMALL_STATE(726)] = 11069,
  [SMALL_STATE(727)] = 11073,
  [SMALL_STATE(728)] = 11077,
  [SMALL_STATE(729)] = 11081,
  [SMALL_STATE(730)] = 11085,
  [SMALL_STATE(731)] = 11089,
  [SMALL_STATE(732)] = 11093,
  [SMALL_STATE(733)] = 11097,
  [SMALL_STATE(734)] = 11101,
  [SMALL_STATE(735)] = 11105,
  [SMALL_STATE(736)] = 11109,
  [SMALL_STATE(737)] = 11113,
  [SMALL_STATE(738)] = 11117,
  [SMALL_STATE(739)] = 11121,
  [SMALL_STATE(740)] = 11125,
  [SMALL_STATE(741)] = 11129,
  [SMALL_STATE(742)] = 11133,
  [SMALL_STATE(743)] = 11137,
  [SMALL_STATE(744)] = 11141,
  [SMALL_STATE(745)] = 11145,
  [SMALL_STATE(746)] = 11149,
  [SMALL_STATE(747)] = 11153,
  [SMALL_STATE(748)] = 11157,
  [SMALL_STATE(749)] = 11161,
  [SMALL_STATE(750)] = 11165,
  [SMALL_STATE(751)] = 11169,
  [SMALL_STATE(752)] = 11173,
  [SMALL_STATE(753)] = 11177,
  [SMALL_STATE(754)] = 11181,
  [SMALL_STATE(755)] = 11185,
  [SMALL_STATE(756)] = 11189,
  [SMALL_STATE(757)] = 11193,
  [SMALL_STATE(758)] = 11197,
  [SMALL_STATE(759)] = 11201,
  [SMALL_STATE(760)] = 11205,
  [SMALL_STATE(761)] = 11209,
  [SMALL_STATE(762)] = 11213,
  [SMALL_STATE(763)] = 11217,
  [SMALL_STATE(764)] = 11221,
  [SMALL_STATE(765)] = 11225,
  [SMALL_STATE(766)] = 11229,
  [SMALL_STATE(767)] = 11233,
  [SMALL_STATE(768)] = 11237,
  [SMALL_STATE(769)] = 11241,
  [SMALL_STATE(770)] = 11245,
  [SMALL_STATE(771)] = 11249,
  [SMALL_STATE(772)] = 11253,
  [SMALL_STATE(773)] = 11257,
  [SMALL_STATE(774)] = 11261,
  [SMALL_STATE(775)] = 11265,
  [SMALL_STATE(776)] = 11269,
  [SMALL_STATE(777)] = 11273,
  [SMALL_STATE(778)] = 11277,
  [SMALL_STATE(779)] = 11281,
  [SMALL_STATE(780)] = 11285,
  [SMALL_STATE(781)] = 11289,
  [SMALL_STATE(782)] = 11293,
  [SMALL_STATE(783)] = 11297,
  [SMALL_STATE(784)] = 11301,
  [SMALL_STATE(785)] = 11305,
  [SMALL_STATE(786)] = 11309,
  [SMALL_STATE(787)] = 11313,
  [SMALL_STATE(788)] = 11317,
  [SMALL_STATE(789)] = 11321,
  [SMALL_STATE(790)] = 11325,
  [SMALL_STATE(791)] = 11329,
  [SMALL_STATE(792)] = 11333,
  [SMALL_STATE(793)] = 11337,
  [SMALL_STATE(794)] = 11341,
  [SMALL_STATE(795)] = 11345,
  [SMALL_STATE(796)] = 11349,
  [SMALL_STATE(797)] = 11353,
  [SMALL_STATE(798)] = 11357,
  [SMALL_STATE(799)] = 11361,
  [SMALL_STATE(800)] = 11365,
  [SMALL_STATE(801)] = 11369,
  [SMALL_STATE(802)] = 11373,
  [SMALL_STATE(803)] = 11377,
  [SMALL_STATE(804)] = 11381,
  [SMALL_STATE(805)] = 11385,
  [SMALL_STATE(806)] = 11389,
  [SMALL_STATE(807)] = 11393,
  [SMALL_STATE(808)] = 11397,
  [SMALL_STATE(809)] = 11401,
  [SMALL_STATE(810)] = 11405,
  [SMALL_STATE(811)] = 11409,
  [SMALL_STATE(812)] = 11413,
  [SMALL_STATE(813)] = 11417,
  [SMALL_STATE(814)] = 11421,
  [SMALL_STATE(815)] = 11425,
  [SMALL_STATE(816)] = 11429,
  [SMALL_STATE(817)] = 11433,
  [SMALL_STATE(818)] = 11437,
  [SMALL_STATE(819)] = 11441,
  [SMALL_STATE(820)] = 11445,
  [SMALL_STATE(821)] = 11449,
  [SMALL_STATE(822)] = 11453,
  [SMALL_STATE(823)] = 11457,
  [SMALL_STATE(824)] = 11461,
  [SMALL_STATE(825)] = 11465,
  [SMALL_STATE(826)] = 11469,
  [SMALL_STATE(827)] = 11473,
  [SMALL_STATE(828)] = 11477,
  [SMALL_STATE(829)] = 11481,
  [SMALL_STATE(830)] = 11485,
  [SMALL_STATE(831)] = 11489,
  [SMALL_STATE(832)] = 11493,
  [SMALL_STATE(833)] = 11497,
  [SMALL_STATE(834)] = 11501,
  [SMALL_STATE(835)] = 11505,
  [SMALL_STATE(836)] = 11509,
  [SMALL_STATE(837)] = 11513,
  [SMALL_STATE(838)] = 11517,
  [SMALL_STATE(839)] = 11521,
  [SMALL_STATE(840)] = 11525,
  [SMALL_STATE(841)] = 11529,
  [SMALL_STATE(842)] = 11533,
  [SMALL_STATE(843)] = 11537,
  [SMALL_STATE(844)] = 11541,
  [SMALL_STATE(845)] = 11545,
  [SMALL_STATE(846)] = 11549,
  [SMALL_STATE(847)] = 11553,
  [SMALL_STATE(848)] = 11557,
  [SMALL_STATE(849)] = 11561,
  [SMALL_STATE(850)] = 11565,
  [SMALL_STATE(851)] = 11569,
  [SMALL_STATE(852)] = 11573,
  [SMALL_STATE(853)] = 11577,
  [SMALL_STATE(854)] = 11581,
  [SMALL_STATE(855)] = 11585,
  [SMALL_STATE(856)] = 11589,
  [SMALL_STATE(857)] = 11593,
  [SMALL_STATE(858)] = 11597,
  [SMALL_STATE(859)] = 11601,
  [SMALL_STATE(860)] = 11605,
  [SMALL_STATE(861)] = 11609,
  [SMALL_STATE(862)] = 11613,
  [SMALL_STATE(863)] = 11617,
  [SMALL_STATE(864)] = 11621,
  [SMALL_STATE(865)] = 11625,
  [SMALL_STATE(866)] = 11629,
  [SMALL_STATE(867)] = 11633,
  [SMALL_STATE(868)] = 11637,
  [SMALL_STATE(869)] = 11641,
  [SMALL_STATE(870)] = 11645,
  [SMALL_STATE(871)] = 11649,
  [SMALL_STATE(872)] = 11653,
  [SMALL_STATE(873)] = 11657,
  [SMALL_STATE(874)] = 11661,
  [SMALL_STATE(875)] = 11665,
  [SMALL_STATE(876)] = 11669,
  [SMALL_STATE(877)] = 11673,
  [SMALL_STATE(878)] = 11677,
  [SMALL_STATE(879)] = 11681,
  [SMALL_STATE(880)] = 11685,
  [SMALL_STATE(881)] = 11689,
  [SMALL_STATE(882)] = 11693,
  [SMALL_STATE(883)] = 11697,
  [SMALL_STATE(884)] = 11701,
  [SMALL_STATE(885)] = 11705,
  [SMALL_STATE(886)] = 11709,
  [SMALL_STATE(887)] = 11713,
  [SMALL_STATE(888)] = 11717,
  [SMALL_STATE(889)] = 11721,
  [SMALL_STATE(890)] = 11725,
  [SMALL_STATE(891)] = 11729,
  [SMALL_STATE(892)] = 11733,
  [SMALL_STATE(893)] = 11737,
  [SMALL_STATE(894)] = 11741,
  [SMALL_STATE(895)] = 11745,
  [SMALL_STATE(896)] = 11749,
  [SMALL_STATE(897)] = 11753,
  [SMALL_STATE(898)] = 11757,
  [SMALL_STATE(899)] = 11761,
  [SMALL_STATE(900)] = 11765,
  [SMALL_STATE(901)] = 11769,
  [SMALL_STATE(902)] = 11773,
  [SMALL_STATE(903)] = 11777,
  [SMALL_STATE(904)] = 11781,
  [SMALL_STATE(905)] = 11785,
  [SMALL_STATE(906)] = 11789,
  [SMALL_STATE(907)] = 11793,
  [SMALL_STATE(908)] = 11797,
  [SMALL_STATE(909)] = 11801,
  [SMALL_STATE(910)] = 11805,
  [SMALL_STATE(911)] = 11809,
  [SMALL_STATE(912)] = 11813,
  [SMALL_STATE(913)] = 11817,
  [SMALL_STATE(914)] = 11821,
  [SMALL_STATE(915)] = 11825,
  [SMALL_STATE(916)] = 11829,
  [SMALL_STATE(917)] = 11833,
  [SMALL_STATE(918)] = 11837,
  [SMALL_STATE(919)] = 11841,
  [SMALL_STATE(920)] = 11845,
  [SMALL_STATE(921)] = 11849,
  [SMALL_STATE(922)] = 11853,
  [SMALL_STATE(923)] = 11857,
  [SMALL_STATE(924)] = 11861,
  [SMALL_STATE(925)] = 11865,
  [SMALL_STATE(926)] = 11869,
  [SMALL_STATE(927)] = 11873,
  [SMALL_STATE(928)] = 11877,
  [SMALL_STATE(929)] = 11881,
  [SMALL_STATE(930)] = 11885,
  [SMALL_STATE(931)] = 11889,
  [SMALL_STATE(932)] = 11893,
  [SMALL_STATE(933)] = 11897,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(434),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(933),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(510),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(929),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(924),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_marker, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_marker, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(619),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 33),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 33),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 33),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(342),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 27),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 28),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 1, .production_id = 15),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(904),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 39),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 38),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(595),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 45),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 29),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 14),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 24),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(331),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_name, 2, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_name, 3, .production_id = 30),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 31),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 26),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 1, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(347),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 14),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 20),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_repeat1, 2), SHIFT_REPEAT(507),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_nested_list, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 18),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 43),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 34),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 11),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 36),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 51),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 42),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 35),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3, .production_id = 21),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 41),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 51),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_name, 3, .production_id = 22),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 59),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 55),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 12),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 33),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 40),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 54),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 58),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 5),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 57),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 3, .production_id = 25),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 60),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 52),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 32),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 66),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 56),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 32),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 32),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 65),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 61),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 64),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 62),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(298),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(871),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 20),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(520),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2), SHIFT_REPEAT(303),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_nested_list_repeat1, 2),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_repeat1, 2), SHIFT_REPEAT(317),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_repeat1, 2),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 3),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(302),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(537),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(311),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(601),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(606),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(28),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(66),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(435),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(575),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_marker, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2), SHIFT_REPEAT(396),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_assignments_repeat1, 2),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(639),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 33),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_assignments, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 63),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 50),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 50),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 49),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 13),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 44),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 12),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 19),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 46),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 47),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 48),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 37),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_index_name, 1, .production_id = 4),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 53),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1938] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
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
