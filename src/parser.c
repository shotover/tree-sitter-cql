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
#define STATE_COUNT 1039
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 6
#define TOKEN_COUNT 141
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
  aux_sym_drop_trigger_token1 = 92,
  aux_sym_drop_type_token1 = 93,
  aux_sym_drop_user_token1 = 94,
  aux_sym_create_function_token1 = 95,
  aux_sym_create_function_token2 = 96,
  aux_sym_create_function_token3 = 97,
  aux_sym_create_function_token4 = 98,
  aux_sym_data_type_name_token1 = 99,
  aux_sym_data_type_name_token2 = 100,
  aux_sym_data_type_name_token3 = 101,
  aux_sym_data_type_name_token4 = 102,
  aux_sym_data_type_name_token5 = 103,
  aux_sym_data_type_name_token6 = 104,
  aux_sym_data_type_name_token7 = 105,
  aux_sym_data_type_name_token8 = 106,
  aux_sym_data_type_name_token9 = 107,
  aux_sym_data_type_name_token10 = 108,
  aux_sym_data_type_name_token11 = 109,
  aux_sym_data_type_name_token12 = 110,
  aux_sym_data_type_name_token13 = 111,
  aux_sym_data_type_name_token14 = 112,
  aux_sym_data_type_name_token15 = 113,
  aux_sym_data_type_name_token16 = 114,
  aux_sym_data_type_name_token17 = 115,
  aux_sym_data_type_name_token18 = 116,
  aux_sym_data_type_name_token19 = 117,
  aux_sym_data_type_name_token20 = 118,
  aux_sym_data_type_name_token21 = 119,
  aux_sym_data_type_name_token22 = 120,
  aux_sym_return_mode_token1 = 121,
  aux_sym_return_mode_token2 = 122,
  aux_sym_create_keyspace_token1 = 123,
  aux_sym_create_keyspace_token2 = 124,
  aux_sym_durable_writes_token1 = 125,
  aux_sym_durable_writes_token2 = 126,
  aux_sym_role_with_options_token1 = 127,
  aux_sym_role_with_options_token2 = 128,
  aux_sym_role_with_options_token3 = 129,
  aux_sym_role_with_options_token4 = 130,
  aux_sym_primary_key_column_token1 = 131,
  aux_sym_clustering_order_token1 = 132,
  aux_sym_order_direction_token1 = 133,
  aux_sym_order_direction_token2 = 134,
  aux_sym_alter_table_add_token1 = 135,
  aux_sym_alter_table_drop_compact_storage_token1 = 136,
  aux_sym_alter_table_drop_compact_storage_token2 = 137,
  aux_sym_alter_table_rename_token1 = 138,
  aux_sym_user_super_user_token1 = 139,
  aux_sym_apply_batch_token1 = 140,
  sym_source_file = 141,
  sym__statement = 142,
  sym_select_statement = 143,
  sym_select_elements = 144,
  sym_select_element = 145,
  sym_function_call = 146,
  sym_function_args = 147,
  sym_constant = 148,
  sym__uuid = 149,
  sym__string_literal = 150,
  aux_sym__decimal_literal = 151,
  sym__float_literal = 152,
  sym__hexadecimal_literal = 153,
  sym_code_block = 154,
  sym_from_spec = 155,
  sym_from_spec_element = 156,
  sym_where_spec = 157,
  sym_relation_elements = 158,
  sym_relation_element = 159,
  sym_assignment_tuple = 160,
  sym_relalationContainsKey = 161,
  sym_relalationContains = 162,
  sym_order_spec = 163,
  sym_order_spec_element = 164,
  sym_delete_statement = 165,
  sym_begin_batch = 166,
  sym_delete_column_list = 167,
  sym_delete_column_item = 168,
  sym_using_timestamp_spec = 169,
  sym_timestamp = 170,
  sym_if_exist = 171,
  sym_if_spec = 172,
  sym_if_condition_list = 173,
  sym_if_condition = 174,
  sym_insert_statement = 175,
  sym_keyspace = 176,
  sym_table = 177,
  sym_insert_column_spec = 178,
  sym_column_list = 179,
  sym_column = 180,
  sym_insert_values_spec = 181,
  sym_expression_list = 182,
  sym_expression = 183,
  sym_assignment_map = 184,
  sym_assignment_set = 185,
  sym_assignment_list = 186,
  sym_if_not_exist = 187,
  sym_using_ttl_timestamp = 188,
  sym_ttl = 189,
  sym_truncate = 190,
  sym_create_index = 191,
  sym_index_name = 192,
  sym_index_column_spec = 193,
  sym_index_keys_spec = 194,
  sym_index_entries_s_spec = 195,
  sym_index_full_spec = 196,
  sym_drop_index = 197,
  sym_update = 198,
  sym_assignment_element = 199,
  sym_use = 200,
  sym_grant = 201,
  sym_priviledge = 202,
  sym_resource = 203,
  sym_role = 204,
  sym_function = 205,
  sym_revoke = 206,
  sym_list_roles = 207,
  sym_list_permissions = 208,
  sym_drop_function = 209,
  sym_drop_keyspace = 210,
  sym_drop_role = 211,
  sym_drop_table = 212,
  sym_drop_trigger = 213,
  sym_drop_type = 214,
  sym_drop_user = 215,
  sym_user = 216,
  sym_create_function = 217,
  sym_param = 218,
  sym_data_type = 219,
  sym_data_type_name = 220,
  sym_data_type_definition = 221,
  sym_return_mode = 222,
  sym_language = 223,
  sym_create_keyspace = 224,
  sym_replication_list_item = 225,
  sym_durable_writes = 226,
  sym_create_role = 227,
  sym_role_with = 228,
  sym_role_with_options = 229,
  sym_option_hash = 230,
  sym_option_hash_item = 231,
  sym_create_table = 232,
  sym_column_definition_list = 233,
  sym_column_definition = 234,
  sym_primary_key_column = 235,
  sym_primary_key_element = 236,
  sym_primary_key_definition = 237,
  sym_single_primary_key = 238,
  sym_compound_key = 239,
  sym_partition_key = 240,
  sym_clustering_key_list = 241,
  sym_clustering_key = 242,
  sym_composite_key = 243,
  sym_partition_key_list = 244,
  sym_with_element = 245,
  sym_table_options = 246,
  sym_table_option_item = 247,
  sym_table_option_name = 248,
  sym_table_option_value = 249,
  sym_clustering_order = 250,
  sym_order_direction = 251,
  sym_create_trigger = 252,
  sym_trigger = 253,
  sym_trigger_class = 254,
  sym_create_type = 255,
  sym_type_member_column_list = 256,
  sym_create_user = 257,
  sym_alter_keyspace = 258,
  sym_replication_list = 259,
  sym_alter_role = 260,
  sym_alter_table = 261,
  sym_alter_table_operation = 262,
  sym_alter_table_add = 263,
  sym_alter_table_column_definition = 264,
  sym_alter_table_drop_columns = 265,
  sym_alter_table_drop_column_list = 266,
  sym_alter_table_drop_compact_storage = 267,
  sym_alter_table_rename = 268,
  sym_alter_table_with = 269,
  sym_alter_type = 270,
  sym_type = 271,
  sym_alter_type_operation = 272,
  sym_alter_type_alter_type = 273,
  sym_alter_type_add = 274,
  sym_alter_type_rename = 275,
  sym_alter_type_rename_list = 276,
  sym_alter_type_rename_item = 277,
  sym_alter_user = 278,
  sym_user_password = 279,
  sym_user_super_user = 280,
  sym_apply_batch = 281,
  aux_sym_source_file_repeat1 = 282,
  aux_sym_select_elements_repeat1 = 283,
  aux_sym_function_args_repeat1 = 284,
  aux_sym__hexadecimal_literal_repeat1 = 285,
  aux_sym__hexadecimal_literal_repeat2 = 286,
  aux_sym_relation_elements_repeat1 = 287,
  aux_sym_relation_element_repeat1 = 288,
  aux_sym_relation_element_repeat2 = 289,
  aux_sym_assignment_tuple_repeat1 = 290,
  aux_sym_delete_column_list_repeat1 = 291,
  aux_sym_if_condition_list_repeat1 = 292,
  aux_sym_column_list_repeat1 = 293,
  aux_sym_expression_list_repeat1 = 294,
  aux_sym_assignment_map_repeat1 = 295,
  aux_sym_update_repeat1 = 296,
  aux_sym_create_function_repeat1 = 297,
  aux_sym_data_type_definition_repeat1 = 298,
  aux_sym_role_with_repeat1 = 299,
  aux_sym_option_hash_repeat1 = 300,
  aux_sym_column_definition_list_repeat1 = 301,
  aux_sym_clustering_key_list_repeat1 = 302,
  aux_sym_partition_key_list_repeat1 = 303,
  aux_sym_table_options_repeat1 = 304,
  aux_sym_type_member_column_list_repeat1 = 305,
  aux_sym_replication_list_repeat1 = 306,
  aux_sym_alter_type_rename_list_repeat1 = 307,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 308,
  anon_alias_sym_ALL_ROLES = 309,
  anon_alias_sym_CONTAINS = 310,
  anon_alias_sym_DROP_INDEX = 311,
  anon_alias_sym_IF = 312,
  anon_alias_sym_ORDER_BY = 313,
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
  [aux_sym_drop_trigger_token1] = "TRIGGER",
  [aux_sym_drop_type_token1] = "TYPE",
  [aux_sym_drop_user_token1] = "USER",
  [aux_sym_create_function_token1] = "OR_REPLACE",
  [aux_sym_create_function_token2] = "OR_REPLACE",
  [aux_sym_create_function_token3] = "RETURNS",
  [aux_sym_create_function_token4] = "LANGUAGE",
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
  [aux_sym_drop_trigger_token1] = aux_sym_drop_trigger_token1,
  [aux_sym_drop_type_token1] = aux_sym_drop_type_token1,
  [aux_sym_drop_user_token1] = aux_sym_drop_user_token1,
  [aux_sym_create_function_token1] = aux_sym_create_function_token1,
  [aux_sym_create_function_token2] = aux_sym_create_function_token1,
  [aux_sym_create_function_token3] = aux_sym_create_function_token3,
  [aux_sym_create_function_token4] = aux_sym_create_function_token4,
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
  [aux_sym_create_function_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_token4] = {
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
  [40] = 33,
  [41] = 41,
  [42] = 26,
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
  [53] = 50,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 52,
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
  [99] = 72,
  [100] = 67,
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
  [114] = 56,
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
  [183] = 181,
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
  [247] = 234,
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
  [334] = 328,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 331,
  [340] = 340,
  [341] = 330,
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
  [357] = 52,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 358,
  [362] = 362,
  [363] = 50,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 366,
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
  [386] = 375,
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
  [413] = 410,
  [414] = 414,
  [415] = 415,
  [416] = 402,
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
  [435] = 187,
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
  [457] = 287,
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
  [521] = 515,
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
  [647] = 150,
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
  [667] = 666,
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
  [758] = 666,
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
  [1020] = 791,
  [1021] = 912,
  [1022] = 1022,
  [1023] = 957,
  [1024] = 1024,
  [1025] = 1025,
  [1026] = 1026,
  [1027] = 1026,
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
  [1038] = 973,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(428);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '+') ADVANCE(686);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == '<') ADVANCE(645);
      if (lookahead == '=') ADVANCE(644);
      if (lookahead == '>') ADVANCE(646);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(661);
      if (lookahead == ']') ADVANCE(662);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '}') ADVANCE(673);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(452);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(449);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(338);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(530);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(594);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(626);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '0') ADVANCE(466);
      if (lookahead == 'X') ADVANCE(473);
      if (lookahead == '[') ADVANCE(661);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(480);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(639);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(462);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == ']') ADVANCE(662);
      if (lookahead == '}') ADVANCE(673);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(468);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(541);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(721);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(659);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(665);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 139:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(665);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(665);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 144:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(400);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(663);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(738);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 151:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 153:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(729);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(660);
      END_STATE();
    case 163:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 165:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 196:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(641);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 227:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 260:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 283:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 284:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(717);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(683);
      END_STATE();
    case 286:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(664);
      END_STATE();
    case 287:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 288:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 293:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 294:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 295:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(670);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 352:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 353:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 354:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(688);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 393:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 395:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 396:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 397:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 398:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 399:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 400:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 401:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 402:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 403:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(436);
      END_STATE();
    case 404:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 405:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(679);
      END_STATE();
    case 406:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(358);
      END_STATE();
    case 407:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 408:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 409:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(653);
      END_STATE();
    case 410:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(745);
      END_STATE();
    case 411:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(696);
      END_STATE();
    case 412:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(737);
      END_STATE();
    case 413:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 414:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 415:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 416:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 417:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 418:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      END_STATE();
    case 419:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 421:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 422:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(464);
      END_STATE();
    case 423:
      if (eof) ADVANCE(428);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == '<') ADVANCE(645);
      if (lookahead == '=') ADVANCE(644);
      if (lookahead == '>') ADVANCE(646);
      if (lookahead == '[') ADVANCE(661);
      if (lookahead == ']') ADVANCE(662);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '}') ADVANCE(673);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(338);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(28);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 424:
      if (eof) ADVANCE(428);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '0') ADVANCE(466);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(661);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '}') ADVANCE(673);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 425:
      if (eof) ADVANCE(428);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(518);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(549);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(520);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 426:
      if (eof) ADVANCE(428);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(137);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(449);
      END_STATE();
    case 427:
      if (eof) ADVANCE(428);
      if (lookahead == ';') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(427)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(449);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(469);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(640);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(625);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(584);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(617);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(637);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(640);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(475);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(484);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(621);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(637);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(647);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(648);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_create_function_token3);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_create_function_token4);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
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
      ACCEPT_TOKEN(aux_sym_durable_writes_token2);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 745:
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
  [4] = {.lex_state = 423},
  [5] = {.lex_state = 423},
  [6] = {.lex_state = 423},
  [7] = {.lex_state = 423},
  [8] = {.lex_state = 423},
  [9] = {.lex_state = 423},
  [10] = {.lex_state = 423},
  [11] = {.lex_state = 423},
  [12] = {.lex_state = 423},
  [13] = {.lex_state = 423},
  [14] = {.lex_state = 423},
  [15] = {.lex_state = 423},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 423},
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
  [34] = {.lex_state = 423},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 423},
  [37] = {.lex_state = 423},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 424},
  [40] = {.lex_state = 424},
  [41] = {.lex_state = 424},
  [42] = {.lex_state = 424},
  [43] = {.lex_state = 425},
  [44] = {.lex_state = 423},
  [45] = {.lex_state = 423},
  [46] = {.lex_state = 423},
  [47] = {.lex_state = 423},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 426},
  [51] = {.lex_state = 423},
  [52] = {.lex_state = 426},
  [53] = {.lex_state = 427},
  [54] = {.lex_state = 424},
  [55] = {.lex_state = 423},
  [56] = {.lex_state = 423},
  [57] = {.lex_state = 423},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 423},
  [60] = {.lex_state = 423},
  [61] = {.lex_state = 423},
  [62] = {.lex_state = 423},
  [63] = {.lex_state = 427},
  [64] = {.lex_state = 423},
  [65] = {.lex_state = 423},
  [66] = {.lex_state = 423},
  [67] = {.lex_state = 423},
  [68] = {.lex_state = 423},
  [69] = {.lex_state = 423},
  [70] = {.lex_state = 423},
  [71] = {.lex_state = 423},
  [72] = {.lex_state = 423},
  [73] = {.lex_state = 423},
  [74] = {.lex_state = 423},
  [75] = {.lex_state = 423},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 423},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 423},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 423},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 423},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 423},
  [90] = {.lex_state = 423},
  [91] = {.lex_state = 423},
  [92] = {.lex_state = 423},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 423},
  [95] = {.lex_state = 423},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 423},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 423},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 423},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 423},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 423},
  [111] = {.lex_state = 423},
  [112] = {.lex_state = 423},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 423},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 423},
  [118] = {.lex_state = 423},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 423},
  [122] = {.lex_state = 423},
  [123] = {.lex_state = 423},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 423},
  [127] = {.lex_state = 423},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 423},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 423},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 423},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 423},
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
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 423},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
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
  [199] = {.lex_state = 424},
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
  [212] = {.lex_state = 424},
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
  [234] = {.lex_state = 424},
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
  [247] = {.lex_state = 424},
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
  [327] = {.lex_state = 424},
  [328] = {.lex_state = 424},
  [329] = {.lex_state = 424},
  [330] = {.lex_state = 424},
  [331] = {.lex_state = 424},
  [332] = {.lex_state = 424},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 424},
  [335] = {.lex_state = 424},
  [336] = {.lex_state = 424},
  [337] = {.lex_state = 424},
  [338] = {.lex_state = 424},
  [339] = {.lex_state = 424},
  [340] = {.lex_state = 424},
  [341] = {.lex_state = 424},
  [342] = {.lex_state = 424},
  [343] = {.lex_state = 17},
  [344] = {.lex_state = 423},
  [345] = {.lex_state = 423},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 423},
  [348] = {.lex_state = 17},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 423},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 423},
  [362] = {.lex_state = 144},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 144},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 423},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 423},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 423},
  [373] = {.lex_state = 423},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 423},
  [389] = {.lex_state = 423},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 1},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 423},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 423},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 423},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 423},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 423},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 1},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 424},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 1},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 1},
  [510] = {.lex_state = 1},
  [511] = {.lex_state = 423},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 423},
  [518] = {.lex_state = 423},
  [519] = {.lex_state = 423},
  [520] = {.lex_state = 423},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 6},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 423},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 423},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 423},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 1},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 423},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 1},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 423},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 423},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 423},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 1},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 423},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 423},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 1},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 423},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 423},
  [591] = {.lex_state = 423},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 1},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 1},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 1},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 1},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 1},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 423},
  [623] = {.lex_state = 1},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 1},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 423},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 1},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 1},
  [633] = {.lex_state = 1},
  [634] = {.lex_state = 1},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 1},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 423},
  [641] = {.lex_state = 1},
  [642] = {.lex_state = 1},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 1},
  [645] = {.lex_state = 6},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 1},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 1},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 423},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 423},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 1},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 423},
  [665] = {.lex_state = 423},
  [666] = {.lex_state = 6},
  [667] = {.lex_state = 6},
  [668] = {.lex_state = 6},
  [669] = {.lex_state = 1},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 1},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 423},
  [676] = {.lex_state = 1},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 423},
  [679] = {.lex_state = 1},
  [680] = {.lex_state = 1},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 1},
  [686] = {.lex_state = 423},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 1},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 1},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 1},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 1},
  [702] = {.lex_state = 1},
  [703] = {.lex_state = 423},
  [704] = {.lex_state = 1},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 423},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 423},
  [709] = {.lex_state = 1},
  [710] = {.lex_state = 1},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 423},
  [713] = {.lex_state = 1},
  [714] = {.lex_state = 1},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 423},
  [718] = {.lex_state = 423},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 1},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 1},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 1},
  [727] = {.lex_state = 1},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 1},
  [731] = {.lex_state = 1},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 1},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 423},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 1},
  [739] = {.lex_state = 1},
  [740] = {.lex_state = 1},
  [741] = {.lex_state = 423},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 1},
  [746] = {.lex_state = 1},
  [747] = {.lex_state = 423},
  [748] = {.lex_state = 423},
  [749] = {.lex_state = 1},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 423},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 423},
  [755] = {.lex_state = 6},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 1},
  [758] = {.lex_state = 6},
  [759] = {.lex_state = 423},
  [760] = {.lex_state = 1},
  [761] = {.lex_state = 1},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 423},
  [770] = {.lex_state = 423},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 423},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 1},
  [779] = {.lex_state = 1},
  [780] = {.lex_state = 1},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 424},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 1},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 423},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 1},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 426},
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
  [808] = {.lex_state = 423},
  [809] = {.lex_state = 1},
  [810] = {.lex_state = 424},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 1},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 423},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 423},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 423},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 423},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 424},
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
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 423},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 423},
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
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 423},
  [902] = {.lex_state = 423},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 423},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 423},
  [909] = {.lex_state = 424},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 424},
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
  [930] = {.lex_state = 423},
  [931] = {.lex_state = 424},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 423},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 424},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 5},
  [945] = {.lex_state = 460},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 423},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 423},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 5},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 424},
  [964] = {.lex_state = 423},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 423},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 423},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
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
  [987] = {.lex_state = 1},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 423},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 423},
  [997] = {.lex_state = 423},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 423},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 424},
  [1004] = {.lex_state = 424},
  [1005] = {.lex_state = 423},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 6},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 1},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 1},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 423},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 423},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 1},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 424},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 424},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 423},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 424},
  [1038] = {.lex_state = 1},
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
    [aux_sym_create_function_token1] = ACTIONS(1),
    [aux_sym_create_function_token2] = ACTIONS(1),
    [aux_sym_create_function_token3] = ACTIONS(1),
    [aux_sym_create_function_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(1034),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(224),
    [sym_delete_statement] = STATE(224),
    [sym_begin_batch] = STATE(514),
    [sym_insert_statement] = STATE(224),
    [sym_truncate] = STATE(224),
    [sym_create_index] = STATE(224),
    [sym_drop_index] = STATE(224),
    [sym_update] = STATE(224),
    [sym_use] = STATE(224),
    [sym_grant] = STATE(224),
    [sym_revoke] = STATE(224),
    [sym_list_roles] = STATE(224),
    [sym_list_permissions] = STATE(224),
    [sym_drop_function] = STATE(224),
    [sym_drop_keyspace] = STATE(224),
    [sym_drop_role] = STATE(224),
    [sym_drop_table] = STATE(224),
    [sym_drop_trigger] = STATE(224),
    [sym_drop_type] = STATE(224),
    [sym_drop_user] = STATE(224),
    [sym_create_function] = STATE(224),
    [sym_create_keyspace] = STATE(224),
    [sym_create_role] = STATE(224),
    [sym_create_table] = STATE(224),
    [sym_create_trigger] = STATE(224),
    [sym_create_type] = STATE(224),
    [sym_create_user] = STATE(224),
    [sym_alter_keyspace] = STATE(224),
    [sym_alter_role] = STATE(224),
    [sym_alter_table] = STATE(224),
    [sym_alter_type] = STATE(224),
    [sym_alter_user] = STATE(224),
    [sym_apply_batch] = STATE(224),
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
    STATE(514), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(224), 32,
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
  [87] = 18,
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
    STATE(514), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(224), 32,
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
  [174] = 3,
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
  [215] = 4,
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
  [257] = 1,
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
  [293] = 4,
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
  [334] = 3,
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
  [373] = 3,
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
  [412] = 2,
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
  [447] = 2,
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
  [482] = 2,
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
  [517] = 1,
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
  [549] = 1,
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
  [581] = 1,
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
  [613] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(155), 1,
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
  [650] = 2,
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
  [683] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(976), 1,
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
  [720] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(173), 1,
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
  [757] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(276), 1,
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
  [794] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(895), 1,
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
  [831] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(784), 1,
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
  [868] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(998), 1,
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
  [905] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(486), 1,
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
  [942] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(847), 1,
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
  [979] = 2,
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
  [1012] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(567), 1,
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
  [1049] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(146), 1,
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
  [1086] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
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
  [1123] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(932), 1,
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
  [1160] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(707), 1,
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
  [1197] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(49), 1,
      sym_data_type_name,
    STATE(992), 1,
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
  [1234] = 2,
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
  [1267] = 2,
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
  [1300] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(606), 1,
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
  [1334] = 1,
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
  [1364] = 1,
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
  [1394] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(728), 1,
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
  [1428] = 16,
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
    STATE(522), 1,
      sym_expression,
    STATE(1025), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(659), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1485] = 1,
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
  [1511] = 15,
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
    STATE(753), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(659), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1565] = 1,
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
  [1591] = 8,
    ACTIONS(162), 1,
      sym_object_name,
    ACTIONS(164), 1,
      aux_sym_clustering_order_token1,
    STATE(110), 1,
      sym_table_option_item,
    STATE(179), 1,
      sym_table_options,
    STATE(250), 1,
      sym_clustering_order,
    STATE(854), 1,
      sym_table_option_name,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(160), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1630] = 7,
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
    STATE(151), 1,
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
  [1667] = 2,
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
  [1694] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(180), 19,
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
  [1725] = 7,
    ACTIONS(172), 1,
      aux_sym_where_spec_token1,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(184), 1,
      aux_sym_select_statement_token4,
    ACTIONS(186), 1,
      aux_sym_select_statement_token5,
    STATE(81), 1,
      sym_where_spec,
    STATE(174), 1,
      sym_order_spec,
    ACTIONS(182), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1762] = 1,
    ACTIONS(188), 22,
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
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1787] = 3,
    ACTIONS(192), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym_data_type_definition,
    ACTIONS(190), 20,
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
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [1816] = 3,
    ACTIONS(196), 1,
      sym__hex_digit,
    STATE(50), 1,
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
  [1845] = 7,
    ACTIONS(172), 1,
      aux_sym_where_spec_token1,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(201), 1,
      aux_sym_select_statement_token4,
    ACTIONS(203), 1,
      aux_sym_select_statement_token5,
    STATE(75), 1,
      sym_where_spec,
    STATE(160), 1,
      sym_order_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1882] = 3,
    ACTIONS(207), 1,
      sym__hex_digit,
    STATE(50), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(205), 20,
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
  [1911] = 3,
    ACTIONS(209), 1,
      sym__hex_digit,
    STATE(53), 1,
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
  [1939] = 3,
    STATE(158), 1,
      sym_order_direction,
    ACTIONS(214), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(212), 18,
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
  [1967] = 1,
    ACTIONS(216), 21,
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
  [1991] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(72), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(218), 19,
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
  [2019] = 1,
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
  [2043] = 15,
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
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(767), 1,
      sym_constant,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(447), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2095] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(232), 20,
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
  [2121] = 1,
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
  [2145] = 1,
    ACTIONS(236), 21,
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
  [2169] = 1,
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
  [2193] = 3,
    ACTIONS(240), 1,
      sym__hex_digit,
    STATE(53), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(205), 19,
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
  [2221] = 1,
    ACTIONS(242), 21,
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
  [2245] = 1,
    ACTIONS(122), 21,
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
  [2269] = 1,
    ACTIONS(244), 21,
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
  [2293] = 3,
    ACTIONS(246), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(222), 19,
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
  [2321] = 1,
    ACTIONS(249), 21,
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
  [2345] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(251), 19,
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
  [2373] = 1,
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
  [2397] = 1,
    ACTIONS(255), 21,
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
  [2421] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(257), 19,
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
  [2449] = 1,
    ACTIONS(259), 21,
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
  [2473] = 1,
    ACTIONS(261), 21,
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
  [2497] = 5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(265), 1,
      aux_sym_select_statement_token4,
    ACTIONS(267), 1,
      aux_sym_select_statement_token5,
    STATE(131), 1,
      sym_order_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2528] = 1,
    ACTIONS(269), 20,
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
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2551] = 5,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_if_exist_token1,
    STATE(168), 1,
      sym_if_not_exist,
    STATE(215), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2582] = 5,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_if_exist_token1,
    STATE(144), 1,
      sym_if_not_exist,
    STATE(258), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2613] = 1,
    ACTIONS(232), 20,
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
  [2636] = 1,
    ACTIONS(279), 20,
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
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2659] = 5,
    ACTIONS(168), 1,
      aux_sym_select_statement_token4,
    ACTIONS(170), 1,
      aux_sym_select_statement_token5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    STATE(151), 1,
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
  [2690] = 5,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_if_exist_token1,
    STATE(163), 1,
      sym_if_not_exist,
    STATE(226), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2721] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(283), 18,
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
  [2748] = 15,
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
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(825), 1,
      sym_function_args,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(584), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2799] = 5,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_if_exist_token1,
    STATE(169), 1,
      sym_if_not_exist,
    STATE(207), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2830] = 5,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_if_exist_token1,
    STATE(171), 1,
      sym_if_not_exist,
    STATE(222), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2861] = 2,
    ACTIONS(134), 1,
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
  [2886] = 1,
    ACTIONS(297), 20,
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
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
      aux_sym_apply_batch_token1,
  [2909] = 1,
    ACTIONS(299), 20,
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
  [2932] = 1,
    ACTIONS(134), 20,
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
  [2955] = 5,
    ACTIONS(174), 1,
      aux_sym_order_spec_token1,
    ACTIONS(201), 1,
      aux_sym_select_statement_token4,
    ACTIONS(203), 1,
      aux_sym_select_statement_token5,
    STATE(160), 1,
      sym_order_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2986] = 2,
    ACTIONS(303), 1,
      aux_sym_relation_element_token1,
    ACTIONS(301), 19,
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
  [3011] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(201), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3037] = 1,
    ACTIONS(309), 19,
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
  [3059] = 1,
    ACTIONS(311), 19,
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
  [3081] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(233), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3107] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(317), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3135] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(204), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3161] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(100), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(257), 17,
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
  [3187] = 3,
    ACTIONS(323), 1,
      aux_sym_relation_elements_token1,
    STATE(100), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(222), 17,
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
  [3213] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(326), 17,
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
  [3239] = 1,
    ACTIONS(331), 19,
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
  [3261] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(290), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3287] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(267), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3315] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(220), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3341] = 3,
    STATE(320), 1,
      sym_user_super_user,
    ACTIONS(339), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3367] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(203), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3395] = 3,
    STATE(306), 1,
      sym_user_super_user,
    ACTIONS(339), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3421] = 1,
    ACTIONS(343), 19,
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
  [3443] = 3,
    ACTIONS(347), 1,
      aux_sym_relation_elements_token1,
    STATE(127), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(345), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3469] = 1,
    ACTIONS(349), 19,
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
  [3491] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(353), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3519] = 2,
    ACTIONS(357), 1,
      aux_sym_priviledge_token2,
    ACTIONS(355), 18,
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
  [3543] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(99), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(218), 17,
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
  [3569] = 1,
    ACTIONS(359), 19,
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
  [3591] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(266), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3617] = 1,
    ACTIONS(363), 19,
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
  [3639] = 1,
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
  [3661] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(297), 2,
      sym_if_exist,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3687] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(292), 2,
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
  [3713] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(371), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3741] = 1,
    ACTIONS(373), 19,
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
  [3763] = 1,
    ACTIONS(375), 19,
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
  [3785] = 3,
    STATE(255), 1,
      sym_user_super_user,
    ACTIONS(339), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3811] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(239), 2,
      sym_if_exist,
      sym_if_spec,
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
  [3837] = 3,
    ACTIONS(383), 1,
      aux_sym_relation_elements_token1,
    STATE(126), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(381), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3863] = 3,
    ACTIONS(347), 1,
      aux_sym_relation_elements_token1,
    STATE(126), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(386), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3889] = 3,
    ACTIONS(307), 1,
      aux_sym_if_exist_token1,
    STATE(312), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3915] = 1,
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
  [3937] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_column_list_repeat1,
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
  [3962] = 3,
    ACTIONS(353), 1,
      aux_sym_select_statement_token5,
    ACTIONS(396), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3987] = 2,
    ACTIONS(400), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4010] = 2,
    ACTIONS(402), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4033] = 1,
    ACTIONS(381), 18,
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
  [4054] = 1,
    ACTIONS(404), 18,
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
  [4075] = 1,
    ACTIONS(406), 18,
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
  [4096] = 1,
    ACTIONS(408), 18,
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
  [4117] = 1,
    ACTIONS(410), 18,
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
  [4138] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_type_member_column_list_repeat1,
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
  [4163] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(101), 1,
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
  [4188] = 3,
    ACTIONS(420), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(418), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4213] = 3,
    ACTIONS(425), 1,
      aux_sym_create_keyspace_token1,
    STATE(254), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4238] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(427), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4263] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(226), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4288] = 3,
    ACTIONS(434), 1,
      aux_sym_create_keyspace_token1,
    STATE(221), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4313] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_type_member_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4338] = 3,
    ACTIONS(440), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4363] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4388] = 1,
    ACTIONS(355), 18,
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
  [4409] = 3,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_column_list_repeat1,
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
  [4434] = 3,
    ACTIONS(201), 1,
      aux_sym_select_statement_token4,
    ACTIONS(203), 1,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4459] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4484] = 3,
    ACTIONS(434), 1,
      aux_sym_create_keyspace_token1,
    STATE(248), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4509] = 1,
    ACTIONS(453), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4530] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_type_member_column_list_repeat1,
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
  [4555] = 3,
    ACTIONS(434), 1,
      aux_sym_create_keyspace_token1,
    STATE(272), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4580] = 3,
    ACTIONS(440), 1,
      aux_sym_relation_elements_token1,
    STATE(147), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(459), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4605] = 1,
    ACTIONS(461), 18,
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
  [4626] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_role_with_repeat1,
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
  [4651] = 3,
    ACTIONS(265), 1,
      aux_sym_select_statement_token4,
    ACTIONS(267), 1,
      aux_sym_select_statement_token5,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4676] = 3,
    ACTIONS(467), 1,
      aux_sym_list_roles_token2,
    ACTIONS(469), 1,
      aux_sym_list_roles_token3,
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
  [4701] = 3,
    ACTIONS(473), 1,
      aux_sym_create_index_token3,
    ACTIONS(475), 1,
      aux_sym_list_roles_token2,
    ACTIONS(471), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4726] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(259), 1,
      sym_using_ttl_timestamp,
    ACTIONS(477), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4751] = 3,
    ACTIONS(434), 1,
      aux_sym_create_keyspace_token1,
    STATE(282), 1,
      sym_with_element,
    ACTIONS(479), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4776] = 1,
    ACTIONS(481), 18,
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
  [4797] = 1,
    ACTIONS(483), 18,
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
  [4818] = 3,
    ACTIONS(487), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(485), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4843] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(258), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4868] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(222), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4893] = 3,
    ACTIONS(425), 1,
      aux_sym_create_keyspace_token1,
    STATE(310), 1,
      sym_role_with,
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
  [4918] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(215), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4943] = 13,
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
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(289), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(981), 1,
      sym_function_args,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(584), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4988] = 1,
    ACTIONS(492), 18,
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
  [5009] = 3,
    ACTIONS(168), 1,
      aux_sym_select_statement_token4,
    ACTIONS(170), 1,
      aux_sym_select_statement_token5,
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
  [5034] = 3,
    ACTIONS(496), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5059] = 3,
    ACTIONS(425), 1,
      aux_sym_create_keyspace_token1,
    STATE(256), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5084] = 1,
    ACTIONS(500), 18,
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
  [5105] = 3,
    ACTIONS(496), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5130] = 3,
    ACTIONS(506), 1,
      aux_sym_clustering_order_token1,
    STATE(219), 1,
      sym_clustering_order,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5155] = 1,
    ACTIONS(485), 17,
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
  [5175] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(508), 1,
      anon_sym_0X,
    ACTIONS(510), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(61), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5217] = 1,
    ACTIONS(512), 17,
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
  [5237] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      sym_object_name,
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(61), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5279] = 1,
    ACTIONS(516), 17,
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
  [5299] = 12,
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
    ACTIONS(226), 1,
      sym__hex_4digit,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(224), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(655), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5341] = 1,
    ACTIONS(520), 17,
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
  [5361] = 1,
    ACTIONS(522), 17,
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
  [5381] = 2,
    ACTIONS(526), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5403] = 2,
    ACTIONS(530), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5425] = 1,
    ACTIONS(427), 17,
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
  [5445] = 2,
    ACTIONS(134), 1,
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
  [5467] = 1,
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
  [5487] = 1,
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
  [5507] = 2,
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
  [5529] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5551] = 1,
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
  [5571] = 2,
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
  [5593] = 2,
    ACTIONS(548), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5615] = 13,
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
    STATE(488), 1,
      sym_constant,
    STATE(766), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5659] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5679] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5698] = 1,
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
  [5717] = 1,
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
  [5736] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5755] = 1,
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
  [5774] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5793] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5812] = 1,
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
  [5831] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5850] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5869] = 1,
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
  [5888] = 12,
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
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(497), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5929] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5948] = 1,
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
  [5967] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5986] = 1,
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
  [6005] = 1,
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
  [6024] = 1,
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
  [6043] = 1,
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
  [6062] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6081] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6100] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6119] = 1,
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
  [6138] = 2,
    ACTIONS(584), 1,
      anon_sym_SEMI,
    ACTIONS(582), 15,
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
  [6159] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6178] = 1,
    ACTIONS(477), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6197] = 1,
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
  [6216] = 1,
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
  [6235] = 1,
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
  [6254] = 1,
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
  [6273] = 1,
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
  [6292] = 1,
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
  [6311] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6330] = 12,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    ACTIONS(596), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(60), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6371] = 1,
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
  [6390] = 1,
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
  [6409] = 1,
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
  [6428] = 1,
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
  [6447] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6466] = 1,
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
  [6485] = 1,
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
  [6504] = 1,
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
  [6523] = 1,
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
  [6542] = 1,
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
  [6561] = 1,
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
  [6580] = 1,
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
  [6599] = 12,
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
    ACTIONS(508), 1,
      anon_sym_0X,
    ACTIONS(620), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(60), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6640] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6659] = 1,
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
  [6678] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6697] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6716] = 1,
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
  [6735] = 1,
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
  [6754] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6773] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6792] = 1,
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
  [6811] = 1,
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
  [6830] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6849] = 1,
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
  [6868] = 1,
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
  [6887] = 1,
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
  [6906] = 1,
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
  [6925] = 1,
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
  [6944] = 1,
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
  [6963] = 1,
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
  [6982] = 1,
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
  [7001] = 1,
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
  [7020] = 1,
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
  [7039] = 1,
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
  [7058] = 1,
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
  [7077] = 1,
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
  [7096] = 1,
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
  [7115] = 1,
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
  [7134] = 1,
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
  [7153] = 1,
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
  [7172] = 1,
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
  [7191] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7210] = 1,
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
  [7229] = 1,
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
  [7248] = 1,
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
  [7267] = 1,
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
  [7286] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7305] = 1,
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
  [7324] = 1,
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
  [7343] = 1,
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
  [7362] = 1,
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
  [7381] = 1,
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
  [7400] = 1,
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
  [7419] = 1,
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
  [7438] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7457] = 1,
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
  [7476] = 1,
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
  [7495] = 1,
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
  [7514] = 1,
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
  [7533] = 1,
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
  [7552] = 1,
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
  [7571] = 1,
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
  [7590] = 1,
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
  [7609] = 1,
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
  [7628] = 1,
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
  [7647] = 1,
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
  [7666] = 1,
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
  [7685] = 1,
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
  [7704] = 1,
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
  [7723] = 1,
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
  [7742] = 1,
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
  [7761] = 1,
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
  [7780] = 1,
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
  [7799] = 1,
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
  [7818] = 1,
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
  [7837] = 1,
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
  [7856] = 1,
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
  [7875] = 1,
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
  [7894] = 1,
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
  [7913] = 1,
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
  [7932] = 1,
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
  [7951] = 1,
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
  [7970] = 1,
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
  [7989] = 1,
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
  [8008] = 1,
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
  [8027] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8046] = 1,
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
  [8065] = 1,
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
  [8084] = 1,
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
  [8103] = 1,
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
  [8122] = 1,
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
  [8141] = 11,
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
    STATE(918), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8179] = 11,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8217] = 11,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(182), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8255] = 11,
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
    ACTIONS(508), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(73), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8293] = 11,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(61), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8331] = 11,
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
    STATE(649), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8369] = 1,
    ACTIONS(754), 15,
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
  [8387] = 11,
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
    ACTIONS(508), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8425] = 11,
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
    STATE(736), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8463] = 11,
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
    STATE(488), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8501] = 11,
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
    STATE(585), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8539] = 11,
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
    STATE(376), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8577] = 11,
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
    ACTIONS(508), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(61), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8615] = 11,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(137), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8653] = 11,
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
    ACTIONS(514), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(73), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8691] = 11,
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
    STATE(691), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8729] = 4,
    ACTIONS(758), 1,
      aux_sym_priviledge_token1,
    ACTIONS(760), 1,
      aux_sym_resource_token5,
    STATE(162), 1,
      sym_priviledge,
    ACTIONS(756), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8749] = 6,
    ACTIONS(762), 1,
      aux_sym_drop_index_token1,
    ACTIONS(764), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(766), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(768), 1,
      aux_sym_alter_table_rename_token1,
    STATE(304), 1,
      sym_alter_table_operation,
    STATE(308), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8772] = 6,
    ACTIONS(762), 1,
      aux_sym_drop_index_token1,
    ACTIONS(764), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(766), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(768), 1,
      aux_sym_alter_table_rename_token1,
    STATE(307), 1,
      sym_alter_table_operation,
    STATE(308), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8795] = 10,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(774), 1,
      aux_sym_truncate_token2,
    ACTIONS(776), 1,
      aux_sym_priviledge_token1,
    ACTIONS(778), 1,
      aux_sym_resource_token2,
    ACTIONS(780), 1,
      aux_sym_resource_token3,
    ACTIONS(782), 1,
      aux_sym_resource_token6,
    STATE(123), 1,
      sym_table,
    STATE(188), 1,
      sym_resource,
    STATE(917), 1,
      sym_keyspace,
  [8826] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym__dec_digit,
    STATE(46), 1,
      aux_sym__decimal_literal,
    STATE(136), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(138), 2,
      sym_option_hash,
      sym_table_option_value,
  [8853] = 3,
    ACTIONS(758), 1,
      aux_sym_priviledge_token1,
    STATE(1011), 1,
      sym_priviledge,
    ACTIONS(756), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8870] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    STATE(836), 1,
      sym_index_column_spec,
    STATE(960), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8895] = 3,
    ACTIONS(758), 1,
      aux_sym_priviledge_token1,
    STATE(1006), 1,
      sym_priviledge,
    ACTIONS(756), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8912] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    STATE(888), 1,
      sym_index_column_spec,
    STATE(960), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8937] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    STATE(951), 1,
      sym_index_column_spec,
    STATE(960), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8962] = 10,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(774), 1,
      aux_sym_truncate_token2,
    ACTIONS(776), 1,
      aux_sym_priviledge_token1,
    ACTIONS(778), 1,
      aux_sym_resource_token2,
    ACTIONS(780), 1,
      aux_sym_resource_token3,
    ACTIONS(782), 1,
      aux_sym_resource_token6,
    STATE(123), 1,
      sym_table,
    STATE(917), 1,
      sym_keyspace,
    STATE(922), 1,
      sym_resource,
  [8993] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    STATE(816), 1,
      sym_index_column_spec,
    STATE(960), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9018] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(792), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(794), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(796), 1,
      aux_sym_index_full_spec_token1,
    STATE(1000), 1,
      sym_index_column_spec,
    STATE(960), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [9043] = 10,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(774), 1,
      aux_sym_truncate_token2,
    ACTIONS(776), 1,
      aux_sym_priviledge_token1,
    ACTIONS(778), 1,
      aux_sym_resource_token2,
    ACTIONS(780), 1,
      aux_sym_resource_token3,
    ACTIONS(782), 1,
      aux_sym_resource_token6,
    STATE(123), 1,
      sym_table,
    STATE(917), 1,
      sym_keyspace,
    STATE(964), 1,
      sym_resource,
  [9074] = 3,
    ACTIONS(798), 1,
      sym__hex_digit,
    STATE(363), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(205), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [9090] = 6,
    ACTIONS(800), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      aux_sym_relation_element_token1,
    ACTIONS(810), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(806), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(804), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9112] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    STATE(184), 1,
      sym__string_literal,
    STATE(268), 1,
      sym_index_name,
    STATE(369), 1,
      sym_if_exist,
    STATE(894), 1,
      sym_keyspace,
  [9140] = 7,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
    STATE(725), 1,
      sym_column,
    STATE(883), 1,
      sym_primary_key_definition,
    STATE(885), 1,
      sym_partition_key,
    STATE(884), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [9164] = 6,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      aux_sym_relation_element_token1,
    ACTIONS(820), 1,
      anon_sym_DOT,
    ACTIONS(826), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(822), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9186] = 9,
    ACTIONS(828), 1,
      aux_sym_truncate_token2,
    ACTIONS(830), 1,
      aux_sym_create_index_token2,
    ACTIONS(832), 1,
      aux_sym_resource_token2,
    ACTIONS(834), 1,
      aux_sym_resource_token3,
    ACTIONS(836), 1,
      aux_sym_resource_token6,
    ACTIONS(838), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(840), 1,
      aux_sym_drop_type_token1,
    ACTIONS(842), 1,
      aux_sym_drop_user_token1,
    ACTIONS(844), 1,
      aux_sym_create_function_token1,
  [9214] = 3,
    ACTIONS(846), 1,
      sym__hex_digit,
    STATE(363), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(194), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [9230] = 8,
    ACTIONS(849), 1,
      aux_sym_truncate_token2,
    ACTIONS(851), 1,
      aux_sym_create_index_token2,
    ACTIONS(853), 1,
      aux_sym_resource_token2,
    ACTIONS(855), 1,
      aux_sym_resource_token3,
    ACTIONS(857), 1,
      aux_sym_resource_token6,
    ACTIONS(859), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(861), 1,
      aux_sym_drop_type_token1,
    ACTIONS(863), 1,
      aux_sym_drop_user_token1,
  [9255] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(865), 1,
      sym_object_name,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(869), 1,
      aux_sym_create_index_token3,
    STATE(184), 1,
      sym__string_literal,
    STATE(392), 1,
      sym_if_not_exist,
    STATE(943), 1,
      sym_index_name,
  [9280] = 6,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(56), 1,
      sym_relation_element,
    STATE(89), 1,
      sym_relation_elements,
    STATE(413), 1,
      sym_function_call,
    STATE(62), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9300] = 7,
    ACTIONS(875), 1,
      aux_sym_select_statement_token2,
    ACTIONS(877), 1,
      aux_sym_select_statement_token3,
    ACTIONS(879), 1,
      anon_sym_STAR,
    ACTIONS(881), 1,
      sym_object_name,
    STATE(517), 1,
      sym_select_element,
    STATE(518), 1,
      sym_function_call,
    STATE(658), 1,
      sym_select_elements,
  [9322] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(883), 1,
      sym__dec_digit,
    STATE(440), 1,
      aux_sym__decimal_literal,
    STATE(776), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [9340] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(812), 1,
      sym_object_name,
    ACTIONS(816), 1,
      sym__dquote,
    STATE(184), 1,
      sym__string_literal,
    STATE(269), 1,
      sym_index_name,
    STATE(879), 1,
      sym_keyspace,
  [9362] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(786), 1,
      sym__dec_digit,
    STATE(46), 1,
      aux_sym__decimal_literal,
    STATE(903), 2,
      sym__string_literal,
      sym__float_literal,
  [9382] = 6,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(89), 1,
      sym_relation_elements,
    STATE(114), 1,
      sym_relation_element,
    STATE(410), 1,
      sym_function_call,
    STATE(62), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9402] = 5,
    ACTIONS(887), 1,
      aux_sym_priviledge_token3,
    ACTIONS(889), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(891), 1,
      aux_sym_alter_table_rename_token1,
    STATE(315), 1,
      sym_alter_type_operation,
    STATE(316), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9420] = 5,
    ACTIONS(887), 1,
      aux_sym_priviledge_token3,
    ACTIONS(889), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(891), 1,
      aux_sym_alter_table_rename_token1,
    STATE(323), 1,
      sym_alter_type_operation,
    STATE(316), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9438] = 6,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(482), 1,
      sym_if_not_exist,
    STATE(839), 1,
      sym_keyspace,
    STATE(958), 1,
      sym_function,
  [9457] = 5,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(57), 1,
      sym_relation_element,
    STATE(413), 1,
      sym_function_call,
    STATE(62), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9474] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(616), 1,
      aux_sym_relation_element_repeat2,
    STATE(617), 1,
      sym_assignment_tuple,
  [9493] = 6,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    STATE(492), 1,
      sym_if_not_exist,
    STATE(946), 1,
      sym_table,
    STATE(953), 1,
      sym_keyspace,
  [9512] = 6,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(460), 1,
      sym_if_not_exist,
    STATE(916), 1,
      sym_trigger,
    STATE(919), 1,
      sym_keyspace,
  [9531] = 6,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(448), 1,
      sym_if_not_exist,
    STATE(913), 1,
      sym_type,
    STATE(914), 1,
      sym_keyspace,
  [9550] = 6,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    STATE(283), 1,
      sym_table,
    STATE(451), 1,
      sym_if_exist,
    STATE(896), 1,
      sym_keyspace,
  [9569] = 6,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(903), 1,
      aux_sym_primary_key_column_token1,
    STATE(24), 1,
      sym_column,
    STATE(663), 1,
      sym_column_definition,
    STATE(1028), 1,
      sym_primary_key_element,
  [9588] = 6,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(218), 1,
      sym_function,
    STATE(459), 1,
      sym_if_exist,
    STATE(887), 1,
      sym_keyspace,
  [9607] = 6,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(510), 1,
      sym_if_exist,
    STATE(878), 1,
      sym_trigger,
    STATE(881), 1,
      sym_keyspace,
  [9626] = 6,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(319), 1,
      sym_type,
    STATE(507), 1,
      sym_if_exist,
    STATE(875), 1,
      sym_keyspace,
  [9645] = 6,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(296), 1,
      sym_user,
    STATE(506), 1,
      sym_if_exist,
    STATE(874), 1,
      sym_keyspace,
  [9664] = 5,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(57), 1,
      sym_relation_element,
    STATE(410), 1,
      sym_function_call,
    STATE(62), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9681] = 6,
    ACTIONS(879), 1,
      anon_sym_STAR,
    ACTIONS(881), 1,
      sym_object_name,
    ACTIONS(907), 1,
      aux_sym_select_statement_token3,
    STATE(517), 1,
      sym_select_element,
    STATE(518), 1,
      sym_function_call,
    STATE(675), 1,
      sym_select_elements,
  [9700] = 2,
    ACTIONS(911), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(909), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [9711] = 2,
    ACTIONS(915), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(913), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [9722] = 6,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    ACTIONS(903), 1,
      aux_sym_primary_key_column_token1,
    STATE(24), 1,
      sym_column,
    STATE(663), 1,
      sym_column_definition,
    STATE(822), 1,
      sym_primary_key_element,
  [9741] = 6,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(487), 1,
      sym_if_not_exist,
    STATE(929), 1,
      sym_function,
    STATE(933), 1,
      sym_keyspace,
  [9760] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(865), 1,
      sym_object_name,
    ACTIONS(917), 1,
      aux_sym_create_index_token3,
    STATE(184), 1,
      sym__string_literal,
    STATE(811), 1,
      sym_index_name,
  [9779] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(604), 1,
      sym_replication_list_item,
    STATE(803), 1,
      sym_replication_list,
    STATE(805), 1,
      sym__string_literal,
  [9795] = 5,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(260), 1,
      sym_keyspace,
    STATE(565), 1,
      sym_if_exist,
  [9811] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
    STATE(559), 1,
      sym_insert_column_spec,
  [9827] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(539), 1,
      sym_clustering_key,
    STATE(695), 1,
      sym_column,
    STATE(983), 1,
      sym_clustering_key_list,
  [9843] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(927), 1,
      sym__dec_digit,
    STATE(455), 1,
      aux_sym__decimal_literal,
    STATE(722), 1,
      sym__string_literal,
  [9859] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(85), 1,
      sym_insert_values_spec,
    STATE(594), 1,
      sym_insert_column_spec,
  [9875] = 5,
    ACTIONS(929), 1,
      aux_sym_truncate_token2,
    ACTIONS(931), 1,
      aux_sym_resource_token2,
    ACTIONS(933), 1,
      aux_sym_resource_token6,
    ACTIONS(935), 1,
      aux_sym_drop_type_token1,
    ACTIONS(937), 1,
      aux_sym_drop_user_token1,
  [9891] = 1,
    ACTIONS(939), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9899] = 1,
    ACTIONS(941), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9907] = 2,
    ACTIONS(945), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(943), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9917] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
    STATE(618), 1,
      sym_insert_column_spec,
  [9933] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(643), 1,
      sym_column_definition,
    STATE(1036), 1,
      sym_column_definition_list,
  [9949] = 3,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(950), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9961] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(643), 1,
      sym_column_definition,
    STATE(818), 1,
      sym_column_definition_list,
  [9977] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(539), 1,
      sym_clustering_key,
    STATE(695), 1,
      sym_column,
    STATE(950), 1,
      sym_clustering_key_list,
  [9993] = 5,
    ACTIONS(952), 1,
      sym_object_name,
    ACTIONS(954), 1,
      aux_sym_from_spec_token1,
    STATE(467), 1,
      sym_from_spec,
    STATE(520), 1,
      sym_delete_column_item,
    STATE(664), 1,
      sym_delete_column_list,
  [10009] = 5,
    ACTIONS(879), 1,
      anon_sym_STAR,
    ACTIONS(956), 1,
      sym_object_name,
    STATE(517), 1,
      sym_select_element,
    STATE(518), 1,
      sym_function_call,
    STATE(675), 1,
      sym_select_elements,
  [10025] = 2,
    ACTIONS(960), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(958), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10035] = 5,
    ACTIONS(952), 1,
      sym_object_name,
    ACTIONS(954), 1,
      aux_sym_from_spec_token1,
    STATE(443), 1,
      sym_from_spec,
    STATE(520), 1,
      sym_delete_column_item,
    STATE(741), 1,
      sym_delete_column_list,
  [10051] = 3,
    ACTIONS(964), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(592), 1,
      sym_using_timestamp_spec,
    ACTIONS(962), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10063] = 2,
    ACTIONS(968), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(966), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10073] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(86), 1,
      sym_insert_values_spec,
    STATE(561), 1,
      sym_insert_column_spec,
  [10089] = 5,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    ACTIONS(970), 1,
      aux_sym_truncate_token2,
    STATE(291), 1,
      sym_table,
    STATE(1017), 1,
      sym_keyspace,
  [10105] = 2,
    ACTIONS(974), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(972), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10115] = 4,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(978), 1,
      anon_sym_DOT,
    ACTIONS(980), 1,
      aux_sym_select_element_token1,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10129] = 1,
    ACTIONS(982), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10137] = 4,
    ACTIONS(984), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(988), 1,
      aux_sym_role_with_options_token4,
    STATE(190), 1,
      sym_role_with_options,
    ACTIONS(986), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [10151] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(184), 1,
      sym__string_literal,
    STATE(265), 1,
      sym_index_name,
  [10167] = 1,
    ACTIONS(990), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10175] = 5,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(157), 1,
      sym_alter_type_rename_item,
    STATE(244), 1,
      sym_alter_type_rename_list,
    STATE(872), 1,
      sym_column,
  [10191] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(547), 1,
      sym_partition_key,
    STATE(705), 1,
      sym_column,
    STATE(924), 1,
      sym_partition_key_list,
  [10207] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(643), 1,
      sym_column_definition,
    STATE(979), 1,
      sym_column_definition_list,
  [10223] = 5,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(643), 1,
      sym_column_definition,
    STATE(782), 1,
      sym_column_definition_list,
  [10239] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(604), 1,
      sym_replication_list_item,
    STATE(805), 1,
      sym__string_literal,
    STATE(842), 1,
      sym_replication_list,
  [10255] = 1,
    ACTIONS(996), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10263] = 4,
    ACTIONS(984), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(988), 1,
      aux_sym_role_with_options_token4,
    STATE(148), 1,
      sym_role_with_options,
    ACTIONS(986), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [10277] = 5,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    ACTIONS(998), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(152), 1,
      sym_column,
    STATE(270), 1,
      sym_alter_table_drop_column_list,
  [10293] = 1,
    ACTIONS(1000), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10301] = 3,
    ACTIONS(964), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(534), 1,
      sym_using_timestamp_spec,
    ACTIONS(1002), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10313] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(184), 1,
      sym__string_literal,
    STATE(314), 1,
      sym_index_name,
  [10329] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(604), 1,
      sym_replication_list_item,
    STATE(804), 1,
      sym_replication_list,
    STATE(805), 1,
      sym__string_literal,
  [10345] = 5,
    ACTIONS(879), 1,
      anon_sym_STAR,
    ACTIONS(956), 1,
      sym_object_name,
    STATE(517), 1,
      sym_select_element,
    STATE(518), 1,
      sym_function_call,
    STATE(747), 1,
      sym_select_elements,
  [10361] = 2,
    ACTIONS(1004), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(522), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [10371] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(1006), 1,
      sym__dec_digit,
    STATE(588), 1,
      aux_sym__decimal_literal,
    STATE(820), 1,
      sym__string_literal,
  [10387] = 5,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(542), 1,
      sym_if_not_exist,
    STATE(941), 1,
      sym_keyspace,
  [10403] = 1,
    ACTIONS(1008), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10411] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(456), 1,
      aux_sym_update_repeat1,
  [10424] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10435] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(453), 1,
      aux_sym_update_repeat1,
  [10448] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [10461] = 4,
    ACTIONS(964), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
    STATE(771), 1,
      sym_using_timestamp_spec,
  [10474] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
    STATE(472), 1,
      aux_sym_update_repeat1,
  [10487] = 4,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(142), 1,
      sym_role,
    STATE(704), 1,
      sym_if_not_exist,
  [10500] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(117), 1,
      sym_table,
    STATE(826), 1,
      sym_keyspace,
  [10513] = 2,
    ACTIONS(1018), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1020), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10522] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(855), 1,
      sym_keyspace,
    STATE(856), 1,
      sym_type,
  [10535] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(442), 1,
      aux_sym_update_repeat1,
  [10548] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(301), 1,
      sym_table,
    STATE(927), 1,
      sym_keyspace,
  [10561] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(267), 1,
      sym_table,
    STATE(873), 1,
      sym_keyspace,
  [10574] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(303), 1,
      sym_table,
    STATE(792), 1,
      sym_keyspace,
  [10587] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [10600] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(238), 1,
      sym_table,
    STATE(965), 1,
      sym_keyspace,
  [10613] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10624] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [10637] = 2,
    ACTIONS(1024), 1,
      anon_sym_SQUOTE,
    ACTIONS(682), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [10646] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(398), 1,
      sym_table,
    STATE(970), 1,
      sym_keyspace,
  [10659] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(273), 1,
      sym_function,
    STATE(882), 1,
      sym_keyspace,
  [10672] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(843), 1,
      sym_keyspace,
    STATE(850), 1,
      sym_trigger,
  [10685] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(841), 1,
      sym_type_member_column_list,
  [10698] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(324), 1,
      sym__string_literal,
    STATE(326), 1,
      sym_trigger_class,
  [10711] = 4,
    ACTIONS(867), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(710), 1,
      sym_if_not_exist,
    STATE(787), 1,
      sym_user,
  [10724] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(240), 1,
      sym_table,
    STATE(794), 1,
      sym_keyspace,
  [10737] = 4,
    ACTIONS(1028), 1,
      sym_object_name,
    STATE(110), 1,
      sym_table_option_item,
    STATE(264), 1,
      sym_table_options,
    STATE(854), 1,
      sym_table_option_name,
  [10750] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(663), 1,
      sym_column_definition,
  [10763] = 4,
    ACTIONS(964), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(93), 1,
      sym_where_spec,
    STATE(684), 1,
      sym_using_timestamp_spec,
  [10776] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(990), 1,
      sym_table,
    STATE(993), 1,
      sym_keyspace,
  [10789] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(257), 1,
      sym_alter_table_column_definition,
  [10802] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(789), 1,
      sym_type_member_column_list,
  [10815] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(648), 1,
      sym_column,
    STATE(1022), 1,
      sym_column_list,
  [10828] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(103), 1,
      sym_where_spec,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [10841] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(955), 1,
      sym_type_member_column_list,
  [10854] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(117), 1,
      sym_function,
    STATE(827), 1,
      sym_keyspace,
  [10867] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(313), 1,
      sym_trigger_class,
    STATE(324), 1,
      sym__string_literal,
  [10880] = 4,
    ACTIONS(1030), 1,
      sym_object_name,
    ACTIONS(1032), 1,
      aux_sym_if_exist_token2,
    STATE(178), 1,
      sym_if_condition,
    STATE(223), 1,
      sym_if_condition_list,
  [10893] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(279), 1,
      sym_table,
    STATE(781), 1,
      sym_keyspace,
  [10906] = 1,
    ACTIONS(1034), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10913] = 4,
    ACTIONS(964), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
    STATE(715), 1,
      sym_using_timestamp_spec,
  [10926] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(103), 1,
      sym_where_spec,
    STATE(503), 1,
      aux_sym_update_repeat1,
  [10939] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(601), 1,
      sym_option_hash_item,
    STATE(785), 1,
      sym__string_literal,
  [10952] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(858), 1,
      sym_keyspace,
    STATE(926), 1,
      sym_function,
  [10965] = 4,
    ACTIONS(814), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(280), 1,
      sym_role,
    STATE(724), 1,
      sym_if_exist,
  [10978] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(890), 1,
      sym_type_member_column_list,
  [10991] = 4,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(200), 1,
      sym_alter_type_rename_item,
    STATE(872), 1,
      sym_column,
  [11004] = 3,
    ACTIONS(1038), 1,
      aux_sym_primary_key_column_token1,
    STATE(657), 1,
      sym_primary_key_column,
    ACTIONS(1036), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11015] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(829), 1,
      sym_keyspace,
    STATE(832), 1,
      sym_function,
  [11028] = 1,
    ACTIONS(950), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11035] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(232), 1,
      sym_trigger_class,
    STATE(324), 1,
      sym__string_literal,
  [11048] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(802), 1,
      sym_keyspace,
    STATE(807), 1,
      sym_table,
  [11061] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(345), 1,
      sym_table,
    STATE(864), 1,
      sym_keyspace,
  [11074] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(788), 1,
      sym_keyspace,
    STATE(859), 1,
      sym_table,
  [11087] = 3,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(966), 1,
      sym_order_direction,
    ACTIONS(214), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [11098] = 4,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_function_args_repeat1,
  [11111] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(690), 1,
      sym_partition_key,
    STATE(705), 1,
      sym_column,
  [11124] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(372), 1,
      sym_type,
    STATE(861), 1,
      sym_keyspace,
  [11137] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    STATE(610), 1,
      aux_sym_assignment_tuple_repeat1,
  [11150] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(720), 1,
      sym_replication_list_item,
    STATE(805), 1,
      sym__string_literal,
  [11163] = 4,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(683), 1,
      sym_clustering_key,
    STATE(695), 1,
      sym_column,
  [11176] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(524), 1,
      sym_table,
    STATE(1015), 1,
      sym_keyspace,
  [11189] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(414), 1,
      sym_table,
    STATE(967), 1,
      sym_keyspace,
  [11202] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(652), 1,
      sym_option_hash_item,
    STATE(785), 1,
      sym__string_literal,
  [11215] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(128), 1,
      sym_where_spec,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [11228] = 4,
    ACTIONS(1052), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1054), 1,
      aux_sym_ttl_token1,
    STATE(132), 1,
      sym_ttl,
    STATE(133), 1,
      sym_timestamp,
  [11241] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(940), 1,
      sym_keyspace,
    STATE(977), 1,
      sym_table,
  [11254] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(284), 1,
      sym_user,
    STATE(893), 1,
      sym_keyspace,
  [11267] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(281), 1,
      sym_type,
    STATE(891), 1,
      sym_keyspace,
  [11280] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(243), 1,
      sym_trigger_class,
    STATE(324), 1,
      sym__string_literal,
  [11293] = 4,
    ACTIONS(770), 1,
      sym_object_name,
    ACTIONS(772), 1,
      sym__dquote,
    STATE(576), 1,
      sym_table,
    STATE(852), 1,
      sym_keyspace,
  [11306] = 4,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(886), 1,
      sym_keyspace,
    STATE(889), 1,
      sym_trigger,
  [11319] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(844), 1,
      sym_return_mode,
  [11329] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_expression_list_repeat1,
  [11339] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(289), 1,
      sym_keyspace,
  [11349] = 3,
    ACTIONS(1064), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1066), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1068), 1,
      aux_sym_update_token1,
  [11359] = 3,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(135), 1,
      sym_column,
  [11369] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      aux_sym_column_list_repeat1,
  [11379] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      aux_sym_from_spec_token1,
    STATE(530), 1,
      aux_sym_select_elements_repeat1,
  [11389] = 2,
    ACTIONS(980), 1,
      aux_sym_select_element_token1,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11397] = 2,
    ACTIONS(1080), 1,
      anon_sym_LBRACK,
    ACTIONS(1078), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11405] = 3,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      aux_sym_from_spec_token1,
    STATE(533), 1,
      aux_sym_delete_column_list_repeat1,
  [11415] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(135), 1,
      sym_column,
  [11425] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_expression_list_repeat1,
  [11435] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_relation_element_repeat1,
  [11445] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1092), 1,
      aux_sym_update_token2,
    STATE(866), 1,
      sym_using_ttl_timestamp,
  [11455] = 3,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_function_args_repeat1,
  [11465] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(862), 1,
      sym_keyspace,
  [11475] = 2,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11483] = 3,
    ACTIONS(1099), 1,
      sym__hex_digit,
    ACTIONS(1102), 1,
      anon_sym_SQUOTE,
    STATE(528), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [11493] = 3,
    ACTIONS(956), 1,
      sym_object_name,
    STATE(518), 1,
      sym_function_call,
    STATE(748), 1,
      sym_select_element,
  [11503] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      aux_sym_from_spec_token1,
    STATE(580), 1,
      aux_sym_select_elements_repeat1,
  [11513] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_clustering_key_list_repeat1,
  [11523] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_column_definition_list_repeat1,
  [11533] = 3,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      aux_sym_from_spec_token1,
    STATE(590), 1,
      aux_sym_delete_column_list_repeat1,
  [11543] = 1,
    ACTIONS(962), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11549] = 3,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_clustering_key_list_repeat1,
  [11559] = 3,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_partition_key_list_repeat1,
  [11569] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(980), 1,
      sym_return_mode,
  [11579] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(241), 1,
      sym_table,
  [11589] = 3,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      aux_sym_clustering_key_list_repeat1,
  [11599] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_partition_key_list_repeat1,
  [11609] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(1002), 1,
      sym_table,
  [11619] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(819), 1,
      sym_keyspace,
  [11629] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [11639] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(961), 1,
      sym_return_mode,
  [11649] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(1140), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11657] = 3,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(639), 1,
      sym_param,
  [11667] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_partition_key_list_repeat1,
  [11677] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(988), 1,
      sym_return_mode,
  [11687] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [11697] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(493), 1,
      sym_column,
  [11707] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    STATE(551), 1,
      aux_sym_assignment_map_repeat1,
  [11717] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [11727] = 2,
    ACTIONS(1159), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1157), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [11735] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_create_function_repeat1,
  [11745] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [11755] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 1,
      sym__string_literal,
  [11765] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [11775] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_option_hash_repeat1,
  [11785] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
  [11795] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1168), 1,
      aux_sym_update_token2,
    STATE(899), 1,
      sym_using_ttl_timestamp,
  [11805] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
  [11815] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(934), 1,
      sym_return_mode,
  [11825] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(403), 1,
      sym_table,
  [11835] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    STATE(564), 1,
      aux_sym_replication_list_repeat1,
  [11845] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(271), 1,
      sym_keyspace,
  [11855] = 3,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_GT,
    STATE(566), 1,
      aux_sym_data_type_definition_repeat1,
  [11865] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_type_member_column_list_repeat1,
  [11875] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    STATE(551), 1,
      aux_sym_assignment_map_repeat1,
  [11885] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_relation_element_repeat2,
  [11895] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [11905] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(620), 1,
      sym_table,
  [11915] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(252), 1,
      sym_table,
  [11925] = 3,
    ACTIONS(1144), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_param,
  [11935] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_create_function_repeat1,
  [11945] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_option_hash_repeat1,
  [11955] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1194), 1,
      aux_sym_update_token2,
    STATE(975), 1,
      sym_using_ttl_timestamp,
  [11965] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [11975] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(897), 1,
      sym_return_mode,
  [11985] = 3,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    STATE(564), 1,
      aux_sym_replication_list_repeat1,
  [11995] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      aux_sym_from_spec_token1,
    STATE(580), 1,
      aux_sym_select_elements_repeat1,
  [12005] = 3,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_GT,
    STATE(566), 1,
      aux_sym_data_type_definition_repeat1,
  [12015] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(301), 1,
      sym_table,
  [12025] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(122), 1,
      sym_table,
  [12035] = 3,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_function_args_repeat1,
  [12045] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    STATE(568), 1,
      aux_sym_assignment_map_repeat1,
  [12055] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [12065] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [12075] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [12085] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_relation_element_repeat2,
  [12095] = 3,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      aux_sym_from_spec_token1,
    STATE(590), 1,
      aux_sym_delete_column_list_repeat1,
  [12105] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [12115] = 1,
    ACTIONS(1229), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12121] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(395), 1,
      sym_table,
  [12131] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(86), 1,
      sym_insert_values_spec,
  [12141] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      aux_sym_where_spec_token1,
    STATE(595), 1,
      aux_sym_update_repeat1,
  [12151] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(206), 1,
      sym_table,
  [12161] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(129), 1,
      sym_table,
  [12171] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(205), 1,
      sym_table,
  [12181] = 3,
    ACTIONS(1144), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_param,
  [12191] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(999), 1,
      sym_table,
  [12201] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      aux_sym_option_hash_repeat1,
  [12211] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_create_function_repeat1,
  [12221] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [12231] = 3,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    STATE(579), 1,
      aux_sym_replication_list_repeat1,
  [12241] = 3,
    ACTIONS(1028), 1,
      sym_object_name,
    STATE(134), 1,
      sym_table_option_item,
    STATE(854), 1,
      sym_table_option_name,
  [12251] = 3,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_GT,
    STATE(581), 1,
      aux_sym_data_type_definition_repeat1,
  [12261] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_expression_list_repeat1,
  [12271] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(261), 1,
      sym_table,
  [12281] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(278), 1,
      sym_column,
  [12291] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_assignment_tuple_repeat1,
  [12301] = 3,
    ACTIONS(1144), 1,
      sym_object_name,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_param,
  [12311] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(154), 1,
      sym__string_literal,
  [12321] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_RBRACK,
    STATE(405), 1,
      aux_sym_assignment_tuple_repeat1,
  [12331] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(196), 1,
      sym_column,
  [12341] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_assignment_tuple_repeat1,
  [12351] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [12361] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_relation_element_repeat2,
  [12371] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(82), 1,
      sym_insert_values_spec,
  [12381] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(317), 1,
      sym_table,
  [12391] = 3,
    ACTIONS(273), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1257), 1,
      aux_sym_update_token2,
    STATE(798), 1,
      sym_using_ttl_timestamp,
  [12401] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(102), 1,
      sym_keyspace,
  [12411] = 3,
    ACTIONS(1259), 1,
      aux_sym_resource_token1,
    ACTIONS(1261), 1,
      aux_sym_resource_token4,
    ACTIONS(1263), 1,
      aux_sym_resource_token5,
  [12421] = 3,
    ACTIONS(816), 1,
      sym__dquote,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(117), 1,
      sym_keyspace,
  [12431] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(344), 1,
      sym_table,
  [12441] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(240), 1,
      sym_table,
  [12451] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(857), 1,
      sym_column,
  [12461] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_create_function_repeat1,
  [12471] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(920), 1,
      sym_return_mode,
  [12481] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_type_member_column_list_repeat1,
  [12491] = 3,
    ACTIONS(1144), 1,
      sym_object_name,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_param,
  [12501] = 3,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(19), 1,
      sym_column,
  [12511] = 3,
    ACTIONS(992), 1,
      sym_object_name,
    ACTIONS(994), 1,
      sym__dquote,
    STATE(871), 1,
      sym_column,
  [12521] = 3,
    ACTIONS(788), 1,
      sym_object_name,
    ACTIONS(790), 1,
      sym__dquote,
    STATE(28), 1,
      sym_column,
  [12531] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(560), 1,
      sym_table,
  [12541] = 3,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_relation_element_repeat1,
  [12551] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [12561] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_create_function_repeat1,
  [12571] = 3,
    ACTIONS(1144), 1,
      sym_object_name,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_param,
  [12581] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_create_function_repeat1,
  [12591] = 3,
    ACTIONS(1056), 1,
      aux_sym_create_function_token3,
    ACTIONS(1058), 1,
      aux_sym_return_mode_token1,
    STATE(801), 1,
      sym_return_mode,
  [12601] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(977), 1,
      sym_table,
  [12611] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(985), 1,
      sym_table,
  [12621] = 3,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      aux_sym_column_definition_list_repeat1,
  [12631] = 3,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      sym__dquote,
    STATE(806), 1,
      sym_table,
  [12641] = 3,
    ACTIONS(1285), 1,
      sym__hex_digit,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    STATE(528), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [12651] = 3,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_function_args_repeat1,
  [12661] = 3,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    STATE(647), 1,
      aux_sym_column_list_repeat1,
  [12671] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_column_list_repeat1,
  [12681] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1296), 1,
      anon_sym_RBRACK,
    STATE(613), 1,
      aux_sym_assignment_tuple_repeat1,
  [12691] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_column_definition_list_repeat1,
  [12701] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      aux_sym_relation_element_repeat1,
  [12711] = 1,
    ACTIONS(1166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12716] = 2,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(687), 1,
      sym_param,
  [12723] = 1,
    ACTIONS(1305), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [12728] = 1,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12733] = 2,
    ACTIONS(1030), 1,
      sym_object_name,
    STATE(180), 1,
      sym_if_condition,
  [12740] = 1,
    ACTIONS(1307), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12745] = 2,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(47), 1,
      sym_from_spec,
  [12752] = 1,
    ACTIONS(1311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12757] = 1,
    ACTIONS(1313), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12762] = 2,
    ACTIONS(1315), 1,
      sym_object_name,
    STATE(166), 1,
      sym_order_spec_element,
  [12769] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(64), 1,
      sym_from_spec_element,
  [12776] = 1,
    ACTIONS(1301), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12781] = 2,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(443), 1,
      sym_from_spec,
  [12788] = 2,
    ACTIONS(1319), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [12795] = 2,
    ACTIONS(1321), 1,
      sym__hex_digit,
    STATE(52), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12802] = 2,
    ACTIONS(1323), 1,
      sym__hex_digit,
    STATE(63), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12809] = 1,
    ACTIONS(1102), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [12814] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(170), 1,
      sym_role,
  [12821] = 2,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(860), 1,
      sym_user,
  [12828] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(249), 1,
      sym_code_block,
  [12835] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(231), 1,
      sym_code_block,
  [12842] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(1005), 1,
      sym_language,
  [12849] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(229), 1,
      sym_code_block,
  [12856] = 2,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(44), 1,
      sym_from_spec,
  [12863] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(1001), 1,
      sym_language,
  [12870] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(288), 1,
      sym_code_block,
  [12877] = 2,
    ACTIONS(1329), 1,
      sym__dec_digit,
    STATE(8), 1,
      aux_sym__decimal_literal,
  [12884] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(286), 1,
      sym_type,
  [12891] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(996), 1,
      sym_language,
  [12898] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(210), 1,
      sym_code_block,
  [12905] = 2,
    ACTIONS(1052), 1,
      aux_sym_timestamp_token1,
    STATE(478), 1,
      sym_timestamp,
  [12912] = 1,
    ACTIONS(1109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12917] = 2,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
  [12924] = 2,
    ACTIONS(952), 1,
      sym_object_name,
    STATE(772), 1,
      sym_delete_column_item,
  [12931] = 2,
    ACTIONS(1333), 1,
      sym__dec_digit,
    STATE(104), 1,
      aux_sym__decimal_literal,
  [12938] = 1,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12943] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(989), 1,
      sym_language,
  [12950] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(214), 1,
      sym_code_block,
  [12957] = 1,
    ACTIONS(1124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12962] = 1,
    ACTIONS(1335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12967] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(216), 1,
      sym_code_block,
  [12974] = 2,
    ACTIONS(1337), 1,
      aux_sym_role_with_options_token1,
    STATE(106), 1,
      sym_user_password,
  [12981] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(974), 1,
      sym_language,
  [12988] = 1,
    ACTIONS(1339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12993] = 1,
    ACTIONS(1341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12998] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(373), 1,
      sym_type,
  [13005] = 1,
    ACTIONS(1272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13010] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(926), 1,
      sym_function,
  [13017] = 2,
    ACTIONS(1325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(237), 1,
      sym_code_block,
  [13024] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(954), 1,
      sym_language,
  [13031] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(793), 1,
      sym_function,
  [13038] = 2,
    ACTIONS(1345), 1,
      aux_sym_durable_writes_token1,
    STATE(246), 1,
      sym_durable_writes,
  [13045] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(176), 1,
      sym_role,
  [13052] = 1,
    ACTIONS(1347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13057] = 2,
    ACTIONS(1349), 1,
      sym__dec_digit,
    STATE(121), 1,
      aux_sym__decimal_literal,
  [13064] = 1,
    ACTIONS(1351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13069] = 2,
    ACTIONS(1345), 1,
      aux_sym_durable_writes_token1,
    STATE(318), 1,
      sym_durable_writes,
  [13076] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(117), 1,
      sym_role,
  [13083] = 2,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(1032), 1,
      sym_user,
  [13090] = 2,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_option_hash,
  [13097] = 2,
    ACTIONS(1353), 1,
      sym__dec_digit,
    STATE(112), 1,
      aux_sym__decimal_literal,
  [13104] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(935), 1,
      sym_language,
  [13111] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(439), 1,
      sym_assignment_element,
  [13118] = 2,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(116), 1,
      sym_where_spec,
  [13125] = 2,
    ACTIONS(1357), 1,
      anon_sym_EQ,
    ACTIONS(1359), 1,
      anon_sym_LBRACK,
  [13132] = 2,
    ACTIONS(1361), 1,
      sym__dec_digit,
    STATE(83), 1,
      aux_sym__decimal_literal,
  [13139] = 2,
    ACTIONS(1345), 1,
      aux_sym_durable_writes_token1,
    STATE(202), 1,
      sym_durable_writes,
  [13146] = 2,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(298), 1,
      sym_user,
  [13153] = 1,
    ACTIONS(1173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13158] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(300), 1,
      sym_type,
  [13165] = 1,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13170] = 2,
    ACTIONS(1363), 1,
      sym_object_name,
    STATE(796), 1,
      sym_trigger,
  [13177] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(275), 1,
      sym_role,
  [13184] = 2,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [13191] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(311), 1,
      sym_function,
  [13198] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(293), 1,
      sym_role,
  [13205] = 1,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13210] = 1,
    ACTIONS(1140), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [13215] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(295), 1,
      sym_role,
  [13222] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(480), 1,
      sym_assignment_element,
  [13229] = 1,
    ACTIONS(1367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13234] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(449), 1,
      sym_assignment_element,
  [13241] = 2,
    ACTIONS(1337), 1,
      aux_sym_role_with_options_token1,
    STATE(124), 1,
      sym_user_password,
  [13248] = 2,
    ACTIONS(1369), 1,
      sym__dec_digit,
    STATE(97), 1,
      aux_sym__decimal_literal,
  [13255] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13260] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(589), 1,
      sym_assignment_tuple,
  [13267] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(936), 1,
      sym_function,
  [13274] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(189), 1,
      sym_role,
  [13281] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(321), 1,
      sym_role,
  [13288] = 2,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(479), 1,
      sym_from_spec,
  [13295] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(853), 1,
      sym_type,
  [13302] = 1,
    ACTIONS(1373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13307] = 2,
    ACTIONS(1363), 1,
      sym_object_name,
    STATE(904), 1,
      sym_trigger,
  [13314] = 2,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(902), 1,
      sym_language,
  [13321] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(892), 1,
      sym_type,
  [13328] = 2,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(51), 1,
      sym_from_spec,
  [13335] = 1,
    ACTIONS(1203), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13340] = 2,
    ACTIONS(1016), 1,
      sym_object_name,
    STATE(302), 1,
      sym_role,
  [13347] = 2,
    ACTIONS(1363), 1,
      sym_object_name,
    STATE(877), 1,
      sym_trigger,
  [13354] = 2,
    ACTIONS(1337), 1,
      aux_sym_role_with_options_token1,
    STATE(108), 1,
      sym_user_password,
  [13361] = 1,
    ACTIONS(1375), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13366] = 1,
    ACTIONS(1247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13371] = 2,
    ACTIONS(1377), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [13378] = 2,
    ACTIONS(1285), 1,
      sym__hex_digit,
    STATE(645), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [13385] = 1,
    ACTIONS(1379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13390] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(274), 1,
      sym_function,
  [13397] = 2,
    ACTIONS(1381), 1,
      sym__hex_digit,
    STATE(357), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [13404] = 2,
    ACTIONS(1383), 1,
      sym__dec_digit,
    STATE(107), 1,
      aux_sym__decimal_literal,
  [13411] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(958), 1,
      sym_function,
  [13418] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(444), 1,
      sym_assignment_element,
  [13425] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(773), 1,
      sym_assignment_element,
  [13432] = 1,
    ACTIONS(1385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13437] = 1,
    ACTIONS(1387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13442] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(766), 1,
      sym_assignment_tuple,
  [13449] = 1,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13454] = 1,
    ACTIONS(1018), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13459] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(569), 1,
      sym_assignment_tuple,
  [13466] = 2,
    ACTIONS(1389), 1,
      sym__dec_digit,
    STATE(591), 1,
      aux_sym__decimal_literal,
  [13473] = 2,
    ACTIONS(1391), 1,
      sym__dec_digit,
    STATE(69), 1,
      aux_sym__decimal_literal,
  [13480] = 2,
    ACTIONS(1012), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
  [13487] = 1,
    ACTIONS(1225), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13492] = 1,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13497] = 2,
    ACTIONS(1363), 1,
      sym_object_name,
    STATE(846), 1,
      sym_trigger,
  [13504] = 2,
    ACTIONS(1052), 1,
      aux_sym_timestamp_token1,
    STATE(192), 1,
      sym_timestamp,
  [13511] = 1,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13516] = 2,
    ACTIONS(1054), 1,
      aux_sym_ttl_token1,
    STATE(192), 1,
      sym_ttl,
  [13523] = 2,
    ACTIONS(1343), 1,
      sym_object_name,
    STATE(129), 1,
      sym_function,
  [13530] = 2,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(441), 1,
      sym_assignment_element,
  [13537] = 2,
    ACTIONS(1026), 1,
      sym_object_name,
    STATE(294), 1,
      sym_user,
  [13544] = 1,
    ACTIONS(1393), 1,
      anon_sym_DOT,
  [13548] = 1,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
  [13552] = 1,
    ACTIONS(1397), 1,
      aux_sym_return_mode_token2,
  [13556] = 1,
    ACTIONS(1399), 1,
      aux_sym_create_function_token4,
  [13560] = 1,
    ACTIONS(1401), 1,
      anon_sym_COLON,
  [13564] = 1,
    ACTIONS(1403), 1,
      sym_object_name,
  [13568] = 1,
    ACTIONS(1405), 1,
      aux_sym_create_keyspace_token1,
  [13572] = 1,
    ACTIONS(1407), 1,
      anon_sym_DOT,
  [13576] = 1,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [13580] = 1,
    ACTIONS(1411), 1,
      anon_sym_SQUOTE,
  [13584] = 1,
    ACTIONS(1413), 1,
      aux_sym_if_exist_token2,
  [13588] = 1,
    ACTIONS(1415), 1,
      anon_sym_DOT,
  [13592] = 1,
    ACTIONS(1417), 1,
      anon_sym_LPAREN,
  [13596] = 1,
    ACTIONS(1419), 1,
      anon_sym_DOT,
  [13600] = 1,
    ACTIONS(1421), 1,
      sym_object_name,
  [13604] = 1,
    ACTIONS(1423), 1,
      aux_sym_create_index_token3,
  [13608] = 1,
    ACTIONS(1425), 1,
      aux_sym_resource_token2,
  [13612] = 1,
    ACTIONS(1168), 1,
      aux_sym_update_token2,
  [13616] = 1,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
  [13620] = 1,
    ACTIONS(1411), 1,
      anon_sym_DOLLAR_DOLLAR,
  [13624] = 1,
    ACTIONS(1429), 1,
      aux_sym_create_function_token3,
  [13628] = 1,
    ACTIONS(1431), 1,
      anon_sym_DOT,
  [13632] = 1,
    ACTIONS(1433), 1,
      anon_sym_RBRACE,
  [13636] = 1,
    ACTIONS(1435), 1,
      anon_sym_RBRACE,
  [13640] = 1,
    ACTIONS(1437), 1,
      anon_sym_COLON,
  [13644] = 1,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
  [13648] = 1,
    ACTIONS(1441), 1,
      anon_sym_LPAREN,
  [13652] = 1,
    ACTIONS(1443), 1,
      aux_sym_select_statement_token6,
  [13656] = 1,
    ACTIONS(1445), 1,
      sym_object_name,
  [13660] = 1,
    ACTIONS(1447), 1,
      sym__hex_4digit,
  [13664] = 1,
    ACTIONS(1449), 1,
      aux_sym_create_index_token3,
  [13668] = 1,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
  [13672] = 1,
    ACTIONS(1453), 1,
      sym_object_name,
  [13676] = 1,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
  [13680] = 1,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [13684] = 1,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [13688] = 1,
    ACTIONS(1461), 1,
      aux_sym_create_keyspace_token2,
  [13692] = 1,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
  [13696] = 1,
    ACTIONS(1465), 1,
      aux_sym_create_keyspace_token1,
  [13700] = 1,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
  [13704] = 1,
    ACTIONS(1467), 1,
      aux_sym_order_spec_token2,
  [13708] = 1,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
  [13712] = 1,
    ACTIONS(1471), 1,
      aux_sym_select_statement_token6,
  [13716] = 1,
    ACTIONS(1473), 1,
      anon_sym_LPAREN,
  [13720] = 1,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
  [13724] = 1,
    ACTIONS(1477), 1,
      anon_sym_DOT,
  [13728] = 1,
    ACTIONS(1479), 1,
      anon_sym_DOT,
  [13732] = 1,
    ACTIONS(1481), 1,
      aux_sym_order_spec_token2,
  [13736] = 1,
    ACTIONS(1483), 1,
      anon_sym_DOT,
  [13740] = 1,
    ACTIONS(1485), 1,
      aux_sym_order_spec_token1,
  [13744] = 1,
    ACTIONS(1487), 1,
      anon_sym_DASH,
  [13748] = 1,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
  [13752] = 1,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
  [13756] = 1,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
  [13760] = 1,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
  [13764] = 1,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
  [13768] = 1,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
  [13772] = 1,
    ACTIONS(1501), 1,
      anon_sym_LBRACE,
  [13776] = 1,
    ACTIONS(1503), 1,
      anon_sym_DOT,
  [13780] = 1,
    ACTIONS(1505), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [13784] = 1,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [13788] = 1,
    ACTIONS(1509), 1,
      anon_sym_RBRACE,
  [13792] = 1,
    ACTIONS(1511), 1,
      anon_sym_DOT,
  [13796] = 1,
    ACTIONS(1513), 1,
      aux_sym_create_function_token3,
  [13800] = 1,
    ACTIONS(1515), 1,
      anon_sym_LPAREN,
  [13804] = 1,
    ACTIONS(1517), 1,
      aux_sym_create_index_token3,
  [13808] = 1,
    ACTIONS(1519), 1,
      aux_sym_create_function_token4,
  [13812] = 1,
    ACTIONS(1521), 1,
      aux_sym_return_mode_token2,
  [13816] = 1,
    ACTIONS(1523), 1,
      aux_sym_create_function_token3,
  [13820] = 1,
    ACTIONS(1525), 1,
      aux_sym_using_timestamp_spec_token1,
  [13824] = 1,
    ACTIONS(1527), 1,
      anon_sym_EQ,
  [13828] = 1,
    ACTIONS(1529), 1,
      anon_sym_DOT,
  [13832] = 1,
    ACTIONS(1531), 1,
      anon_sym_LPAREN,
  [13836] = 1,
    ACTIONS(1533), 1,
      anon_sym_EQ,
  [13840] = 1,
    ACTIONS(1535), 1,
      anon_sym_DOT,
  [13844] = 1,
    ACTIONS(1537), 1,
      anon_sym_LPAREN,
  [13848] = 1,
    ACTIONS(1539), 1,
      aux_sym_grant_token2,
  [13852] = 1,
    ACTIONS(1541), 1,
      anon_sym_DOT,
  [13856] = 1,
    ACTIONS(1543), 1,
      anon_sym_LPAREN,
  [13860] = 1,
    ACTIONS(1545), 1,
      aux_sym_create_keyspace_token1,
  [13864] = 1,
    ACTIONS(1547), 1,
      anon_sym_DOT,
  [13868] = 1,
    ACTIONS(1549), 1,
      aux_sym_create_keyspace_token1,
  [13872] = 1,
    ACTIONS(1551), 1,
      anon_sym_LPAREN,
  [13876] = 1,
    ACTIONS(1553), 1,
      anon_sym_DOT,
  [13880] = 1,
    ACTIONS(1555), 1,
      sym__dquote,
  [13884] = 1,
    ACTIONS(1194), 1,
      aux_sym_update_token2,
  [13888] = 1,
    ACTIONS(1557), 1,
      anon_sym_DASH,
  [13892] = 1,
    ACTIONS(1559), 1,
      aux_sym_select_statement_token6,
  [13896] = 1,
    ACTIONS(1561), 1,
      anon_sym_DASH,
  [13900] = 1,
    ACTIONS(1563), 1,
      anon_sym_EQ,
  [13904] = 1,
    ACTIONS(1565), 1,
      aux_sym_drop_type_token1,
  [13908] = 1,
    ACTIONS(1567), 1,
      aux_sym_grant_token2,
  [13912] = 1,
    ACTIONS(1569), 1,
      anon_sym_DOT,
  [13916] = 1,
    ACTIONS(1571), 1,
      anon_sym_DOT,
  [13920] = 1,
    ACTIONS(1573), 1,
      anon_sym_DOT,
  [13924] = 1,
    ACTIONS(1575), 1,
      aux_sym_select_statement_token6,
  [13928] = 1,
    ACTIONS(1577), 1,
      aux_sym_using_timestamp_spec_token1,
  [13932] = 1,
    ACTIONS(1579), 1,
      aux_sym_create_index_token3,
  [13936] = 1,
    ACTIONS(1581), 1,
      anon_sym_DOT,
  [13940] = 1,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
  [13944] = 1,
    ACTIONS(1585), 1,
      anon_sym_DOT,
  [13948] = 1,
    ACTIONS(1587), 1,
      anon_sym_DOT,
  [13952] = 1,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
  [13956] = 1,
    ACTIONS(1591), 1,
      anon_sym_RPAREN,
  [13960] = 1,
    ACTIONS(1593), 1,
      anon_sym_COMMA,
  [13964] = 1,
    ACTIONS(1595), 1,
      anon_sym_DOT,
  [13968] = 1,
    ACTIONS(1597), 1,
      anon_sym_DOT,
  [13972] = 1,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
  [13976] = 1,
    ACTIONS(1601), 1,
      aux_sym_create_index_token3,
  [13980] = 1,
    ACTIONS(1603), 1,
      anon_sym_RPAREN,
  [13984] = 1,
    ACTIONS(1605), 1,
      anon_sym_DOT,
  [13988] = 1,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
  [13992] = 1,
    ACTIONS(1609), 1,
      anon_sym_DOT,
  [13996] = 1,
    ACTIONS(1611), 1,
      anon_sym_DOT,
  [14000] = 1,
    ACTIONS(1613), 1,
      aux_sym_create_function_token4,
  [14004] = 1,
    ACTIONS(1615), 1,
      anon_sym_DOT,
  [14008] = 1,
    ACTIONS(1617), 1,
      aux_sym_create_function_token3,
  [14012] = 1,
    ACTIONS(1619), 1,
      anon_sym_EQ,
  [14016] = 1,
    ACTIONS(1621), 1,
      aux_sym_update_token2,
  [14020] = 1,
    ACTIONS(1623), 1,
      aux_sym_create_function_token3,
  [14024] = 1,
    ACTIONS(1625), 1,
      aux_sym_select_element_token1,
  [14028] = 1,
    ACTIONS(1627), 1,
      aux_sym_select_element_token1,
  [14032] = 1,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
  [14036] = 1,
    ACTIONS(1631), 1,
      aux_sym_using_timestamp_spec_token1,
  [14040] = 1,
    ACTIONS(1633), 1,
      aux_sym_if_exist_token2,
  [14044] = 1,
    ACTIONS(1635), 1,
      anon_sym_EQ,
  [14048] = 1,
    ACTIONS(1637), 1,
      anon_sym_EQ,
  [14052] = 1,
    ACTIONS(1639), 1,
      sym__boolean_literal,
  [14056] = 1,
    ACTIONS(1641), 1,
      aux_sym_resource_token3,
  [14060] = 1,
    ACTIONS(1643), 1,
      aux_sym_constant_token1,
  [14064] = 1,
    ACTIONS(1645), 1,
      anon_sym_EQ,
  [14068] = 1,
    ACTIONS(1647), 1,
      sym__dquote,
  [14072] = 1,
    ACTIONS(1649), 1,
      anon_sym_LPAREN,
  [14076] = 1,
    ACTIONS(1651), 1,
      anon_sym_DOT,
  [14080] = 1,
    ACTIONS(1653), 1,
      sym__hex_4digit,
  [14084] = 1,
    ACTIONS(1655), 1,
      aux_sym_using_timestamp_spec_token1,
  [14088] = 1,
    ACTIONS(1657), 1,
      anon_sym_DOT,
  [14092] = 1,
    ACTIONS(1659), 1,
      anon_sym_COLON,
  [14096] = 1,
    ACTIONS(1661), 1,
      anon_sym_DOT,
  [14100] = 1,
    ACTIONS(1663), 1,
      aux_sym_create_function_token3,
  [14104] = 1,
    ACTIONS(1665), 1,
      aux_sym_create_index_token3,
  [14108] = 1,
    ACTIONS(1667), 1,
      aux_sym_grant_token2,
  [14112] = 1,
    ACTIONS(1669), 1,
      aux_sym_constant_token1,
  [14116] = 1,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [14120] = 1,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
  [14124] = 1,
    ACTIONS(1675), 1,
      anon_sym_LPAREN,
  [14128] = 1,
    ACTIONS(1677), 1,
      anon_sym_DOT,
  [14132] = 1,
    ACTIONS(1679), 1,
      aux_sym_durable_writes_token2,
  [14136] = 1,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
  [14140] = 1,
    ACTIONS(1683), 1,
      aux_sym_select_statement_token6,
  [14144] = 1,
    ACTIONS(1685), 1,
      sym__hex_4digit,
  [14148] = 1,
    ACTIONS(1687), 1,
      aux_sym_create_function_token4,
  [14152] = 1,
    ACTIONS(1689), 1,
      anon_sym_DOT,
  [14156] = 1,
    ACTIONS(1691), 1,
      aux_sym_create_function_token3,
  [14160] = 1,
    ACTIONS(1693), 1,
      aux_sym_select_element_token1,
  [14164] = 1,
    ACTIONS(1695), 1,
      anon_sym_LPAREN,
  [14168] = 1,
    ACTIONS(1697), 1,
      aux_sym_create_keyspace_token2,
  [14172] = 1,
    ACTIONS(1699), 1,
      anon_sym_GT,
  [14176] = 1,
    ACTIONS(1701), 1,
      anon_sym_LBRACE,
  [14180] = 1,
    ACTIONS(1703), 1,
      anon_sym_DOT,
  [14184] = 1,
    ACTIONS(1705), 1,
      aux_sym_create_keyspace_token1,
  [14188] = 1,
    ACTIONS(1707), 1,
      sym__hex_4digit,
  [14192] = 1,
    ACTIONS(1709), 1,
      aux_sym_create_index_token3,
  [14196] = 1,
    ACTIONS(1711), 1,
      aux_sym__string_literal_token2,
  [14200] = 1,
    ACTIONS(1713), 1,
      aux_sym__string_literal_token1,
  [14204] = 1,
    ACTIONS(1715), 1,
      anon_sym_LPAREN,
  [14208] = 1,
    ACTIONS(1717), 1,
      aux_sym_select_statement_token6,
  [14212] = 1,
    ACTIONS(1719), 1,
      anon_sym_COMMA,
  [14216] = 1,
    ACTIONS(1721), 1,
      anon_sym_LPAREN,
  [14220] = 1,
    ACTIONS(1723), 1,
      anon_sym_RPAREN,
  [14224] = 1,
    ACTIONS(1725), 1,
      anon_sym_RPAREN,
  [14228] = 1,
    ACTIONS(1727), 1,
      anon_sym_EQ,
  [14232] = 1,
    ACTIONS(1729), 1,
      anon_sym_DOT,
  [14236] = 1,
    ACTIONS(1731), 1,
      aux_sym_select_element_token1,
  [14240] = 1,
    ACTIONS(1733), 1,
      anon_sym_RPAREN,
  [14244] = 1,
    ACTIONS(1735), 1,
      aux_sym_create_function_token4,
  [14248] = 1,
    ACTIONS(1737), 1,
      aux_sym_if_not_exist_token1,
  [14252] = 1,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
  [14256] = 1,
    ACTIONS(1741), 1,
      aux_sym__string_literal_token2,
  [14260] = 1,
    ACTIONS(1743), 1,
      anon_sym_RPAREN,
  [14264] = 1,
    ACTIONS(1745), 1,
      aux_sym_create_function_token3,
  [14268] = 1,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
  [14272] = 1,
    ACTIONS(1749), 1,
      sym__hex_4digit,
  [14276] = 1,
    ACTIONS(1751), 1,
      aux_sym_from_spec_token1,
  [14280] = 1,
    ACTIONS(1753), 1,
      anon_sym_DOT,
  [14284] = 1,
    ACTIONS(1755), 1,
      anon_sym_RPAREN,
  [14288] = 1,
    ACTIONS(1757), 1,
      anon_sym_DOT,
  [14292] = 1,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
  [14296] = 1,
    ACTIONS(1761), 1,
      sym__dquote,
  [14300] = 1,
    ACTIONS(1763), 1,
      anon_sym_DOT,
  [14304] = 1,
    ACTIONS(1765), 1,
      anon_sym_LPAREN,
  [14308] = 1,
    ACTIONS(1767), 1,
      sym__boolean_literal,
  [14312] = 1,
    ACTIONS(1769), 1,
      sym_object_name,
  [14316] = 1,
    ACTIONS(1771), 1,
      aux_sym_select_element_token1,
  [14320] = 1,
    ACTIONS(1257), 1,
      aux_sym_update_token2,
  [14324] = 1,
    ACTIONS(1773), 1,
      aux_sym_create_function_token4,
  [14328] = 1,
    ACTIONS(1775), 1,
      anon_sym_LPAREN,
  [14332] = 1,
    ACTIONS(1777), 1,
      anon_sym_DOLLAR_DOLLAR,
  [14336] = 1,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
  [14340] = 1,
    ACTIONS(1781), 1,
      aux_sym_create_function_token3,
  [14344] = 1,
    ACTIONS(1783), 1,
      anon_sym_RPAREN,
  [14348] = 1,
    ACTIONS(1785), 1,
      aux_sym_constant_token1,
  [14352] = 1,
    ACTIONS(1787), 1,
      anon_sym_RPAREN,
  [14356] = 1,
    ACTIONS(1789), 1,
      aux_sym_create_index_token3,
  [14360] = 1,
    ACTIONS(1791), 1,
      anon_sym_LPAREN,
  [14364] = 1,
    ACTIONS(1793), 1,
      anon_sym_GT,
  [14368] = 1,
    ACTIONS(1795), 1,
      sym_object_name,
  [14372] = 1,
    ACTIONS(1797), 1,
      aux_sym_create_function_token3,
  [14376] = 1,
    ACTIONS(1799), 1,
      aux_sym_select_element_token1,
  [14380] = 1,
    ACTIONS(1801), 1,
      anon_sym_LPAREN,
  [14384] = 1,
    ACTIONS(1795), 1,
      anon_sym_STAR,
  [14388] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_function_token4,
  [14392] = 1,
    ACTIONS(1805), 1,
      anon_sym_DOT,
  [14396] = 1,
    ACTIONS(1807), 1,
      anon_sym_DASH,
  [14400] = 1,
    ACTIONS(1809), 1,
      anon_sym_LBRACE,
  [14404] = 1,
    ACTIONS(1811), 1,
      aux_sym_select_element_token1,
  [14408] = 1,
    ACTIONS(1813), 1,
      aux_sym_select_statement_token6,
  [14412] = 1,
    ACTIONS(1815), 1,
      aux_sym_create_function_token4,
  [14416] = 1,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [14420] = 1,
    ACTIONS(1819), 1,
      anon_sym_RPAREN,
  [14424] = 1,
    ACTIONS(1821), 1,
      aux_sym_select_element_token1,
  [14428] = 1,
    ACTIONS(1823), 1,
      anon_sym_LPAREN,
  [14432] = 1,
    ACTIONS(1825), 1,
      aux_sym_insert_statement_token2,
  [14436] = 1,
    ACTIONS(1827), 1,
      sym__hex_4digit,
  [14440] = 1,
    ACTIONS(1829), 1,
      aux_sym_select_element_token1,
  [14444] = 1,
    ACTIONS(1831), 1,
      aux_sym_create_index_token3,
  [14448] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [14452] = 1,
    ACTIONS(1835), 1,
      sym_object_name,
  [14456] = 1,
    ACTIONS(1837), 1,
      sym_object_name,
  [14460] = 1,
    ACTIONS(1839), 1,
      sym__hex_digit,
  [14464] = 1,
    ACTIONS(1841), 1,
      aux_sym_create_index_token3,
  [14468] = 1,
    ACTIONS(1843), 1,
      sym_object_name,
  [14472] = 1,
    ACTIONS(1845), 1,
      aux_sym_create_keyspace_token2,
  [14476] = 1,
    ACTIONS(1847), 1,
      sym_object_name,
  [14480] = 1,
    ACTIONS(1849), 1,
      anon_sym_DOT,
  [14484] = 1,
    ACTIONS(1851), 1,
      aux_sym_create_function_token2,
  [14488] = 1,
    ACTIONS(1853), 1,
      anon_sym_DOT,
  [14492] = 1,
    ACTIONS(1855), 1,
      sym_object_name,
  [14496] = 1,
    ACTIONS(1857), 1,
      sym__dquote,
  [14500] = 1,
    ACTIONS(1859), 1,
      aux_sym_if_exist_token2,
  [14504] = 1,
    ACTIONS(1861), 1,
      sym__dquote,
  [14508] = 1,
    ACTIONS(1863), 1,
      anon_sym_RPAREN,
  [14512] = 1,
    ACTIONS(1865), 1,
      aux_sym_if_not_exist_token1,
  [14516] = 1,
    ACTIONS(1867), 1,
      aux_sym_begin_batch_token4,
  [14520] = 1,
    ACTIONS(1869), 1,
      anon_sym_RPAREN,
  [14524] = 1,
    ACTIONS(1871), 1,
      sym_object_name,
  [14528] = 1,
    ACTIONS(1873), 1,
      sym_object_name,
  [14532] = 1,
    ACTIONS(1875), 1,
      anon_sym_RPAREN,
  [14536] = 1,
    ACTIONS(1877), 1,
      aux_sym_relalationContainsKey_token2,
  [14540] = 1,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
  [14544] = 1,
    ACTIONS(1879), 1,
      anon_sym_EQ,
  [14548] = 1,
    ACTIONS(1881), 1,
      aux_sym_create_keyspace_token1,
  [14552] = 1,
    ACTIONS(1883), 1,
      aux_sym_relalationContainsKey_token2,
  [14556] = 1,
    ACTIONS(1885), 1,
      ts_builtin_sym_end,
  [14560] = 1,
    ACTIONS(1887), 1,
      aux_sym_begin_batch_token4,
  [14564] = 1,
    ACTIONS(1889), 1,
      anon_sym_RPAREN,
  [14568] = 1,
    ACTIONS(1891), 1,
      aux_sym_insert_statement_token2,
  [14572] = 1,
    ACTIONS(1893), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 215,
  [SMALL_STATE(6)] = 257,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 412,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 517,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 613,
  [SMALL_STATE(17)] = 650,
  [SMALL_STATE(18)] = 683,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 757,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 831,
  [SMALL_STATE(23)] = 868,
  [SMALL_STATE(24)] = 905,
  [SMALL_STATE(25)] = 942,
  [SMALL_STATE(26)] = 979,
  [SMALL_STATE(27)] = 1012,
  [SMALL_STATE(28)] = 1049,
  [SMALL_STATE(29)] = 1086,
  [SMALL_STATE(30)] = 1123,
  [SMALL_STATE(31)] = 1160,
  [SMALL_STATE(32)] = 1197,
  [SMALL_STATE(33)] = 1234,
  [SMALL_STATE(34)] = 1267,
  [SMALL_STATE(35)] = 1300,
  [SMALL_STATE(36)] = 1334,
  [SMALL_STATE(37)] = 1364,
  [SMALL_STATE(38)] = 1394,
  [SMALL_STATE(39)] = 1428,
  [SMALL_STATE(40)] = 1485,
  [SMALL_STATE(41)] = 1511,
  [SMALL_STATE(42)] = 1565,
  [SMALL_STATE(43)] = 1591,
  [SMALL_STATE(44)] = 1630,
  [SMALL_STATE(45)] = 1667,
  [SMALL_STATE(46)] = 1694,
  [SMALL_STATE(47)] = 1725,
  [SMALL_STATE(48)] = 1762,
  [SMALL_STATE(49)] = 1787,
  [SMALL_STATE(50)] = 1816,
  [SMALL_STATE(51)] = 1845,
  [SMALL_STATE(52)] = 1882,
  [SMALL_STATE(53)] = 1911,
  [SMALL_STATE(54)] = 1939,
  [SMALL_STATE(55)] = 1967,
  [SMALL_STATE(56)] = 1991,
  [SMALL_STATE(57)] = 2019,
  [SMALL_STATE(58)] = 2043,
  [SMALL_STATE(59)] = 2095,
  [SMALL_STATE(60)] = 2121,
  [SMALL_STATE(61)] = 2145,
  [SMALL_STATE(62)] = 2169,
  [SMALL_STATE(63)] = 2193,
  [SMALL_STATE(64)] = 2221,
  [SMALL_STATE(65)] = 2245,
  [SMALL_STATE(66)] = 2269,
  [SMALL_STATE(67)] = 2293,
  [SMALL_STATE(68)] = 2321,
  [SMALL_STATE(69)] = 2345,
  [SMALL_STATE(70)] = 2373,
  [SMALL_STATE(71)] = 2397,
  [SMALL_STATE(72)] = 2421,
  [SMALL_STATE(73)] = 2449,
  [SMALL_STATE(74)] = 2473,
  [SMALL_STATE(75)] = 2497,
  [SMALL_STATE(76)] = 2528,
  [SMALL_STATE(77)] = 2551,
  [SMALL_STATE(78)] = 2582,
  [SMALL_STATE(79)] = 2613,
  [SMALL_STATE(80)] = 2636,
  [SMALL_STATE(81)] = 2659,
  [SMALL_STATE(82)] = 2690,
  [SMALL_STATE(83)] = 2721,
  [SMALL_STATE(84)] = 2748,
  [SMALL_STATE(85)] = 2799,
  [SMALL_STATE(86)] = 2830,
  [SMALL_STATE(87)] = 2861,
  [SMALL_STATE(88)] = 2886,
  [SMALL_STATE(89)] = 2909,
  [SMALL_STATE(90)] = 2932,
  [SMALL_STATE(91)] = 2955,
  [SMALL_STATE(92)] = 2986,
  [SMALL_STATE(93)] = 3011,
  [SMALL_STATE(94)] = 3037,
  [SMALL_STATE(95)] = 3059,
  [SMALL_STATE(96)] = 3081,
  [SMALL_STATE(97)] = 3107,
  [SMALL_STATE(98)] = 3135,
  [SMALL_STATE(99)] = 3161,
  [SMALL_STATE(100)] = 3187,
  [SMALL_STATE(101)] = 3213,
  [SMALL_STATE(102)] = 3239,
  [SMALL_STATE(103)] = 3261,
  [SMALL_STATE(104)] = 3287,
  [SMALL_STATE(105)] = 3315,
  [SMALL_STATE(106)] = 3341,
  [SMALL_STATE(107)] = 3367,
  [SMALL_STATE(108)] = 3395,
  [SMALL_STATE(109)] = 3421,
  [SMALL_STATE(110)] = 3443,
  [SMALL_STATE(111)] = 3469,
  [SMALL_STATE(112)] = 3491,
  [SMALL_STATE(113)] = 3519,
  [SMALL_STATE(114)] = 3543,
  [SMALL_STATE(115)] = 3569,
  [SMALL_STATE(116)] = 3591,
  [SMALL_STATE(117)] = 3617,
  [SMALL_STATE(118)] = 3639,
  [SMALL_STATE(119)] = 3661,
  [SMALL_STATE(120)] = 3687,
  [SMALL_STATE(121)] = 3713,
  [SMALL_STATE(122)] = 3741,
  [SMALL_STATE(123)] = 3763,
  [SMALL_STATE(124)] = 3785,
  [SMALL_STATE(125)] = 3811,
  [SMALL_STATE(126)] = 3837,
  [SMALL_STATE(127)] = 3863,
  [SMALL_STATE(128)] = 3889,
  [SMALL_STATE(129)] = 3915,
  [SMALL_STATE(130)] = 3937,
  [SMALL_STATE(131)] = 3962,
  [SMALL_STATE(132)] = 3987,
  [SMALL_STATE(133)] = 4010,
  [SMALL_STATE(134)] = 4033,
  [SMALL_STATE(135)] = 4054,
  [SMALL_STATE(136)] = 4075,
  [SMALL_STATE(137)] = 4096,
  [SMALL_STATE(138)] = 4117,
  [SMALL_STATE(139)] = 4138,
  [SMALL_STATE(140)] = 4163,
  [SMALL_STATE(141)] = 4188,
  [SMALL_STATE(142)] = 4213,
  [SMALL_STATE(143)] = 4238,
  [SMALL_STATE(144)] = 4263,
  [SMALL_STATE(145)] = 4288,
  [SMALL_STATE(146)] = 4313,
  [SMALL_STATE(147)] = 4338,
  [SMALL_STATE(148)] = 4363,
  [SMALL_STATE(149)] = 4388,
  [SMALL_STATE(150)] = 4409,
  [SMALL_STATE(151)] = 4434,
  [SMALL_STATE(152)] = 4459,
  [SMALL_STATE(153)] = 4484,
  [SMALL_STATE(154)] = 4509,
  [SMALL_STATE(155)] = 4530,
  [SMALL_STATE(156)] = 4555,
  [SMALL_STATE(157)] = 4580,
  [SMALL_STATE(158)] = 4605,
  [SMALL_STATE(159)] = 4626,
  [SMALL_STATE(160)] = 4651,
  [SMALL_STATE(161)] = 4676,
  [SMALL_STATE(162)] = 4701,
  [SMALL_STATE(163)] = 4726,
  [SMALL_STATE(164)] = 4751,
  [SMALL_STATE(165)] = 4776,
  [SMALL_STATE(166)] = 4797,
  [SMALL_STATE(167)] = 4818,
  [SMALL_STATE(168)] = 4843,
  [SMALL_STATE(169)] = 4868,
  [SMALL_STATE(170)] = 4893,
  [SMALL_STATE(171)] = 4918,
  [SMALL_STATE(172)] = 4943,
  [SMALL_STATE(173)] = 4988,
  [SMALL_STATE(174)] = 5009,
  [SMALL_STATE(175)] = 5034,
  [SMALL_STATE(176)] = 5059,
  [SMALL_STATE(177)] = 5084,
  [SMALL_STATE(178)] = 5105,
  [SMALL_STATE(179)] = 5130,
  [SMALL_STATE(180)] = 5155,
  [SMALL_STATE(181)] = 5175,
  [SMALL_STATE(182)] = 5217,
  [SMALL_STATE(183)] = 5237,
  [SMALL_STATE(184)] = 5279,
  [SMALL_STATE(185)] = 5299,
  [SMALL_STATE(186)] = 5341,
  [SMALL_STATE(187)] = 5361,
  [SMALL_STATE(188)] = 5381,
  [SMALL_STATE(189)] = 5403,
  [SMALL_STATE(190)] = 5425,
  [SMALL_STATE(191)] = 5445,
  [SMALL_STATE(192)] = 5467,
  [SMALL_STATE(193)] = 5487,
  [SMALL_STATE(194)] = 5507,
  [SMALL_STATE(195)] = 5529,
  [SMALL_STATE(196)] = 5551,
  [SMALL_STATE(197)] = 5571,
  [SMALL_STATE(198)] = 5593,
  [SMALL_STATE(199)] = 5615,
  [SMALL_STATE(200)] = 5659,
  [SMALL_STATE(201)] = 5679,
  [SMALL_STATE(202)] = 5698,
  [SMALL_STATE(203)] = 5717,
  [SMALL_STATE(204)] = 5736,
  [SMALL_STATE(205)] = 5755,
  [SMALL_STATE(206)] = 5774,
  [SMALL_STATE(207)] = 5793,
  [SMALL_STATE(208)] = 5812,
  [SMALL_STATE(209)] = 5831,
  [SMALL_STATE(210)] = 5850,
  [SMALL_STATE(211)] = 5869,
  [SMALL_STATE(212)] = 5888,
  [SMALL_STATE(213)] = 5929,
  [SMALL_STATE(214)] = 5948,
  [SMALL_STATE(215)] = 5967,
  [SMALL_STATE(216)] = 5986,
  [SMALL_STATE(217)] = 6005,
  [SMALL_STATE(218)] = 6024,
  [SMALL_STATE(219)] = 6043,
  [SMALL_STATE(220)] = 6062,
  [SMALL_STATE(221)] = 6081,
  [SMALL_STATE(222)] = 6100,
  [SMALL_STATE(223)] = 6119,
  [SMALL_STATE(224)] = 6138,
  [SMALL_STATE(225)] = 6159,
  [SMALL_STATE(226)] = 6178,
  [SMALL_STATE(227)] = 6197,
  [SMALL_STATE(228)] = 6216,
  [SMALL_STATE(229)] = 6235,
  [SMALL_STATE(230)] = 6254,
  [SMALL_STATE(231)] = 6273,
  [SMALL_STATE(232)] = 6292,
  [SMALL_STATE(233)] = 6311,
  [SMALL_STATE(234)] = 6330,
  [SMALL_STATE(235)] = 6371,
  [SMALL_STATE(236)] = 6390,
  [SMALL_STATE(237)] = 6409,
  [SMALL_STATE(238)] = 6428,
  [SMALL_STATE(239)] = 6447,
  [SMALL_STATE(240)] = 6466,
  [SMALL_STATE(241)] = 6485,
  [SMALL_STATE(242)] = 6504,
  [SMALL_STATE(243)] = 6523,
  [SMALL_STATE(244)] = 6542,
  [SMALL_STATE(245)] = 6561,
  [SMALL_STATE(246)] = 6580,
  [SMALL_STATE(247)] = 6599,
  [SMALL_STATE(248)] = 6640,
  [SMALL_STATE(249)] = 6659,
  [SMALL_STATE(250)] = 6678,
  [SMALL_STATE(251)] = 6697,
  [SMALL_STATE(252)] = 6716,
  [SMALL_STATE(253)] = 6735,
  [SMALL_STATE(254)] = 6754,
  [SMALL_STATE(255)] = 6773,
  [SMALL_STATE(256)] = 6792,
  [SMALL_STATE(257)] = 6811,
  [SMALL_STATE(258)] = 6830,
  [SMALL_STATE(259)] = 6849,
  [SMALL_STATE(260)] = 6868,
  [SMALL_STATE(261)] = 6887,
  [SMALL_STATE(262)] = 6906,
  [SMALL_STATE(263)] = 6925,
  [SMALL_STATE(264)] = 6944,
  [SMALL_STATE(265)] = 6963,
  [SMALL_STATE(266)] = 6982,
  [SMALL_STATE(267)] = 7001,
  [SMALL_STATE(268)] = 7020,
  [SMALL_STATE(269)] = 7039,
  [SMALL_STATE(270)] = 7058,
  [SMALL_STATE(271)] = 7077,
  [SMALL_STATE(272)] = 7096,
  [SMALL_STATE(273)] = 7115,
  [SMALL_STATE(274)] = 7134,
  [SMALL_STATE(275)] = 7153,
  [SMALL_STATE(276)] = 7172,
  [SMALL_STATE(277)] = 7191,
  [SMALL_STATE(278)] = 7210,
  [SMALL_STATE(279)] = 7229,
  [SMALL_STATE(280)] = 7248,
  [SMALL_STATE(281)] = 7267,
  [SMALL_STATE(282)] = 7286,
  [SMALL_STATE(283)] = 7305,
  [SMALL_STATE(284)] = 7324,
  [SMALL_STATE(285)] = 7343,
  [SMALL_STATE(286)] = 7362,
  [SMALL_STATE(287)] = 7381,
  [SMALL_STATE(288)] = 7400,
  [SMALL_STATE(289)] = 7419,
  [SMALL_STATE(290)] = 7438,
  [SMALL_STATE(291)] = 7457,
  [SMALL_STATE(292)] = 7476,
  [SMALL_STATE(293)] = 7495,
  [SMALL_STATE(294)] = 7514,
  [SMALL_STATE(295)] = 7533,
  [SMALL_STATE(296)] = 7552,
  [SMALL_STATE(297)] = 7571,
  [SMALL_STATE(298)] = 7590,
  [SMALL_STATE(299)] = 7609,
  [SMALL_STATE(300)] = 7628,
  [SMALL_STATE(301)] = 7647,
  [SMALL_STATE(302)] = 7666,
  [SMALL_STATE(303)] = 7685,
  [SMALL_STATE(304)] = 7704,
  [SMALL_STATE(305)] = 7723,
  [SMALL_STATE(306)] = 7742,
  [SMALL_STATE(307)] = 7761,
  [SMALL_STATE(308)] = 7780,
  [SMALL_STATE(309)] = 7799,
  [SMALL_STATE(310)] = 7818,
  [SMALL_STATE(311)] = 7837,
  [SMALL_STATE(312)] = 7856,
  [SMALL_STATE(313)] = 7875,
  [SMALL_STATE(314)] = 7894,
  [SMALL_STATE(315)] = 7913,
  [SMALL_STATE(316)] = 7932,
  [SMALL_STATE(317)] = 7951,
  [SMALL_STATE(318)] = 7970,
  [SMALL_STATE(319)] = 7989,
  [SMALL_STATE(320)] = 8008,
  [SMALL_STATE(321)] = 8027,
  [SMALL_STATE(322)] = 8046,
  [SMALL_STATE(323)] = 8065,
  [SMALL_STATE(324)] = 8084,
  [SMALL_STATE(325)] = 8103,
  [SMALL_STATE(326)] = 8122,
  [SMALL_STATE(327)] = 8141,
  [SMALL_STATE(328)] = 8179,
  [SMALL_STATE(329)] = 8217,
  [SMALL_STATE(330)] = 8255,
  [SMALL_STATE(331)] = 8293,
  [SMALL_STATE(332)] = 8331,
  [SMALL_STATE(333)] = 8369,
  [SMALL_STATE(334)] = 8387,
  [SMALL_STATE(335)] = 8425,
  [SMALL_STATE(336)] = 8463,
  [SMALL_STATE(337)] = 8501,
  [SMALL_STATE(338)] = 8539,
  [SMALL_STATE(339)] = 8577,
  [SMALL_STATE(340)] = 8615,
  [SMALL_STATE(341)] = 8653,
  [SMALL_STATE(342)] = 8691,
  [SMALL_STATE(343)] = 8729,
  [SMALL_STATE(344)] = 8749,
  [SMALL_STATE(345)] = 8772,
  [SMALL_STATE(346)] = 8795,
  [SMALL_STATE(347)] = 8826,
  [SMALL_STATE(348)] = 8853,
  [SMALL_STATE(349)] = 8870,
  [SMALL_STATE(350)] = 8895,
  [SMALL_STATE(351)] = 8912,
  [SMALL_STATE(352)] = 8937,
  [SMALL_STATE(353)] = 8962,
  [SMALL_STATE(354)] = 8993,
  [SMALL_STATE(355)] = 9018,
  [SMALL_STATE(356)] = 9043,
  [SMALL_STATE(357)] = 9074,
  [SMALL_STATE(358)] = 9090,
  [SMALL_STATE(359)] = 9112,
  [SMALL_STATE(360)] = 9140,
  [SMALL_STATE(361)] = 9164,
  [SMALL_STATE(362)] = 9186,
  [SMALL_STATE(363)] = 9214,
  [SMALL_STATE(364)] = 9230,
  [SMALL_STATE(365)] = 9255,
  [SMALL_STATE(366)] = 9280,
  [SMALL_STATE(367)] = 9300,
  [SMALL_STATE(368)] = 9322,
  [SMALL_STATE(369)] = 9340,
  [SMALL_STATE(370)] = 9362,
  [SMALL_STATE(371)] = 9382,
  [SMALL_STATE(372)] = 9402,
  [SMALL_STATE(373)] = 9420,
  [SMALL_STATE(374)] = 9438,
  [SMALL_STATE(375)] = 9457,
  [SMALL_STATE(376)] = 9474,
  [SMALL_STATE(377)] = 9493,
  [SMALL_STATE(378)] = 9512,
  [SMALL_STATE(379)] = 9531,
  [SMALL_STATE(380)] = 9550,
  [SMALL_STATE(381)] = 9569,
  [SMALL_STATE(382)] = 9588,
  [SMALL_STATE(383)] = 9607,
  [SMALL_STATE(384)] = 9626,
  [SMALL_STATE(385)] = 9645,
  [SMALL_STATE(386)] = 9664,
  [SMALL_STATE(387)] = 9681,
  [SMALL_STATE(388)] = 9700,
  [SMALL_STATE(389)] = 9711,
  [SMALL_STATE(390)] = 9722,
  [SMALL_STATE(391)] = 9741,
  [SMALL_STATE(392)] = 9760,
  [SMALL_STATE(393)] = 9779,
  [SMALL_STATE(394)] = 9795,
  [SMALL_STATE(395)] = 9811,
  [SMALL_STATE(396)] = 9827,
  [SMALL_STATE(397)] = 9843,
  [SMALL_STATE(398)] = 9859,
  [SMALL_STATE(399)] = 9875,
  [SMALL_STATE(400)] = 9891,
  [SMALL_STATE(401)] = 9899,
  [SMALL_STATE(402)] = 9907,
  [SMALL_STATE(403)] = 9917,
  [SMALL_STATE(404)] = 9933,
  [SMALL_STATE(405)] = 9949,
  [SMALL_STATE(406)] = 9961,
  [SMALL_STATE(407)] = 9977,
  [SMALL_STATE(408)] = 9993,
  [SMALL_STATE(409)] = 10009,
  [SMALL_STATE(410)] = 10025,
  [SMALL_STATE(411)] = 10035,
  [SMALL_STATE(412)] = 10051,
  [SMALL_STATE(413)] = 10063,
  [SMALL_STATE(414)] = 10073,
  [SMALL_STATE(415)] = 10089,
  [SMALL_STATE(416)] = 10105,
  [SMALL_STATE(417)] = 10115,
  [SMALL_STATE(418)] = 10129,
  [SMALL_STATE(419)] = 10137,
  [SMALL_STATE(420)] = 10151,
  [SMALL_STATE(421)] = 10167,
  [SMALL_STATE(422)] = 10175,
  [SMALL_STATE(423)] = 10191,
  [SMALL_STATE(424)] = 10207,
  [SMALL_STATE(425)] = 10223,
  [SMALL_STATE(426)] = 10239,
  [SMALL_STATE(427)] = 10255,
  [SMALL_STATE(428)] = 10263,
  [SMALL_STATE(429)] = 10277,
  [SMALL_STATE(430)] = 10293,
  [SMALL_STATE(431)] = 10301,
  [SMALL_STATE(432)] = 10313,
  [SMALL_STATE(433)] = 10329,
  [SMALL_STATE(434)] = 10345,
  [SMALL_STATE(435)] = 10361,
  [SMALL_STATE(436)] = 10371,
  [SMALL_STATE(437)] = 10387,
  [SMALL_STATE(438)] = 10403,
  [SMALL_STATE(439)] = 10411,
  [SMALL_STATE(440)] = 10424,
  [SMALL_STATE(441)] = 10435,
  [SMALL_STATE(442)] = 10448,
  [SMALL_STATE(443)] = 10461,
  [SMALL_STATE(444)] = 10474,
  [SMALL_STATE(445)] = 10487,
  [SMALL_STATE(446)] = 10500,
  [SMALL_STATE(447)] = 10513,
  [SMALL_STATE(448)] = 10522,
  [SMALL_STATE(449)] = 10535,
  [SMALL_STATE(450)] = 10548,
  [SMALL_STATE(451)] = 10561,
  [SMALL_STATE(452)] = 10574,
  [SMALL_STATE(453)] = 10587,
  [SMALL_STATE(454)] = 10600,
  [SMALL_STATE(455)] = 10613,
  [SMALL_STATE(456)] = 10624,
  [SMALL_STATE(457)] = 10637,
  [SMALL_STATE(458)] = 10646,
  [SMALL_STATE(459)] = 10659,
  [SMALL_STATE(460)] = 10672,
  [SMALL_STATE(461)] = 10685,
  [SMALL_STATE(462)] = 10698,
  [SMALL_STATE(463)] = 10711,
  [SMALL_STATE(464)] = 10724,
  [SMALL_STATE(465)] = 10737,
  [SMALL_STATE(466)] = 10750,
  [SMALL_STATE(467)] = 10763,
  [SMALL_STATE(468)] = 10776,
  [SMALL_STATE(469)] = 10789,
  [SMALL_STATE(470)] = 10802,
  [SMALL_STATE(471)] = 10815,
  [SMALL_STATE(472)] = 10828,
  [SMALL_STATE(473)] = 10841,
  [SMALL_STATE(474)] = 10854,
  [SMALL_STATE(475)] = 10867,
  [SMALL_STATE(476)] = 10880,
  [SMALL_STATE(477)] = 10893,
  [SMALL_STATE(478)] = 10906,
  [SMALL_STATE(479)] = 10913,
  [SMALL_STATE(480)] = 10926,
  [SMALL_STATE(481)] = 10939,
  [SMALL_STATE(482)] = 10952,
  [SMALL_STATE(483)] = 10965,
  [SMALL_STATE(484)] = 10978,
  [SMALL_STATE(485)] = 10991,
  [SMALL_STATE(486)] = 11004,
  [SMALL_STATE(487)] = 11015,
  [SMALL_STATE(488)] = 11028,
  [SMALL_STATE(489)] = 11035,
  [SMALL_STATE(490)] = 11048,
  [SMALL_STATE(491)] = 11061,
  [SMALL_STATE(492)] = 11074,
  [SMALL_STATE(493)] = 11087,
  [SMALL_STATE(494)] = 11098,
  [SMALL_STATE(495)] = 11111,
  [SMALL_STATE(496)] = 11124,
  [SMALL_STATE(497)] = 11137,
  [SMALL_STATE(498)] = 11150,
  [SMALL_STATE(499)] = 11163,
  [SMALL_STATE(500)] = 11176,
  [SMALL_STATE(501)] = 11189,
  [SMALL_STATE(502)] = 11202,
  [SMALL_STATE(503)] = 11215,
  [SMALL_STATE(504)] = 11228,
  [SMALL_STATE(505)] = 11241,
  [SMALL_STATE(506)] = 11254,
  [SMALL_STATE(507)] = 11267,
  [SMALL_STATE(508)] = 11280,
  [SMALL_STATE(509)] = 11293,
  [SMALL_STATE(510)] = 11306,
  [SMALL_STATE(511)] = 11319,
  [SMALL_STATE(512)] = 11329,
  [SMALL_STATE(513)] = 11339,
  [SMALL_STATE(514)] = 11349,
  [SMALL_STATE(515)] = 11359,
  [SMALL_STATE(516)] = 11369,
  [SMALL_STATE(517)] = 11379,
  [SMALL_STATE(518)] = 11389,
  [SMALL_STATE(519)] = 11397,
  [SMALL_STATE(520)] = 11405,
  [SMALL_STATE(521)] = 11415,
  [SMALL_STATE(522)] = 11425,
  [SMALL_STATE(523)] = 11435,
  [SMALL_STATE(524)] = 11445,
  [SMALL_STATE(525)] = 11455,
  [SMALL_STATE(526)] = 11465,
  [SMALL_STATE(527)] = 11475,
  [SMALL_STATE(528)] = 11483,
  [SMALL_STATE(529)] = 11493,
  [SMALL_STATE(530)] = 11503,
  [SMALL_STATE(531)] = 11513,
  [SMALL_STATE(532)] = 11523,
  [SMALL_STATE(533)] = 11533,
  [SMALL_STATE(534)] = 11543,
  [SMALL_STATE(535)] = 11549,
  [SMALL_STATE(536)] = 11559,
  [SMALL_STATE(537)] = 11569,
  [SMALL_STATE(538)] = 11579,
  [SMALL_STATE(539)] = 11589,
  [SMALL_STATE(540)] = 11599,
  [SMALL_STATE(541)] = 11609,
  [SMALL_STATE(542)] = 11619,
  [SMALL_STATE(543)] = 11629,
  [SMALL_STATE(544)] = 11639,
  [SMALL_STATE(545)] = 11649,
  [SMALL_STATE(546)] = 11657,
  [SMALL_STATE(547)] = 11667,
  [SMALL_STATE(548)] = 11677,
  [SMALL_STATE(549)] = 11687,
  [SMALL_STATE(550)] = 11697,
  [SMALL_STATE(551)] = 11707,
  [SMALL_STATE(552)] = 11717,
  [SMALL_STATE(553)] = 11727,
  [SMALL_STATE(554)] = 11735,
  [SMALL_STATE(555)] = 11745,
  [SMALL_STATE(556)] = 11755,
  [SMALL_STATE(557)] = 11765,
  [SMALL_STATE(558)] = 11775,
  [SMALL_STATE(559)] = 11785,
  [SMALL_STATE(560)] = 11795,
  [SMALL_STATE(561)] = 11805,
  [SMALL_STATE(562)] = 11815,
  [SMALL_STATE(563)] = 11825,
  [SMALL_STATE(564)] = 11835,
  [SMALL_STATE(565)] = 11845,
  [SMALL_STATE(566)] = 11855,
  [SMALL_STATE(567)] = 11865,
  [SMALL_STATE(568)] = 11875,
  [SMALL_STATE(569)] = 11885,
  [SMALL_STATE(570)] = 11895,
  [SMALL_STATE(571)] = 11905,
  [SMALL_STATE(572)] = 11915,
  [SMALL_STATE(573)] = 11925,
  [SMALL_STATE(574)] = 11935,
  [SMALL_STATE(575)] = 11945,
  [SMALL_STATE(576)] = 11955,
  [SMALL_STATE(577)] = 11965,
  [SMALL_STATE(578)] = 11975,
  [SMALL_STATE(579)] = 11985,
  [SMALL_STATE(580)] = 11995,
  [SMALL_STATE(581)] = 12005,
  [SMALL_STATE(582)] = 12015,
  [SMALL_STATE(583)] = 12025,
  [SMALL_STATE(584)] = 12035,
  [SMALL_STATE(585)] = 12045,
  [SMALL_STATE(586)] = 12055,
  [SMALL_STATE(587)] = 12065,
  [SMALL_STATE(588)] = 12075,
  [SMALL_STATE(589)] = 12085,
  [SMALL_STATE(590)] = 12095,
  [SMALL_STATE(591)] = 12105,
  [SMALL_STATE(592)] = 12115,
  [SMALL_STATE(593)] = 12121,
  [SMALL_STATE(594)] = 12131,
  [SMALL_STATE(595)] = 12141,
  [SMALL_STATE(596)] = 12151,
  [SMALL_STATE(597)] = 12161,
  [SMALL_STATE(598)] = 12171,
  [SMALL_STATE(599)] = 12181,
  [SMALL_STATE(600)] = 12191,
  [SMALL_STATE(601)] = 12201,
  [SMALL_STATE(602)] = 12211,
  [SMALL_STATE(603)] = 12221,
  [SMALL_STATE(604)] = 12231,
  [SMALL_STATE(605)] = 12241,
  [SMALL_STATE(606)] = 12251,
  [SMALL_STATE(607)] = 12261,
  [SMALL_STATE(608)] = 12271,
  [SMALL_STATE(609)] = 12281,
  [SMALL_STATE(610)] = 12291,
  [SMALL_STATE(611)] = 12301,
  [SMALL_STATE(612)] = 12311,
  [SMALL_STATE(613)] = 12321,
  [SMALL_STATE(614)] = 12331,
  [SMALL_STATE(615)] = 12341,
  [SMALL_STATE(616)] = 12351,
  [SMALL_STATE(617)] = 12361,
  [SMALL_STATE(618)] = 12371,
  [SMALL_STATE(619)] = 12381,
  [SMALL_STATE(620)] = 12391,
  [SMALL_STATE(621)] = 12401,
  [SMALL_STATE(622)] = 12411,
  [SMALL_STATE(623)] = 12421,
  [SMALL_STATE(624)] = 12431,
  [SMALL_STATE(625)] = 12441,
  [SMALL_STATE(626)] = 12451,
  [SMALL_STATE(627)] = 12461,
  [SMALL_STATE(628)] = 12471,
  [SMALL_STATE(629)] = 12481,
  [SMALL_STATE(630)] = 12491,
  [SMALL_STATE(631)] = 12501,
  [SMALL_STATE(632)] = 12511,
  [SMALL_STATE(633)] = 12521,
  [SMALL_STATE(634)] = 12531,
  [SMALL_STATE(635)] = 12541,
  [SMALL_STATE(636)] = 12551,
  [SMALL_STATE(637)] = 12561,
  [SMALL_STATE(638)] = 12571,
  [SMALL_STATE(639)] = 12581,
  [SMALL_STATE(640)] = 12591,
  [SMALL_STATE(641)] = 12601,
  [SMALL_STATE(642)] = 12611,
  [SMALL_STATE(643)] = 12621,
  [SMALL_STATE(644)] = 12631,
  [SMALL_STATE(645)] = 12641,
  [SMALL_STATE(646)] = 12651,
  [SMALL_STATE(647)] = 12661,
  [SMALL_STATE(648)] = 12671,
  [SMALL_STATE(649)] = 12681,
  [SMALL_STATE(650)] = 12691,
  [SMALL_STATE(651)] = 12701,
  [SMALL_STATE(652)] = 12711,
  [SMALL_STATE(653)] = 12716,
  [SMALL_STATE(654)] = 12723,
  [SMALL_STATE(655)] = 12728,
  [SMALL_STATE(656)] = 12733,
  [SMALL_STATE(657)] = 12740,
  [SMALL_STATE(658)] = 12745,
  [SMALL_STATE(659)] = 12752,
  [SMALL_STATE(660)] = 12757,
  [SMALL_STATE(661)] = 12762,
  [SMALL_STATE(662)] = 12769,
  [SMALL_STATE(663)] = 12776,
  [SMALL_STATE(664)] = 12781,
  [SMALL_STATE(665)] = 12788,
  [SMALL_STATE(666)] = 12795,
  [SMALL_STATE(667)] = 12802,
  [SMALL_STATE(668)] = 12809,
  [SMALL_STATE(669)] = 12814,
  [SMALL_STATE(670)] = 12821,
  [SMALL_STATE(671)] = 12828,
  [SMALL_STATE(672)] = 12835,
  [SMALL_STATE(673)] = 12842,
  [SMALL_STATE(674)] = 12849,
  [SMALL_STATE(675)] = 12856,
  [SMALL_STATE(676)] = 12863,
  [SMALL_STATE(677)] = 12870,
  [SMALL_STATE(678)] = 12877,
  [SMALL_STATE(679)] = 12884,
  [SMALL_STATE(680)] = 12891,
  [SMALL_STATE(681)] = 12898,
  [SMALL_STATE(682)] = 12905,
  [SMALL_STATE(683)] = 12912,
  [SMALL_STATE(684)] = 12917,
  [SMALL_STATE(685)] = 12924,
  [SMALL_STATE(686)] = 12931,
  [SMALL_STATE(687)] = 12938,
  [SMALL_STATE(688)] = 12943,
  [SMALL_STATE(689)] = 12950,
  [SMALL_STATE(690)] = 12957,
  [SMALL_STATE(691)] = 12962,
  [SMALL_STATE(692)] = 12967,
  [SMALL_STATE(693)] = 12974,
  [SMALL_STATE(694)] = 12981,
  [SMALL_STATE(695)] = 12988,
  [SMALL_STATE(696)] = 12993,
  [SMALL_STATE(697)] = 12998,
  [SMALL_STATE(698)] = 13005,
  [SMALL_STATE(699)] = 13010,
  [SMALL_STATE(700)] = 13017,
  [SMALL_STATE(701)] = 13024,
  [SMALL_STATE(702)] = 13031,
  [SMALL_STATE(703)] = 13038,
  [SMALL_STATE(704)] = 13045,
  [SMALL_STATE(705)] = 13052,
  [SMALL_STATE(706)] = 13057,
  [SMALL_STATE(707)] = 13064,
  [SMALL_STATE(708)] = 13069,
  [SMALL_STATE(709)] = 13076,
  [SMALL_STATE(710)] = 13083,
  [SMALL_STATE(711)] = 13090,
  [SMALL_STATE(712)] = 13097,
  [SMALL_STATE(713)] = 13104,
  [SMALL_STATE(714)] = 13111,
  [SMALL_STATE(715)] = 13118,
  [SMALL_STATE(716)] = 13125,
  [SMALL_STATE(717)] = 13132,
  [SMALL_STATE(718)] = 13139,
  [SMALL_STATE(719)] = 13146,
  [SMALL_STATE(720)] = 13153,
  [SMALL_STATE(721)] = 13158,
  [SMALL_STATE(722)] = 13165,
  [SMALL_STATE(723)] = 13170,
  [SMALL_STATE(724)] = 13177,
  [SMALL_STATE(725)] = 13184,
  [SMALL_STATE(726)] = 13191,
  [SMALL_STATE(727)] = 13198,
  [SMALL_STATE(728)] = 13205,
  [SMALL_STATE(729)] = 13210,
  [SMALL_STATE(730)] = 13215,
  [SMALL_STATE(731)] = 13222,
  [SMALL_STATE(732)] = 13229,
  [SMALL_STATE(733)] = 13234,
  [SMALL_STATE(734)] = 13241,
  [SMALL_STATE(735)] = 13248,
  [SMALL_STATE(736)] = 13255,
  [SMALL_STATE(737)] = 13260,
  [SMALL_STATE(738)] = 13267,
  [SMALL_STATE(739)] = 13274,
  [SMALL_STATE(740)] = 13281,
  [SMALL_STATE(741)] = 13288,
  [SMALL_STATE(742)] = 13295,
  [SMALL_STATE(743)] = 13302,
  [SMALL_STATE(744)] = 13307,
  [SMALL_STATE(745)] = 13314,
  [SMALL_STATE(746)] = 13321,
  [SMALL_STATE(747)] = 13328,
  [SMALL_STATE(748)] = 13335,
  [SMALL_STATE(749)] = 13340,
  [SMALL_STATE(750)] = 13347,
  [SMALL_STATE(751)] = 13354,
  [SMALL_STATE(752)] = 13361,
  [SMALL_STATE(753)] = 13366,
  [SMALL_STATE(754)] = 13371,
  [SMALL_STATE(755)] = 13378,
  [SMALL_STATE(756)] = 13385,
  [SMALL_STATE(757)] = 13390,
  [SMALL_STATE(758)] = 13397,
  [SMALL_STATE(759)] = 13404,
  [SMALL_STATE(760)] = 13411,
  [SMALL_STATE(761)] = 13418,
  [SMALL_STATE(762)] = 13425,
  [SMALL_STATE(763)] = 13432,
  [SMALL_STATE(764)] = 13437,
  [SMALL_STATE(765)] = 13442,
  [SMALL_STATE(766)] = 13449,
  [SMALL_STATE(767)] = 13454,
  [SMALL_STATE(768)] = 13459,
  [SMALL_STATE(769)] = 13466,
  [SMALL_STATE(770)] = 13473,
  [SMALL_STATE(771)] = 13480,
  [SMALL_STATE(772)] = 13487,
  [SMALL_STATE(773)] = 13492,
  [SMALL_STATE(774)] = 13497,
  [SMALL_STATE(775)] = 13504,
  [SMALL_STATE(776)] = 13511,
  [SMALL_STATE(777)] = 13516,
  [SMALL_STATE(778)] = 13523,
  [SMALL_STATE(779)] = 13530,
  [SMALL_STATE(780)] = 13537,
  [SMALL_STATE(781)] = 13544,
  [SMALL_STATE(782)] = 13548,
  [SMALL_STATE(783)] = 13552,
  [SMALL_STATE(784)] = 13556,
  [SMALL_STATE(785)] = 13560,
  [SMALL_STATE(786)] = 13564,
  [SMALL_STATE(787)] = 13568,
  [SMALL_STATE(788)] = 13572,
  [SMALL_STATE(789)] = 13576,
  [SMALL_STATE(790)] = 13580,
  [SMALL_STATE(791)] = 13584,
  [SMALL_STATE(792)] = 13588,
  [SMALL_STATE(793)] = 13592,
  [SMALL_STATE(794)] = 13596,
  [SMALL_STATE(795)] = 13600,
  [SMALL_STATE(796)] = 13604,
  [SMALL_STATE(797)] = 13608,
  [SMALL_STATE(798)] = 13612,
  [SMALL_STATE(799)] = 13616,
  [SMALL_STATE(800)] = 13620,
  [SMALL_STATE(801)] = 13624,
  [SMALL_STATE(802)] = 13628,
  [SMALL_STATE(803)] = 13632,
  [SMALL_STATE(804)] = 13636,
  [SMALL_STATE(805)] = 13640,
  [SMALL_STATE(806)] = 13644,
  [SMALL_STATE(807)] = 13648,
  [SMALL_STATE(808)] = 13652,
  [SMALL_STATE(809)] = 13656,
  [SMALL_STATE(810)] = 13660,
  [SMALL_STATE(811)] = 13664,
  [SMALL_STATE(812)] = 13668,
  [SMALL_STATE(813)] = 13672,
  [SMALL_STATE(814)] = 13676,
  [SMALL_STATE(815)] = 13680,
  [SMALL_STATE(816)] = 13684,
  [SMALL_STATE(817)] = 13688,
  [SMALL_STATE(818)] = 13692,
  [SMALL_STATE(819)] = 13696,
  [SMALL_STATE(820)] = 13700,
  [SMALL_STATE(821)] = 13704,
  [SMALL_STATE(822)] = 13708,
  [SMALL_STATE(823)] = 13712,
  [SMALL_STATE(824)] = 13716,
  [SMALL_STATE(825)] = 13720,
  [SMALL_STATE(826)] = 13724,
  [SMALL_STATE(827)] = 13728,
  [SMALL_STATE(828)] = 13732,
  [SMALL_STATE(829)] = 13736,
  [SMALL_STATE(830)] = 13740,
  [SMALL_STATE(831)] = 13744,
  [SMALL_STATE(832)] = 13748,
  [SMALL_STATE(833)] = 13752,
  [SMALL_STATE(834)] = 13756,
  [SMALL_STATE(835)] = 13760,
  [SMALL_STATE(836)] = 13764,
  [SMALL_STATE(837)] = 13768,
  [SMALL_STATE(838)] = 13772,
  [SMALL_STATE(839)] = 13776,
  [SMALL_STATE(840)] = 13780,
  [SMALL_STATE(841)] = 13784,
  [SMALL_STATE(842)] = 13788,
  [SMALL_STATE(843)] = 13792,
  [SMALL_STATE(844)] = 13796,
  [SMALL_STATE(845)] = 13800,
  [SMALL_STATE(846)] = 13804,
  [SMALL_STATE(847)] = 13808,
  [SMALL_STATE(848)] = 13812,
  [SMALL_STATE(849)] = 13816,
  [SMALL_STATE(850)] = 13820,
  [SMALL_STATE(851)] = 13824,
  [SMALL_STATE(852)] = 13828,
  [SMALL_STATE(853)] = 13832,
  [SMALL_STATE(854)] = 13836,
  [SMALL_STATE(855)] = 13840,
  [SMALL_STATE(856)] = 13844,
  [SMALL_STATE(857)] = 13848,
  [SMALL_STATE(858)] = 13852,
  [SMALL_STATE(859)] = 13856,
  [SMALL_STATE(860)] = 13860,
  [SMALL_STATE(861)] = 13864,
  [SMALL_STATE(862)] = 13868,
  [SMALL_STATE(863)] = 13872,
  [SMALL_STATE(864)] = 13876,
  [SMALL_STATE(865)] = 13880,
  [SMALL_STATE(866)] = 13884,
  [SMALL_STATE(867)] = 13888,
  [SMALL_STATE(868)] = 13892,
  [SMALL_STATE(869)] = 13896,
  [SMALL_STATE(870)] = 13900,
  [SMALL_STATE(871)] = 13904,
  [SMALL_STATE(872)] = 13908,
  [SMALL_STATE(873)] = 13912,
  [SMALL_STATE(874)] = 13916,
  [SMALL_STATE(875)] = 13920,
  [SMALL_STATE(876)] = 13924,
  [SMALL_STATE(877)] = 13928,
  [SMALL_STATE(878)] = 13932,
  [SMALL_STATE(879)] = 13936,
  [SMALL_STATE(880)] = 13940,
  [SMALL_STATE(881)] = 13944,
  [SMALL_STATE(882)] = 13948,
  [SMALL_STATE(883)] = 13952,
  [SMALL_STATE(884)] = 13956,
  [SMALL_STATE(885)] = 13960,
  [SMALL_STATE(886)] = 13964,
  [SMALL_STATE(887)] = 13968,
  [SMALL_STATE(888)] = 13972,
  [SMALL_STATE(889)] = 13976,
  [SMALL_STATE(890)] = 13980,
  [SMALL_STATE(891)] = 13984,
  [SMALL_STATE(892)] = 13988,
  [SMALL_STATE(893)] = 13992,
  [SMALL_STATE(894)] = 13996,
  [SMALL_STATE(895)] = 14000,
  [SMALL_STATE(896)] = 14004,
  [SMALL_STATE(897)] = 14008,
  [SMALL_STATE(898)] = 14012,
  [SMALL_STATE(899)] = 14016,
  [SMALL_STATE(900)] = 14020,
  [SMALL_STATE(901)] = 14024,
  [SMALL_STATE(902)] = 14028,
  [SMALL_STATE(903)] = 14032,
  [SMALL_STATE(904)] = 14036,
  [SMALL_STATE(905)] = 14040,
  [SMALL_STATE(906)] = 14044,
  [SMALL_STATE(907)] = 14048,
  [SMALL_STATE(908)] = 14052,
  [SMALL_STATE(909)] = 14056,
  [SMALL_STATE(910)] = 14060,
  [SMALL_STATE(911)] = 14064,
  [SMALL_STATE(912)] = 14068,
  [SMALL_STATE(913)] = 14072,
  [SMALL_STATE(914)] = 14076,
  [SMALL_STATE(915)] = 14080,
  [SMALL_STATE(916)] = 14084,
  [SMALL_STATE(917)] = 14088,
  [SMALL_STATE(918)] = 14092,
  [SMALL_STATE(919)] = 14096,
  [SMALL_STATE(920)] = 14100,
  [SMALL_STATE(921)] = 14104,
  [SMALL_STATE(922)] = 14108,
  [SMALL_STATE(923)] = 14112,
  [SMALL_STATE(924)] = 14116,
  [SMALL_STATE(925)] = 14120,
  [SMALL_STATE(926)] = 14124,
  [SMALL_STATE(927)] = 14128,
  [SMALL_STATE(928)] = 14132,
  [SMALL_STATE(929)] = 14136,
  [SMALL_STATE(930)] = 14140,
  [SMALL_STATE(931)] = 14144,
  [SMALL_STATE(932)] = 14148,
  [SMALL_STATE(933)] = 14152,
  [SMALL_STATE(934)] = 14156,
  [SMALL_STATE(935)] = 14160,
  [SMALL_STATE(936)] = 14164,
  [SMALL_STATE(937)] = 14168,
  [SMALL_STATE(938)] = 14172,
  [SMALL_STATE(939)] = 14176,
  [SMALL_STATE(940)] = 14180,
  [SMALL_STATE(941)] = 14184,
  [SMALL_STATE(942)] = 14188,
  [SMALL_STATE(943)] = 14192,
  [SMALL_STATE(944)] = 14196,
  [SMALL_STATE(945)] = 14200,
  [SMALL_STATE(946)] = 14204,
  [SMALL_STATE(947)] = 14208,
  [SMALL_STATE(948)] = 14212,
  [SMALL_STATE(949)] = 14216,
  [SMALL_STATE(950)] = 14220,
  [SMALL_STATE(951)] = 14224,
  [SMALL_STATE(952)] = 14228,
  [SMALL_STATE(953)] = 14232,
  [SMALL_STATE(954)] = 14236,
  [SMALL_STATE(955)] = 14240,
  [SMALL_STATE(956)] = 14244,
  [SMALL_STATE(957)] = 14248,
  [SMALL_STATE(958)] = 14252,
  [SMALL_STATE(959)] = 14256,
  [SMALL_STATE(960)] = 14260,
  [SMALL_STATE(961)] = 14264,
  [SMALL_STATE(962)] = 14268,
  [SMALL_STATE(963)] = 14272,
  [SMALL_STATE(964)] = 14276,
  [SMALL_STATE(965)] = 14280,
  [SMALL_STATE(966)] = 14284,
  [SMALL_STATE(967)] = 14288,
  [SMALL_STATE(968)] = 14292,
  [SMALL_STATE(969)] = 14296,
  [SMALL_STATE(970)] = 14300,
  [SMALL_STATE(971)] = 14304,
  [SMALL_STATE(972)] = 14308,
  [SMALL_STATE(973)] = 14312,
  [SMALL_STATE(974)] = 14316,
  [SMALL_STATE(975)] = 14320,
  [SMALL_STATE(976)] = 14324,
  [SMALL_STATE(977)] = 14328,
  [SMALL_STATE(978)] = 14332,
  [SMALL_STATE(979)] = 14336,
  [SMALL_STATE(980)] = 14340,
  [SMALL_STATE(981)] = 14344,
  [SMALL_STATE(982)] = 14348,
  [SMALL_STATE(983)] = 14352,
  [SMALL_STATE(984)] = 14356,
  [SMALL_STATE(985)] = 14360,
  [SMALL_STATE(986)] = 14364,
  [SMALL_STATE(987)] = 14368,
  [SMALL_STATE(988)] = 14372,
  [SMALL_STATE(989)] = 14376,
  [SMALL_STATE(990)] = 14380,
  [SMALL_STATE(991)] = 14384,
  [SMALL_STATE(992)] = 14388,
  [SMALL_STATE(993)] = 14392,
  [SMALL_STATE(994)] = 14396,
  [SMALL_STATE(995)] = 14400,
  [SMALL_STATE(996)] = 14404,
  [SMALL_STATE(997)] = 14408,
  [SMALL_STATE(998)] = 14412,
  [SMALL_STATE(999)] = 14416,
  [SMALL_STATE(1000)] = 14420,
  [SMALL_STATE(1001)] = 14424,
  [SMALL_STATE(1002)] = 14428,
  [SMALL_STATE(1003)] = 14432,
  [SMALL_STATE(1004)] = 14436,
  [SMALL_STATE(1005)] = 14440,
  [SMALL_STATE(1006)] = 14444,
  [SMALL_STATE(1007)] = 14448,
  [SMALL_STATE(1008)] = 14452,
  [SMALL_STATE(1009)] = 14456,
  [SMALL_STATE(1010)] = 14460,
  [SMALL_STATE(1011)] = 14464,
  [SMALL_STATE(1012)] = 14468,
  [SMALL_STATE(1013)] = 14472,
  [SMALL_STATE(1014)] = 14476,
  [SMALL_STATE(1015)] = 14480,
  [SMALL_STATE(1016)] = 14484,
  [SMALL_STATE(1017)] = 14488,
  [SMALL_STATE(1018)] = 14492,
  [SMALL_STATE(1019)] = 14496,
  [SMALL_STATE(1020)] = 14500,
  [SMALL_STATE(1021)] = 14504,
  [SMALL_STATE(1022)] = 14508,
  [SMALL_STATE(1023)] = 14512,
  [SMALL_STATE(1024)] = 14516,
  [SMALL_STATE(1025)] = 14520,
  [SMALL_STATE(1026)] = 14524,
  [SMALL_STATE(1027)] = 14528,
  [SMALL_STATE(1028)] = 14532,
  [SMALL_STATE(1029)] = 14536,
  [SMALL_STATE(1030)] = 14540,
  [SMALL_STATE(1031)] = 14544,
  [SMALL_STATE(1032)] = 14548,
  [SMALL_STATE(1033)] = 14552,
  [SMALL_STATE(1034)] = 14556,
  [SMALL_STATE(1035)] = 14560,
  [SMALL_STATE(1036)] = 14564,
  [SMALL_STATE(1037)] = 14568,
  [SMALL_STATE(1038)] = 14572,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(367),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(408),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(553),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1037),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(500),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(513),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(399),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1035),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
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
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 24),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 24),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 21),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(375),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 23),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(386),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(631),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(605),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(485),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(419),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(521),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 8),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 20),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(656),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 28),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 25),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 12),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 25),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 25),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 7),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 6),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 7),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 25),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 25),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(968),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(363),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1029),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(336),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(185),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(1010),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(499),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(495),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(327),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(502),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(498),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(38),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(529),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(765),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(685),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(762),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(41),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1014),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(653),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(515),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(466),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 22),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 19),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 27),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1885] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
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
