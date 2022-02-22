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
#define STATE_COUNT 1160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 324
#define ALIAS_COUNT 6
#define TOKEN_COUNT 146
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 29

enum {
  anon_sym_SEMI = 1,
  aux_sym_select_statement_token1 = 2,
  aux_sym_select_statement_token2 = 3,
  aux_sym_select_statement_token3 = 4,
  aux_sym_select_statement_token4 = 5,
  aux_sym_select_statement_token5 = 6,
  aux_sym_select_statement_token6 = 7,
  anon_sym_STAR = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOT = 10,
  aux_sym_select_element_token1 = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  aux_sym_constant_token1 = 14,
  anon_sym_DASH = 15,
  sym__hex_4digit = 16,
  sym__hex_digit = 17,
  anon_sym_SQUOTE = 18,
  aux_sym__string_literal_token1 = 19,
  anon_sym_DOLLAR_DOLLAR = 20,
  aux_sym__string_literal_token2 = 21,
  sym__dec_digit = 22,
  anon_sym_X_SQUOTE = 23,
  anon_sym_0X = 24,
  sym__boolean_literal = 25,
  sym_object_name = 26,
  aux_sym_from_spec_token1 = 27,
  aux_sym_where_spec_token1 = 28,
  aux_sym_relation_elements_token1 = 29,
  anon_sym_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT_EQ = 34,
  aux_sym_relation_element_token1 = 35,
  aux_sym_relalationContainsKey_token1 = 36,
  aux_sym_relalationContainsKey_token2 = 37,
  aux_sym_order_spec_token1 = 38,
  aux_sym_order_spec_token2 = 39,
  aux_sym_delete_statement_token1 = 40,
  aux_sym_begin_batch_token1 = 41,
  aux_sym_begin_batch_token2 = 42,
  aux_sym_begin_batch_token3 = 43,
  aux_sym_begin_batch_token4 = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  aux_sym_using_timestamp_spec_token1 = 47,
  aux_sym_timestamp_token1 = 48,
  aux_sym_if_exist_token1 = 49,
  aux_sym_if_exist_token2 = 50,
  aux_sym_insert_statement_token1 = 51,
  aux_sym_insert_statement_token2 = 52,
  sym__dquote = 53,
  aux_sym_insert_values_spec_token1 = 54,
  anon_sym_LBRACE = 55,
  anon_sym_COLON = 56,
  anon_sym_RBRACE = 57,
  aux_sym_if_not_exist_token1 = 58,
  aux_sym_ttl_token1 = 59,
  aux_sym_truncate_token1 = 60,
  aux_sym_truncate_token2 = 61,
  aux_sym_create_index_token1 = 62,
  aux_sym_create_index_token2 = 63,
  aux_sym_create_index_token3 = 64,
  aux_sym_index_keys_spec_token1 = 65,
  aux_sym_index_entries_s_spec_token1 = 66,
  aux_sym_index_full_spec_token1 = 67,
  aux_sym_drop_index_token1 = 68,
  aux_sym_update_token1 = 69,
  aux_sym_update_token2 = 70,
  anon_sym_PLUS = 71,
  aux_sym_use_token1 = 72,
  aux_sym_grant_token1 = 73,
  aux_sym_grant_token2 = 74,
  aux_sym_priviledge_token1 = 75,
  aux_sym_priviledge_token2 = 76,
  aux_sym_priviledge_token3 = 77,
  aux_sym_priviledge_token4 = 78,
  aux_sym_priviledge_token5 = 79,
  aux_sym_priviledge_token6 = 80,
  aux_sym_priviledge_token7 = 81,
  aux_sym_resource_token1 = 82,
  aux_sym_resource_token2 = 83,
  aux_sym_resource_token3 = 84,
  aux_sym_resource_token4 = 85,
  aux_sym_resource_token5 = 86,
  aux_sym_resource_token6 = 87,
  aux_sym_revoke_token1 = 88,
  aux_sym_list_roles_token1 = 89,
  aux_sym_list_roles_token2 = 90,
  aux_sym_list_roles_token3 = 91,
  aux_sym_drop_aggregate_token1 = 92,
  aux_sym_drop_trigger_token1 = 93,
  aux_sym_drop_type_token1 = 94,
  aux_sym_drop_user_token1 = 95,
  aux_sym_create_aggregate_token1 = 96,
  aux_sym_create_aggregate_token2 = 97,
  aux_sym_create_aggregate_token3 = 98,
  aux_sym_create_aggregate_token4 = 99,
  aux_sym_create_aggregate_token5 = 100,
  aux_sym_create_aggregate_token6 = 101,
  aux_sym_create_function_token1 = 102,
  aux_sym_create_function_token2 = 103,
  aux_sym_data_type_name_token1 = 104,
  aux_sym_data_type_name_token2 = 105,
  aux_sym_data_type_name_token3 = 106,
  aux_sym_data_type_name_token4 = 107,
  aux_sym_data_type_name_token5 = 108,
  aux_sym_data_type_name_token6 = 109,
  aux_sym_data_type_name_token7 = 110,
  aux_sym_data_type_name_token8 = 111,
  aux_sym_data_type_name_token9 = 112,
  aux_sym_data_type_name_token10 = 113,
  aux_sym_data_type_name_token11 = 114,
  aux_sym_data_type_name_token12 = 115,
  aux_sym_data_type_name_token13 = 116,
  aux_sym_data_type_name_token14 = 117,
  aux_sym_data_type_name_token15 = 118,
  aux_sym_data_type_name_token16 = 119,
  aux_sym_data_type_name_token17 = 120,
  aux_sym_data_type_name_token18 = 121,
  aux_sym_data_type_name_token19 = 122,
  aux_sym_data_type_name_token20 = 123,
  aux_sym_data_type_name_token21 = 124,
  aux_sym_data_type_name_token22 = 125,
  aux_sym_return_mode_token1 = 126,
  aux_sym_return_mode_token2 = 127,
  aux_sym_create_keyspace_token1 = 128,
  aux_sym_create_keyspace_token2 = 129,
  aux_sym_durable_writes_token1 = 130,
  aux_sym_durable_writes_token2 = 131,
  aux_sym_role_with_options_token1 = 132,
  aux_sym_role_with_options_token2 = 133,
  aux_sym_role_with_options_token3 = 134,
  aux_sym_role_with_options_token4 = 135,
  aux_sym_primary_key_column_token1 = 136,
  aux_sym_clustering_order_token1 = 137,
  aux_sym_order_direction_token1 = 138,
  aux_sym_order_direction_token2 = 139,
  aux_sym_alter_table_add_token1 = 140,
  aux_sym_alter_table_drop_compact_storage_token1 = 141,
  aux_sym_alter_table_drop_compact_storage_token2 = 142,
  aux_sym_alter_table_rename_token1 = 143,
  aux_sym_user_super_user_token1 = 144,
  aux_sym_apply_batch_token1 = 145,
  sym_source_file = 146,
  sym__statement = 147,
  sym_select_statement = 148,
  sym_select_elements = 149,
  sym_select_element = 150,
  sym_function_call = 151,
  sym_function_args = 152,
  sym_constant = 153,
  sym__uuid = 154,
  sym__string_literal = 155,
  aux_sym__decimal_literal = 156,
  sym__float_literal = 157,
  sym__hexadecimal_literal = 158,
  sym_code_block = 159,
  sym_from_spec = 160,
  sym_from_spec_element = 161,
  sym_where_spec = 162,
  sym_relation_elements = 163,
  sym_relation_element = 164,
  sym_assignment_tuple = 165,
  sym_relalationContainsKey = 166,
  sym_relalationContains = 167,
  sym_order_spec = 168,
  sym_order_spec_element = 169,
  sym_delete_statement = 170,
  sym_begin_batch = 171,
  sym_delete_column_list = 172,
  sym_delete_column_item = 173,
  sym_using_timestamp_spec = 174,
  sym_timestamp = 175,
  sym_if_exist = 176,
  sym_if_spec = 177,
  sym_if_condition_list = 178,
  sym_if_condition = 179,
  sym_insert_statement = 180,
  sym_keyspace = 181,
  sym_table = 182,
  sym_insert_column_spec = 183,
  sym_column_list = 184,
  sym_column = 185,
  sym_insert_values_spec = 186,
  sym_expression_list = 187,
  sym_expression = 188,
  sym_assignment_map = 189,
  sym_assignment_set = 190,
  sym_assignment_list = 191,
  sym_if_not_exist = 192,
  sym_using_ttl_timestamp = 193,
  sym_ttl = 194,
  sym_truncate = 195,
  sym_create_index = 196,
  sym_index_name = 197,
  sym_index_column_spec = 198,
  sym_index_keys_spec = 199,
  sym_index_entries_s_spec = 200,
  sym_index_full_spec = 201,
  sym_drop_index = 202,
  sym_update = 203,
  sym_assignment_element = 204,
  sym_use = 205,
  sym_grant = 206,
  sym_priviledge = 207,
  sym_resource = 208,
  sym_role = 209,
  sym_function = 210,
  sym_revoke = 211,
  sym_list_roles = 212,
  sym_list_permissions = 213,
  sym_drop_aggregate = 214,
  sym_drop_function = 215,
  sym_drop_keyspace = 216,
  sym_drop_role = 217,
  sym_drop_table = 218,
  sym_drop_trigger = 219,
  sym_drop_type = 220,
  sym_drop_user = 221,
  sym_user = 222,
  sym_create_aggregate = 223,
  sym_aggregate = 224,
  sym_init_cond_definition = 225,
  sym_init_cond_list = 226,
  sym_init_cond_list_nested = 227,
  sym_init_cond_hash = 228,
  sym_init_cond_hash_item = 229,
  sym_hash_key = 230,
  sym_create_function = 231,
  sym_param = 232,
  sym_data_type = 233,
  sym_data_type_name = 234,
  sym_data_type_definition = 235,
  sym_return_mode = 236,
  sym_language = 237,
  sym_create_keyspace = 238,
  sym_replication_list_item = 239,
  sym_durable_writes = 240,
  sym_create_role = 241,
  sym_role_with = 242,
  sym_role_with_options = 243,
  sym_option_hash = 244,
  sym_option_hash_item = 245,
  sym_create_table = 246,
  sym_column_definition_list = 247,
  sym_column_definition = 248,
  sym_primary_key_column = 249,
  sym_primary_key_element = 250,
  sym_primary_key_definition = 251,
  sym_single_primary_key = 252,
  sym_compound_key = 253,
  sym_partition_key = 254,
  sym_clustering_key_list = 255,
  sym_clustering_key = 256,
  sym_composite_key = 257,
  sym_partition_key_list = 258,
  sym_with_element = 259,
  sym_table_options = 260,
  sym_table_option_item = 261,
  sym_table_option_name = 262,
  sym_table_option_value = 263,
  sym_clustering_order = 264,
  sym_order_direction = 265,
  sym_create_trigger = 266,
  sym_trigger = 267,
  sym_trigger_class = 268,
  sym_create_type = 269,
  sym_type_member_column_list = 270,
  sym_create_user = 271,
  sym_alter_keyspace = 272,
  sym_replication_list = 273,
  sym_alter_role = 274,
  sym_alter_table = 275,
  sym_alter_table_operation = 276,
  sym_alter_table_add = 277,
  sym_alter_table_column_definition = 278,
  sym_alter_table_drop_columns = 279,
  sym_alter_table_drop_column_list = 280,
  sym_alter_table_drop_compact_storage = 281,
  sym_alter_table_rename = 282,
  sym_alter_table_with = 283,
  sym_alter_type = 284,
  sym_type = 285,
  sym_alter_type_operation = 286,
  sym_alter_type_alter_type = 287,
  sym_alter_type_add = 288,
  sym_alter_type_rename = 289,
  sym_alter_type_rename_list = 290,
  sym_alter_type_rename_item = 291,
  sym_alter_user = 292,
  sym_user_password = 293,
  sym_user_super_user = 294,
  sym_apply_batch = 295,
  aux_sym_source_file_repeat1 = 296,
  aux_sym_select_elements_repeat1 = 297,
  aux_sym_function_args_repeat1 = 298,
  aux_sym__hexadecimal_literal_repeat1 = 299,
  aux_sym__hexadecimal_literal_repeat2 = 300,
  aux_sym_relation_elements_repeat1 = 301,
  aux_sym_relation_element_repeat1 = 302,
  aux_sym_relation_element_repeat2 = 303,
  aux_sym_assignment_tuple_repeat1 = 304,
  aux_sym_delete_column_list_repeat1 = 305,
  aux_sym_if_condition_list_repeat1 = 306,
  aux_sym_column_list_repeat1 = 307,
  aux_sym_expression_list_repeat1 = 308,
  aux_sym_assignment_map_repeat1 = 309,
  aux_sym_update_repeat1 = 310,
  aux_sym_init_cond_list_nested_repeat1 = 311,
  aux_sym_init_cond_hash_repeat1 = 312,
  aux_sym_create_function_repeat1 = 313,
  aux_sym_data_type_definition_repeat1 = 314,
  aux_sym_role_with_repeat1 = 315,
  aux_sym_option_hash_repeat1 = 316,
  aux_sym_column_definition_list_repeat1 = 317,
  aux_sym_clustering_key_list_repeat1 = 318,
  aux_sym_partition_key_list_repeat1 = 319,
  aux_sym_table_options_repeat1 = 320,
  aux_sym_type_member_column_list_repeat1 = 321,
  aux_sym_replication_list_repeat1 = 322,
  aux_sym_alter_type_rename_list_repeat1 = 323,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 324,
  anon_alias_sym_ALL_ROLES = 325,
  anon_alias_sym_CONTAINS = 326,
  anon_alias_sym_DROP_INDEX = 327,
  anon_alias_sym_IF = 328,
  anon_alias_sym_ORDER_BY = 329,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_select_statement_token1] = "SELECT",
  [aux_sym_select_statement_token2] = "DISTINCT",
  [aux_sym_select_statement_token3] = "JSON",
  [aux_sym_select_statement_token4] = "LIMIT",
  [aux_sym_select_statement_token5] = "ALLOW_FILTERING",
  [aux_sym_select_statement_token6] = "ALLOW_FILTERING",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [aux_sym_select_element_token1] = "AS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_constant_token1] = "NULL",
  [anon_sym_DASH] = "-",
  [sym__hex_4digit] = "_hex_4digit",
  [sym__hex_digit] = "_hex_digit",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym__string_literal_token2] = "_string_literal_token2",
  [sym__dec_digit] = "_dec_digit",
  [anon_sym_X_SQUOTE] = "X'",
  [anon_sym_0X] = "0X",
  [sym__boolean_literal] = "_boolean_literal",
  [sym_object_name] = "object_name",
  [aux_sym_from_spec_token1] = "FROM",
  [aux_sym_where_spec_token1] = "WHERE",
  [aux_sym_relation_elements_token1] = "AND",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_relation_element_token1] = "IN",
  [aux_sym_relalationContainsKey_token1] = "CONTAINS_KEY",
  [aux_sym_relalationContainsKey_token2] = "KEY",
  [aux_sym_order_spec_token1] = "ORDER",
  [aux_sym_order_spec_token2] = "BY",
  [aux_sym_delete_statement_token1] = "DELETE",
  [aux_sym_begin_batch_token1] = "BEGIN",
  [aux_sym_begin_batch_token2] = "LOGGED",
  [aux_sym_begin_batch_token3] = "UNLOGGED",
  [aux_sym_begin_batch_token4] = "BATCH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_using_timestamp_spec_token1] = "USING",
  [aux_sym_timestamp_token1] = "TIMESTAMP",
  [aux_sym_if_exist_token1] = "IF_EXISTS",
  [aux_sym_if_exist_token2] = "IF_EXISTS",
  [aux_sym_insert_statement_token1] = "INSERT_INTO",
  [aux_sym_insert_statement_token2] = "INSERT_INTO",
  [sym__dquote] = "_dquote",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_if_not_exist_token1] = "IF_NOT_EXISTS",
  [aux_sym_ttl_token1] = "TTL",
  [aux_sym_truncate_token1] = "TRUNCATE",
  [aux_sym_truncate_token2] = "TABLE",
  [aux_sym_create_index_token1] = "CREATE",
  [aux_sym_create_index_token2] = "CREATE_INDEX",
  [aux_sym_create_index_token3] = "ON",
  [aux_sym_index_keys_spec_token1] = "KEYS",
  [aux_sym_index_entries_s_spec_token1] = "ENTRIES",
  [aux_sym_index_full_spec_token1] = "FULL",
  [aux_sym_drop_index_token1] = "DROP",
  [aux_sym_update_token1] = "UPDATE",
  [aux_sym_update_token2] = "SET",
  [anon_sym_PLUS] = "+",
  [aux_sym_use_token1] = "USE",
  [aux_sym_grant_token1] = "GRANT",
  [aux_sym_grant_token2] = "TO",
  [aux_sym_priviledge_token1] = "ALL",
  [aux_sym_priviledge_token2] = "ALL_PERMISSIONS",
  [aux_sym_priviledge_token3] = "ALTER",
  [aux_sym_priviledge_token4] = "AUTHORIZE",
  [aux_sym_priviledge_token5] = "DESCRIBE",
  [aux_sym_priviledge_token6] = "EXECUTE",
  [aux_sym_priviledge_token7] = "MODIFY",
  [aux_sym_resource_token1] = "ALL_FUNCTIONS",
  [aux_sym_resource_token2] = "KEYSPACE",
  [aux_sym_resource_token3] = "FUNCTION",
  [aux_sym_resource_token4] = "ALL_KEYSPACES",
  [aux_sym_resource_token5] = "ROLES",
  [aux_sym_resource_token6] = "ROLE",
  [aux_sym_revoke_token1] = "REVOKE",
  [aux_sym_list_roles_token1] = "LIST",
  [aux_sym_list_roles_token2] = "OF",
  [aux_sym_list_roles_token3] = "NORECURSIVE",
  [aux_sym_drop_aggregate_token1] = "AGGREGATE",
  [aux_sym_drop_trigger_token1] = "TRIGGER",
  [aux_sym_drop_type_token1] = "TYPE",
  [aux_sym_drop_user_token1] = "USER",
  [aux_sym_create_aggregate_token1] = "OR_REPLACE",
  [aux_sym_create_aggregate_token2] = "OR_REPLACE",
  [aux_sym_create_aggregate_token3] = "SFUNC",
  [aux_sym_create_aggregate_token4] = "STYPE",
  [aux_sym_create_aggregate_token5] = "FINALFUNC",
  [aux_sym_create_aggregate_token6] = "INITCOND",
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
  [aux_sym_durable_writes_token2] = "DURABLE_WRITES",
  [aux_sym_role_with_options_token1] = "PASSWORD",
  [aux_sym_role_with_options_token2] = "LOGIN",
  [aux_sym_role_with_options_token3] = "SUPERUSER",
  [aux_sym_role_with_options_token4] = "OPTIONS",
  [aux_sym_primary_key_column_token1] = "PRIMARY",
  [aux_sym_clustering_order_token1] = "CLUSTERING",
  [aux_sym_order_direction_token1] = "ASC",
  [aux_sym_order_direction_token2] = "DESC",
  [aux_sym_alter_table_add_token1] = "ADD",
  [aux_sym_alter_table_drop_compact_storage_token1] = "COMPACT",
  [aux_sym_alter_table_drop_compact_storage_token2] = "STORAGE",
  [aux_sym_alter_table_rename_token1] = "RENAME",
  [aux_sym_user_super_user_token1] = "NOSUPERUSER",
  [aux_sym_apply_batch_token1] = "APPLY",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_elements] = "select_elements",
  [sym_select_element] = "select_element",
  [sym_function_call] = "function_call",
  [sym_function_args] = "function_args",
  [sym_constant] = "constant",
  [sym__uuid] = "_uuid",
  [sym__string_literal] = "_string_literal",
  [aux_sym__decimal_literal] = "_decimal_literal",
  [sym__float_literal] = "_float_literal",
  [sym__hexadecimal_literal] = "_hexadecimal_literal",
  [sym_code_block] = "code_block",
  [sym_from_spec] = "from_spec",
  [sym_from_spec_element] = "from_spec_element",
  [sym_where_spec] = "where_spec",
  [sym_relation_elements] = "relation_elements",
  [sym_relation_element] = "relation_element",
  [sym_assignment_tuple] = "assignment_tuple",
  [sym_relalationContainsKey] = "relalationContainsKey",
  [sym_relalationContains] = "relalationContains",
  [sym_order_spec] = "order_spec",
  [sym_order_spec_element] = "order_spec_element",
  [sym_delete_statement] = "delete_statement",
  [sym_begin_batch] = "begin_batch",
  [sym_delete_column_list] = "delete_column_list",
  [sym_delete_column_item] = "delete_column_item",
  [sym_using_timestamp_spec] = "using_timestamp_spec",
  [sym_timestamp] = "timestamp",
  [sym_if_exist] = "if_exist",
  [sym_if_spec] = "if_spec",
  [sym_if_condition_list] = "if_condition_list",
  [sym_if_condition] = "if_condition",
  [sym_insert_statement] = "insert_statement",
  [sym_keyspace] = "keyspace",
  [sym_table] = "table",
  [sym_insert_column_spec] = "insert_column_spec",
  [sym_column_list] = "column_list",
  [sym_column] = "column",
  [sym_insert_values_spec] = "insert_values_spec",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_assignment_map] = "assignment_map",
  [sym_assignment_set] = "assignment_set",
  [sym_assignment_list] = "assignment_list",
  [sym_if_not_exist] = "if_not_exist",
  [sym_using_ttl_timestamp] = "using_ttl_timestamp",
  [sym_ttl] = "ttl",
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
  [sym_use] = "use",
  [sym_grant] = "grant",
  [sym_priviledge] = "priviledge",
  [sym_resource] = "resource",
  [sym_role] = "role",
  [sym_function] = "function",
  [sym_revoke] = "revoke",
  [sym_list_roles] = "list_roles",
  [sym_list_permissions] = "list_permissions",
  [sym_drop_aggregate] = "drop_aggregate",
  [sym_drop_function] = "drop_function",
  [sym_drop_keyspace] = "drop_keyspace",
  [sym_drop_role] = "drop_role",
  [sym_drop_table] = "drop_table",
  [sym_drop_trigger] = "drop_trigger",
  [sym_drop_type] = "drop_type",
  [sym_drop_user] = "drop_user",
  [sym_user] = "user",
  [sym_create_aggregate] = "create_aggregate",
  [sym_aggregate] = "aggregate",
  [sym_init_cond_definition] = "init_cond_definition",
  [sym_init_cond_list] = "init_cond_list",
  [sym_init_cond_list_nested] = "init_cond_list_nested",
  [sym_init_cond_hash] = "init_cond_hash",
  [sym_init_cond_hash_item] = "init_cond_hash_item",
  [sym_hash_key] = "hash_key",
  [sym_create_function] = "create_function",
  [sym_param] = "param",
  [sym_data_type] = "data_type",
  [sym_data_type_name] = "data_type_name",
  [sym_data_type_definition] = "data_type_definition",
  [sym_return_mode] = "return_mode",
  [sym_language] = "language",
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
  [sym_single_primary_key] = "single_primary_key",
  [sym_compound_key] = "compound_key",
  [sym_partition_key] = "partition_key",
  [sym_clustering_key_list] = "clustering_key_list",
  [sym_clustering_key] = "clustering_key",
  [sym_composite_key] = "composite_key",
  [sym_partition_key_list] = "partition_key_list",
  [sym_with_element] = "with_element",
  [sym_table_options] = "table_options",
  [sym_table_option_item] = "table_option_item",
  [sym_table_option_name] = "table_option_name",
  [sym_table_option_value] = "table_option_value",
  [sym_clustering_order] = "clustering_order",
  [sym_order_direction] = "order_direction",
  [sym_create_trigger] = "create_trigger",
  [sym_trigger] = "trigger",
  [sym_trigger_class] = "trigger_class",
  [sym_create_type] = "create_type",
  [sym_type_member_column_list] = "type_member_column_list",
  [sym_create_user] = "create_user",
  [sym_alter_keyspace] = "alter_keyspace",
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
  [sym_type] = "type",
  [sym_alter_type_operation] = "alter_type_operation",
  [sym_alter_type_alter_type] = "alter_type_alter_type",
  [sym_alter_type_add] = "alter_type_add",
  [sym_alter_type_rename] = "alter_type_rename",
  [sym_alter_type_rename_list] = "alter_type_rename_list",
  [sym_alter_type_rename_item] = "alter_type_rename_item",
  [sym_alter_user] = "alter_user",
  [sym_user_password] = "user_password",
  [sym_user_super_user] = "user_super_user",
  [sym_apply_batch] = "apply_batch",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_elements_repeat1] = "select_elements_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym__hexadecimal_literal_repeat1] = "_hexadecimal_literal_repeat1",
  [aux_sym__hexadecimal_literal_repeat2] = "_hexadecimal_literal_repeat2",
  [aux_sym_relation_elements_repeat1] = "relation_elements_repeat1",
  [aux_sym_relation_element_repeat1] = "relation_element_repeat1",
  [aux_sym_relation_element_repeat2] = "relation_element_repeat2",
  [aux_sym_assignment_tuple_repeat1] = "assignment_tuple_repeat1",
  [aux_sym_delete_column_list_repeat1] = "delete_column_list_repeat1",
  [aux_sym_if_condition_list_repeat1] = "if_condition_list_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignment_map_repeat1] = "assignment_map_repeat1",
  [aux_sym_update_repeat1] = "update_repeat1",
  [aux_sym_init_cond_list_nested_repeat1] = "init_cond_list_nested_repeat1",
  [aux_sym_init_cond_hash_repeat1] = "init_cond_hash_repeat1",
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_partition_key_list_repeat1] = "partition_key_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_type_member_column_list_repeat1] = "type_member_column_list_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
  [anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE] = "ALL_FUNCTIONS_IN_KEYSPACE",
  [anon_alias_sym_ALL_ROLES] = "ALL_ROLES",
  [anon_alias_sym_CONTAINS] = "CONTAINS",
  [anon_alias_sym_DROP_INDEX] = "DROP_INDEX",
  [anon_alias_sym_IF] = "IF",
  [anon_alias_sym_ORDER_BY] = "ORDER_BY",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [aux_sym_select_statement_token2] = aux_sym_select_statement_token2,
  [aux_sym_select_statement_token3] = aux_sym_select_statement_token3,
  [aux_sym_select_statement_token4] = aux_sym_select_statement_token4,
  [aux_sym_select_statement_token5] = aux_sym_select_statement_token5,
  [aux_sym_select_statement_token6] = aux_sym_select_statement_token5,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_select_element_token1] = aux_sym_select_element_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__hex_4digit] = sym__hex_4digit,
  [sym__hex_digit] = sym__hex_digit,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym__string_literal_token2] = aux_sym__string_literal_token2,
  [sym__dec_digit] = sym__dec_digit,
  [anon_sym_X_SQUOTE] = anon_sym_X_SQUOTE,
  [anon_sym_0X] = anon_sym_0X,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym_object_name] = sym_object_name,
  [aux_sym_from_spec_token1] = aux_sym_from_spec_token1,
  [aux_sym_where_spec_token1] = aux_sym_where_spec_token1,
  [aux_sym_relation_elements_token1] = aux_sym_relation_elements_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_relation_element_token1] = aux_sym_relation_element_token1,
  [aux_sym_relalationContainsKey_token1] = aux_sym_relalationContainsKey_token1,
  [aux_sym_relalationContainsKey_token2] = aux_sym_relalationContainsKey_token2,
  [aux_sym_order_spec_token1] = aux_sym_order_spec_token1,
  [aux_sym_order_spec_token2] = aux_sym_order_spec_token2,
  [aux_sym_delete_statement_token1] = aux_sym_delete_statement_token1,
  [aux_sym_begin_batch_token1] = aux_sym_begin_batch_token1,
  [aux_sym_begin_batch_token2] = aux_sym_begin_batch_token2,
  [aux_sym_begin_batch_token3] = aux_sym_begin_batch_token3,
  [aux_sym_begin_batch_token4] = aux_sym_begin_batch_token4,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_using_timestamp_spec_token1] = aux_sym_using_timestamp_spec_token1,
  [aux_sym_timestamp_token1] = aux_sym_timestamp_token1,
  [aux_sym_if_exist_token1] = aux_sym_if_exist_token1,
  [aux_sym_if_exist_token2] = aux_sym_if_exist_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token1,
  [sym__dquote] = sym__dquote,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_if_not_exist_token1] = aux_sym_if_not_exist_token1,
  [aux_sym_ttl_token1] = aux_sym_ttl_token1,
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
  [aux_sym_use_token1] = aux_sym_use_token1,
  [aux_sym_grant_token1] = aux_sym_grant_token1,
  [aux_sym_grant_token2] = aux_sym_grant_token2,
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
  [aux_sym_revoke_token1] = aux_sym_revoke_token1,
  [aux_sym_list_roles_token1] = aux_sym_list_roles_token1,
  [aux_sym_list_roles_token2] = aux_sym_list_roles_token2,
  [aux_sym_list_roles_token3] = aux_sym_list_roles_token3,
  [aux_sym_drop_aggregate_token1] = aux_sym_drop_aggregate_token1,
  [aux_sym_drop_trigger_token1] = aux_sym_drop_trigger_token1,
  [aux_sym_drop_type_token1] = aux_sym_drop_type_token1,
  [aux_sym_drop_user_token1] = aux_sym_drop_user_token1,
  [aux_sym_create_aggregate_token1] = aux_sym_create_aggregate_token1,
  [aux_sym_create_aggregate_token2] = aux_sym_create_aggregate_token1,
  [aux_sym_create_aggregate_token3] = aux_sym_create_aggregate_token3,
  [aux_sym_create_aggregate_token4] = aux_sym_create_aggregate_token4,
  [aux_sym_create_aggregate_token5] = aux_sym_create_aggregate_token5,
  [aux_sym_create_aggregate_token6] = aux_sym_create_aggregate_token6,
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
  [aux_sym_durable_writes_token2] = aux_sym_durable_writes_token1,
  [aux_sym_role_with_options_token1] = aux_sym_role_with_options_token1,
  [aux_sym_role_with_options_token2] = aux_sym_role_with_options_token2,
  [aux_sym_role_with_options_token3] = aux_sym_role_with_options_token3,
  [aux_sym_role_with_options_token4] = aux_sym_role_with_options_token4,
  [aux_sym_primary_key_column_token1] = aux_sym_primary_key_column_token1,
  [aux_sym_clustering_order_token1] = aux_sym_clustering_order_token1,
  [aux_sym_order_direction_token1] = aux_sym_order_direction_token1,
  [aux_sym_order_direction_token2] = aux_sym_order_direction_token2,
  [aux_sym_alter_table_add_token1] = aux_sym_alter_table_add_token1,
  [aux_sym_alter_table_drop_compact_storage_token1] = aux_sym_alter_table_drop_compact_storage_token1,
  [aux_sym_alter_table_drop_compact_storage_token2] = aux_sym_alter_table_drop_compact_storage_token2,
  [aux_sym_alter_table_rename_token1] = aux_sym_alter_table_rename_token1,
  [aux_sym_user_super_user_token1] = aux_sym_user_super_user_token1,
  [aux_sym_apply_batch_token1] = aux_sym_apply_batch_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_elements] = sym_select_elements,
  [sym_select_element] = sym_select_element,
  [sym_function_call] = sym_function_call,
  [sym_function_args] = sym_function_args,
  [sym_constant] = sym_constant,
  [sym__uuid] = sym__uuid,
  [sym__string_literal] = sym__string_literal,
  [aux_sym__decimal_literal] = aux_sym__decimal_literal,
  [sym__float_literal] = sym__float_literal,
  [sym__hexadecimal_literal] = sym__hexadecimal_literal,
  [sym_code_block] = sym_code_block,
  [sym_from_spec] = sym_from_spec,
  [sym_from_spec_element] = sym_from_spec_element,
  [sym_where_spec] = sym_where_spec,
  [sym_relation_elements] = sym_relation_elements,
  [sym_relation_element] = sym_relation_element,
  [sym_assignment_tuple] = sym_assignment_tuple,
  [sym_relalationContainsKey] = sym_relalationContainsKey,
  [sym_relalationContains] = sym_relalationContains,
  [sym_order_spec] = sym_order_spec,
  [sym_order_spec_element] = sym_order_spec_element,
  [sym_delete_statement] = sym_delete_statement,
  [sym_begin_batch] = sym_begin_batch,
  [sym_delete_column_list] = sym_delete_column_list,
  [sym_delete_column_item] = sym_delete_column_item,
  [sym_using_timestamp_spec] = sym_using_timestamp_spec,
  [sym_timestamp] = sym_timestamp,
  [sym_if_exist] = sym_if_exist,
  [sym_if_spec] = sym_if_spec,
  [sym_if_condition_list] = sym_if_condition_list,
  [sym_if_condition] = sym_if_condition,
  [sym_insert_statement] = sym_insert_statement,
  [sym_keyspace] = sym_keyspace,
  [sym_table] = sym_table,
  [sym_insert_column_spec] = sym_insert_column_spec,
  [sym_column_list] = sym_column_list,
  [sym_column] = sym_column,
  [sym_insert_values_spec] = sym_insert_values_spec,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_assignment_map] = sym_assignment_map,
  [sym_assignment_set] = sym_assignment_set,
  [sym_assignment_list] = sym_assignment_list,
  [sym_if_not_exist] = sym_if_not_exist,
  [sym_using_ttl_timestamp] = sym_using_ttl_timestamp,
  [sym_ttl] = sym_ttl,
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
  [sym_use] = sym_use,
  [sym_grant] = sym_grant,
  [sym_priviledge] = sym_priviledge,
  [sym_resource] = sym_resource,
  [sym_role] = sym_role,
  [sym_function] = sym_function,
  [sym_revoke] = sym_revoke,
  [sym_list_roles] = sym_list_roles,
  [sym_list_permissions] = sym_list_permissions,
  [sym_drop_aggregate] = sym_drop_aggregate,
  [sym_drop_function] = sym_drop_function,
  [sym_drop_keyspace] = sym_drop_keyspace,
  [sym_drop_role] = sym_drop_role,
  [sym_drop_table] = sym_drop_table,
  [sym_drop_trigger] = sym_drop_trigger,
  [sym_drop_type] = sym_drop_type,
  [sym_drop_user] = sym_drop_user,
  [sym_user] = sym_user,
  [sym_create_aggregate] = sym_create_aggregate,
  [sym_aggregate] = sym_aggregate,
  [sym_init_cond_definition] = sym_init_cond_definition,
  [sym_init_cond_list] = sym_init_cond_list,
  [sym_init_cond_list_nested] = sym_init_cond_list_nested,
  [sym_init_cond_hash] = sym_init_cond_hash,
  [sym_init_cond_hash_item] = sym_init_cond_hash_item,
  [sym_hash_key] = sym_hash_key,
  [sym_create_function] = sym_create_function,
  [sym_param] = sym_param,
  [sym_data_type] = sym_data_type,
  [sym_data_type_name] = sym_data_type_name,
  [sym_data_type_definition] = sym_data_type_definition,
  [sym_return_mode] = sym_return_mode,
  [sym_language] = sym_language,
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
  [sym_single_primary_key] = sym_single_primary_key,
  [sym_compound_key] = sym_compound_key,
  [sym_partition_key] = sym_partition_key,
  [sym_clustering_key_list] = sym_clustering_key_list,
  [sym_clustering_key] = sym_clustering_key,
  [sym_composite_key] = sym_composite_key,
  [sym_partition_key_list] = sym_partition_key_list,
  [sym_with_element] = sym_with_element,
  [sym_table_options] = sym_table_options,
  [sym_table_option_item] = sym_table_option_item,
  [sym_table_option_name] = sym_table_option_name,
  [sym_table_option_value] = sym_table_option_value,
  [sym_clustering_order] = sym_clustering_order,
  [sym_order_direction] = sym_order_direction,
  [sym_create_trigger] = sym_create_trigger,
  [sym_trigger] = sym_trigger,
  [sym_trigger_class] = sym_trigger_class,
  [sym_create_type] = sym_create_type,
  [sym_type_member_column_list] = sym_type_member_column_list,
  [sym_create_user] = sym_create_user,
  [sym_alter_keyspace] = sym_alter_keyspace,
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
  [sym_type] = sym_type,
  [sym_alter_type_operation] = sym_alter_type_operation,
  [sym_alter_type_alter_type] = sym_alter_type_alter_type,
  [sym_alter_type_add] = sym_alter_type_add,
  [sym_alter_type_rename] = sym_alter_type_rename,
  [sym_alter_type_rename_list] = sym_alter_type_rename_list,
  [sym_alter_type_rename_item] = sym_alter_type_rename_item,
  [sym_alter_user] = sym_alter_user,
  [sym_user_password] = sym_user_password,
  [sym_user_super_user] = sym_user_super_user,
  [sym_apply_batch] = sym_apply_batch,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_elements_repeat1] = aux_sym_select_elements_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym__hexadecimal_literal_repeat1] = aux_sym__hexadecimal_literal_repeat1,
  [aux_sym__hexadecimal_literal_repeat2] = aux_sym__hexadecimal_literal_repeat2,
  [aux_sym_relation_elements_repeat1] = aux_sym_relation_elements_repeat1,
  [aux_sym_relation_element_repeat1] = aux_sym_relation_element_repeat1,
  [aux_sym_relation_element_repeat2] = aux_sym_relation_element_repeat2,
  [aux_sym_assignment_tuple_repeat1] = aux_sym_assignment_tuple_repeat1,
  [aux_sym_delete_column_list_repeat1] = aux_sym_delete_column_list_repeat1,
  [aux_sym_if_condition_list_repeat1] = aux_sym_if_condition_list_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignment_map_repeat1] = aux_sym_assignment_map_repeat1,
  [aux_sym_update_repeat1] = aux_sym_update_repeat1,
  [aux_sym_init_cond_list_nested_repeat1] = aux_sym_init_cond_list_nested_repeat1,
  [aux_sym_init_cond_hash_repeat1] = aux_sym_init_cond_hash_repeat1,
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_partition_key_list_repeat1] = aux_sym_partition_key_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_type_member_column_list_repeat1] = aux_sym_type_member_column_list_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
  [anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
  [anon_alias_sym_ALL_ROLES] = anon_alias_sym_ALL_ROLES,
  [anon_alias_sym_CONTAINS] = anon_alias_sym_CONTAINS,
  [anon_alias_sym_DROP_INDEX] = anon_alias_sym_DROP_INDEX,
  [anon_alias_sym_IF] = anon_alias_sym_IF,
  [anon_alias_sym_ORDER_BY] = anon_alias_sym_ORDER_BY,
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
  [aux_sym_select_statement_token6] = {
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
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_4digit] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__dec_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_X_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_object_name] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [aux_sym_relalationContainsKey_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relalationContainsKey_token2] = {
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
  [aux_sym_delete_statement_token1] = {
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
  [aux_sym_timestamp_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_exist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_exist_token2] = {
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
  [sym__dquote] = {
    .visible = false,
    .named = true,
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
  [aux_sym_if_not_exist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ttl_token1] = {
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
  [aux_sym_revoke_token1] = {
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
  [aux_sym_durable_writes_token2] = {
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
  [aux_sym_primary_key_column_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_clustering_order_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token2] = {
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
  [aux_sym_user_super_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_apply_batch_token1] = {
    .visible = true,
    .named = false,
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
  [sym__uuid] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__decimal_literal] = {
    .visible = false,
    .named = false,
  },
  [sym__float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_from_spec_element] = {
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
  [sym_assignment_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_relalationContainsKey] = {
    .visible = true,
    .named = true,
  },
  [sym_relalationContains] = {
    .visible = true,
    .named = true,
  },
  [sym_order_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_order_spec_element] = {
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
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_if_exist] = {
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
  [sym_keyspace] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
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
  [sym_column] = {
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
  [sym_if_not_exist] = {
    .visible = true,
    .named = true,
  },
  [sym_using_ttl_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_ttl] = {
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
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_grant] = {
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
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_revoke] = {
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
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_create_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
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
  [sym_hash_key] = {
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
  [sym_language] = {
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
  [sym_single_primary_key] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_key] = {
    .visible = true,
    .named = true,
  },
  [sym_partition_key] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_key_list] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_key] = {
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
  [sym_order_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_create_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger] = {
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
  [sym_type_member_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_create_user] = {
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
  [sym_type] = {
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
  [sym_user_password] = {
    .visible = true,
    .named = true,
  },
  [sym_user_super_user] = {
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
  [aux_sym__hexadecimal_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hexadecimal_literal_repeat2] = {
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
  [aux_sym_assignment_tuple_repeat1] = {
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
  [aux_sym_column_list_repeat1] = {
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
  [aux_sym_partition_key_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_member_column_list_repeat1] = {
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
  [anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ALL_ROLES] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_DROP_INDEX] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ORDER_BY] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_code_block = 2,
  field_column = 3,
  field_content = 4,
  field_function = 5,
  field_keyspace = 6,
  field_language = 7,
  field_option = 8,
  field_param_name = 9,
  field_role = 10,
  field_table = 11,
  field_trigger = 12,
  field_user = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_code_block] = "code_block",
  [field_column] = "column",
  [field_content] = "content",
  [field_function] = "function",
  [field_keyspace] = "keyspace",
  [field_language] = "language",
  [field_option] = "option",
  [field_param_name] = "param_name",
  [field_role] = "role",
  [field_table] = "table",
  [field_trigger] = "trigger",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [9] = {.index = 6, .length = 3},
  [10] = {.index = 9, .length = 3},
  [11] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
  [19] = {.index = 16, .length = 1},
  [22] = {.index = 17, .length = 1},
  [24] = {.index = 18, .length = 3},
  [27] = {.index = 21, .length = 1},
  [28] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyspace, 0},
  [1] =
    {field_table, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_role, 0},
  [4] =
    {field_trigger, 0},
  [5] =
    {field_user, 0},
  [6] =
    {field_keyspace, 0},
    {field_keyspace, 1},
    {field_keyspace, 2},
  [9] =
    {field_table, 0},
    {field_table, 1},
    {field_table, 2},
  [12] =
    {field_arguments, 2},
    {field_function, 0},
  [14] =
    {field_column, 0},
  [15] =
    {field_content, 1},
  [16] =
    {field_option, 0},
  [17] =
    {field_param_name, 0},
  [18] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
  [21] =
    {field_language, 0},
  [22] =
    {field_code_block, 0},
    {field_code_block, 2},
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = anon_alias_sym_DROP_INDEX,
    [1] = anon_alias_sym_DROP_INDEX,
  },
  [8] = {
    [0] = aux_sym_priviledge_token2,
  },
  [12] = {
    [0] = anon_alias_sym_IF,
  },
  [14] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
  },
  [16] = {
    [0] = aux_sym_resource_token1,
  },
  [17] = {
    [0] = aux_sym_resource_token4,
  },
  [18] = {
    [0] = anon_alias_sym_ALL_ROLES,
    [1] = anon_alias_sym_ALL_ROLES,
  },
  [20] = {
    [0] = anon_alias_sym_ORDER_BY,
    [1] = anon_alias_sym_ORDER_BY,
  },
  [21] = {
    [1] = anon_alias_sym_CONTAINS,
  },
  [23] = {
    [2] = aux_sym_relalationContainsKey_token1,
  },
  [25] = {
    [0] = aux_sym_create_index_token2,
  },
  [26] = {
    [0] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
    [1] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
    [2] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
    [3] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [52] = 43,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 25,
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
  [79] = 61,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 60,
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
  [119] = 84,
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
  [132] = 77,
  [133] = 133,
  [134] = 78,
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
  [230] = 226,
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
  [355] = 310,
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
  [378] = 367,
  [379] = 368,
  [380] = 380,
  [381] = 380,
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
  [401] = 61,
  [402] = 402,
  [403] = 60,
  [404] = 404,
  [405] = 399,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 411,
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
  [433] = 429,
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
  [459] = 440,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 444,
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
  [482] = 229,
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
  [535] = 297,
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
  [629] = 569,
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
  [682] = 157,
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
  [715] = 713,
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
  [790] = 713,
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
  [1141] = 1078,
  [1142] = 999,
  [1143] = 1143,
  [1144] = 1007,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1104,
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
  [1159] = 1059,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(454);
      if (lookahead == '"') ADVANCE(695);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '+') ADVANCE(712);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '<') ADVANCE(671);
      if (lookahead == '=') ADVANCE(670);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(687);
      if (lookahead == ']') ADVANCE(688);
      if (lookahead == '{') ADVANCE(697);
      if (lookahead == '}') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(478);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(475);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(359);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(695);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(557);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(577);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(695);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '0') ADVANCE(492);
      if (lookahead == 'X') ADVANCE(499);
      if (lookahead == '[') ADVANCE(687);
      if (lookahead == '{') ADVANCE(697);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(665);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(488);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == ']') ADVANCE(688);
      if (lookahead == '}') ADVANCE(699);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(494);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(681);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(236);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(731);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(731);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(731);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(436);
      END_STATE();
    case 155:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(689);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(463);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(769);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 166:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 167:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 168:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 169:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 170:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 171:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 172:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 173:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 176:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(760);
      END_STATE();
    case 177:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(686);
      END_STATE();
    case 178:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 179:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 180:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 182:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(414);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 211:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 240:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(667);
      END_STATE();
    case 241:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 242:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 243:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 244:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 245:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 246:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 260:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 262:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 263:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 289:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 290:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 291:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 303:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(748);
      END_STATE();
    case 304:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(709);
      END_STATE();
    case 305:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(690);
      END_STATE();
    case 306:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 307:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 308:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 309:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 310:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 313:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 314:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 315:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(696);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(763);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      END_STATE();
    case 352:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      END_STATE();
    case 353:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 354:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      END_STATE();
    case 355:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      END_STATE();
    case 356:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      END_STATE();
    case 357:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(726);
      END_STATE();
    case 358:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      END_STATE();
    case 359:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 360:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(756);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(749);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 410:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 411:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 412:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 413:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 414:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 415:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 416:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 417:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 418:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 420:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 421:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 422:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 426:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      END_STATE();
    case 427:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 428:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(462);
      END_STATE();
    case 429:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 430:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(705);
      END_STATE();
    case 431:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 432:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 433:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 434:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(679);
      END_STATE();
    case 435:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 436:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(722);
      END_STATE();
    case 437:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(768);
      END_STATE();
    case 438:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 439:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 440:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 441:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 442:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 443:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(113);
      END_STATE();
    case 444:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 445:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 446:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 447:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(490);
      END_STATE();
    case 449:
      if (eof) ADVANCE(454);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '0') ADVANCE(492);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '<') ADVANCE(671);
      if (lookahead == '=') ADVANCE(670);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(687);
      if (lookahead == '{') ADVANCE(697);
      if (lookahead == '}') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(449)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(493);
      END_STATE();
    case 450:
      if (eof) ADVANCE(454);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '<') ADVANCE(671);
      if (lookahead == '=') ADVANCE(670);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '[') ADVANCE(687);
      if (lookahead == ']') ADVANCE(688);
      if (lookahead == '{') ADVANCE(697);
      if (lookahead == '}') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(359);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(125);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(28);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(450)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 451:
      if (eof) ADVANCE(454);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(547);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(451)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 452:
      if (eof) ADVANCE(454);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(452)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 453:
      if (eof) ADVANCE(454);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(453)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(495);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(681);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(666);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(666);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(615);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(673);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(414);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(707);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_durable_writes_token2);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
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
  [4] = {.lex_state = 450},
  [5] = {.lex_state = 450},
  [6] = {.lex_state = 450},
  [7] = {.lex_state = 450},
  [8] = {.lex_state = 450},
  [9] = {.lex_state = 450},
  [10] = {.lex_state = 450},
  [11] = {.lex_state = 450},
  [12] = {.lex_state = 450},
  [13] = {.lex_state = 450},
  [14] = {.lex_state = 450},
  [15] = {.lex_state = 450},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 450},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 450},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 450},
  [48] = {.lex_state = 450},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 449},
  [52] = {.lex_state = 449},
  [53] = {.lex_state = 450},
  [54] = {.lex_state = 449},
  [55] = {.lex_state = 450},
  [56] = {.lex_state = 449},
  [57] = {.lex_state = 450},
  [58] = {.lex_state = 450},
  [59] = {.lex_state = 451},
  [60] = {.lex_state = 452},
  [61] = {.lex_state = 452},
  [62] = {.lex_state = 450},
  [63] = {.lex_state = 450},
  [64] = {.lex_state = 450},
  [65] = {.lex_state = 450},
  [66] = {.lex_state = 450},
  [67] = {.lex_state = 450},
  [68] = {.lex_state = 450},
  [69] = {.lex_state = 450},
  [70] = {.lex_state = 450},
  [71] = {.lex_state = 449},
  [72] = {.lex_state = 450},
  [73] = {.lex_state = 450},
  [74] = {.lex_state = 450},
  [75] = {.lex_state = 450},
  [76] = {.lex_state = 450},
  [77] = {.lex_state = 450},
  [78] = {.lex_state = 450},
  [79] = {.lex_state = 453},
  [80] = {.lex_state = 450},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 450},
  [83] = {.lex_state = 450},
  [84] = {.lex_state = 450},
  [85] = {.lex_state = 450},
  [86] = {.lex_state = 450},
  [87] = {.lex_state = 450},
  [88] = {.lex_state = 453},
  [89] = {.lex_state = 450},
  [90] = {.lex_state = 450},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 449},
  [93] = {.lex_state = 450},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 449},
  [97] = {.lex_state = 450},
  [98] = {.lex_state = 449},
  [99] = {.lex_state = 449},
  [100] = {.lex_state = 450},
  [101] = {.lex_state = 449},
  [102] = {.lex_state = 450},
  [103] = {.lex_state = 450},
  [104] = {.lex_state = 449},
  [105] = {.lex_state = 450},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 449},
  [110] = {.lex_state = 450},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 449},
  [113] = {.lex_state = 450},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 450},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 450},
  [122] = {.lex_state = 450},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 450},
  [125] = {.lex_state = 450},
  [126] = {.lex_state = 450},
  [127] = {.lex_state = 450},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 450},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 450},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 450},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 450},
  [142] = {.lex_state = 450},
  [143] = {.lex_state = 450},
  [144] = {.lex_state = 450},
  [145] = {.lex_state = 450},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 450},
  [148] = {.lex_state = 450},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 450},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 450},
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
  [170] = {.lex_state = 450},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
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
  [200] = {.lex_state = 450},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 449},
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
  [224] = {.lex_state = 449},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 3},
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
  [310] = {.lex_state = 449},
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
  [340] = {.lex_state = 449},
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
  [355] = {.lex_state = 449},
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
  [367] = {.lex_state = 449},
  [368] = {.lex_state = 449},
  [369] = {.lex_state = 449},
  [370] = {.lex_state = 449},
  [371] = {.lex_state = 449},
  [372] = {.lex_state = 449},
  [373] = {.lex_state = 449},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 449},
  [376] = {.lex_state = 449},
  [377] = {.lex_state = 449},
  [378] = {.lex_state = 449},
  [379] = {.lex_state = 449},
  [380] = {.lex_state = 449},
  [381] = {.lex_state = 449},
  [382] = {.lex_state = 449},
  [383] = {.lex_state = 449},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 450},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 450},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 450},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 17},
  [399] = {.lex_state = 449},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 6},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 6},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 449},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 9},
  [409] = {.lex_state = 450},
  [410] = {.lex_state = 450},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 450},
  [413] = {.lex_state = 450},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 449},
  [423] = {.lex_state = 10},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 1},
  [431] = {.lex_state = 449},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 36},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 450},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 1},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 450},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 450},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 450},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 1},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 449},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 450},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 1},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 1},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 1},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 1},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 1},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 1},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 450},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 450},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 450},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 450},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 450},
  [571] = {.lex_state = 450},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 450},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 1},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 1},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 450},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 450},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 1},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 450},
  [606] = {.lex_state = 1},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 1},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 450},
  [612] = {.lex_state = 1},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 1},
  [617] = {.lex_state = 1},
  [618] = {.lex_state = 1},
  [619] = {.lex_state = 450},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 450},
  [627] = {.lex_state = 450},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 1},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 1},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 1},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 1},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 1},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 1},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 1},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 450},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 1},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 1},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 6},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 1},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 1},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 1},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 450},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 450},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 450},
  [681] = {.lex_state = 6},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 450},
  [687] = {.lex_state = 1},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 1},
  [692] = {.lex_state = 450},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 1},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 1},
  [702] = {.lex_state = 1},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 1},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 1},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 1},
  [709] = {.lex_state = 1},
  [710] = {.lex_state = 1},
  [711] = {.lex_state = 1},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 6},
  [714] = {.lex_state = 1},
  [715] = {.lex_state = 6},
  [716] = {.lex_state = 450},
  [717] = {.lex_state = 1},
  [718] = {.lex_state = 1},
  [719] = {.lex_state = 450},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 1},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 1},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 1},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 1},
  [732] = {.lex_state = 1},
  [733] = {.lex_state = 1},
  [734] = {.lex_state = 1},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 1},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 1},
  [740] = {.lex_state = 1},
  [741] = {.lex_state = 1},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 1},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 450},
  [748] = {.lex_state = 1},
  [749] = {.lex_state = 1},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 1},
  [758] = {.lex_state = 450},
  [759] = {.lex_state = 1},
  [760] = {.lex_state = 450},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 450},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 450},
  [766] = {.lex_state = 1},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 1},
  [770] = {.lex_state = 1},
  [771] = {.lex_state = 1},
  [772] = {.lex_state = 1},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 450},
  [776] = {.lex_state = 1},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 1},
  [780] = {.lex_state = 450},
  [781] = {.lex_state = 1},
  [782] = {.lex_state = 1},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 1},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 1},
  [788] = {.lex_state = 450},
  [789] = {.lex_state = 1},
  [790] = {.lex_state = 6},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 1},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 450},
  [795] = {.lex_state = 6},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 1},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 450},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 450},
  [802] = {.lex_state = 1},
  [803] = {.lex_state = 450},
  [804] = {.lex_state = 1},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 1},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 450},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 1},
  [812] = {.lex_state = 1},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 450},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 450},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 450},
  [821] = {.lex_state = 1},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 450},
  [826] = {.lex_state = 1},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 1},
  [829] = {.lex_state = 449},
  [830] = {.lex_state = 450},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 1},
  [833] = {.lex_state = 1},
  [834] = {.lex_state = 1},
  [835] = {.lex_state = 1},
  [836] = {.lex_state = 450},
  [837] = {.lex_state = 1},
  [838] = {.lex_state = 1},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 1},
  [841] = {.lex_state = 1},
  [842] = {.lex_state = 1},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 1},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 450},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 1},
  [852] = {.lex_state = 1},
  [853] = {.lex_state = 1},
  [854] = {.lex_state = 450},
  [855] = {.lex_state = 1},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 1},
  [858] = {.lex_state = 6},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 450},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 450},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 449},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 450},
  [877] = {.lex_state = 0},
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
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 450},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 450},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 450},
  [915] = {.lex_state = 449},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 450},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 450},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 449},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 452},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 450},
  [953] = {.lex_state = 450},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 450},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 449},
  [972] = {.lex_state = 449},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 450},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 450},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 5},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 450},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 486},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 450},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 449},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 450},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 450},
  [1022] = {.lex_state = 5},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 450},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 450},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 450},
  [1032] = {.lex_state = 449},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 450},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 450},
  [1044] = {.lex_state = 450},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 450},
  [1050] = {.lex_state = 450},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 1},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 450},
  [1065] = {.lex_state = 1},
  [1066] = {.lex_state = 1},
  [1067] = {.lex_state = 450},
  [1068] = {.lex_state = 1},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 1},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 450},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 450},
  [1078] = {.lex_state = 450},
  [1079] = {.lex_state = 450},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 450},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 450},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 1},
  [1101] = {.lex_state = 6},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 450},
  [1104] = {.lex_state = 1},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 450},
  [1107] = {.lex_state = 1},
  [1108] = {.lex_state = 450},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 450},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 450},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 1},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 450},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 450},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 449},
  [1141] = {.lex_state = 450},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 1},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 450},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 450},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_select_statement_token3] = ACTIONS(1),
    [aux_sym_select_statement_token4] = ACTIONS(1),
    [aux_sym_select_statement_token5] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym__dec_digit] = ACTIONS(1),
    [anon_sym_X_SQUOTE] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [aux_sym_where_spec_token1] = ACTIONS(1),
    [aux_sym_relation_elements_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_relation_element_token1] = ACTIONS(1),
    [aux_sym_relalationContainsKey_token2] = ACTIONS(1),
    [aux_sym_order_spec_token1] = ACTIONS(1),
    [aux_sym_order_spec_token2] = ACTIONS(1),
    [aux_sym_delete_statement_token1] = ACTIONS(1),
    [aux_sym_begin_batch_token1] = ACTIONS(1),
    [aux_sym_begin_batch_token2] = ACTIONS(1),
    [aux_sym_begin_batch_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_using_timestamp_spec_token1] = ACTIONS(1),
    [aux_sym_timestamp_token1] = ACTIONS(1),
    [aux_sym_if_exist_token1] = ACTIONS(1),
    [aux_sym_if_exist_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [sym__dquote] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_if_not_exist_token1] = ACTIONS(1),
    [aux_sym_ttl_token1] = ACTIONS(1),
    [aux_sym_truncate_token1] = ACTIONS(1),
    [aux_sym_truncate_token2] = ACTIONS(1),
    [aux_sym_create_index_token1] = ACTIONS(1),
    [aux_sym_create_index_token2] = ACTIONS(1),
    [aux_sym_create_index_token3] = ACTIONS(1),
    [aux_sym_index_keys_spec_token1] = ACTIONS(1),
    [aux_sym_index_entries_s_spec_token1] = ACTIONS(1),
    [aux_sym_drop_index_token1] = ACTIONS(1),
    [aux_sym_update_token1] = ACTIONS(1),
    [aux_sym_update_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_use_token1] = ACTIONS(1),
    [aux_sym_grant_token1] = ACTIONS(1),
    [aux_sym_grant_token2] = ACTIONS(1),
    [aux_sym_priviledge_token2] = ACTIONS(1),
    [aux_sym_priviledge_token3] = ACTIONS(1),
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
    [aux_sym_resource_token2] = ACTIONS(1),
    [aux_sym_resource_token6] = ACTIONS(1),
    [aux_sym_revoke_token1] = ACTIONS(1),
    [aux_sym_list_roles_token1] = ACTIONS(1),
    [aux_sym_list_roles_token2] = ACTIONS(1),
    [aux_sym_list_roles_token3] = ACTIONS(1),
    [aux_sym_drop_trigger_token1] = ACTIONS(1),
    [aux_sym_drop_type_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token2] = ACTIONS(1),
    [aux_sym_create_aggregate_token3] = ACTIONS(1),
    [aux_sym_create_aggregate_token4] = ACTIONS(1),
    [aux_sym_create_aggregate_token6] = ACTIONS(1),
    [aux_sym_create_function_token1] = ACTIONS(1),
    [aux_sym_create_function_token2] = ACTIONS(1),
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
    [aux_sym_return_mode_token2] = ACTIONS(1),
    [aux_sym_create_keyspace_token1] = ACTIONS(1),
    [aux_sym_create_keyspace_token2] = ACTIONS(1),
    [aux_sym_durable_writes_token2] = ACTIONS(1),
    [aux_sym_role_with_options_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token2] = ACTIONS(1),
    [aux_sym_role_with_options_token3] = ACTIONS(1),
    [aux_sym_role_with_options_token4] = ACTIONS(1),
    [aux_sym_primary_key_column_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1149),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(306),
    [sym_delete_statement] = STATE(306),
    [sym_begin_batch] = STATE(563),
    [sym_insert_statement] = STATE(306),
    [sym_truncate] = STATE(306),
    [sym_create_index] = STATE(306),
    [sym_drop_index] = STATE(306),
    [sym_update] = STATE(306),
    [sym_use] = STATE(306),
    [sym_grant] = STATE(306),
    [sym_revoke] = STATE(306),
    [sym_list_roles] = STATE(306),
    [sym_list_permissions] = STATE(306),
    [sym_drop_aggregate] = STATE(306),
    [sym_drop_function] = STATE(306),
    [sym_drop_keyspace] = STATE(306),
    [sym_drop_role] = STATE(306),
    [sym_drop_table] = STATE(306),
    [sym_drop_trigger] = STATE(306),
    [sym_drop_type] = STATE(306),
    [sym_drop_user] = STATE(306),
    [sym_create_aggregate] = STATE(306),
    [sym_create_function] = STATE(306),
    [sym_create_keyspace] = STATE(306),
    [sym_create_role] = STATE(306),
    [sym_create_table] = STATE(306),
    [sym_create_trigger] = STATE(306),
    [sym_create_type] = STATE(306),
    [sym_create_user] = STATE(306),
    [sym_alter_keyspace] = STATE(306),
    [sym_alter_role] = STATE(306),
    [sym_alter_table] = STATE(306),
    [sym_alter_type] = STATE(306),
    [sym_alter_user] = STATE(306),
    [sym_apply_batch] = STATE(306),
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
    [aux_sym_priviledge_token3] = ACTIONS(25),
    [aux_sym_revoke_token1] = ACTIONS(27),
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
      aux_sym_priviledge_token3,
    ACTIONS(27), 1,
      aux_sym_revoke_token1,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(563), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(306), 34,
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
      sym_drop_function,
      sym_drop_keyspace,
      sym_drop_role,
      sym_drop_table,
      sym_drop_trigger,
      sym_drop_type,
      sym_drop_user,
      sym_create_aggregate,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_trigger,
      sym_create_type,
      sym_create_user,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_type,
      sym_alter_user,
      sym_apply_batch,
  [89] = 18,
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
      aux_sym_priviledge_token3,
    ACTIONS(70), 1,
      aux_sym_revoke_token1,
    ACTIONS(73), 1,
      aux_sym_list_roles_token1,
    ACTIONS(76), 1,
      aux_sym_apply_batch_token1,
    STATE(563), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(306), 34,
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
      sym_drop_function,
      sym_drop_keyspace,
      sym_drop_role,
      sym_drop_table,
      sym_drop_trigger,
      sym_drop_type,
      sym_drop_user,
      sym_create_aggregate,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_trigger,
      sym_create_type,
      sym_create_user,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_type,
      sym_alter_user,
      sym_apply_batch,
  [178] = 3,
    ACTIONS(81), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(79), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [219] = 4,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(84), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [261] = 1,
    ACTIONS(90), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_clustering_order_token1,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [297] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(92), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [336] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(94), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [377] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(98), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [416] = 2,
    ACTIONS(102), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      aux_sym_select_element_token1,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [451] = 2,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      aux_sym_select_element_token1,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [486] = 2,
    ACTIONS(110), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      aux_sym_select_element_token1,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [521] = 1,
    ACTIONS(112), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [553] = 1,
    ACTIONS(114), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [585] = 1,
    ACTIONS(94), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [617] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1092), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [654] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(946), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [691] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(198), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [728] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(965), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [765] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1049), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [802] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1073), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [839] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(599), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [876] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1019), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [913] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(120), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [946] = 2,
    ACTIONS(124), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(126), 25,
      aux_sym_timestamp_token1,
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
  [979] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(956), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1016] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(961), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1053] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(997), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1090] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1090), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1127] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1096), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1164] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(730), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1201] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(929), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1238] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(911), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1275] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1075), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1312] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(240), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1349] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(555), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1386] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(989), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1423] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(918), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1460] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(197), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1497] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1024), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1534] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(202), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1571] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1045), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1608] = 2,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(130), 25,
      aux_sym_timestamp_token1,
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
  [1641] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(893), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1678] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(132), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1711] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(55), 1,
      sym_data_type_name,
    STATE(1119), 1,
      sym_data_type,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1748] = 1,
    ACTIONS(120), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1778] = 1,
    ACTIONS(132), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1808] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(697), 1,
      sym_data_type_name,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1842] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(839), 1,
      sym_data_type_name,
    ACTIONS(118), 25,
      aux_sym_timestamp_token1,
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
  [1876] = 16,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(603), 1,
      sym_expression,
    STATE(1040), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(800), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1933] = 1,
    ACTIONS(128), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_drop_type_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [1959] = 1,
    ACTIONS(158), 23,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1985] = 15,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(793), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(800), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [2039] = 3,
    ACTIONS(162), 1,
      anon_sym_LT,
    STATE(69), 1,
      sym_data_type_definition,
    ACTIONS(160), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2069] = 1,
    ACTIONS(124), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_drop_type_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [2095] = 7,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    STATE(102), 1,
      sym_where_spec,
    STATE(178), 1,
      sym_order_spec,
    ACTIONS(164), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2132] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(174), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_RPAREN,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [2163] = 8,
    ACTIONS(180), 1,
      sym_object_name,
    ACTIONS(182), 1,
      aux_sym_clustering_order_token1,
    STATE(148), 1,
      sym_table_option_item,
    STATE(200), 1,
      sym_table_options,
    STATE(299), 1,
      sym_clustering_order,
    STATE(921), 1,
      sym_table_option_name,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(178), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2202] = 3,
    ACTIONS(186), 1,
      sym__hex_digit,
    STATE(60), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(184), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2231] = 3,
    ACTIONS(191), 1,
      sym__hex_digit,
    STATE(60), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(189), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2260] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(195), 1,
      aux_sym_select_statement_token4,
    ACTIONS(197), 1,
      aux_sym_select_statement_token5,
    STATE(105), 1,
      sym_where_spec,
    STATE(152), 1,
      sym_order_spec,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2297] = 2,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2324] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(103), 1,
      sym_where_spec,
    STATE(191), 1,
      sym_order_spec,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2361] = 1,
    ACTIONS(209), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_aggregate_token4,
      aux_sym_create_aggregate_token6,
      aux_sym_apply_batch_token1,
  [2386] = 1,
    ACTIONS(211), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2410] = 1,
    ACTIONS(213), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2434] = 1,
    ACTIONS(215), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_list_roles_token3,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [2458] = 1,
    ACTIONS(217), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2482] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(219), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2510] = 3,
    STATE(154), 1,
      sym_order_direction,
    ACTIONS(223), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(221), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2538] = 1,
    ACTIONS(134), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [2562] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(209), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2588] = 1,
    ACTIONS(225), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2612] = 1,
    ACTIONS(227), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2636] = 1,
    ACTIONS(229), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2660] = 3,
    ACTIONS(233), 1,
      aux_sym_relation_elements_token1,
    STATE(77), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(231), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2688] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(77), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(236), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2716] = 3,
    ACTIONS(240), 1,
      sym__hex_digit,
    STATE(88), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(189), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2744] = 1,
    ACTIONS(242), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2768] = 15,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(806), 1,
      sym_constant,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(543), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2820] = 1,
    ACTIONS(252), 21,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_function_token2,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2844] = 1,
    ACTIONS(254), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2868] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(256), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2896] = 1,
    ACTIONS(231), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2920] = 1,
    ACTIONS(258), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2944] = 1,
    ACTIONS(260), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2968] = 3,
    ACTIONS(262), 1,
      sym__hex_digit,
    STATE(88), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(184), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2996] = 1,
    ACTIONS(265), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3020] = 1,
    ACTIONS(267), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3044] = 16,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(589), 1,
      sym_init_cond_hash_item,
    STATE(590), 1,
      sym_init_cond_list,
    STATE(593), 1,
      sym_constant,
    STATE(1088), 1,
      sym_hash_key,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3097] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(725), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3144] = 1,
    ACTIONS(122), 20,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [3167] = 5,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(279), 1,
      aux_sym_if_exist_token1,
    STATE(205), 1,
      sym_if_not_exist,
    STATE(290), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3198] = 15,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(1001), 1,
      sym_function_args,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(678), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3249] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(322), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3296] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(289), 18,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3323] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(317), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3370] = 2,
    ACTIONS(293), 1,
      aux_sym_relation_element_token1,
    ACTIONS(291), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3395] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(295), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [3420] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(282), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3467] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(195), 1,
      aux_sym_select_statement_token4,
    ACTIONS(197), 1,
      aux_sym_select_statement_token5,
    STATE(152), 1,
      sym_order_spec,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3498] = 5,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    STATE(178), 1,
      sym_order_spec,
    ACTIONS(164), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3529] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(348), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3576] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(299), 1,
      aux_sym_select_statement_token4,
    ACTIONS(301), 1,
      aux_sym_select_statement_token5,
    STATE(161), 1,
      sym_order_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3607] = 5,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(279), 1,
      aux_sym_if_exist_token1,
    STATE(171), 1,
      sym_if_not_exist,
    STATE(269), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3638] = 5,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(279), 1,
      aux_sym_if_exist_token1,
    STATE(192), 1,
      sym_if_not_exist,
    STATE(357), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3669] = 5,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(279), 1,
      aux_sym_if_exist_token1,
    STATE(181), 1,
      sym_if_not_exist,
    STATE(338), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3700] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(329), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3747] = 1,
    ACTIONS(309), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3770] = 5,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(279), 1,
      aux_sym_if_exist_token1,
    STATE(162), 1,
      sym_if_not_exist,
    STATE(365), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3801] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(354), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(204), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3848] = 1,
    ACTIONS(313), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3870] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(360), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3896] = 1,
    ACTIONS(319), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3918] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(323), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3946] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(251), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3972] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(234), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3998] = 3,
    ACTIONS(329), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(256), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4024] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(345), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4050] = 1,
    ACTIONS(333), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4072] = 3,
    ACTIONS(337), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(335), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4098] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(242), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4124] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(344), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4152] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(301), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4180] = 1,
    ACTIONS(346), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4202] = 3,
    ACTIONS(350), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4228] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(247), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4254] = 1,
    ACTIONS(354), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4276] = 3,
    STATE(255), 1,
      sym_user_super_user,
    ACTIONS(358), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4302] = 2,
    ACTIONS(362), 1,
      aux_sym_priviledge_token2,
    ACTIONS(360), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4326] = 3,
    ACTIONS(364), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(231), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4352] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(197), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4380] = 3,
    ACTIONS(329), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(236), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4406] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(346), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4432] = 1,
    ACTIONS(295), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [4454] = 3,
    STATE(319), 1,
      sym_user_super_user,
    ACTIONS(358), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4480] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(238), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4506] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(373), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4532] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(232), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4558] = 1,
    ACTIONS(380), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4580] = 1,
    ACTIONS(382), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4602] = 1,
    ACTIONS(384), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4624] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(388), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4652] = 1,
    ACTIONS(390), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4674] = 3,
    ACTIONS(317), 1,
      aux_sym_if_exist_token1,
    STATE(331), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4700] = 1,
    ACTIONS(394), 19,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4722] = 3,
    ACTIONS(350), 1,
      aux_sym_relation_elements_token1,
    STATE(127), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(396), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4748] = 3,
    STATE(288), 1,
      sym_user_super_user,
    ACTIONS(358), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4774] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4799] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(327), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4824] = 3,
    ACTIONS(299), 1,
      aux_sym_select_statement_token4,
    ACTIONS(301), 1,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4849] = 3,
    ACTIONS(410), 1,
      aux_sym_relation_elements_token1,
    STATE(203), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4874] = 1,
    ACTIONS(412), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4895] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4920] = 1,
    ACTIONS(418), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4941] = 3,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4966] = 1,
    ACTIONS(425), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4987] = 1,
    ACTIONS(427), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5008] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5033] = 3,
    ACTIONS(323), 1,
      aux_sym_select_statement_token5,
    ACTIONS(433), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5058] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(338), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5083] = 1,
    ACTIONS(435), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5104] = 1,
    ACTIONS(437), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5125] = 3,
    ACTIONS(441), 1,
      aux_sym_create_keyspace_token1,
    STATE(339), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5150] = 1,
    ACTIONS(443), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5171] = 1,
    ACTIONS(445), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5192] = 3,
    ACTIONS(449), 1,
      aux_sym_relation_elements_token1,
    STATE(174), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5217] = 1,
    ACTIONS(451), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5238] = 1,
    ACTIONS(335), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5259] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(290), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5284] = 13,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(957), 1,
      sym_function_args,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(678), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5329] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5354] = 3,
    ACTIONS(449), 1,
      aux_sym_relation_elements_token1,
    STATE(184), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(455), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5379] = 1,
    ACTIONS(457), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [5400] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5421] = 1,
    ACTIONS(461), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5442] = 3,
    ACTIONS(195), 1,
      aux_sym_select_statement_token4,
    ACTIONS(197), 1,
      aux_sym_select_statement_token5,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5467] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(267), 1,
      sym_role_with,
    ACTIONS(463), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5492] = 3,
    ACTIONS(441), 1,
      aux_sym_create_keyspace_token1,
    STATE(305), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5517] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(269), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5542] = 1,
    ACTIONS(360), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [5563] = 3,
    ACTIONS(441), 1,
      aux_sym_create_keyspace_token1,
    STATE(263), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5588] = 3,
    ACTIONS(471), 1,
      aux_sym_relation_elements_token1,
    STATE(184), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5613] = 1,
    ACTIONS(420), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5634] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5659] = 1,
    ACTIONS(476), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5680] = 1,
    ACTIONS(478), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [5701] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(343), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5726] = 3,
    ACTIONS(484), 1,
      aux_sym_relation_elements_token1,
    STATE(190), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5751] = 3,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(164), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5776] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(239), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5801] = 3,
    ACTIONS(491), 1,
      aux_sym_create_index_token3,
    ACTIONS(493), 1,
      aux_sym_list_roles_token2,
    ACTIONS(489), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5826] = 2,
    ACTIONS(497), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(495), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5849] = 2,
    ACTIONS(499), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(495), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5872] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5897] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5922] = 1,
    ACTIONS(505), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5943] = 3,
    ACTIONS(509), 1,
      aux_sym_list_roles_token2,
    ACTIONS(511), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5968] = 3,
    ACTIONS(515), 1,
      aux_sym_clustering_order_token1,
    STATE(362), 1,
      sym_clustering_order,
    ACTIONS(513), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5993] = 3,
    ACTIONS(441), 1,
      aux_sym_create_keyspace_token1,
    STATE(361), 1,
      sym_with_element,
    ACTIONS(517), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6018] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6043] = 3,
    ACTIONS(410), 1,
      aux_sym_relation_elements_token1,
    STATE(190), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(521), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6068] = 1,
    ACTIONS(523), 18,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6089] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(357), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6114] = 3,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6139] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(530), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6162] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6184] = 1,
    ACTIONS(534), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6204] = 13,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(501), 1,
      sym_constant,
    STATE(846), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6248] = 2,
    ACTIONS(538), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6270] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6292] = 1,
    ACTIONS(525), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6312] = 2,
    ACTIONS(542), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6334] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6354] = 1,
    ACTIONS(544), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6374] = 1,
    ACTIONS(546), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6394] = 1,
    ACTIONS(532), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
      aux_sym_apply_batch_token1,
  [6414] = 1,
    ACTIONS(548), 17,
      ts_builtin_sym_end,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6434] = 2,
    ACTIONS(552), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6456] = 2,
    ACTIONS(556), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6478] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6498] = 1,
    ACTIONS(558), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6518] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(728), 2,
      sym_constant,
      sym_init_cond_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6560] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(560), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(756), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6602] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(86), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6644] = 2,
    ACTIONS(566), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6666] = 1,
    ACTIONS(530), 17,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6686] = 1,
    ACTIONS(568), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6706] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(246), 1,
      sym__hex_4digit,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(562), 1,
      sym_object_name,
    ACTIONS(570), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(244), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(86), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6748] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6767] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6786] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6805] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6824] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6843] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6862] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6881] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6900] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6919] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6938] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6957] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6976] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6995] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7014] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7033] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7052] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7071] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7090] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7109] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7128] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7147] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7166] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7185] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7204] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7223] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7242] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7261] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7280] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7299] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7318] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7337] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7356] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7375] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7394] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7413] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7432] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7451] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7470] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7489] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7508] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7527] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7546] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7565] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7584] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7603] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7622] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7641] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7660] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7679] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7698] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7717] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7736] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7755] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7774] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7793] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7812] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7831] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7850] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7869] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7888] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7907] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7926] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7945] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7964] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7983] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8002] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8021] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8040] = 1,
    ACTIONS(513), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8059] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8078] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8097] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8116] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8135] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8154] = 1,
    ACTIONS(517), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8173] = 2,
    ACTIONS(698), 1,
      anon_sym_SEMI,
    ACTIONS(696), 15,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8194] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8213] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8232] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8251] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_0X,
    ACTIONS(706), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(90), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8292] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8311] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8330] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8349] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8368] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8387] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8406] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8425] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8444] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8463] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8482] = 1,
    ACTIONS(726), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8501] = 1,
    ACTIONS(728), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8520] = 1,
    ACTIONS(730), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8539] = 1,
    ACTIONS(732), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8558] = 1,
    ACTIONS(734), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8577] = 1,
    ACTIONS(736), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8596] = 1,
    ACTIONS(738), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8615] = 1,
    ACTIONS(740), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8634] = 1,
    ACTIONS(742), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8653] = 1,
    ACTIONS(744), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8672] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8691] = 1,
    ACTIONS(746), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8710] = 1,
    ACTIONS(748), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8729] = 1,
    ACTIONS(750), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8748] = 1,
    ACTIONS(752), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8767] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8786] = 1,
    ACTIONS(754), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8805] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8824] = 1,
    ACTIONS(756), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8843] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(531), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8884] = 1,
    ACTIONS(760), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8903] = 1,
    ACTIONS(762), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8922] = 1,
    ACTIONS(764), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8941] = 1,
    ACTIONS(766), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8960] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8979] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8998] = 1,
    ACTIONS(768), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9017] = 1,
    ACTIONS(770), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9036] = 1,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9055] = 1,
    ACTIONS(772), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9074] = 1,
    ACTIONS(774), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9093] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9112] = 1,
    ACTIONS(776), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9131] = 1,
    ACTIONS(778), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9150] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    ACTIONS(780), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(90), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9191] = 1,
    ACTIONS(782), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9210] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9229] = 1,
    ACTIONS(784), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9248] = 1,
    ACTIONS(786), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9267] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9286] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9305] = 1,
    ACTIONS(788), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9324] = 1,
    ACTIONS(790), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9343] = 1,
    ACTIONS(792), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9362] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9381] = 1,
    ACTIONS(794), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9400] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(86), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9438] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(66), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9476] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(223), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9514] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(827), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9552] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(424), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9590] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(684), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9628] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(593), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9666] = 1,
    ACTIONS(796), 15,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9684] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(975), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9722] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(648), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9760] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(501), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9798] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(86), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9836] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(66), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9874] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9912] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9950] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(768), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9988] = 11,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      sym__hex_4digit,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(166), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [10026] = 4,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    ACTIONS(802), 1,
      aux_sym_resource_token5,
    STATE(193), 1,
      sym_priviledge,
    ACTIONS(798), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10046] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(808), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(810), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(812), 1,
      aux_sym_index_full_spec_token1,
    STATE(1054), 1,
      sym_index_column_spec,
    STATE(1145), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10071] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(808), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(810), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(812), 1,
      aux_sym_index_full_spec_token1,
    STATE(966), 1,
      sym_index_column_spec,
    STATE(1145), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10096] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(808), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(810), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(812), 1,
      aux_sym_index_full_spec_token1,
    STATE(884), 1,
      sym_index_column_spec,
    STATE(1145), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10121] = 10,
    ACTIONS(814), 1,
      aux_sym_truncate_token2,
    ACTIONS(816), 1,
      aux_sym_create_index_token2,
    ACTIONS(818), 1,
      aux_sym_resource_token2,
    ACTIONS(820), 1,
      aux_sym_resource_token3,
    ACTIONS(822), 1,
      aux_sym_resource_token6,
    ACTIONS(824), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(826), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(828), 1,
      aux_sym_drop_type_token1,
    ACTIONS(830), 1,
      aux_sym_drop_user_token1,
    ACTIONS(832), 1,
      aux_sym_create_aggregate_token1,
  [10152] = 10,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(838), 1,
      aux_sym_truncate_token2,
    ACTIONS(840), 1,
      aux_sym_priviledge_token1,
    ACTIONS(842), 1,
      aux_sym_resource_token2,
    ACTIONS(844), 1,
      aux_sym_resource_token3,
    ACTIONS(846), 1,
      aux_sym_resource_token6,
    STATE(129), 1,
      sym_table,
    STATE(1000), 1,
      sym_keyspace,
    STATE(1137), 1,
      sym_resource,
  [10183] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(848), 1,
      anon_sym_LPAREN,
    ACTIONS(850), 1,
      sym__dec_digit,
    STATE(58), 1,
      aux_sym__decimal_literal,
    STATE(156), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(159), 2,
      sym_option_hash,
      sym_table_option_value,
  [10210] = 10,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(838), 1,
      aux_sym_truncate_token2,
    ACTIONS(840), 1,
      aux_sym_priviledge_token1,
    ACTIONS(842), 1,
      aux_sym_resource_token2,
    ACTIONS(844), 1,
      aux_sym_resource_token3,
    ACTIONS(846), 1,
      aux_sym_resource_token6,
    STATE(129), 1,
      sym_table,
    STATE(860), 1,
      sym_resource,
    STATE(1000), 1,
      sym_keyspace,
  [10241] = 6,
    ACTIONS(852), 1,
      aux_sym_drop_index_token1,
    ACTIONS(854), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(856), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(858), 1,
      aux_sym_alter_table_rename_token1,
    STATE(324), 1,
      sym_alter_table_operation,
    STATE(325), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10264] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(808), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(810), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(812), 1,
      aux_sym_index_full_spec_token1,
    STATE(1139), 1,
      sym_index_column_spec,
    STATE(1145), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10289] = 3,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    STATE(1082), 1,
      sym_priviledge,
    ACTIONS(798), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10306] = 10,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(838), 1,
      aux_sym_truncate_token2,
    ACTIONS(840), 1,
      aux_sym_priviledge_token1,
    ACTIONS(842), 1,
      aux_sym_resource_token2,
    ACTIONS(844), 1,
      aux_sym_resource_token3,
    ACTIONS(846), 1,
      aux_sym_resource_token6,
    STATE(129), 1,
      sym_table,
    STATE(221), 1,
      sym_resource,
    STATE(1000), 1,
      sym_keyspace,
  [10337] = 6,
    ACTIONS(852), 1,
      aux_sym_drop_index_token1,
    ACTIONS(854), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(856), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(858), 1,
      aux_sym_alter_table_rename_token1,
    STATE(302), 1,
      sym_alter_table_operation,
    STATE(325), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10360] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(808), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(810), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(812), 1,
      aux_sym_index_full_spec_token1,
    STATE(939), 1,
      sym_index_column_spec,
    STATE(1145), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10385] = 3,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    STATE(1099), 1,
      sym_priviledge,
    ACTIONS(798), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10402] = 6,
    ACTIONS(860), 1,
      anon_sym_DOT,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      aux_sym_relation_element_token1,
    ACTIONS(870), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(866), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(864), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10424] = 9,
    ACTIONS(872), 1,
      aux_sym_truncate_token2,
    ACTIONS(874), 1,
      aux_sym_create_index_token2,
    ACTIONS(876), 1,
      aux_sym_resource_token2,
    ACTIONS(878), 1,
      aux_sym_resource_token3,
    ACTIONS(880), 1,
      aux_sym_resource_token6,
    ACTIONS(882), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(884), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(886), 1,
      aux_sym_drop_type_token1,
    ACTIONS(888), 1,
      aux_sym_drop_user_token1,
  [10452] = 3,
    ACTIONS(890), 1,
      sym__hex_digit,
    STATE(403), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(189), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [10468] = 7,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
    STATE(818), 1,
      sym_column,
    STATE(934), 1,
      sym_primary_key_definition,
    STATE(936), 1,
      sym_partition_key,
    STATE(935), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [10492] = 3,
    ACTIONS(894), 1,
      sym__hex_digit,
    STATE(403), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(184), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [10508] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(897), 1,
      sym_object_name,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    STATE(209), 1,
      sym__string_literal,
    STATE(271), 1,
      sym_index_name,
    STATE(407), 1,
      sym_if_exist,
    STATE(907), 1,
      sym_keyspace,
  [10536] = 6,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      aux_sym_relation_element_token1,
    ACTIONS(903), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(907), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(905), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10558] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_object_name,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(915), 1,
      aux_sym_create_index_token3,
    STATE(209), 1,
      sym__string_literal,
    STATE(435), 1,
      sym_if_not_exist,
    STATE(984), 1,
      sym_index_name,
  [10583] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(897), 1,
      sym_object_name,
    ACTIONS(901), 1,
      sym__dquote,
    STATE(209), 1,
      sym__string_literal,
    STATE(283), 1,
      sym_index_name,
    STATE(870), 1,
      sym_keyspace,
  [10605] = 7,
    ACTIONS(917), 1,
      aux_sym_select_statement_token2,
    ACTIONS(919), 1,
      aux_sym_select_statement_token3,
    ACTIONS(921), 1,
      anon_sym_STAR,
    ACTIONS(923), 1,
      sym_object_name,
    STATE(564), 1,
      sym_select_element,
    STATE(566), 1,
      sym_function_call,
    STATE(716), 1,
      sym_select_elements,
  [10627] = 5,
    ACTIONS(925), 1,
      aux_sym_priviledge_token3,
    ACTIONS(927), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(929), 1,
      aux_sym_alter_table_rename_token1,
    STATE(294), 1,
      sym_alter_type_operation,
    STATE(333), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10645] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(850), 1,
      sym__dec_digit,
    STATE(58), 1,
      aux_sym__decimal_literal,
    STATE(954), 2,
      sym__string_literal,
      sym__float_literal,
  [10665] = 6,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(110), 1,
      sym_relation_elements,
    STATE(119), 1,
      sym_relation_element,
    STATE(467), 1,
      sym_function_call,
    STATE(74), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10685] = 5,
    ACTIONS(925), 1,
      aux_sym_priviledge_token3,
    ACTIONS(927), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(929), 1,
      aux_sym_alter_table_rename_token1,
    STATE(332), 1,
      sym_alter_type_operation,
    STATE(333), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10703] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      sym__dec_digit,
    STATE(504), 1,
      aux_sym__decimal_literal,
    STATE(849), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10721] = 6,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      sym_object_name,
    STATE(84), 1,
      sym_relation_element,
    STATE(110), 1,
      sym_relation_elements,
    STATE(444), 1,
      sym_function_call,
    STATE(74), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10741] = 6,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(359), 1,
      sym_type,
    STATE(497), 1,
      sym_if_exist,
    STATE(877), 1,
      sym_keyspace,
  [10760] = 6,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    STATE(235), 1,
      sym_table,
    STATE(488), 1,
      sym_if_exist,
    STATE(908), 1,
      sym_keyspace,
  [10779] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(485), 1,
      sym_if_not_exist,
    STATE(967), 1,
      sym_function,
    STATE(970), 1,
      sym_keyspace,
  [10798] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(553), 1,
      sym_if_not_exist,
    STATE(1009), 1,
      sym_aggregate,
    STATE(1155), 1,
      sym_keyspace,
  [10817] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(484), 1,
      sym_if_not_exist,
    STATE(947), 1,
      sym_aggregate,
    STATE(960), 1,
      sym_keyspace,
  [10836] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(556), 1,
      sym_if_not_exist,
    STATE(1152), 1,
      sym_function,
    STATE(1156), 1,
      sym_keyspace,
  [10855] = 6,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(945), 1,
      aux_sym_primary_key_column_token1,
    STATE(36), 1,
      sym_column,
    STATE(721), 1,
      sym_column_definition,
    STATE(1113), 1,
      sym_primary_key_element,
  [10874] = 2,
    ACTIONS(949), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(947), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [10885] = 6,
    ACTIONS(921), 1,
      anon_sym_STAR,
    ACTIONS(923), 1,
      sym_object_name,
    ACTIONS(951), 1,
      aux_sym_select_statement_token3,
    STATE(564), 1,
      sym_select_element,
    STATE(566), 1,
      sym_function_call,
    STATE(747), 1,
      sym_select_elements,
  [10904] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(676), 1,
      aux_sym_relation_element_repeat2,
    STATE(677), 1,
      sym_assignment_tuple,
  [10923] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(489), 1,
      sym_if_not_exist,
    STATE(928), 1,
      sym_trigger,
    STATE(938), 1,
      sym_keyspace,
  [10942] = 6,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(295), 1,
      sym_function,
    STATE(513), 1,
      sym_if_exist,
    STATE(898), 1,
      sym_keyspace,
  [10961] = 6,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    ACTIONS(945), 1,
      aux_sym_primary_key_column_token1,
    STATE(36), 1,
      sym_column,
    STATE(721), 1,
      sym_column_definition,
    STATE(978), 1,
      sym_primary_key_element,
  [10980] = 6,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(364), 1,
      sym_aggregate,
    STATE(491), 1,
      sym_if_exist,
    STATE(889), 1,
      sym_keyspace,
  [10999] = 5,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(444), 1,
      sym_function_call,
    STATE(74), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [11016] = 6,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(495), 1,
      sym_if_exist,
    STATE(879), 1,
      sym_trigger,
    STATE(880), 1,
      sym_keyspace,
  [11035] = 2,
    ACTIONS(961), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(959), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [11046] = 6,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(486), 1,
      sym_if_not_exist,
    STATE(919), 1,
      sym_type,
    STATE(924), 1,
      sym_keyspace,
  [11065] = 5,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(467), 1,
      sym_function_call,
    STATE(74), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [11082] = 6,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    STATE(499), 1,
      sym_if_not_exist,
    STATE(1004), 1,
      sym_table,
    STATE(1006), 1,
      sym_keyspace,
  [11101] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_object_name,
    ACTIONS(963), 1,
      aux_sym_create_index_token3,
    STATE(209), 1,
      sym__string_literal,
    STATE(1089), 1,
      sym_index_name,
  [11120] = 6,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(965), 1,
      sym_object_name,
    STATE(356), 1,
      sym_user,
    STATE(498), 1,
      sym_if_exist,
    STATE(875), 1,
      sym_keyspace,
  [11139] = 1,
    ACTIONS(967), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11147] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(669), 1,
      sym_replication_list_item,
    STATE(945), 1,
      sym_replication_list,
    STATE(950), 1,
      sym__string_literal,
  [11163] = 5,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    ACTIONS(969), 1,
      aux_sym_truncate_token2,
    STATE(353), 1,
      sym_table,
    STATE(1124), 1,
      sym_keyspace,
  [11179] = 2,
    ACTIONS(973), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(971), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11189] = 5,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(153), 1,
      sym_alter_type_rename_item,
    STATE(248), 1,
      sym_alter_type_rename_list,
    STATE(886), 1,
      sym_column,
  [11205] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
    STATE(576), 1,
      sym_column_definition,
    STATE(1098), 1,
      sym_column_definition_list,
  [11221] = 5,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
    STATE(658), 1,
      sym_insert_column_spec,
  [11237] = 2,
    ACTIONS(987), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(985), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11247] = 5,
    ACTIONS(989), 1,
      aux_sym_truncate_token2,
    ACTIONS(991), 1,
      aux_sym_resource_token2,
    ACTIONS(993), 1,
      aux_sym_resource_token6,
    ACTIONS(995), 1,
      aux_sym_drop_type_token1,
    ACTIONS(997), 1,
      aux_sym_drop_user_token1,
  [11263] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_object_name,
    STATE(209), 1,
      sym__string_literal,
    STATE(316), 1,
      sym_index_name,
  [11279] = 5,
    ACTIONS(921), 1,
      anon_sym_STAR,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(564), 1,
      sym_select_element,
    STATE(566), 1,
      sym_function_call,
    STATE(747), 1,
      sym_select_elements,
  [11295] = 4,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    ACTIONS(1005), 1,
      aux_sym_select_element_token1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11309] = 5,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    ACTIONS(1007), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(155), 1,
      sym_column,
    STATE(266), 1,
      sym_alter_table_drop_column_list,
  [11325] = 3,
    ACTIONS(1011), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(600), 1,
      sym_using_timestamp_spec,
    ACTIONS(1009), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11337] = 4,
    ACTIONS(1013), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1017), 1,
      aux_sym_role_with_options_token4,
    STATE(160), 1,
      sym_role_with_options,
    ACTIONS(1015), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11351] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_object_name,
    STATE(209), 1,
      sym__string_literal,
    STATE(277), 1,
      sym_index_name,
  [11367] = 5,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(94), 1,
      sym_insert_values_spec,
    STATE(679), 1,
      sym_insert_column_spec,
  [11383] = 5,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(621), 1,
      sym_if_not_exist,
    STATE(973), 1,
      sym_keyspace,
  [11399] = 1,
    ACTIONS(1021), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11407] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
    STATE(576), 1,
      sym_column_definition,
    STATE(974), 1,
      sym_column_definition_list,
  [11423] = 5,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(296), 1,
      sym_keyspace,
    STATE(642), 1,
      sym_if_exist,
  [11439] = 4,
    ACTIONS(1013), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1017), 1,
      aux_sym_role_with_options_token4,
    STATE(213), 1,
      sym_role_with_options,
    ACTIONS(1015), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11453] = 2,
    ACTIONS(1025), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1023), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11463] = 5,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
    STATE(650), 1,
      sym_insert_column_spec,
  [11479] = 5,
    ACTIONS(1027), 1,
      sym_object_name,
    ACTIONS(1029), 1,
      aux_sym_from_spec_token1,
    STATE(516), 1,
      sym_from_spec,
    STATE(570), 1,
      sym_delete_column_item,
    STATE(836), 1,
      sym_delete_column_list,
  [11495] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
    STATE(576), 1,
      sym_column_definition,
    STATE(1034), 1,
      sym_column_definition_list,
  [11511] = 5,
    ACTIONS(921), 1,
      anon_sym_STAR,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(564), 1,
      sym_select_element,
    STATE(566), 1,
      sym_function_call,
    STATE(830), 1,
      sym_select_elements,
  [11527] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(1031), 1,
      sym__dec_digit,
    STATE(680), 1,
      aux_sym__decimal_literal,
    STATE(905), 1,
      sym__string_literal,
  [11543] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(669), 1,
      sym_replication_list_item,
    STATE(867), 1,
      sym_replication_list,
    STATE(950), 1,
      sym__string_literal,
  [11559] = 3,
    ACTIONS(1011), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(559), 1,
      sym_using_timestamp_spec,
    ACTIONS(1033), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11571] = 2,
    ACTIONS(1037), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1035), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11581] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(607), 1,
      sym_clustering_key,
    STATE(778), 1,
      sym_column,
    STATE(1058), 1,
      sym_clustering_key_list,
  [11597] = 5,
    ACTIONS(1027), 1,
      sym_object_name,
    ACTIONS(1029), 1,
      aux_sym_from_spec_token1,
    STATE(548), 1,
      sym_from_spec,
    STATE(570), 1,
      sym_delete_column_item,
    STATE(719), 1,
      sym_delete_column_list,
  [11613] = 1,
    ACTIONS(1039), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11621] = 1,
    ACTIONS(1041), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11629] = 5,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(111), 1,
      sym_insert_values_spec,
    STATE(705), 1,
      sym_insert_column_spec,
  [11645] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
    STATE(576), 1,
      sym_column_definition,
    STATE(1037), 1,
      sym_column_definition_list,
  [11661] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(669), 1,
      sym_replication_list_item,
    STATE(890), 1,
      sym_replication_list,
    STATE(950), 1,
      sym__string_literal,
  [11677] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1046), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11689] = 1,
    ACTIONS(1048), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11697] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(1050), 1,
      sym__dec_digit,
    STATE(483), 1,
      aux_sym__decimal_literal,
    STATE(816), 1,
      sym__string_literal,
  [11713] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(607), 1,
      sym_clustering_key,
    STATE(778), 1,
      sym_column,
    STATE(1013), 1,
      sym_clustering_key_list,
  [11729] = 1,
    ACTIONS(1052), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11737] = 1,
    ACTIONS(1054), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11745] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(613), 1,
      sym_partition_key,
    STATE(798), 1,
      sym_column,
    STATE(981), 1,
      sym_partition_key_list,
  [11761] = 2,
    ACTIONS(1056), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(568), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [11771] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11782] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(1033), 1,
      sym_keyspace,
    STATE(1051), 1,
      sym_aggregate,
  [11795] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(1102), 1,
      sym_function,
    STATE(1146), 1,
      sym_keyspace,
  [11808] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(949), 1,
      sym_type,
    STATE(988), 1,
      sym_keyspace,
  [11821] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(117), 1,
      sym_where_spec,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [11834] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(280), 1,
      sym_table,
    STATE(861), 1,
      sym_keyspace,
  [11847] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(994), 1,
      sym_trigger,
    STATE(998), 1,
      sym_keyspace,
  [11860] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(810), 1,
      sym_option_hash_item,
    STATE(927), 1,
      sym__string_literal,
  [11873] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(291), 1,
      sym_aggregate,
    STATE(874), 1,
      sym_keyspace,
  [11886] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(293), 1,
      sym__string_literal,
    STATE(326), 1,
      sym_trigger_class,
  [11899] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(815), 1,
      sym_replication_list_item,
    STATE(950), 1,
      sym__string_literal,
  [11912] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(1132), 1,
      sym_keyspace,
    STATE(1133), 1,
      sym_table,
  [11925] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(888), 1,
      sym_keyspace,
    STATE(1072), 1,
      sym_trigger,
  [11938] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(1136), 1,
      sym_keyspace,
    STATE(1158), 1,
      sym_table,
  [11951] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(298), 1,
      sym_type,
    STATE(906), 1,
      sym_keyspace,
  [11964] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(965), 1,
      sym_object_name,
    STATE(301), 1,
      sym_user,
    STATE(910), 1,
      sym_keyspace,
  [11977] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(1111), 1,
      sym_keyspace,
    STATE(1116), 1,
      sym_table,
  [11990] = 3,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(1035), 1,
      sym_order_direction,
    ACTIONS(223), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12001] = 1,
    ACTIONS(1046), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12008] = 4,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1068), 1,
      aux_sym_ttl_token1,
    STATE(194), 1,
      sym_ttl,
    STATE(195), 1,
      sym_timestamp,
  [12021] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(138), 1,
      sym_where_spec,
    STATE(487), 1,
      aux_sym_update_repeat1,
  [12034] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1070), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12045] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(138), 1,
      sym_where_spec,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [12058] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(443), 1,
      sym_table,
    STATE(1086), 1,
      sym_keyspace,
  [12071] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(767), 1,
      sym_partition_key,
    STATE(798), 1,
      sym_column,
  [12084] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(22), 1,
      sym_column,
    STATE(1060), 1,
      sym_type_member_column_list,
  [12097] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
    STATE(721), 1,
      sym_column_definition,
  [12110] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(128), 1,
      sym_where_spec,
    STATE(541), 1,
      aux_sym_update_repeat1,
  [12123] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(128), 1,
      sym_where_spec,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [12136] = 4,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      aux_sym_function_args_repeat1,
  [12149] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(287), 1,
      sym_function,
    STATE(873), 1,
      sym_keyspace,
  [12162] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(754), 1,
      sym_clustering_key,
    STATE(778), 1,
      sym_column,
  [12175] = 1,
    ACTIONS(1076), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12182] = 4,
    ACTIONS(1011), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
    STATE(761), 1,
      sym_using_timestamp_spec,
  [12195] = 4,
    ACTIONS(1078), 1,
      sym_object_name,
    ACTIONS(1080), 1,
      aux_sym_if_exist_token2,
    STATE(168), 1,
      sym_if_condition,
    STATE(358), 1,
      sym_if_condition_list,
  [12208] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(683), 1,
      sym_column,
    STATE(1091), 1,
      sym_column_list,
  [12221] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(146), 1,
      sym_where_spec,
    STATE(505), 1,
      aux_sym_update_repeat1,
  [12234] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(146), 1,
      sym_where_spec,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [12247] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(344), 1,
      sym_table,
    STATE(900), 1,
      sym_keyspace,
  [12260] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(664), 1,
      sym_table,
    STATE(913), 1,
      sym_keyspace,
  [12273] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(22), 1,
      sym_column,
    STATE(909), 1,
      sym_type_member_column_list,
  [12286] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(293), 1,
      sym__string_literal,
    STATE(321), 1,
      sym_trigger_class,
  [12299] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(412), 1,
      sym_type,
    STATE(862), 1,
      sym_keyspace,
  [12312] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(665), 1,
      sym_option_hash_item,
    STATE(927), 1,
      sym__string_literal,
  [12325] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(392), 1,
      sym_table,
    STATE(865), 1,
      sym_keyspace,
  [12338] = 4,
    ACTIONS(899), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(342), 1,
      sym_role,
    STATE(842), 1,
      sym_if_exist,
  [12351] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(859), 1,
      sym_keyspace,
    STATE(887), 1,
      sym_table,
  [12364] = 4,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(826), 1,
      sym_if_not_exist,
    STATE(916), 1,
      sym_user,
  [12377] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_COLON,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    STATE(673), 1,
      aux_sym_assignment_tuple_repeat1,
  [12390] = 4,
    ACTIONS(913), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(179), 1,
      sym_role,
    STATE(804), 1,
      sym_if_not_exist,
  [12403] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(292), 1,
      sym_trigger_class,
    STATE(293), 1,
      sym__string_literal,
  [12416] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(22), 1,
      sym_column,
    STATE(977), 1,
      sym_type_member_column_list,
  [12429] = 2,
    ACTIONS(1092), 1,
      anon_sym_SQUOTE,
    ACTIONS(682), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [12438] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(313), 1,
      sym_table,
    STATE(980), 1,
      sym_keyspace,
  [12451] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(258), 1,
      sym_table,
    STATE(1020), 1,
      sym_keyspace,
  [12464] = 4,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(215), 1,
      sym_alter_type_rename_item,
    STATE(886), 1,
      sym_column,
  [12477] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(472), 1,
      sym_table,
    STATE(937), 1,
      sym_keyspace,
  [12490] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(252), 1,
      sym_table,
    STATE(1122), 1,
      sym_keyspace,
  [12503] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [12516] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(140), 1,
      sym_where_spec,
    STATE(511), 1,
      aux_sym_update_repeat1,
  [12529] = 2,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1096), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [12538] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(141), 1,
      sym_table,
    STATE(903), 1,
      sym_keyspace,
  [12551] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [12564] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(253), 1,
      sym_table,
    STATE(1083), 1,
      sym_keyspace,
  [12577] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(141), 1,
      sym_function,
    STATE(1003), 1,
      sym_keyspace,
  [12590] = 4,
    ACTIONS(1011), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(123), 1,
      sym_where_spec,
    STATE(755), 1,
      sym_using_timestamp_spec,
  [12603] = 4,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(262), 1,
      sym_table_options,
    STATE(921), 1,
      sym_table_option_name,
  [12616] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(39), 1,
      sym_column,
    STATE(261), 1,
      sym_alter_table_column_definition,
  [12629] = 4,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(22), 1,
      sym_column,
    STATE(1109), 1,
      sym_type_member_column_list,
  [12642] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(257), 1,
      sym_trigger_class,
    STATE(293), 1,
      sym__string_literal,
  [12655] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(1014), 1,
      sym_keyspace,
    STATE(1097), 1,
      sym_aggregate,
  [12668] = 4,
    ACTIONS(834), 1,
      sym_object_name,
    ACTIONS(836), 1,
      sym__dquote,
    STATE(580), 1,
      sym_table,
    STATE(1105), 1,
      sym_keyspace,
  [12681] = 3,
    ACTIONS(1102), 1,
      aux_sym_primary_key_column_token1,
    STATE(712), 1,
      sym_primary_key_column,
    ACTIONS(1100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12692] = 4,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(1029), 1,
      sym_keyspace,
    STATE(1129), 1,
      sym_function,
  [12705] = 4,
    ACTIONS(1011), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(135), 1,
      sym_where_spec,
    STATE(845), 1,
      sym_using_timestamp_spec,
  [12718] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(500), 1,
      sym_column,
  [12728] = 1,
    ACTIONS(1104), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12734] = 2,
    ACTIONS(1108), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1106), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12742] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(318), 1,
      sym_table,
  [12752] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(341), 1,
      sym_keyspace,
  [12762] = 3,
    ACTIONS(1114), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1116), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1118), 1,
      aux_sym_update_token1,
  [12772] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      aux_sym_from_spec_token1,
    STATE(595), 1,
      aux_sym_select_elements_repeat1,
  [12782] = 3,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(575), 1,
      sym_param,
  [12792] = 2,
    ACTIONS(1005), 1,
      aux_sym_select_element_token1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12800] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1057), 1,
      sym_table,
  [12810] = 2,
    ACTIONS(1130), 1,
      anon_sym_LBRACK,
    ACTIONS(1128), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12818] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(185), 1,
      sym_column,
  [12828] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      aux_sym_from_spec_token1,
    STATE(598), 1,
      aux_sym_delete_column_list_repeat1,
  [12838] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(1115), 1,
      sym_return_mode,
  [12848] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_param,
  [12858] = 3,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_init_cond_hash_repeat1,
  [12868] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(1143), 1,
      sym_return_mode,
  [12878] = 3,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    STATE(695), 1,
      aux_sym_create_function_repeat1,
  [12888] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_column_definition_list_repeat1,
  [12898] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12908] = 3,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    STATE(581), 1,
      aux_sym_create_function_repeat1,
  [12918] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_init_cond_hash_repeat1,
  [12928] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1162), 1,
      aux_sym_update_token2,
    STATE(868), 1,
      sym_using_ttl_timestamp,
  [12938] = 3,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [12948] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(217), 1,
      sym__string_literal,
  [12958] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(726), 1,
      sym_init_cond_hash_item,
    STATE(1088), 1,
      sym_hash_key,
  [12968] = 3,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12978] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [12988] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1008), 1,
      sym_table,
  [12998] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_column_definition_list_repeat1,
  [13008] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(863), 1,
      sym_keyspace,
  [13018] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_init_cond_hash_repeat1,
  [13028] = 3,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13038] = 3,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
  [13048] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(891), 1,
      sym_column,
  [13058] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      aux_sym_assignment_tuple_repeat1,
  [13068] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(566), 1,
      sym_function_call,
    STATE(820), 1,
      sym_select_element,
  [13078] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      aux_sym_from_spec_token1,
    STATE(671), 1,
      aux_sym_select_elements_repeat1,
  [13088] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(660), 1,
      sym_table,
  [13098] = 3,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_clustering_key_list_repeat1,
  [13108] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      aux_sym_from_spec_token1,
    STATE(686), 1,
      aux_sym_delete_column_list_repeat1,
  [13118] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_type_member_column_list_repeat1,
  [13128] = 1,
    ACTIONS(1033), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13134] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(1012), 1,
      sym_column,
  [13144] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_clustering_key_list_repeat1,
  [13154] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_expression_list_repeat1,
  [13164] = 3,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_partition_key_list_repeat1,
  [13174] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(1053), 1,
      sym_return_mode,
  [13184] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(254), 1,
      sym_table,
  [13194] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_clustering_key_list_repeat1,
  [13204] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_partition_key_list_repeat1,
  [13214] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(396), 1,
      sym_table,
  [13224] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [13234] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(1028), 1,
      sym_return_mode,
  [13244] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(113), 1,
      sym_table,
  [13254] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_partition_key_list_repeat1,
  [13264] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(188), 1,
      sym__string_literal,
  [13274] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
    STATE(615), 1,
      aux_sym_assignment_map_repeat1,
  [13284] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1158), 1,
      sym_table,
  [13294] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(253), 1,
      sym_table,
  [13304] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(141), 1,
      sym_keyspace,
  [13314] = 3,
    ACTIONS(1221), 1,
      aux_sym_resource_token1,
    ACTIONS(1223), 1,
      aux_sym_resource_token4,
    ACTIONS(1225), 1,
      aux_sym_resource_token5,
  [13324] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_relation_element_repeat2,
  [13334] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(1110), 1,
      sym_keyspace,
  [13344] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_create_function_repeat1,
  [13354] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [13364] = 3,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_option_hash_repeat1,
  [13374] = 3,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_column_list_repeat1,
  [13384] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1242), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [13394] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(991), 1,
      sym_return_mode,
  [13404] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(1244), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [13412] = 3,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(185), 1,
      sym_column,
  [13422] = 3,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      aux_sym_where_spec_token1,
    STATE(630), 1,
      aux_sym_update_repeat1,
  [13432] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RBRACE,
    STATE(631), 1,
      aux_sym_replication_list_repeat1,
  [13442] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(121), 1,
      sym_table,
  [13452] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_RBRACE,
    STATE(615), 1,
      aux_sym_assignment_map_repeat1,
  [13462] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      aux_sym_relation_element_repeat2,
  [13472] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_relation_element_repeat2,
  [13482] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(237), 1,
      sym_table,
  [13492] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1262), 1,
      aux_sym_update_token2,
    STATE(1080), 1,
      sym_using_ttl_timestamp,
  [13502] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      sym_param,
  [13512] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      aux_sym_create_function_repeat1,
  [13522] = 3,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(170), 1,
      sym_table_option_item,
    STATE(921), 1,
      sym_table_option_name,
  [13532] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_GT,
    STATE(641), 1,
      aux_sym_data_type_definition_repeat1,
  [13542] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(285), 1,
      sym_keyspace,
  [13552] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_option_hash_repeat1,
  [13562] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(241), 1,
      sym_column,
  [13572] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [13582] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(948), 1,
      sym_return_mode,
  [13592] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RBRACE,
    STATE(631), 1,
      aux_sym_replication_list_repeat1,
  [13602] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACE,
    STATE(633), 1,
      aux_sym_assignment_map_repeat1,
  [13612] = 3,
    ACTIONS(975), 1,
      sym_object_name,
    ACTIONS(977), 1,
      sym__dquote,
    STATE(216), 1,
      sym_column,
  [13622] = 3,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(94), 1,
      sym_insert_values_spec,
  [13632] = 3,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_relation_element_repeat2,
  [13642] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_relation_element_repeat2,
  [13652] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(637), 1,
      sym_table,
  [13662] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_relation_element_repeat2,
  [13672] = 3,
    ACTIONS(1290), 1,
      sym__hex_digit,
    ACTIONS(1292), 1,
      anon_sym_SQUOTE,
    STATE(681), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [13682] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_function_args_repeat1,
  [13692] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(453), 1,
      sym_table,
  [13702] = 3,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [13712] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(278), 1,
      sym_table,
  [13722] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1296), 1,
      aux_sym_update_token2,
    STATE(872), 1,
      sym_using_ttl_timestamp,
  [13732] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(337), 1,
      sym_table,
  [13742] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      sym_param,
  [13752] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_GT,
    STATE(641), 1,
      aux_sym_data_type_definition_repeat1,
  [13762] = 3,
    ACTIONS(277), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1304), 1,
      aux_sym_update_token2,
    STATE(1046), 1,
      sym_using_ttl_timestamp,
  [13772] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_option_hash_repeat1,
  [13782] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      aux_sym_create_function_repeat1,
  [13792] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [13802] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(892), 1,
      sym_return_mode,
  [13812] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RBRACE,
    STATE(647), 1,
      aux_sym_replication_list_repeat1,
  [13822] = 3,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      aux_sym_relation_element_repeat1,
  [13832] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      aux_sym_from_spec_token1,
    STATE(671), 1,
      aux_sym_select_elements_repeat1,
  [13842] = 3,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_expression_list_repeat1,
  [13852] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13862] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13872] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13882] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_relation_element_repeat2,
  [13892] = 3,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_relation_element_repeat2,
  [13902] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      aux_sym_function_args_repeat1,
  [13912] = 3,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
  [13922] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1331), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [13932] = 3,
    ACTIONS(1333), 1,
      sym__hex_digit,
    ACTIONS(1336), 1,
      anon_sym_SQUOTE,
    STATE(681), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [13942] = 3,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym_column_list_repeat1,
  [13952] = 3,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_column_list_repeat1,
  [13962] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RBRACK,
    STATE(674), 1,
      aux_sym_assignment_tuple_repeat1,
  [13972] = 2,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13980] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      aux_sym_from_spec_token1,
    STATE(686), 1,
      aux_sym_delete_column_list_repeat1,
  [13990] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      sym_param,
  [14000] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_expression_list_repeat1,
  [14010] = 3,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_column_definition_list_repeat1,
  [14020] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      aux_sym_relation_element_repeat1,
  [14030] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(955), 1,
      sym_table,
  [14040] = 3,
    ACTIONS(1136), 1,
      aux_sym_create_function_token1,
    ACTIONS(1138), 1,
      aux_sym_return_mode_token1,
    STATE(942), 1,
      sym_return_mode,
  [14050] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_function_repeat1,
  [14060] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_param,
  [14070] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [14080] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_create_function_repeat1,
  [14090] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_GT,
    STATE(663), 1,
      aux_sym_data_type_definition_repeat1,
  [14100] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      aux_sym_relation_element_repeat1,
  [14110] = 3,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      sym__dquote,
    STATE(18), 1,
      sym_column,
  [14120] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_type_member_column_list_repeat1,
  [14130] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1025), 1,
      sym_table,
  [14140] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(344), 1,
      sym_table,
  [14150] = 3,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(703), 1,
      aux_sym_function_args_repeat1,
  [14160] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(366), 1,
      sym_table,
  [14170] = 3,
    ACTIONS(979), 1,
      aux_sym_select_statement_token3,
    ACTIONS(983), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
  [14180] = 3,
    ACTIONS(901), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      sym_object_name,
    STATE(143), 1,
      sym_keyspace,
  [14190] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(460), 1,
      sym_table,
  [14200] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(1097), 1,
      sym_aggregate,
  [14207] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(286), 1,
      sym_role,
  [14214] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1129), 1,
      sym_function,
  [14221] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(315), 1,
      sym_function,
  [14228] = 1,
    ACTIONS(1385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14233] = 2,
    ACTIONS(1387), 1,
      sym__hex_digit,
    STATE(61), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14240] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1152), 1,
      sym_function,
  [14247] = 2,
    ACTIONS(1389), 1,
      sym__hex_digit,
    STATE(79), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14254] = 2,
    ACTIONS(1391), 1,
      aux_sym_from_spec_token1,
    STATE(64), 1,
      sym_from_spec,
  [14261] = 2,
    ACTIONS(1393), 1,
      sym_object_name,
    STATE(87), 1,
      sym_from_spec_element,
  [14268] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(314), 1,
      sym_aggregate,
  [14275] = 2,
    ACTIONS(1391), 1,
      aux_sym_from_spec_token1,
    STATE(516), 1,
      sym_from_spec,
  [14282] = 1,
    ACTIONS(1370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14287] = 1,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14292] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(986), 1,
      sym_trigger,
  [14299] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(347), 1,
      sym_code_block,
  [14306] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(351), 1,
      sym_code_block,
  [14313] = 1,
    ACTIONS(1399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14318] = 1,
    ACTIONS(1145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14323] = 2,
    ACTIONS(1401), 1,
      sym_object_name,
    STATE(312), 1,
      sym_type,
  [14330] = 1,
    ACTIONS(1156), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14335] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(917), 1,
      sym_function,
  [14342] = 1,
    ACTIONS(1403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14347] = 2,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(311), 1,
      sym_user,
  [14354] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1123), 1,
      sym_function,
  [14361] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1121), 1,
      sym_language,
  [14368] = 2,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(720), 1,
      sym_param,
  [14375] = 2,
    ACTIONS(848), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_option_hash,
  [14382] = 2,
    ACTIONS(1407), 1,
      aux_sym_role_with_options_token1,
    STATE(149), 1,
      sym_user_password,
  [14389] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(151), 1,
      sym_role,
  [14396] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(350), 1,
      sym_code_block,
  [14403] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(545), 1,
      sym_assignment_element,
  [14410] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(896), 1,
      sym_function,
  [14417] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1108), 1,
      sym_function,
  [14424] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(904), 1,
      sym_aggregate,
  [14431] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1106), 1,
      sym_language,
  [14438] = 2,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(1010), 1,
      sym_user,
  [14445] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(328), 1,
      sym_code_block,
  [14452] = 2,
    ACTIONS(1068), 1,
      aux_sym_ttl_token1,
    STATE(219), 1,
      sym_ttl,
  [14459] = 2,
    ACTIONS(1391), 1,
      aux_sym_from_spec_token1,
    STATE(57), 1,
      sym_from_spec,
  [14466] = 2,
    ACTIONS(1401), 1,
      sym_object_name,
    STATE(409), 1,
      sym_type,
  [14473] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1081), 1,
      sym_function,
  [14480] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1079), 1,
      sym_language,
  [14487] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(231), 1,
      sym_code_block,
  [14494] = 2,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    STATE(219), 1,
      sym_timestamp,
  [14501] = 2,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    STATE(515), 1,
      sym_timestamp,
  [14508] = 1,
    ACTIONS(1187), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14513] = 2,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
  [14520] = 1,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14525] = 2,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(760), 1,
      sym_delete_column_item,
  [14532] = 2,
    ACTIONS(1411), 1,
      sym__dec_digit,
    STATE(626), 1,
      aux_sym__decimal_literal,
  [14539] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1067), 1,
      sym_function,
  [14546] = 1,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14551] = 2,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(135), 1,
      sym_where_spec,
  [14558] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1064), 1,
      sym_language,
  [14565] = 1,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14570] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(275), 1,
      sym_code_block,
  [14577] = 2,
    ACTIONS(1415), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [14584] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(808), 1,
      sym_assignment_element,
  [14591] = 1,
    ACTIONS(1204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14596] = 1,
    ACTIONS(1417), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14601] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(1009), 1,
      sym_aggregate,
  [14608] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1055), 1,
      sym_function,
  [14615] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(503), 1,
      sym_assignment_element,
  [14622] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1050), 1,
      sym_function,
  [14629] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(268), 1,
      sym_code_block,
  [14636] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1043), 1,
      sym_language,
  [14643] = 2,
    ACTIONS(1419), 1,
      sym__dec_digit,
    STATE(144), 1,
      aux_sym__decimal_literal,
  [14650] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(1093), 1,
      sym_aggregate,
  [14657] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(654), 1,
      sym_assignment_tuple,
  [14664] = 1,
    ACTIONS(1421), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14669] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1030), 1,
      sym_function,
  [14676] = 2,
    ACTIONS(1423), 1,
      sym__dec_digit,
    STATE(133), 1,
      aux_sym__decimal_literal,
  [14683] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(141), 1,
      sym_role,
  [14690] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1027), 1,
      sym_function,
  [14697] = 1,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14702] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(920), 1,
      sym_trigger,
  [14709] = 1,
    ACTIONS(1427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14714] = 2,
    ACTIONS(1397), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(264), 1,
      sym_code_block,
  [14721] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(1017), 1,
      sym_language,
  [14728] = 2,
    ACTIONS(1429), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [14735] = 2,
    ACTIONS(1431), 1,
      sym_object_name,
    STATE(167), 1,
      sym_order_spec_element,
  [14742] = 2,
    ACTIONS(1433), 1,
      sym__hex_digit,
    STATE(401), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14749] = 2,
    ACTIONS(1407), 1,
      aux_sym_role_with_options_token1,
    STATE(130), 1,
      sym_user_password,
  [14756] = 2,
    ACTIONS(1401), 1,
      sym_object_name,
    STATE(878), 1,
      sym_type,
  [14763] = 1,
    ACTIONS(1323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14768] = 2,
    ACTIONS(1435), 1,
      aux_sym_durable_writes_token1,
    STATE(259), 1,
      sym_durable_writes,
  [14775] = 2,
    ACTIONS(1290), 1,
      sym__hex_digit,
    STATE(655), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [14782] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14787] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(303), 1,
      sym_role,
  [14794] = 1,
    ACTIONS(1439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14799] = 2,
    ACTIONS(1441), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [14806] = 1,
    ACTIONS(1443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14811] = 2,
    ACTIONS(1445), 1,
      sym__dec_digit,
    STATE(125), 1,
      aux_sym__decimal_literal,
  [14818] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(519), 1,
      sym_assignment_element,
  [14825] = 2,
    ACTIONS(1435), 1,
      aux_sym_durable_writes_token1,
    STATE(250), 1,
      sym_durable_writes,
  [14832] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(189), 1,
      sym_role,
  [14839] = 1,
    ACTIONS(1447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14844] = 1,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14849] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(996), 1,
      sym_function,
  [14856] = 1,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14861] = 1,
    ACTIONS(1449), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14866] = 1,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14871] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(992), 1,
      sym_language,
  [14878] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(510), 1,
      sym_assignment_element,
  [14885] = 1,
    ACTIONS(1451), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14890] = 2,
    ACTIONS(1435), 1,
      aux_sym_durable_writes_token1,
    STATE(249), 1,
      sym_durable_writes,
  [14897] = 1,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14902] = 1,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14907] = 2,
    ACTIONS(1453), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [14914] = 2,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
  [14921] = 1,
    ACTIONS(1313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14926] = 1,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14931] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(121), 1,
      sym_function,
  [14938] = 1,
    ACTIONS(1244), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [14943] = 1,
    ACTIONS(1457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14948] = 2,
    ACTIONS(1459), 1,
      anon_sym_EQ,
    ACTIONS(1461), 1,
      anon_sym_LBRACK,
  [14955] = 2,
    ACTIONS(1463), 1,
      sym__dec_digit,
    STATE(97), 1,
      aux_sym__decimal_literal,
  [14962] = 2,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(926), 1,
      sym_user,
  [14969] = 1,
    ACTIONS(1465), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14974] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(902), 1,
      sym_function,
  [14981] = 2,
    ACTIONS(1467), 1,
      aux_sym_resource_token3,
    ACTIONS(1469), 1,
      aux_sym_drop_aggregate_token1,
  [14988] = 2,
    ACTIONS(1391), 1,
      aux_sym_from_spec_token1,
    STATE(62), 1,
      sym_from_spec,
  [14995] = 2,
    ACTIONS(1407), 1,
      aux_sym_role_with_options_token1,
    STATE(137), 1,
      sym_user_password,
  [15002] = 2,
    ACTIONS(1084), 1,
      sym_object_name,
    STATE(308), 1,
      sym_user,
  [15009] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(1085), 1,
      sym_trigger,
  [15016] = 2,
    ACTIONS(1401), 1,
      sym_object_name,
    STATE(246), 1,
      sym_type,
  [15023] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1094), 1,
      sym_function,
  [15030] = 2,
    ACTIONS(1391), 1,
      aux_sym_from_spec_token1,
    STATE(557), 1,
      sym_from_spec,
  [15037] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(336), 1,
      sym_role,
  [15044] = 2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(222), 1,
      sym_if_condition,
  [15051] = 1,
    ACTIONS(1269), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15056] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(220), 1,
      sym_role,
  [15063] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(958), 1,
      sym_function,
  [15070] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(289), 1,
      sym_role,
  [15077] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(634), 1,
      sym_assignment_tuple,
  [15084] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(1126), 1,
      sym_trigger,
  [15091] = 2,
    ACTIONS(1062), 1,
      aux_sym_where_spec_token1,
    STATE(118), 1,
      sym_where_spec,
  [15098] = 1,
    ACTIONS(1284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15103] = 2,
    ACTIONS(1471), 1,
      sym__dec_digit,
    STATE(116), 1,
      aux_sym__decimal_literal,
  [15110] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(846), 1,
      sym_assignment_tuple,
  [15117] = 1,
    ACTIONS(1070), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15122] = 1,
    ACTIONS(1473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15127] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(274), 1,
      sym_function,
  [15134] = 2,
    ACTIONS(1405), 1,
      sym_object_name,
    STATE(953), 1,
      sym_language,
  [15141] = 2,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(284), 1,
      sym_role,
  [15148] = 2,
    ACTIONS(1475), 1,
      sym__dec_digit,
    STATE(124), 1,
      aux_sym__decimal_literal,
  [15155] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(542), 1,
      sym_assignment_element,
  [15162] = 2,
    ACTIONS(1401), 1,
      sym_object_name,
    STATE(1070), 1,
      sym_type,
  [15169] = 2,
    ACTIONS(1381), 1,
      sym_object_name,
    STATE(273), 1,
      sym_aggregate,
  [15176] = 1,
    ACTIONS(1336), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [15181] = 1,
    ACTIONS(1477), 1,
      anon_sym_DOT,
  [15185] = 1,
    ACTIONS(1479), 1,
      aux_sym_grant_token2,
  [15189] = 1,
    ACTIONS(1481), 1,
      anon_sym_DOT,
  [15193] = 1,
    ACTIONS(1483), 1,
      anon_sym_DOT,
  [15197] = 1,
    ACTIONS(1485), 1,
      aux_sym_create_keyspace_token1,
  [15201] = 1,
    ACTIONS(1487), 1,
      aux_sym_select_statement_token6,
  [15205] = 1,
    ACTIONS(1489), 1,
      anon_sym_DOT,
  [15209] = 1,
    ACTIONS(1491), 1,
      sym__dquote,
  [15213] = 1,
    ACTIONS(1493), 1,
      anon_sym_RBRACE,
  [15217] = 1,
    ACTIONS(1304), 1,
      aux_sym_update_token2,
  [15221] = 1,
    ACTIONS(1495), 1,
      aux_sym_select_statement_token6,
  [15225] = 1,
    ACTIONS(1497), 1,
      anon_sym_DOT,
  [15229] = 1,
    ACTIONS(1499), 1,
      sym__hex_4digit,
  [15233] = 1,
    ACTIONS(1501), 1,
      aux_sym_update_token2,
  [15237] = 1,
    ACTIONS(1503), 1,
      anon_sym_DOT,
  [15241] = 1,
    ACTIONS(1505), 1,
      anon_sym_DOT,
  [15245] = 1,
    ACTIONS(1507), 1,
      anon_sym_DOT,
  [15249] = 1,
    ACTIONS(1509), 1,
      aux_sym_order_spec_token2,
  [15253] = 1,
    ACTIONS(1511), 1,
      anon_sym_DOT,
  [15257] = 1,
    ACTIONS(1513), 1,
      anon_sym_LPAREN,
  [15261] = 1,
    ACTIONS(1515), 1,
      aux_sym_create_index_token3,
  [15265] = 1,
    ACTIONS(1517), 1,
      anon_sym_DOT,
  [15269] = 1,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
  [15273] = 1,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
  [15277] = 1,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [15281] = 1,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
  [15285] = 1,
    ACTIONS(1527), 1,
      anon_sym_GT,
  [15289] = 1,
    ACTIONS(1529), 1,
      aux_sym_grant_token2,
  [15293] = 1,
    ACTIONS(1531), 1,
      anon_sym_LPAREN,
  [15297] = 1,
    ACTIONS(1533), 1,
      anon_sym_DOT,
  [15301] = 1,
    ACTIONS(1535), 1,
      anon_sym_DOT,
  [15305] = 1,
    ACTIONS(1537), 1,
      anon_sym_RBRACE,
  [15309] = 1,
    ACTIONS(1539), 1,
      aux_sym_drop_type_token1,
  [15313] = 1,
    ACTIONS(1541), 1,
      aux_sym_create_function_token1,
  [15317] = 1,
    ACTIONS(1543), 1,
      aux_sym_create_function_token2,
  [15321] = 1,
    ACTIONS(1545), 1,
      aux_sym_return_mode_token2,
  [15325] = 1,
    ACTIONS(1547), 1,
      aux_sym_create_function_token1,
  [15329] = 1,
    ACTIONS(1549), 1,
      anon_sym_LPAREN,
  [15333] = 1,
    ACTIONS(1551), 1,
      anon_sym_EQ,
  [15337] = 1,
    ACTIONS(1553), 1,
      anon_sym_DOT,
  [15341] = 1,
    ACTIONS(1555), 1,
      anon_sym_LBRACE,
  [15345] = 1,
    ACTIONS(1557), 1,
      anon_sym_DOT,
  [15349] = 1,
    ACTIONS(1559), 1,
      aux_sym_create_aggregate_token3,
  [15353] = 1,
    ACTIONS(1561), 1,
      aux_sym_create_aggregate_token4,
  [15357] = 1,
    ACTIONS(1563), 1,
      anon_sym_DOT,
  [15361] = 1,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
  [15365] = 1,
    ACTIONS(1331), 1,
      anon_sym_RBRACK,
  [15369] = 1,
    ACTIONS(1567), 1,
      anon_sym_DOT,
  [15373] = 1,
    ACTIONS(1569), 1,
      anon_sym_DOT,
  [15377] = 1,
    ACTIONS(1571), 1,
      anon_sym_DOT,
  [15381] = 1,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
  [15385] = 1,
    ACTIONS(1575), 1,
      anon_sym_DOT,
  [15389] = 1,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
  [15393] = 1,
    ACTIONS(1579), 1,
      aux_sym_select_statement_token6,
  [15397] = 1,
    ACTIONS(1581), 1,
      anon_sym_DOT,
  [15401] = 1,
    ACTIONS(1583), 1,
      aux_sym_if_exist_token2,
  [15405] = 1,
    ACTIONS(1585), 1,
      sym__hex_4digit,
  [15409] = 1,
    ACTIONS(1587), 1,
      aux_sym_create_keyspace_token1,
  [15413] = 1,
    ACTIONS(1589), 1,
      aux_sym_create_aggregate_token4,
  [15417] = 1,
    ACTIONS(1591), 1,
      anon_sym_RPAREN,
  [15421] = 1,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
  [15425] = 1,
    ACTIONS(1595), 1,
      aux_sym_using_timestamp_spec_token1,
  [15429] = 1,
    ACTIONS(1597), 1,
      anon_sym_EQ,
  [15433] = 1,
    ACTIONS(1599), 1,
      aux_sym_select_statement_token6,
  [15437] = 1,
    ACTIONS(1601), 1,
      anon_sym_DASH,
  [15441] = 1,
    ACTIONS(1603), 1,
      anon_sym_DOT,
  [15445] = 1,
    ACTIONS(1605), 1,
      aux_sym_create_aggregate_token3,
  [15449] = 1,
    ACTIONS(1607), 1,
      aux_sym_create_keyspace_token1,
  [15453] = 1,
    ACTIONS(1609), 1,
      anon_sym_COLON,
  [15457] = 1,
    ACTIONS(1611), 1,
      aux_sym_using_timestamp_spec_token1,
  [15461] = 1,
    ACTIONS(1613), 1,
      aux_sym_create_function_token2,
  [15465] = 1,
    ACTIONS(1615), 1,
      aux_sym_return_mode_token2,
  [15469] = 1,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
  [15473] = 1,
    ACTIONS(1619), 1,
      aux_sym_relalationContainsKey_token2,
  [15477] = 1,
    ACTIONS(1621), 1,
      aux_sym_constant_token1,
  [15481] = 1,
    ACTIONS(1623), 1,
      anon_sym_RPAREN,
  [15485] = 1,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
  [15489] = 1,
    ACTIONS(1627), 1,
      anon_sym_COMMA,
  [15493] = 1,
    ACTIONS(1629), 1,
      anon_sym_DOT,
  [15497] = 1,
    ACTIONS(1631), 1,
      anon_sym_DOT,
  [15501] = 1,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
  [15505] = 1,
    ACTIONS(1635), 1,
      anon_sym_LPAREN,
  [15509] = 1,
    ACTIONS(1637), 1,
      anon_sym_EQ,
  [15513] = 1,
    ACTIONS(1639), 1,
      aux_sym_create_function_token1,
  [15517] = 1,
    ACTIONS(1641), 1,
      aux_sym_resource_token2,
  [15521] = 1,
    ACTIONS(1643), 1,
      aux_sym_create_keyspace_token2,
  [15525] = 1,
    ACTIONS(1645), 1,
      anon_sym_RBRACE,
  [15529] = 1,
    ACTIONS(1647), 1,
      aux_sym_create_function_token2,
  [15533] = 1,
    ACTIONS(1649), 1,
      anon_sym_LPAREN,
  [15537] = 1,
    ACTIONS(1651), 1,
      aux_sym_create_function_token1,
  [15541] = 1,
    ACTIONS(1653), 1,
      anon_sym_LPAREN,
  [15545] = 1,
    ACTIONS(1655), 1,
      anon_sym_COLON,
  [15549] = 1,
    ACTIONS(1657), 1,
      aux_sym_create_function_token1,
  [15553] = 1,
    ACTIONS(1659), 1,
      aux_sym_select_element_token1,
  [15557] = 1,
    ACTIONS(1661), 1,
      aux_sym_select_element_token1,
  [15561] = 1,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
  [15565] = 1,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
  [15569] = 1,
    ACTIONS(1667), 1,
      anon_sym_RPAREN,
  [15573] = 1,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
  [15577] = 1,
    ACTIONS(1671), 1,
      aux_sym_create_aggregate_token4,
  [15581] = 1,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
  [15585] = 1,
    ACTIONS(1675), 1,
      anon_sym_DOT,
  [15589] = 1,
    ACTIONS(1677), 1,
      aux_sym_create_aggregate_token5,
  [15593] = 1,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
  [15597] = 1,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
  [15601] = 1,
    ACTIONS(1683), 1,
      aux_sym_create_aggregate_token3,
  [15605] = 1,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
  [15609] = 1,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
  [15613] = 1,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [15617] = 1,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
  [15621] = 1,
    ACTIONS(1693), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15625] = 1,
    ACTIONS(1695), 1,
      anon_sym_DOT,
  [15629] = 1,
    ACTIONS(1697), 1,
      sym__hex_4digit,
  [15633] = 1,
    ACTIONS(1699), 1,
      sym__hex_4digit,
  [15637] = 1,
    ACTIONS(1701), 1,
      aux_sym_create_keyspace_token1,
  [15641] = 1,
    ACTIONS(1703), 1,
      anon_sym_RPAREN,
  [15645] = 1,
    ACTIONS(1705), 1,
      anon_sym_COLON,
  [15649] = 1,
    ACTIONS(1707), 1,
      aux_sym_select_statement_token6,
  [15653] = 1,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
  [15657] = 1,
    ACTIONS(1711), 1,
      anon_sym_RPAREN,
  [15661] = 1,
    ACTIONS(1713), 1,
      anon_sym_LPAREN,
  [15665] = 1,
    ACTIONS(1715), 1,
      anon_sym_DOT,
  [15669] = 1,
    ACTIONS(1717), 1,
      anon_sym_RPAREN,
  [15673] = 1,
    ACTIONS(1719), 1,
      anon_sym_RPAREN,
  [15677] = 1,
    ACTIONS(1721), 1,
      anon_sym_DASH,
  [15681] = 1,
    ACTIONS(1723), 1,
      aux_sym_create_index_token3,
  [15685] = 1,
    ACTIONS(1725), 1,
      aux_sym_durable_writes_token2,
  [15689] = 1,
    ACTIONS(1727), 1,
      aux_sym_create_index_token3,
  [15693] = 1,
    ACTIONS(1729), 1,
      aux_sym_order_spec_token1,
  [15697] = 1,
    ACTIONS(1731), 1,
      anon_sym_DOT,
  [15701] = 1,
    ACTIONS(1733), 1,
      aux_sym_create_function_token2,
  [15705] = 1,
    ACTIONS(1735), 1,
      aux_sym__string_literal_token2,
  [15709] = 1,
    ACTIONS(1737), 1,
      aux_sym_create_function_token1,
  [15713] = 1,
    ACTIONS(1739), 1,
      aux_sym_select_element_token1,
  [15717] = 1,
    ACTIONS(1741), 1,
      anon_sym_DASH,
  [15721] = 1,
    ACTIONS(1743), 1,
      aux_sym_using_timestamp_spec_token1,
  [15725] = 1,
    ACTIONS(1745), 1,
      aux_sym__string_literal_token1,
  [15729] = 1,
    ACTIONS(1747), 1,
      aux_sym_create_aggregate_token4,
  [15733] = 1,
    ACTIONS(1749), 1,
      aux_sym_create_aggregate_token5,
  [15737] = 1,
    ACTIONS(1751), 1,
      anon_sym_DOT,
  [15741] = 1,
    ACTIONS(1753), 1,
      sym__dquote,
  [15745] = 1,
    ACTIONS(1755), 1,
      anon_sym_DOT,
  [15749] = 1,
    ACTIONS(1757), 1,
      anon_sym_RPAREN,
  [15753] = 1,
    ACTIONS(1759), 1,
      aux_sym_create_aggregate_token3,
  [15757] = 1,
    ACTIONS(1761), 1,
      anon_sym_DOT,
  [15761] = 1,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
  [15765] = 1,
    ACTIONS(1765), 1,
      sym__hex_4digit,
  [15769] = 1,
    ACTIONS(1767), 1,
      anon_sym_DOT,
  [15773] = 1,
    ACTIONS(1769), 1,
      aux_sym_if_not_exist_token1,
  [15777] = 1,
    ACTIONS(1771), 1,
      anon_sym_LPAREN,
  [15781] = 1,
    ACTIONS(1773), 1,
      anon_sym_LPAREN,
  [15785] = 1,
    ACTIONS(1775), 1,
      aux_sym_create_keyspace_token1,
  [15789] = 1,
    ACTIONS(1777), 1,
      anon_sym_COMMA,
  [15793] = 1,
    ACTIONS(1779), 1,
      aux_sym_grant_token2,
  [15797] = 1,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
  [15801] = 1,
    ACTIONS(1783), 1,
      anon_sym_DOT,
  [15805] = 1,
    ACTIONS(1785), 1,
      anon_sym_EQ,
  [15809] = 1,
    ACTIONS(1787), 1,
      anon_sym_LPAREN,
  [15813] = 1,
    ACTIONS(1789), 1,
      aux_sym_select_element_token1,
  [15817] = 1,
    ACTIONS(1791), 1,
      anon_sym_DASH,
  [15821] = 1,
    ACTIONS(1793), 1,
      aux_sym_create_function_token2,
  [15825] = 1,
    ACTIONS(1795), 1,
      anon_sym_DOT,
  [15829] = 1,
    ACTIONS(1797), 1,
      aux_sym_order_spec_token2,
  [15833] = 1,
    ACTIONS(1799), 1,
      aux_sym__string_literal_token2,
  [15837] = 1,
    ACTIONS(1801), 1,
      sym__dquote,
  [15841] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_aggregate_token5,
  [15845] = 1,
    ACTIONS(1805), 1,
      anon_sym_LPAREN,
  [15849] = 1,
    ACTIONS(1807), 1,
      anon_sym_LPAREN,
  [15853] = 1,
    ACTIONS(1809), 1,
      aux_sym_create_aggregate_token6,
  [15857] = 1,
    ACTIONS(1811), 1,
      aux_sym_create_function_token1,
  [15861] = 1,
    ACTIONS(1813), 1,
      anon_sym_DOT,
  [15865] = 1,
    ACTIONS(1815), 1,
      aux_sym_create_aggregate_token4,
  [15869] = 1,
    ACTIONS(1817), 1,
      aux_sym_select_statement_token6,
  [15873] = 1,
    ACTIONS(1819), 1,
      sym__hex_4digit,
  [15877] = 1,
    ACTIONS(1821), 1,
      anon_sym_DOT,
  [15881] = 1,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
  [15885] = 1,
    ACTIONS(1825), 1,
      anon_sym_RPAREN,
  [15889] = 1,
    ACTIONS(1827), 1,
      sym_object_name,
  [15893] = 1,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
  [15897] = 1,
    ACTIONS(1831), 1,
      anon_sym_EQ,
  [15901] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [15905] = 1,
    ACTIONS(1835), 1,
      anon_sym_RPAREN,
  [15909] = 1,
    ACTIONS(1837), 1,
      sym__boolean_literal,
  [15913] = 1,
    ACTIONS(1839), 1,
      sym__dquote,
  [15917] = 1,
    ACTIONS(1841), 1,
      aux_sym_select_element_token1,
  [15921] = 1,
    ACTIONS(1843), 1,
      aux_sym_select_statement_token6,
  [15925] = 1,
    ACTIONS(1845), 1,
      aux_sym_create_function_token2,
  [15929] = 1,
    ACTIONS(1262), 1,
      aux_sym_update_token2,
  [15933] = 1,
    ACTIONS(1847), 1,
      anon_sym_DOLLAR_DOLLAR,
  [15937] = 1,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
  [15941] = 1,
    ACTIONS(1849), 1,
      aux_sym_create_aggregate_token5,
  [15945] = 1,
    ACTIONS(1851), 1,
      aux_sym_create_aggregate_token6,
  [15949] = 1,
    ACTIONS(1853), 1,
      anon_sym_LPAREN,
  [15953] = 1,
    ACTIONS(1855), 1,
      aux_sym_create_keyspace_token2,
  [15957] = 1,
    ACTIONS(1857), 1,
      aux_sym_create_function_token1,
  [15961] = 1,
    ACTIONS(1859), 1,
      anon_sym_RPAREN,
  [15965] = 1,
    ACTIONS(1861), 1,
      aux_sym_create_aggregate_token4,
  [15969] = 1,
    ACTIONS(1863), 1,
      anon_sym_EQ,
  [15973] = 1,
    ACTIONS(1865), 1,
      anon_sym_LPAREN,
  [15977] = 1,
    ACTIONS(1867), 1,
      anon_sym_RPAREN,
  [15981] = 1,
    ACTIONS(1869), 1,
      sym_object_name,
  [15985] = 1,
    ACTIONS(1871), 1,
      anon_sym_RPAREN,
  [15989] = 1,
    ACTIONS(1873), 1,
      anon_sym_LPAREN,
  [15993] = 1,
    ACTIONS(1875), 1,
      sym_object_name,
  [15997] = 1,
    ACTIONS(1877), 1,
      anon_sym_EQ,
  [16001] = 1,
    ACTIONS(1879), 1,
      aux_sym_select_element_token1,
  [16005] = 1,
    ACTIONS(1881), 1,
      sym_object_name,
  [16009] = 1,
    ACTIONS(1883), 1,
      sym_object_name,
  [16013] = 1,
    ACTIONS(1885), 1,
      aux_sym_create_aggregate_token6,
  [16017] = 1,
    ACTIONS(1887), 1,
      sym_object_name,
  [16021] = 1,
    ACTIONS(1883), 1,
      anon_sym_STAR,
  [16025] = 1,
    ACTIONS(1889), 1,
      anon_sym_LPAREN,
  [16029] = 1,
    ACTIONS(1891), 1,
      sym_object_name,
  [16033] = 1,
    ACTIONS(1893), 1,
      aux_sym_create_index_token3,
  [16037] = 1,
    ACTIONS(1895), 1,
      aux_sym_create_function_token2,
  [16041] = 1,
    ACTIONS(1897), 1,
      sym_object_name,
  [16045] = 1,
    ACTIONS(1899), 1,
      aux_sym_create_aggregate_token5,
  [16049] = 1,
    ACTIONS(1901), 1,
      anon_sym_EQ,
  [16053] = 1,
    ACTIONS(1903), 1,
      aux_sym_insert_statement_token2,
  [16057] = 1,
    ACTIONS(1905), 1,
      aux_sym_if_exist_token2,
  [16061] = 1,
    ACTIONS(1907), 1,
      aux_sym_select_element_token1,
  [16065] = 1,
    ACTIONS(1296), 1,
      aux_sym_update_token2,
  [16069] = 1,
    ACTIONS(1909), 1,
      aux_sym_create_aggregate_token6,
  [16073] = 1,
    ACTIONS(1911), 1,
      aux_sym_create_index_token3,
  [16077] = 1,
    ACTIONS(1913), 1,
      anon_sym_DOT,
  [16081] = 1,
    ACTIONS(1915), 1,
      anon_sym_COLON,
  [16085] = 1,
    ACTIONS(1917), 1,
      aux_sym_using_timestamp_spec_token1,
  [16089] = 1,
    ACTIONS(1919), 1,
      anon_sym_DOT,
  [16093] = 1,
    ACTIONS(1921), 1,
      aux_sym_create_aggregate_token3,
  [16097] = 1,
    ACTIONS(1923), 1,
      anon_sym_COLON,
  [16101] = 1,
    ACTIONS(1925), 1,
      aux_sym_create_index_token3,
  [16105] = 1,
    ACTIONS(1927), 1,
      aux_sym_create_function_token2,
  [16109] = 1,
    ACTIONS(1929), 1,
      anon_sym_RPAREN,
  [16113] = 1,
    ACTIONS(1931), 1,
      aux_sym_create_aggregate_token5,
  [16117] = 1,
    ACTIONS(1933), 1,
      anon_sym_LPAREN,
  [16121] = 1,
    ACTIONS(1935), 1,
      anon_sym_LPAREN,
  [16125] = 1,
    ACTIONS(1937), 1,
      aux_sym_create_keyspace_token2,
  [16129] = 1,
    ACTIONS(1939), 1,
      anon_sym_RPAREN,
  [16133] = 1,
    ACTIONS(1941), 1,
      anon_sym_LPAREN,
  [16137] = 1,
    ACTIONS(1943), 1,
      anon_sym_RPAREN,
  [16141] = 1,
    ACTIONS(1945), 1,
      aux_sym_create_index_token3,
  [16145] = 1,
    ACTIONS(1947), 1,
      sym_object_name,
  [16149] = 1,
    ACTIONS(1949), 1,
      sym__hex_digit,
  [16153] = 1,
    ACTIONS(1951), 1,
      anon_sym_LPAREN,
  [16157] = 1,
    ACTIONS(1953), 1,
      sym__boolean_literal,
  [16161] = 1,
    ACTIONS(1955), 1,
      sym_object_name,
  [16165] = 1,
    ACTIONS(1957), 1,
      anon_sym_DOT,
  [16169] = 1,
    ACTIONS(1959), 1,
      aux_sym_select_element_token1,
  [16173] = 1,
    ACTIONS(1961), 1,
      sym_object_name,
  [16177] = 1,
    ACTIONS(1963), 1,
      aux_sym_create_aggregate_token6,
  [16181] = 1,
    ACTIONS(1965), 1,
      anon_sym_RPAREN,
  [16185] = 1,
    ACTIONS(1967), 1,
      aux_sym_create_keyspace_token1,
  [16189] = 1,
    ACTIONS(1969), 1,
      anon_sym_DOT,
  [16193] = 1,
    ACTIONS(1971), 1,
      aux_sym_create_aggregate_token2,
  [16197] = 1,
    ACTIONS(1973), 1,
      anon_sym_RPAREN,
  [16201] = 1,
    ACTIONS(1975), 1,
      aux_sym_create_aggregate_token3,
  [16205] = 1,
    ACTIONS(1977), 1,
      aux_sym_create_function_token1,
  [16209] = 1,
    ACTIONS(1979), 1,
      anon_sym_LPAREN,
  [16213] = 1,
    ACTIONS(1981), 1,
      aux_sym_create_index_token3,
  [16217] = 1,
    ACTIONS(1983), 1,
      aux_sym_constant_token1,
  [16221] = 1,
    ACTIONS(1985), 1,
      anon_sym_RPAREN,
  [16225] = 1,
    ACTIONS(1987), 1,
      anon_sym_SQUOTE,
  [16229] = 1,
    ACTIONS(1989), 1,
      aux_sym_select_element_token1,
  [16233] = 1,
    ACTIONS(1991), 1,
      anon_sym_DOT,
  [16237] = 1,
    ACTIONS(1993), 1,
      aux_sym_create_aggregate_token6,
  [16241] = 1,
    ACTIONS(1995), 1,
      anon_sym_DOT,
  [16245] = 1,
    ACTIONS(1987), 1,
      anon_sym_DOLLAR_DOLLAR,
  [16249] = 1,
    ACTIONS(1997), 1,
      aux_sym_create_index_token3,
  [16253] = 1,
    ACTIONS(1999), 1,
      sym_object_name,
  [16257] = 1,
    ACTIONS(2001), 1,
      anon_sym_EQ,
  [16261] = 1,
    ACTIONS(2003), 1,
      anon_sym_LPAREN,
  [16265] = 1,
    ACTIONS(2005), 1,
      aux_sym_begin_batch_token4,
  [16269] = 1,
    ACTIONS(2007), 1,
      anon_sym_GT,
  [16273] = 1,
    ACTIONS(2009), 1,
      anon_sym_DOT,
  [16277] = 1,
    ACTIONS(2011), 1,
      anon_sym_LPAREN,
  [16281] = 1,
    ACTIONS(2013), 1,
      aux_sym_constant_token1,
  [16285] = 1,
    ACTIONS(2015), 1,
      anon_sym_LBRACE,
  [16289] = 1,
    ACTIONS(2017), 1,
      anon_sym_DOT,
  [16293] = 1,
    ACTIONS(2019), 1,
      aux_sym_from_spec_token1,
  [16297] = 1,
    ACTIONS(2021), 1,
      aux_sym_create_index_token3,
  [16301] = 1,
    ACTIONS(2023), 1,
      anon_sym_RPAREN,
  [16305] = 1,
    ACTIONS(2025), 1,
      aux_sym_relalationContainsKey_token2,
  [16309] = 1,
    ACTIONS(2027), 1,
      aux_sym_if_exist_token2,
  [16313] = 1,
    ACTIONS(2029), 1,
      sym__dquote,
  [16317] = 1,
    ACTIONS(2031), 1,
      aux_sym_create_function_token1,
  [16321] = 1,
    ACTIONS(2033), 1,
      aux_sym_if_not_exist_token1,
  [16325] = 1,
    ACTIONS(2035), 1,
      anon_sym_RPAREN,
  [16329] = 1,
    ACTIONS(2037), 1,
      anon_sym_DOT,
  [16333] = 1,
    ACTIONS(2039), 1,
      anon_sym_LPAREN,
  [16337] = 1,
    ACTIONS(2041), 1,
      sym_object_name,
  [16341] = 1,
    ACTIONS(2043), 1,
      ts_builtin_sym_end,
  [16345] = 1,
    ACTIONS(2045), 1,
      aux_sym_begin_batch_token4,
  [16349] = 1,
    ACTIONS(2047), 1,
      anon_sym_LBRACE,
  [16353] = 1,
    ACTIONS(2049), 1,
      anon_sym_LPAREN,
  [16357] = 1,
    ACTIONS(2051), 1,
      anon_sym_LPAREN,
  [16361] = 1,
    ACTIONS(2053), 1,
      anon_sym_LPAREN,
  [16365] = 1,
    ACTIONS(2055), 1,
      anon_sym_DOT,
  [16369] = 1,
    ACTIONS(2057), 1,
      anon_sym_DOT,
  [16373] = 1,
    ACTIONS(2059), 1,
      aux_sym_insert_statement_token2,
  [16377] = 1,
    ACTIONS(2061), 1,
      anon_sym_LPAREN,
  [16381] = 1,
    ACTIONS(2063), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 261,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 377,
  [SMALL_STATE(10)] = 416,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 486,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 553,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 617,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 691,
  [SMALL_STATE(19)] = 728,
  [SMALL_STATE(20)] = 765,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 839,
  [SMALL_STATE(23)] = 876,
  [SMALL_STATE(24)] = 913,
  [SMALL_STATE(25)] = 946,
  [SMALL_STATE(26)] = 979,
  [SMALL_STATE(27)] = 1016,
  [SMALL_STATE(28)] = 1053,
  [SMALL_STATE(29)] = 1090,
  [SMALL_STATE(30)] = 1127,
  [SMALL_STATE(31)] = 1164,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1238,
  [SMALL_STATE(34)] = 1275,
  [SMALL_STATE(35)] = 1312,
  [SMALL_STATE(36)] = 1349,
  [SMALL_STATE(37)] = 1386,
  [SMALL_STATE(38)] = 1423,
  [SMALL_STATE(39)] = 1460,
  [SMALL_STATE(40)] = 1497,
  [SMALL_STATE(41)] = 1534,
  [SMALL_STATE(42)] = 1571,
  [SMALL_STATE(43)] = 1608,
  [SMALL_STATE(44)] = 1641,
  [SMALL_STATE(45)] = 1678,
  [SMALL_STATE(46)] = 1711,
  [SMALL_STATE(47)] = 1748,
  [SMALL_STATE(48)] = 1778,
  [SMALL_STATE(49)] = 1808,
  [SMALL_STATE(50)] = 1842,
  [SMALL_STATE(51)] = 1876,
  [SMALL_STATE(52)] = 1933,
  [SMALL_STATE(53)] = 1959,
  [SMALL_STATE(54)] = 1985,
  [SMALL_STATE(55)] = 2039,
  [SMALL_STATE(56)] = 2069,
  [SMALL_STATE(57)] = 2095,
  [SMALL_STATE(58)] = 2132,
  [SMALL_STATE(59)] = 2163,
  [SMALL_STATE(60)] = 2202,
  [SMALL_STATE(61)] = 2231,
  [SMALL_STATE(62)] = 2260,
  [SMALL_STATE(63)] = 2297,
  [SMALL_STATE(64)] = 2324,
  [SMALL_STATE(65)] = 2361,
  [SMALL_STATE(66)] = 2386,
  [SMALL_STATE(67)] = 2410,
  [SMALL_STATE(68)] = 2434,
  [SMALL_STATE(69)] = 2458,
  [SMALL_STATE(70)] = 2482,
  [SMALL_STATE(71)] = 2510,
  [SMALL_STATE(72)] = 2538,
  [SMALL_STATE(73)] = 2562,
  [SMALL_STATE(74)] = 2588,
  [SMALL_STATE(75)] = 2612,
  [SMALL_STATE(76)] = 2636,
  [SMALL_STATE(77)] = 2660,
  [SMALL_STATE(78)] = 2688,
  [SMALL_STATE(79)] = 2716,
  [SMALL_STATE(80)] = 2744,
  [SMALL_STATE(81)] = 2768,
  [SMALL_STATE(82)] = 2820,
  [SMALL_STATE(83)] = 2844,
  [SMALL_STATE(84)] = 2868,
  [SMALL_STATE(85)] = 2896,
  [SMALL_STATE(86)] = 2920,
  [SMALL_STATE(87)] = 2944,
  [SMALL_STATE(88)] = 2968,
  [SMALL_STATE(89)] = 2996,
  [SMALL_STATE(90)] = 3020,
  [SMALL_STATE(91)] = 3044,
  [SMALL_STATE(92)] = 3097,
  [SMALL_STATE(93)] = 3144,
  [SMALL_STATE(94)] = 3167,
  [SMALL_STATE(95)] = 3198,
  [SMALL_STATE(96)] = 3249,
  [SMALL_STATE(97)] = 3296,
  [SMALL_STATE(98)] = 3323,
  [SMALL_STATE(99)] = 3370,
  [SMALL_STATE(100)] = 3395,
  [SMALL_STATE(101)] = 3420,
  [SMALL_STATE(102)] = 3467,
  [SMALL_STATE(103)] = 3498,
  [SMALL_STATE(104)] = 3529,
  [SMALL_STATE(105)] = 3576,
  [SMALL_STATE(106)] = 3607,
  [SMALL_STATE(107)] = 3638,
  [SMALL_STATE(108)] = 3669,
  [SMALL_STATE(109)] = 3700,
  [SMALL_STATE(110)] = 3747,
  [SMALL_STATE(111)] = 3770,
  [SMALL_STATE(112)] = 3801,
  [SMALL_STATE(113)] = 3848,
  [SMALL_STATE(114)] = 3870,
  [SMALL_STATE(115)] = 3896,
  [SMALL_STATE(116)] = 3918,
  [SMALL_STATE(117)] = 3946,
  [SMALL_STATE(118)] = 3972,
  [SMALL_STATE(119)] = 3998,
  [SMALL_STATE(120)] = 4024,
  [SMALL_STATE(121)] = 4050,
  [SMALL_STATE(122)] = 4072,
  [SMALL_STATE(123)] = 4098,
  [SMALL_STATE(124)] = 4124,
  [SMALL_STATE(125)] = 4152,
  [SMALL_STATE(126)] = 4180,
  [SMALL_STATE(127)] = 4202,
  [SMALL_STATE(128)] = 4228,
  [SMALL_STATE(129)] = 4254,
  [SMALL_STATE(130)] = 4276,
  [SMALL_STATE(131)] = 4302,
  [SMALL_STATE(132)] = 4326,
  [SMALL_STATE(133)] = 4352,
  [SMALL_STATE(134)] = 4380,
  [SMALL_STATE(135)] = 4406,
  [SMALL_STATE(136)] = 4432,
  [SMALL_STATE(137)] = 4454,
  [SMALL_STATE(138)] = 4480,
  [SMALL_STATE(139)] = 4506,
  [SMALL_STATE(140)] = 4532,
  [SMALL_STATE(141)] = 4558,
  [SMALL_STATE(142)] = 4580,
  [SMALL_STATE(143)] = 4602,
  [SMALL_STATE(144)] = 4624,
  [SMALL_STATE(145)] = 4652,
  [SMALL_STATE(146)] = 4674,
  [SMALL_STATE(147)] = 4700,
  [SMALL_STATE(148)] = 4722,
  [SMALL_STATE(149)] = 4748,
  [SMALL_STATE(150)] = 4774,
  [SMALL_STATE(151)] = 4799,
  [SMALL_STATE(152)] = 4824,
  [SMALL_STATE(153)] = 4849,
  [SMALL_STATE(154)] = 4874,
  [SMALL_STATE(155)] = 4895,
  [SMALL_STATE(156)] = 4920,
  [SMALL_STATE(157)] = 4941,
  [SMALL_STATE(158)] = 4966,
  [SMALL_STATE(159)] = 4987,
  [SMALL_STATE(160)] = 5008,
  [SMALL_STATE(161)] = 5033,
  [SMALL_STATE(162)] = 5058,
  [SMALL_STATE(163)] = 5083,
  [SMALL_STATE(164)] = 5104,
  [SMALL_STATE(165)] = 5125,
  [SMALL_STATE(166)] = 5150,
  [SMALL_STATE(167)] = 5171,
  [SMALL_STATE(168)] = 5192,
  [SMALL_STATE(169)] = 5217,
  [SMALL_STATE(170)] = 5238,
  [SMALL_STATE(171)] = 5259,
  [SMALL_STATE(172)] = 5284,
  [SMALL_STATE(173)] = 5329,
  [SMALL_STATE(174)] = 5354,
  [SMALL_STATE(175)] = 5379,
  [SMALL_STATE(176)] = 5400,
  [SMALL_STATE(177)] = 5421,
  [SMALL_STATE(178)] = 5442,
  [SMALL_STATE(179)] = 5467,
  [SMALL_STATE(180)] = 5492,
  [SMALL_STATE(181)] = 5517,
  [SMALL_STATE(182)] = 5542,
  [SMALL_STATE(183)] = 5563,
  [SMALL_STATE(184)] = 5588,
  [SMALL_STATE(185)] = 5613,
  [SMALL_STATE(186)] = 5634,
  [SMALL_STATE(187)] = 5659,
  [SMALL_STATE(188)] = 5680,
  [SMALL_STATE(189)] = 5701,
  [SMALL_STATE(190)] = 5726,
  [SMALL_STATE(191)] = 5751,
  [SMALL_STATE(192)] = 5776,
  [SMALL_STATE(193)] = 5801,
  [SMALL_STATE(194)] = 5826,
  [SMALL_STATE(195)] = 5849,
  [SMALL_STATE(196)] = 5872,
  [SMALL_STATE(197)] = 5897,
  [SMALL_STATE(198)] = 5922,
  [SMALL_STATE(199)] = 5943,
  [SMALL_STATE(200)] = 5968,
  [SMALL_STATE(201)] = 5993,
  [SMALL_STATE(202)] = 6018,
  [SMALL_STATE(203)] = 6043,
  [SMALL_STATE(204)] = 6068,
  [SMALL_STATE(205)] = 6089,
  [SMALL_STATE(206)] = 6114,
  [SMALL_STATE(207)] = 6139,
  [SMALL_STATE(208)] = 6162,
  [SMALL_STATE(209)] = 6184,
  [SMALL_STATE(210)] = 6204,
  [SMALL_STATE(211)] = 6248,
  [SMALL_STATE(212)] = 6270,
  [SMALL_STATE(213)] = 6292,
  [SMALL_STATE(214)] = 6312,
  [SMALL_STATE(215)] = 6334,
  [SMALL_STATE(216)] = 6354,
  [SMALL_STATE(217)] = 6374,
  [SMALL_STATE(218)] = 6394,
  [SMALL_STATE(219)] = 6414,
  [SMALL_STATE(220)] = 6434,
  [SMALL_STATE(221)] = 6456,
  [SMALL_STATE(222)] = 6478,
  [SMALL_STATE(223)] = 6498,
  [SMALL_STATE(224)] = 6518,
  [SMALL_STATE(225)] = 6560,
  [SMALL_STATE(226)] = 6602,
  [SMALL_STATE(227)] = 6644,
  [SMALL_STATE(228)] = 6666,
  [SMALL_STATE(229)] = 6686,
  [SMALL_STATE(230)] = 6706,
  [SMALL_STATE(231)] = 6748,
  [SMALL_STATE(232)] = 6767,
  [SMALL_STATE(233)] = 6786,
  [SMALL_STATE(234)] = 6805,
  [SMALL_STATE(235)] = 6824,
  [SMALL_STATE(236)] = 6843,
  [SMALL_STATE(237)] = 6862,
  [SMALL_STATE(238)] = 6881,
  [SMALL_STATE(239)] = 6900,
  [SMALL_STATE(240)] = 6919,
  [SMALL_STATE(241)] = 6938,
  [SMALL_STATE(242)] = 6957,
  [SMALL_STATE(243)] = 6976,
  [SMALL_STATE(244)] = 6995,
  [SMALL_STATE(245)] = 7014,
  [SMALL_STATE(246)] = 7033,
  [SMALL_STATE(247)] = 7052,
  [SMALL_STATE(248)] = 7071,
  [SMALL_STATE(249)] = 7090,
  [SMALL_STATE(250)] = 7109,
  [SMALL_STATE(251)] = 7128,
  [SMALL_STATE(252)] = 7147,
  [SMALL_STATE(253)] = 7166,
  [SMALL_STATE(254)] = 7185,
  [SMALL_STATE(255)] = 7204,
  [SMALL_STATE(256)] = 7223,
  [SMALL_STATE(257)] = 7242,
  [SMALL_STATE(258)] = 7261,
  [SMALL_STATE(259)] = 7280,
  [SMALL_STATE(260)] = 7299,
  [SMALL_STATE(261)] = 7318,
  [SMALL_STATE(262)] = 7337,
  [SMALL_STATE(263)] = 7356,
  [SMALL_STATE(264)] = 7375,
  [SMALL_STATE(265)] = 7394,
  [SMALL_STATE(266)] = 7413,
  [SMALL_STATE(267)] = 7432,
  [SMALL_STATE(268)] = 7451,
  [SMALL_STATE(269)] = 7470,
  [SMALL_STATE(270)] = 7489,
  [SMALL_STATE(271)] = 7508,
  [SMALL_STATE(272)] = 7527,
  [SMALL_STATE(273)] = 7546,
  [SMALL_STATE(274)] = 7565,
  [SMALL_STATE(275)] = 7584,
  [SMALL_STATE(276)] = 7603,
  [SMALL_STATE(277)] = 7622,
  [SMALL_STATE(278)] = 7641,
  [SMALL_STATE(279)] = 7660,
  [SMALL_STATE(280)] = 7679,
  [SMALL_STATE(281)] = 7698,
  [SMALL_STATE(282)] = 7717,
  [SMALL_STATE(283)] = 7736,
  [SMALL_STATE(284)] = 7755,
  [SMALL_STATE(285)] = 7774,
  [SMALL_STATE(286)] = 7793,
  [SMALL_STATE(287)] = 7812,
  [SMALL_STATE(288)] = 7831,
  [SMALL_STATE(289)] = 7850,
  [SMALL_STATE(290)] = 7869,
  [SMALL_STATE(291)] = 7888,
  [SMALL_STATE(292)] = 7907,
  [SMALL_STATE(293)] = 7926,
  [SMALL_STATE(294)] = 7945,
  [SMALL_STATE(295)] = 7964,
  [SMALL_STATE(296)] = 7983,
  [SMALL_STATE(297)] = 8002,
  [SMALL_STATE(298)] = 8021,
  [SMALL_STATE(299)] = 8040,
  [SMALL_STATE(300)] = 8059,
  [SMALL_STATE(301)] = 8078,
  [SMALL_STATE(302)] = 8097,
  [SMALL_STATE(303)] = 8116,
  [SMALL_STATE(304)] = 8135,
  [SMALL_STATE(305)] = 8154,
  [SMALL_STATE(306)] = 8173,
  [SMALL_STATE(307)] = 8194,
  [SMALL_STATE(308)] = 8213,
  [SMALL_STATE(309)] = 8232,
  [SMALL_STATE(310)] = 8251,
  [SMALL_STATE(311)] = 8292,
  [SMALL_STATE(312)] = 8311,
  [SMALL_STATE(313)] = 8330,
  [SMALL_STATE(314)] = 8349,
  [SMALL_STATE(315)] = 8368,
  [SMALL_STATE(316)] = 8387,
  [SMALL_STATE(317)] = 8406,
  [SMALL_STATE(318)] = 8425,
  [SMALL_STATE(319)] = 8444,
  [SMALL_STATE(320)] = 8463,
  [SMALL_STATE(321)] = 8482,
  [SMALL_STATE(322)] = 8501,
  [SMALL_STATE(323)] = 8520,
  [SMALL_STATE(324)] = 8539,
  [SMALL_STATE(325)] = 8558,
  [SMALL_STATE(326)] = 8577,
  [SMALL_STATE(327)] = 8596,
  [SMALL_STATE(328)] = 8615,
  [SMALL_STATE(329)] = 8634,
  [SMALL_STATE(330)] = 8653,
  [SMALL_STATE(331)] = 8672,
  [SMALL_STATE(332)] = 8691,
  [SMALL_STATE(333)] = 8710,
  [SMALL_STATE(334)] = 8729,
  [SMALL_STATE(335)] = 8748,
  [SMALL_STATE(336)] = 8767,
  [SMALL_STATE(337)] = 8786,
  [SMALL_STATE(338)] = 8805,
  [SMALL_STATE(339)] = 8824,
  [SMALL_STATE(340)] = 8843,
  [SMALL_STATE(341)] = 8884,
  [SMALL_STATE(342)] = 8903,
  [SMALL_STATE(343)] = 8922,
  [SMALL_STATE(344)] = 8941,
  [SMALL_STATE(345)] = 8960,
  [SMALL_STATE(346)] = 8979,
  [SMALL_STATE(347)] = 8998,
  [SMALL_STATE(348)] = 9017,
  [SMALL_STATE(349)] = 9036,
  [SMALL_STATE(350)] = 9055,
  [SMALL_STATE(351)] = 9074,
  [SMALL_STATE(352)] = 9093,
  [SMALL_STATE(353)] = 9112,
  [SMALL_STATE(354)] = 9131,
  [SMALL_STATE(355)] = 9150,
  [SMALL_STATE(356)] = 9191,
  [SMALL_STATE(357)] = 9210,
  [SMALL_STATE(358)] = 9229,
  [SMALL_STATE(359)] = 9248,
  [SMALL_STATE(360)] = 9267,
  [SMALL_STATE(361)] = 9286,
  [SMALL_STATE(362)] = 9305,
  [SMALL_STATE(363)] = 9324,
  [SMALL_STATE(364)] = 9343,
  [SMALL_STATE(365)] = 9362,
  [SMALL_STATE(366)] = 9381,
  [SMALL_STATE(367)] = 9400,
  [SMALL_STATE(368)] = 9438,
  [SMALL_STATE(369)] = 9476,
  [SMALL_STATE(370)] = 9514,
  [SMALL_STATE(371)] = 9552,
  [SMALL_STATE(372)] = 9590,
  [SMALL_STATE(373)] = 9628,
  [SMALL_STATE(374)] = 9666,
  [SMALL_STATE(375)] = 9684,
  [SMALL_STATE(376)] = 9722,
  [SMALL_STATE(377)] = 9760,
  [SMALL_STATE(378)] = 9798,
  [SMALL_STATE(379)] = 9836,
  [SMALL_STATE(380)] = 9874,
  [SMALL_STATE(381)] = 9912,
  [SMALL_STATE(382)] = 9950,
  [SMALL_STATE(383)] = 9988,
  [SMALL_STATE(384)] = 10026,
  [SMALL_STATE(385)] = 10046,
  [SMALL_STATE(386)] = 10071,
  [SMALL_STATE(387)] = 10096,
  [SMALL_STATE(388)] = 10121,
  [SMALL_STATE(389)] = 10152,
  [SMALL_STATE(390)] = 10183,
  [SMALL_STATE(391)] = 10210,
  [SMALL_STATE(392)] = 10241,
  [SMALL_STATE(393)] = 10264,
  [SMALL_STATE(394)] = 10289,
  [SMALL_STATE(395)] = 10306,
  [SMALL_STATE(396)] = 10337,
  [SMALL_STATE(397)] = 10360,
  [SMALL_STATE(398)] = 10385,
  [SMALL_STATE(399)] = 10402,
  [SMALL_STATE(400)] = 10424,
  [SMALL_STATE(401)] = 10452,
  [SMALL_STATE(402)] = 10468,
  [SMALL_STATE(403)] = 10492,
  [SMALL_STATE(404)] = 10508,
  [SMALL_STATE(405)] = 10536,
  [SMALL_STATE(406)] = 10558,
  [SMALL_STATE(407)] = 10583,
  [SMALL_STATE(408)] = 10605,
  [SMALL_STATE(409)] = 10627,
  [SMALL_STATE(410)] = 10645,
  [SMALL_STATE(411)] = 10665,
  [SMALL_STATE(412)] = 10685,
  [SMALL_STATE(413)] = 10703,
  [SMALL_STATE(414)] = 10721,
  [SMALL_STATE(415)] = 10741,
  [SMALL_STATE(416)] = 10760,
  [SMALL_STATE(417)] = 10779,
  [SMALL_STATE(418)] = 10798,
  [SMALL_STATE(419)] = 10817,
  [SMALL_STATE(420)] = 10836,
  [SMALL_STATE(421)] = 10855,
  [SMALL_STATE(422)] = 10874,
  [SMALL_STATE(423)] = 10885,
  [SMALL_STATE(424)] = 10904,
  [SMALL_STATE(425)] = 10923,
  [SMALL_STATE(426)] = 10942,
  [SMALL_STATE(427)] = 10961,
  [SMALL_STATE(428)] = 10980,
  [SMALL_STATE(429)] = 10999,
  [SMALL_STATE(430)] = 11016,
  [SMALL_STATE(431)] = 11035,
  [SMALL_STATE(432)] = 11046,
  [SMALL_STATE(433)] = 11065,
  [SMALL_STATE(434)] = 11082,
  [SMALL_STATE(435)] = 11101,
  [SMALL_STATE(436)] = 11120,
  [SMALL_STATE(437)] = 11139,
  [SMALL_STATE(438)] = 11147,
  [SMALL_STATE(439)] = 11163,
  [SMALL_STATE(440)] = 11179,
  [SMALL_STATE(441)] = 11189,
  [SMALL_STATE(442)] = 11205,
  [SMALL_STATE(443)] = 11221,
  [SMALL_STATE(444)] = 11237,
  [SMALL_STATE(445)] = 11247,
  [SMALL_STATE(446)] = 11263,
  [SMALL_STATE(447)] = 11279,
  [SMALL_STATE(448)] = 11295,
  [SMALL_STATE(449)] = 11309,
  [SMALL_STATE(450)] = 11325,
  [SMALL_STATE(451)] = 11337,
  [SMALL_STATE(452)] = 11351,
  [SMALL_STATE(453)] = 11367,
  [SMALL_STATE(454)] = 11383,
  [SMALL_STATE(455)] = 11399,
  [SMALL_STATE(456)] = 11407,
  [SMALL_STATE(457)] = 11423,
  [SMALL_STATE(458)] = 11439,
  [SMALL_STATE(459)] = 11453,
  [SMALL_STATE(460)] = 11463,
  [SMALL_STATE(461)] = 11479,
  [SMALL_STATE(462)] = 11495,
  [SMALL_STATE(463)] = 11511,
  [SMALL_STATE(464)] = 11527,
  [SMALL_STATE(465)] = 11543,
  [SMALL_STATE(466)] = 11559,
  [SMALL_STATE(467)] = 11571,
  [SMALL_STATE(468)] = 11581,
  [SMALL_STATE(469)] = 11597,
  [SMALL_STATE(470)] = 11613,
  [SMALL_STATE(471)] = 11621,
  [SMALL_STATE(472)] = 11629,
  [SMALL_STATE(473)] = 11645,
  [SMALL_STATE(474)] = 11661,
  [SMALL_STATE(475)] = 11677,
  [SMALL_STATE(476)] = 11689,
  [SMALL_STATE(477)] = 11697,
  [SMALL_STATE(478)] = 11713,
  [SMALL_STATE(479)] = 11729,
  [SMALL_STATE(480)] = 11737,
  [SMALL_STATE(481)] = 11745,
  [SMALL_STATE(482)] = 11761,
  [SMALL_STATE(483)] = 11771,
  [SMALL_STATE(484)] = 11782,
  [SMALL_STATE(485)] = 11795,
  [SMALL_STATE(486)] = 11808,
  [SMALL_STATE(487)] = 11821,
  [SMALL_STATE(488)] = 11834,
  [SMALL_STATE(489)] = 11847,
  [SMALL_STATE(490)] = 11860,
  [SMALL_STATE(491)] = 11873,
  [SMALL_STATE(492)] = 11886,
  [SMALL_STATE(493)] = 11899,
  [SMALL_STATE(494)] = 11912,
  [SMALL_STATE(495)] = 11925,
  [SMALL_STATE(496)] = 11938,
  [SMALL_STATE(497)] = 11951,
  [SMALL_STATE(498)] = 11964,
  [SMALL_STATE(499)] = 11977,
  [SMALL_STATE(500)] = 11990,
  [SMALL_STATE(501)] = 12001,
  [SMALL_STATE(502)] = 12008,
  [SMALL_STATE(503)] = 12021,
  [SMALL_STATE(504)] = 12034,
  [SMALL_STATE(505)] = 12045,
  [SMALL_STATE(506)] = 12058,
  [SMALL_STATE(507)] = 12071,
  [SMALL_STATE(508)] = 12084,
  [SMALL_STATE(509)] = 12097,
  [SMALL_STATE(510)] = 12110,
  [SMALL_STATE(511)] = 12123,
  [SMALL_STATE(512)] = 12136,
  [SMALL_STATE(513)] = 12149,
  [SMALL_STATE(514)] = 12162,
  [SMALL_STATE(515)] = 12175,
  [SMALL_STATE(516)] = 12182,
  [SMALL_STATE(517)] = 12195,
  [SMALL_STATE(518)] = 12208,
  [SMALL_STATE(519)] = 12221,
  [SMALL_STATE(520)] = 12234,
  [SMALL_STATE(521)] = 12247,
  [SMALL_STATE(522)] = 12260,
  [SMALL_STATE(523)] = 12273,
  [SMALL_STATE(524)] = 12286,
  [SMALL_STATE(525)] = 12299,
  [SMALL_STATE(526)] = 12312,
  [SMALL_STATE(527)] = 12325,
  [SMALL_STATE(528)] = 12338,
  [SMALL_STATE(529)] = 12351,
  [SMALL_STATE(530)] = 12364,
  [SMALL_STATE(531)] = 12377,
  [SMALL_STATE(532)] = 12390,
  [SMALL_STATE(533)] = 12403,
  [SMALL_STATE(534)] = 12416,
  [SMALL_STATE(535)] = 12429,
  [SMALL_STATE(536)] = 12438,
  [SMALL_STATE(537)] = 12451,
  [SMALL_STATE(538)] = 12464,
  [SMALL_STATE(539)] = 12477,
  [SMALL_STATE(540)] = 12490,
  [SMALL_STATE(541)] = 12503,
  [SMALL_STATE(542)] = 12516,
  [SMALL_STATE(543)] = 12529,
  [SMALL_STATE(544)] = 12538,
  [SMALL_STATE(545)] = 12551,
  [SMALL_STATE(546)] = 12564,
  [SMALL_STATE(547)] = 12577,
  [SMALL_STATE(548)] = 12590,
  [SMALL_STATE(549)] = 12603,
  [SMALL_STATE(550)] = 12616,
  [SMALL_STATE(551)] = 12629,
  [SMALL_STATE(552)] = 12642,
  [SMALL_STATE(553)] = 12655,
  [SMALL_STATE(554)] = 12668,
  [SMALL_STATE(555)] = 12681,
  [SMALL_STATE(556)] = 12692,
  [SMALL_STATE(557)] = 12705,
  [SMALL_STATE(558)] = 12718,
  [SMALL_STATE(559)] = 12728,
  [SMALL_STATE(560)] = 12734,
  [SMALL_STATE(561)] = 12742,
  [SMALL_STATE(562)] = 12752,
  [SMALL_STATE(563)] = 12762,
  [SMALL_STATE(564)] = 12772,
  [SMALL_STATE(565)] = 12782,
  [SMALL_STATE(566)] = 12792,
  [SMALL_STATE(567)] = 12800,
  [SMALL_STATE(568)] = 12810,
  [SMALL_STATE(569)] = 12818,
  [SMALL_STATE(570)] = 12828,
  [SMALL_STATE(571)] = 12838,
  [SMALL_STATE(572)] = 12848,
  [SMALL_STATE(573)] = 12858,
  [SMALL_STATE(574)] = 12868,
  [SMALL_STATE(575)] = 12878,
  [SMALL_STATE(576)] = 12888,
  [SMALL_STATE(577)] = 12898,
  [SMALL_STATE(578)] = 12908,
  [SMALL_STATE(579)] = 12918,
  [SMALL_STATE(580)] = 12928,
  [SMALL_STATE(581)] = 12938,
  [SMALL_STATE(582)] = 12948,
  [SMALL_STATE(583)] = 12958,
  [SMALL_STATE(584)] = 12968,
  [SMALL_STATE(585)] = 12978,
  [SMALL_STATE(586)] = 12988,
  [SMALL_STATE(587)] = 12998,
  [SMALL_STATE(588)] = 13008,
  [SMALL_STATE(589)] = 13018,
  [SMALL_STATE(590)] = 13028,
  [SMALL_STATE(591)] = 13038,
  [SMALL_STATE(592)] = 13048,
  [SMALL_STATE(593)] = 13058,
  [SMALL_STATE(594)] = 13068,
  [SMALL_STATE(595)] = 13078,
  [SMALL_STATE(596)] = 13088,
  [SMALL_STATE(597)] = 13098,
  [SMALL_STATE(598)] = 13108,
  [SMALL_STATE(599)] = 13118,
  [SMALL_STATE(600)] = 13128,
  [SMALL_STATE(601)] = 13134,
  [SMALL_STATE(602)] = 13144,
  [SMALL_STATE(603)] = 13154,
  [SMALL_STATE(604)] = 13164,
  [SMALL_STATE(605)] = 13174,
  [SMALL_STATE(606)] = 13184,
  [SMALL_STATE(607)] = 13194,
  [SMALL_STATE(608)] = 13204,
  [SMALL_STATE(609)] = 13214,
  [SMALL_STATE(610)] = 13224,
  [SMALL_STATE(611)] = 13234,
  [SMALL_STATE(612)] = 13244,
  [SMALL_STATE(613)] = 13254,
  [SMALL_STATE(614)] = 13264,
  [SMALL_STATE(615)] = 13274,
  [SMALL_STATE(616)] = 13284,
  [SMALL_STATE(617)] = 13294,
  [SMALL_STATE(618)] = 13304,
  [SMALL_STATE(619)] = 13314,
  [SMALL_STATE(620)] = 13324,
  [SMALL_STATE(621)] = 13334,
  [SMALL_STATE(622)] = 13344,
  [SMALL_STATE(623)] = 13354,
  [SMALL_STATE(624)] = 13364,
  [SMALL_STATE(625)] = 13374,
  [SMALL_STATE(626)] = 13384,
  [SMALL_STATE(627)] = 13394,
  [SMALL_STATE(628)] = 13404,
  [SMALL_STATE(629)] = 13412,
  [SMALL_STATE(630)] = 13422,
  [SMALL_STATE(631)] = 13432,
  [SMALL_STATE(632)] = 13442,
  [SMALL_STATE(633)] = 13452,
  [SMALL_STATE(634)] = 13462,
  [SMALL_STATE(635)] = 13472,
  [SMALL_STATE(636)] = 13482,
  [SMALL_STATE(637)] = 13492,
  [SMALL_STATE(638)] = 13502,
  [SMALL_STATE(639)] = 13512,
  [SMALL_STATE(640)] = 13522,
  [SMALL_STATE(641)] = 13532,
  [SMALL_STATE(642)] = 13542,
  [SMALL_STATE(643)] = 13552,
  [SMALL_STATE(644)] = 13562,
  [SMALL_STATE(645)] = 13572,
  [SMALL_STATE(646)] = 13582,
  [SMALL_STATE(647)] = 13592,
  [SMALL_STATE(648)] = 13602,
  [SMALL_STATE(649)] = 13612,
  [SMALL_STATE(650)] = 13622,
  [SMALL_STATE(651)] = 13632,
  [SMALL_STATE(652)] = 13642,
  [SMALL_STATE(653)] = 13652,
  [SMALL_STATE(654)] = 13662,
  [SMALL_STATE(655)] = 13672,
  [SMALL_STATE(656)] = 13682,
  [SMALL_STATE(657)] = 13692,
  [SMALL_STATE(658)] = 13702,
  [SMALL_STATE(659)] = 13712,
  [SMALL_STATE(660)] = 13722,
  [SMALL_STATE(661)] = 13732,
  [SMALL_STATE(662)] = 13742,
  [SMALL_STATE(663)] = 13752,
  [SMALL_STATE(664)] = 13762,
  [SMALL_STATE(665)] = 13772,
  [SMALL_STATE(666)] = 13782,
  [SMALL_STATE(667)] = 13792,
  [SMALL_STATE(668)] = 13802,
  [SMALL_STATE(669)] = 13812,
  [SMALL_STATE(670)] = 13822,
  [SMALL_STATE(671)] = 13832,
  [SMALL_STATE(672)] = 13842,
  [SMALL_STATE(673)] = 13852,
  [SMALL_STATE(674)] = 13862,
  [SMALL_STATE(675)] = 13872,
  [SMALL_STATE(676)] = 13882,
  [SMALL_STATE(677)] = 13892,
  [SMALL_STATE(678)] = 13902,
  [SMALL_STATE(679)] = 13912,
  [SMALL_STATE(680)] = 13922,
  [SMALL_STATE(681)] = 13932,
  [SMALL_STATE(682)] = 13942,
  [SMALL_STATE(683)] = 13952,
  [SMALL_STATE(684)] = 13962,
  [SMALL_STATE(685)] = 13972,
  [SMALL_STATE(686)] = 13980,
  [SMALL_STATE(687)] = 13990,
  [SMALL_STATE(688)] = 14000,
  [SMALL_STATE(689)] = 14010,
  [SMALL_STATE(690)] = 14020,
  [SMALL_STATE(691)] = 14030,
  [SMALL_STATE(692)] = 14040,
  [SMALL_STATE(693)] = 14050,
  [SMALL_STATE(694)] = 14060,
  [SMALL_STATE(695)] = 14070,
  [SMALL_STATE(696)] = 14080,
  [SMALL_STATE(697)] = 14090,
  [SMALL_STATE(698)] = 14100,
  [SMALL_STATE(699)] = 14110,
  [SMALL_STATE(700)] = 14120,
  [SMALL_STATE(701)] = 14130,
  [SMALL_STATE(702)] = 14140,
  [SMALL_STATE(703)] = 14150,
  [SMALL_STATE(704)] = 14160,
  [SMALL_STATE(705)] = 14170,
  [SMALL_STATE(706)] = 14180,
  [SMALL_STATE(707)] = 14190,
  [SMALL_STATE(708)] = 14200,
  [SMALL_STATE(709)] = 14207,
  [SMALL_STATE(710)] = 14214,
  [SMALL_STATE(711)] = 14221,
  [SMALL_STATE(712)] = 14228,
  [SMALL_STATE(713)] = 14233,
  [SMALL_STATE(714)] = 14240,
  [SMALL_STATE(715)] = 14247,
  [SMALL_STATE(716)] = 14254,
  [SMALL_STATE(717)] = 14261,
  [SMALL_STATE(718)] = 14268,
  [SMALL_STATE(719)] = 14275,
  [SMALL_STATE(720)] = 14282,
  [SMALL_STATE(721)] = 14287,
  [SMALL_STATE(722)] = 14292,
  [SMALL_STATE(723)] = 14299,
  [SMALL_STATE(724)] = 14306,
  [SMALL_STATE(725)] = 14313,
  [SMALL_STATE(726)] = 14318,
  [SMALL_STATE(727)] = 14323,
  [SMALL_STATE(728)] = 14330,
  [SMALL_STATE(729)] = 14335,
  [SMALL_STATE(730)] = 14342,
  [SMALL_STATE(731)] = 14347,
  [SMALL_STATE(732)] = 14354,
  [SMALL_STATE(733)] = 14361,
  [SMALL_STATE(734)] = 14368,
  [SMALL_STATE(735)] = 14375,
  [SMALL_STATE(736)] = 14382,
  [SMALL_STATE(737)] = 14389,
  [SMALL_STATE(738)] = 14396,
  [SMALL_STATE(739)] = 14403,
  [SMALL_STATE(740)] = 14410,
  [SMALL_STATE(741)] = 14417,
  [SMALL_STATE(742)] = 14424,
  [SMALL_STATE(743)] = 14431,
  [SMALL_STATE(744)] = 14438,
  [SMALL_STATE(745)] = 14445,
  [SMALL_STATE(746)] = 14452,
  [SMALL_STATE(747)] = 14459,
  [SMALL_STATE(748)] = 14466,
  [SMALL_STATE(749)] = 14473,
  [SMALL_STATE(750)] = 14480,
  [SMALL_STATE(751)] = 14487,
  [SMALL_STATE(752)] = 14494,
  [SMALL_STATE(753)] = 14501,
  [SMALL_STATE(754)] = 14508,
  [SMALL_STATE(755)] = 14513,
  [SMALL_STATE(756)] = 14520,
  [SMALL_STATE(757)] = 14525,
  [SMALL_STATE(758)] = 14532,
  [SMALL_STATE(759)] = 14539,
  [SMALL_STATE(760)] = 14546,
  [SMALL_STATE(761)] = 14551,
  [SMALL_STATE(762)] = 14558,
  [SMALL_STATE(763)] = 14565,
  [SMALL_STATE(764)] = 14570,
  [SMALL_STATE(765)] = 14577,
  [SMALL_STATE(766)] = 14584,
  [SMALL_STATE(767)] = 14591,
  [SMALL_STATE(768)] = 14596,
  [SMALL_STATE(769)] = 14601,
  [SMALL_STATE(770)] = 14608,
  [SMALL_STATE(771)] = 14615,
  [SMALL_STATE(772)] = 14622,
  [SMALL_STATE(773)] = 14629,
  [SMALL_STATE(774)] = 14636,
  [SMALL_STATE(775)] = 14643,
  [SMALL_STATE(776)] = 14650,
  [SMALL_STATE(777)] = 14657,
  [SMALL_STATE(778)] = 14664,
  [SMALL_STATE(779)] = 14669,
  [SMALL_STATE(780)] = 14676,
  [SMALL_STATE(781)] = 14683,
  [SMALL_STATE(782)] = 14690,
  [SMALL_STATE(783)] = 14697,
  [SMALL_STATE(784)] = 14702,
  [SMALL_STATE(785)] = 14709,
  [SMALL_STATE(786)] = 14714,
  [SMALL_STATE(787)] = 14721,
  [SMALL_STATE(788)] = 14728,
  [SMALL_STATE(789)] = 14735,
  [SMALL_STATE(790)] = 14742,
  [SMALL_STATE(791)] = 14749,
  [SMALL_STATE(792)] = 14756,
  [SMALL_STATE(793)] = 14763,
  [SMALL_STATE(794)] = 14768,
  [SMALL_STATE(795)] = 14775,
  [SMALL_STATE(796)] = 14782,
  [SMALL_STATE(797)] = 14787,
  [SMALL_STATE(798)] = 14794,
  [SMALL_STATE(799)] = 14799,
  [SMALL_STATE(800)] = 14806,
  [SMALL_STATE(801)] = 14811,
  [SMALL_STATE(802)] = 14818,
  [SMALL_STATE(803)] = 14825,
  [SMALL_STATE(804)] = 14832,
  [SMALL_STATE(805)] = 14839,
  [SMALL_STATE(806)] = 14844,
  [SMALL_STATE(807)] = 14849,
  [SMALL_STATE(808)] = 14856,
  [SMALL_STATE(809)] = 14861,
  [SMALL_STATE(810)] = 14866,
  [SMALL_STATE(811)] = 14871,
  [SMALL_STATE(812)] = 14878,
  [SMALL_STATE(813)] = 14885,
  [SMALL_STATE(814)] = 14890,
  [SMALL_STATE(815)] = 14897,
  [SMALL_STATE(816)] = 14902,
  [SMALL_STATE(817)] = 14907,
  [SMALL_STATE(818)] = 14914,
  [SMALL_STATE(819)] = 14921,
  [SMALL_STATE(820)] = 14926,
  [SMALL_STATE(821)] = 14931,
  [SMALL_STATE(822)] = 14938,
  [SMALL_STATE(823)] = 14943,
  [SMALL_STATE(824)] = 14948,
  [SMALL_STATE(825)] = 14955,
  [SMALL_STATE(826)] = 14962,
  [SMALL_STATE(827)] = 14969,
  [SMALL_STATE(828)] = 14974,
  [SMALL_STATE(829)] = 14981,
  [SMALL_STATE(830)] = 14988,
  [SMALL_STATE(831)] = 14995,
  [SMALL_STATE(832)] = 15002,
  [SMALL_STATE(833)] = 15009,
  [SMALL_STATE(834)] = 15016,
  [SMALL_STATE(835)] = 15023,
  [SMALL_STATE(836)] = 15030,
  [SMALL_STATE(837)] = 15037,
  [SMALL_STATE(838)] = 15044,
  [SMALL_STATE(839)] = 15051,
  [SMALL_STATE(840)] = 15056,
  [SMALL_STATE(841)] = 15063,
  [SMALL_STATE(842)] = 15070,
  [SMALL_STATE(843)] = 15077,
  [SMALL_STATE(844)] = 15084,
  [SMALL_STATE(845)] = 15091,
  [SMALL_STATE(846)] = 15098,
  [SMALL_STATE(847)] = 15103,
  [SMALL_STATE(848)] = 15110,
  [SMALL_STATE(849)] = 15117,
  [SMALL_STATE(850)] = 15122,
  [SMALL_STATE(851)] = 15127,
  [SMALL_STATE(852)] = 15134,
  [SMALL_STATE(853)] = 15141,
  [SMALL_STATE(854)] = 15148,
  [SMALL_STATE(855)] = 15155,
  [SMALL_STATE(856)] = 15162,
  [SMALL_STATE(857)] = 15169,
  [SMALL_STATE(858)] = 15176,
  [SMALL_STATE(859)] = 15181,
  [SMALL_STATE(860)] = 15185,
  [SMALL_STATE(861)] = 15189,
  [SMALL_STATE(862)] = 15193,
  [SMALL_STATE(863)] = 15197,
  [SMALL_STATE(864)] = 15201,
  [SMALL_STATE(865)] = 15205,
  [SMALL_STATE(866)] = 15209,
  [SMALL_STATE(867)] = 15213,
  [SMALL_STATE(868)] = 15217,
  [SMALL_STATE(869)] = 15221,
  [SMALL_STATE(870)] = 15225,
  [SMALL_STATE(871)] = 15229,
  [SMALL_STATE(872)] = 15233,
  [SMALL_STATE(873)] = 15237,
  [SMALL_STATE(874)] = 15241,
  [SMALL_STATE(875)] = 15245,
  [SMALL_STATE(876)] = 15249,
  [SMALL_STATE(877)] = 15253,
  [SMALL_STATE(878)] = 15257,
  [SMALL_STATE(879)] = 15261,
  [SMALL_STATE(880)] = 15265,
  [SMALL_STATE(881)] = 15269,
  [SMALL_STATE(882)] = 15273,
  [SMALL_STATE(883)] = 15277,
  [SMALL_STATE(884)] = 15281,
  [SMALL_STATE(885)] = 15285,
  [SMALL_STATE(886)] = 15289,
  [SMALL_STATE(887)] = 15293,
  [SMALL_STATE(888)] = 15297,
  [SMALL_STATE(889)] = 15301,
  [SMALL_STATE(890)] = 15305,
  [SMALL_STATE(891)] = 15309,
  [SMALL_STATE(892)] = 15313,
  [SMALL_STATE(893)] = 15317,
  [SMALL_STATE(894)] = 15321,
  [SMALL_STATE(895)] = 15325,
  [SMALL_STATE(896)] = 15329,
  [SMALL_STATE(897)] = 15333,
  [SMALL_STATE(898)] = 15337,
  [SMALL_STATE(899)] = 15341,
  [SMALL_STATE(900)] = 15345,
  [SMALL_STATE(901)] = 15349,
  [SMALL_STATE(902)] = 15353,
  [SMALL_STATE(903)] = 15357,
  [SMALL_STATE(904)] = 15361,
  [SMALL_STATE(905)] = 15365,
  [SMALL_STATE(906)] = 15369,
  [SMALL_STATE(907)] = 15373,
  [SMALL_STATE(908)] = 15377,
  [SMALL_STATE(909)] = 15381,
  [SMALL_STATE(910)] = 15385,
  [SMALL_STATE(911)] = 15389,
  [SMALL_STATE(912)] = 15393,
  [SMALL_STATE(913)] = 15397,
  [SMALL_STATE(914)] = 15401,
  [SMALL_STATE(915)] = 15405,
  [SMALL_STATE(916)] = 15409,
  [SMALL_STATE(917)] = 15413,
  [SMALL_STATE(918)] = 15417,
  [SMALL_STATE(919)] = 15421,
  [SMALL_STATE(920)] = 15425,
  [SMALL_STATE(921)] = 15429,
  [SMALL_STATE(922)] = 15433,
  [SMALL_STATE(923)] = 15437,
  [SMALL_STATE(924)] = 15441,
  [SMALL_STATE(925)] = 15445,
  [SMALL_STATE(926)] = 15449,
  [SMALL_STATE(927)] = 15453,
  [SMALL_STATE(928)] = 15457,
  [SMALL_STATE(929)] = 15461,
  [SMALL_STATE(930)] = 15465,
  [SMALL_STATE(931)] = 15469,
  [SMALL_STATE(932)] = 15473,
  [SMALL_STATE(933)] = 15477,
  [SMALL_STATE(934)] = 15481,
  [SMALL_STATE(935)] = 15485,
  [SMALL_STATE(936)] = 15489,
  [SMALL_STATE(937)] = 15493,
  [SMALL_STATE(938)] = 15497,
  [SMALL_STATE(939)] = 15501,
  [SMALL_STATE(940)] = 15505,
  [SMALL_STATE(941)] = 15509,
  [SMALL_STATE(942)] = 15513,
  [SMALL_STATE(943)] = 15517,
  [SMALL_STATE(944)] = 15521,
  [SMALL_STATE(945)] = 15525,
  [SMALL_STATE(946)] = 15529,
  [SMALL_STATE(947)] = 15533,
  [SMALL_STATE(948)] = 15537,
  [SMALL_STATE(949)] = 15541,
  [SMALL_STATE(950)] = 15545,
  [SMALL_STATE(951)] = 15549,
  [SMALL_STATE(952)] = 15553,
  [SMALL_STATE(953)] = 15557,
  [SMALL_STATE(954)] = 15561,
  [SMALL_STATE(955)] = 15565,
  [SMALL_STATE(956)] = 15569,
  [SMALL_STATE(957)] = 15573,
  [SMALL_STATE(958)] = 15577,
  [SMALL_STATE(959)] = 15581,
  [SMALL_STATE(960)] = 15585,
  [SMALL_STATE(961)] = 15589,
  [SMALL_STATE(962)] = 15593,
  [SMALL_STATE(963)] = 15597,
  [SMALL_STATE(964)] = 15601,
  [SMALL_STATE(965)] = 15605,
  [SMALL_STATE(966)] = 15609,
  [SMALL_STATE(967)] = 15613,
  [SMALL_STATE(968)] = 15617,
  [SMALL_STATE(969)] = 15621,
  [SMALL_STATE(970)] = 15625,
  [SMALL_STATE(971)] = 15629,
  [SMALL_STATE(972)] = 15633,
  [SMALL_STATE(973)] = 15637,
  [SMALL_STATE(974)] = 15641,
  [SMALL_STATE(975)] = 15645,
  [SMALL_STATE(976)] = 15649,
  [SMALL_STATE(977)] = 15653,
  [SMALL_STATE(978)] = 15657,
  [SMALL_STATE(979)] = 15661,
  [SMALL_STATE(980)] = 15665,
  [SMALL_STATE(981)] = 15669,
  [SMALL_STATE(982)] = 15673,
  [SMALL_STATE(983)] = 15677,
  [SMALL_STATE(984)] = 15681,
  [SMALL_STATE(985)] = 15685,
  [SMALL_STATE(986)] = 15689,
  [SMALL_STATE(987)] = 15693,
  [SMALL_STATE(988)] = 15697,
  [SMALL_STATE(989)] = 15701,
  [SMALL_STATE(990)] = 15705,
  [SMALL_STATE(991)] = 15709,
  [SMALL_STATE(992)] = 15713,
  [SMALL_STATE(993)] = 15717,
  [SMALL_STATE(994)] = 15721,
  [SMALL_STATE(995)] = 15725,
  [SMALL_STATE(996)] = 15729,
  [SMALL_STATE(997)] = 15733,
  [SMALL_STATE(998)] = 15737,
  [SMALL_STATE(999)] = 15741,
  [SMALL_STATE(1000)] = 15745,
  [SMALL_STATE(1001)] = 15749,
  [SMALL_STATE(1002)] = 15753,
  [SMALL_STATE(1003)] = 15757,
  [SMALL_STATE(1004)] = 15761,
  [SMALL_STATE(1005)] = 15765,
  [SMALL_STATE(1006)] = 15769,
  [SMALL_STATE(1007)] = 15773,
  [SMALL_STATE(1008)] = 15777,
  [SMALL_STATE(1009)] = 15781,
  [SMALL_STATE(1010)] = 15785,
  [SMALL_STATE(1011)] = 15789,
  [SMALL_STATE(1012)] = 15793,
  [SMALL_STATE(1013)] = 15797,
  [SMALL_STATE(1014)] = 15801,
  [SMALL_STATE(1015)] = 15805,
  [SMALL_STATE(1016)] = 15809,
  [SMALL_STATE(1017)] = 15813,
  [SMALL_STATE(1018)] = 15817,
  [SMALL_STATE(1019)] = 15821,
  [SMALL_STATE(1020)] = 15825,
  [SMALL_STATE(1021)] = 15829,
  [SMALL_STATE(1022)] = 15833,
  [SMALL_STATE(1023)] = 15837,
  [SMALL_STATE(1024)] = 15841,
  [SMALL_STATE(1025)] = 15845,
  [SMALL_STATE(1026)] = 15849,
  [SMALL_STATE(1027)] = 15853,
  [SMALL_STATE(1028)] = 15857,
  [SMALL_STATE(1029)] = 15861,
  [SMALL_STATE(1030)] = 15865,
  [SMALL_STATE(1031)] = 15869,
  [SMALL_STATE(1032)] = 15873,
  [SMALL_STATE(1033)] = 15877,
  [SMALL_STATE(1034)] = 15881,
  [SMALL_STATE(1035)] = 15885,
  [SMALL_STATE(1036)] = 15889,
  [SMALL_STATE(1037)] = 15893,
  [SMALL_STATE(1038)] = 15897,
  [SMALL_STATE(1039)] = 15901,
  [SMALL_STATE(1040)] = 15905,
  [SMALL_STATE(1041)] = 15909,
  [SMALL_STATE(1042)] = 15913,
  [SMALL_STATE(1043)] = 15917,
  [SMALL_STATE(1044)] = 15921,
  [SMALL_STATE(1045)] = 15925,
  [SMALL_STATE(1046)] = 15929,
  [SMALL_STATE(1047)] = 15933,
  [SMALL_STATE(1048)] = 15937,
  [SMALL_STATE(1049)] = 15941,
  [SMALL_STATE(1050)] = 15945,
  [SMALL_STATE(1051)] = 15949,
  [SMALL_STATE(1052)] = 15953,
  [SMALL_STATE(1053)] = 15957,
  [SMALL_STATE(1054)] = 15961,
  [SMALL_STATE(1055)] = 15965,
  [SMALL_STATE(1056)] = 15969,
  [SMALL_STATE(1057)] = 15973,
  [SMALL_STATE(1058)] = 15977,
  [SMALL_STATE(1059)] = 15981,
  [SMALL_STATE(1060)] = 15985,
  [SMALL_STATE(1061)] = 15989,
  [SMALL_STATE(1062)] = 15993,
  [SMALL_STATE(1063)] = 15997,
  [SMALL_STATE(1064)] = 16001,
  [SMALL_STATE(1065)] = 16005,
  [SMALL_STATE(1066)] = 16009,
  [SMALL_STATE(1067)] = 16013,
  [SMALL_STATE(1068)] = 16017,
  [SMALL_STATE(1069)] = 16021,
  [SMALL_STATE(1070)] = 16025,
  [SMALL_STATE(1071)] = 16029,
  [SMALL_STATE(1072)] = 16033,
  [SMALL_STATE(1073)] = 16037,
  [SMALL_STATE(1074)] = 16041,
  [SMALL_STATE(1075)] = 16045,
  [SMALL_STATE(1076)] = 16049,
  [SMALL_STATE(1077)] = 16053,
  [SMALL_STATE(1078)] = 16057,
  [SMALL_STATE(1079)] = 16061,
  [SMALL_STATE(1080)] = 16065,
  [SMALL_STATE(1081)] = 16069,
  [SMALL_STATE(1082)] = 16073,
  [SMALL_STATE(1083)] = 16077,
  [SMALL_STATE(1084)] = 16081,
  [SMALL_STATE(1085)] = 16085,
  [SMALL_STATE(1086)] = 16089,
  [SMALL_STATE(1087)] = 16093,
  [SMALL_STATE(1088)] = 16097,
  [SMALL_STATE(1089)] = 16101,
  [SMALL_STATE(1090)] = 16105,
  [SMALL_STATE(1091)] = 16109,
  [SMALL_STATE(1092)] = 16113,
  [SMALL_STATE(1093)] = 16117,
  [SMALL_STATE(1094)] = 16121,
  [SMALL_STATE(1095)] = 16125,
  [SMALL_STATE(1096)] = 16129,
  [SMALL_STATE(1097)] = 16133,
  [SMALL_STATE(1098)] = 16137,
  [SMALL_STATE(1099)] = 16141,
  [SMALL_STATE(1100)] = 16145,
  [SMALL_STATE(1101)] = 16149,
  [SMALL_STATE(1102)] = 16153,
  [SMALL_STATE(1103)] = 16157,
  [SMALL_STATE(1104)] = 16161,
  [SMALL_STATE(1105)] = 16165,
  [SMALL_STATE(1106)] = 16169,
  [SMALL_STATE(1107)] = 16173,
  [SMALL_STATE(1108)] = 16177,
  [SMALL_STATE(1109)] = 16181,
  [SMALL_STATE(1110)] = 16185,
  [SMALL_STATE(1111)] = 16189,
  [SMALL_STATE(1112)] = 16193,
  [SMALL_STATE(1113)] = 16197,
  [SMALL_STATE(1114)] = 16201,
  [SMALL_STATE(1115)] = 16205,
  [SMALL_STATE(1116)] = 16209,
  [SMALL_STATE(1117)] = 16213,
  [SMALL_STATE(1118)] = 16217,
  [SMALL_STATE(1119)] = 16221,
  [SMALL_STATE(1120)] = 16225,
  [SMALL_STATE(1121)] = 16229,
  [SMALL_STATE(1122)] = 16233,
  [SMALL_STATE(1123)] = 16237,
  [SMALL_STATE(1124)] = 16241,
  [SMALL_STATE(1125)] = 16245,
  [SMALL_STATE(1126)] = 16249,
  [SMALL_STATE(1127)] = 16253,
  [SMALL_STATE(1128)] = 16257,
  [SMALL_STATE(1129)] = 16261,
  [SMALL_STATE(1130)] = 16265,
  [SMALL_STATE(1131)] = 16269,
  [SMALL_STATE(1132)] = 16273,
  [SMALL_STATE(1133)] = 16277,
  [SMALL_STATE(1134)] = 16281,
  [SMALL_STATE(1135)] = 16285,
  [SMALL_STATE(1136)] = 16289,
  [SMALL_STATE(1137)] = 16293,
  [SMALL_STATE(1138)] = 16297,
  [SMALL_STATE(1139)] = 16301,
  [SMALL_STATE(1140)] = 16305,
  [SMALL_STATE(1141)] = 16309,
  [SMALL_STATE(1142)] = 16313,
  [SMALL_STATE(1143)] = 16317,
  [SMALL_STATE(1144)] = 16321,
  [SMALL_STATE(1145)] = 16325,
  [SMALL_STATE(1146)] = 16329,
  [SMALL_STATE(1147)] = 16333,
  [SMALL_STATE(1148)] = 16337,
  [SMALL_STATE(1149)] = 16341,
  [SMALL_STATE(1150)] = 16345,
  [SMALL_STATE(1151)] = 16349,
  [SMALL_STATE(1152)] = 16353,
  [SMALL_STATE(1153)] = 16357,
  [SMALL_STATE(1154)] = 16361,
  [SMALL_STATE(1155)] = 16365,
  [SMALL_STATE(1156)] = 16369,
  [SMALL_STATE(1157)] = 16373,
  [SMALL_STATE(1158)] = 16377,
  [SMALL_STATE(1159)] = 16381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(408),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(469),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1157),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(439),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(400),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(554),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(562),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(445),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(394),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1150),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 24),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 24),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(987),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(60),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 23),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(429),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(995),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 21),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1084),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(640),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(433),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(699),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(569),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 20),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(838),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(538),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(458),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1048),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 25),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 25),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 28),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 7),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 7),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 25),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 6),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 7),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 15),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 25),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 12),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 25),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1153),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1147),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(403),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1140),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1016),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(377),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(583),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(224),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(514),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(507),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(375),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(490),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(766),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(493),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(50),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(848),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1107),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(594),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(54),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(1101),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(629),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(757),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(509),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(734),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(225),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 22),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 19),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 27),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_key, 1),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
