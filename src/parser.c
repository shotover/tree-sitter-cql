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
#define STATE_COUNT 1150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 323
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
  sym_drop_function = 214,
  sym_drop_keyspace = 215,
  sym_drop_role = 216,
  sym_drop_table = 217,
  sym_drop_trigger = 218,
  sym_drop_type = 219,
  sym_drop_user = 220,
  sym_user = 221,
  sym_create_aggregate = 222,
  sym_aggregate = 223,
  sym_init_cond_definition = 224,
  sym_init_cond_list = 225,
  sym_init_cond_list_nested = 226,
  sym_init_cond_hash = 227,
  sym_init_cond_hash_item = 228,
  sym_hash_key = 229,
  sym_create_function = 230,
  sym_param = 231,
  sym_data_type = 232,
  sym_data_type_name = 233,
  sym_data_type_definition = 234,
  sym_return_mode = 235,
  sym_language = 236,
  sym_create_keyspace = 237,
  sym_replication_list_item = 238,
  sym_durable_writes = 239,
  sym_create_role = 240,
  sym_role_with = 241,
  sym_role_with_options = 242,
  sym_option_hash = 243,
  sym_option_hash_item = 244,
  sym_create_table = 245,
  sym_column_definition_list = 246,
  sym_column_definition = 247,
  sym_primary_key_column = 248,
  sym_primary_key_element = 249,
  sym_primary_key_definition = 250,
  sym_single_primary_key = 251,
  sym_compound_key = 252,
  sym_partition_key = 253,
  sym_clustering_key_list = 254,
  sym_clustering_key = 255,
  sym_composite_key = 256,
  sym_partition_key_list = 257,
  sym_with_element = 258,
  sym_table_options = 259,
  sym_table_option_item = 260,
  sym_table_option_name = 261,
  sym_table_option_value = 262,
  sym_clustering_order = 263,
  sym_order_direction = 264,
  sym_create_trigger = 265,
  sym_trigger = 266,
  sym_trigger_class = 267,
  sym_create_type = 268,
  sym_type_member_column_list = 269,
  sym_create_user = 270,
  sym_alter_keyspace = 271,
  sym_replication_list = 272,
  sym_alter_role = 273,
  sym_alter_table = 274,
  sym_alter_table_operation = 275,
  sym_alter_table_add = 276,
  sym_alter_table_column_definition = 277,
  sym_alter_table_drop_columns = 278,
  sym_alter_table_drop_column_list = 279,
  sym_alter_table_drop_compact_storage = 280,
  sym_alter_table_rename = 281,
  sym_alter_table_with = 282,
  sym_alter_type = 283,
  sym_type = 284,
  sym_alter_type_operation = 285,
  sym_alter_type_alter_type = 286,
  sym_alter_type_add = 287,
  sym_alter_type_rename = 288,
  sym_alter_type_rename_list = 289,
  sym_alter_type_rename_item = 290,
  sym_alter_user = 291,
  sym_user_password = 292,
  sym_user_super_user = 293,
  sym_apply_batch = 294,
  aux_sym_source_file_repeat1 = 295,
  aux_sym_select_elements_repeat1 = 296,
  aux_sym_function_args_repeat1 = 297,
  aux_sym__hexadecimal_literal_repeat1 = 298,
  aux_sym__hexadecimal_literal_repeat2 = 299,
  aux_sym_relation_elements_repeat1 = 300,
  aux_sym_relation_element_repeat1 = 301,
  aux_sym_relation_element_repeat2 = 302,
  aux_sym_assignment_tuple_repeat1 = 303,
  aux_sym_delete_column_list_repeat1 = 304,
  aux_sym_if_condition_list_repeat1 = 305,
  aux_sym_column_list_repeat1 = 306,
  aux_sym_expression_list_repeat1 = 307,
  aux_sym_assignment_map_repeat1 = 308,
  aux_sym_update_repeat1 = 309,
  aux_sym_init_cond_list_nested_repeat1 = 310,
  aux_sym_init_cond_hash_repeat1 = 311,
  aux_sym_create_function_repeat1 = 312,
  aux_sym_data_type_definition_repeat1 = 313,
  aux_sym_role_with_repeat1 = 314,
  aux_sym_option_hash_repeat1 = 315,
  aux_sym_column_definition_list_repeat1 = 316,
  aux_sym_clustering_key_list_repeat1 = 317,
  aux_sym_partition_key_list_repeat1 = 318,
  aux_sym_table_options_repeat1 = 319,
  aux_sym_type_member_column_list_repeat1 = 320,
  aux_sym_replication_list_repeat1 = 321,
  aux_sym_alter_type_rename_list_repeat1 = 322,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 323,
  anon_alias_sym_ALL_ROLES = 324,
  anon_alias_sym_CONTAINS = 325,
  anon_alias_sym_DROP_INDEX = 326,
  anon_alias_sym_IF = 327,
  anon_alias_sym_ORDER_BY = 328,
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
  [52] = 52,
  [53] = 53,
  [54] = 43,
  [55] = 55,
  [56] = 17,
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
  [83] = 62,
  [84] = 84,
  [85] = 85,
  [86] = 63,
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
  [113] = 67,
  [114] = 114,
  [115] = 90,
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
  [140] = 74,
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
  [227] = 226,
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
  [352] = 349,
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
  [372] = 367,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 366,
  [377] = 373,
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
  [394] = 63,
  [395] = 395,
  [396] = 62,
  [397] = 397,
  [398] = 393,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 404,
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
  [417] = 415,
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
  [441] = 434,
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
  [456] = 219,
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
  [467] = 446,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 231,
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
  [561] = 551,
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
  [665] = 190,
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
  [709] = 708,
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
  [763] = 708,
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
  [1131] = 997,
  [1132] = 984,
  [1133] = 1133,
  [1134] = 1117,
  [1135] = 1135,
  [1136] = 1136,
  [1137] = 1137,
  [1138] = 889,
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
  [1149] = 896,
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
          lookahead == 'a') ADVANCE(571);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(556);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(577);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(532);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(650);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(652);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
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
          lookahead == 'n') ADVANCE(655);
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
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(632);
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
          lookahead == 'j') ADVANCE(632);
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
          lookahead == 'c') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(546);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
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
          lookahead == 'a') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
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
          lookahead == 'a') ADVANCE(638);
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
          lookahead == 'a') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
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
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(553);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 546:
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
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
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
          lookahead == 'i') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
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
          lookahead == 'i') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
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
          lookahead == 'l') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
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
          lookahead == 'l') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
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
          lookahead == 'l') ADVANCE(634);
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
          lookahead == 'z') ADVANCE(529);
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
          lookahead == 'm') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
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
          lookahead == 'u') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(510);
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
          lookahead == 'n') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
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
          lookahead == 'o') ADVANCE(569);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
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
          lookahead == 'p') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
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
          lookahead == 'p') ADVANCE(511);
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
          lookahead == 'r') ADVANCE(518);
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
          lookahead == 'r') ADVANCE(638);
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
          lookahead == 'r') ADVANCE(654);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
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
          lookahead == 's') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(650);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
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
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(565);
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
          lookahead == 'y') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(560);
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
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 450},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 450},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 450},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 450},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 449},
  [52] = {.lex_state = 450},
  [53] = {.lex_state = 450},
  [54] = {.lex_state = 449},
  [55] = {.lex_state = 449},
  [56] = {.lex_state = 449},
  [57] = {.lex_state = 450},
  [58] = {.lex_state = 450},
  [59] = {.lex_state = 450},
  [60] = {.lex_state = 451},
  [61] = {.lex_state = 450},
  [62] = {.lex_state = 452},
  [63] = {.lex_state = 452},
  [64] = {.lex_state = 450},
  [65] = {.lex_state = 450},
  [66] = {.lex_state = 450},
  [67] = {.lex_state = 450},
  [68] = {.lex_state = 450},
  [69] = {.lex_state = 450},
  [70] = {.lex_state = 450},
  [71] = {.lex_state = 450},
  [72] = {.lex_state = 450},
  [73] = {.lex_state = 450},
  [74] = {.lex_state = 450},
  [75] = {.lex_state = 450},
  [76] = {.lex_state = 450},
  [77] = {.lex_state = 450},
  [78] = {.lex_state = 450},
  [79] = {.lex_state = 450},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 450},
  [82] = {.lex_state = 450},
  [83] = {.lex_state = 453},
  [84] = {.lex_state = 450},
  [85] = {.lex_state = 450},
  [86] = {.lex_state = 453},
  [87] = {.lex_state = 450},
  [88] = {.lex_state = 449},
  [89] = {.lex_state = 450},
  [90] = {.lex_state = 450},
  [91] = {.lex_state = 450},
  [92] = {.lex_state = 450},
  [93] = {.lex_state = 449},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 450},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 449},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 450},
  [100] = {.lex_state = 450},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 449},
  [103] = {.lex_state = 449},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 449},
  [108] = {.lex_state = 449},
  [109] = {.lex_state = 449},
  [110] = {.lex_state = 450},
  [111] = {.lex_state = 450},
  [112] = {.lex_state = 449},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 450},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 450},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 450},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 450},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 450},
  [124] = {.lex_state = 450},
  [125] = {.lex_state = 450},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 450},
  [130] = {.lex_state = 450},
  [131] = {.lex_state = 450},
  [132] = {.lex_state = 450},
  [133] = {.lex_state = 450},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 450},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 450},
  [139] = {.lex_state = 450},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 450},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 450},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 450},
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
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 450},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 450},
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
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 450},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 450},
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
  [216] = {.lex_state = 449},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
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
  [250] = {.lex_state = 449},
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
  [349] = {.lex_state = 449},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 449},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 449},
  [363] = {.lex_state = 449},
  [364] = {.lex_state = 449},
  [365] = {.lex_state = 449},
  [366] = {.lex_state = 449},
  [367] = {.lex_state = 449},
  [368] = {.lex_state = 449},
  [369] = {.lex_state = 449},
  [370] = {.lex_state = 449},
  [371] = {.lex_state = 449},
  [372] = {.lex_state = 449},
  [373] = {.lex_state = 449},
  [374] = {.lex_state = 449},
  [375] = {.lex_state = 449},
  [376] = {.lex_state = 449},
  [377] = {.lex_state = 449},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 450},
  [382] = {.lex_state = 450},
  [383] = {.lex_state = 450},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 449},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 449},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 450},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 450},
  [407] = {.lex_state = 450},
  [408] = {.lex_state = 450},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 449},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 449},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 450},
  [431] = {.lex_state = 1},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 450},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 36},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 1},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 450},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 1},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 450},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 1},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 450},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 1},
  [510] = {.lex_state = 1},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 449},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 450},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 450},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 450},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 450},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 450},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 450},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 450},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 6},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 450},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 450},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 450},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 1},
  [607] = {.lex_state = 1},
  [608] = {.lex_state = 450},
  [609] = {.lex_state = 450},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 450},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 450},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 1},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 1},
  [623] = {.lex_state = 1},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 450},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 1},
  [630] = {.lex_state = 1},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 1},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 1},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 450},
  [639] = {.lex_state = 1},
  [640] = {.lex_state = 1},
  [641] = {.lex_state = 1},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 1},
  [647] = {.lex_state = 1},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 1},
  [653] = {.lex_state = 1},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 1},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 1},
  [659] = {.lex_state = 1},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 1},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 1},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 450},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 1},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 1},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 450},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 1},
  [682] = {.lex_state = 1},
  [683] = {.lex_state = 450},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 1},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 450},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 1},
  [693] = {.lex_state = 6},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 1},
  [702] = {.lex_state = 450},
  [703] = {.lex_state = 450},
  [704] = {.lex_state = 1},
  [705] = {.lex_state = 450},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 6},
  [709] = {.lex_state = 6},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 1},
  [712] = {.lex_state = 450},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 1},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 1},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 1},
  [726] = {.lex_state = 1},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 1},
  [729] = {.lex_state = 449},
  [730] = {.lex_state = 1},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 1},
  [733] = {.lex_state = 1},
  [734] = {.lex_state = 1},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 1},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 1},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 1},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 1},
  [746] = {.lex_state = 1},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 1},
  [749] = {.lex_state = 1},
  [750] = {.lex_state = 450},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 450},
  [753] = {.lex_state = 450},
  [754] = {.lex_state = 450},
  [755] = {.lex_state = 450},
  [756] = {.lex_state = 1},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 1},
  [759] = {.lex_state = 1},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 1},
  [762] = {.lex_state = 6},
  [763] = {.lex_state = 6},
  [764] = {.lex_state = 450},
  [765] = {.lex_state = 450},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 1},
  [770] = {.lex_state = 1},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 1},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 450},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 450},
  [778] = {.lex_state = 1},
  [779] = {.lex_state = 1},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 1},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 1},
  [788] = {.lex_state = 450},
  [789] = {.lex_state = 1},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 1},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 1},
  [794] = {.lex_state = 6},
  [795] = {.lex_state = 450},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 1},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 1},
  [800] = {.lex_state = 450},
  [801] = {.lex_state = 1},
  [802] = {.lex_state = 450},
  [803] = {.lex_state = 1},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 450},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 1},
  [809] = {.lex_state = 1},
  [810] = {.lex_state = 1},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 1},
  [813] = {.lex_state = 450},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 1},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 1},
  [818] = {.lex_state = 1},
  [819] = {.lex_state = 1},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 450},
  [823] = {.lex_state = 450},
  [824] = {.lex_state = 1},
  [825] = {.lex_state = 450},
  [826] = {.lex_state = 1},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 1},
  [829] = {.lex_state = 1},
  [830] = {.lex_state = 1},
  [831] = {.lex_state = 450},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 1},
  [835] = {.lex_state = 1},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 1},
  [838] = {.lex_state = 1},
  [839] = {.lex_state = 1},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 1},
  [846] = {.lex_state = 1},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 1},
  [849] = {.lex_state = 1},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 450},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 449},
  [863] = {.lex_state = 450},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 450},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 1},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 1},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 6},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 449},
  [903] = {.lex_state = 450},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 450},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 450},
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
  [923] = {.lex_state = 450},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 450},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 450},
  [943] = {.lex_state = 450},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 450},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 449},
  [963] = {.lex_state = 450},
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
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 1},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 450},
  [983] = {.lex_state = 450},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 450},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 449},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 450},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 450},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 1},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 5},
  [1013] = {.lex_state = 1},
  [1014] = {.lex_state = 450},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 450},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 450},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 449},
  [1022] = {.lex_state = 449},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 450},
  [1032] = {.lex_state = 450},
  [1033] = {.lex_state = 450},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 450},
  [1040] = {.lex_state = 450},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 450},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 450},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 450},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 450},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 450},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 450},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 452},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 450},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 450},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 450},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 450},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 450},
  [1099] = {.lex_state = 449},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 5},
  [1109] = {.lex_state = 1},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 450},
  [1112] = {.lex_state = 486},
  [1113] = {.lex_state = 450},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 1},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 450},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 450},
  [1131] = {.lex_state = 450},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 1},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 1},
  [1143] = {.lex_state = 450},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 449},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 450},
  [1149] = {.lex_state = 1},
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
    [sym_source_file] = STATE(1147),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(241),
    [sym_delete_statement] = STATE(241),
    [sym_begin_batch] = STATE(644),
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
    [sym_drop_function] = STATE(241),
    [sym_drop_keyspace] = STATE(241),
    [sym_drop_role] = STATE(241),
    [sym_drop_table] = STATE(241),
    [sym_drop_trigger] = STATE(241),
    [sym_drop_type] = STATE(241),
    [sym_drop_user] = STATE(241),
    [sym_create_aggregate] = STATE(241),
    [sym_create_function] = STATE(241),
    [sym_create_keyspace] = STATE(241),
    [sym_create_role] = STATE(241),
    [sym_create_table] = STATE(241),
    [sym_create_trigger] = STATE(241),
    [sym_create_type] = STATE(241),
    [sym_create_user] = STATE(241),
    [sym_alter_keyspace] = STATE(241),
    [sym_alter_role] = STATE(241),
    [sym_alter_table] = STATE(241),
    [sym_alter_type] = STATE(241),
    [sym_alter_user] = STATE(241),
    [sym_apply_batch] = STATE(241),
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
    [aux_sym_priviledge_token3] = ACTIONS(25),
    [aux_sym_revoke_token1] = ACTIONS(27),
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
      aux_sym_priviledge_token3,
    ACTIONS(68), 1,
      aux_sym_revoke_token1,
    ACTIONS(71), 1,
      aux_sym_list_roles_token1,
    ACTIONS(74), 1,
      aux_sym_apply_batch_token1,
    STATE(644), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(241), 33,
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
  [88] = 18,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(644), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(241), 33,
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
  [176] = 3,
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
  [217] = 4,
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
  [259] = 1,
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
  [295] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(92), 29,
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
  [336] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(96), 30,
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
  [375] = 3,
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
  [414] = 2,
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
  [449] = 2,
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
  [484] = 2,
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
  [519] = 1,
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
  [551] = 1,
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
  [583] = 1,
    ACTIONS(92), 29,
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
  [615] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(182), 1,
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
  [652] = 2,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(122), 25,
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
  [685] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(242), 1,
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
  [722] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(987), 1,
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
  [759] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(979), 1,
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
  [796] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(955), 1,
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
  [833] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1122), 1,
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
  [870] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1065), 1,
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
  [907] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1063), 1,
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
  [944] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(922), 1,
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
  [981] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1039), 1,
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
  [1018] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1082), 1,
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
  [1055] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(951), 1,
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
  [1092] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1035), 1,
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
  [1129] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(176), 1,
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
  [1166] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(882), 1,
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
  [1203] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1009), 1,
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
  [1240] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(861), 1,
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
  [1277] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(124), 27,
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
  [1310] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1080), 1,
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
  [1347] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(162), 1,
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
  [1384] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(128), 27,
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
  [1417] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(901), 1,
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
  [1454] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1014), 1,
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
  [1491] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(917), 1,
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
  [1528] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(546), 1,
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
  [1565] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(590), 1,
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
  [1602] = 2,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(134), 25,
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
  [1635] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(936), 1,
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
  [1672] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(1047), 1,
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
  [1709] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(53), 1,
      sym_data_type_name,
    STATE(757), 1,
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
  [1746] = 1,
    ACTIONS(124), 27,
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
  [1776] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(827), 1,
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
  [1810] = 1,
    ACTIONS(128), 27,
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
  [1840] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(694), 1,
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
  [1874] = 16,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(555), 1,
      sym_expression,
    STATE(988), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(781), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1931] = 1,
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
  [1957] = 3,
    ACTIONS(162), 1,
      anon_sym_LT,
    STATE(78), 1,
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
  [1987] = 1,
    ACTIONS(132), 23,
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
  [2013] = 15,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(783), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(781), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [2067] = 1,
    ACTIONS(120), 23,
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
  [2093] = 1,
    ACTIONS(164), 22,
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
  [2118] = 7,
    ACTIONS(168), 1,
      aux_sym_select_statement_token4,
    ACTIONS(170), 1,
      aux_sym_select_statement_token5,
    ACTIONS(172), 1,
      aux_sym_where_spec_token1,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    STATE(91), 1,
      sym_where_spec,
    STATE(195), 1,
      sym_order_spec,
    ACTIONS(166), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [2155] = 2,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(176), 21,
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
  [2182] = 8,
    ACTIONS(184), 1,
      sym_object_name,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    STATE(133), 1,
      sym_table_option_item,
    STATE(203), 1,
      sym_table_options,
    STATE(254), 1,
      sym_clustering_order,
    STATE(907), 1,
      sym_table_option_name,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(182), 14,
      aux_sym_select_statement_token1,
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
  [2221] = 7,
    ACTIONS(172), 1,
      aux_sym_where_spec_token1,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(190), 1,
      aux_sym_select_statement_token4,
    ACTIONS(192), 1,
      aux_sym_select_statement_token5,
    STATE(92), 1,
      sym_where_spec,
    STATE(206), 1,
      sym_order_spec,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [2258] = 3,
    ACTIONS(196), 1,
      sym__hex_digit,
    STATE(62), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(194), 20,
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
  [2287] = 3,
    ACTIONS(201), 1,
      sym__hex_digit,
    STATE(62), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(199), 20,
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
  [2316] = 7,
    ACTIONS(172), 1,
      aux_sym_where_spec_token1,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(111), 1,
      sym_where_spec,
    STATE(171), 1,
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
  [2353] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(209), 19,
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
  [2384] = 1,
    ACTIONS(211), 21,
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
  [2408] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(213), 19,
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
  [2436] = 1,
    ACTIONS(130), 21,
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
  [2460] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(164), 20,
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
  [2486] = 1,
    ACTIONS(218), 21,
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
  [2510] = 1,
    ACTIONS(220), 21,
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
  [2534] = 1,
    ACTIONS(222), 21,
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
  [2558] = 1,
    ACTIONS(224), 21,
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
  [2582] = 3,
    ACTIONS(228), 1,
      aux_sym_relation_elements_token1,
    STATE(90), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(226), 19,
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
  [2610] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(230), 19,
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
  [2638] = 1,
    ACTIONS(232), 21,
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
  [2662] = 1,
    ACTIONS(234), 21,
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
  [2686] = 1,
    ACTIONS(236), 21,
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
  [2710] = 1,
    ACTIONS(238), 21,
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
  [2734] = 15,
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
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(738), 1,
      sym_constant,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(482), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2786] = 1,
    ACTIONS(213), 21,
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
  [2810] = 1,
    ACTIONS(248), 21,
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
  [2834] = 3,
    ACTIONS(250), 1,
      sym__hex_digit,
    STATE(83), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(194), 19,
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
  [2862] = 1,
    ACTIONS(253), 21,
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
  [2886] = 1,
    ACTIONS(255), 21,
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
  [2910] = 3,
    ACTIONS(257), 1,
      sym__hex_digit,
    STATE(83), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(199), 19,
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
  [2938] = 1,
    ACTIONS(259), 21,
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
  [2962] = 3,
    STATE(160), 1,
      sym_order_direction,
    ACTIONS(263), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(261), 18,
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
  [2990] = 1,
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
  [3014] = 3,
    ACTIONS(228), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(267), 19,
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
  [3042] = 5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(171), 1,
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
  [3073] = 5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(271), 1,
      aux_sym_select_statement_token4,
    ACTIONS(273), 1,
      aux_sym_select_statement_token5,
    STATE(163), 1,
      sym_order_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3104] = 2,
    ACTIONS(277), 1,
      aux_sym_relation_element_token1,
    ACTIONS(275), 19,
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
  [3129] = 15,
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
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(1028), 1,
      sym_function_args,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(600), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3180] = 1,
    ACTIONS(285), 20,
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
  [3203] = 5,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_if_exist_token1,
    STATE(168), 1,
      sym_if_not_exist,
    STATE(340), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3234] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
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
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3281] = 5,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_if_exist_token1,
    STATE(200), 1,
      sym_if_not_exist,
    STATE(288), 1,
      sym_using_ttl_timestamp,
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
  [3312] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(299), 18,
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
  [3339] = 1,
    ACTIONS(126), 20,
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
  [3362] = 5,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_if_exist_token1,
    STATE(187), 1,
      sym_if_not_exist,
    STATE(315), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3393] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(278), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3440] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(345), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3487] = 16,
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
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(648), 1,
      sym_constant,
    STATE(649), 1,
      sym_init_cond_list,
    STATE(657), 1,
      sym_init_cond_hash_item,
    STATE(1078), 1,
      sym_hash_key,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3540] = 5,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_if_exist_token1,
    STATE(159), 1,
      sym_if_not_exist,
    STATE(247), 1,
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
  [3571] = 5,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_if_exist_token1,
    STATE(189), 1,
      sym_if_not_exist,
    STATE(245), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3602] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(328), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3649] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(258), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3696] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(316), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3743] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(311), 19,
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
  [3768] = 5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(190), 1,
      aux_sym_select_statement_token4,
    ACTIONS(192), 1,
      aux_sym_select_statement_token5,
    STATE(206), 1,
      sym_order_spec,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [3799] = 13,
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
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(720), 1,
      sym_init_cond_definition,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(183), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3846] = 3,
    ACTIONS(313), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(213), 17,
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
  [3872] = 1,
    ACTIONS(316), 19,
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
  [3894] = 3,
    ACTIONS(318), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(267), 17,
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
  [3920] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(192), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [3948] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(251), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3974] = 1,
    ACTIONS(324), 19,
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
  [3996] = 2,
    ACTIONS(328), 1,
      aux_sym_priviledge_token2,
    ACTIONS(326), 18,
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
  [4020] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(266), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4046] = 1,
    ACTIONS(311), 19,
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
  [4068] = 3,
    STATE(233), 1,
      sym_user_super_user,
    ACTIONS(334), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4094] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(338), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4122] = 1,
    ACTIONS(340), 19,
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
  [4144] = 1,
    ACTIONS(342), 19,
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
  [4166] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(333), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4192] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(293), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4218] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(348), 17,
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
  [4244] = 1,
    ACTIONS(353), 19,
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
  [4266] = 1,
    ACTIONS(355), 19,
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
  [4288] = 1,
    ACTIONS(357), 19,
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
  [4310] = 1,
    ACTIONS(359), 19,
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
  [4332] = 3,
    ACTIONS(363), 1,
      aux_sym_relation_elements_token1,
    STATE(149), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4358] = 3,
    STATE(343), 1,
      sym_user_super_user,
    ACTIONS(334), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4384] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(248), 2,
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
  [4410] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(273), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4438] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(268), 2,
      sym_if_exist,
      sym_if_spec,
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
  [4464] = 1,
    ACTIONS(371), 19,
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
  [4486] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(375), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4514] = 3,
    ACTIONS(318), 1,
      aux_sym_relation_elements_token1,
    STATE(115), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(226), 17,
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
  [4540] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(243), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4566] = 3,
    STATE(332), 1,
      sym_user_super_user,
    ACTIONS(334), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4592] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(383), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(381), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [4620] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(300), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4646] = 3,
    ACTIONS(389), 1,
      aux_sym_relation_elements_token1,
    STATE(145), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(387), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [4672] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(298), 2,
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
  [4698] = 3,
    ACTIONS(322), 1,
      aux_sym_if_exist_token1,
    STATE(239), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4724] = 1,
    ACTIONS(396), 19,
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
  [4746] = 3,
    ACTIONS(363), 1,
      aux_sym_relation_elements_token1,
    STATE(145), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(398), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [4772] = 2,
    ACTIONS(402), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(400), 17,
      ts_builtin_sym_end,
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
  [4795] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(255), 1,
      sym_with_element,
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
  [4820] = 1,
    ACTIONS(408), 18,
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
  [4841] = 1,
    ACTIONS(410), 18,
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
  [4862] = 3,
    ACTIONS(414), 1,
      aux_sym_relation_elements_token1,
    STATE(184), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4887] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4912] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(337), 1,
      sym_role_with,
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
  [4937] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4962] = 3,
    ACTIONS(430), 1,
      aux_sym_relation_elements_token1,
    STATE(158), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4987] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(288), 1,
      sym_using_ttl_timestamp,
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
  [5012] = 1,
    ACTIONS(433), 18,
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
  [5033] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5058] = 1,
    ACTIONS(440), 18,
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
  [5079] = 3,
    ACTIONS(375), 1,
      aux_sym_select_statement_token5,
    ACTIONS(442), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5104] = 13,
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
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(283), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(1129), 1,
      sym_function_args,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(600), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5149] = 1,
    ACTIONS(444), 18,
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
  [5170] = 1,
    ACTIONS(446), 18,
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
  [5191] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(448), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [5216] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(247), 1,
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
  [5241] = 1,
    ACTIONS(326), 18,
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
  [5262] = 1,
    ACTIONS(450), 18,
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
  [5283] = 3,
    ACTIONS(190), 1,
      aux_sym_select_statement_token4,
    ACTIONS(192), 1,
      aux_sym_select_statement_token5,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [5308] = 1,
    ACTIONS(452), 18,
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
  [5329] = 3,
    ACTIONS(456), 1,
      aux_sym_relation_elements_token1,
    STATE(204), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5354] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(296), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5379] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(292), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5404] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5429] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(464), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [5454] = 1,
    ACTIONS(466), 18,
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
  [5475] = 3,
    ACTIONS(406), 1,
      aux_sym_create_keyspace_token1,
    STATE(323), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5500] = 1,
    ACTIONS(470), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [5521] = 1,
    ACTIONS(472), 18,
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
  [5542] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_type_member_column_list_repeat1,
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
  [5567] = 1,
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
  [5588] = 3,
    ACTIONS(414), 1,
      aux_sym_relation_elements_token1,
    STATE(158), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5613] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(320), 1,
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
  [5638] = 3,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_column_list_repeat1,
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
  [5663] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(264), 1,
      sym_using_ttl_timestamp,
    ACTIONS(486), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [5688] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(257), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5713] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(315), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5738] = 3,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5763] = 1,
    ACTIONS(495), 18,
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
  [5784] = 2,
    ACTIONS(497), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(400), 17,
      ts_builtin_sym_end,
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
  [5807] = 1,
    ACTIONS(499), 18,
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
  [5828] = 1,
    ACTIONS(490), 18,
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
  [5849] = 3,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
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
  [5874] = 3,
    ACTIONS(503), 1,
      aux_sym_list_roles_token2,
    ACTIONS(505), 1,
      aux_sym_list_roles_token3,
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
  [5899] = 1,
    ACTIONS(507), 18,
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
  [5920] = 1,
    ACTIONS(509), 18,
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
  [5941] = 3,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5966] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(245), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5991] = 3,
    ACTIONS(515), 1,
      aux_sym_create_index_token3,
    ACTIONS(517), 1,
      aux_sym_list_roles_token2,
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
  [6016] = 3,
    ACTIONS(456), 1,
      aux_sym_relation_elements_token1,
    STATE(173), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [6041] = 3,
    ACTIONS(523), 1,
      aux_sym_clustering_order_token1,
    STATE(324), 1,
      sym_clustering_order,
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
  [6066] = 3,
    ACTIONS(527), 1,
      aux_sym_relation_elements_token1,
    STATE(204), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [6091] = 1,
    ACTIONS(387), 18,
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
  [6112] = 3,
    ACTIONS(271), 1,
      aux_sym_select_statement_token4,
    ACTIONS(273), 1,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6137] = 1,
    ACTIONS(525), 17,
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
  [6157] = 1,
    ACTIONS(530), 17,
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
  [6177] = 1,
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
  [6197] = 12,
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
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(722), 2,
      sym_constant,
      sym_init_cond_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6239] = 1,
    ACTIONS(534), 17,
      ts_builtin_sym_end,
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
  [6259] = 2,
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
  [6281] = 1,
    ACTIONS(540), 17,
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
  [6301] = 2,
    ACTIONS(544), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6323] = 1,
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
  [6343] = 13,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(531), 1,
      sym_constant,
    STATE(842), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6387] = 2,
    ACTIONS(550), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6409] = 2,
    ACTIONS(554), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6431] = 1,
    ACTIONS(556), 17,
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
  [6451] = 2,
    ACTIONS(560), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6473] = 2,
    ACTIONS(126), 1,
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
  [6495] = 1,
    ACTIONS(435), 17,
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
  [6515] = 12,
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
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(792), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6557] = 1,
    ACTIONS(564), 17,
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
  [6577] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6599] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_0X,
    ACTIONS(566), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(85), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6641] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(242), 1,
      sym__hex_4digit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      sym_object_name,
    ACTIONS(568), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(240), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(85), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6683] = 1,
    ACTIONS(428), 17,
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
  [6703] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6722] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6741] = 1,
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
  [6760] = 1,
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
  [6779] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6798] = 1,
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
  [6817] = 1,
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
  [6836] = 1,
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
  [6855] = 1,
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
  [6874] = 1,
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
  [6893] = 1,
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
  [6912] = 1,
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
  [6931] = 2,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(588), 15,
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
  [6952] = 1,
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
  [6971] = 1,
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
  [6990] = 1,
    ACTIONS(381), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [7009] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7028] = 1,
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
  [7047] = 1,
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
  [7066] = 1,
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
  [7085] = 1,
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
  [7104] = 12,
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
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(543), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7145] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7164] = 1,
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
  [7183] = 1,
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
  [7202] = 1,
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
  [7221] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7240] = 1,
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
  [7259] = 1,
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
  [7278] = 1,
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
  [7297] = 1,
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
  [7316] = 1,
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
  [7335] = 1,
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
  [7354] = 1,
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
  [7373] = 1,
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
  [7392] = 1,
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
  [7411] = 1,
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
  [7430] = 1,
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
  [7449] = 1,
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
  [7468] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7487] = 1,
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
  [7506] = 1,
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
  [7525] = 1,
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
  [7544] = 1,
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
  [7563] = 1,
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
  [7582] = 1,
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
  [7601] = 1,
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
  [7620] = 1,
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
  [7639] = 1,
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
  [7658] = 1,
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
  [7677] = 1,
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
  [7696] = 1,
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
  [7715] = 1,
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
  [7734] = 1,
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
  [7753] = 1,
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
  [7772] = 1,
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
  [7791] = 1,
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
  [7810] = 1,
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
  [7829] = 1,
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
  [7848] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7867] = 1,
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
  [7886] = 1,
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
  [7905] = 1,
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
  [7924] = 1,
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
  [7943] = 1,
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
  [7962] = 1,
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
  [7981] = 1,
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
  [8000] = 1,
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
  [8019] = 1,
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
  [8038] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8057] = 1,
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
  [8076] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8095] = 1,
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
  [8114] = 1,
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
  [8133] = 1,
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
  [8152] = 1,
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
  [8171] = 1,
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
  [8190] = 1,
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
  [8209] = 1,
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
  [8228] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8247] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8266] = 1,
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
  [8285] = 1,
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
  [8304] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8323] = 1,
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
  [8342] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8361] = 1,
    ACTIONS(486), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [8380] = 1,
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
  [8399] = 1,
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
  [8418] = 1,
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
  [8437] = 1,
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
  [8456] = 1,
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
  [8475] = 1,
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
  [8494] = 1,
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
  [8513] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8532] = 1,
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
  [8551] = 1,
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
  [8570] = 1,
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
  [8589] = 1,
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
  [8608] = 1,
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
  [8627] = 1,
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
  [8646] = 1,
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
  [8665] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8684] = 1,
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
  [8703] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8722] = 1,
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
  [8741] = 1,
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
  [8760] = 1,
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
  [8779] = 1,
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
  [8798] = 1,
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
  [8817] = 1,
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
  [8836] = 1,
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
  [8855] = 1,
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
  [8874] = 1,
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
  [8893] = 1,
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
  [8912] = 1,
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
  [8931] = 1,
    ACTIONS(758), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [8950] = 1,
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
  [8969] = 1,
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
  [8988] = 1,
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
  [9007] = 12,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    ACTIONS(766), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9048] = 1,
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
  [9067] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9086] = 12,
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
    ACTIONS(568), 1,
      anon_sym_0X,
    ACTIONS(770), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9127] = 1,
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
  [9146] = 1,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [9165] = 1,
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
  [9184] = 1,
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
  [9203] = 1,
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
  [9222] = 1,
    ACTIONS(780), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [9241] = 1,
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
  [9260] = 1,
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
  [9279] = 1,
    ACTIONS(786), 15,
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
  [9297] = 11,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(965), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9335] = 11,
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
    STATE(7), 1,
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
  [9373] = 11,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
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
  [9411] = 11,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(662), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9449] = 11,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(85), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9487] = 11,
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
    ACTIONS(568), 1,
      anon_sym_0X,
    STATE(7), 1,
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
  [9525] = 11,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(667), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9563] = 11,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(410), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9601] = 11,
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
    STATE(7), 1,
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
  [9639] = 11,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(224), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9677] = 11,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
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
  [9715] = 11,
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
    ACTIONS(295), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(79), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9753] = 11,
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
    STATE(7), 1,
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
  [9791] = 11,
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
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(821), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9829] = 11,
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
    ACTIONS(568), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(85), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9867] = 11,
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
    ACTIONS(568), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(79), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [9905] = 4,
    ACTIONS(790), 1,
      aux_sym_priviledge_token1,
    ACTIONS(792), 1,
      aux_sym_resource_token5,
    STATE(201), 1,
      sym_priviledge,
    ACTIONS(788), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [9925] = 10,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(798), 1,
      aux_sym_truncate_token2,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    ACTIONS(802), 1,
      aux_sym_resource_token2,
    ACTIONS(804), 1,
      aux_sym_resource_token3,
    ACTIONS(806), 1,
      aux_sym_resource_token6,
    STATE(124), 1,
      sym_table,
    STATE(908), 1,
      sym_resource,
    STATE(915), 1,
      sym_keyspace,
  [9956] = 10,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(798), 1,
      aux_sym_truncate_token2,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    ACTIONS(802), 1,
      aux_sym_resource_token2,
    ACTIONS(804), 1,
      aux_sym_resource_token3,
    ACTIONS(806), 1,
      aux_sym_resource_token6,
    STATE(124), 1,
      sym_table,
    STATE(218), 1,
      sym_resource,
    STATE(915), 1,
      sym_keyspace,
  [9987] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      sym__dec_digit,
    STATE(65), 1,
      aux_sym__decimal_literal,
    STATE(172), 2,
      sym_option_hash,
      sym_table_option_value,
    STATE(178), 2,
      sym__string_literal,
      sym__float_literal,
  [10014] = 6,
    ACTIONS(812), 1,
      aux_sym_drop_index_token1,
    ACTIONS(814), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(816), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(818), 1,
      aux_sym_alter_table_rename_token1,
    STATE(317), 1,
      sym_alter_table_operation,
    STATE(318), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10037] = 6,
    ACTIONS(812), 1,
      aux_sym_drop_index_token1,
    ACTIONS(814), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(816), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(818), 1,
      aux_sym_alter_table_rename_token1,
    STATE(313), 1,
      sym_alter_table_operation,
    STATE(318), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10060] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(824), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(826), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(828), 1,
      aux_sym_index_full_spec_token1,
    STATE(1016), 1,
      sym_index_column_spec,
    STATE(1011), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10085] = 10,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(798), 1,
      aux_sym_truncate_token2,
    ACTIONS(800), 1,
      aux_sym_priviledge_token1,
    ACTIONS(802), 1,
      aux_sym_resource_token2,
    ACTIONS(804), 1,
      aux_sym_resource_token3,
    ACTIONS(806), 1,
      aux_sym_resource_token6,
    STATE(124), 1,
      sym_table,
    STATE(914), 1,
      sym_resource,
    STATE(915), 1,
      sym_keyspace,
  [10116] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(824), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(826), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(828), 1,
      aux_sym_index_full_spec_token1,
    STATE(959), 1,
      sym_index_column_spec,
    STATE(1011), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10141] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(824), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(826), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(828), 1,
      aux_sym_index_full_spec_token1,
    STATE(871), 1,
      sym_index_column_spec,
    STATE(1011), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10166] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(824), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(826), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(828), 1,
      aux_sym_index_full_spec_token1,
    STATE(929), 1,
      sym_index_column_spec,
    STATE(1011), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10191] = 3,
    ACTIONS(790), 1,
      aux_sym_priviledge_token1,
    STATE(1128), 1,
      sym_priviledge,
    ACTIONS(788), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10208] = 3,
    ACTIONS(790), 1,
      aux_sym_priviledge_token1,
    STATE(1136), 1,
      sym_priviledge,
    ACTIONS(788), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10225] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(824), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(826), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(828), 1,
      aux_sym_index_full_spec_token1,
    STATE(1100), 1,
      sym_index_column_spec,
    STATE(1011), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10250] = 10,
    ACTIONS(830), 1,
      aux_sym_truncate_token2,
    ACTIONS(832), 1,
      aux_sym_create_index_token2,
    ACTIONS(834), 1,
      aux_sym_resource_token2,
    ACTIONS(836), 1,
      aux_sym_resource_token3,
    ACTIONS(838), 1,
      aux_sym_resource_token6,
    ACTIONS(840), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(842), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(844), 1,
      aux_sym_drop_type_token1,
    ACTIONS(846), 1,
      aux_sym_drop_user_token1,
    ACTIONS(848), 1,
      aux_sym_create_aggregate_token1,
  [10281] = 6,
    ACTIONS(850), 1,
      anon_sym_DOT,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      aux_sym_relation_element_token1,
    ACTIONS(860), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(856), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(854), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10303] = 3,
    ACTIONS(862), 1,
      sym__hex_digit,
    STATE(396), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(199), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [10319] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(864), 1,
      sym_object_name,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    STATE(208), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_index_name,
    STATE(403), 1,
      sym_if_exist,
    STATE(1083), 1,
      sym_keyspace,
  [10347] = 3,
    ACTIONS(870), 1,
      sym__hex_digit,
    STATE(396), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(194), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [10363] = 7,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(811), 1,
      sym_column,
    STATE(924), 1,
      sym_primary_key_definition,
    STATE(926), 1,
      sym_partition_key,
    STATE(850), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [10387] = 6,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      aux_sym_relation_element_token1,
    ACTIONS(875), 1,
      anon_sym_DOT,
    ACTIONS(881), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(879), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(877), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10409] = 8,
    ACTIONS(883), 1,
      aux_sym_truncate_token2,
    ACTIONS(885), 1,
      aux_sym_create_index_token2,
    ACTIONS(887), 1,
      aux_sym_resource_token2,
    ACTIONS(889), 1,
      aux_sym_resource_token3,
    ACTIONS(891), 1,
      aux_sym_resource_token6,
    ACTIONS(893), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(895), 1,
      aux_sym_drop_type_token1,
    ACTIONS(897), 1,
      aux_sym_drop_user_token1,
  [10434] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_object_name,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(903), 1,
      aux_sym_create_index_token3,
    STATE(208), 1,
      sym__string_literal,
    STATE(414), 1,
      sym_if_not_exist,
    STATE(1107), 1,
      sym_index_name,
  [10459] = 7,
    ACTIONS(905), 1,
      aux_sym_select_statement_token2,
    ACTIONS(907), 1,
      aux_sym_select_statement_token3,
    ACTIONS(909), 1,
      anon_sym_STAR,
    ACTIONS(911), 1,
      sym_object_name,
    STATE(576), 1,
      sym_select_element,
    STATE(583), 1,
      sym_function_call,
    STATE(703), 1,
      sym_select_elements,
  [10481] = 5,
    ACTIONS(913), 1,
      aux_sym_priviledge_token3,
    ACTIONS(915), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(917), 1,
      aux_sym_alter_table_rename_token1,
    STATE(334), 1,
      sym_alter_type_operation,
    STATE(326), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10499] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(864), 1,
      sym_object_name,
    ACTIONS(868), 1,
      sym__dquote,
    STATE(208), 1,
      sym__string_literal,
    STATE(279), 1,
      sym_index_name,
    STATE(947), 1,
      sym_keyspace,
  [10521] = 6,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      sym_object_name,
    STATE(74), 1,
      sym_relation_element,
    STATE(95), 1,
      sym_relation_elements,
    STATE(467), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10541] = 6,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(923), 1,
      sym_object_name,
    STATE(95), 1,
      sym_relation_elements,
    STATE(140), 1,
      sym_relation_element,
    STATE(446), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10561] = 5,
    ACTIONS(913), 1,
      aux_sym_priviledge_token3,
    ACTIONS(915), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(917), 1,
      aux_sym_alter_table_rename_token1,
    STATE(325), 1,
      sym_alter_type_operation,
    STATE(326), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10579] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      sym__dec_digit,
    STATE(506), 1,
      aux_sym__decimal_literal,
    STATE(836), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10597] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(810), 1,
      sym__dec_digit,
    STATE(65), 1,
      aux_sym__decimal_literal,
    STATE(944), 2,
      sym__string_literal,
      sym__float_literal,
  [10617] = 6,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(927), 1,
      sym_object_name,
    STATE(338), 1,
      sym_user,
    STATE(516), 1,
      sym_if_exist,
    STATE(1070), 1,
      sym_keyspace,
  [10636] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(559), 1,
      aux_sym_relation_element_repeat2,
    STATE(560), 1,
      sym_assignment_tuple,
  [10655] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(510), 1,
      sym_if_not_exist,
    STATE(1102), 1,
      sym_function,
    STATE(1104), 1,
      sym_keyspace,
  [10674] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(520), 1,
      sym_if_not_exist,
    STATE(860), 1,
      sym_keyspace,
    STATE(864), 1,
      sym_aggregate,
  [10693] = 6,
    ACTIONS(909), 1,
      anon_sym_STAR,
    ACTIONS(911), 1,
      sym_object_name,
    ACTIONS(937), 1,
      aux_sym_select_statement_token3,
    STATE(576), 1,
      sym_select_element,
    STATE(583), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [10712] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_object_name,
    ACTIONS(939), 1,
      aux_sym_create_index_token3,
    STATE(208), 1,
      sym__string_literal,
    STATE(980), 1,
      sym_index_name,
  [10731] = 5,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(923), 1,
      sym_object_name,
    STATE(81), 1,
      sym_relation_element,
    STATE(446), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10748] = 6,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    STATE(501), 1,
      sym_if_not_exist,
    STATE(1114), 1,
      sym_table,
    STATE(1116), 1,
      sym_keyspace,
  [10767] = 5,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      sym_object_name,
    STATE(81), 1,
      sym_relation_element,
    STATE(467), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [10784] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(540), 1,
      sym_if_not_exist,
    STATE(1024), 1,
      sym_keyspace,
    STATE(1090), 1,
      sym_type,
  [10803] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(545), 1,
      sym_if_not_exist,
    STATE(1092), 1,
      sym_trigger,
    STATE(1093), 1,
      sym_keyspace,
  [10822] = 6,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(342), 1,
      sym_type,
    STATE(517), 1,
      sym_if_exist,
    STATE(1072), 1,
      sym_keyspace,
  [10841] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(493), 1,
      sym_if_not_exist,
    STATE(1094), 1,
      sym_aggregate,
    STATE(1095), 1,
      sym_keyspace,
  [10860] = 6,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(521), 1,
      sym_if_not_exist,
    STATE(873), 1,
      sym_keyspace,
    STATE(874), 1,
      sym_function,
  [10879] = 2,
    ACTIONS(947), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(945), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [10890] = 6,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(526), 1,
      sym_if_exist,
    STATE(1073), 1,
      sym_trigger,
    STATE(1075), 1,
      sym_keyspace,
  [10909] = 6,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(949), 1,
      aux_sym_primary_key_column_token1,
    STATE(41), 1,
      sym_column,
    STATE(706), 1,
      sym_column_definition,
    STATE(1133), 1,
      sym_primary_key_element,
  [10928] = 6,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    STATE(359), 1,
      sym_table,
    STATE(537), 1,
      sym_if_exist,
    STATE(1085), 1,
      sym_keyspace,
  [10947] = 6,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(348), 1,
      sym_function,
    STATE(527), 1,
      sym_if_exist,
    STATE(1077), 1,
      sym_keyspace,
  [10966] = 2,
    ACTIONS(953), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(951), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [10977] = 6,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    ACTIONS(949), 1,
      aux_sym_primary_key_column_token1,
    STATE(41), 1,
      sym_column,
    STATE(706), 1,
      sym_column_definition,
    STATE(969), 1,
      sym_primary_key_element,
  [10996] = 4,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_DOT,
    ACTIONS(959), 1,
      aux_sym_select_element_token1,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11010] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(589), 1,
      sym_clustering_key,
    STATE(776), 1,
      sym_column,
    STATE(1048), 1,
      sym_clustering_key_list,
  [11026] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(602), 1,
      sym_replication_list_item,
    STATE(853), 1,
      sym_replication_list,
    STATE(939), 1,
      sym__string_literal,
  [11042] = 5,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(98), 1,
      sym_insert_values_spec,
    STATE(579), 1,
      sym_insert_column_spec,
  [11058] = 2,
    ACTIONS(969), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(967), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11068] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
    STATE(677), 1,
      sym_column_definition,
    STATE(967), 1,
      sym_column_definition_list,
  [11084] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(589), 1,
      sym_clustering_key,
    STATE(776), 1,
      sym_column,
    STATE(1003), 1,
      sym_clustering_key_list,
  [11100] = 5,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    ACTIONS(975), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(199), 1,
      sym_column,
    STATE(275), 1,
      sym_alter_table_drop_column_list,
  [11116] = 4,
    ACTIONS(977), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(981), 1,
      aux_sym_role_with_options_token4,
    STATE(222), 1,
      sym_role_with_options,
    ACTIONS(979), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11130] = 5,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
    STATE(566), 1,
      sym_insert_column_spec,
  [11146] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(208), 1,
      sym__string_literal,
    STATE(260), 1,
      sym_index_name,
  [11162] = 2,
    ACTIONS(985), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(983), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11172] = 1,
    ACTIONS(987), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11180] = 5,
    ACTIONS(989), 1,
      sym_object_name,
    ACTIONS(991), 1,
      aux_sym_from_spec_token1,
    STATE(512), 1,
      sym_from_spec,
    STATE(601), 1,
      sym_delete_column_item,
    STATE(705), 1,
      sym_delete_column_list,
  [11196] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(993), 1,
      sym__dec_digit,
    STATE(595), 1,
      aux_sym__decimal_literal,
    STATE(1015), 1,
      sym__string_literal,
  [11212] = 3,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(998), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11224] = 2,
    ACTIONS(1002), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1000), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11234] = 1,
    ACTIONS(1004), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11242] = 1,
    ACTIONS(1006), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11250] = 5,
    ACTIONS(1008), 1,
      aux_sym_truncate_token2,
    ACTIONS(1010), 1,
      aux_sym_resource_token2,
    ACTIONS(1012), 1,
      aux_sym_resource_token6,
    ACTIONS(1014), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1016), 1,
      aux_sym_drop_user_token1,
  [11266] = 4,
    ACTIONS(977), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(981), 1,
      aux_sym_role_with_options_token4,
    STATE(177), 1,
      sym_role_with_options,
    ACTIONS(979), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11280] = 1,
    ACTIONS(1018), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11288] = 1,
    ACTIONS(1020), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11296] = 5,
    ACTIONS(989), 1,
      sym_object_name,
    ACTIONS(991), 1,
      aux_sym_from_spec_token1,
    STATE(499), 1,
      sym_from_spec,
    STATE(601), 1,
      sym_delete_column_item,
    STATE(750), 1,
      sym_delete_column_list,
  [11312] = 5,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(692), 1,
      sym_if_not_exist,
    STATE(1105), 1,
      sym_keyspace,
  [11328] = 5,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(202), 1,
      sym_alter_type_rename_item,
    STATE(270), 1,
      sym_alter_type_rename_list,
    STATE(930), 1,
      sym_column,
  [11344] = 2,
    ACTIONS(1024), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(556), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [11354] = 5,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(105), 1,
      sym_insert_values_spec,
    STATE(604), 1,
      sym_insert_column_spec,
  [11370] = 1,
    ACTIONS(1026), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11378] = 5,
    ACTIONS(909), 1,
      anon_sym_STAR,
    ACTIONS(1028), 1,
      sym_object_name,
    STATE(576), 1,
      sym_select_element,
    STATE(583), 1,
      sym_function_call,
    STATE(752), 1,
      sym_select_elements,
  [11394] = 1,
    ACTIONS(1030), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11402] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(1032), 1,
      sym__dec_digit,
    STATE(487), 1,
      aux_sym__decimal_literal,
    STATE(806), 1,
      sym__string_literal,
  [11418] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(602), 1,
      sym_replication_list_item,
    STATE(877), 1,
      sym_replication_list,
    STATE(939), 1,
      sym__string_literal,
  [11434] = 3,
    ACTIONS(1036), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(577), 1,
      sym_using_timestamp_spec,
    ACTIONS(1034), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11446] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
    STATE(677), 1,
      sym_column_definition,
    STATE(881), 1,
      sym_column_definition_list,
  [11462] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(585), 1,
      sym_partition_key,
    STATE(790), 1,
      sym_column,
    STATE(971), 1,
      sym_partition_key_list,
  [11478] = 5,
    ACTIONS(909), 1,
      anon_sym_STAR,
    ACTIONS(1028), 1,
      sym_object_name,
    STATE(576), 1,
      sym_select_element,
    STATE(583), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [11494] = 2,
    ACTIONS(1040), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1038), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11504] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(602), 1,
      sym_replication_list_item,
    STATE(933), 1,
      sym_replication_list,
    STATE(939), 1,
      sym__string_literal,
  [11520] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
    STATE(677), 1,
      sym_column_definition,
    STATE(1106), 1,
      sym_column_definition_list,
  [11536] = 3,
    ACTIONS(1036), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(612), 1,
      sym_using_timestamp_spec,
    ACTIONS(1042), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11548] = 5,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(353), 1,
      sym_keyspace,
    STATE(652), 1,
      sym_if_exist,
  [11564] = 5,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
    STATE(677), 1,
      sym_column_definition,
    STATE(1000), 1,
      sym_column_definition_list,
  [11580] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(208), 1,
      sym__string_literal,
    STATE(308), 1,
      sym_index_name,
  [11596] = 5,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    ACTIONS(1044), 1,
      aux_sym_truncate_token2,
    STATE(289), 1,
      sym_table,
    STATE(1141), 1,
      sym_keyspace,
  [11612] = 5,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(96), 1,
      sym_insert_values_spec,
    STATE(570), 1,
      sym_insert_column_spec,
  [11628] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(617), 1,
      sym_option_hash_item,
    STATE(920), 1,
      sym__string_literal,
  [11641] = 2,
    ACTIONS(1046), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [11650] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(287), 1,
      sym_table,
    STATE(1118), 1,
      sym_keyspace,
  [11663] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(144), 1,
      sym_where_spec,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [11676] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(382), 1,
      sym_table,
    STATE(1062), 1,
      sym_keyspace,
  [11689] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(475), 1,
      sym_table,
    STATE(1120), 1,
      sym_keyspace,
  [11702] = 2,
    ACTIONS(1052), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1054), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [11711] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(297), 1,
      sym_table,
    STATE(885), 1,
      sym_keyspace,
  [11724] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(457), 1,
      sym_table,
    STATE(906), 1,
      sym_keyspace,
  [11737] = 4,
    ACTIONS(866), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(347), 1,
      sym_role,
    STATE(736), 1,
      sym_if_exist,
  [11750] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(126), 1,
      sym_where_spec,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [11763] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11774] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(126), 1,
      sym_where_spec,
    STATE(504), 1,
      aux_sym_update_repeat1,
  [11787] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(42), 1,
      sym_column,
    STATE(852), 1,
      sym_type_member_column_list,
  [11800] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(144), 1,
      sym_where_spec,
    STATE(486), 1,
      aux_sym_update_repeat1,
  [11813] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(305), 1,
      sym_table,
    STATE(999), 1,
      sym_keyspace,
  [11826] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(286), 1,
      sym_table,
    STATE(1081), 1,
      sym_keyspace,
  [11839] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(964), 1,
      sym_aggregate,
    STATE(966), 1,
      sym_keyspace,
  [11852] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(137), 1,
      sym_where_spec,
    STATE(479), 1,
      aux_sym_update_repeat1,
  [11865] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(751), 1,
      sym_clustering_key,
    STATE(776), 1,
      sym_column,
  [11878] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(137), 1,
      sym_where_spec,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [11891] = 4,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_function_args_repeat1,
  [11904] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(319), 1,
      sym_trigger_class,
    STATE(322), 1,
      sym__string_literal,
  [11917] = 4,
    ACTIONS(1036), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(146), 1,
      sym_where_spec,
    STATE(775), 1,
      sym_using_timestamp_spec,
  [11930] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(127), 1,
      sym_where_spec,
    STATE(496), 1,
      aux_sym_update_repeat1,
  [11943] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(994), 1,
      sym_table,
    STATE(996), 1,
      sym_keyspace,
  [11956] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(129), 1,
      sym_table,
    STATE(894), 1,
      sym_keyspace,
  [11969] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(798), 1,
      sym_option_hash_item,
    STATE(920), 1,
      sym__string_literal,
  [11982] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [11995] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(41), 1,
      sym_column,
    STATE(706), 1,
      sym_column_definition,
  [12008] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12019] = 4,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1068), 1,
      aux_sym_ttl_token1,
    STATE(150), 1,
      sym_timestamp,
    STATE(192), 1,
      sym_ttl,
  [12032] = 4,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(207), 1,
      sym_alter_type_rename_item,
    STATE(930), 1,
      sym_column,
  [12045] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(271), 1,
      sym_table,
    STATE(1067), 1,
      sym_keyspace,
  [12058] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(968), 1,
      sym_function,
    STATE(970), 1,
      sym_keyspace,
  [12071] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(42), 1,
      sym_column,
    STATE(1103), 1,
      sym_type_member_column_list,
  [12084] = 4,
    ACTIONS(1036), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(147), 1,
      sym_where_spec,
    STATE(715), 1,
      sym_using_timestamp_spec,
  [12097] = 1,
    ACTIONS(1070), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12104] = 4,
    ACTIONS(1072), 1,
      sym_object_name,
    ACTIONS(1074), 1,
      aux_sym_if_exist_token2,
    STATE(154), 1,
      sym_if_condition,
    STATE(357), 1,
      sym_if_condition_list,
  [12117] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(322), 1,
      sym__string_literal,
    STATE(358), 1,
      sym_trigger_class,
  [12130] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(927), 1,
      sym_object_name,
    STATE(230), 1,
      sym_user,
    STATE(927), 1,
      sym_keyspace,
  [12143] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(291), 1,
      sym_type,
    STATE(931), 1,
      sym_keyspace,
  [12156] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(533), 1,
      aux_sym_update_repeat1,
  [12169] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(406), 1,
      sym_type,
    STATE(1060), 1,
      sym_keyspace,
  [12182] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(1046), 1,
      sym_aggregate,
    STATE(1056), 1,
      sym_keyspace,
  [12195] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(1030), 1,
      sym_function,
    STATE(1055), 1,
      sym_keyspace,
  [12208] = 4,
    ACTIONS(1076), 1,
      sym_object_name,
    STATE(133), 1,
      sym_table_option_item,
    STATE(274), 1,
      sym_table_options,
    STATE(907), 1,
      sym_table_option_name,
  [12221] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(878), 1,
      sym_table,
    STATE(978), 1,
      sym_keyspace,
  [12234] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(272), 1,
      sym_alter_table_column_definition,
  [12247] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(766), 1,
      sym_partition_key,
    STATE(790), 1,
      sym_column,
  [12260] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(935), 1,
      sym_trigger,
    STATE(937), 1,
      sym_keyspace,
  [12273] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(283), 1,
      sym_function,
    STATE(946), 1,
      sym_keyspace,
  [12286] = 4,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(188), 1,
      sym_role,
    STATE(723), 1,
      sym_if_not_exist,
  [12299] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(619), 1,
      sym_table,
    STATE(1050), 1,
      sym_keyspace,
  [12312] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(42), 1,
      sym_column,
    STATE(1053), 1,
      sym_type_member_column_list,
  [12325] = 1,
    ACTIONS(998), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12332] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(985), 1,
      sym_table,
    STATE(989), 1,
      sym_keyspace,
  [12345] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(135), 1,
      sym_where_spec,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [12358] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(129), 1,
      sym_function,
    STATE(897), 1,
      sym_keyspace,
  [12371] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(691), 1,
      sym_column,
    STATE(888), 1,
      sym_column_list,
  [12384] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(238), 1,
      sym_trigger_class,
    STATE(322), 1,
      sym__string_literal,
  [12397] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(276), 1,
      sym_table,
    STATE(950), 1,
      sym_keyspace,
  [12410] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(698), 1,
      sym_table,
    STATE(1139), 1,
      sym_keyspace,
  [12423] = 4,
    ACTIONS(1036), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(117), 1,
      sym_where_spec,
    STATE(807), 1,
      sym_using_timestamp_spec,
  [12436] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(956), 1,
      sym_type,
    STATE(957), 1,
      sym_keyspace,
  [12449] = 4,
    ACTIONS(901), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(728), 1,
      sym_if_not_exist,
    STATE(1088), 1,
      sym_user,
  [12462] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(280), 1,
      sym_trigger_class,
    STATE(322), 1,
      sym__string_literal,
  [12475] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_COLON,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    STATE(575), 1,
      aux_sym_assignment_tuple_repeat1,
  [12488] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(804), 1,
      sym_replication_list_item,
    STATE(939), 1,
      sym__string_literal,
  [12501] = 4,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(960), 1,
      sym_trigger,
    STATE(961), 1,
      sym_keyspace,
  [12514] = 3,
    ACTIONS(1088), 1,
      aux_sym_primary_key_column_token1,
    STATE(727), 1,
      sym_primary_key_column,
    ACTIONS(1086), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12525] = 4,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(42), 1,
      sym_column,
    STATE(898), 1,
      sym_type_member_column_list,
  [12538] = 4,
    ACTIONS(794), 1,
      sym_object_name,
    ACTIONS(796), 1,
      sym__dquote,
    STATE(893), 1,
      sym_keyspace,
    STATE(1002), 1,
      sym_table,
  [12551] = 3,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(1025), 1,
      sym_order_direction,
    ACTIONS(263), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12562] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [12572] = 3,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(194), 1,
      sym_column,
  [12582] = 3,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      aux_sym_column_list_repeat1,
  [12592] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(1018), 1,
      sym_return_mode,
  [12602] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_assignment_tuple_repeat1,
  [12612] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_expression_list_repeat1,
  [12622] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(886), 1,
      sym_table,
  [12632] = 3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      aux_sym_column_definition_list_repeat1,
  [12642] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_assignment_tuple_repeat1,
  [12652] = 3,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    STATE(660), 1,
      aux_sym_relation_element_repeat2,
  [12662] = 3,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    STATE(655), 1,
      aux_sym_relation_element_repeat2,
  [12672] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(194), 1,
      sym_column,
  [12682] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1101), 1,
      sym_table,
  [12692] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(339), 1,
      sym_table,
  [12702] = 3,
    ACTIONS(1028), 1,
      sym_object_name,
    STATE(583), 1,
      sym_function_call,
    STATE(753), 1,
      sym_select_element,
  [12712] = 3,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(684), 1,
      sym_param,
  [12722] = 3,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(101), 1,
      sym_insert_values_spec,
  [12732] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(1145), 1,
      sym_return_mode,
  [12742] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_create_function_repeat1,
  [12752] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      aux_sym_from_spec_token1,
    STATE(614), 1,
      aux_sym_select_elements_repeat1,
  [12762] = 3,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(105), 1,
      sym_insert_values_spec,
  [12772] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_create_function_repeat1,
  [12782] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [12792] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(215), 1,
      sym__string_literal,
  [12802] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(433), 1,
      sym_table,
  [12812] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(445), 1,
      aux_sym_assignment_tuple_repeat1,
  [12822] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      aux_sym_from_spec_token1,
    STATE(569), 1,
      aux_sym_select_elements_repeat1,
  [12832] = 1,
    ACTIONS(1136), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12838] = 3,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      aux_sym_from_spec_token1,
    STATE(578), 1,
      aux_sym_delete_column_list_repeat1,
  [12848] = 3,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [12858] = 3,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      aux_sym_expression_list_repeat1,
  [12868] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_partition_key_list_repeat1,
  [12878] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_type_member_column_list_repeat1,
  [12888] = 2,
    ACTIONS(959), 1,
      aux_sym_select_element_token1,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12896] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      aux_sym_relation_element_repeat1,
  [12906] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_partition_key_list_repeat1,
  [12916] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(549), 1,
      sym_column,
  [12926] = 2,
    ACTIONS(1162), 1,
      anon_sym_LBRACK,
    ACTIONS(1160), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12934] = 3,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_function_args_repeat1,
  [12944] = 3,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_clustering_key_list_repeat1,
  [12954] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_type_member_column_list_repeat1,
  [12964] = 3,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RBRACE,
    STATE(591), 1,
      aux_sym_assignment_map_repeat1,
  [12974] = 2,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12982] = 3,
    ACTIONS(1180), 1,
      sym__hex_digit,
    ACTIONS(1183), 1,
      anon_sym_SQUOTE,
    STATE(593), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [12992] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_param,
  [13002] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [13012] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_relation_element_repeat2,
  [13022] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(1043), 1,
      sym_return_mode,
  [13032] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(125), 1,
      sym_keyspace,
  [13042] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_partition_key_list_repeat1,
  [13052] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_function_args_repeat1,
  [13062] = 3,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      aux_sym_from_spec_token1,
    STATE(608), 1,
      aux_sym_delete_column_list_repeat1,
  [13072] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(671), 1,
      aux_sym_replication_list_repeat1,
  [13082] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1204), 1,
      aux_sym_update_token2,
    STATE(1126), 1,
      sym_using_ttl_timestamp,
  [13092] = 3,
    ACTIONS(961), 1,
      aux_sym_select_statement_token3,
    ACTIONS(965), 1,
      aux_sym_insert_values_spec_token1,
    STATE(98), 1,
      sym_insert_values_spec,
  [13102] = 3,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_clustering_key_list_repeat1,
  [13112] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(439), 1,
      sym_table,
  [13122] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(286), 1,
      sym_table,
  [13132] = 3,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      aux_sym_from_spec_token1,
    STATE(578), 1,
      aux_sym_delete_column_list_repeat1,
  [13142] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(879), 1,
      sym_return_mode,
  [13152] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_GT,
    STATE(610), 1,
      aux_sym_data_type_definition_repeat1,
  [13162] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13172] = 1,
    ACTIONS(1034), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13178] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13188] = 3,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      aux_sym_from_spec_token1,
    STATE(614), 1,
      aux_sym_select_elements_repeat1,
  [13198] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_create_function_repeat1,
  [13208] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [13218] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_option_hash_repeat1,
  [13228] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(1061), 1,
      sym_keyspace,
  [13238] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1228), 1,
      aux_sym_update_token2,
    STATE(905), 1,
      sym_using_ttl_timestamp,
  [13248] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      aux_sym_where_spec_token1,
    STATE(620), 1,
      aux_sym_update_repeat1,
  [13258] = 3,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_option_hash_repeat1,
  [13268] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(138), 1,
      sym_table,
  [13278] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(297), 1,
      sym_table,
  [13288] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_GT,
    STATE(610), 1,
      aux_sym_data_type_definition_repeat1,
  [13298] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(309), 1,
      sym_table,
  [13308] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_clustering_key_list_repeat1,
  [13318] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(981), 1,
      sym_return_mode,
  [13328] = 3,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RBRACE,
    STATE(628), 1,
      aux_sym_replication_list_repeat1,
  [13338] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(114), 1,
      sym_table,
  [13348] = 3,
    ACTIONS(1076), 1,
      sym_object_name,
    STATE(205), 1,
      sym_table_option_item,
    STATE(907), 1,
      sym_table_option_name,
  [13358] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(246), 1,
      sym_table,
  [13368] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    STATE(591), 1,
      aux_sym_assignment_map_repeat1,
  [13378] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1258), 1,
      aux_sym_update_token2,
    STATE(856), 1,
      sym_using_ttl_timestamp,
  [13388] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(240), 1,
      sym_column,
  [13398] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      sym_param,
  [13408] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(336), 1,
      sym_table,
  [13418] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_relation_element_repeat2,
  [13428] = 3,
    ACTIONS(1262), 1,
      aux_sym_resource_token1,
    ACTIONS(1264), 1,
      aux_sym_resource_token4,
    ACTIONS(1266), 1,
      aux_sym_resource_token5,
  [13438] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(213), 1,
      sym_column,
  [13448] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(129), 1,
      sym_keyspace,
  [13458] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(633), 1,
      sym_table,
  [13468] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_function_args_repeat1,
  [13478] = 3,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_init_cond_hash_repeat1,
  [13488] = 3,
    ACTIONS(1275), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1277), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1279), 1,
      aux_sym_update_token1,
  [13498] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_relation_element_repeat2,
  [13508] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(383), 1,
      sym_table,
  [13518] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(294), 1,
      sym_table,
  [13528] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_assignment_tuple_repeat1,
  [13538] = 3,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(664), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13548] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(180), 1,
      sym__string_literal,
  [13558] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      aux_sym_relation_element_repeat2,
  [13568] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(281), 1,
      sym_keyspace,
  [13578] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(909), 1,
      sym_column,
  [13588] = 3,
    ACTIONS(1289), 1,
      anon_sym_COMMA,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      aux_sym_relation_element_repeat1,
  [13598] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_relation_element_repeat2,
  [13608] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(350), 1,
      sym_keyspace,
  [13618] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_init_cond_hash_repeat1,
  [13628] = 3,
    ACTIONS(971), 1,
      sym_object_name,
    ACTIONS(973), 1,
      sym__dquote,
    STATE(919), 1,
      sym_column,
  [13638] = 3,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(30), 1,
      sym_column,
  [13648] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_relation_element_repeat2,
  [13658] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_assignment_tuple_repeat1,
  [13668] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    STATE(632), 1,
      aux_sym_assignment_map_repeat1,
  [13678] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(603), 1,
      sym_table,
  [13688] = 3,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13698] = 3,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    STATE(665), 1,
      aux_sym_column_list_repeat1,
  [13708] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(267), 1,
      sym_table,
  [13718] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_RBRACK,
    STATE(554), 1,
      aux_sym_assignment_tuple_repeat1,
  [13728] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_create_function_repeat1,
  [13738] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(1041), 1,
      sym_return_mode,
  [13748] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      sym_param,
  [13758] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
    STATE(628), 1,
      aux_sym_replication_list_repeat1,
  [13768] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      aux_sym_expression_list_repeat1,
  [13778] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(1002), 1,
      sym_table,
  [13788] = 3,
    ACTIONS(1322), 1,
      sym_object_name,
    STATE(721), 1,
      sym_init_cond_hash_item,
    STATE(1078), 1,
      sym_hash_key,
  [13798] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(991), 1,
      sym_table,
  [13808] = 3,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      aux_sym_column_definition_list_repeat1,
  [13818] = 3,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_column_definition_list_repeat1,
  [13828] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(1333), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [13836] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(938), 1,
      sym_return_mode,
  [13846] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13856] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    ACTIONS(1112), 1,
      sym__dquote,
    STATE(940), 1,
      sym_table,
  [13866] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      sym_param,
  [13876] = 3,
    ACTIONS(1100), 1,
      aux_sym_create_function_token1,
    ACTIONS(1102), 1,
      aux_sym_return_mode_token1,
    STATE(932), 1,
      sym_return_mode,
  [13886] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_function_repeat1,
  [13896] = 3,
    ACTIONS(1124), 1,
      sym_object_name,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      sym_param,
  [13906] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13916] = 2,
    ACTIONS(1341), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1339), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13924] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13934] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_init_cond_hash_repeat1,
  [13944] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_create_function_repeat1,
  [13954] = 3,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_column_list_repeat1,
  [13964] = 3,
    ACTIONS(868), 1,
      sym__dquote,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(974), 1,
      sym_keyspace,
  [13974] = 3,
    ACTIONS(1352), 1,
      sym__hex_digit,
    ACTIONS(1354), 1,
      anon_sym_SQUOTE,
    STATE(593), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [13984] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_GT,
    STATE(624), 1,
      aux_sym_data_type_definition_repeat1,
  [13994] = 3,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14004] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_option_hash_repeat1,
  [14014] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_relation_element_repeat1,
  [14024] = 3,
    ACTIONS(289), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1367), 1,
      aux_sym_update_token2,
    STATE(1066), 1,
      sym_using_ttl_timestamp,
  [14034] = 3,
    ACTIONS(820), 1,
      sym_object_name,
    ACTIONS(822), 1,
      sym__dquote,
    STATE(36), 1,
      sym_column,
  [14044] = 2,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_option_hash,
  [14051] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(943), 1,
      sym_language,
  [14058] = 2,
    ACTIONS(1371), 1,
      sym__dec_digit,
    STATE(143), 1,
      aux_sym__decimal_literal,
  [14065] = 2,
    ACTIONS(1373), 1,
      aux_sym_from_spec_token1,
    STATE(58), 1,
      sym_from_spec,
  [14072] = 2,
    ACTIONS(1375), 1,
      sym_object_name,
    STATE(89), 1,
      sym_from_spec_element,
  [14079] = 2,
    ACTIONS(1373), 1,
      aux_sym_from_spec_token1,
    STATE(499), 1,
      sym_from_spec,
  [14086] = 1,
    ACTIONS(1327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14091] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(185), 1,
      sym_role,
  [14098] = 2,
    ACTIONS(1377), 1,
      sym__hex_digit,
    STATE(63), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14105] = 2,
    ACTIONS(1379), 1,
      sym__hex_digit,
    STATE(86), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14112] = 1,
    ACTIONS(1346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14117] = 2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(1059), 1,
      sym_user,
  [14124] = 2,
    ACTIONS(1373), 1,
      aux_sym_from_spec_token1,
    STATE(64), 1,
      sym_from_spec,
  [14131] = 2,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    STATE(513), 1,
      sym_timestamp,
  [14138] = 1,
    ACTIONS(1292), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14143] = 2,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(146), 1,
      sym_where_spec,
  [14150] = 2,
    ACTIONS(989), 1,
      sym_object_name,
    STATE(777), 1,
      sym_delete_column_item,
  [14157] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(284), 1,
      sym_code_block,
  [14164] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(330), 1,
      sym_code_block,
  [14171] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(916), 1,
      sym_function,
  [14178] = 1,
    ACTIONS(1385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14183] = 1,
    ACTIONS(1273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14188] = 1,
    ACTIONS(1361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14193] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(156), 1,
      sym_role,
  [14200] = 2,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [14207] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1113), 1,
      sym_function,
  [14214] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1111), 1,
      sym_language,
  [14221] = 1,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14226] = 2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(953), 1,
      sym_user,
  [14233] = 2,
    ACTIONS(1391), 1,
      aux_sym_resource_token3,
    ACTIONS(1393), 1,
      aux_sym_drop_aggregate_token1,
  [14240] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(890), 1,
      sym_function,
  [14247] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(314), 1,
      sym_code_block,
  [14254] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(855), 1,
      sym_aggregate,
  [14261] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1098), 1,
      sym_function,
  [14268] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(138), 1,
      sym_function,
  [14275] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1096), 1,
      sym_language,
  [14282] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(285), 1,
      sym_role,
  [14289] = 1,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14294] = 1,
    ACTIONS(1052), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14299] = 1,
    ACTIONS(1397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14304] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(488), 1,
      sym_assignment_element,
  [14311] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(360), 1,
      sym_code_block,
  [14318] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(500), 1,
      sym_assignment_element,
  [14325] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1071), 1,
      sym_function,
  [14332] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(217), 1,
      sym_role,
  [14339] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1069), 1,
      sym_language,
  [14346] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(1087), 1,
      sym_aggregate,
  [14353] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(341), 1,
      sym_code_block,
  [14360] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1089), 1,
      sym_function,
  [14367] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(331), 1,
      sym_role,
  [14374] = 2,
    ACTIONS(1373), 1,
      aux_sym_from_spec_token1,
    STATE(539), 1,
      sym_from_spec,
  [14381] = 1,
    ACTIONS(1247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14386] = 2,
    ACTIONS(1373), 1,
      aux_sym_from_spec_token1,
    STATE(61), 1,
      sym_from_spec,
  [14393] = 1,
    ACTIONS(1220), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14398] = 1,
    ACTIONS(1401), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14403] = 2,
    ACTIONS(1403), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [14410] = 2,
    ACTIONS(1124), 1,
      sym_object_name,
    STATE(710), 1,
      sym_param,
  [14417] = 1,
    ACTIONS(1405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14422] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1057), 1,
      sym_function,
  [14429] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1054), 1,
      sym_language,
  [14436] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(306), 1,
      sym_code_block,
  [14443] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(518), 1,
      sym_assignment_element,
  [14450] = 2,
    ACTIONS(1352), 1,
      sym__hex_digit,
    STATE(693), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [14457] = 2,
    ACTIONS(1407), 1,
      sym__hex_digit,
    STATE(394), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [14464] = 2,
    ACTIONS(1409), 1,
      sym__dec_digit,
    STATE(116), 1,
      aux_sym__decimal_literal,
  [14471] = 2,
    ACTIONS(1411), 1,
      sym__dec_digit,
    STATE(123), 1,
      aux_sym__decimal_literal,
  [14478] = 1,
    ACTIONS(1194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14483] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(651), 1,
      sym_assignment_tuple,
  [14490] = 1,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14495] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1045), 1,
      sym_function,
  [14502] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1040), 1,
      sym_function,
  [14509] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(269), 1,
      sym_code_block,
  [14516] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1033), 1,
      sym_language,
  [14523] = 1,
    ACTIONS(1415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14528] = 2,
    ACTIONS(1417), 1,
      sym__dec_digit,
    STATE(75), 1,
      aux_sym__decimal_literal,
  [14535] = 2,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(117), 1,
      sym_where_spec,
  [14542] = 1,
    ACTIONS(1419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14547] = 1,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14552] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1020), 1,
      sym_function,
  [14559] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1017), 1,
      sym_function,
  [14566] = 1,
    ACTIONS(1421), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14571] = 1,
    ACTIONS(1423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14576] = 1,
    ACTIONS(1425), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14581] = 1,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14586] = 2,
    ACTIONS(1381), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(234), 1,
      sym_code_block,
  [14593] = 2,
    ACTIONS(1072), 1,
      sym_object_name,
    STATE(228), 1,
      sym_if_condition,
  [14600] = 1,
    ACTIONS(1427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14605] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(1007), 1,
      sym_language,
  [14612] = 2,
    ACTIONS(1429), 1,
      aux_sym_durable_writes_token1,
    STATE(236), 1,
      sym_durable_writes,
  [14619] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(874), 1,
      sym_function,
  [14626] = 1,
    ACTIONS(1431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14631] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(864), 1,
      sym_aggregate,
  [14638] = 1,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14643] = 2,
    ACTIONS(1433), 1,
      sym_object_name,
    STATE(857), 1,
      sym_type,
  [14650] = 1,
    ACTIONS(1183), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [14655] = 2,
    ACTIONS(1429), 1,
      aux_sym_durable_writes_token1,
    STATE(249), 1,
      sym_durable_writes,
  [14662] = 2,
    ACTIONS(1435), 1,
      aux_sym_role_with_options_token1,
    STATE(122), 1,
      sym_user_password,
  [14669] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(986), 1,
      sym_function,
  [14676] = 1,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14681] = 2,
    ACTIONS(1369), 1,
      sym_object_name,
    STATE(982), 1,
      sym_language,
  [14688] = 2,
    ACTIONS(1437), 1,
      sym__dec_digit,
    STATE(8), 1,
      aux_sym__decimal_literal,
  [14695] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(307), 1,
      sym_function,
  [14702] = 2,
    ACTIONS(1429), 1,
      aux_sym_durable_writes_token1,
    STATE(252), 1,
      sym_durable_writes,
  [14709] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(854), 1,
      sym_trigger,
  [14716] = 1,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14721] = 2,
    ACTIONS(1441), 1,
      sym__dec_digit,
    STATE(139), 1,
      aux_sym__decimal_literal,
  [14728] = 1,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14733] = 2,
    ACTIONS(1050), 1,
      aux_sym_where_spec_token1,
    STATE(141), 1,
      sym_where_spec,
  [14740] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(346), 1,
      sym_role,
  [14747] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(344), 1,
      sym_role,
  [14754] = 2,
    ACTIONS(1433), 1,
      sym_object_name,
    STATE(304), 1,
      sym_type,
  [14761] = 2,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
  [14768] = 2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(302), 1,
      sym_user,
  [14775] = 2,
    ACTIONS(1445), 1,
      sym__dec_digit,
    STATE(99), 1,
      aux_sym__decimal_literal,
  [14782] = 2,
    ACTIONS(1447), 1,
      anon_sym_EQ,
    ACTIONS(1449), 1,
      anon_sym_LBRACK,
  [14789] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(494), 1,
      sym_assignment_element,
  [14796] = 1,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14801] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(129), 1,
      sym_role,
  [14808] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(892), 1,
      sym_function,
  [14815] = 2,
    ACTIONS(1433), 1,
      sym_object_name,
    STATE(402), 1,
      sym_type,
  [14822] = 2,
    ACTIONS(1435), 1,
      aux_sym_role_with_options_token1,
    STATE(134), 1,
      sym_user_password,
  [14829] = 1,
    ACTIONS(1453), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14834] = 2,
    ACTIONS(1455), 1,
      sym__dec_digit,
    STATE(136), 1,
      aux_sym__decimal_literal,
  [14841] = 2,
    ACTIONS(1457), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [14848] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(198), 1,
      sym_order_spec_element,
  [14855] = 1,
    ACTIONS(1461), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14860] = 2,
    ACTIONS(1056), 1,
      sym_object_name,
    STATE(301), 1,
      sym_role,
  [14867] = 1,
    ACTIONS(1213), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14872] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(859), 1,
      sym_trigger,
  [14879] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(948), 1,
      sym_function,
  [14886] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(737), 1,
      sym_assignment_element,
  [14893] = 2,
    ACTIONS(1463), 1,
      sym__dec_digit,
    STATE(616), 1,
      aux_sym__decimal_literal,
  [14900] = 2,
    ACTIONS(1066), 1,
      aux_sym_timestamp_token1,
    STATE(211), 1,
      sym_timestamp,
  [14907] = 2,
    ACTIONS(1068), 1,
      aux_sym_ttl_token1,
    STATE(211), 1,
      sym_ttl,
  [14914] = 2,
    ACTIONS(1399), 1,
      sym_object_name,
    STATE(490), 1,
      sym_assignment_element,
  [14921] = 2,
    ACTIONS(1078), 1,
      sym_object_name,
    STATE(277), 1,
      sym_user,
  [14928] = 1,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14933] = 2,
    ACTIONS(1433), 1,
      sym_object_name,
    STATE(273), 1,
      sym_type,
  [14940] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(1058), 1,
      sym_trigger,
  [14947] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(263), 1,
      sym_function,
  [14954] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(637), 1,
      sym_assignment_tuple,
  [14961] = 2,
    ACTIONS(1435), 1,
      aux_sym_role_with_options_token1,
    STATE(142), 1,
      sym_user_password,
  [14968] = 1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14973] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(842), 1,
      sym_assignment_tuple,
  [14980] = 1,
    ACTIONS(1465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14985] = 2,
    ACTIONS(1433), 1,
      sym_object_name,
    STATE(1052), 1,
      sym_type,
  [14992] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(1051), 1,
      sym_trigger,
  [14999] = 1,
    ACTIONS(1333), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [15004] = 2,
    ACTIONS(1395), 1,
      sym_object_name,
    STATE(1046), 1,
      sym_aggregate,
  [15011] = 2,
    ACTIONS(1383), 1,
      sym_object_name,
    STATE(1030), 1,
      sym_function,
  [15018] = 1,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [15022] = 1,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
  [15026] = 1,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [15030] = 1,
    ACTIONS(1473), 1,
      anon_sym_RBRACE,
  [15034] = 1,
    ACTIONS(1475), 1,
      aux_sym_create_index_token3,
  [15038] = 1,
    ACTIONS(1477), 1,
      anon_sym_LPAREN,
  [15042] = 1,
    ACTIONS(1204), 1,
      aux_sym_update_token2,
  [15046] = 1,
    ACTIONS(1479), 1,
      anon_sym_LPAREN,
  [15050] = 1,
    ACTIONS(1481), 1,
      aux_sym_select_statement_token6,
  [15054] = 1,
    ACTIONS(1483), 1,
      aux_sym_using_timestamp_spec_token1,
  [15058] = 1,
    ACTIONS(1485), 1,
      anon_sym_DOT,
  [15062] = 1,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
  [15066] = 1,
    ACTIONS(1489), 1,
      sym__hex_4digit,
  [15070] = 1,
    ACTIONS(1491), 1,
      aux_sym_order_spec_token2,
  [15074] = 1,
    ACTIONS(1493), 1,
      anon_sym_LPAREN,
  [15078] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [15082] = 1,
    ACTIONS(1495), 1,
      anon_sym_EQ,
  [15086] = 1,
    ACTIONS(1497), 1,
      anon_sym_EQ,
  [15090] = 1,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
  [15094] = 1,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
  [15098] = 1,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [15102] = 1,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [15106] = 1,
    ACTIONS(1507), 1,
      anon_sym_EQ,
  [15110] = 1,
    ACTIONS(1509), 1,
      anon_sym_DOT,
  [15114] = 1,
    ACTIONS(1511), 1,
      anon_sym_LPAREN,
  [15118] = 1,
    ACTIONS(1513), 1,
      aux_sym_create_keyspace_token2,
  [15122] = 1,
    ACTIONS(1515), 1,
      anon_sym_GT,
  [15126] = 1,
    ACTIONS(1517), 1,
      anon_sym_RBRACE,
  [15130] = 1,
    ACTIONS(1519), 1,
      anon_sym_LPAREN,
  [15134] = 1,
    ACTIONS(1521), 1,
      aux_sym_create_function_token1,
  [15138] = 1,
    ACTIONS(1523), 1,
      anon_sym_EQ,
  [15142] = 1,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
  [15146] = 1,
    ACTIONS(1527), 1,
      aux_sym_create_function_token2,
  [15150] = 1,
    ACTIONS(1529), 1,
      aux_sym_return_mode_token2,
  [15154] = 1,
    ACTIONS(1531), 1,
      aux_sym_create_function_token1,
  [15158] = 1,
    ACTIONS(1533), 1,
      anon_sym_DOT,
  [15162] = 1,
    ACTIONS(1535), 1,
      anon_sym_LPAREN,
  [15166] = 1,
    ACTIONS(1537), 1,
      sym__dquote,
  [15170] = 1,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
  [15174] = 1,
    ACTIONS(1541), 1,
      sym_object_name,
  [15178] = 1,
    ACTIONS(1543), 1,
      anon_sym_LPAREN,
  [15182] = 1,
    ACTIONS(1545), 1,
      aux_sym_create_aggregate_token3,
  [15186] = 1,
    ACTIONS(1547), 1,
      aux_sym_create_aggregate_token4,
  [15190] = 1,
    ACTIONS(1549), 1,
      anon_sym_DOT,
  [15194] = 1,
    ACTIONS(1551), 1,
      anon_sym_DOT,
  [15198] = 1,
    ACTIONS(1553), 1,
      anon_sym_LPAREN,
  [15202] = 1,
    ACTIONS(1555), 1,
      sym_object_name,
  [15206] = 1,
    ACTIONS(1557), 1,
      anon_sym_DOT,
  [15210] = 1,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
  [15214] = 1,
    ACTIONS(1561), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15218] = 1,
    ACTIONS(1563), 1,
      sym__hex_digit,
  [15222] = 1,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
  [15226] = 1,
    ACTIONS(1567), 1,
      sym__hex_4digit,
  [15230] = 1,
    ACTIONS(1569), 1,
      aux_sym_select_statement_token6,
  [15234] = 1,
    ACTIONS(1571), 1,
      anon_sym_EQ,
  [15238] = 1,
    ACTIONS(1258), 1,
      aux_sym_update_token2,
  [15242] = 1,
    ACTIONS(1573), 1,
      anon_sym_DOT,
  [15246] = 1,
    ACTIONS(1575), 1,
      anon_sym_EQ,
  [15250] = 1,
    ACTIONS(1577), 1,
      aux_sym_from_spec_token1,
  [15254] = 1,
    ACTIONS(1579), 1,
      aux_sym_grant_token2,
  [15258] = 1,
    ACTIONS(1581), 1,
      anon_sym_EQ,
  [15262] = 1,
    ACTIONS(1583), 1,
      aux_sym_create_keyspace_token2,
  [15266] = 1,
    ACTIONS(1585), 1,
      aux_sym_select_statement_token6,
  [15270] = 1,
    ACTIONS(1587), 1,
      anon_sym_DASH,
  [15274] = 1,
    ACTIONS(1589), 1,
      aux_sym_grant_token2,
  [15278] = 1,
    ACTIONS(1591), 1,
      anon_sym_DOT,
  [15282] = 1,
    ACTIONS(1593), 1,
      aux_sym_create_aggregate_token4,
  [15286] = 1,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [15290] = 1,
    ACTIONS(1597), 1,
      aux_sym_create_aggregate_token3,
  [15294] = 1,
    ACTIONS(1599), 1,
      aux_sym_drop_type_token1,
  [15298] = 1,
    ACTIONS(1601), 1,
      anon_sym_COLON,
  [15302] = 1,
    ACTIONS(1603), 1,
      anon_sym_LPAREN,
  [15306] = 1,
    ACTIONS(1605), 1,
      aux_sym_create_function_token2,
  [15310] = 1,
    ACTIONS(1607), 1,
      aux_sym_return_mode_token2,
  [15314] = 1,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [15318] = 1,
    ACTIONS(1611), 1,
      anon_sym_LBRACE,
  [15322] = 1,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
  [15326] = 1,
    ACTIONS(1615), 1,
      anon_sym_DOT,
  [15330] = 1,
    ACTIONS(1617), 1,
      aux_sym_constant_token1,
  [15334] = 1,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
  [15338] = 1,
    ACTIONS(1621), 1,
      aux_sym_grant_token2,
  [15342] = 1,
    ACTIONS(1623), 1,
      anon_sym_DOT,
  [15346] = 1,
    ACTIONS(1625), 1,
      aux_sym_create_function_token1,
  [15350] = 1,
    ACTIONS(1627), 1,
      anon_sym_RBRACE,
  [15354] = 1,
    ACTIONS(1629), 1,
      aux_sym_select_statement_token6,
  [15358] = 1,
    ACTIONS(1631), 1,
      aux_sym_create_index_token3,
  [15362] = 1,
    ACTIONS(1633), 1,
      aux_sym_create_function_token2,
  [15366] = 1,
    ACTIONS(1635), 1,
      anon_sym_DOT,
  [15370] = 1,
    ACTIONS(1637), 1,
      aux_sym_create_function_token1,
  [15374] = 1,
    ACTIONS(1639), 1,
      anon_sym_COLON,
  [15378] = 1,
    ACTIONS(1641), 1,
      anon_sym_LPAREN,
  [15382] = 1,
    ACTIONS(1643), 1,
      aux_sym_create_function_token1,
  [15386] = 1,
    ACTIONS(1645), 1,
      aux_sym_select_element_token1,
  [15390] = 1,
    ACTIONS(1647), 1,
      aux_sym_select_element_token1,
  [15394] = 1,
    ACTIONS(1649), 1,
      anon_sym_RPAREN,
  [15398] = 1,
    ACTIONS(1651), 1,
      anon_sym_DASH,
  [15402] = 1,
    ACTIONS(1653), 1,
      anon_sym_DOT,
  [15406] = 1,
    ACTIONS(1655), 1,
      anon_sym_DOT,
  [15410] = 1,
    ACTIONS(1657), 1,
      aux_sym_create_aggregate_token4,
  [15414] = 1,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
  [15418] = 1,
    ACTIONS(1661), 1,
      anon_sym_DOT,
  [15422] = 1,
    ACTIONS(1663), 1,
      aux_sym_create_aggregate_token5,
  [15426] = 1,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
  [15430] = 1,
    ACTIONS(1667), 1,
      aux_sym_create_keyspace_token1,
  [15434] = 1,
    ACTIONS(1669), 1,
      aux_sym_create_aggregate_token3,
  [15438] = 1,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [15442] = 1,
    ACTIONS(1673), 1,
      anon_sym_LPAREN,
  [15446] = 1,
    ACTIONS(1675), 1,
      anon_sym_DOT,
  [15450] = 1,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
  [15454] = 1,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
  [15458] = 1,
    ACTIONS(1681), 1,
      aux_sym_using_timestamp_spec_token1,
  [15462] = 1,
    ACTIONS(1683), 1,
      anon_sym_DOT,
  [15466] = 1,
    ACTIONS(1685), 1,
      sym__hex_4digit,
  [15470] = 1,
    ACTIONS(1687), 1,
      aux_sym_select_statement_token6,
  [15474] = 1,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [15478] = 1,
    ACTIONS(1691), 1,
      anon_sym_COLON,
  [15482] = 1,
    ACTIONS(1693), 1,
      anon_sym_DOT,
  [15486] = 1,
    ACTIONS(1695), 1,
      anon_sym_RPAREN,
  [15490] = 1,
    ACTIONS(1697), 1,
      anon_sym_LPAREN,
  [15494] = 1,
    ACTIONS(1699), 1,
      anon_sym_RPAREN,
  [15498] = 1,
    ACTIONS(1701), 1,
      anon_sym_DOT,
  [15502] = 1,
    ACTIONS(1703), 1,
      anon_sym_RPAREN,
  [15506] = 1,
    ACTIONS(1705), 1,
      anon_sym_RPAREN,
  [15510] = 1,
    ACTIONS(1707), 1,
      anon_sym_LPAREN,
  [15514] = 1,
    ACTIONS(1709), 1,
      aux_sym_create_keyspace_token1,
  [15518] = 1,
    ACTIONS(1711), 1,
      aux_sym_durable_writes_token2,
  [15522] = 1,
    ACTIONS(1713), 1,
      aux_sym_create_keyspace_token2,
  [15526] = 1,
    ACTIONS(1715), 1,
      sym_object_name,
  [15530] = 1,
    ACTIONS(1717), 1,
      anon_sym_DOT,
  [15534] = 1,
    ACTIONS(1719), 1,
      aux_sym_create_function_token2,
  [15538] = 1,
    ACTIONS(1721), 1,
      aux_sym_create_index_token3,
  [15542] = 1,
    ACTIONS(1723), 1,
      aux_sym_create_function_token1,
  [15546] = 1,
    ACTIONS(1725), 1,
      aux_sym_select_element_token1,
  [15550] = 1,
    ACTIONS(1727), 1,
      aux_sym_order_spec_token1,
  [15554] = 1,
    ACTIONS(1729), 1,
      sym__dquote,
  [15558] = 1,
    ACTIONS(1731), 1,
      anon_sym_LPAREN,
  [15562] = 1,
    ACTIONS(1733), 1,
      aux_sym_create_aggregate_token4,
  [15566] = 1,
    ACTIONS(1735), 1,
      aux_sym_create_aggregate_token5,
  [15570] = 1,
    ACTIONS(1737), 1,
      anon_sym_RPAREN,
  [15574] = 1,
    ACTIONS(1739), 1,
      anon_sym_DOT,
  [15578] = 1,
    ACTIONS(1741), 1,
      anon_sym_DOLLAR_DOLLAR,
  [15582] = 1,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [15586] = 1,
    ACTIONS(1745), 1,
      aux_sym_create_aggregate_token3,
  [15590] = 1,
    ACTIONS(1741), 1,
      anon_sym_SQUOTE,
  [15594] = 1,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
  [15598] = 1,
    ACTIONS(1749), 1,
      sym__hex_4digit,
  [15602] = 1,
    ACTIONS(1751), 1,
      anon_sym_DOT,
  [15606] = 1,
    ACTIONS(1753), 1,
      aux_sym_if_exist_token2,
  [15610] = 1,
    ACTIONS(1755), 1,
      sym_object_name,
  [15614] = 1,
    ACTIONS(1757), 1,
      anon_sym_DOT,
  [15618] = 1,
    ACTIONS(1759), 1,
      anon_sym_RPAREN,
  [15622] = 1,
    ACTIONS(1761), 1,
      anon_sym_COMMA,
  [15626] = 1,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
  [15630] = 1,
    ACTIONS(1765), 1,
      anon_sym_RPAREN,
  [15634] = 1,
    ACTIONS(1767), 1,
      anon_sym_LPAREN,
  [15638] = 1,
    ACTIONS(1769), 1,
      anon_sym_EQ,
  [15642] = 1,
    ACTIONS(1771), 1,
      anon_sym_LPAREN,
  [15646] = 1,
    ACTIONS(1773), 1,
      aux_sym_select_element_token1,
  [15650] = 1,
    ACTIONS(1775), 1,
      anon_sym_LPAREN,
  [15654] = 1,
    ACTIONS(1777), 1,
      aux_sym_create_function_token2,
  [15658] = 1,
    ACTIONS(1779), 1,
      sym_object_name,
  [15662] = 1,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
  [15666] = 1,
    ACTIONS(1783), 1,
      aux_sym__string_literal_token2,
  [15670] = 1,
    ACTIONS(1785), 1,
      sym_object_name,
  [15674] = 1,
    ACTIONS(1787), 1,
      aux_sym_create_aggregate_token5,
  [15678] = 1,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
  [15682] = 1,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
  [15686] = 1,
    ACTIONS(1791), 1,
      aux_sym_create_aggregate_token6,
  [15690] = 1,
    ACTIONS(1793), 1,
      aux_sym_create_function_token1,
  [15694] = 1,
    ACTIONS(1795), 1,
      aux_sym_order_spec_token2,
  [15698] = 1,
    ACTIONS(1797), 1,
      aux_sym_create_aggregate_token4,
  [15702] = 1,
    ACTIONS(1799), 1,
      sym__hex_4digit,
  [15706] = 1,
    ACTIONS(1801), 1,
      sym__hex_4digit,
  [15710] = 1,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
  [15714] = 1,
    ACTIONS(1803), 1,
      anon_sym_DOT,
  [15718] = 1,
    ACTIONS(1805), 1,
      anon_sym_RPAREN,
  [15722] = 1,
    ACTIONS(1807), 1,
      anon_sym_LPAREN,
  [15726] = 1,
    ACTIONS(1809), 1,
      anon_sym_DASH,
  [15730] = 1,
    ACTIONS(1811), 1,
      anon_sym_RPAREN,
  [15734] = 1,
    ACTIONS(1813), 1,
      anon_sym_GT,
  [15738] = 1,
    ACTIONS(1815), 1,
      anon_sym_LPAREN,
  [15742] = 1,
    ACTIONS(1817), 1,
      sym__boolean_literal,
  [15746] = 1,
    ACTIONS(1819), 1,
      aux_sym_select_statement_token6,
  [15750] = 1,
    ACTIONS(1821), 1,
      aux_sym_select_element_token1,
  [15754] = 1,
    ACTIONS(1823), 1,
      aux_sym_constant_token1,
  [15758] = 1,
    ACTIONS(1825), 1,
      aux_sym_create_function_token2,
  [15762] = 1,
    ACTIONS(1827), 1,
      anon_sym_DASH,
  [15766] = 1,
    ACTIONS(1829), 1,
      anon_sym_DOLLAR_DOLLAR,
  [15770] = 1,
    ACTIONS(1831), 1,
      aux_sym_create_index_token3,
  [15774] = 1,
    ACTIONS(1833), 1,
      aux_sym_create_aggregate_token5,
  [15778] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_aggregate_token6,
  [15782] = 1,
    ACTIONS(1837), 1,
      aux_sym_create_function_token1,
  [15786] = 1,
    ACTIONS(1839), 1,
      anon_sym_RPAREN,
  [15790] = 1,
    ACTIONS(1841), 1,
      aux_sym_create_function_token1,
  [15794] = 1,
    ACTIONS(1843), 1,
      sym__boolean_literal,
  [15798] = 1,
    ACTIONS(1845), 1,
      aux_sym_create_aggregate_token4,
  [15802] = 1,
    ACTIONS(1847), 1,
      anon_sym_LPAREN,
  [15806] = 1,
    ACTIONS(1849), 1,
      anon_sym_RPAREN,
  [15810] = 1,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
  [15814] = 1,
    ACTIONS(1853), 1,
      aux_sym_create_aggregate_token3,
  [15818] = 1,
    ACTIONS(1855), 1,
      anon_sym_DOT,
  [15822] = 1,
    ACTIONS(1857), 1,
      aux_sym_using_timestamp_spec_token1,
  [15826] = 1,
    ACTIONS(1859), 1,
      anon_sym_LPAREN,
  [15830] = 1,
    ACTIONS(1861), 1,
      anon_sym_RPAREN,
  [15834] = 1,
    ACTIONS(1863), 1,
      aux_sym_select_element_token1,
  [15838] = 1,
    ACTIONS(1865), 1,
      anon_sym_DOT,
  [15842] = 1,
    ACTIONS(1867), 1,
      anon_sym_DOT,
  [15846] = 1,
    ACTIONS(1869), 1,
      aux_sym_create_aggregate_token6,
  [15850] = 1,
    ACTIONS(1871), 1,
      aux_sym_create_index_token3,
  [15854] = 1,
    ACTIONS(1873), 1,
      aux_sym_create_keyspace_token1,
  [15858] = 1,
    ACTIONS(1875), 1,
      anon_sym_DOT,
  [15862] = 1,
    ACTIONS(1877), 1,
      aux_sym_create_keyspace_token1,
  [15866] = 1,
    ACTIONS(1879), 1,
      anon_sym_DOT,
  [15870] = 1,
    ACTIONS(1881), 1,
      aux_sym_create_function_token2,
  [15874] = 1,
    ACTIONS(1883), 1,
      sym__dquote,
  [15878] = 1,
    ACTIONS(1885), 1,
      aux_sym_create_aggregate_token5,
  [15882] = 1,
    ACTIONS(1228), 1,
      aux_sym_update_token2,
  [15886] = 1,
    ACTIONS(1887), 1,
      anon_sym_DOT,
  [15890] = 1,
    ACTIONS(1889), 1,
      anon_sym_EQ,
  [15894] = 1,
    ACTIONS(1891), 1,
      aux_sym_select_element_token1,
  [15898] = 1,
    ACTIONS(1893), 1,
      anon_sym_DOT,
  [15902] = 1,
    ACTIONS(1895), 1,
      aux_sym_create_aggregate_token6,
  [15906] = 1,
    ACTIONS(1897), 1,
      anon_sym_DOT,
  [15910] = 1,
    ACTIONS(1899), 1,
      aux_sym_create_index_token3,
  [15914] = 1,
    ACTIONS(1901), 1,
      anon_sym_COLON,
  [15918] = 1,
    ACTIONS(1903), 1,
      anon_sym_DOT,
  [15922] = 1,
    ACTIONS(1905), 1,
      sym_object_name,
  [15926] = 1,
    ACTIONS(1907), 1,
      anon_sym_DOT,
  [15930] = 1,
    ACTIONS(1909), 1,
      anon_sym_COLON,
  [15934] = 1,
    ACTIONS(1911), 1,
      aux_sym_resource_token2,
  [15938] = 1,
    ACTIONS(1913), 1,
      aux_sym_create_function_token2,
  [15942] = 1,
    ACTIONS(1915), 1,
      anon_sym_DOT,
  [15946] = 1,
    ACTIONS(1917), 1,
      aux_sym_create_aggregate_token5,
  [15950] = 1,
    ACTIONS(1919), 1,
      anon_sym_DOT,
  [15954] = 1,
    ACTIONS(1921), 1,
      anon_sym_LBRACE,
  [15958] = 1,
    ACTIONS(1923), 1,
      anon_sym_DOT,
  [15962] = 1,
    ACTIONS(1925), 1,
      aux_sym_if_exist_token2,
  [15966] = 1,
    ACTIONS(1927), 1,
      anon_sym_LPAREN,
  [15970] = 1,
    ACTIONS(1929), 1,
      aux_sym_create_keyspace_token1,
  [15974] = 1,
    ACTIONS(1931), 1,
      anon_sym_LPAREN,
  [15978] = 1,
    ACTIONS(1933), 1,
      anon_sym_LPAREN,
  [15982] = 1,
    ACTIONS(1935), 1,
      aux_sym_insert_statement_token2,
  [15986] = 1,
    ACTIONS(1937), 1,
      aux_sym_using_timestamp_spec_token1,
  [15990] = 1,
    ACTIONS(1939), 1,
      anon_sym_DOT,
  [15994] = 1,
    ACTIONS(1941), 1,
      anon_sym_LPAREN,
  [15998] = 1,
    ACTIONS(1943), 1,
      anon_sym_DOT,
  [16002] = 1,
    ACTIONS(1945), 1,
      aux_sym_select_element_token1,
  [16006] = 1,
    ACTIONS(1947), 1,
      anon_sym_LBRACE,
  [16010] = 1,
    ACTIONS(1949), 1,
      aux_sym_create_aggregate_token6,
  [16014] = 1,
    ACTIONS(1951), 1,
      aux_sym_relalationContainsKey_token2,
  [16018] = 1,
    ACTIONS(1953), 1,
      anon_sym_RPAREN,
  [16022] = 1,
    ACTIONS(1955), 1,
      anon_sym_LPAREN,
  [16026] = 1,
    ACTIONS(1957), 1,
      anon_sym_LPAREN,
  [16030] = 1,
    ACTIONS(1959), 1,
      anon_sym_RPAREN,
  [16034] = 1,
    ACTIONS(1961), 1,
      anon_sym_DOT,
  [16038] = 1,
    ACTIONS(1963), 1,
      aux_sym_create_keyspace_token1,
  [16042] = 1,
    ACTIONS(1965), 1,
      anon_sym_RPAREN,
  [16046] = 1,
    ACTIONS(1967), 1,
      aux_sym_create_index_token3,
  [16050] = 1,
    ACTIONS(1969), 1,
      aux_sym__string_literal_token2,
  [16054] = 1,
    ACTIONS(1971), 1,
      sym_object_name,
  [16058] = 1,
    ACTIONS(1973), 1,
      sym_object_name,
  [16062] = 1,
    ACTIONS(1975), 1,
      aux_sym_select_element_token1,
  [16066] = 1,
    ACTIONS(1977), 1,
      aux_sym__string_literal_token1,
  [16070] = 1,
    ACTIONS(1979), 1,
      aux_sym_create_aggregate_token6,
  [16074] = 1,
    ACTIONS(1981), 1,
      anon_sym_LPAREN,
  [16078] = 1,
    ACTIONS(1983), 1,
      aux_sym_create_aggregate_token3,
  [16082] = 1,
    ACTIONS(1985), 1,
      anon_sym_DOT,
  [16086] = 1,
    ACTIONS(1987), 1,
      aux_sym_if_not_exist_token1,
  [16090] = 1,
    ACTIONS(1989), 1,
      anon_sym_DOT,
  [16094] = 1,
    ACTIONS(1991), 1,
      sym__dquote,
  [16098] = 1,
    ACTIONS(1993), 1,
      anon_sym_DOT,
  [16102] = 1,
    ACTIONS(1995), 1,
      sym_object_name,
  [16106] = 1,
    ACTIONS(1997), 1,
      anon_sym_RPAREN,
  [16110] = 1,
    ACTIONS(1999), 1,
      anon_sym_LPAREN,
  [16114] = 1,
    ACTIONS(2001), 1,
      sym_object_name,
  [16118] = 1,
    ACTIONS(2001), 1,
      anon_sym_STAR,
  [16122] = 1,
    ACTIONS(2003), 1,
      aux_sym_update_token2,
  [16126] = 1,
    ACTIONS(2005), 1,
      aux_sym_insert_statement_token2,
  [16130] = 1,
    ACTIONS(2007), 1,
      aux_sym_create_index_token3,
  [16134] = 1,
    ACTIONS(2009), 1,
      anon_sym_RPAREN,
  [16138] = 1,
    ACTIONS(2011), 1,
      aux_sym_select_statement_token6,
  [16142] = 1,
    ACTIONS(2013), 1,
      aux_sym_if_exist_token2,
  [16146] = 1,
    ACTIONS(2015), 1,
      sym__dquote,
  [16150] = 1,
    ACTIONS(2017), 1,
      anon_sym_RPAREN,
  [16154] = 1,
    ACTIONS(2019), 1,
      aux_sym_if_not_exist_token1,
  [16158] = 1,
    ACTIONS(2021), 1,
      aux_sym_constant_token1,
  [16162] = 1,
    ACTIONS(2023), 1,
      aux_sym_create_index_token3,
  [16166] = 1,
    ACTIONS(2025), 1,
      sym_object_name,
  [16170] = 1,
    ACTIONS(2027), 1,
      sym_object_name,
  [16174] = 1,
    ACTIONS(2029), 1,
      anon_sym_DOT,
  [16178] = 1,
    ACTIONS(2031), 1,
      aux_sym_create_aggregate_token2,
  [16182] = 1,
    ACTIONS(2033), 1,
      anon_sym_DOT,
  [16186] = 1,
    ACTIONS(2035), 1,
      sym_object_name,
  [16190] = 1,
    ACTIONS(2037), 1,
      aux_sym_begin_batch_token4,
  [16194] = 1,
    ACTIONS(2039), 1,
      aux_sym_create_index_token3,
  [16198] = 1,
    ACTIONS(2041), 1,
      aux_sym_create_function_token1,
  [16202] = 1,
    ACTIONS(2043), 1,
      aux_sym_relalationContainsKey_token2,
  [16206] = 1,
    ACTIONS(2045), 1,
      ts_builtin_sym_end,
  [16210] = 1,
    ACTIONS(2047), 1,
      aux_sym_begin_batch_token4,
  [16214] = 1,
    ACTIONS(2049), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 217,
  [SMALL_STATE(6)] = 259,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 414,
  [SMALL_STATE(11)] = 449,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 519,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 583,
  [SMALL_STATE(16)] = 615,
  [SMALL_STATE(17)] = 652,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 722,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 796,
  [SMALL_STATE(22)] = 833,
  [SMALL_STATE(23)] = 870,
  [SMALL_STATE(24)] = 907,
  [SMALL_STATE(25)] = 944,
  [SMALL_STATE(26)] = 981,
  [SMALL_STATE(27)] = 1018,
  [SMALL_STATE(28)] = 1055,
  [SMALL_STATE(29)] = 1092,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1166,
  [SMALL_STATE(32)] = 1203,
  [SMALL_STATE(33)] = 1240,
  [SMALL_STATE(34)] = 1277,
  [SMALL_STATE(35)] = 1310,
  [SMALL_STATE(36)] = 1347,
  [SMALL_STATE(37)] = 1384,
  [SMALL_STATE(38)] = 1417,
  [SMALL_STATE(39)] = 1454,
  [SMALL_STATE(40)] = 1491,
  [SMALL_STATE(41)] = 1528,
  [SMALL_STATE(42)] = 1565,
  [SMALL_STATE(43)] = 1602,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1672,
  [SMALL_STATE(46)] = 1709,
  [SMALL_STATE(47)] = 1746,
  [SMALL_STATE(48)] = 1776,
  [SMALL_STATE(49)] = 1810,
  [SMALL_STATE(50)] = 1840,
  [SMALL_STATE(51)] = 1874,
  [SMALL_STATE(52)] = 1931,
  [SMALL_STATE(53)] = 1957,
  [SMALL_STATE(54)] = 1987,
  [SMALL_STATE(55)] = 2013,
  [SMALL_STATE(56)] = 2067,
  [SMALL_STATE(57)] = 2093,
  [SMALL_STATE(58)] = 2118,
  [SMALL_STATE(59)] = 2155,
  [SMALL_STATE(60)] = 2182,
  [SMALL_STATE(61)] = 2221,
  [SMALL_STATE(62)] = 2258,
  [SMALL_STATE(63)] = 2287,
  [SMALL_STATE(64)] = 2316,
  [SMALL_STATE(65)] = 2353,
  [SMALL_STATE(66)] = 2384,
  [SMALL_STATE(67)] = 2408,
  [SMALL_STATE(68)] = 2436,
  [SMALL_STATE(69)] = 2460,
  [SMALL_STATE(70)] = 2486,
  [SMALL_STATE(71)] = 2510,
  [SMALL_STATE(72)] = 2534,
  [SMALL_STATE(73)] = 2558,
  [SMALL_STATE(74)] = 2582,
  [SMALL_STATE(75)] = 2610,
  [SMALL_STATE(76)] = 2638,
  [SMALL_STATE(77)] = 2662,
  [SMALL_STATE(78)] = 2686,
  [SMALL_STATE(79)] = 2710,
  [SMALL_STATE(80)] = 2734,
  [SMALL_STATE(81)] = 2786,
  [SMALL_STATE(82)] = 2810,
  [SMALL_STATE(83)] = 2834,
  [SMALL_STATE(84)] = 2862,
  [SMALL_STATE(85)] = 2886,
  [SMALL_STATE(86)] = 2910,
  [SMALL_STATE(87)] = 2938,
  [SMALL_STATE(88)] = 2962,
  [SMALL_STATE(89)] = 2990,
  [SMALL_STATE(90)] = 3014,
  [SMALL_STATE(91)] = 3042,
  [SMALL_STATE(92)] = 3073,
  [SMALL_STATE(93)] = 3104,
  [SMALL_STATE(94)] = 3129,
  [SMALL_STATE(95)] = 3180,
  [SMALL_STATE(96)] = 3203,
  [SMALL_STATE(97)] = 3234,
  [SMALL_STATE(98)] = 3281,
  [SMALL_STATE(99)] = 3312,
  [SMALL_STATE(100)] = 3339,
  [SMALL_STATE(101)] = 3362,
  [SMALL_STATE(102)] = 3393,
  [SMALL_STATE(103)] = 3440,
  [SMALL_STATE(104)] = 3487,
  [SMALL_STATE(105)] = 3540,
  [SMALL_STATE(106)] = 3571,
  [SMALL_STATE(107)] = 3602,
  [SMALL_STATE(108)] = 3649,
  [SMALL_STATE(109)] = 3696,
  [SMALL_STATE(110)] = 3743,
  [SMALL_STATE(111)] = 3768,
  [SMALL_STATE(112)] = 3799,
  [SMALL_STATE(113)] = 3846,
  [SMALL_STATE(114)] = 3872,
  [SMALL_STATE(115)] = 3894,
  [SMALL_STATE(116)] = 3920,
  [SMALL_STATE(117)] = 3948,
  [SMALL_STATE(118)] = 3974,
  [SMALL_STATE(119)] = 3996,
  [SMALL_STATE(120)] = 4020,
  [SMALL_STATE(121)] = 4046,
  [SMALL_STATE(122)] = 4068,
  [SMALL_STATE(123)] = 4094,
  [SMALL_STATE(124)] = 4122,
  [SMALL_STATE(125)] = 4144,
  [SMALL_STATE(126)] = 4166,
  [SMALL_STATE(127)] = 4192,
  [SMALL_STATE(128)] = 4218,
  [SMALL_STATE(129)] = 4244,
  [SMALL_STATE(130)] = 4266,
  [SMALL_STATE(131)] = 4288,
  [SMALL_STATE(132)] = 4310,
  [SMALL_STATE(133)] = 4332,
  [SMALL_STATE(134)] = 4358,
  [SMALL_STATE(135)] = 4384,
  [SMALL_STATE(136)] = 4410,
  [SMALL_STATE(137)] = 4438,
  [SMALL_STATE(138)] = 4464,
  [SMALL_STATE(139)] = 4486,
  [SMALL_STATE(140)] = 4514,
  [SMALL_STATE(141)] = 4540,
  [SMALL_STATE(142)] = 4566,
  [SMALL_STATE(143)] = 4592,
  [SMALL_STATE(144)] = 4620,
  [SMALL_STATE(145)] = 4646,
  [SMALL_STATE(146)] = 4672,
  [SMALL_STATE(147)] = 4698,
  [SMALL_STATE(148)] = 4724,
  [SMALL_STATE(149)] = 4746,
  [SMALL_STATE(150)] = 4772,
  [SMALL_STATE(151)] = 4795,
  [SMALL_STATE(152)] = 4820,
  [SMALL_STATE(153)] = 4841,
  [SMALL_STATE(154)] = 4862,
  [SMALL_STATE(155)] = 4887,
  [SMALL_STATE(156)] = 4912,
  [SMALL_STATE(157)] = 4937,
  [SMALL_STATE(158)] = 4962,
  [SMALL_STATE(159)] = 4987,
  [SMALL_STATE(160)] = 5012,
  [SMALL_STATE(161)] = 5033,
  [SMALL_STATE(162)] = 5058,
  [SMALL_STATE(163)] = 5079,
  [SMALL_STATE(164)] = 5104,
  [SMALL_STATE(165)] = 5149,
  [SMALL_STATE(166)] = 5170,
  [SMALL_STATE(167)] = 5191,
  [SMALL_STATE(168)] = 5216,
  [SMALL_STATE(169)] = 5241,
  [SMALL_STATE(170)] = 5262,
  [SMALL_STATE(171)] = 5283,
  [SMALL_STATE(172)] = 5308,
  [SMALL_STATE(173)] = 5329,
  [SMALL_STATE(174)] = 5354,
  [SMALL_STATE(175)] = 5379,
  [SMALL_STATE(176)] = 5404,
  [SMALL_STATE(177)] = 5429,
  [SMALL_STATE(178)] = 5454,
  [SMALL_STATE(179)] = 5475,
  [SMALL_STATE(180)] = 5500,
  [SMALL_STATE(181)] = 5521,
  [SMALL_STATE(182)] = 5542,
  [SMALL_STATE(183)] = 5567,
  [SMALL_STATE(184)] = 5588,
  [SMALL_STATE(185)] = 5613,
  [SMALL_STATE(186)] = 5638,
  [SMALL_STATE(187)] = 5663,
  [SMALL_STATE(188)] = 5688,
  [SMALL_STATE(189)] = 5713,
  [SMALL_STATE(190)] = 5738,
  [SMALL_STATE(191)] = 5763,
  [SMALL_STATE(192)] = 5784,
  [SMALL_STATE(193)] = 5807,
  [SMALL_STATE(194)] = 5828,
  [SMALL_STATE(195)] = 5849,
  [SMALL_STATE(196)] = 5874,
  [SMALL_STATE(197)] = 5899,
  [SMALL_STATE(198)] = 5920,
  [SMALL_STATE(199)] = 5941,
  [SMALL_STATE(200)] = 5966,
  [SMALL_STATE(201)] = 5991,
  [SMALL_STATE(202)] = 6016,
  [SMALL_STATE(203)] = 6041,
  [SMALL_STATE(204)] = 6066,
  [SMALL_STATE(205)] = 6091,
  [SMALL_STATE(206)] = 6112,
  [SMALL_STATE(207)] = 6137,
  [SMALL_STATE(208)] = 6157,
  [SMALL_STATE(209)] = 6177,
  [SMALL_STATE(210)] = 6197,
  [SMALL_STATE(211)] = 6239,
  [SMALL_STATE(212)] = 6259,
  [SMALL_STATE(213)] = 6281,
  [SMALL_STATE(214)] = 6301,
  [SMALL_STATE(215)] = 6323,
  [SMALL_STATE(216)] = 6343,
  [SMALL_STATE(217)] = 6387,
  [SMALL_STATE(218)] = 6409,
  [SMALL_STATE(219)] = 6431,
  [SMALL_STATE(220)] = 6451,
  [SMALL_STATE(221)] = 6473,
  [SMALL_STATE(222)] = 6495,
  [SMALL_STATE(223)] = 6515,
  [SMALL_STATE(224)] = 6557,
  [SMALL_STATE(225)] = 6577,
  [SMALL_STATE(226)] = 6599,
  [SMALL_STATE(227)] = 6641,
  [SMALL_STATE(228)] = 6683,
  [SMALL_STATE(229)] = 6703,
  [SMALL_STATE(230)] = 6722,
  [SMALL_STATE(231)] = 6741,
  [SMALL_STATE(232)] = 6760,
  [SMALL_STATE(233)] = 6779,
  [SMALL_STATE(234)] = 6798,
  [SMALL_STATE(235)] = 6817,
  [SMALL_STATE(236)] = 6836,
  [SMALL_STATE(237)] = 6855,
  [SMALL_STATE(238)] = 6874,
  [SMALL_STATE(239)] = 6893,
  [SMALL_STATE(240)] = 6912,
  [SMALL_STATE(241)] = 6931,
  [SMALL_STATE(242)] = 6952,
  [SMALL_STATE(243)] = 6971,
  [SMALL_STATE(244)] = 6990,
  [SMALL_STATE(245)] = 7009,
  [SMALL_STATE(246)] = 7028,
  [SMALL_STATE(247)] = 7047,
  [SMALL_STATE(248)] = 7066,
  [SMALL_STATE(249)] = 7085,
  [SMALL_STATE(250)] = 7104,
  [SMALL_STATE(251)] = 7145,
  [SMALL_STATE(252)] = 7164,
  [SMALL_STATE(253)] = 7183,
  [SMALL_STATE(254)] = 7202,
  [SMALL_STATE(255)] = 7221,
  [SMALL_STATE(256)] = 7240,
  [SMALL_STATE(257)] = 7259,
  [SMALL_STATE(258)] = 7278,
  [SMALL_STATE(259)] = 7297,
  [SMALL_STATE(260)] = 7316,
  [SMALL_STATE(261)] = 7335,
  [SMALL_STATE(262)] = 7354,
  [SMALL_STATE(263)] = 7373,
  [SMALL_STATE(264)] = 7392,
  [SMALL_STATE(265)] = 7411,
  [SMALL_STATE(266)] = 7430,
  [SMALL_STATE(267)] = 7449,
  [SMALL_STATE(268)] = 7468,
  [SMALL_STATE(269)] = 7487,
  [SMALL_STATE(270)] = 7506,
  [SMALL_STATE(271)] = 7525,
  [SMALL_STATE(272)] = 7544,
  [SMALL_STATE(273)] = 7563,
  [SMALL_STATE(274)] = 7582,
  [SMALL_STATE(275)] = 7601,
  [SMALL_STATE(276)] = 7620,
  [SMALL_STATE(277)] = 7639,
  [SMALL_STATE(278)] = 7658,
  [SMALL_STATE(279)] = 7677,
  [SMALL_STATE(280)] = 7696,
  [SMALL_STATE(281)] = 7715,
  [SMALL_STATE(282)] = 7734,
  [SMALL_STATE(283)] = 7753,
  [SMALL_STATE(284)] = 7772,
  [SMALL_STATE(285)] = 7791,
  [SMALL_STATE(286)] = 7810,
  [SMALL_STATE(287)] = 7829,
  [SMALL_STATE(288)] = 7848,
  [SMALL_STATE(289)] = 7867,
  [SMALL_STATE(290)] = 7886,
  [SMALL_STATE(291)] = 7905,
  [SMALL_STATE(292)] = 7924,
  [SMALL_STATE(293)] = 7943,
  [SMALL_STATE(294)] = 7962,
  [SMALL_STATE(295)] = 7981,
  [SMALL_STATE(296)] = 8000,
  [SMALL_STATE(297)] = 8019,
  [SMALL_STATE(298)] = 8038,
  [SMALL_STATE(299)] = 8057,
  [SMALL_STATE(300)] = 8076,
  [SMALL_STATE(301)] = 8095,
  [SMALL_STATE(302)] = 8114,
  [SMALL_STATE(303)] = 8133,
  [SMALL_STATE(304)] = 8152,
  [SMALL_STATE(305)] = 8171,
  [SMALL_STATE(306)] = 8190,
  [SMALL_STATE(307)] = 8209,
  [SMALL_STATE(308)] = 8228,
  [SMALL_STATE(309)] = 8247,
  [SMALL_STATE(310)] = 8266,
  [SMALL_STATE(311)] = 8285,
  [SMALL_STATE(312)] = 8304,
  [SMALL_STATE(313)] = 8323,
  [SMALL_STATE(314)] = 8342,
  [SMALL_STATE(315)] = 8361,
  [SMALL_STATE(316)] = 8380,
  [SMALL_STATE(317)] = 8399,
  [SMALL_STATE(318)] = 8418,
  [SMALL_STATE(319)] = 8437,
  [SMALL_STATE(320)] = 8456,
  [SMALL_STATE(321)] = 8475,
  [SMALL_STATE(322)] = 8494,
  [SMALL_STATE(323)] = 8513,
  [SMALL_STATE(324)] = 8532,
  [SMALL_STATE(325)] = 8551,
  [SMALL_STATE(326)] = 8570,
  [SMALL_STATE(327)] = 8589,
  [SMALL_STATE(328)] = 8608,
  [SMALL_STATE(329)] = 8627,
  [SMALL_STATE(330)] = 8646,
  [SMALL_STATE(331)] = 8665,
  [SMALL_STATE(332)] = 8684,
  [SMALL_STATE(333)] = 8703,
  [SMALL_STATE(334)] = 8722,
  [SMALL_STATE(335)] = 8741,
  [SMALL_STATE(336)] = 8760,
  [SMALL_STATE(337)] = 8779,
  [SMALL_STATE(338)] = 8798,
  [SMALL_STATE(339)] = 8817,
  [SMALL_STATE(340)] = 8836,
  [SMALL_STATE(341)] = 8855,
  [SMALL_STATE(342)] = 8874,
  [SMALL_STATE(343)] = 8893,
  [SMALL_STATE(344)] = 8912,
  [SMALL_STATE(345)] = 8931,
  [SMALL_STATE(346)] = 8950,
  [SMALL_STATE(347)] = 8969,
  [SMALL_STATE(348)] = 8988,
  [SMALL_STATE(349)] = 9007,
  [SMALL_STATE(350)] = 9048,
  [SMALL_STATE(351)] = 9067,
  [SMALL_STATE(352)] = 9086,
  [SMALL_STATE(353)] = 9127,
  [SMALL_STATE(354)] = 9146,
  [SMALL_STATE(355)] = 9165,
  [SMALL_STATE(356)] = 9184,
  [SMALL_STATE(357)] = 9203,
  [SMALL_STATE(358)] = 9222,
  [SMALL_STATE(359)] = 9241,
  [SMALL_STATE(360)] = 9260,
  [SMALL_STATE(361)] = 9279,
  [SMALL_STATE(362)] = 9297,
  [SMALL_STATE(363)] = 9335,
  [SMALL_STATE(364)] = 9373,
  [SMALL_STATE(365)] = 9411,
  [SMALL_STATE(366)] = 9449,
  [SMALL_STATE(367)] = 9487,
  [SMALL_STATE(368)] = 9525,
  [SMALL_STATE(369)] = 9563,
  [SMALL_STATE(370)] = 9601,
  [SMALL_STATE(371)] = 9639,
  [SMALL_STATE(372)] = 9677,
  [SMALL_STATE(373)] = 9715,
  [SMALL_STATE(374)] = 9753,
  [SMALL_STATE(375)] = 9791,
  [SMALL_STATE(376)] = 9829,
  [SMALL_STATE(377)] = 9867,
  [SMALL_STATE(378)] = 9905,
  [SMALL_STATE(379)] = 9925,
  [SMALL_STATE(380)] = 9956,
  [SMALL_STATE(381)] = 9987,
  [SMALL_STATE(382)] = 10014,
  [SMALL_STATE(383)] = 10037,
  [SMALL_STATE(384)] = 10060,
  [SMALL_STATE(385)] = 10085,
  [SMALL_STATE(386)] = 10116,
  [SMALL_STATE(387)] = 10141,
  [SMALL_STATE(388)] = 10166,
  [SMALL_STATE(389)] = 10191,
  [SMALL_STATE(390)] = 10208,
  [SMALL_STATE(391)] = 10225,
  [SMALL_STATE(392)] = 10250,
  [SMALL_STATE(393)] = 10281,
  [SMALL_STATE(394)] = 10303,
  [SMALL_STATE(395)] = 10319,
  [SMALL_STATE(396)] = 10347,
  [SMALL_STATE(397)] = 10363,
  [SMALL_STATE(398)] = 10387,
  [SMALL_STATE(399)] = 10409,
  [SMALL_STATE(400)] = 10434,
  [SMALL_STATE(401)] = 10459,
  [SMALL_STATE(402)] = 10481,
  [SMALL_STATE(403)] = 10499,
  [SMALL_STATE(404)] = 10521,
  [SMALL_STATE(405)] = 10541,
  [SMALL_STATE(406)] = 10561,
  [SMALL_STATE(407)] = 10579,
  [SMALL_STATE(408)] = 10597,
  [SMALL_STATE(409)] = 10617,
  [SMALL_STATE(410)] = 10636,
  [SMALL_STATE(411)] = 10655,
  [SMALL_STATE(412)] = 10674,
  [SMALL_STATE(413)] = 10693,
  [SMALL_STATE(414)] = 10712,
  [SMALL_STATE(415)] = 10731,
  [SMALL_STATE(416)] = 10748,
  [SMALL_STATE(417)] = 10767,
  [SMALL_STATE(418)] = 10784,
  [SMALL_STATE(419)] = 10803,
  [SMALL_STATE(420)] = 10822,
  [SMALL_STATE(421)] = 10841,
  [SMALL_STATE(422)] = 10860,
  [SMALL_STATE(423)] = 10879,
  [SMALL_STATE(424)] = 10890,
  [SMALL_STATE(425)] = 10909,
  [SMALL_STATE(426)] = 10928,
  [SMALL_STATE(427)] = 10947,
  [SMALL_STATE(428)] = 10966,
  [SMALL_STATE(429)] = 10977,
  [SMALL_STATE(430)] = 10996,
  [SMALL_STATE(431)] = 11010,
  [SMALL_STATE(432)] = 11026,
  [SMALL_STATE(433)] = 11042,
  [SMALL_STATE(434)] = 11058,
  [SMALL_STATE(435)] = 11068,
  [SMALL_STATE(436)] = 11084,
  [SMALL_STATE(437)] = 11100,
  [SMALL_STATE(438)] = 11116,
  [SMALL_STATE(439)] = 11130,
  [SMALL_STATE(440)] = 11146,
  [SMALL_STATE(441)] = 11162,
  [SMALL_STATE(442)] = 11172,
  [SMALL_STATE(443)] = 11180,
  [SMALL_STATE(444)] = 11196,
  [SMALL_STATE(445)] = 11212,
  [SMALL_STATE(446)] = 11224,
  [SMALL_STATE(447)] = 11234,
  [SMALL_STATE(448)] = 11242,
  [SMALL_STATE(449)] = 11250,
  [SMALL_STATE(450)] = 11266,
  [SMALL_STATE(451)] = 11280,
  [SMALL_STATE(452)] = 11288,
  [SMALL_STATE(453)] = 11296,
  [SMALL_STATE(454)] = 11312,
  [SMALL_STATE(455)] = 11328,
  [SMALL_STATE(456)] = 11344,
  [SMALL_STATE(457)] = 11354,
  [SMALL_STATE(458)] = 11370,
  [SMALL_STATE(459)] = 11378,
  [SMALL_STATE(460)] = 11394,
  [SMALL_STATE(461)] = 11402,
  [SMALL_STATE(462)] = 11418,
  [SMALL_STATE(463)] = 11434,
  [SMALL_STATE(464)] = 11446,
  [SMALL_STATE(465)] = 11462,
  [SMALL_STATE(466)] = 11478,
  [SMALL_STATE(467)] = 11494,
  [SMALL_STATE(468)] = 11504,
  [SMALL_STATE(469)] = 11520,
  [SMALL_STATE(470)] = 11536,
  [SMALL_STATE(471)] = 11548,
  [SMALL_STATE(472)] = 11564,
  [SMALL_STATE(473)] = 11580,
  [SMALL_STATE(474)] = 11596,
  [SMALL_STATE(475)] = 11612,
  [SMALL_STATE(476)] = 11628,
  [SMALL_STATE(477)] = 11641,
  [SMALL_STATE(478)] = 11650,
  [SMALL_STATE(479)] = 11663,
  [SMALL_STATE(480)] = 11676,
  [SMALL_STATE(481)] = 11689,
  [SMALL_STATE(482)] = 11702,
  [SMALL_STATE(483)] = 11711,
  [SMALL_STATE(484)] = 11724,
  [SMALL_STATE(485)] = 11737,
  [SMALL_STATE(486)] = 11750,
  [SMALL_STATE(487)] = 11763,
  [SMALL_STATE(488)] = 11774,
  [SMALL_STATE(489)] = 11787,
  [SMALL_STATE(490)] = 11800,
  [SMALL_STATE(491)] = 11813,
  [SMALL_STATE(492)] = 11826,
  [SMALL_STATE(493)] = 11839,
  [SMALL_STATE(494)] = 11852,
  [SMALL_STATE(495)] = 11865,
  [SMALL_STATE(496)] = 11878,
  [SMALL_STATE(497)] = 11891,
  [SMALL_STATE(498)] = 11904,
  [SMALL_STATE(499)] = 11917,
  [SMALL_STATE(500)] = 11930,
  [SMALL_STATE(501)] = 11943,
  [SMALL_STATE(502)] = 11956,
  [SMALL_STATE(503)] = 11969,
  [SMALL_STATE(504)] = 11982,
  [SMALL_STATE(505)] = 11995,
  [SMALL_STATE(506)] = 12008,
  [SMALL_STATE(507)] = 12019,
  [SMALL_STATE(508)] = 12032,
  [SMALL_STATE(509)] = 12045,
  [SMALL_STATE(510)] = 12058,
  [SMALL_STATE(511)] = 12071,
  [SMALL_STATE(512)] = 12084,
  [SMALL_STATE(513)] = 12097,
  [SMALL_STATE(514)] = 12104,
  [SMALL_STATE(515)] = 12117,
  [SMALL_STATE(516)] = 12130,
  [SMALL_STATE(517)] = 12143,
  [SMALL_STATE(518)] = 12156,
  [SMALL_STATE(519)] = 12169,
  [SMALL_STATE(520)] = 12182,
  [SMALL_STATE(521)] = 12195,
  [SMALL_STATE(522)] = 12208,
  [SMALL_STATE(523)] = 12221,
  [SMALL_STATE(524)] = 12234,
  [SMALL_STATE(525)] = 12247,
  [SMALL_STATE(526)] = 12260,
  [SMALL_STATE(527)] = 12273,
  [SMALL_STATE(528)] = 12286,
  [SMALL_STATE(529)] = 12299,
  [SMALL_STATE(530)] = 12312,
  [SMALL_STATE(531)] = 12325,
  [SMALL_STATE(532)] = 12332,
  [SMALL_STATE(533)] = 12345,
  [SMALL_STATE(534)] = 12358,
  [SMALL_STATE(535)] = 12371,
  [SMALL_STATE(536)] = 12384,
  [SMALL_STATE(537)] = 12397,
  [SMALL_STATE(538)] = 12410,
  [SMALL_STATE(539)] = 12423,
  [SMALL_STATE(540)] = 12436,
  [SMALL_STATE(541)] = 12449,
  [SMALL_STATE(542)] = 12462,
  [SMALL_STATE(543)] = 12475,
  [SMALL_STATE(544)] = 12488,
  [SMALL_STATE(545)] = 12501,
  [SMALL_STATE(546)] = 12514,
  [SMALL_STATE(547)] = 12525,
  [SMALL_STATE(548)] = 12538,
  [SMALL_STATE(549)] = 12551,
  [SMALL_STATE(550)] = 12562,
  [SMALL_STATE(551)] = 12572,
  [SMALL_STATE(552)] = 12582,
  [SMALL_STATE(553)] = 12592,
  [SMALL_STATE(554)] = 12602,
  [SMALL_STATE(555)] = 12612,
  [SMALL_STATE(556)] = 12622,
  [SMALL_STATE(557)] = 12632,
  [SMALL_STATE(558)] = 12642,
  [SMALL_STATE(559)] = 12652,
  [SMALL_STATE(560)] = 12662,
  [SMALL_STATE(561)] = 12672,
  [SMALL_STATE(562)] = 12682,
  [SMALL_STATE(563)] = 12692,
  [SMALL_STATE(564)] = 12702,
  [SMALL_STATE(565)] = 12712,
  [SMALL_STATE(566)] = 12722,
  [SMALL_STATE(567)] = 12732,
  [SMALL_STATE(568)] = 12742,
  [SMALL_STATE(569)] = 12752,
  [SMALL_STATE(570)] = 12762,
  [SMALL_STATE(571)] = 12772,
  [SMALL_STATE(572)] = 12782,
  [SMALL_STATE(573)] = 12792,
  [SMALL_STATE(574)] = 12802,
  [SMALL_STATE(575)] = 12812,
  [SMALL_STATE(576)] = 12822,
  [SMALL_STATE(577)] = 12832,
  [SMALL_STATE(578)] = 12838,
  [SMALL_STATE(579)] = 12848,
  [SMALL_STATE(580)] = 12858,
  [SMALL_STATE(581)] = 12868,
  [SMALL_STATE(582)] = 12878,
  [SMALL_STATE(583)] = 12888,
  [SMALL_STATE(584)] = 12896,
  [SMALL_STATE(585)] = 12906,
  [SMALL_STATE(586)] = 12916,
  [SMALL_STATE(587)] = 12926,
  [SMALL_STATE(588)] = 12934,
  [SMALL_STATE(589)] = 12944,
  [SMALL_STATE(590)] = 12954,
  [SMALL_STATE(591)] = 12964,
  [SMALL_STATE(592)] = 12974,
  [SMALL_STATE(593)] = 12982,
  [SMALL_STATE(594)] = 12992,
  [SMALL_STATE(595)] = 13002,
  [SMALL_STATE(596)] = 13012,
  [SMALL_STATE(597)] = 13022,
  [SMALL_STATE(598)] = 13032,
  [SMALL_STATE(599)] = 13042,
  [SMALL_STATE(600)] = 13052,
  [SMALL_STATE(601)] = 13062,
  [SMALL_STATE(602)] = 13072,
  [SMALL_STATE(603)] = 13082,
  [SMALL_STATE(604)] = 13092,
  [SMALL_STATE(605)] = 13102,
  [SMALL_STATE(606)] = 13112,
  [SMALL_STATE(607)] = 13122,
  [SMALL_STATE(608)] = 13132,
  [SMALL_STATE(609)] = 13142,
  [SMALL_STATE(610)] = 13152,
  [SMALL_STATE(611)] = 13162,
  [SMALL_STATE(612)] = 13172,
  [SMALL_STATE(613)] = 13178,
  [SMALL_STATE(614)] = 13188,
  [SMALL_STATE(615)] = 13198,
  [SMALL_STATE(616)] = 13208,
  [SMALL_STATE(617)] = 13218,
  [SMALL_STATE(618)] = 13228,
  [SMALL_STATE(619)] = 13238,
  [SMALL_STATE(620)] = 13248,
  [SMALL_STATE(621)] = 13258,
  [SMALL_STATE(622)] = 13268,
  [SMALL_STATE(623)] = 13278,
  [SMALL_STATE(624)] = 13288,
  [SMALL_STATE(625)] = 13298,
  [SMALL_STATE(626)] = 13308,
  [SMALL_STATE(627)] = 13318,
  [SMALL_STATE(628)] = 13328,
  [SMALL_STATE(629)] = 13338,
  [SMALL_STATE(630)] = 13348,
  [SMALL_STATE(631)] = 13358,
  [SMALL_STATE(632)] = 13368,
  [SMALL_STATE(633)] = 13378,
  [SMALL_STATE(634)] = 13388,
  [SMALL_STATE(635)] = 13398,
  [SMALL_STATE(636)] = 13408,
  [SMALL_STATE(637)] = 13418,
  [SMALL_STATE(638)] = 13428,
  [SMALL_STATE(639)] = 13438,
  [SMALL_STATE(640)] = 13448,
  [SMALL_STATE(641)] = 13458,
  [SMALL_STATE(642)] = 13468,
  [SMALL_STATE(643)] = 13478,
  [SMALL_STATE(644)] = 13488,
  [SMALL_STATE(645)] = 13498,
  [SMALL_STATE(646)] = 13508,
  [SMALL_STATE(647)] = 13518,
  [SMALL_STATE(648)] = 13528,
  [SMALL_STATE(649)] = 13538,
  [SMALL_STATE(650)] = 13548,
  [SMALL_STATE(651)] = 13558,
  [SMALL_STATE(652)] = 13568,
  [SMALL_STATE(653)] = 13578,
  [SMALL_STATE(654)] = 13588,
  [SMALL_STATE(655)] = 13598,
  [SMALL_STATE(656)] = 13608,
  [SMALL_STATE(657)] = 13618,
  [SMALL_STATE(658)] = 13628,
  [SMALL_STATE(659)] = 13638,
  [SMALL_STATE(660)] = 13648,
  [SMALL_STATE(661)] = 13658,
  [SMALL_STATE(662)] = 13668,
  [SMALL_STATE(663)] = 13678,
  [SMALL_STATE(664)] = 13688,
  [SMALL_STATE(665)] = 13698,
  [SMALL_STATE(666)] = 13708,
  [SMALL_STATE(667)] = 13718,
  [SMALL_STATE(668)] = 13728,
  [SMALL_STATE(669)] = 13738,
  [SMALL_STATE(670)] = 13748,
  [SMALL_STATE(671)] = 13758,
  [SMALL_STATE(672)] = 13768,
  [SMALL_STATE(673)] = 13778,
  [SMALL_STATE(674)] = 13788,
  [SMALL_STATE(675)] = 13798,
  [SMALL_STATE(676)] = 13808,
  [SMALL_STATE(677)] = 13818,
  [SMALL_STATE(678)] = 13828,
  [SMALL_STATE(679)] = 13836,
  [SMALL_STATE(680)] = 13846,
  [SMALL_STATE(681)] = 13856,
  [SMALL_STATE(682)] = 13866,
  [SMALL_STATE(683)] = 13876,
  [SMALL_STATE(684)] = 13886,
  [SMALL_STATE(685)] = 13896,
  [SMALL_STATE(686)] = 13906,
  [SMALL_STATE(687)] = 13916,
  [SMALL_STATE(688)] = 13924,
  [SMALL_STATE(689)] = 13934,
  [SMALL_STATE(690)] = 13944,
  [SMALL_STATE(691)] = 13954,
  [SMALL_STATE(692)] = 13964,
  [SMALL_STATE(693)] = 13974,
  [SMALL_STATE(694)] = 13984,
  [SMALL_STATE(695)] = 13994,
  [SMALL_STATE(696)] = 14004,
  [SMALL_STATE(697)] = 14014,
  [SMALL_STATE(698)] = 14024,
  [SMALL_STATE(699)] = 14034,
  [SMALL_STATE(700)] = 14044,
  [SMALL_STATE(701)] = 14051,
  [SMALL_STATE(702)] = 14058,
  [SMALL_STATE(703)] = 14065,
  [SMALL_STATE(704)] = 14072,
  [SMALL_STATE(705)] = 14079,
  [SMALL_STATE(706)] = 14086,
  [SMALL_STATE(707)] = 14091,
  [SMALL_STATE(708)] = 14098,
  [SMALL_STATE(709)] = 14105,
  [SMALL_STATE(710)] = 14112,
  [SMALL_STATE(711)] = 14117,
  [SMALL_STATE(712)] = 14124,
  [SMALL_STATE(713)] = 14131,
  [SMALL_STATE(714)] = 14138,
  [SMALL_STATE(715)] = 14143,
  [SMALL_STATE(716)] = 14150,
  [SMALL_STATE(717)] = 14157,
  [SMALL_STATE(718)] = 14164,
  [SMALL_STATE(719)] = 14171,
  [SMALL_STATE(720)] = 14178,
  [SMALL_STATE(721)] = 14183,
  [SMALL_STATE(722)] = 14188,
  [SMALL_STATE(723)] = 14193,
  [SMALL_STATE(724)] = 14200,
  [SMALL_STATE(725)] = 14207,
  [SMALL_STATE(726)] = 14214,
  [SMALL_STATE(727)] = 14221,
  [SMALL_STATE(728)] = 14226,
  [SMALL_STATE(729)] = 14233,
  [SMALL_STATE(730)] = 14240,
  [SMALL_STATE(731)] = 14247,
  [SMALL_STATE(732)] = 14254,
  [SMALL_STATE(733)] = 14261,
  [SMALL_STATE(734)] = 14268,
  [SMALL_STATE(735)] = 14275,
  [SMALL_STATE(736)] = 14282,
  [SMALL_STATE(737)] = 14289,
  [SMALL_STATE(738)] = 14294,
  [SMALL_STATE(739)] = 14299,
  [SMALL_STATE(740)] = 14304,
  [SMALL_STATE(741)] = 14311,
  [SMALL_STATE(742)] = 14318,
  [SMALL_STATE(743)] = 14325,
  [SMALL_STATE(744)] = 14332,
  [SMALL_STATE(745)] = 14339,
  [SMALL_STATE(746)] = 14346,
  [SMALL_STATE(747)] = 14353,
  [SMALL_STATE(748)] = 14360,
  [SMALL_STATE(749)] = 14367,
  [SMALL_STATE(750)] = 14374,
  [SMALL_STATE(751)] = 14381,
  [SMALL_STATE(752)] = 14386,
  [SMALL_STATE(753)] = 14393,
  [SMALL_STATE(754)] = 14398,
  [SMALL_STATE(755)] = 14403,
  [SMALL_STATE(756)] = 14410,
  [SMALL_STATE(757)] = 14417,
  [SMALL_STATE(758)] = 14422,
  [SMALL_STATE(759)] = 14429,
  [SMALL_STATE(760)] = 14436,
  [SMALL_STATE(761)] = 14443,
  [SMALL_STATE(762)] = 14450,
  [SMALL_STATE(763)] = 14457,
  [SMALL_STATE(764)] = 14464,
  [SMALL_STATE(765)] = 14471,
  [SMALL_STATE(766)] = 14478,
  [SMALL_STATE(767)] = 14483,
  [SMALL_STATE(768)] = 14490,
  [SMALL_STATE(769)] = 14495,
  [SMALL_STATE(770)] = 14502,
  [SMALL_STATE(771)] = 14509,
  [SMALL_STATE(772)] = 14516,
  [SMALL_STATE(773)] = 14523,
  [SMALL_STATE(774)] = 14528,
  [SMALL_STATE(775)] = 14535,
  [SMALL_STATE(776)] = 14542,
  [SMALL_STATE(777)] = 14547,
  [SMALL_STATE(778)] = 14552,
  [SMALL_STATE(779)] = 14559,
  [SMALL_STATE(780)] = 14566,
  [SMALL_STATE(781)] = 14571,
  [SMALL_STATE(782)] = 14576,
  [SMALL_STATE(783)] = 14581,
  [SMALL_STATE(784)] = 14586,
  [SMALL_STATE(785)] = 14593,
  [SMALL_STATE(786)] = 14600,
  [SMALL_STATE(787)] = 14605,
  [SMALL_STATE(788)] = 14612,
  [SMALL_STATE(789)] = 14619,
  [SMALL_STATE(790)] = 14626,
  [SMALL_STATE(791)] = 14631,
  [SMALL_STATE(792)] = 14638,
  [SMALL_STATE(793)] = 14643,
  [SMALL_STATE(794)] = 14650,
  [SMALL_STATE(795)] = 14655,
  [SMALL_STATE(796)] = 14662,
  [SMALL_STATE(797)] = 14669,
  [SMALL_STATE(798)] = 14676,
  [SMALL_STATE(799)] = 14681,
  [SMALL_STATE(800)] = 14688,
  [SMALL_STATE(801)] = 14695,
  [SMALL_STATE(802)] = 14702,
  [SMALL_STATE(803)] = 14709,
  [SMALL_STATE(804)] = 14716,
  [SMALL_STATE(805)] = 14721,
  [SMALL_STATE(806)] = 14728,
  [SMALL_STATE(807)] = 14733,
  [SMALL_STATE(808)] = 14740,
  [SMALL_STATE(809)] = 14747,
  [SMALL_STATE(810)] = 14754,
  [SMALL_STATE(811)] = 14761,
  [SMALL_STATE(812)] = 14768,
  [SMALL_STATE(813)] = 14775,
  [SMALL_STATE(814)] = 14782,
  [SMALL_STATE(815)] = 14789,
  [SMALL_STATE(816)] = 14796,
  [SMALL_STATE(817)] = 14801,
  [SMALL_STATE(818)] = 14808,
  [SMALL_STATE(819)] = 14815,
  [SMALL_STATE(820)] = 14822,
  [SMALL_STATE(821)] = 14829,
  [SMALL_STATE(822)] = 14834,
  [SMALL_STATE(823)] = 14841,
  [SMALL_STATE(824)] = 14848,
  [SMALL_STATE(825)] = 14855,
  [SMALL_STATE(826)] = 14860,
  [SMALL_STATE(827)] = 14867,
  [SMALL_STATE(828)] = 14872,
  [SMALL_STATE(829)] = 14879,
  [SMALL_STATE(830)] = 14886,
  [SMALL_STATE(831)] = 14893,
  [SMALL_STATE(832)] = 14900,
  [SMALL_STATE(833)] = 14907,
  [SMALL_STATE(834)] = 14914,
  [SMALL_STATE(835)] = 14921,
  [SMALL_STATE(836)] = 14928,
  [SMALL_STATE(837)] = 14933,
  [SMALL_STATE(838)] = 14940,
  [SMALL_STATE(839)] = 14947,
  [SMALL_STATE(840)] = 14954,
  [SMALL_STATE(841)] = 14961,
  [SMALL_STATE(842)] = 14968,
  [SMALL_STATE(843)] = 14973,
  [SMALL_STATE(844)] = 14980,
  [SMALL_STATE(845)] = 14985,
  [SMALL_STATE(846)] = 14992,
  [SMALL_STATE(847)] = 14999,
  [SMALL_STATE(848)] = 15004,
  [SMALL_STATE(849)] = 15011,
  [SMALL_STATE(850)] = 15018,
  [SMALL_STATE(851)] = 15022,
  [SMALL_STATE(852)] = 15026,
  [SMALL_STATE(853)] = 15030,
  [SMALL_STATE(854)] = 15034,
  [SMALL_STATE(855)] = 15038,
  [SMALL_STATE(856)] = 15042,
  [SMALL_STATE(857)] = 15046,
  [SMALL_STATE(858)] = 15050,
  [SMALL_STATE(859)] = 15054,
  [SMALL_STATE(860)] = 15058,
  [SMALL_STATE(861)] = 15062,
  [SMALL_STATE(862)] = 15066,
  [SMALL_STATE(863)] = 15070,
  [SMALL_STATE(864)] = 15074,
  [SMALL_STATE(865)] = 15078,
  [SMALL_STATE(866)] = 15082,
  [SMALL_STATE(867)] = 15086,
  [SMALL_STATE(868)] = 15090,
  [SMALL_STATE(869)] = 15094,
  [SMALL_STATE(870)] = 15098,
  [SMALL_STATE(871)] = 15102,
  [SMALL_STATE(872)] = 15106,
  [SMALL_STATE(873)] = 15110,
  [SMALL_STATE(874)] = 15114,
  [SMALL_STATE(875)] = 15118,
  [SMALL_STATE(876)] = 15122,
  [SMALL_STATE(877)] = 15126,
  [SMALL_STATE(878)] = 15130,
  [SMALL_STATE(879)] = 15134,
  [SMALL_STATE(880)] = 15138,
  [SMALL_STATE(881)] = 15142,
  [SMALL_STATE(882)] = 15146,
  [SMALL_STATE(883)] = 15150,
  [SMALL_STATE(884)] = 15154,
  [SMALL_STATE(885)] = 15158,
  [SMALL_STATE(886)] = 15162,
  [SMALL_STATE(887)] = 15166,
  [SMALL_STATE(888)] = 15170,
  [SMALL_STATE(889)] = 15174,
  [SMALL_STATE(890)] = 15178,
  [SMALL_STATE(891)] = 15182,
  [SMALL_STATE(892)] = 15186,
  [SMALL_STATE(893)] = 15190,
  [SMALL_STATE(894)] = 15194,
  [SMALL_STATE(895)] = 15198,
  [SMALL_STATE(896)] = 15202,
  [SMALL_STATE(897)] = 15206,
  [SMALL_STATE(898)] = 15210,
  [SMALL_STATE(899)] = 15214,
  [SMALL_STATE(900)] = 15218,
  [SMALL_STATE(901)] = 15222,
  [SMALL_STATE(902)] = 15226,
  [SMALL_STATE(903)] = 15230,
  [SMALL_STATE(904)] = 15234,
  [SMALL_STATE(905)] = 15238,
  [SMALL_STATE(906)] = 15242,
  [SMALL_STATE(907)] = 15246,
  [SMALL_STATE(908)] = 15250,
  [SMALL_STATE(909)] = 15254,
  [SMALL_STATE(910)] = 15258,
  [SMALL_STATE(911)] = 15262,
  [SMALL_STATE(912)] = 15266,
  [SMALL_STATE(913)] = 15270,
  [SMALL_STATE(914)] = 15274,
  [SMALL_STATE(915)] = 15278,
  [SMALL_STATE(916)] = 15282,
  [SMALL_STATE(917)] = 15286,
  [SMALL_STATE(918)] = 15290,
  [SMALL_STATE(919)] = 15294,
  [SMALL_STATE(920)] = 15298,
  [SMALL_STATE(921)] = 15302,
  [SMALL_STATE(922)] = 15306,
  [SMALL_STATE(923)] = 15310,
  [SMALL_STATE(924)] = 15314,
  [SMALL_STATE(925)] = 15318,
  [SMALL_STATE(926)] = 15322,
  [SMALL_STATE(927)] = 15326,
  [SMALL_STATE(928)] = 15330,
  [SMALL_STATE(929)] = 15334,
  [SMALL_STATE(930)] = 15338,
  [SMALL_STATE(931)] = 15342,
  [SMALL_STATE(932)] = 15346,
  [SMALL_STATE(933)] = 15350,
  [SMALL_STATE(934)] = 15354,
  [SMALL_STATE(935)] = 15358,
  [SMALL_STATE(936)] = 15362,
  [SMALL_STATE(937)] = 15366,
  [SMALL_STATE(938)] = 15370,
  [SMALL_STATE(939)] = 15374,
  [SMALL_STATE(940)] = 15378,
  [SMALL_STATE(941)] = 15382,
  [SMALL_STATE(942)] = 15386,
  [SMALL_STATE(943)] = 15390,
  [SMALL_STATE(944)] = 15394,
  [SMALL_STATE(945)] = 15398,
  [SMALL_STATE(946)] = 15402,
  [SMALL_STATE(947)] = 15406,
  [SMALL_STATE(948)] = 15410,
  [SMALL_STATE(949)] = 15414,
  [SMALL_STATE(950)] = 15418,
  [SMALL_STATE(951)] = 15422,
  [SMALL_STATE(952)] = 15426,
  [SMALL_STATE(953)] = 15430,
  [SMALL_STATE(954)] = 15434,
  [SMALL_STATE(955)] = 15438,
  [SMALL_STATE(956)] = 15442,
  [SMALL_STATE(957)] = 15446,
  [SMALL_STATE(958)] = 15450,
  [SMALL_STATE(959)] = 15454,
  [SMALL_STATE(960)] = 15458,
  [SMALL_STATE(961)] = 15462,
  [SMALL_STATE(962)] = 15466,
  [SMALL_STATE(963)] = 15470,
  [SMALL_STATE(964)] = 15474,
  [SMALL_STATE(965)] = 15478,
  [SMALL_STATE(966)] = 15482,
  [SMALL_STATE(967)] = 15486,
  [SMALL_STATE(968)] = 15490,
  [SMALL_STATE(969)] = 15494,
  [SMALL_STATE(970)] = 15498,
  [SMALL_STATE(971)] = 15502,
  [SMALL_STATE(972)] = 15506,
  [SMALL_STATE(973)] = 15510,
  [SMALL_STATE(974)] = 15514,
  [SMALL_STATE(975)] = 15518,
  [SMALL_STATE(976)] = 15522,
  [SMALL_STATE(977)] = 15526,
  [SMALL_STATE(978)] = 15530,
  [SMALL_STATE(979)] = 15534,
  [SMALL_STATE(980)] = 15538,
  [SMALL_STATE(981)] = 15542,
  [SMALL_STATE(982)] = 15546,
  [SMALL_STATE(983)] = 15550,
  [SMALL_STATE(984)] = 15554,
  [SMALL_STATE(985)] = 15558,
  [SMALL_STATE(986)] = 15562,
  [SMALL_STATE(987)] = 15566,
  [SMALL_STATE(988)] = 15570,
  [SMALL_STATE(989)] = 15574,
  [SMALL_STATE(990)] = 15578,
  [SMALL_STATE(991)] = 15582,
  [SMALL_STATE(992)] = 15586,
  [SMALL_STATE(993)] = 15590,
  [SMALL_STATE(994)] = 15594,
  [SMALL_STATE(995)] = 15598,
  [SMALL_STATE(996)] = 15602,
  [SMALL_STATE(997)] = 15606,
  [SMALL_STATE(998)] = 15610,
  [SMALL_STATE(999)] = 15614,
  [SMALL_STATE(1000)] = 15618,
  [SMALL_STATE(1001)] = 15622,
  [SMALL_STATE(1002)] = 15626,
  [SMALL_STATE(1003)] = 15630,
  [SMALL_STATE(1004)] = 15634,
  [SMALL_STATE(1005)] = 15638,
  [SMALL_STATE(1006)] = 15642,
  [SMALL_STATE(1007)] = 15646,
  [SMALL_STATE(1008)] = 15650,
  [SMALL_STATE(1009)] = 15654,
  [SMALL_STATE(1010)] = 15658,
  [SMALL_STATE(1011)] = 15662,
  [SMALL_STATE(1012)] = 15666,
  [SMALL_STATE(1013)] = 15670,
  [SMALL_STATE(1014)] = 15674,
  [SMALL_STATE(1015)] = 15678,
  [SMALL_STATE(1016)] = 15682,
  [SMALL_STATE(1017)] = 15686,
  [SMALL_STATE(1018)] = 15690,
  [SMALL_STATE(1019)] = 15694,
  [SMALL_STATE(1020)] = 15698,
  [SMALL_STATE(1021)] = 15702,
  [SMALL_STATE(1022)] = 15706,
  [SMALL_STATE(1023)] = 15710,
  [SMALL_STATE(1024)] = 15714,
  [SMALL_STATE(1025)] = 15718,
  [SMALL_STATE(1026)] = 15722,
  [SMALL_STATE(1027)] = 15726,
  [SMALL_STATE(1028)] = 15730,
  [SMALL_STATE(1029)] = 15734,
  [SMALL_STATE(1030)] = 15738,
  [SMALL_STATE(1031)] = 15742,
  [SMALL_STATE(1032)] = 15746,
  [SMALL_STATE(1033)] = 15750,
  [SMALL_STATE(1034)] = 15754,
  [SMALL_STATE(1035)] = 15758,
  [SMALL_STATE(1036)] = 15762,
  [SMALL_STATE(1037)] = 15766,
  [SMALL_STATE(1038)] = 15770,
  [SMALL_STATE(1039)] = 15774,
  [SMALL_STATE(1040)] = 15778,
  [SMALL_STATE(1041)] = 15782,
  [SMALL_STATE(1042)] = 15786,
  [SMALL_STATE(1043)] = 15790,
  [SMALL_STATE(1044)] = 15794,
  [SMALL_STATE(1045)] = 15798,
  [SMALL_STATE(1046)] = 15802,
  [SMALL_STATE(1047)] = 15806,
  [SMALL_STATE(1048)] = 15810,
  [SMALL_STATE(1049)] = 15814,
  [SMALL_STATE(1050)] = 15818,
  [SMALL_STATE(1051)] = 15822,
  [SMALL_STATE(1052)] = 15826,
  [SMALL_STATE(1053)] = 15830,
  [SMALL_STATE(1054)] = 15834,
  [SMALL_STATE(1055)] = 15838,
  [SMALL_STATE(1056)] = 15842,
  [SMALL_STATE(1057)] = 15846,
  [SMALL_STATE(1058)] = 15850,
  [SMALL_STATE(1059)] = 15854,
  [SMALL_STATE(1060)] = 15858,
  [SMALL_STATE(1061)] = 15862,
  [SMALL_STATE(1062)] = 15866,
  [SMALL_STATE(1063)] = 15870,
  [SMALL_STATE(1064)] = 15874,
  [SMALL_STATE(1065)] = 15878,
  [SMALL_STATE(1066)] = 15882,
  [SMALL_STATE(1067)] = 15886,
  [SMALL_STATE(1068)] = 15890,
  [SMALL_STATE(1069)] = 15894,
  [SMALL_STATE(1070)] = 15898,
  [SMALL_STATE(1071)] = 15902,
  [SMALL_STATE(1072)] = 15906,
  [SMALL_STATE(1073)] = 15910,
  [SMALL_STATE(1074)] = 15914,
  [SMALL_STATE(1075)] = 15918,
  [SMALL_STATE(1076)] = 15922,
  [SMALL_STATE(1077)] = 15926,
  [SMALL_STATE(1078)] = 15930,
  [SMALL_STATE(1079)] = 15934,
  [SMALL_STATE(1080)] = 15938,
  [SMALL_STATE(1081)] = 15942,
  [SMALL_STATE(1082)] = 15946,
  [SMALL_STATE(1083)] = 15950,
  [SMALL_STATE(1084)] = 15954,
  [SMALL_STATE(1085)] = 15958,
  [SMALL_STATE(1086)] = 15962,
  [SMALL_STATE(1087)] = 15966,
  [SMALL_STATE(1088)] = 15970,
  [SMALL_STATE(1089)] = 15974,
  [SMALL_STATE(1090)] = 15978,
  [SMALL_STATE(1091)] = 15982,
  [SMALL_STATE(1092)] = 15986,
  [SMALL_STATE(1093)] = 15990,
  [SMALL_STATE(1094)] = 15994,
  [SMALL_STATE(1095)] = 15998,
  [SMALL_STATE(1096)] = 16002,
  [SMALL_STATE(1097)] = 16006,
  [SMALL_STATE(1098)] = 16010,
  [SMALL_STATE(1099)] = 16014,
  [SMALL_STATE(1100)] = 16018,
  [SMALL_STATE(1101)] = 16022,
  [SMALL_STATE(1102)] = 16026,
  [SMALL_STATE(1103)] = 16030,
  [SMALL_STATE(1104)] = 16034,
  [SMALL_STATE(1105)] = 16038,
  [SMALL_STATE(1106)] = 16042,
  [SMALL_STATE(1107)] = 16046,
  [SMALL_STATE(1108)] = 16050,
  [SMALL_STATE(1109)] = 16054,
  [SMALL_STATE(1110)] = 16058,
  [SMALL_STATE(1111)] = 16062,
  [SMALL_STATE(1112)] = 16066,
  [SMALL_STATE(1113)] = 16070,
  [SMALL_STATE(1114)] = 16074,
  [SMALL_STATE(1115)] = 16078,
  [SMALL_STATE(1116)] = 16082,
  [SMALL_STATE(1117)] = 16086,
  [SMALL_STATE(1118)] = 16090,
  [SMALL_STATE(1119)] = 16094,
  [SMALL_STATE(1120)] = 16098,
  [SMALL_STATE(1121)] = 16102,
  [SMALL_STATE(1122)] = 16106,
  [SMALL_STATE(1123)] = 16110,
  [SMALL_STATE(1124)] = 16114,
  [SMALL_STATE(1125)] = 16118,
  [SMALL_STATE(1126)] = 16122,
  [SMALL_STATE(1127)] = 16126,
  [SMALL_STATE(1128)] = 16130,
  [SMALL_STATE(1129)] = 16134,
  [SMALL_STATE(1130)] = 16138,
  [SMALL_STATE(1131)] = 16142,
  [SMALL_STATE(1132)] = 16146,
  [SMALL_STATE(1133)] = 16150,
  [SMALL_STATE(1134)] = 16154,
  [SMALL_STATE(1135)] = 16158,
  [SMALL_STATE(1136)] = 16162,
  [SMALL_STATE(1137)] = 16166,
  [SMALL_STATE(1138)] = 16170,
  [SMALL_STATE(1139)] = 16174,
  [SMALL_STATE(1140)] = 16178,
  [SMALL_STATE(1141)] = 16182,
  [SMALL_STATE(1142)] = 16186,
  [SMALL_STATE(1143)] = 16190,
  [SMALL_STATE(1144)] = 16194,
  [SMALL_STATE(1145)] = 16198,
  [SMALL_STATE(1146)] = 16202,
  [SMALL_STATE(1147)] = 16206,
  [SMALL_STATE(1148)] = 16210,
  [SMALL_STATE(1149)] = 16214,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(401),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(687),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1091),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(392),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(399),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(538),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(656),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(390),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(389),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(378),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1148),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 13),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 24),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(62),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(417),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1112),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(83),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 21),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1079),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1074),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(415),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(699),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(630),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(785),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(438),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 8),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(561),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 20),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(508),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 25),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 25),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 7),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 7),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 25),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 7),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 25),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 28),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 25),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 15),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 12),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1004),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1006),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1008),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1086),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(396),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1123),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1146),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1026),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(370),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(716),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(55),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(223),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(362),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(900),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(525),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(48),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(564),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(830),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(503),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(495),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(544),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(674),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(977),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(843),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(551),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(505),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(756),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(210),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 22),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 19),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 27),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_key, 1),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [2045] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
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
