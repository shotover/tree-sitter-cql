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
#define STATE_COUNT 1358
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 30
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 126

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
  aux_sym_priviledge_token1 = 74,
  aux_sym_priviledge_token2 = 75,
  aux_sym_priviledge_token3 = 76,
  aux_sym_priviledge_token4 = 77,
  aux_sym_priviledge_token5 = 78,
  aux_sym_priviledge_token6 = 79,
  aux_sym_priviledge_token7 = 80,
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
  aux_sym_materialized_view_options_token1 = 104,
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
  aux_sym_data_type_name_token22 = 128,
  aux_sym_return_mode_token1 = 129,
  aux_sym_return_mode_token2 = 130,
  aux_sym_create_keyspace_token1 = 131,
  aux_sym_durable_writes_token1 = 132,
  aux_sym_role_with_options_token1 = 133,
  aux_sym_role_with_options_token2 = 134,
  aux_sym_role_with_options_token3 = 135,
  aux_sym_role_with_options_token4 = 136,
  aux_sym_clustering_order_token1 = 137,
  aux_sym_user_super_user_token1 = 138,
  aux_sym_alter_table_add_token1 = 139,
  aux_sym_alter_table_drop_compact_storage_token1 = 140,
  aux_sym_alter_table_drop_compact_storage_token2 = 141,
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
  sym_priviledge = 196,
  sym_resource = 197,
  sym_list_roles = 198,
  sym_role_name = 199,
  sym_list_permissions = 200,
  sym_drop_aggregate = 201,
  sym_drop_materialized_view = 202,
  sym_drop_function = 203,
  sym_drop_keyspace = 204,
  sym_drop_role = 205,
  sym_drop_table = 206,
  sym_drop_trigger = 207,
  sym_drop_type = 208,
  sym_drop_user = 209,
  sym_create_aggregate = 210,
  sym_init_cond_definition = 211,
  sym_init_cond_list = 212,
  sym_init_cond_list_nested = 213,
  sym_init_cond_hash = 214,
  sym_init_cond_hash_item = 215,
  sym_create_materialized_view = 216,
  sym_materialized_view_where = 217,
  sym_column_not_null = 218,
  sym_materialized_view_options = 219,
  sym_create_function = 220,
  sym_param = 221,
  sym_data_type = 222,
  sym_data_type_name = 223,
  sym_data_type_definition = 224,
  sym_return_mode = 225,
  sym_create_keyspace = 226,
  sym_replication_list_item = 227,
  sym_durable_writes = 228,
  sym_create_role = 229,
  sym_role_with = 230,
  sym_role_with_options = 231,
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
  sym_clustering_order = 249,
  sym_create_trigger = 250,
  sym_trigger_name = 251,
  sym_trigger_class = 252,
  sym_create_type = 253,
  sym_create_user = 254,
  sym_user_name = 255,
  sym_user_with = 256,
  sym_user_password = 257,
  sym_user_super_user = 258,
  sym_alter_materialized_view = 259,
  sym_alter_keyspace = 260,
  sym_keyspace_name = 261,
  sym_replication_list = 262,
  sym_alter_role = 263,
  sym_alter_table = 264,
  sym_alter_table_operation = 265,
  sym_alter_table_add = 266,
  sym_alter_table_column_definition = 267,
  sym_alter_table_drop_columns = 268,
  sym_alter_table_drop_column_list = 269,
  sym_alter_table_drop_compact_storage = 270,
  sym_alter_table_rename = 271,
  sym_alter_table_with = 272,
  sym_alter_type = 273,
  sym_alter_type_operation = 274,
  sym_alter_type_alter_type = 275,
  sym_alter_type_add = 276,
  sym_alter_type_rename = 277,
  sym_alter_type_rename_list = 278,
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
  aux_sym_init_cond_list_nested_repeat1 = 294,
  aux_sym_init_cond_hash_repeat1 = 295,
  aux_sym_materialized_view_where_repeat1 = 296,
  aux_sym_materialized_view_options_repeat1 = 297,
  aux_sym_create_function_repeat1 = 298,
  aux_sym_data_type_definition_repeat1 = 299,
  aux_sym_role_with_repeat1 = 300,
  aux_sym_option_hash_repeat1 = 301,
  aux_sym_column_definition_list_repeat1 = 302,
  aux_sym_clustering_key_list_repeat1 = 303,
  aux_sym_create_type_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_table_column_definition_repeat1 = 306,
  aux_sym_alter_type_rename_list_repeat1 = 307,
  anon_alias_sym_aggregate = 308,
  anon_alias_sym_alias = 309,
  anon_alias_sym_assignment_operand = 310,
  anon_alias_sym_clustering_key = 311,
  anon_alias_sym_column = 312,
  anon_alias_sym_data_type = 313,
  anon_alias_sym_entries = 314,
  anon_alias_sym_finalfunc = 315,
  anon_alias_sym_full = 316,
  anon_alias_sym_function = 317,
  anon_alias_sym_function_name = 318,
  anon_alias_sym_hash_key = 319,
  anon_alias_sym_index = 320,
  anon_alias_sym_keys = 321,
  anon_alias_sym_keyspace = 322,
  anon_alias_sym_language = 323,
  anon_alias_sym_limit_value = 324,
  anon_alias_sym_materialized_view = 325,
  anon_alias_sym_option = 326,
  anon_alias_sym_param_name = 327,
  anon_alias_sym_partition_key = 328,
  anon_alias_sym_primary_key = 329,
  anon_alias_sym_role = 330,
  anon_alias_sym_sfunc = 331,
  anon_alias_sym_table = 332,
  anon_alias_sym_time = 333,
  anon_alias_sym_trigger = 334,
  anon_alias_sym_ttl = 335,
  anon_alias_sym_type = 336,
  anon_alias_sym_user = 337,
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
  [aux_sym_priviledge_token1] = "ALL",
  [aux_sym_priviledge_token2] = "PERMISSIONS",
  [aux_sym_priviledge_token3] = "ALTER",
  [aux_sym_priviledge_token4] = "AUTHORIZE",
  [aux_sym_priviledge_token5] = "DESCRIBE",
  [aux_sym_priviledge_token6] = "EXECUTE",
  [aux_sym_priviledge_token7] = "MODIFY",
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
  [aux_sym_materialized_view_options_token1] = "WITH",
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
  [aux_sym_create_keyspace_token1] = "REPLICATION",
  [aux_sym_durable_writes_token1] = "DURABLE_WRITES",
  [aux_sym_role_with_options_token1] = "PASSWORD",
  [aux_sym_role_with_options_token2] = "LOGIN",
  [aux_sym_role_with_options_token3] = "SUPERUSER",
  [aux_sym_role_with_options_token4] = "OPTIONS",
  [aux_sym_clustering_order_token1] = "CLUSTERING",
  [aux_sym_user_super_user_token1] = "NOSUPERUSER",
  [aux_sym_alter_table_add_token1] = "ADD",
  [aux_sym_alter_table_drop_compact_storage_token1] = "COMPACT",
  [aux_sym_alter_table_drop_compact_storage_token2] = "STORAGE",
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
  [sym_priviledge] = "priviledge",
  [sym_resource] = "resource",
  [sym_list_roles] = "list_roles",
  [sym_role_name] = "role_name",
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
  [sym_materialized_view_where] = "materialized_view_where",
  [sym_column_not_null] = "column_not_null",
  [sym_materialized_view_options] = "materialized_view_options",
  [sym_create_function] = "create_function",
  [sym_param] = "param",
  [sym_data_type] = "data_type",
  [sym_data_type_name] = "data_type_name",
  [sym_data_type_definition] = "data_type_definition",
  [sym_return_mode] = "return_mode",
  [sym_create_keyspace] = "create_keyspace",
  [sym_replication_list_item] = "replication_list_item",
  [sym_durable_writes] = "durable_writes",
  [sym_create_role] = "create_role",
  [sym_role_with] = "role_with",
  [sym_role_with_options] = "role_with_options",
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
  [sym_clustering_order] = "clustering_order",
  [sym_create_trigger] = "create_trigger",
  [sym_trigger_name] = "trigger_name",
  [sym_trigger_class] = "trigger_class",
  [sym_create_type] = "create_type",
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
  [sym_alter_table_column_definition] = "alter_table_column_definition",
  [sym_alter_table_drop_columns] = "alter_table_drop_columns",
  [sym_alter_table_drop_column_list] = "alter_table_drop_column_list",
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
  [aux_sym_materialized_view_options_repeat1] = "materialized_view_options_repeat1",
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_create_type_repeat1] = "create_type_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_table_column_definition_repeat1] = "alter_table_column_definition_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
  [anon_alias_sym_aggregate] = "aggregate",
  [anon_alias_sym_alias] = "alias",
  [anon_alias_sym_assignment_operand] = "assignment_operand",
  [anon_alias_sym_clustering_key] = "clustering_key",
  [anon_alias_sym_column] = "column",
  [anon_alias_sym_data_type] = "data_type",
  [anon_alias_sym_entries] = "entries",
  [anon_alias_sym_finalfunc] = "finalfunc",
  [anon_alias_sym_full] = "full",
  [anon_alias_sym_function] = "function",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_hash_key] = "hash_key",
  [anon_alias_sym_index] = "index",
  [anon_alias_sym_keys] = "keys",
  [anon_alias_sym_keyspace] = "keyspace",
  [anon_alias_sym_language] = "language",
  [anon_alias_sym_limit_value] = "limit_value",
  [anon_alias_sym_materialized_view] = "materialized_view",
  [anon_alias_sym_option] = "option",
  [anon_alias_sym_param_name] = "param_name",
  [anon_alias_sym_partition_key] = "partition_key",
  [anon_alias_sym_primary_key] = "primary_key",
  [anon_alias_sym_role] = "role",
  [anon_alias_sym_sfunc] = "sfunc",
  [anon_alias_sym_table] = "table",
  [anon_alias_sym_time] = "time",
  [anon_alias_sym_trigger] = "trigger",
  [anon_alias_sym_ttl] = "ttl",
  [anon_alias_sym_type] = "type",
  [anon_alias_sym_user] = "user",
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
  [aux_sym_priviledge_token1] = aux_sym_priviledge_token1,
  [aux_sym_priviledge_token2] = aux_sym_priviledge_token2,
  [aux_sym_priviledge_token3] = aux_sym_priviledge_token3,
  [aux_sym_priviledge_token4] = aux_sym_priviledge_token4,
  [aux_sym_priviledge_token5] = aux_sym_priviledge_token5,
  [aux_sym_priviledge_token6] = aux_sym_priviledge_token6,
  [aux_sym_priviledge_token7] = aux_sym_priviledge_token7,
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
  [aux_sym_materialized_view_options_token1] = aux_sym_materialized_view_options_token1,
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
  [aux_sym_durable_writes_token1] = aux_sym_durable_writes_token1,
  [aux_sym_role_with_options_token1] = aux_sym_role_with_options_token1,
  [aux_sym_role_with_options_token2] = aux_sym_role_with_options_token2,
  [aux_sym_role_with_options_token3] = aux_sym_role_with_options_token3,
  [aux_sym_role_with_options_token4] = aux_sym_role_with_options_token4,
  [aux_sym_clustering_order_token1] = aux_sym_clustering_order_token1,
  [aux_sym_user_super_user_token1] = aux_sym_user_super_user_token1,
  [aux_sym_alter_table_add_token1] = aux_sym_alter_table_add_token1,
  [aux_sym_alter_table_drop_compact_storage_token1] = aux_sym_alter_table_drop_compact_storage_token1,
  [aux_sym_alter_table_drop_compact_storage_token2] = aux_sym_alter_table_drop_compact_storage_token2,
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
  [sym_priviledge] = sym_priviledge,
  [sym_resource] = sym_resource,
  [sym_list_roles] = sym_list_roles,
  [sym_role_name] = sym_role_name,
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
  [sym_materialized_view_where] = sym_materialized_view_where,
  [sym_column_not_null] = sym_column_not_null,
  [sym_materialized_view_options] = sym_materialized_view_options,
  [sym_create_function] = sym_create_function,
  [sym_param] = sym_param,
  [sym_data_type] = sym_data_type,
  [sym_data_type_name] = sym_data_type_name,
  [sym_data_type_definition] = sym_data_type_definition,
  [sym_return_mode] = sym_return_mode,
  [sym_create_keyspace] = sym_create_keyspace,
  [sym_replication_list_item] = sym_replication_list_item,
  [sym_durable_writes] = sym_durable_writes,
  [sym_create_role] = sym_create_role,
  [sym_role_with] = sym_role_with,
  [sym_role_with_options] = sym_role_with_options,
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
  [sym_clustering_order] = sym_clustering_order,
  [sym_create_trigger] = sym_create_trigger,
  [sym_trigger_name] = sym_trigger_name,
  [sym_trigger_class] = sym_trigger_class,
  [sym_create_type] = sym_create_type,
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
  [sym_alter_table_column_definition] = sym_alter_table_column_definition,
  [sym_alter_table_drop_columns] = sym_alter_table_drop_columns,
  [sym_alter_table_drop_column_list] = sym_alter_table_drop_column_list,
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
  [aux_sym_materialized_view_options_repeat1] = aux_sym_materialized_view_options_repeat1,
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_create_type_repeat1] = aux_sym_create_type_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_table_column_definition_repeat1] = aux_sym_alter_table_column_definition_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
  [anon_alias_sym_aggregate] = anon_alias_sym_aggregate,
  [anon_alias_sym_alias] = anon_alias_sym_alias,
  [anon_alias_sym_assignment_operand] = anon_alias_sym_assignment_operand,
  [anon_alias_sym_clustering_key] = anon_alias_sym_clustering_key,
  [anon_alias_sym_column] = anon_alias_sym_column,
  [anon_alias_sym_data_type] = anon_alias_sym_data_type,
  [anon_alias_sym_entries] = anon_alias_sym_entries,
  [anon_alias_sym_finalfunc] = anon_alias_sym_finalfunc,
  [anon_alias_sym_full] = anon_alias_sym_full,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_hash_key] = anon_alias_sym_hash_key,
  [anon_alias_sym_index] = anon_alias_sym_index,
  [anon_alias_sym_keys] = anon_alias_sym_keys,
  [anon_alias_sym_keyspace] = anon_alias_sym_keyspace,
  [anon_alias_sym_language] = anon_alias_sym_language,
  [anon_alias_sym_limit_value] = anon_alias_sym_limit_value,
  [anon_alias_sym_materialized_view] = anon_alias_sym_materialized_view,
  [anon_alias_sym_option] = anon_alias_sym_option,
  [anon_alias_sym_param_name] = anon_alias_sym_param_name,
  [anon_alias_sym_partition_key] = anon_alias_sym_partition_key,
  [anon_alias_sym_primary_key] = anon_alias_sym_primary_key,
  [anon_alias_sym_role] = anon_alias_sym_role,
  [anon_alias_sym_sfunc] = anon_alias_sym_sfunc,
  [anon_alias_sym_table] = anon_alias_sym_table,
  [anon_alias_sym_time] = anon_alias_sym_time,
  [anon_alias_sym_trigger] = anon_alias_sym_trigger,
  [anon_alias_sym_ttl] = anon_alias_sym_ttl,
  [anon_alias_sym_type] = anon_alias_sym_type,
  [anon_alias_sym_user] = anon_alias_sym_user,
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
  [aux_sym_priviledge_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token7] = {
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
  [aux_sym_materialized_view_options_token1] = {
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
  [aux_sym_durable_writes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token4] = {
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
  [aux_sym_alter_table_drop_compact_storage_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_drop_compact_storage_token2] = {
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
  [sym_priviledge] = {
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
  [sym_role_name] = {
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
  [sym_materialized_view_where] = {
    .visible = true,
    .named = true,
  },
  [sym_column_not_null] = {
    .visible = true,
    .named = true,
  },
  [sym_materialized_view_options] = {
    .visible = true,
    .named = true,
  },
  [sym_create_function] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
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
  [sym_role_with_options] = {
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
  [sym_alter_table_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_drop_columns] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_drop_column_list] = {
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
  [aux_sym_materialized_view_options_repeat1] = {
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
  [aux_sym_create_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_replication_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_table_column_definition_repeat1] = {
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
  [anon_alias_sym_clustering_key] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_column] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_data_type] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_entries] = {
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
  [anon_alias_sym_keys] = {
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
  [anon_alias_sym_materialized_view] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_param_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_partition_key] = {
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
    [0] = anon_alias_sym_user,
  },
  [9] = {
    [2] = anon_alias_sym_table,
  },
  [10] = {
    [2] = anon_alias_sym_index,
  },
  [11] = {
    [2] = anon_alias_sym_keyspace,
  },
  [12] = {
    [2] = anon_alias_sym_function,
  },
  [13] = {
    [2] = anon_alias_sym_aggregate,
  },
  [14] = {
    [2] = anon_alias_sym_type,
  },
  [15] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_alias,
  },
  [16] = {
    [2] = anon_alias_sym_alias,
  },
  [17] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [18] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [19] = {
    [0] = anon_alias_sym_role,
  },
  [20] = {
    [3] = anon_alias_sym_role,
  },
  [21] = {
    [0] = anon_alias_sym_function_name,
  },
  [22] = {
    [1] = anon_alias_sym_limit_value,
  },
  [23] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [24] = {
    [2] = anon_alias_sym_time,
  },
  [25] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [26] = {
    [4] = anon_alias_sym_table,
  },
  [27] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [28] = {
    [4] = anon_alias_sym_index,
  },
  [29] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [30] = {
    [4] = anon_alias_sym_keyspace,
  },
  [31] = {
    [4] = anon_alias_sym_function,
  },
  [32] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [33] = {
    [4] = anon_alias_sym_role,
  },
  [34] = {
    [4] = anon_alias_sym_aggregate,
  },
  [35] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [36] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [37] = {
    [4] = anon_alias_sym_type,
  },
  [38] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [39] = {
    [2] = anon_alias_sym_ttl,
  },
  [40] = {
    [1] = anon_alias_sym_table,
  },
  [41] = {
    [1] = anon_alias_sym_function,
  },
  [42] = {
    [1] = anon_alias_sym_role,
  },
  [43] = {
    [0] = anon_alias_sym_option,
  },
  [44] = {
    [0] = anon_alias_sym_param_name,
  },
  [45] = {
    [5] = anon_alias_sym_role,
  },
  [46] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [47] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [48] = {
    [1] = anon_alias_sym_column,
  },
  [49] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [50] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [51] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [52] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [54] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [55] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [56] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
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
    [5] = anon_alias_sym_table,
  },
  [67] = {
    [2] = anon_alias_sym_keys,
  },
  [68] = {
    [2] = anon_alias_sym_entries,
  },
  [69] = {
    [2] = anon_alias_sym_full,
  },
  [70] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [71] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [72] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [73] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [74] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [75] = {
    [0] = anon_alias_sym_primary_key,
  },
  [76] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [77] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [78] = {
    [0] = anon_alias_sym_partition_key,
  },
  [79] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [80] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [81] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [82] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [83] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [84] = {
    [4] = anon_alias_sym_column,
  },
  [85] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [86] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [87] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [88] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [89] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [90] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [91] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [92] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [93] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [94] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [95] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [96] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [97] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [98] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [99] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [100] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [101] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [102] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [103] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [104] = {
    [0] = anon_alias_sym_hash_key,
  },
  [105] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [106] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [107] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [108] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [109] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [110] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [111] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [112] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [113] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [114] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [115] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [116] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [117] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [118] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [119] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [120] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [121] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [122] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [123] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [124] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [125] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_keyspace,
    [15] = anon_alias_sym_table,
    [20] = anon_alias_sym_primary_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__decimal_literal, 4,
    sym__decimal_literal,
    anon_alias_sym_assignment_operand,
    anon_alias_sym_index,
    anon_alias_sym_limit_value,
  sym_column_list, 2,
    sym_column_list,
    anon_alias_sym_primary_key,
  sym_data_type, 2,
    sym_data_type,
    anon_alias_sym_data_type,
  aux_sym_clustering_key_list_repeat1, 3,
    aux_sym_clustering_key_list_repeat1,
    anon_alias_sym_clustering_key,
    anon_alias_sym_partition_key,
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
  [1232] = 1232,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1237,
  [1238] = 1238,
  [1239] = 1239,
  [1240] = 1240,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1244,
  [1245] = 1245,
  [1246] = 1246,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1252,
  [1253] = 1253,
  [1254] = 1254,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1257,
  [1258] = 1258,
  [1259] = 1259,
  [1260] = 1260,
  [1261] = 1261,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1266,
  [1267] = 1267,
  [1268] = 1268,
  [1269] = 1269,
  [1270] = 1270,
  [1271] = 1271,
  [1272] = 1272,
  [1273] = 1273,
  [1274] = 1274,
  [1275] = 1275,
  [1276] = 1276,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1279,
  [1280] = 1280,
  [1281] = 1281,
  [1282] = 1282,
  [1283] = 1283,
  [1284] = 1284,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1287,
  [1288] = 1288,
  [1289] = 1289,
  [1290] = 1290,
  [1291] = 1291,
  [1292] = 1292,
  [1293] = 1293,
  [1294] = 1294,
  [1295] = 1295,
  [1296] = 1296,
  [1297] = 1297,
  [1298] = 1298,
  [1299] = 1299,
  [1300] = 1300,
  [1301] = 1301,
  [1302] = 1302,
  [1303] = 1303,
  [1304] = 1304,
  [1305] = 1305,
  [1306] = 1306,
  [1307] = 1307,
  [1308] = 1308,
  [1309] = 1309,
  [1310] = 1310,
  [1311] = 1311,
  [1312] = 1312,
  [1313] = 1313,
  [1314] = 1314,
  [1315] = 1315,
  [1316] = 1316,
  [1317] = 1317,
  [1318] = 1318,
  [1319] = 1319,
  [1320] = 1320,
  [1321] = 1321,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1324,
  [1325] = 1325,
  [1326] = 1326,
  [1327] = 1327,
  [1328] = 1328,
  [1329] = 1329,
  [1330] = 1330,
  [1331] = 1331,
  [1332] = 1332,
  [1333] = 1333,
  [1334] = 1334,
  [1335] = 1335,
  [1336] = 1336,
  [1337] = 1337,
  [1338] = 1338,
  [1339] = 1339,
  [1340] = 1340,
  [1341] = 1341,
  [1342] = 1342,
  [1343] = 1343,
  [1344] = 1344,
  [1345] = 1345,
  [1346] = 1346,
  [1347] = 1347,
  [1348] = 1348,
  [1349] = 1349,
  [1350] = 1350,
  [1351] = 1351,
  [1352] = 1352,
  [1353] = 1353,
  [1354] = 1354,
  [1355] = 1355,
  [1356] = 1356,
  [1357] = 1357,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '+') ADVANCE(658);
      if (lookahead == ',') ADVANCE(567);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
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
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '0') ADVANCE(579);
      if (lookahead == 'X') ADVANCE(770);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(989);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1006);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(551);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(592);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(856);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(942);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(843);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(913);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(869);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(982);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(987);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(834);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(990);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
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
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(492);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
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
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
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
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
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
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(711);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
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
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
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
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(762);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(701);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
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
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
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
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
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
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(687);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(687);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(491);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
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
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
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
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
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
          lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 253:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(134);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
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
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
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
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
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
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
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
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(731);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(652);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
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
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
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
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(493);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
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
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(752);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(404);
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
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
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
          lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 494:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 495:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(691);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 500:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(643);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(439);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(675);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 511:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(144);
      END_STATE();
    case 512:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(172);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(576);
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
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(567);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '0') ADVANCE(579);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 553:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 554:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(833);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(870);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(938);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(898);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(934);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (lookahead == 'X') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_update_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_use_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(986);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(954);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(983);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1005);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(933);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(976);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(979);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(967);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(968);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(750);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(946);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(949);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(950);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(994);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(915);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(984);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(984);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1004);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(974);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(948);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(801);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(962);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(963);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(964);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(980);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(969);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(999);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(981);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(804);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(988);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(965);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(971);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(945);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(953);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(958);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(943);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(947);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1007);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1001);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1002);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1003);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1004);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1005);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
  [4] = {.lex_state = 552},
  [5] = {.lex_state = 552},
  [6] = {.lex_state = 552},
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
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 552},
  [61] = {.lex_state = 552},
  [62] = {.lex_state = 552},
  [63] = {.lex_state = 552},
  [64] = {.lex_state = 552},
  [65] = {.lex_state = 552},
  [66] = {.lex_state = 552},
  [67] = {.lex_state = 552},
  [68] = {.lex_state = 552},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 552},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 552},
  [73] = {.lex_state = 552},
  [74] = {.lex_state = 552},
  [75] = {.lex_state = 552},
  [76] = {.lex_state = 552},
  [77] = {.lex_state = 552},
  [78] = {.lex_state = 552},
  [79] = {.lex_state = 552},
  [80] = {.lex_state = 552},
  [81] = {.lex_state = 552},
  [82] = {.lex_state = 554},
  [83] = {.lex_state = 552},
  [84] = {.lex_state = 552},
  [85] = {.lex_state = 552},
  [86] = {.lex_state = 552},
  [87] = {.lex_state = 552},
  [88] = {.lex_state = 552},
  [89] = {.lex_state = 552},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 552},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 552},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 553},
  [100] = {.lex_state = 552},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 552},
  [104] = {.lex_state = 552},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 552},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 552},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 552},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 552},
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
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 552},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
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
  [198] = {.lex_state = 552},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 552},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 552},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 552},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 552},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 552},
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
  [231] = {.lex_state = 552},
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
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
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
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 552},
  [404] = {.lex_state = 552},
  [405] = {.lex_state = 552},
  [406] = {.lex_state = 552},
  [407] = {.lex_state = 552},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 552},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 53},
  [421] = {.lex_state = 552},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 552},
  [424] = {.lex_state = 552},
  [425] = {.lex_state = 552},
  [426] = {.lex_state = 552},
  [427] = {.lex_state = 41},
  [428] = {.lex_state = 552},
  [429] = {.lex_state = 552},
  [430] = {.lex_state = 552},
  [431] = {.lex_state = 552},
  [432] = {.lex_state = 552},
  [433] = {.lex_state = 552},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 552},
  [436] = {.lex_state = 552},
  [437] = {.lex_state = 41},
  [438] = {.lex_state = 53},
  [439] = {.lex_state = 552},
  [440] = {.lex_state = 552},
  [441] = {.lex_state = 18},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 14},
  [448] = {.lex_state = 552},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 14},
  [453] = {.lex_state = 13},
  [454] = {.lex_state = 552},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 53},
  [458] = {.lex_state = 10},
  [459] = {.lex_state = 12},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 19},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 552},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 15},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 10},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 19},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 17},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 17},
  [495] = {.lex_state = 17},
  [496] = {.lex_state = 26},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 17},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 17},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 17},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 17},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 17},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 10},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 17},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 10},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 10},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 553},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 22},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 553},
  [547] = {.lex_state = 10},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 16},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 25},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 553},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 10},
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
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 10},
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
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 553},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 10},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 10},
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
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 13},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 20},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 10},
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
  [721] = {.lex_state = 13},
  [722] = {.lex_state = 10},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 20},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 20},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 20},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 20},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 20},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 20},
  [798] = {.lex_state = 27},
  [799] = {.lex_state = 27},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 20},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 10},
  [807] = {.lex_state = 20},
  [808] = {.lex_state = 10},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 20},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 20},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 20},
  [822] = {.lex_state = 20},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 552},
  [828] = {.lex_state = 10},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 27},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 553},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 13},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 13},
  [862] = {.lex_state = 10},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 10},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 10},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 10},
  [895] = {.lex_state = 10},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 10},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 10},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 10},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 10},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 10},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 553},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
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
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 10},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 10},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 13},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 10},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 10},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 552},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 552},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 10},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 10},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 553},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 10},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 10},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 10},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 10},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 10},
  [1102] = {.lex_state = 10},
  [1103] = {.lex_state = 13},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 13},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 10},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 10},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 10},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 552},
  [1125] = {.lex_state = 552},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 10},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 10},
  [1149] = {.lex_state = 10},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 10},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 10},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 10},
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 553},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 10},
  [1168] = {.lex_state = 10},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 552},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 10},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 10},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 553},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 10},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 553},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 10},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 552},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 10},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 10},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 10},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 10},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 10},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 10},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 552},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 552},
  [1252] = {.lex_state = 552},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 10},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 552},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 10},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 10},
  [1270] = {.lex_state = 10},
  [1271] = {.lex_state = 553},
  [1272] = {.lex_state = 553},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 553},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 10},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 10},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 553},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 552},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 10},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 10},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 10},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 10},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 10},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 10},
  [1334] = {.lex_state = 10},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 10},
  [1341] = {.lex_state = 553},
  [1342] = {.lex_state = 10},
  [1343] = {.lex_state = 10},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 41},
  [1346] = {.lex_state = 10},
  [1347] = {.lex_state = 10},
  [1348] = {.lex_state = 10},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 10},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 553},
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
    [aux_sym_priviledge_token1] = ACTIONS(1),
    [aux_sym_priviledge_token2] = ACTIONS(1),
    [aux_sym_priviledge_token3] = ACTIONS(1),
    [aux_sym_priviledge_token4] = ACTIONS(1),
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
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
    [aux_sym_materialized_view_options_token1] = ACTIONS(1),
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
    [aux_sym_durable_writes_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token2] = ACTIONS(1),
    [aux_sym_role_with_options_token3] = ACTIONS(1),
    [aux_sym_role_with_options_token4] = ACTIONS(1),
    [aux_sym_clustering_order_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1352),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(278),
    [sym_delete_statement] = STATE(278),
    [sym_begin_batch] = STATE(543),
    [sym_insert_statement] = STATE(278),
    [sym_truncate] = STATE(278),
    [sym_create_index] = STATE(278),
    [sym_drop_index] = STATE(278),
    [sym_update] = STATE(278),
    [sym_use] = STATE(278),
    [sym_grant] = STATE(278),
    [sym_revoke] = STATE(278),
    [sym_list_roles] = STATE(278),
    [sym_list_permissions] = STATE(278),
    [sym_drop_aggregate] = STATE(278),
    [sym_drop_materialized_view] = STATE(278),
    [sym_drop_function] = STATE(278),
    [sym_drop_keyspace] = STATE(278),
    [sym_drop_role] = STATE(278),
    [sym_drop_table] = STATE(278),
    [sym_drop_trigger] = STATE(278),
    [sym_drop_type] = STATE(278),
    [sym_drop_user] = STATE(278),
    [sym_create_aggregate] = STATE(278),
    [sym_create_materialized_view] = STATE(278),
    [sym_create_function] = STATE(278),
    [sym_create_keyspace] = STATE(278),
    [sym_create_role] = STATE(278),
    [sym_create_table] = STATE(278),
    [sym_create_trigger] = STATE(278),
    [sym_create_type] = STATE(278),
    [sym_create_user] = STATE(278),
    [sym_alter_materialized_view] = STATE(278),
    [sym_alter_keyspace] = STATE(278),
    [sym_alter_role] = STATE(278),
    [sym_alter_table] = STATE(278),
    [sym_alter_type] = STATE(278),
    [sym_alter_user] = STATE(278),
    [sym_apply_batch] = STATE(278),
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
    [aux_sym_priviledge_token3] = ACTIONS(27),
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
      aux_sym_priviledge_token3,
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
    STATE(278), 37,
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
      aux_sym_priviledge_token3,
    ACTIONS(73), 1,
      aux_sym_list_roles_token1,
    ACTIONS(76), 1,
      aux_sym_apply_batch_token1,
    STATE(543), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(278), 37,
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
      aux_sym_priviledge_token3,
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
      aux_sym_priviledge_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [285] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(238), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1185), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(935), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1260), 1,
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
    STATE(71), 1,
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
  [460] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(784), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(398), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1181), 1,
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
    STATE(71), 1,
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
  [600] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(941), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1195), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1016), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1105), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(572), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1179), 1,
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
    STATE(71), 1,
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
  [845] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(569), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1201), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(809), 1,
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
    STATE(71), 1,
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
  [985] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(595), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(654), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(126), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1153), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(888), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(506), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1030), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1298), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(134), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(1304), 1,
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
  [1335] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1094), 1,
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
  [1370] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(966), 1,
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
  [1405] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(944), 1,
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
  [1440] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(970), 1,
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
  [1475] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(962), 1,
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
  [1510] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1217), 1,
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
  [1545] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(949), 1,
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
  [1580] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(857), 1,
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
  [1615] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1056), 1,
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
  [1650] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1091), 1,
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
  [1685] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1090), 1,
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
  [1720] = 3,
    STATE(71), 1,
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
  [1755] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1191), 1,
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
  [1790] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1222), 1,
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
  [1825] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1140), 1,
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
  [1860] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1085), 1,
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
  [1895] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1117), 1,
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
  [1930] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1136), 1,
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
  [1965] = 3,
    STATE(71), 1,
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
  [2000] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1229), 1,
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
  [2035] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1060), 1,
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
  [2070] = 2,
    STATE(647), 1,
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
  [2102] = 2,
    STATE(817), 1,
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
  [2134] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(89), 23,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2166] = 2,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(94), 24,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2196] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(98), 22,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2227] = 1,
    ACTIONS(102), 24,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2254] = 1,
    ACTIONS(89), 24,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2281] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2312] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2343] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(98), 22,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2374] = 1,
    ACTIONS(108), 24,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2401] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2427] = 3,
    ACTIONS(114), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2457] = 3,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(90), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2487] = 8,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(89), 1,
      sym_where_spec,
    STATE(120), 1,
      sym_order_spec,
    STATE(216), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2527] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_where_spec,
    STATE(109), 1,
      sym_order_spec,
    STATE(211), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2567] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(103), 1,
      sym_order_spec,
    STATE(201), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2607] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2632] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2657] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2682] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2707] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2732] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2757] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    STATE(85), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2786] = 8,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(119), 1,
      sym_table_option_item,
    STATE(147), 1,
      sym_table_options,
    STATE(345), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(157), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2825] = 1,
    ACTIONS(163), 22,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2850] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2875] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(165), 20,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2904] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2929] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2954] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(103), 1,
      sym_order_spec,
    STATE(201), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2988] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    STATE(118), 1,
      sym_order_spec,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3022] = 1,
    ACTIONS(173), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3046] = 1,
    ACTIONS(175), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3070] = 6,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(120), 1,
      sym_order_spec,
    STATE(216), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3104] = 1,
    ACTIONS(177), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3128] = 1,
    ACTIONS(179), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3152] = 2,
    ACTIONS(183), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3177] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(185), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_RPAREN,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3204] = 1,
    ACTIONS(190), 20,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3227] = 2,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(192), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3252] = 2,
    ACTIONS(198), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(196), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3277] = 2,
    ACTIONS(202), 1,
      aux_sym_relation_element_token1,
    ACTIONS(200), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3302] = 2,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(204), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3327] = 1,
    ACTIONS(208), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3349] = 4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    STATE(216), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3377] = 9,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(656), 1,
      sym_expression,
    STATE(1154), 1,
      sym_expression_list,
    STATE(724), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3415] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3437] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3459] = 3,
    STATE(266), 1,
      sym_user_super_user,
    ACTIONS(226), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3485] = 2,
    ACTIONS(230), 1,
      aux_sym_priviledge_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3509] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(201), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3537] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3559] = 1,
    ACTIONS(234), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3581] = 9,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(656), 1,
      sym_expression,
    STATE(1284), 1,
      sym_expression_list,
    STATE(724), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3619] = 1,
    ACTIONS(200), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3641] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(114), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(236), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3667] = 4,
    ACTIONS(243), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(326), 1,
      sym_using_ttl_timestamp,
    ACTIONS(241), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3695] = 4,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(249), 1,
      aux_sym_delete_statement_token2,
    STATE(317), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3723] = 1,
    ACTIONS(251), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3745] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(255), 1,
      aux_sym_select_statement_token4,
    STATE(231), 1,
      sym_limit_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3773] = 3,
    ACTIONS(259), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(257), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3799] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3827] = 4,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(263), 1,
      aux_sym_delete_statement_token2,
    STATE(382), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3855] = 1,
    ACTIONS(265), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3877] = 3,
    ACTIONS(259), 1,
      aux_sym_relation_elements_token1,
    STATE(114), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3903] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3924] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(318), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3949] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3974] = 3,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(287), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3999] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(242), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4024] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(279), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4049] = 3,
    ACTIONS(287), 1,
      aux_sym_delete_statement_token2,
    STATE(291), 1,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4074] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_relation_element_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4099] = 3,
    ACTIONS(295), 1,
      aux_sym_delete_statement_token2,
    STATE(363), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4124] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [4145] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4170] = 3,
    ACTIONS(303), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4195] = 3,
    ACTIONS(307), 1,
      aux_sym_delete_statement_token2,
    STATE(303), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4220] = 3,
    ACTIONS(311), 1,
      aux_sym_delete_statement_token2,
    STATE(368), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4245] = 1,
    ACTIONS(313), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4266] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4287] = 3,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(263), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4312] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4337] = 3,
    ACTIONS(326), 1,
      aux_sym_materialized_view_options_token1,
    STATE(269), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4362] = 3,
    ACTIONS(330), 1,
      aux_sym_relation_elements_token1,
    STATE(191), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4387] = 3,
    ACTIONS(334), 1,
      aux_sym_materialized_view_options_token1,
    STATE(390), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4412] = 2,
    ACTIONS(338), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(336), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4435] = 3,
    ACTIONS(334), 1,
      aux_sym_materialized_view_options_token1,
    STATE(261), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4460] = 3,
    ACTIONS(344), 1,
      aux_sym_clustering_order_token1,
    STATE(260), 1,
      sym_clustering_order,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4485] = 3,
    ACTIONS(330), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4510] = 2,
    ACTIONS(350), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(348), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4533] = 1,
    ACTIONS(352), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4554] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(264), 1,
      sym_materialized_view_options,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4579] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4604] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(383), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4629] = 3,
    ACTIONS(362), 1,
      aux_sym_delete_statement_token2,
    STATE(258), 1,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4654] = 3,
    ACTIONS(326), 1,
      aux_sym_materialized_view_options_token1,
    STATE(276), 1,
      sym_role_with,
    ACTIONS(364), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4679] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4704] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_relation_element_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4729] = 1,
    ACTIONS(370), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4750] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(270), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4775] = 3,
    ACTIONS(376), 1,
      aux_sym_delete_statement_token2,
    STATE(301), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4800] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4821] = 1,
    ACTIONS(380), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4842] = 1,
    ACTIONS(382), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4863] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4884] = 3,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4909] = 1,
    ACTIONS(236), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4930] = 3,
    ACTIONS(392), 1,
      aux_sym_delete_statement_token2,
    STATE(306), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4955] = 3,
    ACTIONS(303), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4980] = 1,
    ACTIONS(396), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5001] = 3,
    ACTIONS(400), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5026] = 3,
    ACTIONS(404), 1,
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5051] = 3,
    ACTIONS(408), 1,
      aux_sym_delete_statement_token2,
    STATE(327), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5076] = 3,
    ACTIONS(326), 1,
      aux_sym_materialized_view_options_token1,
    STATE(310), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5101] = 3,
    ACTIONS(414), 1,
      aux_sym_create_index_token3,
    ACTIONS(416), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5126] = 1,
    ACTIONS(418), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5147] = 3,
    ACTIONS(422), 1,
      aux_sym_list_roles_token2,
    ACTIONS(424), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5172] = 1,
    ACTIONS(426), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5193] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5214] = 1,
    ACTIONS(430), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5235] = 3,
    ACTIONS(434), 1,
      aux_sym_delete_statement_token2,
    STATE(246), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5260] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5281] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(286), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5306] = 3,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5331] = 3,
    ACTIONS(448), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5356] = 3,
    ACTIONS(452), 1,
      aux_sym_delete_statement_token2,
    STATE(249), 1,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5381] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(313), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5406] = 3,
    ACTIONS(458), 1,
      aux_sym_relation_elements_token1,
    STATE(187), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(456), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5431] = 3,
    ACTIONS(463), 1,
      aux_sym_relation_elements_token1,
    STATE(192), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5456] = 3,
    ACTIONS(404), 1,
      aux_sym_relation_elements_token1,
    STATE(187), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5481] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(300), 1,
      sym_materialized_view_options,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5506] = 3,
    ACTIONS(471), 1,
      aux_sym_relation_elements_token1,
    STATE(191), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(469), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5531] = 3,
    ACTIONS(476), 1,
      aux_sym_relation_elements_token1,
    STATE(114), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(474), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5556] = 1,
    ACTIONS(478), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5577] = 3,
    ACTIONS(482), 1,
      aux_sym_delete_statement_token2,
    STATE(314), 1,
      sym_if_spec,
    ACTIONS(480), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5602] = 3,
    ACTIONS(486), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5627] = 3,
    ACTIONS(334), 1,
      aux_sym_materialized_view_options_token1,
    STATE(308), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5652] = 3,
    ACTIONS(334), 1,
      aux_sym_materialized_view_options_token1,
    STATE(335), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5677] = 8,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(728), 1,
      sym_expression,
    STATE(724), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5712] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5737] = 3,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(350), 1,
      sym_using_ttl_timestamp,
    ACTIONS(497), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5762] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5784] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5804] = 1,
    ACTIONS(469), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5824] = 1,
    ACTIONS(501), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5844] = 2,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(503), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5866] = 2,
    ACTIONS(509), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5888] = 2,
    ACTIONS(513), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5910] = 1,
    ACTIONS(515), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token3,
      aux_sym_apply_batch_token1,
  [5930] = 1,
    ACTIONS(517), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5950] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5972] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5994] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6014] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6034] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6056] = 1,
    ACTIONS(529), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6076] = 2,
    ACTIONS(171), 1,
      aux_sym_select_statement_token4,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6098] = 2,
    ACTIONS(533), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6120] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6140] = 1,
    ACTIONS(319), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6160] = 2,
    ACTIONS(255), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6182] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6204] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6226] = 2,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6248] = 2,
    ACTIONS(551), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6270] = 2,
    ACTIONS(555), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6292] = 2,
    ACTIONS(559), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6314] = 2,
    ACTIONS(563), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6336] = 2,
    ACTIONS(567), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6358] = 2,
    ACTIONS(571), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6380] = 2,
    ACTIONS(575), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6402] = 2,
    ACTIONS(579), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6424] = 2,
    ACTIONS(583), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6446] = 2,
    ACTIONS(587), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6468] = 2,
    ACTIONS(591), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6490] = 2,
    ACTIONS(595), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6512] = 2,
    ACTIONS(599), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6534] = 2,
    ACTIONS(603), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6556] = 1,
    ACTIONS(605), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6576] = 1,
    ACTIONS(607), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_apply_batch_token1,
  [6596] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6615] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6634] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6653] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6672] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6691] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6710] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6729] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6748] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6767] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6786] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6805] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6824] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6843] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6862] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6881] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6900] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6919] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6938] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6957] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6976] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6995] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7014] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7033] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7052] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7071] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7090] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7109] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7128] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7147] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7166] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7185] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7204] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7223] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7242] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7261] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7280] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7299] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7318] = 2,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(677), 15,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7339] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7358] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7377] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7396] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7415] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7434] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7453] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7472] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7491] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7510] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7529] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7548] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7567] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7586] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7605] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7624] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7643] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7662] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7681] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7700] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7719] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7738] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7757] = 1,
    ACTIONS(480), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7776] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7795] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7814] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7833] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7852] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7871] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7890] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7909] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7928] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7947] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7966] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7985] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8004] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8023] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8042] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8061] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8080] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8099] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8118] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8137] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8156] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8175] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8194] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8213] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8232] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8251] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8270] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8289] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8308] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8327] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8346] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8365] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8384] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8403] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8422] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8441] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8460] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8479] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8498] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8517] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8536] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8555] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8574] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8593] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8612] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8631] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8650] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8669] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8688] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8707] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8726] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8745] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8764] = 1,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8783] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8802] = 1,
    ACTIONS(807), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8821] = 1,
    ACTIONS(809), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8840] = 1,
    ACTIONS(811), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8859] = 1,
    ACTIONS(813), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8878] = 1,
    ACTIONS(815), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8897] = 1,
    ACTIONS(817), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8916] = 1,
    ACTIONS(819), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8935] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8954] = 1,
    ACTIONS(821), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8973] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8992] = 1,
    ACTIONS(823), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9011] = 1,
    ACTIONS(825), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9030] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9049] = 1,
    ACTIONS(827), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9068] = 1,
    ACTIONS(829), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9087] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9106] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9125] = 1,
    ACTIONS(831), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9144] = 1,
    ACTIONS(833), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9163] = 1,
    ACTIONS(835), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9182] = 1,
    ACTIONS(837), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9201] = 1,
    ACTIONS(839), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9220] = 1,
    ACTIONS(841), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9239] = 1,
    ACTIONS(843), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9258] = 1,
    ACTIONS(845), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9277] = 1,
    ACTIONS(847), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9296] = 1,
    ACTIONS(497), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9315] = 1,
    ACTIONS(849), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9334] = 1,
    ACTIONS(851), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9353] = 1,
    ACTIONS(853), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9372] = 1,
    ACTIONS(855), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9391] = 1,
    ACTIONS(857), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9410] = 1,
    ACTIONS(859), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9429] = 1,
    ACTIONS(861), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9448] = 1,
    ACTIONS(863), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9467] = 1,
    ACTIONS(865), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9486] = 9,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(838), 1,
      sym_constant,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(523), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9521] = 1,
    ACTIONS(871), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9540] = 1,
    ACTIONS(873), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9559] = 1,
    ACTIONS(875), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9578] = 1,
    ACTIONS(877), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9597] = 1,
    ACTIONS(879), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9616] = 1,
    ACTIONS(881), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9635] = 1,
    ACTIONS(883), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9654] = 1,
    ACTIONS(885), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9673] = 1,
    ACTIONS(887), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9692] = 1,
    ACTIONS(889), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9711] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(243), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9739] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(355), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9767] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(304), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9795] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(307), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9823] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(289), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9851] = 1,
    ACTIONS(893), 15,
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
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9869] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(344), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9897] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(395), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9925] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(389), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9953] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(771), 1,
      sym_init_cond_definition,
    STATE(139), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9981] = 9,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(632), 1,
      sym_init_cond_hash_item,
    STATE(633), 1,
      sym_init_cond_list,
    STATE(635), 1,
      sym_constant,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10014] = 8,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(899), 1,
      anon_sym_STAR,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1036), 1,
      sym_function_args,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(670), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10045] = 7,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1295), 1,
      sym_function_args,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(670), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10073] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(903), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(706), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10098] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(867), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(87), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10123] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(772), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10146] = 4,
    ACTIONS(909), 1,
      aux_sym_priviledge_token1,
    ACTIONS(911), 1,
      aux_sym_resource_token4,
    STATE(174), 1,
      sym_priviledge,
    ACTIONS(907), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10166] = 11,
    ACTIONS(913), 1,
      aux_sym_truncate_token2,
    ACTIONS(915), 1,
      aux_sym_create_index_token2,
    ACTIONS(917), 1,
      aux_sym_resource_token2,
    ACTIONS(919), 1,
      aux_sym_resource_token5,
    ACTIONS(921), 1,
      aux_sym_resource_token6,
    ACTIONS(923), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(925), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(927), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(929), 1,
      aux_sym_drop_type_token1,
    ACTIONS(931), 1,
      aux_sym_drop_user_token1,
    ACTIONS(933), 1,
      aux_sym_create_aggregate_token1,
  [10200] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(512), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10222] = 7,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(939), 1,
      aux_sym_drop_index_token1,
    ACTIONS(941), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(943), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(945), 1,
      aux_sym_alter_table_rename_token1,
    STATE(273), 1,
      sym_alter_table_operation,
    STATE(274), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10248] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(947), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(77), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10270] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(515), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10289] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(78), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10308] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(635), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10327] = 3,
    ACTIONS(909), 1,
      aux_sym_priviledge_token1,
    STATE(1293), 1,
      sym_priviledge,
    ACTIONS(907), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10344] = 6,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      aux_sym_relation_element_token1,
    ACTIONS(957), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(959), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(951), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(953), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10367] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(838), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10386] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(169), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10405] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(695), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10424] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(598), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10443] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(213), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10462] = 6,
    ACTIONS(939), 1,
      aux_sym_drop_index_token1,
    ACTIONS(941), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(943), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(945), 1,
      aux_sym_alter_table_rename_token1,
    STATE(247), 1,
      sym_alter_table_operation,
    STATE(274), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10485] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(80), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10504] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(984), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10523] = 3,
    ACTIONS(909), 1,
      aux_sym_priviledge_token1,
    STATE(1292), 1,
      sym_priviledge,
    ACTIONS(907), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10540] = 10,
    ACTIONS(961), 1,
      aux_sym_truncate_token2,
    ACTIONS(963), 1,
      aux_sym_create_index_token2,
    ACTIONS(965), 1,
      aux_sym_resource_token2,
    ACTIONS(967), 1,
      aux_sym_resource_token5,
    ACTIONS(969), 1,
      aux_sym_resource_token6,
    ACTIONS(971), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(973), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(975), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(977), 1,
      aux_sym_drop_type_token1,
    ACTIONS(979), 1,
      aux_sym_drop_user_token1,
  [10571] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(557), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10590] = 5,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      aux_sym_relation_element_token1,
    ACTIONS(957), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(951), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(953), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10610] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(924), 1,
      sym_index_column_spec,
    STATE(1281), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10631] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(846), 1,
      sym_index_column_spec,
    STATE(1281), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10652] = 6,
    ACTIONS(989), 1,
      anon_sym_DOT,
    ACTIONS(991), 1,
      aux_sym_priviledge_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(282), 1,
      sym_alter_type_operation,
    STATE(283), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10673] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(1273), 1,
      sym_index_column_spec,
    STATE(1281), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10694] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(1239), 1,
      sym_index_column_spec,
    STATE(1281), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10715] = 6,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(456), 1,
      sym_function_call,
    STATE(720), 1,
      sym_column_not_null,
    STATE(83), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10735] = 7,
    ACTIONS(1001), 1,
      aux_sym_truncate_token2,
    ACTIONS(1003), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1005), 1,
      aux_sym_resource_token2,
    ACTIONS(1007), 1,
      aux_sym_resource_token5,
    ACTIONS(1009), 1,
      aux_sym_resource_token6,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(859), 1,
      sym_resource,
  [10757] = 3,
    ACTIONS(1017), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1013), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1015), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10771] = 7,
    ACTIONS(1001), 1,
      aux_sym_truncate_token2,
    ACTIONS(1003), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1005), 1,
      aux_sym_resource_token2,
    ACTIONS(1007), 1,
      aux_sym_resource_token5,
    ACTIONS(1009), 1,
      aux_sym_resource_token6,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(860), 1,
      sym_resource,
  [10793] = 7,
    ACTIONS(1019), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1021), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(835), 1,
      sym_select_elements,
  [10815] = 6,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(81), 1,
      sym_relation_element,
    STATE(97), 1,
      sym_relation_elements,
    STATE(456), 1,
      sym_function_call,
    STATE(83), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10835] = 7,
    ACTIONS(1001), 1,
      aux_sym_truncate_token2,
    ACTIONS(1003), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1005), 1,
      aux_sym_resource_token2,
    ACTIONS(1007), 1,
      aux_sym_resource_token5,
    ACTIONS(1009), 1,
      aux_sym_resource_token6,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(206), 1,
      sym_resource,
  [10857] = 5,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(1029), 1,
      aux_sym__decimal_literal_token1,
    STATE(801), 1,
      sym__decimal_literal,
    STATE(802), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10875] = 3,
    ACTIONS(1035), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1031), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1033), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10889] = 5,
    ACTIONS(991), 1,
      aux_sym_priviledge_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(268), 1,
      sym_alter_type_operation,
    STATE(283), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10907] = 2,
    ACTIONS(1037), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1039), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10918] = 6,
    ACTIONS(1041), 1,
      aux_sym_truncate_token2,
    ACTIONS(1043), 1,
      aux_sym_resource_token2,
    ACTIONS(1045), 1,
      aux_sym_resource_token6,
    ACTIONS(1047), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1049), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1051), 1,
      aux_sym_drop_user_token1,
  [10937] = 5,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(456), 1,
      sym_function_call,
    STATE(83), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10954] = 6,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    ACTIONS(1053), 1,
      aux_sym_select_statement_token3,
    STATE(545), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(769), 1,
      sym_select_elements,
  [10973] = 4,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      anon_sym_DOT,
    ACTIONS(1059), 1,
      aux_sym_select_element_token1,
    ACTIONS(1055), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10987] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1064), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10999] = 5,
    ACTIONS(1066), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1068), 1,
      sym_object_name,
    STATE(497), 1,
      sym_from_spec,
    STATE(554), 1,
      sym_delete_column_item,
    STATE(831), 1,
      sym_delete_column_list,
  [11015] = 1,
    ACTIONS(1070), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11023] = 3,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
    ACTIONS(1072), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(158), 2,
      sym_option_hash,
      sym_table_option_value,
  [11035] = 3,
    ACTIONS(1078), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(646), 1,
      sym_using_timestamp_spec,
    ACTIONS(1076), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11047] = 4,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(921), 1,
      sym_primary_key_definition,
    STATE(922), 2,
      sym_compound_key,
      sym_composite_key,
  [11061] = 1,
    ACTIONS(1084), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11069] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(188), 1,
      sym_table_option_item,
    STATE(336), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [11085] = 1,
    ACTIONS(1086), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11093] = 4,
    ACTIONS(1088), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1092), 1,
      aux_sym_role_with_options_token4,
    STATE(148), 1,
      sym_role_with_options,
    ACTIONS(1090), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11107] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(166), 1,
      sym_table_option_item,
    STATE(296), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [11123] = 5,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [11139] = 5,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(545), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(769), 1,
      sym_select_elements,
  [11155] = 5,
    ACTIONS(1096), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1098), 1,
      anon_sym_LPAREN,
    ACTIONS(1100), 1,
      aux_sym_insert_values_spec_token1,
    STATE(115), 1,
      sym_insert_values_spec,
    STATE(642), 1,
      sym_insert_column_spec,
  [11171] = 4,
    ACTIONS(1088), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1092), 1,
      aux_sym_role_with_options_token4,
    STATE(203), 1,
      sym_role_with_options,
    ACTIONS(1090), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11185] = 5,
    ACTIONS(1096), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1098), 1,
      anon_sym_LPAREN,
    ACTIONS(1100), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
    STATE(684), 1,
      sym_insert_column_spec,
  [11201] = 5,
    ACTIONS(159), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(161), 1,
      sym_object_name,
    STATE(166), 1,
      sym_table_option_item,
    STATE(281), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [11217] = 3,
    ACTIONS(1078), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(623), 1,
      sym_using_timestamp_spec,
    ACTIONS(1102), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11229] = 1,
    ACTIONS(1104), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11237] = 1,
    ACTIONS(1106), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11245] = 1,
    ACTIONS(1108), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11253] = 1,
    ACTIONS(1110), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11261] = 5,
    ACTIONS(1066), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1068), 1,
      sym_object_name,
    STATE(525), 1,
      sym_from_spec,
    STATE(554), 1,
      sym_delete_column_item,
    STATE(709), 1,
      sym_delete_column_list,
  [11277] = 5,
    ACTIONS(1112), 1,
      sym__string_literal,
    ACTIONS(1114), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1116), 1,
      aux_sym_create_index_token3,
    ACTIONS(1118), 1,
      sym_object_name,
    STATE(1204), 1,
      sym_index_name,
  [11293] = 1,
    ACTIONS(1120), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11300] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11313] = 4,
    ACTIONS(1124), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11326] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11339] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_where_spec,
    STATE(505), 1,
      aux_sym_update_repeat1,
  [11352] = 4,
    ACTIONS(1130), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1132), 1,
      sym_object_name,
    STATE(760), 1,
      sym_column_definition,
    STATE(998), 1,
      sym_primary_key_element,
  [11365] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_where_spec,
    STATE(521), 1,
      aux_sym_update_repeat1,
  [11378] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      sym_where_spec,
    STATE(504), 1,
      aux_sym_update_repeat1,
  [11391] = 4,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1134), 1,
      anon_sym_DOT,
    ACTIONS(1136), 1,
      aux_sym_update_token2,
    STATE(1074), 1,
      sym_using_ttl_timestamp,
  [11404] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1138), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11417] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1140), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11430] = 4,
    ACTIONS(1112), 1,
      sym__string_literal,
    ACTIONS(1118), 1,
      sym_object_name,
    ACTIONS(1142), 1,
      aux_sym_create_index_token3,
    STATE(1208), 1,
      sym_index_name,
  [11443] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1078), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(160), 1,
      sym_where_spec,
    STATE(758), 1,
      sym_using_timestamp_spec,
  [11456] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1078), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(170), 1,
      sym_where_spec,
    STATE(699), 1,
      sym_using_timestamp_spec,
  [11469] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1144), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11482] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11495] = 4,
    ACTIONS(1130), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1132), 1,
      sym_object_name,
    STATE(760), 1,
      sym_column_definition,
    STATE(1247), 1,
      sym_primary_key_element,
  [11508] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_where_spec,
    STATE(527), 1,
      aux_sym_update_repeat1,
  [11521] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(500), 1,
      aux_sym_update_repeat1,
  [11534] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11547] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11560] = 3,
    ACTIONS(1148), 1,
      aux_sym_create_materialized_view_token1,
    STATE(765), 1,
      sym_primary_key_column,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11571] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1150), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11584] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_where_spec,
    STATE(531), 1,
      aux_sym_update_repeat1,
  [11597] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1152), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11610] = 4,
    ACTIONS(1154), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1156), 1,
      aux_sym_create_materialized_view_token1,
    STATE(513), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(688), 1,
      aux_sym_relation_elements_repeat1,
  [11623] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1158), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11636] = 4,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    STATE(659), 1,
      aux_sym_assignment_set_repeat1,
  [11649] = 4,
    ACTIONS(1154), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1166), 1,
      aux_sym_create_materialized_view_token1,
    STATE(665), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(669), 1,
      aux_sym_relation_elements_repeat1,
  [11662] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1168), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11675] = 1,
    ACTIONS(1064), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11682] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(119), 1,
      sym_table_option_item,
    STATE(362), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11695] = 4,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_function_args_repeat1,
  [11708] = 4,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1176), 1,
      anon_sym_DOT,
    ACTIONS(1178), 1,
      aux_sym_update_token2,
    STATE(878), 1,
      sym_using_ttl_timestamp,
  [11721] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1180), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11734] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1182), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11745] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11758] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      sym_where_spec,
    STATE(535), 1,
      aux_sym_update_repeat1,
  [11771] = 2,
    ACTIONS(1184), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11780] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11793] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1078), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(194), 1,
      sym_where_spec,
    STATE(737), 1,
      sym_using_timestamp_spec,
  [11806] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      sym_where_spec,
    STATE(486), 1,
      aux_sym_update_repeat1,
  [11819] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11832] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(119), 1,
      sym_table_option_item,
    STATE(394), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11845] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1190), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11858] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11871] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11884] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1194), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11897] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1196), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11910] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(119), 1,
      sym_table_option_item,
    STATE(293), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11923] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11936] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1198), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11947] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(171), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11960] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1294), 1,
      sym_return_mode,
  [11970] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(562), 1,
      aux_sym_option_hash_repeat1,
  [11980] = 3,
    ACTIONS(1029), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1210), 1,
      sym__string_literal,
    STATE(777), 1,
      sym__decimal_literal,
  [11990] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(502), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [12000] = 3,
    ACTIONS(1214), 1,
      aux_sym_truncate_token2,
    ACTIONS(1216), 1,
      sym_object_name,
    STATE(297), 1,
      sym_table_name,
  [12010] = 3,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1220), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1222), 1,
      aux_sym_update_token1,
  [12020] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      aux_sym_replication_list_repeat1,
  [12030] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      aux_sym_from_spec_token1,
    STATE(608), 1,
      aux_sym_select_elements_repeat1,
  [12040] = 2,
    ACTIONS(1232), 1,
      aux_sym_resource_token1,
    ACTIONS(1234), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12048] = 3,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    ACTIONS(1238), 1,
      sym_object_name,
    STATE(605), 1,
      sym_param,
  [12058] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      aux_sym_where_spec_token1,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [12068] = 2,
    ACTIONS(1247), 1,
      aux_sym_select_element_token1,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12076] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(933), 1,
      sym_return_mode,
  [12086] = 2,
    ACTIONS(1251), 1,
      anon_sym_LBRACK,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12094] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12104] = 3,
    ACTIONS(1257), 1,
      sym_object_name,
    STATE(584), 1,
      sym_column_definition,
    STATE(916), 1,
      sym_column_definition_list,
  [12114] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      aux_sym_from_spec_token1,
    STATE(622), 1,
      aux_sym_delete_column_list_repeat1,
  [12124] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      sym_param,
  [12134] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(937), 1,
      sym_return_mode,
  [12144] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(585), 1,
      aux_sym_assignment_map_repeat1,
  [12154] = 3,
    ACTIONS(1269), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1271), 1,
      sym_object_name,
    STATE(396), 1,
      sym_alter_table_drop_column_list,
  [12164] = 3,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(166), 1,
      sym_table_option_item,
    STATE(1079), 1,
      sym_table_option_name,
  [12174] = 3,
    ACTIONS(1273), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1275), 1,
      sym_object_name,
    STATE(1196), 1,
      sym_keyspace_name,
  [12184] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [12194] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [12204] = 3,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1281), 1,
      aux_sym_update_token2,
    STATE(1052), 1,
      sym_using_ttl_timestamp,
  [12214] = 3,
    ACTIONS(1283), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(1161), 1,
      sym_trigger_name,
  [12224] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(491), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [12234] = 3,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_GT,
    STATE(566), 1,
      aux_sym_data_type_definition_repeat1,
  [12244] = 3,
    ACTIONS(1292), 1,
      sym_object_name,
    STATE(168), 1,
      sym_alter_type_rename_item,
    STATE(380), 1,
      sym_alter_type_rename_list,
  [12254] = 3,
    ACTIONS(1294), 1,
      anon_sym_DOT,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(955), 1,
      sym_materialized_view_where,
  [12264] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      aux_sym_create_type_repeat1,
  [12274] = 3,
    ACTIONS(1302), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1304), 1,
      sym_object_name,
    STATE(729), 1,
      sym_user_name,
  [12284] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(489), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [12294] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_create_type_repeat1,
  [12304] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_type_repeat1,
  [12314] = 3,
    ACTIONS(1310), 1,
      sym__string_literal,
    ACTIONS(1312), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1314), 1,
      sym_object_name,
  [12324] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      sym_param,
  [12334] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(492), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [12344] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(674), 1,
      aux_sym_function_args_repeat1,
  [12354] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(963), 1,
      sym_return_mode,
  [12364] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_relation_element_repeat1,
  [12374] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_create_function_repeat1,
  [12384] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(968), 1,
      sym_return_mode,
  [12394] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12404] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_relation_element_repeat2,
  [12414] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_column_definition_list_repeat1,
  [12424] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RBRACE,
    STATE(645), 1,
      aux_sym_assignment_map_repeat1,
  [12434] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12444] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12454] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(884), 1,
      sym_return_mode,
  [12464] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1207), 1,
      sym_return_mode,
  [12474] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [12484] = 3,
    ACTIONS(1304), 1,
      sym_object_name,
    ACTIONS(1336), 1,
      aux_sym_delete_statement_token2,
    STATE(351), 1,
      sym_user_name,
  [12494] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      sym_param,
  [12504] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_type_repeat1,
  [12514] = 3,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12524] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_create_type_repeat1,
  [12534] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_param,
  [12544] = 3,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12554] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RBRACK,
    STATE(666), 1,
      aux_sym_assignment_set_repeat1,
  [12564] = 3,
    ACTIONS(1361), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(994), 1,
      sym_replication_list,
  [12574] = 3,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      aux_sym_replication_list_repeat1,
  [12584] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(997), 1,
      sym_return_mode,
  [12594] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_GT,
    STATE(566), 1,
      aux_sym_data_type_definition_repeat1,
  [12604] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_expression_list_repeat1,
  [12614] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_create_function_repeat1,
  [12624] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [12634] = 3,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(549), 1,
      sym_function_call,
    STATE(714), 1,
      sym_select_element,
  [12644] = 3,
    ACTIONS(1257), 1,
      sym_object_name,
    STATE(584), 1,
      sym_column_definition,
    STATE(1020), 1,
      sym_column_definition_list,
  [12654] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1380), 1,
      aux_sym_from_spec_token1,
    STATE(671), 1,
      aux_sym_select_elements_repeat1,
  [12664] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1002), 1,
      sym_return_mode,
  [12674] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      sym_param,
  [12684] = 3,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [12694] = 3,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12704] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_type_repeat1,
  [12714] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1023), 1,
      sym_return_mode,
  [12724] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12734] = 3,
    ACTIONS(1029), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1399), 1,
      sym__string_literal,
    STATE(1018), 1,
      sym__decimal_literal,
  [12744] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12754] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_assignment_set_repeat1,
  [12764] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_function_repeat1,
  [12774] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1027), 1,
      sym_return_mode,
  [12784] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12794] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      aux_sym_from_spec_token1,
    STATE(649), 1,
      aux_sym_delete_column_list_repeat1,
  [12804] = 1,
    ACTIONS(1076), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12810] = 2,
    ACTIONS(1416), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1414), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12818] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(852), 1,
      sym_return_mode,
  [12828] = 3,
    ACTIONS(1361), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(981), 1,
      sym_replication_list,
  [12838] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12848] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [12858] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(902), 1,
      sym_return_mode,
  [12868] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_create_function_repeat1,
  [12878] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_create_function_repeat1,
  [12888] = 3,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_init_cond_hash_repeat1,
  [12898] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12908] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(848), 1,
      sym_return_mode,
  [12918] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_assignment_set_repeat1,
  [12928] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(958), 1,
      sym_return_mode,
  [12938] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12948] = 3,
    ACTIONS(1257), 1,
      sym_object_name,
    STATE(584), 1,
      sym_column_definition,
    STATE(909), 1,
      sym_column_definition_list,
  [12958] = 3,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12968] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1441), 1,
      anon_sym_RBRACE,
    STATE(544), 1,
      aux_sym_replication_list_repeat1,
  [12978] = 3,
    ACTIONS(1257), 1,
      sym_object_name,
    STATE(584), 1,
      sym_column_definition,
    STATE(1265), 1,
      sym_column_definition_list,
  [12988] = 3,
    ACTIONS(1096), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1100), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
  [12998] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13008] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1219), 1,
      sym_return_mode,
  [13018] = 3,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RBRACE,
    STATE(645), 1,
      aux_sym_assignment_map_repeat1,
  [13028] = 1,
    ACTIONS(1450), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13034] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1452), 1,
      anon_sym_GT,
    STATE(602), 1,
      aux_sym_data_type_definition_repeat1,
  [13044] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(677), 1,
      aux_sym_clustering_key_list_repeat1,
  [13054] = 3,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      aux_sym_from_spec_token1,
    STATE(649), 1,
      aux_sym_delete_column_list_repeat1,
  [13064] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1463), 1,
      anon_sym_DOT,
    STATE(1210), 1,
      sym_materialized_view_where,
  [13074] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1053), 1,
      sym_return_mode,
  [13084] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13094] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1467), 1,
      anon_sym_DOT,
    STATE(1071), 1,
      sym_materialized_view_where,
  [13104] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      aux_sym_create_type_repeat1,
  [13114] = 3,
    ACTIONS(1238), 1,
      sym_object_name,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      sym_param,
  [13124] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_expression_list_repeat1,
  [13134] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_type_repeat1,
  [13144] = 3,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_expression_list_repeat1,
  [13154] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RBRACE,
    STATE(461), 1,
      aux_sym_assignment_set_repeat1,
  [13164] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13174] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(920), 1,
      sym_return_mode,
  [13184] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_function_repeat1,
  [13194] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1178), 1,
      sym_return_mode,
  [13204] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1083), 1,
      sym_return_mode,
  [13214] = 3,
    ACTIONS(1488), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1491), 1,
      aux_sym_create_materialized_view_token1,
    STATE(665), 1,
      aux_sym_materialized_view_where_repeat1,
  [13224] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_RBRACK,
    STATE(461), 1,
      aux_sym_assignment_set_repeat1,
  [13234] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13244] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1087), 1,
      sym_return_mode,
  [13254] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1497), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13264] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_function_args_repeat1,
  [13274] = 3,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      aux_sym_from_spec_token1,
    STATE(671), 1,
      aux_sym_select_elements_repeat1,
  [13284] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_relation_element_repeat1,
  [13294] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(508), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [13304] = 3,
    ACTIONS(1506), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(674), 1,
      aux_sym_function_args_repeat1,
  [13314] = 2,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    ACTIONS(1513), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [13322] = 2,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(1509), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13330] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_clustering_key_list_repeat1,
  [13340] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(503), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [13350] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_clustering_key_list_repeat1,
  [13360] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_clustering_key_list_repeat1,
  [13370] = 3,
    ACTIONS(245), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1521), 1,
      aux_sym_update_token2,
    STATE(1315), 1,
      sym_using_ttl_timestamp,
  [13380] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(837), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [13390] = 3,
    ACTIONS(1523), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_clustering_key_list_repeat1,
  [13400] = 3,
    ACTIONS(1096), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1100), 1,
      aux_sym_insert_values_spec_token1,
    STATE(121), 1,
      sym_insert_values_spec,
  [13410] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1107), 1,
      sym_return_mode,
  [13420] = 3,
    ACTIONS(1361), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(881), 1,
      sym_replication_list,
  [13430] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1528), 1,
      anon_sym_DOT,
    STATE(1122), 1,
      sym_materialized_view_where,
  [13440] = 3,
    ACTIONS(153), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1166), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13450] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1138), 1,
      sym_return_mode,
  [13460] = 3,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13470] = 3,
    ACTIONS(1202), 1,
      aux_sym_create_function_token1,
    ACTIONS(1204), 1,
      aux_sym_return_mode_token1,
    STATE(1133), 1,
      sym_return_mode,
  [13480] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_type_repeat1,
  [13490] = 3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(526), 1,
      sym_assignment_element,
    STATE(847), 1,
      sym_indexed_column,
  [13500] = 2,
    ACTIONS(1534), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1536), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13507] = 1,
    ACTIONS(1538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13512] = 2,
    ACTIONS(1540), 1,
      anon_sym_DOT,
    ACTIONS(1542), 1,
      aux_sym_create_index_token3,
  [13519] = 1,
    ACTIONS(1526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13524] = 2,
    ACTIONS(1544), 1,
      aux_sym_materialized_view_options_token1,
    STATE(284), 1,
      sym_user_with,
  [13531] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [13538] = 2,
    ACTIONS(1546), 1,
      sym_object_name,
    STATE(207), 1,
      sym_role_name,
  [13545] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1150), 1,
      sym_clustering_key_list,
  [13552] = 2,
    ACTIONS(1029), 1,
      aux_sym__decimal_literal_token1,
    STATE(1356), 1,
      sym__decimal_literal,
  [13559] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(378), 1,
      sym_durable_writes,
  [13566] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(813), 1,
      sym_user_name,
  [13573] = 2,
    ACTIONS(1554), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1556), 1,
      sym_object_name,
  [13580] = 1,
    ACTIONS(1509), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13585] = 2,
    ACTIONS(1558), 1,
      anon_sym_DOT,
    ACTIONS(1560), 1,
      aux_sym_create_index_token3,
  [13592] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1171), 1,
      sym_materialized_view_where,
  [13599] = 2,
    ACTIONS(1562), 1,
      aux_sym_from_spec_token1,
    STATE(498), 1,
      sym_from_spec,
  [13606] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(476), 1,
      sym_table_name,
  [13613] = 2,
    ACTIONS(1566), 1,
      anon_sym_DOT,
    ACTIONS(1568), 1,
      anon_sym_LPAREN,
  [13620] = 2,
    ACTIONS(1562), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [13627] = 2,
    ACTIONS(1570), 1,
      anon_sym_DOT,
    ACTIONS(1572), 1,
      anon_sym_LPAREN,
  [13634] = 1,
    ACTIONS(1502), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13639] = 2,
    ACTIONS(1574), 1,
      anon_sym_DOT,
    ACTIONS(1576), 1,
      anon_sym_LPAREN,
  [13646] = 1,
    ACTIONS(1578), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13651] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(561), 1,
      sym_assignment_tuple,
  [13658] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [13665] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13670] = 1,
    ACTIONS(1491), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13675] = 2,
    ACTIONS(1029), 1,
      aux_sym__decimal_literal_token1,
    STATE(204), 1,
      sym__decimal_literal,
  [13682] = 2,
    ACTIONS(1582), 1,
      sym_object_name,
    STATE(212), 1,
      sym_if_condition,
  [13689] = 1,
    ACTIONS(1584), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13694] = 1,
    ACTIONS(1586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13699] = 2,
    ACTIONS(1588), 1,
      sym_object_name,
    STATE(1316), 1,
      sym_trigger_name,
  [13706] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1176), 1,
      sym_column_list,
  [13713] = 2,
    ACTIONS(1592), 1,
      aux_sym_resource_token5,
    ACTIONS(1594), 1,
      aux_sym_drop_aggregate_token1,
  [13720] = 1,
    ACTIONS(1480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13725] = 2,
    ACTIONS(1544), 1,
      aux_sym_materialized_view_options_token1,
    STATE(248), 1,
      sym_user_with,
  [13732] = 2,
    ACTIONS(1596), 1,
      anon_sym_DOT,
    ACTIONS(1598), 1,
      anon_sym_LPAREN,
  [13739] = 1,
    ACTIONS(1600), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13744] = 2,
    ACTIONS(1602), 1,
      anon_sym_DOT,
    ACTIONS(1604), 1,
      aux_sym_using_timestamp_spec_token1,
  [13751] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1072), 1,
      sym_materialized_view_where,
  [13758] = 2,
    ACTIONS(1606), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1608), 1,
      sym_object_name,
  [13765] = 1,
    ACTIONS(1610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13770] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1068), 1,
      sym_column_list,
  [13777] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(170), 1,
      sym_where_spec,
  [13784] = 2,
    ACTIONS(1612), 1,
      anon_sym_DOT,
    ACTIONS(1614), 1,
      anon_sym_LPAREN,
  [13791] = 2,
    ACTIONS(1616), 1,
      sym__string_literal,
    STATE(337), 1,
      sym_trigger_class,
  [13798] = 1,
    ACTIONS(1461), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13803] = 2,
    ACTIONS(1257), 1,
      sym_object_name,
    STATE(760), 1,
      sym_column_definition,
  [13810] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1211), 1,
      sym_materialized_view_where,
  [13817] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1049), 1,
      sym_clustering_key_list,
  [13824] = 2,
    ACTIONS(1618), 1,
      anon_sym_DOT,
    ACTIONS(1620), 1,
      aux_sym_select_element_token1,
  [13831] = 1,
    ACTIONS(1622), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13836] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(720), 1,
      sym_column_not_null,
  [13843] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(899), 1,
      sym_column_list,
  [13850] = 2,
    ACTIONS(1626), 1,
      anon_sym_DOT,
    ACTIONS(1628), 1,
      anon_sym_LPAREN,
  [13857] = 2,
    ACTIONS(1630), 1,
      anon_sym_DOT,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
  [13864] = 2,
    ACTIONS(1634), 1,
      sym__string_literal,
    STATE(539), 1,
      sym_option_hash_item,
  [13871] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1245), 1,
      sym_table_name,
  [13878] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(323), 1,
      sym_durable_writes,
  [13885] = 1,
    ACTIONS(1435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13890] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1255), 1,
      sym_column_list,
  [13897] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1256), 1,
      sym_column_list,
  [13904] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(975), 1,
      sym_table_name,
  [13911] = 2,
    ACTIONS(1636), 1,
      sym_object_name,
    STATE(740), 1,
      sym_delete_column_item,
  [13918] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(194), 1,
      sym_where_spec,
  [13925] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(993), 1,
      sym_table_name,
  [13932] = 1,
    ACTIONS(1404), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13937] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(779), 1,
      sym_init_cond_hash_item,
  [13944] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(510), 1,
      sym_column_not_null,
  [13951] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1287), 1,
      sym_materialized_view_where,
  [13958] = 2,
    ACTIONS(1361), 1,
      sym__string_literal,
    STATE(776), 1,
      sym_replication_list_item,
  [13965] = 1,
    ACTIONS(1640), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13970] = 1,
    ACTIONS(1387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13975] = 1,
    ACTIONS(1642), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13980] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1290), 1,
      sym_column_list,
  [13987] = 2,
    ACTIONS(1562), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [13994] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(698), 1,
      sym_user_name,
  [14001] = 1,
    ACTIONS(1644), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14006] = 1,
    ACTIONS(1357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14011] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(299), 1,
      sym_durable_writes,
  [14018] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(872), 1,
      sym_column_list,
  [14025] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1065), 1,
      sym_keyspace_name,
  [14032] = 1,
    ACTIONS(1366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14037] = 1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14042] = 2,
    ACTIONS(1650), 1,
      anon_sym_DOT,
    ACTIONS(1652), 1,
      anon_sym_LPAREN,
  [14049] = 1,
    ACTIONS(1348), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14054] = 2,
    ACTIONS(1654), 1,
      anon_sym_COMMA,
    ACTIONS(1656), 1,
      anon_sym_RPAREN,
  [14061] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1282), 1,
      sym_keyspace_name,
  [14068] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1314), 1,
      sym_column_list,
  [14075] = 2,
    ACTIONS(1658), 1,
      anon_sym_DOT,
    ACTIONS(1660), 1,
      anon_sym_LPAREN,
  [14082] = 1,
    ACTIONS(1662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14087] = 2,
    ACTIONS(1664), 1,
      sym_object_name,
    STATE(990), 1,
      sym_partition_key_list,
  [14094] = 2,
    ACTIONS(1666), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1668), 1,
      sym_object_name,
  [14101] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14108] = 2,
    ACTIONS(1670), 1,
      anon_sym_DOT,
    ACTIONS(1672), 1,
      anon_sym_LPAREN,
  [14115] = 2,
    ACTIONS(1674), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1676), 1,
      sym_object_name,
  [14122] = 2,
    ACTIONS(1678), 1,
      anon_sym_DOT,
    ACTIONS(1680), 1,
      aux_sym_select_element_token1,
  [14129] = 2,
    ACTIONS(1682), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1684), 1,
      sym_object_name,
  [14136] = 2,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_option_hash,
  [14143] = 2,
    ACTIONS(1686), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1688), 1,
      sym_object_name,
  [14150] = 2,
    ACTIONS(1616), 1,
      sym__string_literal,
    STATE(358), 1,
      sym_trigger_class,
  [14157] = 2,
    ACTIONS(1690), 1,
      aux_sym_role_with_options_token1,
    STATE(107), 1,
      sym_user_password,
  [14164] = 2,
    ACTIONS(1692), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1694), 1,
      sym_object_name,
  [14171] = 2,
    ACTIONS(1696), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1698), 1,
      sym_object_name,
  [14178] = 2,
    ACTIONS(1700), 1,
      sym__string_literal,
    ACTIONS(1702), 1,
      sym_object_name,
  [14185] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    ACTIONS(1706), 1,
      sym_object_name,
  [14192] = 2,
    ACTIONS(1708), 1,
      anon_sym_DOT,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
  [14199] = 1,
    ACTIONS(1712), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14204] = 1,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14209] = 2,
    ACTIONS(1716), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1718), 1,
      sym_object_name,
  [14216] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1331), 1,
      sym_column_list,
  [14223] = 1,
    ACTIONS(1720), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14228] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1332), 1,
      sym_column_list,
  [14235] = 2,
    ACTIONS(1722), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1724), 1,
      sym_object_name,
  [14242] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1169), 1,
      sym_column_list,
  [14249] = 1,
    ACTIONS(1726), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14254] = 2,
    ACTIONS(1728), 1,
      anon_sym_DOT,
    ACTIONS(1730), 1,
      anon_sym_LPAREN,
  [14261] = 2,
    ACTIONS(1732), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1734), 1,
      sym_object_name,
  [14268] = 2,
    ACTIONS(1292), 1,
      sym_object_name,
    STATE(219), 1,
      sym_alter_type_rename_item,
  [14275] = 2,
    ACTIONS(1544), 1,
      aux_sym_materialized_view_options_token1,
    STATE(322), 1,
      sym_user_with,
  [14282] = 2,
    ACTIONS(1238), 1,
      sym_object_name,
    STATE(753), 1,
      sym_param,
  [14289] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(951), 1,
      sym_column_list,
  [14296] = 2,
    ACTIONS(1736), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1738), 1,
      sym_object_name,
  [14303] = 1,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14308] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(387), 1,
      sym_user_name,
  [14315] = 2,
    ACTIONS(1740), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1742), 1,
      sym_object_name,
  [14322] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [14329] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14336] = 2,
    ACTIONS(1748), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1750), 1,
      sym_object_name,
  [14343] = 2,
    ACTIONS(1752), 1,
      sym_object_name,
    STATE(388), 1,
      sym_alter_table_column_definition,
  [14350] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(583), 1,
      sym_assignment_tuple,
  [14357] = 2,
    ACTIONS(1754), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1756), 1,
      sym_object_name,
  [14364] = 2,
    ACTIONS(1634), 1,
      sym__string_literal,
    STATE(766), 1,
      sym_option_hash_item,
  [14371] = 1,
    ACTIONS(1758), 2,
      sym__string_literal,
      sym__float_literal,
  [14376] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(402), 1,
      sym_table_name,
  [14383] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(474), 1,
      sym_table_name,
  [14390] = 2,
    ACTIONS(1760), 1,
      anon_sym_EQ,
    ACTIONS(1762), 1,
      anon_sym_LBRACK,
  [14397] = 2,
    ACTIONS(1562), 1,
      aux_sym_from_spec_token1,
    STATE(525), 1,
      sym_from_spec,
  [14404] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1351), 1,
      sym_column_list,
  [14411] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(94), 1,
      sym_table_name,
  [14418] = 2,
    ACTIONS(1764), 1,
      sym__string_literal,
    ACTIONS(1766), 1,
      sym_object_name,
  [14425] = 2,
    ACTIONS(1562), 1,
      aux_sym_from_spec_token1,
    STATE(73), 1,
      sym_from_spec,
  [14432] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(919), 1,
      sym_table_name,
  [14439] = 1,
    ACTIONS(1243), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14444] = 1,
    ACTIONS(1184), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14449] = 1,
    ACTIONS(1768), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14454] = 1,
    ACTIONS(1770), 1,
      sym_object_name,
  [14458] = 1,
    ACTIONS(1772), 1,
      aux_sym_grant_token2,
  [14462] = 1,
    ACTIONS(1774), 1,
      anon_sym_RPAREN,
  [14466] = 1,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
  [14470] = 1,
    ACTIONS(1778), 1,
      anon_sym_LBRACE,
  [14474] = 1,
    ACTIONS(1780), 1,
      aux_sym_insert_statement_token3,
  [14478] = 1,
    ACTIONS(1782), 1,
      anon_sym_RPAREN,
  [14482] = 1,
    ACTIONS(1784), 1,
      anon_sym_EQ,
  [14486] = 1,
    ACTIONS(1786), 1,
      aux_sym_create_function_token1,
  [14490] = 1,
    ACTIONS(1788), 1,
      aux_sym_order_spec_token2,
  [14494] = 1,
    ACTIONS(1790), 1,
      sym_object_name,
  [14498] = 1,
    ACTIONS(1792), 1,
      sym_object_name,
  [14502] = 1,
    ACTIONS(1794), 1,
      aux_sym_create_function_token1,
  [14506] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [14510] = 1,
    ACTIONS(1798), 1,
      aux_sym_return_mode_token2,
  [14514] = 1,
    ACTIONS(1800), 1,
      aux_sym_create_function_token1,
  [14518] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [14522] = 1,
    ACTIONS(1804), 1,
      aux_sym_create_function_token2,
  [14526] = 1,
    ACTIONS(1806), 1,
      aux_sym__decimal_literal_token1,
  [14530] = 1,
    ACTIONS(1808), 1,
      aux_sym_grant_token2,
  [14534] = 1,
    ACTIONS(1810), 1,
      aux_sym_from_spec_token1,
  [14538] = 1,
    ACTIONS(1812), 1,
      aux_sym__decimal_literal_token1,
  [14542] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14546] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14550] = 1,
    ACTIONS(1818), 1,
      aux_sym_create_aggregate_token3,
  [14554] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [14558] = 1,
    ACTIONS(1822), 1,
      aux_sym_select_statement_token5,
  [14562] = 1,
    ACTIONS(1824), 1,
      aux_sym_create_keyspace_token1,
  [14566] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [14570] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14574] = 1,
    ACTIONS(1830), 1,
      aux_sym_select_element_token1,
  [14578] = 1,
    ACTIONS(1832), 1,
      sym_object_name,
  [14582] = 1,
    ACTIONS(1834), 1,
      aux_sym_from_spec_token1,
  [14586] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [14590] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [14594] = 1,
    ACTIONS(1840), 1,
      sym_object_name,
  [14598] = 1,
    ACTIONS(1842), 1,
      sym_object_name,
  [14602] = 1,
    ACTIONS(1844), 1,
      aux_sym_delete_statement_token3,
  [14606] = 1,
    ACTIONS(1846), 1,
      aux_sym_update_token2,
  [14610] = 1,
    ACTIONS(1848), 1,
      sym_object_name,
  [14614] = 1,
    ACTIONS(1850), 1,
      aux_sym_select_statement_token5,
  [14618] = 1,
    ACTIONS(1852), 1,
      anon_sym_RBRACE,
  [14622] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [14626] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [14630] = 1,
    ACTIONS(1858), 1,
      aux_sym_create_function_token1,
  [14634] = 1,
    ACTIONS(1860), 1,
      anon_sym_LPAREN,
  [14638] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14642] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [14646] = 1,
    ACTIONS(1866), 1,
      anon_sym_RPAREN,
  [14650] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [14654] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [14658] = 1,
    ACTIONS(1872), 1,
      aux_sym_delete_statement_token3,
  [14662] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [14666] = 1,
    ACTIONS(1876), 1,
      sym_object_name,
  [14670] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [14674] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [14678] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [14682] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [14686] = 1,
    ACTIONS(1886), 1,
      anon_sym_EQ,
  [14690] = 1,
    ACTIONS(1888), 1,
      anon_sym_RPAREN,
  [14694] = 1,
    ACTIONS(1890), 1,
      sym_object_name,
  [14698] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [14702] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_function_token1,
  [14706] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [14710] = 1,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
  [14714] = 1,
    ACTIONS(1900), 1,
      aux_sym_delete_statement_token3,
  [14718] = 1,
    ACTIONS(1902), 1,
      sym_object_name,
  [14722] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [14726] = 1,
    ACTIONS(1906), 1,
      aux_sym_delete_statement_token3,
  [14730] = 1,
    ACTIONS(1908), 1,
      anon_sym_RPAREN,
  [14734] = 1,
    ACTIONS(1910), 1,
      sym_object_name,
  [14738] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [14742] = 1,
    ACTIONS(1914), 1,
      sym_object_name,
  [14746] = 1,
    ACTIONS(1916), 1,
      aux_sym_delete_statement_token3,
  [14750] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [14754] = 1,
    ACTIONS(1920), 1,
      aux_sym_create_aggregate_token3,
  [14758] = 1,
    ACTIONS(1922), 1,
      anon_sym_RPAREN,
  [14762] = 1,
    ACTIONS(1924), 1,
      aux_sym_insert_statement_token3,
  [14766] = 1,
    ACTIONS(1926), 1,
      anon_sym_LPAREN,
  [14770] = 1,
    ACTIONS(1928), 1,
      anon_sym_LPAREN,
  [14774] = 1,
    ACTIONS(1930), 1,
      aux_sym_create_function_token1,
  [14778] = 1,
    ACTIONS(1932), 1,
      anon_sym_RPAREN,
  [14782] = 1,
    ACTIONS(1934), 1,
      anon_sym_RPAREN,
  [14786] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [14790] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [14794] = 1,
    ACTIONS(1940), 1,
      anon_sym_EQ,
  [14798] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [14802] = 1,
    ACTIONS(1944), 1,
      anon_sym_LPAREN,
  [14806] = 1,
    ACTIONS(1946), 1,
      anon_sym_LPAREN,
  [14810] = 1,
    ACTIONS(1948), 1,
      sym_object_name,
  [14814] = 1,
    ACTIONS(1950), 1,
      aux_sym_select_statement_token1,
  [14818] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [14822] = 1,
    ACTIONS(1954), 1,
      aux_sym_delete_statement_token3,
  [14826] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_function_token1,
  [14830] = 1,
    ACTIONS(1958), 1,
      sym_object_name,
  [14834] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_function_token2,
  [14838] = 1,
    ACTIONS(1962), 1,
      aux_sym_delete_statement_token3,
  [14842] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [14846] = 1,
    ACTIONS(1966), 1,
      aux_sym_create_function_token1,
  [14850] = 1,
    ACTIONS(1968), 1,
      aux_sym_select_element_token1,
  [14854] = 1,
    ACTIONS(1970), 1,
      sym_object_name,
  [14858] = 1,
    ACTIONS(1972), 1,
      aux_sym_create_function_token2,
  [14862] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_aggregate_token4,
  [14866] = 1,
    ACTIONS(1976), 1,
      aux_sym_create_aggregate_token3,
  [14870] = 1,
    ACTIONS(1978), 1,
      anon_sym_RPAREN,
  [14874] = 1,
    ACTIONS(1980), 1,
      anon_sym_LPAREN,
  [14878] = 1,
    ACTIONS(1982), 1,
      anon_sym_RPAREN,
  [14882] = 1,
    ACTIONS(1984), 1,
      aux_sym_using_timestamp_spec_token2,
  [14886] = 1,
    ACTIONS(1986), 1,
      aux_sym_create_aggregate_token4,
  [14890] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_aggregate_token5,
  [14894] = 1,
    ACTIONS(1990), 1,
      aux_sym_select_statement_token1,
  [14898] = 1,
    ACTIONS(1992), 1,
      aux_sym_from_spec_token1,
  [14902] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14906] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14910] = 1,
    ACTIONS(1998), 1,
      anon_sym_COLON,
  [14914] = 1,
    ACTIONS(2000), 1,
      aux_sym_create_materialized_view_token1,
  [14918] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [14922] = 1,
    ACTIONS(2004), 1,
      aux_sym_delete_statement_token3,
  [14926] = 1,
    ACTIONS(2006), 1,
      aux_sym_create_function_token1,
  [14930] = 1,
    ACTIONS(2008), 1,
      aux_sym_create_keyspace_token1,
  [14934] = 1,
    ACTIONS(2010), 1,
      anon_sym_LPAREN,
  [14938] = 1,
    ACTIONS(2012), 1,
      anon_sym_EQ,
  [14942] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_function_token2,
  [14946] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_function_token1,
  [14950] = 1,
    ACTIONS(2018), 1,
      aux_sym_return_mode_token2,
  [14954] = 1,
    ACTIONS(2020), 1,
      aux_sym_constant_token2,
  [14958] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token2,
  [14962] = 1,
    ACTIONS(2024), 1,
      aux_sym_delete_statement_token3,
  [14966] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token1,
  [14970] = 1,
    ACTIONS(2028), 1,
      anon_sym_LPAREN,
  [14974] = 1,
    ACTIONS(2030), 1,
      anon_sym_RPAREN,
  [14978] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_aggregate_token3,
  [14982] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_aggregate_token4,
  [14986] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [14990] = 1,
    ACTIONS(2038), 1,
      aux_sym_delete_statement_token3,
  [14994] = 1,
    ACTIONS(2040), 1,
      anon_sym_LPAREN,
  [14998] = 1,
    ACTIONS(2042), 1,
      anon_sym_EQ,
  [15002] = 1,
    ACTIONS(2044), 1,
      aux_sym_delete_statement_token3,
  [15006] = 1,
    ACTIONS(2046), 1,
      anon_sym_LPAREN,
  [15010] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15014] = 1,
    ACTIONS(2050), 1,
      aux_sym_delete_statement_token3,
  [15018] = 1,
    ACTIONS(2052), 1,
      anon_sym_RBRACE,
  [15022] = 1,
    ACTIONS(2054), 1,
      anon_sym_LPAREN,
  [15026] = 1,
    ACTIONS(2056), 1,
      anon_sym_COLON,
  [15030] = 1,
    ACTIONS(2058), 1,
      anon_sym_COLON,
  [15034] = 1,
    ACTIONS(2060), 1,
      anon_sym_EQ,
  [15038] = 1,
    ACTIONS(2062), 1,
      anon_sym_EQ,
  [15042] = 1,
    ACTIONS(2064), 1,
      anon_sym_RPAREN,
  [15046] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [15050] = 1,
    ACTIONS(2068), 1,
      anon_sym_RPAREN,
  [15054] = 1,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
  [15058] = 1,
    ACTIONS(2072), 1,
      anon_sym_RPAREN,
  [15062] = 1,
    ACTIONS(2074), 1,
      anon_sym_RPAREN,
  [15066] = 1,
    ACTIONS(2076), 1,
      anon_sym_LPAREN,
  [15070] = 1,
    ACTIONS(2078), 1,
      anon_sym_RBRACE,
  [15074] = 1,
    ACTIONS(2080), 1,
      anon_sym_EQ,
  [15078] = 1,
    ACTIONS(2082), 1,
      anon_sym_EQ,
  [15082] = 1,
    ACTIONS(2084), 1,
      aux_sym_create_function_token1,
  [15086] = 1,
    ACTIONS(2086), 1,
      anon_sym_RPAREN,
  [15090] = 1,
    ACTIONS(2088), 1,
      anon_sym_LPAREN,
  [15094] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_function_token2,
  [15098] = 1,
    ACTIONS(2092), 1,
      sym_object_name,
  [15102] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_function_token1,
  [15106] = 1,
    ACTIONS(2096), 1,
      sym_object_name,
  [15110] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_function_token2,
  [15114] = 1,
    ACTIONS(2100), 1,
      aux_sym__decimal_literal_token1,
  [15118] = 1,
    ACTIONS(2102), 1,
      sym__code_block,
  [15122] = 1,
    ACTIONS(2104), 1,
      aux_sym_select_element_token1,
  [15126] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15130] = 1,
    ACTIONS(2108), 1,
      aux_sym_create_aggregate_token3,
  [15134] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_aggregate_token4,
  [15138] = 1,
    ACTIONS(2112), 1,
      sym_object_name,
  [15142] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [15146] = 1,
    ACTIONS(2116), 1,
      anon_sym_LPAREN,
  [15150] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15154] = 1,
    ACTIONS(2120), 1,
      aux_sym_order_spec_token1,
  [15158] = 1,
    ACTIONS(2122), 1,
      anon_sym_RPAREN,
  [15162] = 1,
    ACTIONS(959), 1,
      aux_sym_column_not_null_token1,
  [15166] = 1,
    ACTIONS(2124), 1,
      anon_sym_RBRACK,
  [15170] = 1,
    ACTIONS(2126), 1,
      aux_sym_relation_contains_key_token2,
  [15174] = 1,
    ACTIONS(2128), 1,
      anon_sym_RPAREN,
  [15178] = 1,
    ACTIONS(2130), 1,
      anon_sym_LPAREN,
  [15182] = 1,
    ACTIONS(2132), 1,
      aux_sym_delete_statement_token3,
  [15186] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_function_token1,
  [15190] = 1,
    ACTIONS(2136), 1,
      sym_object_name,
  [15194] = 1,
    ACTIONS(2138), 1,
      aux_sym_select_statement_token1,
  [15198] = 1,
    ACTIONS(2140), 1,
      aux_sym_order_spec_token2,
  [15202] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_function_token1,
  [15206] = 1,
    ACTIONS(2144), 1,
      aux_sym_using_timestamp_spec_token1,
  [15210] = 1,
    ACTIONS(2146), 1,
      sym_object_name,
  [15214] = 1,
    ACTIONS(2148), 1,
      aux_sym_create_function_token2,
  [15218] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15222] = 1,
    ACTIONS(2152), 1,
      aux_sym_select_statement_token5,
  [15226] = 1,
    ACTIONS(2154), 1,
      aux_sym_create_aggregate_token3,
  [15230] = 1,
    ACTIONS(2156), 1,
      sym_object_name,
  [15234] = 1,
    ACTIONS(2158), 1,
      anon_sym_LPAREN,
  [15238] = 1,
    ACTIONS(2160), 1,
      anon_sym_RPAREN,
  [15242] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15246] = 1,
    ACTIONS(2164), 1,
      anon_sym_LPAREN,
  [15250] = 1,
    ACTIONS(2166), 1,
      sym__string_literal,
  [15254] = 1,
    ACTIONS(2168), 1,
      aux_sym_insert_statement_token3,
  [15258] = 1,
    ACTIONS(2170), 1,
      aux_sym_select_statement_token5,
  [15262] = 1,
    ACTIONS(2172), 1,
      aux_sym_insert_statement_token3,
  [15266] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [15270] = 1,
    ACTIONS(2176), 1,
      sym_object_name,
  [15274] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [15278] = 1,
    ACTIONS(2180), 1,
      aux_sym_create_index_token3,
  [15282] = 1,
    ACTIONS(2182), 1,
      anon_sym_COMMA,
  [15286] = 1,
    ACTIONS(2184), 1,
      aux_sym_insert_statement_token3,
  [15290] = 1,
    ACTIONS(2186), 1,
      anon_sym_RPAREN,
  [15294] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15298] = 1,
    ACTIONS(2190), 1,
      sym__boolean_literal,
  [15302] = 1,
    ACTIONS(2192), 1,
      aux_sym_update_token2,
  [15306] = 1,
    ACTIONS(2194), 1,
      aux_sym_create_function_token1,
  [15310] = 1,
    ACTIONS(2196), 1,
      sym_object_name,
  [15314] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15318] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_function_token2,
  [15322] = 1,
    ACTIONS(2202), 1,
      sym_object_name,
  [15326] = 1,
    ACTIONS(2204), 1,
      aux_sym_select_element_token1,
  [15330] = 1,
    ACTIONS(2206), 1,
      sym_object_name,
  [15334] = 1,
    ACTIONS(2208), 1,
      aux_sym_create_function_token2,
  [15338] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15342] = 1,
    ACTIONS(2212), 1,
      sym__code_block,
  [15346] = 1,
    ACTIONS(2214), 1,
      aux_sym_select_element_token1,
  [15350] = 1,
    ACTIONS(2216), 1,
      sym_object_name,
  [15354] = 1,
    ACTIONS(2218), 1,
      aux_sym_materialized_view_options_token1,
  [15358] = 1,
    ACTIONS(2220), 1,
      aux_sym_create_aggregate_token5,
  [15362] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_aggregate_token6,
  [15366] = 1,
    ACTIONS(2224), 1,
      aux_sym_from_spec_token1,
  [15370] = 1,
    ACTIONS(2226), 1,
      sym_object_name,
  [15374] = 1,
    ACTIONS(2228), 1,
      sym_object_name,
  [15378] = 1,
    ACTIONS(2230), 1,
      aux_sym_create_materialized_view_token1,
  [15382] = 1,
    ACTIONS(2232), 1,
      aux_sym_create_materialized_view_token1,
  [15386] = 1,
    ACTIONS(2234), 1,
      aux_sym_insert_statement_token3,
  [15390] = 1,
    ACTIONS(2236), 1,
      aux_sym_update_token2,
  [15394] = 1,
    ACTIONS(2238), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15398] = 1,
    ACTIONS(2240), 1,
      anon_sym_EQ,
  [15402] = 1,
    ACTIONS(2242), 1,
      anon_sym_LPAREN,
  [15406] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15410] = 1,
    ACTIONS(2246), 1,
      anon_sym_EQ,
  [15414] = 1,
    ACTIONS(2248), 1,
      aux_sym_grant_token2,
  [15418] = 1,
    ACTIONS(2250), 1,
      anon_sym_EQ,
  [15422] = 1,
    ACTIONS(2252), 1,
      sym_object_name,
  [15426] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_function_token1,
  [15430] = 1,
    ACTIONS(2256), 1,
      sym_object_name,
  [15434] = 1,
    ACTIONS(2258), 1,
      aux_sym_create_function_token2,
  [15438] = 1,
    ACTIONS(2260), 1,
      aux_sym_delete_statement_token3,
  [15442] = 1,
    ACTIONS(2262), 1,
      aux_sym_create_function_token1,
  [15446] = 1,
    ACTIONS(2264), 1,
      aux_sym_select_element_token1,
  [15450] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [15454] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_function_token2,
  [15458] = 1,
    ACTIONS(2270), 1,
      anon_sym_RPAREN,
  [15462] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15466] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_aggregate_token4,
  [15470] = 1,
    ACTIONS(2276), 1,
      aux_sym_create_aggregate_token5,
  [15474] = 1,
    ACTIONS(2278), 1,
      aux_sym_delete_statement_token3,
  [15478] = 1,
    ACTIONS(2280), 1,
      aux_sym_drop_type_token1,
  [15482] = 1,
    ACTIONS(2282), 1,
      sym_object_name,
  [15486] = 1,
    ACTIONS(2284), 1,
      anon_sym_RPAREN,
  [15490] = 1,
    ACTIONS(2286), 1,
      anon_sym_RPAREN,
  [15494] = 1,
    ACTIONS(2288), 1,
      sym_object_name,
  [15498] = 1,
    ACTIONS(2290), 1,
      sym_object_name,
  [15502] = 1,
    ACTIONS(2292), 1,
      sym_object_name,
  [15506] = 1,
    ACTIONS(2294), 1,
      aux_sym__decimal_literal_token1,
  [15510] = 1,
    ACTIONS(2296), 1,
      aux_sym_delete_statement_token3,
  [15514] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_function_token2,
  [15518] = 1,
    ACTIONS(2300), 1,
      aux_sym__decimal_literal_token1,
  [15522] = 1,
    ACTIONS(2302), 1,
      aux_sym_create_function_token1,
  [15526] = 1,
    ACTIONS(2304), 1,
      aux_sym_select_element_token1,
  [15530] = 1,
    ACTIONS(2306), 1,
      sym_object_name,
  [15534] = 1,
    ACTIONS(2308), 1,
      aux_sym_create_function_token2,
  [15538] = 1,
    ACTIONS(2310), 1,
      sym__code_block,
  [15542] = 1,
    ACTIONS(2312), 1,
      aux_sym_select_element_token1,
  [15546] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [15550] = 1,
    ACTIONS(2316), 1,
      aux_sym_delete_statement_token3,
  [15554] = 1,
    ACTIONS(2318), 1,
      sym__code_block,
  [15558] = 1,
    ACTIONS(2320), 1,
      aux_sym_create_aggregate_token4,
  [15562] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_aggregate_token5,
  [15566] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15570] = 1,
    ACTIONS(2326), 1,
      aux_sym_delete_statement_token3,
  [15574] = 1,
    ACTIONS(2328), 1,
      sym_object_name,
  [15578] = 1,
    ACTIONS(2330), 1,
      sym_object_name,
  [15582] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_materialized_view_token1,
  [15586] = 1,
    ACTIONS(2334), 1,
      aux_sym_select_statement_token5,
  [15590] = 1,
    ACTIONS(2336), 1,
      aux_sym_relation_contains_key_token2,
  [15594] = 1,
    ACTIONS(2338), 1,
      aux_sym_relation_contains_key_token2,
  [15598] = 1,
    ACTIONS(2340), 1,
      aux_sym_constant_token2,
  [15602] = 1,
    ACTIONS(2342), 1,
      sym_object_name,
  [15606] = 1,
    ACTIONS(2344), 1,
      aux_sym_create_index_token3,
  [15610] = 1,
    ACTIONS(2346), 1,
      aux_sym_create_keyspace_token1,
  [15614] = 1,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
  [15618] = 1,
    ACTIONS(2348), 1,
      anon_sym_RPAREN,
  [15622] = 1,
    ACTIONS(2350), 1,
      aux_sym_delete_statement_token3,
  [15626] = 1,
    ACTIONS(2352), 1,
      aux_sym_create_function_token1,
  [15630] = 1,
    ACTIONS(2354), 1,
      anon_sym_LPAREN,
  [15634] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [15638] = 1,
    ACTIONS(2358), 1,
      aux_sym_create_function_token2,
  [15642] = 1,
    ACTIONS(2360), 1,
      aux_sym_delete_statement_token3,
  [15646] = 1,
    ACTIONS(2362), 1,
      aux_sym_create_function_token1,
  [15650] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [15654] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_function_token2,
  [15658] = 1,
    ACTIONS(2368), 1,
      aux_sym_delete_statement_token3,
  [15662] = 1,
    ACTIONS(2370), 1,
      sym__code_block,
  [15666] = 1,
    ACTIONS(2372), 1,
      aux_sym_select_element_token1,
  [15670] = 1,
    ACTIONS(2374), 1,
      sym_object_name,
  [15674] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_aggregate_token3,
  [15678] = 1,
    ACTIONS(2378), 1,
      aux_sym_create_aggregate_token4,
  [15682] = 1,
    ACTIONS(2380), 1,
      anon_sym_LPAREN,
  [15686] = 1,
    ACTIONS(2382), 1,
      sym_object_name,
  [15690] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [15694] = 1,
    ACTIONS(2386), 1,
      anon_sym_RPAREN,
  [15698] = 1,
    ACTIONS(2388), 1,
      aux_sym_insert_statement_token3,
  [15702] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [15706] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_function_token2,
  [15710] = 1,
    ACTIONS(2394), 1,
      anon_sym_RPAREN,
  [15714] = 1,
    ACTIONS(2396), 1,
      sym__code_block,
  [15718] = 1,
    ACTIONS(2398), 1,
      aux_sym_select_element_token1,
  [15722] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [15726] = 1,
    ACTIONS(2402), 1,
      aux_sym_insert_statement_token3,
  [15730] = 1,
    ACTIONS(2404), 1,
      sym__code_block,
  [15734] = 1,
    ACTIONS(2406), 1,
      aux_sym_select_element_token1,
  [15738] = 1,
    ACTIONS(2408), 1,
      aux_sym_using_timestamp_spec_token1,
  [15742] = 1,
    ACTIONS(2410), 1,
      sym_object_name,
  [15746] = 1,
    ACTIONS(2412), 1,
      sym_object_name,
  [15750] = 1,
    ACTIONS(2414), 1,
      aux_sym_create_aggregate_token6,
  [15754] = 1,
    ACTIONS(2416), 1,
      aux_sym_insert_statement_token3,
  [15758] = 1,
    ACTIONS(2418), 1,
      aux_sym_insert_statement_token3,
  [15762] = 1,
    ACTIONS(2420), 1,
      sym_object_name,
  [15766] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [15770] = 1,
    ACTIONS(2424), 1,
      aux_sym_from_spec_token1,
  [15774] = 1,
    ACTIONS(2426), 1,
      aux_sym_relation_contains_key_token2,
  [15778] = 1,
    ACTIONS(2428), 1,
      aux_sym_create_materialized_view_token1,
  [15782] = 1,
    ACTIONS(2430), 1,
      anon_sym_LPAREN,
  [15786] = 1,
    ACTIONS(2432), 1,
      anon_sym_LPAREN,
  [15790] = 1,
    ACTIONS(2434), 1,
      aux_sym_select_statement_token1,
  [15794] = 1,
    ACTIONS(2436), 1,
      sym_object_name,
  [15798] = 1,
    ACTIONS(2438), 1,
      anon_sym_RPAREN,
  [15802] = 1,
    ACTIONS(2440), 1,
      aux_sym_insert_statement_token3,
  [15806] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_function_token1,
  [15810] = 1,
    ACTIONS(2444), 1,
      anon_sym_RPAREN,
  [15814] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [15818] = 1,
    ACTIONS(2448), 1,
      aux_sym_create_function_token2,
  [15822] = 1,
    ACTIONS(2450), 1,
      aux_sym_insert_statement_token3,
  [15826] = 1,
    ACTIONS(2452), 1,
      aux_sym_select_element_token1,
  [15830] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [15834] = 1,
    ACTIONS(2456), 1,
      aux_sym_create_function_token2,
  [15838] = 1,
    ACTIONS(2458), 1,
      aux_sym_delete_statement_token3,
  [15842] = 1,
    ACTIONS(2460), 1,
      sym__code_block,
  [15846] = 1,
    ACTIONS(2462), 1,
      aux_sym_select_element_token1,
  [15850] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [15854] = 1,
    ACTIONS(2466), 1,
      aux_sym_insert_statement_token3,
  [15858] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_aggregate_token5,
  [15862] = 1,
    ACTIONS(2470), 1,
      aux_sym_create_aggregate_token6,
  [15866] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_element_token1,
  [15870] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [15874] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_function_token2,
  [15878] = 1,
    ACTIONS(2478), 1,
      aux_sym_materialized_view_options_token1,
  [15882] = 1,
    ACTIONS(2480), 1,
      sym__code_block,
  [15886] = 1,
    ACTIONS(2482), 1,
      aux_sym_select_element_token1,
  [15890] = 1,
    ACTIONS(2484), 1,
      aux_sym_materialized_view_options_token1,
  [15894] = 1,
    ACTIONS(2486), 1,
      sym__code_block,
  [15898] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_aggregate_token5,
  [15902] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_aggregate_token6,
  [15906] = 1,
    ACTIONS(2492), 1,
      aux_sym_insert_statement_token3,
  [15910] = 1,
    ACTIONS(2494), 1,
      aux_sym_create_index_token3,
  [15914] = 1,
    ACTIONS(2496), 1,
      anon_sym_COLON,
  [15918] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [15922] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_function_token1,
  [15926] = 1,
    ACTIONS(2502), 1,
      aux_sym_create_index_token3,
  [15930] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [15934] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_materialized_view_token1,
  [15938] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_materialized_view_token1,
  [15942] = 1,
    ACTIONS(2510), 1,
      anon_sym_LPAREN,
  [15946] = 1,
    ACTIONS(2512), 1,
      aux_sym_relation_contains_key_token2,
  [15950] = 1,
    ACTIONS(2514), 1,
      aux_sym_constant_token2,
  [15954] = 1,
    ACTIONS(2516), 1,
      aux_sym_create_index_token3,
  [15958] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [15962] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_function_token2,
  [15966] = 1,
    ACTIONS(2522), 1,
      aux_sym_insert_statement_token3,
  [15970] = 1,
    ACTIONS(2524), 1,
      aux_sym_create_function_token1,
  [15974] = 1,
    ACTIONS(2526), 1,
      aux_sym_select_element_token1,
  [15978] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [15982] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_function_token2,
  [15986] = 1,
    ACTIONS(2532), 1,
      sym__code_block,
  [15990] = 1,
    ACTIONS(2534), 1,
      aux_sym_select_element_token1,
  [15994] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [15998] = 1,
    ACTIONS(2538), 1,
      aux_sym_create_index_token3,
  [16002] = 1,
    ACTIONS(2540), 1,
      sym__code_block,
  [16006] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_aggregate_token4,
  [16010] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_aggregate_token5,
  [16014] = 1,
    ACTIONS(2546), 1,
      sym_object_name,
  [16018] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16022] = 1,
    ACTIONS(2550), 1,
      sym__code_block,
  [16026] = 1,
    ACTIONS(2552), 1,
      aux_sym_select_element_token1,
  [16030] = 1,
    ACTIONS(2554), 1,
      sym_object_name,
  [16034] = 1,
    ACTIONS(2556), 1,
      aux_sym_insert_statement_token3,
  [16038] = 1,
    ACTIONS(2558), 1,
      sym__code_block,
  [16042] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [16046] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16050] = 1,
    ACTIONS(2564), 1,
      anon_sym_RPAREN,
  [16054] = 1,
    ACTIONS(2566), 1,
      anon_sym_LPAREN,
  [16058] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16062] = 1,
    ACTIONS(2570), 1,
      sym_object_name,
  [16066] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16070] = 1,
    ACTIONS(2574), 1,
      aux_sym_using_timestamp_spec_token2,
  [16074] = 1,
    ACTIONS(2576), 1,
      anon_sym_LPAREN,
  [16078] = 1,
    ACTIONS(2578), 1,
      anon_sym_LPAREN,
  [16082] = 1,
    ACTIONS(2580), 1,
      anon_sym_RPAREN,
  [16086] = 1,
    ACTIONS(2582), 1,
      sym_object_name,
  [16090] = 1,
    ACTIONS(2584), 1,
      aux_sym_relation_contains_key_token2,
  [16094] = 1,
    ACTIONS(2586), 1,
      anon_sym_LPAREN,
  [16098] = 1,
    ACTIONS(2588), 1,
      aux_sym_relation_contains_key_token2,
  [16102] = 1,
    ACTIONS(2590), 1,
      aux_sym_relation_contains_key_token2,
  [16106] = 1,
    ACTIONS(2592), 1,
      anon_sym_RPAREN,
  [16110] = 1,
    ACTIONS(2594), 1,
      anon_sym_LPAREN,
  [16114] = 1,
    ACTIONS(2596), 1,
      anon_sym_RPAREN,
  [16118] = 1,
    ACTIONS(2598), 1,
      anon_sym_RPAREN,
  [16122] = 1,
    ACTIONS(2600), 1,
      sym_object_name,
  [16126] = 1,
    ACTIONS(2602), 1,
      anon_sym_STAR,
  [16130] = 1,
    ACTIONS(2604), 1,
      sym_object_name,
  [16134] = 1,
    ACTIONS(2606), 1,
      aux_sym_create_function_token2,
  [16138] = 1,
    ACTIONS(2608), 1,
      aux_sym_relation_contains_key_token2,
  [16142] = 1,
    ACTIONS(2610), 1,
      sym__code_block,
  [16146] = 1,
    ACTIONS(2612), 1,
      aux_sym_select_element_token1,
  [16150] = 1,
    ACTIONS(2614), 1,
      sym_object_name,
  [16154] = 1,
    ACTIONS(2616), 1,
      anon_sym_RPAREN,
  [16158] = 1,
    ACTIONS(2618), 1,
      sym__code_block,
  [16162] = 1,
    ACTIONS(2620), 1,
      aux_sym_select_element_token1,
  [16166] = 1,
    ACTIONS(2622), 1,
      sym_object_name,
  [16170] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16174] = 1,
    ACTIONS(2626), 1,
      sym_object_name,
  [16178] = 1,
    ACTIONS(2628), 1,
      aux_sym_create_aggregate_token6,
  [16182] = 1,
    ACTIONS(2630), 1,
      aux_sym_insert_statement_token2,
  [16186] = 1,
    ACTIONS(2632), 1,
      anon_sym_RPAREN,
  [16190] = 1,
    ACTIONS(2634), 1,
      sym__code_block,
  [16194] = 1,
    ACTIONS(2636), 1,
      aux_sym_select_element_token1,
  [16198] = 1,
    ACTIONS(2638), 1,
      sym_object_name,
  [16202] = 1,
    ACTIONS(2640), 1,
      aux_sym_create_aggregate_token6,
  [16206] = 1,
    ACTIONS(2642), 1,
      aux_sym_drop_materialized_view_token2,
  [16210] = 1,
    ACTIONS(2644), 1,
      aux_sym_delete_statement_token3,
  [16214] = 1,
    ACTIONS(2646), 1,
      sym_object_name,
  [16218] = 1,
    ACTIONS(2648), 1,
      anon_sym_RPAREN,
  [16222] = 1,
    ACTIONS(2650), 1,
      aux_sym_materialized_view_options_token1,
  [16226] = 1,
    ACTIONS(2652), 1,
      anon_sym_LBRACE,
  [16230] = 1,
    ACTIONS(2654), 1,
      anon_sym_RPAREN,
  [16234] = 1,
    ACTIONS(2656), 1,
      sym_object_name,
  [16238] = 1,
    ACTIONS(2658), 1,
      aux_sym_constant_token2,
  [16242] = 1,
    ACTIONS(2660), 1,
      aux_sym_create_materialized_view_token1,
  [16246] = 1,
    ACTIONS(2662), 1,
      anon_sym_LPAREN,
  [16250] = 1,
    ACTIONS(2664), 1,
      anon_sym_LPAREN,
  [16254] = 1,
    ACTIONS(2666), 1,
      anon_sym_RPAREN,
  [16258] = 1,
    ACTIONS(2668), 1,
      aux_sym_create_index_token3,
  [16262] = 1,
    ACTIONS(2670), 1,
      aux_sym_create_index_token3,
  [16266] = 1,
    ACTIONS(2672), 1,
      aux_sym_create_index_token3,
  [16270] = 1,
    ACTIONS(2674), 1,
      aux_sym_create_function_token1,
  [16274] = 1,
    ACTIONS(2676), 1,
      anon_sym_RPAREN,
  [16278] = 1,
    ACTIONS(2678), 1,
      aux_sym_select_element_token1,
  [16282] = 1,
    ACTIONS(2680), 1,
      sym_object_name,
  [16286] = 1,
    ACTIONS(2682), 1,
      aux_sym_create_function_token2,
  [16290] = 1,
    ACTIONS(2684), 1,
      anon_sym_LPAREN,
  [16294] = 1,
    ACTIONS(2686), 1,
      sym__code_block,
  [16298] = 1,
    ACTIONS(2688), 1,
      aux_sym_select_element_token1,
  [16302] = 1,
    ACTIONS(2690), 1,
      aux_sym_drop_materialized_view_token2,
  [16306] = 1,
    ACTIONS(2692), 1,
      sym__code_block,
  [16310] = 1,
    ACTIONS(2694), 1,
      aux_sym_create_aggregate_token5,
  [16314] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_aggregate_token6,
  [16318] = 1,
    ACTIONS(2698), 1,
      sym__string_literal,
  [16322] = 1,
    ACTIONS(2698), 1,
      sym__boolean_literal,
  [16326] = 1,
    ACTIONS(2700), 1,
      sym__code_block,
  [16330] = 1,
    ACTIONS(2702), 1,
      aux_sym_select_statement_token5,
  [16334] = 1,
    ACTIONS(2704), 1,
      aux_sym_relation_contains_key_token2,
  [16338] = 1,
    ACTIONS(2706), 1,
      aux_sym_create_aggregate_token3,
  [16342] = 1,
    ACTIONS(2708), 1,
      sym_object_name,
  [16346] = 1,
    ACTIONS(2710), 1,
      aux_sym_select_element_token1,
  [16350] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16354] = 1,
    ACTIONS(2714), 1,
      aux_sym_update_token2,
  [16358] = 1,
    ACTIONS(2716), 1,
      aux_sym_using_timestamp_spec_token1,
  [16362] = 1,
    ACTIONS(2718), 1,
      aux_sym_create_aggregate_token2,
  [16366] = 1,
    ACTIONS(2720), 1,
      sym_object_name,
  [16370] = 1,
    ACTIONS(2722), 1,
      sym__code_block,
  [16374] = 1,
    ACTIONS(2724), 1,
      aux_sym_select_element_token1,
  [16378] = 1,
    ACTIONS(2726), 1,
      sym_object_name,
  [16382] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16386] = 1,
    ACTIONS(2730), 1,
      sym__code_block,
  [16390] = 1,
    ACTIONS(2732), 1,
      aux_sym_using_ttl_timestamp_token1,
  [16394] = 1,
    ACTIONS(2734), 1,
      sym_object_name,
  [16398] = 1,
    ACTIONS(2736), 1,
      aux_sym_drop_materialized_view_token2,
  [16402] = 1,
    ACTIONS(2738), 1,
      anon_sym_LBRACE,
  [16406] = 1,
    ACTIONS(2740), 1,
      sym_object_name,
  [16410] = 1,
    ACTIONS(2742), 1,
      aux_sym_delete_statement_token3,
  [16414] = 1,
    ACTIONS(2744), 1,
      anon_sym_LPAREN,
  [16418] = 1,
    ACTIONS(2746), 1,
      anon_sym_RPAREN,
  [16422] = 1,
    ACTIONS(2748), 1,
      anon_sym_RPAREN,
  [16426] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16430] = 1,
    ACTIONS(2752), 1,
      sym_object_name,
  [16434] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16438] = 1,
    ACTIONS(2756), 1,
      sym_object_name,
  [16442] = 1,
    ACTIONS(2758), 1,
      aux_sym_begin_batch_token4,
  [16446] = 1,
    ACTIONS(2760), 1,
      sym__code_block,
  [16450] = 1,
    ACTIONS(2762), 1,
      aux_sym_select_element_token1,
  [16454] = 1,
    ACTIONS(2764), 1,
      sym_object_name,
  [16458] = 1,
    ACTIONS(2766), 1,
      aux_sym_create_aggregate_token6,
  [16462] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [16466] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16470] = 1,
    ACTIONS(2772), 1,
      sym_object_name,
  [16474] = 1,
    ACTIONS(2774), 1,
      aux_sym_resource_token2,
  [16478] = 1,
    ACTIONS(2776), 1,
      sym_object_name,
  [16482] = 1,
    ACTIONS(2778), 1,
      sym_object_name,
  [16486] = 1,
    ACTIONS(2780), 1,
      sym_object_name,
  [16490] = 1,
    ACTIONS(2782), 1,
      sym__code_block,
  [16494] = 1,
    ACTIONS(2784), 1,
      aux_sym_delete_statement_token3,
  [16498] = 1,
    ACTIONS(2786), 1,
      anon_sym_RPAREN,
  [16502] = 1,
    ACTIONS(2788), 1,
      ts_builtin_sym_end,
  [16506] = 1,
    ACTIONS(2790), 1,
      aux_sym_begin_batch_token4,
  [16510] = 1,
    ACTIONS(2792), 1,
      sym_object_name,
  [16514] = 1,
    ACTIONS(2794), 1,
      sym_object_name,
  [16518] = 1,
    ACTIONS(2796), 1,
      anon_sym_RBRACK,
  [16522] = 1,
    ACTIONS(2798), 1,
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
  [SMALL_STATE(38)] = 1370,
  [SMALL_STATE(39)] = 1405,
  [SMALL_STATE(40)] = 1440,
  [SMALL_STATE(41)] = 1475,
  [SMALL_STATE(42)] = 1510,
  [SMALL_STATE(43)] = 1545,
  [SMALL_STATE(44)] = 1580,
  [SMALL_STATE(45)] = 1615,
  [SMALL_STATE(46)] = 1650,
  [SMALL_STATE(47)] = 1685,
  [SMALL_STATE(48)] = 1720,
  [SMALL_STATE(49)] = 1755,
  [SMALL_STATE(50)] = 1790,
  [SMALL_STATE(51)] = 1825,
  [SMALL_STATE(52)] = 1860,
  [SMALL_STATE(53)] = 1895,
  [SMALL_STATE(54)] = 1930,
  [SMALL_STATE(55)] = 1965,
  [SMALL_STATE(56)] = 2000,
  [SMALL_STATE(57)] = 2035,
  [SMALL_STATE(58)] = 2070,
  [SMALL_STATE(59)] = 2102,
  [SMALL_STATE(60)] = 2134,
  [SMALL_STATE(61)] = 2166,
  [SMALL_STATE(62)] = 2196,
  [SMALL_STATE(63)] = 2227,
  [SMALL_STATE(64)] = 2254,
  [SMALL_STATE(65)] = 2281,
  [SMALL_STATE(66)] = 2312,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2374,
  [SMALL_STATE(69)] = 2401,
  [SMALL_STATE(70)] = 2427,
  [SMALL_STATE(71)] = 2457,
  [SMALL_STATE(72)] = 2487,
  [SMALL_STATE(73)] = 2527,
  [SMALL_STATE(74)] = 2567,
  [SMALL_STATE(75)] = 2607,
  [SMALL_STATE(76)] = 2632,
  [SMALL_STATE(77)] = 2657,
  [SMALL_STATE(78)] = 2682,
  [SMALL_STATE(79)] = 2707,
  [SMALL_STATE(80)] = 2732,
  [SMALL_STATE(81)] = 2757,
  [SMALL_STATE(82)] = 2786,
  [SMALL_STATE(83)] = 2825,
  [SMALL_STATE(84)] = 2850,
  [SMALL_STATE(85)] = 2875,
  [SMALL_STATE(86)] = 2904,
  [SMALL_STATE(87)] = 2929,
  [SMALL_STATE(88)] = 2954,
  [SMALL_STATE(89)] = 2988,
  [SMALL_STATE(90)] = 3022,
  [SMALL_STATE(91)] = 3046,
  [SMALL_STATE(92)] = 3070,
  [SMALL_STATE(93)] = 3104,
  [SMALL_STATE(94)] = 3128,
  [SMALL_STATE(95)] = 3152,
  [SMALL_STATE(96)] = 3177,
  [SMALL_STATE(97)] = 3204,
  [SMALL_STATE(98)] = 3227,
  [SMALL_STATE(99)] = 3252,
  [SMALL_STATE(100)] = 3277,
  [SMALL_STATE(101)] = 3302,
  [SMALL_STATE(102)] = 3327,
  [SMALL_STATE(103)] = 3349,
  [SMALL_STATE(104)] = 3377,
  [SMALL_STATE(105)] = 3415,
  [SMALL_STATE(106)] = 3437,
  [SMALL_STATE(107)] = 3459,
  [SMALL_STATE(108)] = 3485,
  [SMALL_STATE(109)] = 3509,
  [SMALL_STATE(110)] = 3537,
  [SMALL_STATE(111)] = 3559,
  [SMALL_STATE(112)] = 3581,
  [SMALL_STATE(113)] = 3619,
  [SMALL_STATE(114)] = 3641,
  [SMALL_STATE(115)] = 3667,
  [SMALL_STATE(116)] = 3695,
  [SMALL_STATE(117)] = 3723,
  [SMALL_STATE(118)] = 3745,
  [SMALL_STATE(119)] = 3773,
  [SMALL_STATE(120)] = 3799,
  [SMALL_STATE(121)] = 3827,
  [SMALL_STATE(122)] = 3855,
  [SMALL_STATE(123)] = 3877,
  [SMALL_STATE(124)] = 3903,
  [SMALL_STATE(125)] = 3924,
  [SMALL_STATE(126)] = 3949,
  [SMALL_STATE(127)] = 3974,
  [SMALL_STATE(128)] = 3999,
  [SMALL_STATE(129)] = 4024,
  [SMALL_STATE(130)] = 4049,
  [SMALL_STATE(131)] = 4074,
  [SMALL_STATE(132)] = 4099,
  [SMALL_STATE(133)] = 4124,
  [SMALL_STATE(134)] = 4145,
  [SMALL_STATE(135)] = 4170,
  [SMALL_STATE(136)] = 4195,
  [SMALL_STATE(137)] = 4220,
  [SMALL_STATE(138)] = 4245,
  [SMALL_STATE(139)] = 4266,
  [SMALL_STATE(140)] = 4287,
  [SMALL_STATE(141)] = 4312,
  [SMALL_STATE(142)] = 4337,
  [SMALL_STATE(143)] = 4362,
  [SMALL_STATE(144)] = 4387,
  [SMALL_STATE(145)] = 4412,
  [SMALL_STATE(146)] = 4435,
  [SMALL_STATE(147)] = 4460,
  [SMALL_STATE(148)] = 4485,
  [SMALL_STATE(149)] = 4510,
  [SMALL_STATE(150)] = 4533,
  [SMALL_STATE(151)] = 4554,
  [SMALL_STATE(152)] = 4579,
  [SMALL_STATE(153)] = 4604,
  [SMALL_STATE(154)] = 4629,
  [SMALL_STATE(155)] = 4654,
  [SMALL_STATE(156)] = 4679,
  [SMALL_STATE(157)] = 4704,
  [SMALL_STATE(158)] = 4729,
  [SMALL_STATE(159)] = 4750,
  [SMALL_STATE(160)] = 4775,
  [SMALL_STATE(161)] = 4800,
  [SMALL_STATE(162)] = 4821,
  [SMALL_STATE(163)] = 4842,
  [SMALL_STATE(164)] = 4863,
  [SMALL_STATE(165)] = 4884,
  [SMALL_STATE(166)] = 4909,
  [SMALL_STATE(167)] = 4930,
  [SMALL_STATE(168)] = 4955,
  [SMALL_STATE(169)] = 4980,
  [SMALL_STATE(170)] = 5001,
  [SMALL_STATE(171)] = 5026,
  [SMALL_STATE(172)] = 5051,
  [SMALL_STATE(173)] = 5076,
  [SMALL_STATE(174)] = 5101,
  [SMALL_STATE(175)] = 5126,
  [SMALL_STATE(176)] = 5147,
  [SMALL_STATE(177)] = 5172,
  [SMALL_STATE(178)] = 5193,
  [SMALL_STATE(179)] = 5214,
  [SMALL_STATE(180)] = 5235,
  [SMALL_STATE(181)] = 5260,
  [SMALL_STATE(182)] = 5281,
  [SMALL_STATE(183)] = 5306,
  [SMALL_STATE(184)] = 5331,
  [SMALL_STATE(185)] = 5356,
  [SMALL_STATE(186)] = 5381,
  [SMALL_STATE(187)] = 5406,
  [SMALL_STATE(188)] = 5431,
  [SMALL_STATE(189)] = 5456,
  [SMALL_STATE(190)] = 5481,
  [SMALL_STATE(191)] = 5506,
  [SMALL_STATE(192)] = 5531,
  [SMALL_STATE(193)] = 5556,
  [SMALL_STATE(194)] = 5577,
  [SMALL_STATE(195)] = 5602,
  [SMALL_STATE(196)] = 5627,
  [SMALL_STATE(197)] = 5652,
  [SMALL_STATE(198)] = 5677,
  [SMALL_STATE(199)] = 5712,
  [SMALL_STATE(200)] = 5737,
  [SMALL_STATE(201)] = 5762,
  [SMALL_STATE(202)] = 5784,
  [SMALL_STATE(203)] = 5804,
  [SMALL_STATE(204)] = 5824,
  [SMALL_STATE(205)] = 5844,
  [SMALL_STATE(206)] = 5866,
  [SMALL_STATE(207)] = 5888,
  [SMALL_STATE(208)] = 5910,
  [SMALL_STATE(209)] = 5930,
  [SMALL_STATE(210)] = 5950,
  [SMALL_STATE(211)] = 5972,
  [SMALL_STATE(212)] = 5994,
  [SMALL_STATE(213)] = 6014,
  [SMALL_STATE(214)] = 6034,
  [SMALL_STATE(215)] = 6056,
  [SMALL_STATE(216)] = 6076,
  [SMALL_STATE(217)] = 6098,
  [SMALL_STATE(218)] = 6120,
  [SMALL_STATE(219)] = 6140,
  [SMALL_STATE(220)] = 6160,
  [SMALL_STATE(221)] = 6182,
  [SMALL_STATE(222)] = 6204,
  [SMALL_STATE(223)] = 6226,
  [SMALL_STATE(224)] = 6248,
  [SMALL_STATE(225)] = 6270,
  [SMALL_STATE(226)] = 6292,
  [SMALL_STATE(227)] = 6314,
  [SMALL_STATE(228)] = 6336,
  [SMALL_STATE(229)] = 6358,
  [SMALL_STATE(230)] = 6380,
  [SMALL_STATE(231)] = 6402,
  [SMALL_STATE(232)] = 6424,
  [SMALL_STATE(233)] = 6446,
  [SMALL_STATE(234)] = 6468,
  [SMALL_STATE(235)] = 6490,
  [SMALL_STATE(236)] = 6512,
  [SMALL_STATE(237)] = 6534,
  [SMALL_STATE(238)] = 6556,
  [SMALL_STATE(239)] = 6576,
  [SMALL_STATE(240)] = 6596,
  [SMALL_STATE(241)] = 6615,
  [SMALL_STATE(242)] = 6634,
  [SMALL_STATE(243)] = 6653,
  [SMALL_STATE(244)] = 6672,
  [SMALL_STATE(245)] = 6691,
  [SMALL_STATE(246)] = 6710,
  [SMALL_STATE(247)] = 6729,
  [SMALL_STATE(248)] = 6748,
  [SMALL_STATE(249)] = 6767,
  [SMALL_STATE(250)] = 6786,
  [SMALL_STATE(251)] = 6805,
  [SMALL_STATE(252)] = 6824,
  [SMALL_STATE(253)] = 6843,
  [SMALL_STATE(254)] = 6862,
  [SMALL_STATE(255)] = 6881,
  [SMALL_STATE(256)] = 6900,
  [SMALL_STATE(257)] = 6919,
  [SMALL_STATE(258)] = 6938,
  [SMALL_STATE(259)] = 6957,
  [SMALL_STATE(260)] = 6976,
  [SMALL_STATE(261)] = 6995,
  [SMALL_STATE(262)] = 7014,
  [SMALL_STATE(263)] = 7033,
  [SMALL_STATE(264)] = 7052,
  [SMALL_STATE(265)] = 7071,
  [SMALL_STATE(266)] = 7090,
  [SMALL_STATE(267)] = 7109,
  [SMALL_STATE(268)] = 7128,
  [SMALL_STATE(269)] = 7147,
  [SMALL_STATE(270)] = 7166,
  [SMALL_STATE(271)] = 7185,
  [SMALL_STATE(272)] = 7204,
  [SMALL_STATE(273)] = 7223,
  [SMALL_STATE(274)] = 7242,
  [SMALL_STATE(275)] = 7261,
  [SMALL_STATE(276)] = 7280,
  [SMALL_STATE(277)] = 7299,
  [SMALL_STATE(278)] = 7318,
  [SMALL_STATE(279)] = 7339,
  [SMALL_STATE(280)] = 7358,
  [SMALL_STATE(281)] = 7377,
  [SMALL_STATE(282)] = 7396,
  [SMALL_STATE(283)] = 7415,
  [SMALL_STATE(284)] = 7434,
  [SMALL_STATE(285)] = 7453,
  [SMALL_STATE(286)] = 7472,
  [SMALL_STATE(287)] = 7491,
  [SMALL_STATE(288)] = 7510,
  [SMALL_STATE(289)] = 7529,
  [SMALL_STATE(290)] = 7548,
  [SMALL_STATE(291)] = 7567,
  [SMALL_STATE(292)] = 7586,
  [SMALL_STATE(293)] = 7605,
  [SMALL_STATE(294)] = 7624,
  [SMALL_STATE(295)] = 7643,
  [SMALL_STATE(296)] = 7662,
  [SMALL_STATE(297)] = 7681,
  [SMALL_STATE(298)] = 7700,
  [SMALL_STATE(299)] = 7719,
  [SMALL_STATE(300)] = 7738,
  [SMALL_STATE(301)] = 7757,
  [SMALL_STATE(302)] = 7776,
  [SMALL_STATE(303)] = 7795,
  [SMALL_STATE(304)] = 7814,
  [SMALL_STATE(305)] = 7833,
  [SMALL_STATE(306)] = 7852,
  [SMALL_STATE(307)] = 7871,
  [SMALL_STATE(308)] = 7890,
  [SMALL_STATE(309)] = 7909,
  [SMALL_STATE(310)] = 7928,
  [SMALL_STATE(311)] = 7947,
  [SMALL_STATE(312)] = 7966,
  [SMALL_STATE(313)] = 7985,
  [SMALL_STATE(314)] = 8004,
  [SMALL_STATE(315)] = 8023,
  [SMALL_STATE(316)] = 8042,
  [SMALL_STATE(317)] = 8061,
  [SMALL_STATE(318)] = 8080,
  [SMALL_STATE(319)] = 8099,
  [SMALL_STATE(320)] = 8118,
  [SMALL_STATE(321)] = 8137,
  [SMALL_STATE(322)] = 8156,
  [SMALL_STATE(323)] = 8175,
  [SMALL_STATE(324)] = 8194,
  [SMALL_STATE(325)] = 8213,
  [SMALL_STATE(326)] = 8232,
  [SMALL_STATE(327)] = 8251,
  [SMALL_STATE(328)] = 8270,
  [SMALL_STATE(329)] = 8289,
  [SMALL_STATE(330)] = 8308,
  [SMALL_STATE(331)] = 8327,
  [SMALL_STATE(332)] = 8346,
  [SMALL_STATE(333)] = 8365,
  [SMALL_STATE(334)] = 8384,
  [SMALL_STATE(335)] = 8403,
  [SMALL_STATE(336)] = 8422,
  [SMALL_STATE(337)] = 8441,
  [SMALL_STATE(338)] = 8460,
  [SMALL_STATE(339)] = 8479,
  [SMALL_STATE(340)] = 8498,
  [SMALL_STATE(341)] = 8517,
  [SMALL_STATE(342)] = 8536,
  [SMALL_STATE(343)] = 8555,
  [SMALL_STATE(344)] = 8574,
  [SMALL_STATE(345)] = 8593,
  [SMALL_STATE(346)] = 8612,
  [SMALL_STATE(347)] = 8631,
  [SMALL_STATE(348)] = 8650,
  [SMALL_STATE(349)] = 8669,
  [SMALL_STATE(350)] = 8688,
  [SMALL_STATE(351)] = 8707,
  [SMALL_STATE(352)] = 8726,
  [SMALL_STATE(353)] = 8745,
  [SMALL_STATE(354)] = 8764,
  [SMALL_STATE(355)] = 8783,
  [SMALL_STATE(356)] = 8802,
  [SMALL_STATE(357)] = 8821,
  [SMALL_STATE(358)] = 8840,
  [SMALL_STATE(359)] = 8859,
  [SMALL_STATE(360)] = 8878,
  [SMALL_STATE(361)] = 8897,
  [SMALL_STATE(362)] = 8916,
  [SMALL_STATE(363)] = 8935,
  [SMALL_STATE(364)] = 8954,
  [SMALL_STATE(365)] = 8973,
  [SMALL_STATE(366)] = 8992,
  [SMALL_STATE(367)] = 9011,
  [SMALL_STATE(368)] = 9030,
  [SMALL_STATE(369)] = 9049,
  [SMALL_STATE(370)] = 9068,
  [SMALL_STATE(371)] = 9087,
  [SMALL_STATE(372)] = 9106,
  [SMALL_STATE(373)] = 9125,
  [SMALL_STATE(374)] = 9144,
  [SMALL_STATE(375)] = 9163,
  [SMALL_STATE(376)] = 9182,
  [SMALL_STATE(377)] = 9201,
  [SMALL_STATE(378)] = 9220,
  [SMALL_STATE(379)] = 9239,
  [SMALL_STATE(380)] = 9258,
  [SMALL_STATE(381)] = 9277,
  [SMALL_STATE(382)] = 9296,
  [SMALL_STATE(383)] = 9315,
  [SMALL_STATE(384)] = 9334,
  [SMALL_STATE(385)] = 9353,
  [SMALL_STATE(386)] = 9372,
  [SMALL_STATE(387)] = 9391,
  [SMALL_STATE(388)] = 9410,
  [SMALL_STATE(389)] = 9429,
  [SMALL_STATE(390)] = 9448,
  [SMALL_STATE(391)] = 9467,
  [SMALL_STATE(392)] = 9486,
  [SMALL_STATE(393)] = 9521,
  [SMALL_STATE(394)] = 9540,
  [SMALL_STATE(395)] = 9559,
  [SMALL_STATE(396)] = 9578,
  [SMALL_STATE(397)] = 9597,
  [SMALL_STATE(398)] = 9616,
  [SMALL_STATE(399)] = 9635,
  [SMALL_STATE(400)] = 9654,
  [SMALL_STATE(401)] = 9673,
  [SMALL_STATE(402)] = 9692,
  [SMALL_STATE(403)] = 9711,
  [SMALL_STATE(404)] = 9739,
  [SMALL_STATE(405)] = 9767,
  [SMALL_STATE(406)] = 9795,
  [SMALL_STATE(407)] = 9823,
  [SMALL_STATE(408)] = 9851,
  [SMALL_STATE(409)] = 9869,
  [SMALL_STATE(410)] = 9897,
  [SMALL_STATE(411)] = 9925,
  [SMALL_STATE(412)] = 9953,
  [SMALL_STATE(413)] = 9981,
  [SMALL_STATE(414)] = 10014,
  [SMALL_STATE(415)] = 10045,
  [SMALL_STATE(416)] = 10073,
  [SMALL_STATE(417)] = 10098,
  [SMALL_STATE(418)] = 10123,
  [SMALL_STATE(419)] = 10146,
  [SMALL_STATE(420)] = 10166,
  [SMALL_STATE(421)] = 10200,
  [SMALL_STATE(422)] = 10222,
  [SMALL_STATE(423)] = 10248,
  [SMALL_STATE(424)] = 10270,
  [SMALL_STATE(425)] = 10289,
  [SMALL_STATE(426)] = 10308,
  [SMALL_STATE(427)] = 10327,
  [SMALL_STATE(428)] = 10344,
  [SMALL_STATE(429)] = 10367,
  [SMALL_STATE(430)] = 10386,
  [SMALL_STATE(431)] = 10405,
  [SMALL_STATE(432)] = 10424,
  [SMALL_STATE(433)] = 10443,
  [SMALL_STATE(434)] = 10462,
  [SMALL_STATE(435)] = 10485,
  [SMALL_STATE(436)] = 10504,
  [SMALL_STATE(437)] = 10523,
  [SMALL_STATE(438)] = 10540,
  [SMALL_STATE(439)] = 10571,
  [SMALL_STATE(440)] = 10590,
  [SMALL_STATE(441)] = 10610,
  [SMALL_STATE(442)] = 10631,
  [SMALL_STATE(443)] = 10652,
  [SMALL_STATE(444)] = 10673,
  [SMALL_STATE(445)] = 10694,
  [SMALL_STATE(446)] = 10715,
  [SMALL_STATE(447)] = 10735,
  [SMALL_STATE(448)] = 10757,
  [SMALL_STATE(449)] = 10771,
  [SMALL_STATE(450)] = 10793,
  [SMALL_STATE(451)] = 10815,
  [SMALL_STATE(452)] = 10835,
  [SMALL_STATE(453)] = 10857,
  [SMALL_STATE(454)] = 10875,
  [SMALL_STATE(455)] = 10889,
  [SMALL_STATE(456)] = 10907,
  [SMALL_STATE(457)] = 10918,
  [SMALL_STATE(458)] = 10937,
  [SMALL_STATE(459)] = 10954,
  [SMALL_STATE(460)] = 10973,
  [SMALL_STATE(461)] = 10987,
  [SMALL_STATE(462)] = 10999,
  [SMALL_STATE(463)] = 11015,
  [SMALL_STATE(464)] = 11023,
  [SMALL_STATE(465)] = 11035,
  [SMALL_STATE(466)] = 11047,
  [SMALL_STATE(467)] = 11061,
  [SMALL_STATE(468)] = 11069,
  [SMALL_STATE(469)] = 11085,
  [SMALL_STATE(470)] = 11093,
  [SMALL_STATE(471)] = 11107,
  [SMALL_STATE(472)] = 11123,
  [SMALL_STATE(473)] = 11139,
  [SMALL_STATE(474)] = 11155,
  [SMALL_STATE(475)] = 11171,
  [SMALL_STATE(476)] = 11185,
  [SMALL_STATE(477)] = 11201,
  [SMALL_STATE(478)] = 11217,
  [SMALL_STATE(479)] = 11229,
  [SMALL_STATE(480)] = 11237,
  [SMALL_STATE(481)] = 11245,
  [SMALL_STATE(482)] = 11253,
  [SMALL_STATE(483)] = 11261,
  [SMALL_STATE(484)] = 11277,
  [SMALL_STATE(485)] = 11293,
  [SMALL_STATE(486)] = 11300,
  [SMALL_STATE(487)] = 11313,
  [SMALL_STATE(488)] = 11326,
  [SMALL_STATE(489)] = 11339,
  [SMALL_STATE(490)] = 11352,
  [SMALL_STATE(491)] = 11365,
  [SMALL_STATE(492)] = 11378,
  [SMALL_STATE(493)] = 11391,
  [SMALL_STATE(494)] = 11404,
  [SMALL_STATE(495)] = 11417,
  [SMALL_STATE(496)] = 11430,
  [SMALL_STATE(497)] = 11443,
  [SMALL_STATE(498)] = 11456,
  [SMALL_STATE(499)] = 11469,
  [SMALL_STATE(500)] = 11482,
  [SMALL_STATE(501)] = 11495,
  [SMALL_STATE(502)] = 11508,
  [SMALL_STATE(503)] = 11521,
  [SMALL_STATE(504)] = 11534,
  [SMALL_STATE(505)] = 11547,
  [SMALL_STATE(506)] = 11560,
  [SMALL_STATE(507)] = 11571,
  [SMALL_STATE(508)] = 11584,
  [SMALL_STATE(509)] = 11597,
  [SMALL_STATE(510)] = 11610,
  [SMALL_STATE(511)] = 11623,
  [SMALL_STATE(512)] = 11636,
  [SMALL_STATE(513)] = 11649,
  [SMALL_STATE(514)] = 11662,
  [SMALL_STATE(515)] = 11675,
  [SMALL_STATE(516)] = 11682,
  [SMALL_STATE(517)] = 11695,
  [SMALL_STATE(518)] = 11708,
  [SMALL_STATE(519)] = 11721,
  [SMALL_STATE(520)] = 11734,
  [SMALL_STATE(521)] = 11745,
  [SMALL_STATE(522)] = 11758,
  [SMALL_STATE(523)] = 11771,
  [SMALL_STATE(524)] = 11780,
  [SMALL_STATE(525)] = 11793,
  [SMALL_STATE(526)] = 11806,
  [SMALL_STATE(527)] = 11819,
  [SMALL_STATE(528)] = 11832,
  [SMALL_STATE(529)] = 11845,
  [SMALL_STATE(530)] = 11858,
  [SMALL_STATE(531)] = 11871,
  [SMALL_STATE(532)] = 11884,
  [SMALL_STATE(533)] = 11897,
  [SMALL_STATE(534)] = 11910,
  [SMALL_STATE(535)] = 11923,
  [SMALL_STATE(536)] = 11936,
  [SMALL_STATE(537)] = 11947,
  [SMALL_STATE(538)] = 11960,
  [SMALL_STATE(539)] = 11970,
  [SMALL_STATE(540)] = 11980,
  [SMALL_STATE(541)] = 11990,
  [SMALL_STATE(542)] = 12000,
  [SMALL_STATE(543)] = 12010,
  [SMALL_STATE(544)] = 12020,
  [SMALL_STATE(545)] = 12030,
  [SMALL_STATE(546)] = 12040,
  [SMALL_STATE(547)] = 12048,
  [SMALL_STATE(548)] = 12058,
  [SMALL_STATE(549)] = 12068,
  [SMALL_STATE(550)] = 12076,
  [SMALL_STATE(551)] = 12086,
  [SMALL_STATE(552)] = 12094,
  [SMALL_STATE(553)] = 12104,
  [SMALL_STATE(554)] = 12114,
  [SMALL_STATE(555)] = 12124,
  [SMALL_STATE(556)] = 12134,
  [SMALL_STATE(557)] = 12144,
  [SMALL_STATE(558)] = 12154,
  [SMALL_STATE(559)] = 12164,
  [SMALL_STATE(560)] = 12174,
  [SMALL_STATE(561)] = 12184,
  [SMALL_STATE(562)] = 12194,
  [SMALL_STATE(563)] = 12204,
  [SMALL_STATE(564)] = 12214,
  [SMALL_STATE(565)] = 12224,
  [SMALL_STATE(566)] = 12234,
  [SMALL_STATE(567)] = 12244,
  [SMALL_STATE(568)] = 12254,
  [SMALL_STATE(569)] = 12264,
  [SMALL_STATE(570)] = 12274,
  [SMALL_STATE(571)] = 12284,
  [SMALL_STATE(572)] = 12294,
  [SMALL_STATE(573)] = 12304,
  [SMALL_STATE(574)] = 12314,
  [SMALL_STATE(575)] = 12324,
  [SMALL_STATE(576)] = 12334,
  [SMALL_STATE(577)] = 12344,
  [SMALL_STATE(578)] = 12354,
  [SMALL_STATE(579)] = 12364,
  [SMALL_STATE(580)] = 12374,
  [SMALL_STATE(581)] = 12384,
  [SMALL_STATE(582)] = 12394,
  [SMALL_STATE(583)] = 12404,
  [SMALL_STATE(584)] = 12414,
  [SMALL_STATE(585)] = 12424,
  [SMALL_STATE(586)] = 12434,
  [SMALL_STATE(587)] = 12444,
  [SMALL_STATE(588)] = 12454,
  [SMALL_STATE(589)] = 12464,
  [SMALL_STATE(590)] = 12474,
  [SMALL_STATE(591)] = 12484,
  [SMALL_STATE(592)] = 12494,
  [SMALL_STATE(593)] = 12504,
  [SMALL_STATE(594)] = 12514,
  [SMALL_STATE(595)] = 12524,
  [SMALL_STATE(596)] = 12534,
  [SMALL_STATE(597)] = 12544,
  [SMALL_STATE(598)] = 12554,
  [SMALL_STATE(599)] = 12564,
  [SMALL_STATE(600)] = 12574,
  [SMALL_STATE(601)] = 12584,
  [SMALL_STATE(602)] = 12594,
  [SMALL_STATE(603)] = 12604,
  [SMALL_STATE(604)] = 12614,
  [SMALL_STATE(605)] = 12624,
  [SMALL_STATE(606)] = 12634,
  [SMALL_STATE(607)] = 12644,
  [SMALL_STATE(608)] = 12654,
  [SMALL_STATE(609)] = 12664,
  [SMALL_STATE(610)] = 12674,
  [SMALL_STATE(611)] = 12684,
  [SMALL_STATE(612)] = 12694,
  [SMALL_STATE(613)] = 12704,
  [SMALL_STATE(614)] = 12714,
  [SMALL_STATE(615)] = 12724,
  [SMALL_STATE(616)] = 12734,
  [SMALL_STATE(617)] = 12744,
  [SMALL_STATE(618)] = 12754,
  [SMALL_STATE(619)] = 12764,
  [SMALL_STATE(620)] = 12774,
  [SMALL_STATE(621)] = 12784,
  [SMALL_STATE(622)] = 12794,
  [SMALL_STATE(623)] = 12804,
  [SMALL_STATE(624)] = 12810,
  [SMALL_STATE(625)] = 12818,
  [SMALL_STATE(626)] = 12828,
  [SMALL_STATE(627)] = 12838,
  [SMALL_STATE(628)] = 12848,
  [SMALL_STATE(629)] = 12858,
  [SMALL_STATE(630)] = 12868,
  [SMALL_STATE(631)] = 12878,
  [SMALL_STATE(632)] = 12888,
  [SMALL_STATE(633)] = 12898,
  [SMALL_STATE(634)] = 12908,
  [SMALL_STATE(635)] = 12918,
  [SMALL_STATE(636)] = 12928,
  [SMALL_STATE(637)] = 12938,
  [SMALL_STATE(638)] = 12948,
  [SMALL_STATE(639)] = 12958,
  [SMALL_STATE(640)] = 12968,
  [SMALL_STATE(641)] = 12978,
  [SMALL_STATE(642)] = 12988,
  [SMALL_STATE(643)] = 12998,
  [SMALL_STATE(644)] = 13008,
  [SMALL_STATE(645)] = 13018,
  [SMALL_STATE(646)] = 13028,
  [SMALL_STATE(647)] = 13034,
  [SMALL_STATE(648)] = 13044,
  [SMALL_STATE(649)] = 13054,
  [SMALL_STATE(650)] = 13064,
  [SMALL_STATE(651)] = 13074,
  [SMALL_STATE(652)] = 13084,
  [SMALL_STATE(653)] = 13094,
  [SMALL_STATE(654)] = 13104,
  [SMALL_STATE(655)] = 13114,
  [SMALL_STATE(656)] = 13124,
  [SMALL_STATE(657)] = 13134,
  [SMALL_STATE(658)] = 13144,
  [SMALL_STATE(659)] = 13154,
  [SMALL_STATE(660)] = 13164,
  [SMALL_STATE(661)] = 13174,
  [SMALL_STATE(662)] = 13184,
  [SMALL_STATE(663)] = 13194,
  [SMALL_STATE(664)] = 13204,
  [SMALL_STATE(665)] = 13214,
  [SMALL_STATE(666)] = 13224,
  [SMALL_STATE(667)] = 13234,
  [SMALL_STATE(668)] = 13244,
  [SMALL_STATE(669)] = 13254,
  [SMALL_STATE(670)] = 13264,
  [SMALL_STATE(671)] = 13274,
  [SMALL_STATE(672)] = 13284,
  [SMALL_STATE(673)] = 13294,
  [SMALL_STATE(674)] = 13304,
  [SMALL_STATE(675)] = 13314,
  [SMALL_STATE(676)] = 13322,
  [SMALL_STATE(677)] = 13330,
  [SMALL_STATE(678)] = 13340,
  [SMALL_STATE(679)] = 13350,
  [SMALL_STATE(680)] = 13360,
  [SMALL_STATE(681)] = 13370,
  [SMALL_STATE(682)] = 13380,
  [SMALL_STATE(683)] = 13390,
  [SMALL_STATE(684)] = 13400,
  [SMALL_STATE(685)] = 13410,
  [SMALL_STATE(686)] = 13420,
  [SMALL_STATE(687)] = 13430,
  [SMALL_STATE(688)] = 13440,
  [SMALL_STATE(689)] = 13450,
  [SMALL_STATE(690)] = 13460,
  [SMALL_STATE(691)] = 13470,
  [SMALL_STATE(692)] = 13480,
  [SMALL_STATE(693)] = 13490,
  [SMALL_STATE(694)] = 13500,
  [SMALL_STATE(695)] = 13507,
  [SMALL_STATE(696)] = 13512,
  [SMALL_STATE(697)] = 13519,
  [SMALL_STATE(698)] = 13524,
  [SMALL_STATE(699)] = 13531,
  [SMALL_STATE(700)] = 13538,
  [SMALL_STATE(701)] = 13545,
  [SMALL_STATE(702)] = 13552,
  [SMALL_STATE(703)] = 13559,
  [SMALL_STATE(704)] = 13566,
  [SMALL_STATE(705)] = 13573,
  [SMALL_STATE(706)] = 13580,
  [SMALL_STATE(707)] = 13585,
  [SMALL_STATE(708)] = 13592,
  [SMALL_STATE(709)] = 13599,
  [SMALL_STATE(710)] = 13606,
  [SMALL_STATE(711)] = 13613,
  [SMALL_STATE(712)] = 13620,
  [SMALL_STATE(713)] = 13627,
  [SMALL_STATE(714)] = 13634,
  [SMALL_STATE(715)] = 13639,
  [SMALL_STATE(716)] = 13646,
  [SMALL_STATE(717)] = 13651,
  [SMALL_STATE(718)] = 13658,
  [SMALL_STATE(719)] = 13665,
  [SMALL_STATE(720)] = 13670,
  [SMALL_STATE(721)] = 13675,
  [SMALL_STATE(722)] = 13682,
  [SMALL_STATE(723)] = 13689,
  [SMALL_STATE(724)] = 13694,
  [SMALL_STATE(725)] = 13699,
  [SMALL_STATE(726)] = 13706,
  [SMALL_STATE(727)] = 13713,
  [SMALL_STATE(728)] = 13720,
  [SMALL_STATE(729)] = 13725,
  [SMALL_STATE(730)] = 13732,
  [SMALL_STATE(731)] = 13739,
  [SMALL_STATE(732)] = 13744,
  [SMALL_STATE(733)] = 13751,
  [SMALL_STATE(734)] = 13758,
  [SMALL_STATE(735)] = 13765,
  [SMALL_STATE(736)] = 13770,
  [SMALL_STATE(737)] = 13777,
  [SMALL_STATE(738)] = 13784,
  [SMALL_STATE(739)] = 13791,
  [SMALL_STATE(740)] = 13798,
  [SMALL_STATE(741)] = 13803,
  [SMALL_STATE(742)] = 13810,
  [SMALL_STATE(743)] = 13817,
  [SMALL_STATE(744)] = 13824,
  [SMALL_STATE(745)] = 13831,
  [SMALL_STATE(746)] = 13836,
  [SMALL_STATE(747)] = 13843,
  [SMALL_STATE(748)] = 13850,
  [SMALL_STATE(749)] = 13857,
  [SMALL_STATE(750)] = 13864,
  [SMALL_STATE(751)] = 13871,
  [SMALL_STATE(752)] = 13878,
  [SMALL_STATE(753)] = 13885,
  [SMALL_STATE(754)] = 13890,
  [SMALL_STATE(755)] = 13897,
  [SMALL_STATE(756)] = 13904,
  [SMALL_STATE(757)] = 13911,
  [SMALL_STATE(758)] = 13918,
  [SMALL_STATE(759)] = 13925,
  [SMALL_STATE(760)] = 13932,
  [SMALL_STATE(761)] = 13937,
  [SMALL_STATE(762)] = 13944,
  [SMALL_STATE(763)] = 13951,
  [SMALL_STATE(764)] = 13958,
  [SMALL_STATE(765)] = 13965,
  [SMALL_STATE(766)] = 13970,
  [SMALL_STATE(767)] = 13975,
  [SMALL_STATE(768)] = 13980,
  [SMALL_STATE(769)] = 13987,
  [SMALL_STATE(770)] = 13994,
  [SMALL_STATE(771)] = 14001,
  [SMALL_STATE(772)] = 14006,
  [SMALL_STATE(773)] = 14011,
  [SMALL_STATE(774)] = 14018,
  [SMALL_STATE(775)] = 14025,
  [SMALL_STATE(776)] = 14032,
  [SMALL_STATE(777)] = 14037,
  [SMALL_STATE(778)] = 14042,
  [SMALL_STATE(779)] = 14049,
  [SMALL_STATE(780)] = 14054,
  [SMALL_STATE(781)] = 14061,
  [SMALL_STATE(782)] = 14068,
  [SMALL_STATE(783)] = 14075,
  [SMALL_STATE(784)] = 14082,
  [SMALL_STATE(785)] = 14087,
  [SMALL_STATE(786)] = 14094,
  [SMALL_STATE(787)] = 14101,
  [SMALL_STATE(788)] = 14108,
  [SMALL_STATE(789)] = 14115,
  [SMALL_STATE(790)] = 14122,
  [SMALL_STATE(791)] = 14129,
  [SMALL_STATE(792)] = 14136,
  [SMALL_STATE(793)] = 14143,
  [SMALL_STATE(794)] = 14150,
  [SMALL_STATE(795)] = 14157,
  [SMALL_STATE(796)] = 14164,
  [SMALL_STATE(797)] = 14171,
  [SMALL_STATE(798)] = 14178,
  [SMALL_STATE(799)] = 14185,
  [SMALL_STATE(800)] = 14192,
  [SMALL_STATE(801)] = 14199,
  [SMALL_STATE(802)] = 14204,
  [SMALL_STATE(803)] = 14209,
  [SMALL_STATE(804)] = 14216,
  [SMALL_STATE(805)] = 14223,
  [SMALL_STATE(806)] = 14228,
  [SMALL_STATE(807)] = 14235,
  [SMALL_STATE(808)] = 14242,
  [SMALL_STATE(809)] = 14249,
  [SMALL_STATE(810)] = 14254,
  [SMALL_STATE(811)] = 14261,
  [SMALL_STATE(812)] = 14268,
  [SMALL_STATE(813)] = 14275,
  [SMALL_STATE(814)] = 14282,
  [SMALL_STATE(815)] = 14289,
  [SMALL_STATE(816)] = 14296,
  [SMALL_STATE(817)] = 14303,
  [SMALL_STATE(818)] = 14308,
  [SMALL_STATE(819)] = 14315,
  [SMALL_STATE(820)] = 14322,
  [SMALL_STATE(821)] = 14329,
  [SMALL_STATE(822)] = 14336,
  [SMALL_STATE(823)] = 14343,
  [SMALL_STATE(824)] = 14350,
  [SMALL_STATE(825)] = 14357,
  [SMALL_STATE(826)] = 14364,
  [SMALL_STATE(827)] = 14371,
  [SMALL_STATE(828)] = 14376,
  [SMALL_STATE(829)] = 14383,
  [SMALL_STATE(830)] = 14390,
  [SMALL_STATE(831)] = 14397,
  [SMALL_STATE(832)] = 14404,
  [SMALL_STATE(833)] = 14411,
  [SMALL_STATE(834)] = 14418,
  [SMALL_STATE(835)] = 14425,
  [SMALL_STATE(836)] = 14432,
  [SMALL_STATE(837)] = 14439,
  [SMALL_STATE(838)] = 14444,
  [SMALL_STATE(839)] = 14449,
  [SMALL_STATE(840)] = 14454,
  [SMALL_STATE(841)] = 14458,
  [SMALL_STATE(842)] = 14462,
  [SMALL_STATE(843)] = 14466,
  [SMALL_STATE(844)] = 14470,
  [SMALL_STATE(845)] = 14474,
  [SMALL_STATE(846)] = 14478,
  [SMALL_STATE(847)] = 14482,
  [SMALL_STATE(848)] = 14486,
  [SMALL_STATE(849)] = 14490,
  [SMALL_STATE(850)] = 14494,
  [SMALL_STATE(851)] = 14498,
  [SMALL_STATE(852)] = 14502,
  [SMALL_STATE(853)] = 14506,
  [SMALL_STATE(854)] = 14510,
  [SMALL_STATE(855)] = 14514,
  [SMALL_STATE(856)] = 14518,
  [SMALL_STATE(857)] = 14522,
  [SMALL_STATE(858)] = 14526,
  [SMALL_STATE(859)] = 14530,
  [SMALL_STATE(860)] = 14534,
  [SMALL_STATE(861)] = 14538,
  [SMALL_STATE(862)] = 14542,
  [SMALL_STATE(863)] = 14546,
  [SMALL_STATE(864)] = 14550,
  [SMALL_STATE(865)] = 14554,
  [SMALL_STATE(866)] = 14558,
  [SMALL_STATE(867)] = 14562,
  [SMALL_STATE(868)] = 14566,
  [SMALL_STATE(869)] = 14570,
  [SMALL_STATE(870)] = 14574,
  [SMALL_STATE(871)] = 14578,
  [SMALL_STATE(872)] = 14582,
  [SMALL_STATE(873)] = 14586,
  [SMALL_STATE(874)] = 14590,
  [SMALL_STATE(875)] = 14594,
  [SMALL_STATE(876)] = 14598,
  [SMALL_STATE(877)] = 14602,
  [SMALL_STATE(878)] = 14606,
  [SMALL_STATE(879)] = 14610,
  [SMALL_STATE(880)] = 14614,
  [SMALL_STATE(881)] = 14618,
  [SMALL_STATE(882)] = 14622,
  [SMALL_STATE(883)] = 14626,
  [SMALL_STATE(884)] = 14630,
  [SMALL_STATE(885)] = 14634,
  [SMALL_STATE(886)] = 14638,
  [SMALL_STATE(887)] = 14642,
  [SMALL_STATE(888)] = 14646,
  [SMALL_STATE(889)] = 14650,
  [SMALL_STATE(890)] = 14654,
  [SMALL_STATE(891)] = 14658,
  [SMALL_STATE(892)] = 14662,
  [SMALL_STATE(893)] = 14666,
  [SMALL_STATE(894)] = 14670,
  [SMALL_STATE(895)] = 14674,
  [SMALL_STATE(896)] = 14678,
  [SMALL_STATE(897)] = 14682,
  [SMALL_STATE(898)] = 14686,
  [SMALL_STATE(899)] = 14690,
  [SMALL_STATE(900)] = 14694,
  [SMALL_STATE(901)] = 14698,
  [SMALL_STATE(902)] = 14702,
  [SMALL_STATE(903)] = 14706,
  [SMALL_STATE(904)] = 14710,
  [SMALL_STATE(905)] = 14714,
  [SMALL_STATE(906)] = 14718,
  [SMALL_STATE(907)] = 14722,
  [SMALL_STATE(908)] = 14726,
  [SMALL_STATE(909)] = 14730,
  [SMALL_STATE(910)] = 14734,
  [SMALL_STATE(911)] = 14738,
  [SMALL_STATE(912)] = 14742,
  [SMALL_STATE(913)] = 14746,
  [SMALL_STATE(914)] = 14750,
  [SMALL_STATE(915)] = 14754,
  [SMALL_STATE(916)] = 14758,
  [SMALL_STATE(917)] = 14762,
  [SMALL_STATE(918)] = 14766,
  [SMALL_STATE(919)] = 14770,
  [SMALL_STATE(920)] = 14774,
  [SMALL_STATE(921)] = 14778,
  [SMALL_STATE(922)] = 14782,
  [SMALL_STATE(923)] = 14786,
  [SMALL_STATE(924)] = 14790,
  [SMALL_STATE(925)] = 14794,
  [SMALL_STATE(926)] = 14798,
  [SMALL_STATE(927)] = 14802,
  [SMALL_STATE(928)] = 14806,
  [SMALL_STATE(929)] = 14810,
  [SMALL_STATE(930)] = 14814,
  [SMALL_STATE(931)] = 14818,
  [SMALL_STATE(932)] = 14822,
  [SMALL_STATE(933)] = 14826,
  [SMALL_STATE(934)] = 14830,
  [SMALL_STATE(935)] = 14834,
  [SMALL_STATE(936)] = 14838,
  [SMALL_STATE(937)] = 14842,
  [SMALL_STATE(938)] = 14846,
  [SMALL_STATE(939)] = 14850,
  [SMALL_STATE(940)] = 14854,
  [SMALL_STATE(941)] = 14858,
  [SMALL_STATE(942)] = 14862,
  [SMALL_STATE(943)] = 14866,
  [SMALL_STATE(944)] = 14870,
  [SMALL_STATE(945)] = 14874,
  [SMALL_STATE(946)] = 14878,
  [SMALL_STATE(947)] = 14882,
  [SMALL_STATE(948)] = 14886,
  [SMALL_STATE(949)] = 14890,
  [SMALL_STATE(950)] = 14894,
  [SMALL_STATE(951)] = 14898,
  [SMALL_STATE(952)] = 14902,
  [SMALL_STATE(953)] = 14906,
  [SMALL_STATE(954)] = 14910,
  [SMALL_STATE(955)] = 14914,
  [SMALL_STATE(956)] = 14918,
  [SMALL_STATE(957)] = 14922,
  [SMALL_STATE(958)] = 14926,
  [SMALL_STATE(959)] = 14930,
  [SMALL_STATE(960)] = 14934,
  [SMALL_STATE(961)] = 14938,
  [SMALL_STATE(962)] = 14942,
  [SMALL_STATE(963)] = 14946,
  [SMALL_STATE(964)] = 14950,
  [SMALL_STATE(965)] = 14954,
  [SMALL_STATE(966)] = 14958,
  [SMALL_STATE(967)] = 14962,
  [SMALL_STATE(968)] = 14966,
  [SMALL_STATE(969)] = 14970,
  [SMALL_STATE(970)] = 14974,
  [SMALL_STATE(971)] = 14978,
  [SMALL_STATE(972)] = 14982,
  [SMALL_STATE(973)] = 14986,
  [SMALL_STATE(974)] = 14990,
  [SMALL_STATE(975)] = 14994,
  [SMALL_STATE(976)] = 14998,
  [SMALL_STATE(977)] = 15002,
  [SMALL_STATE(978)] = 15006,
  [SMALL_STATE(979)] = 15010,
  [SMALL_STATE(980)] = 15014,
  [SMALL_STATE(981)] = 15018,
  [SMALL_STATE(982)] = 15022,
  [SMALL_STATE(983)] = 15026,
  [SMALL_STATE(984)] = 15030,
  [SMALL_STATE(985)] = 15034,
  [SMALL_STATE(986)] = 15038,
  [SMALL_STATE(987)] = 15042,
  [SMALL_STATE(988)] = 15046,
  [SMALL_STATE(989)] = 15050,
  [SMALL_STATE(990)] = 15054,
  [SMALL_STATE(991)] = 15058,
  [SMALL_STATE(992)] = 15062,
  [SMALL_STATE(993)] = 15066,
  [SMALL_STATE(994)] = 15070,
  [SMALL_STATE(995)] = 15074,
  [SMALL_STATE(996)] = 15078,
  [SMALL_STATE(997)] = 15082,
  [SMALL_STATE(998)] = 15086,
  [SMALL_STATE(999)] = 15090,
  [SMALL_STATE(1000)] = 15094,
  [SMALL_STATE(1001)] = 15098,
  [SMALL_STATE(1002)] = 15102,
  [SMALL_STATE(1003)] = 15106,
  [SMALL_STATE(1004)] = 15110,
  [SMALL_STATE(1005)] = 15114,
  [SMALL_STATE(1006)] = 15118,
  [SMALL_STATE(1007)] = 15122,
  [SMALL_STATE(1008)] = 15126,
  [SMALL_STATE(1009)] = 15130,
  [SMALL_STATE(1010)] = 15134,
  [SMALL_STATE(1011)] = 15138,
  [SMALL_STATE(1012)] = 15142,
  [SMALL_STATE(1013)] = 15146,
  [SMALL_STATE(1014)] = 15150,
  [SMALL_STATE(1015)] = 15154,
  [SMALL_STATE(1016)] = 15158,
  [SMALL_STATE(1017)] = 15162,
  [SMALL_STATE(1018)] = 15166,
  [SMALL_STATE(1019)] = 15170,
  [SMALL_STATE(1020)] = 15174,
  [SMALL_STATE(1021)] = 15178,
  [SMALL_STATE(1022)] = 15182,
  [SMALL_STATE(1023)] = 15186,
  [SMALL_STATE(1024)] = 15190,
  [SMALL_STATE(1025)] = 15194,
  [SMALL_STATE(1026)] = 15198,
  [SMALL_STATE(1027)] = 15202,
  [SMALL_STATE(1028)] = 15206,
  [SMALL_STATE(1029)] = 15210,
  [SMALL_STATE(1030)] = 15214,
  [SMALL_STATE(1031)] = 15218,
  [SMALL_STATE(1032)] = 15222,
  [SMALL_STATE(1033)] = 15226,
  [SMALL_STATE(1034)] = 15230,
  [SMALL_STATE(1035)] = 15234,
  [SMALL_STATE(1036)] = 15238,
  [SMALL_STATE(1037)] = 15242,
  [SMALL_STATE(1038)] = 15246,
  [SMALL_STATE(1039)] = 15250,
  [SMALL_STATE(1040)] = 15254,
  [SMALL_STATE(1041)] = 15258,
  [SMALL_STATE(1042)] = 15262,
  [SMALL_STATE(1043)] = 15266,
  [SMALL_STATE(1044)] = 15270,
  [SMALL_STATE(1045)] = 15274,
  [SMALL_STATE(1046)] = 15278,
  [SMALL_STATE(1047)] = 15282,
  [SMALL_STATE(1048)] = 15286,
  [SMALL_STATE(1049)] = 15290,
  [SMALL_STATE(1050)] = 15294,
  [SMALL_STATE(1051)] = 15298,
  [SMALL_STATE(1052)] = 15302,
  [SMALL_STATE(1053)] = 15306,
  [SMALL_STATE(1054)] = 15310,
  [SMALL_STATE(1055)] = 15314,
  [SMALL_STATE(1056)] = 15318,
  [SMALL_STATE(1057)] = 15322,
  [SMALL_STATE(1058)] = 15326,
  [SMALL_STATE(1059)] = 15330,
  [SMALL_STATE(1060)] = 15334,
  [SMALL_STATE(1061)] = 15338,
  [SMALL_STATE(1062)] = 15342,
  [SMALL_STATE(1063)] = 15346,
  [SMALL_STATE(1064)] = 15350,
  [SMALL_STATE(1065)] = 15354,
  [SMALL_STATE(1066)] = 15358,
  [SMALL_STATE(1067)] = 15362,
  [SMALL_STATE(1068)] = 15366,
  [SMALL_STATE(1069)] = 15370,
  [SMALL_STATE(1070)] = 15374,
  [SMALL_STATE(1071)] = 15378,
  [SMALL_STATE(1072)] = 15382,
  [SMALL_STATE(1073)] = 15386,
  [SMALL_STATE(1074)] = 15390,
  [SMALL_STATE(1075)] = 15394,
  [SMALL_STATE(1076)] = 15398,
  [SMALL_STATE(1077)] = 15402,
  [SMALL_STATE(1078)] = 15406,
  [SMALL_STATE(1079)] = 15410,
  [SMALL_STATE(1080)] = 15414,
  [SMALL_STATE(1081)] = 15418,
  [SMALL_STATE(1082)] = 15422,
  [SMALL_STATE(1083)] = 15426,
  [SMALL_STATE(1084)] = 15430,
  [SMALL_STATE(1085)] = 15434,
  [SMALL_STATE(1086)] = 15438,
  [SMALL_STATE(1087)] = 15442,
  [SMALL_STATE(1088)] = 15446,
  [SMALL_STATE(1089)] = 15450,
  [SMALL_STATE(1090)] = 15454,
  [SMALL_STATE(1091)] = 15458,
  [SMALL_STATE(1092)] = 15462,
  [SMALL_STATE(1093)] = 15466,
  [SMALL_STATE(1094)] = 15470,
  [SMALL_STATE(1095)] = 15474,
  [SMALL_STATE(1096)] = 15478,
  [SMALL_STATE(1097)] = 15482,
  [SMALL_STATE(1098)] = 15486,
  [SMALL_STATE(1099)] = 15490,
  [SMALL_STATE(1100)] = 15494,
  [SMALL_STATE(1101)] = 15498,
  [SMALL_STATE(1102)] = 15502,
  [SMALL_STATE(1103)] = 15506,
  [SMALL_STATE(1104)] = 15510,
  [SMALL_STATE(1105)] = 15514,
  [SMALL_STATE(1106)] = 15518,
  [SMALL_STATE(1107)] = 15522,
  [SMALL_STATE(1108)] = 15526,
  [SMALL_STATE(1109)] = 15530,
  [SMALL_STATE(1110)] = 15534,
  [SMALL_STATE(1111)] = 15538,
  [SMALL_STATE(1112)] = 15542,
  [SMALL_STATE(1113)] = 15546,
  [SMALL_STATE(1114)] = 15550,
  [SMALL_STATE(1115)] = 15554,
  [SMALL_STATE(1116)] = 15558,
  [SMALL_STATE(1117)] = 15562,
  [SMALL_STATE(1118)] = 15566,
  [SMALL_STATE(1119)] = 15570,
  [SMALL_STATE(1120)] = 15574,
  [SMALL_STATE(1121)] = 15578,
  [SMALL_STATE(1122)] = 15582,
  [SMALL_STATE(1123)] = 15586,
  [SMALL_STATE(1124)] = 15590,
  [SMALL_STATE(1125)] = 15594,
  [SMALL_STATE(1126)] = 15598,
  [SMALL_STATE(1127)] = 15602,
  [SMALL_STATE(1128)] = 15606,
  [SMALL_STATE(1129)] = 15610,
  [SMALL_STATE(1130)] = 15614,
  [SMALL_STATE(1131)] = 15618,
  [SMALL_STATE(1132)] = 15622,
  [SMALL_STATE(1133)] = 15626,
  [SMALL_STATE(1134)] = 15630,
  [SMALL_STATE(1135)] = 15634,
  [SMALL_STATE(1136)] = 15638,
  [SMALL_STATE(1137)] = 15642,
  [SMALL_STATE(1138)] = 15646,
  [SMALL_STATE(1139)] = 15650,
  [SMALL_STATE(1140)] = 15654,
  [SMALL_STATE(1141)] = 15658,
  [SMALL_STATE(1142)] = 15662,
  [SMALL_STATE(1143)] = 15666,
  [SMALL_STATE(1144)] = 15670,
  [SMALL_STATE(1145)] = 15674,
  [SMALL_STATE(1146)] = 15678,
  [SMALL_STATE(1147)] = 15682,
  [SMALL_STATE(1148)] = 15686,
  [SMALL_STATE(1149)] = 15690,
  [SMALL_STATE(1150)] = 15694,
  [SMALL_STATE(1151)] = 15698,
  [SMALL_STATE(1152)] = 15702,
  [SMALL_STATE(1153)] = 15706,
  [SMALL_STATE(1154)] = 15710,
  [SMALL_STATE(1155)] = 15714,
  [SMALL_STATE(1156)] = 15718,
  [SMALL_STATE(1157)] = 15722,
  [SMALL_STATE(1158)] = 15726,
  [SMALL_STATE(1159)] = 15730,
  [SMALL_STATE(1160)] = 15734,
  [SMALL_STATE(1161)] = 15738,
  [SMALL_STATE(1162)] = 15742,
  [SMALL_STATE(1163)] = 15746,
  [SMALL_STATE(1164)] = 15750,
  [SMALL_STATE(1165)] = 15754,
  [SMALL_STATE(1166)] = 15758,
  [SMALL_STATE(1167)] = 15762,
  [SMALL_STATE(1168)] = 15766,
  [SMALL_STATE(1169)] = 15770,
  [SMALL_STATE(1170)] = 15774,
  [SMALL_STATE(1171)] = 15778,
  [SMALL_STATE(1172)] = 15782,
  [SMALL_STATE(1173)] = 15786,
  [SMALL_STATE(1174)] = 15790,
  [SMALL_STATE(1175)] = 15794,
  [SMALL_STATE(1176)] = 15798,
  [SMALL_STATE(1177)] = 15802,
  [SMALL_STATE(1178)] = 15806,
  [SMALL_STATE(1179)] = 15810,
  [SMALL_STATE(1180)] = 15814,
  [SMALL_STATE(1181)] = 15818,
  [SMALL_STATE(1182)] = 15822,
  [SMALL_STATE(1183)] = 15826,
  [SMALL_STATE(1184)] = 15830,
  [SMALL_STATE(1185)] = 15834,
  [SMALL_STATE(1186)] = 15838,
  [SMALL_STATE(1187)] = 15842,
  [SMALL_STATE(1188)] = 15846,
  [SMALL_STATE(1189)] = 15850,
  [SMALL_STATE(1190)] = 15854,
  [SMALL_STATE(1191)] = 15858,
  [SMALL_STATE(1192)] = 15862,
  [SMALL_STATE(1193)] = 15866,
  [SMALL_STATE(1194)] = 15870,
  [SMALL_STATE(1195)] = 15874,
  [SMALL_STATE(1196)] = 15878,
  [SMALL_STATE(1197)] = 15882,
  [SMALL_STATE(1198)] = 15886,
  [SMALL_STATE(1199)] = 15890,
  [SMALL_STATE(1200)] = 15894,
  [SMALL_STATE(1201)] = 15898,
  [SMALL_STATE(1202)] = 15902,
  [SMALL_STATE(1203)] = 15906,
  [SMALL_STATE(1204)] = 15910,
  [SMALL_STATE(1205)] = 15914,
  [SMALL_STATE(1206)] = 15918,
  [SMALL_STATE(1207)] = 15922,
  [SMALL_STATE(1208)] = 15926,
  [SMALL_STATE(1209)] = 15930,
  [SMALL_STATE(1210)] = 15934,
  [SMALL_STATE(1211)] = 15938,
  [SMALL_STATE(1212)] = 15942,
  [SMALL_STATE(1213)] = 15946,
  [SMALL_STATE(1214)] = 15950,
  [SMALL_STATE(1215)] = 15954,
  [SMALL_STATE(1216)] = 15958,
  [SMALL_STATE(1217)] = 15962,
  [SMALL_STATE(1218)] = 15966,
  [SMALL_STATE(1219)] = 15970,
  [SMALL_STATE(1220)] = 15974,
  [SMALL_STATE(1221)] = 15978,
  [SMALL_STATE(1222)] = 15982,
  [SMALL_STATE(1223)] = 15986,
  [SMALL_STATE(1224)] = 15990,
  [SMALL_STATE(1225)] = 15994,
  [SMALL_STATE(1226)] = 15998,
  [SMALL_STATE(1227)] = 16002,
  [SMALL_STATE(1228)] = 16006,
  [SMALL_STATE(1229)] = 16010,
  [SMALL_STATE(1230)] = 16014,
  [SMALL_STATE(1231)] = 16018,
  [SMALL_STATE(1232)] = 16022,
  [SMALL_STATE(1233)] = 16026,
  [SMALL_STATE(1234)] = 16030,
  [SMALL_STATE(1235)] = 16034,
  [SMALL_STATE(1236)] = 16038,
  [SMALL_STATE(1237)] = 16042,
  [SMALL_STATE(1238)] = 16046,
  [SMALL_STATE(1239)] = 16050,
  [SMALL_STATE(1240)] = 16054,
  [SMALL_STATE(1241)] = 16058,
  [SMALL_STATE(1242)] = 16062,
  [SMALL_STATE(1243)] = 16066,
  [SMALL_STATE(1244)] = 16070,
  [SMALL_STATE(1245)] = 16074,
  [SMALL_STATE(1246)] = 16078,
  [SMALL_STATE(1247)] = 16082,
  [SMALL_STATE(1248)] = 16086,
  [SMALL_STATE(1249)] = 16090,
  [SMALL_STATE(1250)] = 16094,
  [SMALL_STATE(1251)] = 16098,
  [SMALL_STATE(1252)] = 16102,
  [SMALL_STATE(1253)] = 16106,
  [SMALL_STATE(1254)] = 16110,
  [SMALL_STATE(1255)] = 16114,
  [SMALL_STATE(1256)] = 16118,
  [SMALL_STATE(1257)] = 16122,
  [SMALL_STATE(1258)] = 16126,
  [SMALL_STATE(1259)] = 16130,
  [SMALL_STATE(1260)] = 16134,
  [SMALL_STATE(1261)] = 16138,
  [SMALL_STATE(1262)] = 16142,
  [SMALL_STATE(1263)] = 16146,
  [SMALL_STATE(1264)] = 16150,
  [SMALL_STATE(1265)] = 16154,
  [SMALL_STATE(1266)] = 16158,
  [SMALL_STATE(1267)] = 16162,
  [SMALL_STATE(1268)] = 16166,
  [SMALL_STATE(1269)] = 16170,
  [SMALL_STATE(1270)] = 16174,
  [SMALL_STATE(1271)] = 16178,
  [SMALL_STATE(1272)] = 16182,
  [SMALL_STATE(1273)] = 16186,
  [SMALL_STATE(1274)] = 16190,
  [SMALL_STATE(1275)] = 16194,
  [SMALL_STATE(1276)] = 16198,
  [SMALL_STATE(1277)] = 16202,
  [SMALL_STATE(1278)] = 16206,
  [SMALL_STATE(1279)] = 16210,
  [SMALL_STATE(1280)] = 16214,
  [SMALL_STATE(1281)] = 16218,
  [SMALL_STATE(1282)] = 16222,
  [SMALL_STATE(1283)] = 16226,
  [SMALL_STATE(1284)] = 16230,
  [SMALL_STATE(1285)] = 16234,
  [SMALL_STATE(1286)] = 16238,
  [SMALL_STATE(1287)] = 16242,
  [SMALL_STATE(1288)] = 16246,
  [SMALL_STATE(1289)] = 16250,
  [SMALL_STATE(1290)] = 16254,
  [SMALL_STATE(1291)] = 16258,
  [SMALL_STATE(1292)] = 16262,
  [SMALL_STATE(1293)] = 16266,
  [SMALL_STATE(1294)] = 16270,
  [SMALL_STATE(1295)] = 16274,
  [SMALL_STATE(1296)] = 16278,
  [SMALL_STATE(1297)] = 16282,
  [SMALL_STATE(1298)] = 16286,
  [SMALL_STATE(1299)] = 16290,
  [SMALL_STATE(1300)] = 16294,
  [SMALL_STATE(1301)] = 16298,
  [SMALL_STATE(1302)] = 16302,
  [SMALL_STATE(1303)] = 16306,
  [SMALL_STATE(1304)] = 16310,
  [SMALL_STATE(1305)] = 16314,
  [SMALL_STATE(1306)] = 16318,
  [SMALL_STATE(1307)] = 16322,
  [SMALL_STATE(1308)] = 16326,
  [SMALL_STATE(1309)] = 16330,
  [SMALL_STATE(1310)] = 16334,
  [SMALL_STATE(1311)] = 16338,
  [SMALL_STATE(1312)] = 16342,
  [SMALL_STATE(1313)] = 16346,
  [SMALL_STATE(1314)] = 16350,
  [SMALL_STATE(1315)] = 16354,
  [SMALL_STATE(1316)] = 16358,
  [SMALL_STATE(1317)] = 16362,
  [SMALL_STATE(1318)] = 16366,
  [SMALL_STATE(1319)] = 16370,
  [SMALL_STATE(1320)] = 16374,
  [SMALL_STATE(1321)] = 16378,
  [SMALL_STATE(1322)] = 16382,
  [SMALL_STATE(1323)] = 16386,
  [SMALL_STATE(1324)] = 16390,
  [SMALL_STATE(1325)] = 16394,
  [SMALL_STATE(1326)] = 16398,
  [SMALL_STATE(1327)] = 16402,
  [SMALL_STATE(1328)] = 16406,
  [SMALL_STATE(1329)] = 16410,
  [SMALL_STATE(1330)] = 16414,
  [SMALL_STATE(1331)] = 16418,
  [SMALL_STATE(1332)] = 16422,
  [SMALL_STATE(1333)] = 16426,
  [SMALL_STATE(1334)] = 16430,
  [SMALL_STATE(1335)] = 16434,
  [SMALL_STATE(1336)] = 16438,
  [SMALL_STATE(1337)] = 16442,
  [SMALL_STATE(1338)] = 16446,
  [SMALL_STATE(1339)] = 16450,
  [SMALL_STATE(1340)] = 16454,
  [SMALL_STATE(1341)] = 16458,
  [SMALL_STATE(1342)] = 16462,
  [SMALL_STATE(1343)] = 16466,
  [SMALL_STATE(1344)] = 16470,
  [SMALL_STATE(1345)] = 16474,
  [SMALL_STATE(1346)] = 16478,
  [SMALL_STATE(1347)] = 16482,
  [SMALL_STATE(1348)] = 16486,
  [SMALL_STATE(1349)] = 16490,
  [SMALL_STATE(1350)] = 16494,
  [SMALL_STATE(1351)] = 16498,
  [SMALL_STATE(1352)] = 16502,
  [SMALL_STATE(1353)] = 16506,
  [SMALL_STATE(1354)] = 16510,
  [SMALL_STATE(1355)] = 16514,
  [SMALL_STATE(1356)] = 16518,
  [SMALL_STATE(1357)] = 16522,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(450),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(462),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(624),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1357),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(542),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(438),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1355),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1354),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(427),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(437),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1353),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(820),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 48),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 48),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 48),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(458),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 48),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 48),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1015),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1127),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1345),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 58),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 59),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 30),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 42),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(559),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 48),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 125),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 27),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 40),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 48),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(812),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 66),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 24),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 27),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 39),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 121),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 48),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 93),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 40),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 120),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 58),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 40),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 58),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 45),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 116),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 58),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 27),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 106),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(722),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 110),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(475),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 27),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 9),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 77),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1078),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 22),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 54),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 19),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 64),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 55),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 63),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 61),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 36),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 47),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 46),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 72),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 48),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 86),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 90),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 125),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 124),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 27),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 45),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 40),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 45),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 74),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 73),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 70),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 123),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 47),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 27),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 58),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 121),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 38),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 120),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 45),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 9),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 76),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 70),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 122),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 116),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 20),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 119),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 118),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 47),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 117),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 115),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 114),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 40),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 113),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 9),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 45),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 112),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 106),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 76),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 105),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 79),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 58),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 49),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 27),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 109),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 50),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 62),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 51),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 108),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 107),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 49),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 77),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 52),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 82),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 53),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 103),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 102),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 56),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 83),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 27),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 57),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 100),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 84),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 99),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 83),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 27),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 29),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 30),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 84),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 32),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 33),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 35),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 93),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 87),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 88),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 38),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 89),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 66),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 91),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 92),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 97),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 60),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 48),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 94),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 96),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 95),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1205),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1130),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1246),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1250),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1253),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1037),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(424),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1218),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1226),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 24),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1249),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(682),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1075),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1203),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1199),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1165),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(59),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1151),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1137),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1086),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1162),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(761),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(418),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(764),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(826),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(741),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(814),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(436),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 78),
  [1458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(757),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(198),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(746),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(606),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(416),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 80),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 81),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 85),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1045),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 104),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 75),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 44),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1095),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(974),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1114),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1119),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1040),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1042),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 65),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1104),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 23),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 71),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1141),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1158),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1177),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1182),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1190),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1235),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 68),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 69),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 10),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 25),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 78),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 43),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 67),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2788] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
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
