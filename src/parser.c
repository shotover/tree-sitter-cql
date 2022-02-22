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
#define STATE_COUNT 877
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 268
#define ALIAS_COUNT 6
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 28

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
  aux_sym_drop_user_token1 = 92,
  aux_sym_create_function_token1 = 93,
  aux_sym_create_function_token2 = 94,
  aux_sym_create_function_token3 = 95,
  aux_sym_create_function_token4 = 96,
  aux_sym_data_type_name_token1 = 97,
  aux_sym_data_type_name_token2 = 98,
  aux_sym_data_type_name_token3 = 99,
  aux_sym_data_type_name_token4 = 100,
  aux_sym_data_type_name_token5 = 101,
  aux_sym_data_type_name_token6 = 102,
  aux_sym_data_type_name_token7 = 103,
  aux_sym_data_type_name_token8 = 104,
  aux_sym_data_type_name_token9 = 105,
  aux_sym_data_type_name_token10 = 106,
  aux_sym_data_type_name_token11 = 107,
  aux_sym_data_type_name_token12 = 108,
  aux_sym_data_type_name_token13 = 109,
  aux_sym_data_type_name_token14 = 110,
  aux_sym_data_type_name_token15 = 111,
  aux_sym_data_type_name_token16 = 112,
  aux_sym_data_type_name_token17 = 113,
  aux_sym_data_type_name_token18 = 114,
  aux_sym_data_type_name_token19 = 115,
  aux_sym_data_type_name_token20 = 116,
  aux_sym_data_type_name_token21 = 117,
  aux_sym_data_type_name_token22 = 118,
  aux_sym_return_mode_token1 = 119,
  aux_sym_return_mode_token2 = 120,
  aux_sym_create_keyspace_token1 = 121,
  aux_sym_create_keyspace_token2 = 122,
  aux_sym_durable_writes_token1 = 123,
  aux_sym_durable_writes_token2 = 124,
  aux_sym_role_with_options_token1 = 125,
  aux_sym_role_with_options_token2 = 126,
  aux_sym_role_with_options_token3 = 127,
  aux_sym_role_with_options_token4 = 128,
  aux_sym_primary_key_column_token1 = 129,
  aux_sym_clustering_order_token1 = 130,
  aux_sym_order_direction_token1 = 131,
  aux_sym_order_direction_token2 = 132,
  aux_sym_create_user_token1 = 133,
  sym_source_file = 134,
  sym__statement = 135,
  sym_select_statement = 136,
  sym_select_elements = 137,
  sym_select_element = 138,
  sym_function_call = 139,
  sym_function_args = 140,
  sym_constant = 141,
  sym__uuid = 142,
  sym__string_literal = 143,
  aux_sym__decimal_literal = 144,
  sym__float_literal = 145,
  sym__hexadecimal_literal = 146,
  sym_code_block = 147,
  sym_from_spec = 148,
  sym_from_spec_element = 149,
  sym_where_spec = 150,
  sym_relation_elements = 151,
  sym_relation_element = 152,
  sym_assignment_tuple = 153,
  sym_relalationContainsKey = 154,
  sym_relalationContains = 155,
  sym_order_spec = 156,
  sym_order_spec_element = 157,
  sym_delete_statement = 158,
  sym_begin_batch = 159,
  sym_delete_column_list = 160,
  sym_delete_column_item = 161,
  sym_using_timestamp_spec = 162,
  sym_timestamp = 163,
  sym_if_exist = 164,
  sym_if_spec = 165,
  sym_if_condition_list = 166,
  sym_if_condition = 167,
  sym_insert_statement = 168,
  sym_keyspace = 169,
  sym_table = 170,
  sym_insert_column_spec = 171,
  sym_column_list = 172,
  sym_column = 173,
  sym_insert_values_spec = 174,
  sym_expression_list = 175,
  sym_expression = 176,
  sym_assignment_map = 177,
  sym_assignment_set = 178,
  sym_assignment_list = 179,
  sym_if_not_exist = 180,
  sym_using_ttl_timestamp = 181,
  sym_ttl = 182,
  sym_truncate = 183,
  sym_create_index = 184,
  sym_index_name = 185,
  sym_index_column_spec = 186,
  sym_index_keys_spec = 187,
  sym_index_entries_s_spec = 188,
  sym_index_full_spec = 189,
  sym_drop_index = 190,
  sym_update = 191,
  sym_assignment_element = 192,
  sym_use = 193,
  sym_grant = 194,
  sym_priviledge = 195,
  sym_resource = 196,
  sym_role = 197,
  sym_function = 198,
  sym_revoke = 199,
  sym_list_roles = 200,
  sym_list_permissions = 201,
  sym_drop_function = 202,
  sym_drop_keyspace = 203,
  sym_drop_role = 204,
  sym_drop_table = 205,
  sym_drop_user = 206,
  sym_user = 207,
  sym_create_function = 208,
  sym_param = 209,
  sym_data_type = 210,
  sym_data_type_name = 211,
  sym_data_type_definition = 212,
  sym_return_mode = 213,
  sym_language = 214,
  sym_create_keyspace = 215,
  sym_replication_list_item = 216,
  sym_durable_writes = 217,
  sym_create_role = 218,
  sym_role_with = 219,
  sym_role_with_options = 220,
  sym_option_hash = 221,
  sym_option_hash_item = 222,
  sym_create_table = 223,
  sym_column_definition_list = 224,
  sym_column_definition = 225,
  sym_primary_key_column = 226,
  sym_primary_key_element = 227,
  sym_primary_key_definition = 228,
  sym_single_primary_key = 229,
  sym_compound_key = 230,
  sym_partition_key = 231,
  sym_clustering_key_list = 232,
  sym_clustering_key = 233,
  sym_composite_key = 234,
  sym_partition_key_list = 235,
  sym_with_element = 236,
  sym_table_options = 237,
  sym_table_option_item = 238,
  sym_table_option_name = 239,
  sym_table_option_value = 240,
  sym_clustering_order = 241,
  sym_order_direction = 242,
  sym_create_user = 243,
  aux_sym_source_file_repeat1 = 244,
  aux_sym_select_elements_repeat1 = 245,
  aux_sym_function_args_repeat1 = 246,
  aux_sym__hexadecimal_literal_repeat1 = 247,
  aux_sym__hexadecimal_literal_repeat2 = 248,
  aux_sym_relation_elements_repeat1 = 249,
  aux_sym_relation_element_repeat1 = 250,
  aux_sym_relation_element_repeat2 = 251,
  aux_sym_assignment_tuple_repeat1 = 252,
  aux_sym_delete_column_list_repeat1 = 253,
  aux_sym_if_condition_list_repeat1 = 254,
  aux_sym_column_list_repeat1 = 255,
  aux_sym_expression_list_repeat1 = 256,
  aux_sym_assignment_map_repeat1 = 257,
  aux_sym_update_repeat1 = 258,
  aux_sym_create_function_repeat1 = 259,
  aux_sym_data_type_definition_repeat1 = 260,
  aux_sym_create_keyspace_repeat1 = 261,
  aux_sym_role_with_repeat1 = 262,
  aux_sym_option_hash_repeat1 = 263,
  aux_sym_column_definition_list_repeat1 = 264,
  aux_sym_clustering_key_list_repeat1 = 265,
  aux_sym_partition_key_list_repeat1 = 266,
  aux_sym_table_options_repeat1 = 267,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 268,
  anon_alias_sym_ALL_ROLES = 269,
  anon_alias_sym_CONTAINS = 270,
  anon_alias_sym_DROP_INDEX = 271,
  anon_alias_sym_IF = 272,
  anon_alias_sym_ORDER_BY = 273,
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
  [aux_sym_create_user_token1] = "NOSUPERUSER",
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
  [sym_create_user] = "create_user",
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
  [aux_sym_create_keyspace_repeat1] = "create_keyspace_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_partition_key_list_repeat1] = "partition_key_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
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
  [aux_sym_create_user_token1] = aux_sym_create_user_token1,
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
  [sym_create_user] = sym_create_user,
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
  [aux_sym_create_keyspace_repeat1] = aux_sym_create_keyspace_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_partition_key_list_repeat1] = aux_sym_partition_key_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
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
  [aux_sym_create_user_token1] = {
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
  [sym_create_user] = {
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
  [aux_sym_create_keyspace_repeat1] = {
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
  field_user = 12,
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
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [8] = {.index = 5, .length = 3},
  [9] = {.index = 8, .length = 3},
  [10] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [20] = {.index = 15, .length = 1},
  [22] = {.index = 16, .length = 3},
  [24] = {.index = 19, .length = 1},
  [26] = {.index = 20, .length = 1},
  [27] = {.index = 21, .length = 3},
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
    {field_user, 0},
  [5] =
    {field_keyspace, 0},
    {field_keyspace, 1},
    {field_keyspace, 2},
  [8] =
    {field_table, 0},
    {field_table, 1},
    {field_table, 2},
  [11] =
    {field_arguments, 2},
    {field_function, 0},
  [13] =
    {field_column, 0},
  [14] =
    {field_content, 1},
  [15] =
    {field_param_name, 0},
  [16] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
  [19] =
    {field_option, 0},
  [20] =
    {field_language, 0},
  [21] =
    {field_code_block, 0},
    {field_code_block, 2},
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = anon_alias_sym_DROP_INDEX,
    [1] = anon_alias_sym_DROP_INDEX,
  },
  [7] = {
    [0] = aux_sym_priviledge_token2,
  },
  [11] = {
    [0] = anon_alias_sym_IF,
  },
  [13] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
  },
  [15] = {
    [0] = aux_sym_resource_token1,
  },
  [16] = {
    [0] = aux_sym_resource_token4,
  },
  [17] = {
    [0] = anon_alias_sym_ALL_ROLES,
    [1] = anon_alias_sym_ALL_ROLES,
  },
  [18] = {
    [0] = anon_alias_sym_ORDER_BY,
    [1] = anon_alias_sym_ORDER_BY,
  },
  [19] = {
    [1] = anon_alias_sym_CONTAINS,
  },
  [21] = {
    [2] = aux_sym_relalationContainsKey_token1,
  },
  [23] = {
    [0] = aux_sym_create_index_token2,
  },
  [25] = {
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
  [49] = 37,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 42,
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
  [88] = 61,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 62,
  [96] = 96,
  [97] = 97,
  [98] = 89,
  [99] = 99,
  [100] = 66,
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
  [154] = 118,
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
  [174] = 166,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 170,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 179,
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
  [287] = 42,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 37,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 296,
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
  [312] = 303,
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
  [327] = 173,
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
  [340] = 323,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 325,
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
  [408] = 206,
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
  [430] = 13,
  [431] = 431,
  [432] = 24,
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
  [554] = 553,
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
  [571] = 553,
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
  [858] = 721,
  [859] = 734,
  [860] = 860,
  [861] = 715,
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
  [873] = 865,
  [874] = 874,
  [875] = 875,
  [876] = 664,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(406);
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(658);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == ':') ADVANCE(644);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(633);
      if (lookahead == ']') ADVANCE(634);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == '}') ADVANCE(645);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(430);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(427);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(317);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(67);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(12);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(507);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(553);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(526);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(483);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(600);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(496);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '0') ADVANCE(444);
      if (lookahead == 'X') ADVANCE(451);
      if (lookahead == '[') ADVANCE(633);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(611);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(440);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == ':') ADVANCE(644);
      if (lookahead == ']') ADVANCE(634);
      if (lookahead == '}') ADVANCE(645);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(446);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(518);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(627);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(696);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(677);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(677);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 138:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 139:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 142:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 144:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 151:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 152:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 153:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 154:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 188:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 190:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 211:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      END_STATE();
    case 212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(687);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 267:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 268:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 269:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 270:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 271:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 272:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 273:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 274:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 275:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 285:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 288:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 289:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 306:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      END_STATE();
    case 311:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(683);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 313:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      END_STATE();
    case 314:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      END_STATE();
    case 315:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 316:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(688);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 365:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 366:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 367:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 368:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 371:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 372:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 373:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 374:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 375:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 376:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 377:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 380:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 381:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 382:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(414);
      END_STATE();
    case 383:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 384:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(651);
      END_STATE();
    case 385:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 386:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 387:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 388:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(625);
      END_STATE();
    case 389:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(668);
      END_STATE();
    case 390:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(707);
      END_STATE();
    case 391:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 392:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 393:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 394:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 395:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(96);
      END_STATE();
    case 396:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 397:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 398:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 399:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(442);
      END_STATE();
    case 401:
      if (eof) ADVANCE(406);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ':') ADVANCE(644);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == '[') ADVANCE(633);
      if (lookahead == ']') ADVANCE(634);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == '}') ADVANCE(645);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(317);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 402:
      if (eof) ADVANCE(406);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '0') ADVANCE(444);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(633);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == '}') ADVANCE(645);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(109);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 403:
      if (eof) ADVANCE(406);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(495);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(571);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 404:
      if (eof) ADVANCE(406);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(429);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 405:
      if (eof) ADVANCE(406);
      if (lookahead == ';') ADVANCE(407);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(429);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(447);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(627);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(446);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(467);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(465);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(609);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(480);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(612);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(462);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(466);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(609);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(619);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
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
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_function_token3);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_function_token4);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_durable_writes_token2);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_create_user_token1);
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
  [4] = {.lex_state = 401},
  [5] = {.lex_state = 401},
  [6] = {.lex_state = 401},
  [7] = {.lex_state = 401},
  [8] = {.lex_state = 401},
  [9] = {.lex_state = 401},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 401},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 401},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 401},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 401},
  [27] = {.lex_state = 401},
  [28] = {.lex_state = 401},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 402},
  [31] = {.lex_state = 402},
  [32] = {.lex_state = 401},
  [33] = {.lex_state = 401},
  [34] = {.lex_state = 401},
  [35] = {.lex_state = 401},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 404},
  [38] = {.lex_state = 401},
  [39] = {.lex_state = 401},
  [40] = {.lex_state = 403},
  [41] = {.lex_state = 401},
  [42] = {.lex_state = 404},
  [43] = {.lex_state = 401},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 401},
  [46] = {.lex_state = 401},
  [47] = {.lex_state = 401},
  [48] = {.lex_state = 401},
  [49] = {.lex_state = 405},
  [50] = {.lex_state = 401},
  [51] = {.lex_state = 401},
  [52] = {.lex_state = 401},
  [53] = {.lex_state = 401},
  [54] = {.lex_state = 401},
  [55] = {.lex_state = 401},
  [56] = {.lex_state = 405},
  [57] = {.lex_state = 401},
  [58] = {.lex_state = 401},
  [59] = {.lex_state = 401},
  [60] = {.lex_state = 401},
  [61] = {.lex_state = 401},
  [62] = {.lex_state = 401},
  [63] = {.lex_state = 401},
  [64] = {.lex_state = 402},
  [65] = {.lex_state = 401},
  [66] = {.lex_state = 401},
  [67] = {.lex_state = 401},
  [68] = {.lex_state = 401},
  [69] = {.lex_state = 401},
  [70] = {.lex_state = 401},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 401},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 401},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 401},
  [79] = {.lex_state = 401},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 401},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 401},
  [86] = {.lex_state = 401},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 401},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 401},
  [94] = {.lex_state = 401},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 401},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 401},
  [102] = {.lex_state = 401},
  [103] = {.lex_state = 402},
  [104] = {.lex_state = 401},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 401},
  [107] = {.lex_state = 401},
  [108] = {.lex_state = 401},
  [109] = {.lex_state = 401},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 401},
  [113] = {.lex_state = 401},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 401},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 402},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 401},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 402},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 401},
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
  [147] = {.lex_state = 401},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 401},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 402},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 402},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 402},
  [167] = {.lex_state = 402},
  [168] = {.lex_state = 402},
  [169] = {.lex_state = 402},
  [170] = {.lex_state = 402},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 402},
  [175] = {.lex_state = 402},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 402},
  [179] = {.lex_state = 402},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 402},
  [182] = {.lex_state = 402},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 402},
  [185] = {.lex_state = 402},
  [186] = {.lex_state = 402},
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
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 401},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 401},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 401},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 401},
  [295] = {.lex_state = 401},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 135},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 401},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 401},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 135},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 401},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 401},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 1},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 401},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 401},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 401},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 402},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 401},
  [420] = {.lex_state = 401},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 401},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 401},
  [428] = {.lex_state = 401},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 402},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 402},
  [433] = {.lex_state = 401},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 401},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 401},
  [445] = {.lex_state = 401},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 401},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 401},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 401},
  [469] = {.lex_state = 401},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 401},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 401},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 1},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 401},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 401},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 6},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 401},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 6},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 401},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 1},
  [544] = {.lex_state = 401},
  [545] = {.lex_state = 401},
  [546] = {.lex_state = 1},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 401},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 401},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 6},
  [554] = {.lex_state = 6},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 401},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 1},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 401},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 6},
  [572] = {.lex_state = 401},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 6},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 401},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 401},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 401},
  [584] = {.lex_state = 1},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 401},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 401},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 401},
  [593] = {.lex_state = 401},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 401},
  [601] = {.lex_state = 1},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 6},
  [604] = {.lex_state = 401},
  [605] = {.lex_state = 401},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 1},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 1},
  [615] = {.lex_state = 1},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 1},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 1},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 401},
  [626] = {.lex_state = 401},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 1},
  [634] = {.lex_state = 1},
  [635] = {.lex_state = 401},
  [636] = {.lex_state = 401},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 401},
  [641] = {.lex_state = 1},
  [642] = {.lex_state = 401},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 1},
  [645] = {.lex_state = 1},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 1},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 1},
  [650] = {.lex_state = 401},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 1},
  [656] = {.lex_state = 1},
  [657] = {.lex_state = 1},
  [658] = {.lex_state = 1},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 402},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 1},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 401},
  [667] = {.lex_state = 401},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 402},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 401},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 402},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 5},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 438},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 402},
  [702] = {.lex_state = 401},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 401},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 404},
  [711] = {.lex_state = 401},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 401},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 1},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 402},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 401},
  [742] = {.lex_state = 401},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 402},
  [754] = {.lex_state = 1},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 401},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 401},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 401},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 401},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 402},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 402},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 402},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 402},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 401},
  [794] = {.lex_state = 1},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 401},
  [798] = {.lex_state = 5},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 402},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 1},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 401},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 401},
  [815] = {.lex_state = 401},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 1},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 1},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 1},
  [829] = {.lex_state = 401},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 1},
  [836] = {.lex_state = 401},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 1},
  [840] = {.lex_state = 402},
  [841] = {.lex_state = 401},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 401},
  [845] = {.lex_state = 401},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 401},
  [848] = {.lex_state = 401},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 401},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 1},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 6},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 1},
  [865] = {.lex_state = 1},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 1},
  [874] = {.lex_state = 402},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 1},
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
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
    [aux_sym_resource_token2] = ACTIONS(1),
    [aux_sym_resource_token6] = ACTIONS(1),
    [aux_sym_revoke_token1] = ACTIONS(1),
    [aux_sym_list_roles_token1] = ACTIONS(1),
    [aux_sym_list_roles_token2] = ACTIONS(1),
    [aux_sym_list_roles_token3] = ACTIONS(1),
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
    [aux_sym_create_user_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(868),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(204),
    [sym_delete_statement] = STATE(204),
    [sym_begin_batch] = STATE(424),
    [sym_insert_statement] = STATE(204),
    [sym_truncate] = STATE(204),
    [sym_create_index] = STATE(204),
    [sym_drop_index] = STATE(204),
    [sym_update] = STATE(204),
    [sym_use] = STATE(204),
    [sym_grant] = STATE(204),
    [sym_revoke] = STATE(204),
    [sym_list_roles] = STATE(204),
    [sym_list_permissions] = STATE(204),
    [sym_drop_function] = STATE(204),
    [sym_drop_keyspace] = STATE(204),
    [sym_drop_role] = STATE(204),
    [sym_drop_table] = STATE(204),
    [sym_drop_user] = STATE(204),
    [sym_create_function] = STATE(204),
    [sym_create_keyspace] = STATE(204),
    [sym_create_role] = STATE(204),
    [sym_create_table] = STATE(204),
    [sym_create_user] = STATE(204),
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
    [aux_sym_list_roles_token1] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_select_statement_token1,
    ACTIONS(34), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(37), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(40), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(43), 1,
      aux_sym_truncate_token1,
    ACTIONS(46), 1,
      aux_sym_create_index_token1,
    ACTIONS(49), 1,
      aux_sym_drop_index_token1,
    ACTIONS(52), 1,
      aux_sym_update_token1,
    ACTIONS(55), 1,
      aux_sym_use_token1,
    ACTIONS(58), 1,
      aux_sym_grant_token1,
    ACTIONS(61), 1,
      aux_sym_revoke_token1,
    ACTIONS(64), 1,
      aux_sym_list_roles_token1,
    STATE(424), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(204), 22,
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
      sym_drop_user,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_user,
  [71] = 16,
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
      aux_sym_list_roles_token1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(424), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(204), 22,
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
      sym_drop_user,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_user,
  [142] = 3,
    ACTIONS(71), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(69), 30,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [181] = 1,
    ACTIONS(74), 31,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_clustering_order_token1,
      aux_sym_create_user_token1,
  [215] = 4,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(76), 28,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [255] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(82), 28,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [292] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(86), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(84), 27,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [331] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(88), 28,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [368] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(660), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [405] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(735), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [442] = 2,
    ACTIONS(96), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 26,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [475] = 2,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(100), 25,
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
  [508] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(816), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [545] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(771), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [582] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(366), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [619] = 2,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 26,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [652] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(838), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [689] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(590), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [726] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(832), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [763] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(686), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [800] = 4,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(307), 1,
      sym_data_type_name,
    STATE(795), 1,
      sym_data_type,
    ACTIONS(92), 25,
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
  [837] = 2,
    ACTIONS(108), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 26,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [870] = 2,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(112), 25,
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
  [903] = 3,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(639), 1,
      sym_data_type_name,
    ACTIONS(92), 25,
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
  [937] = 1,
    ACTIONS(114), 27,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [967] = 1,
    ACTIONS(116), 27,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [997] = 1,
    ACTIONS(84), 27,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1027] = 3,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(415), 1,
      sym_data_type_name,
    ACTIONS(92), 25,
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
  [1061] = 16,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(422), 1,
      sym_expression,
    STATE(875), 1,
      sym_expression_list,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(612), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1118] = 15,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(595), 1,
      sym_expression,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(612), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1172] = 2,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(140), 22,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [1200] = 2,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(144), 22,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [1228] = 1,
    ACTIONS(144), 22,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [1253] = 1,
    ACTIONS(140), 22,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [1278] = 15,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(619), 1,
      sym_constant,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(406), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1330] = 3,
    ACTIONS(158), 1,
      sym__hex_digit,
    STATE(42), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(156), 18,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1357] = 2,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(160), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1382] = 7,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    STATE(68), 1,
      sym_where_spec,
    STATE(152), 1,
      sym_order_spec,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1417] = 8,
    ACTIONS(178), 1,
      sym_object_name,
    ACTIONS(180), 1,
      aux_sym_clustering_order_token1,
    STATE(104), 1,
      sym_table_option_item,
    STATE(147), 1,
      sym_table_options,
    STATE(205), 1,
      sym_clustering_order,
    STATE(661), 1,
      sym_table_option_name,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(176), 12,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1454] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(184), 1,
      aux_sym_select_statement_token4,
    ACTIONS(186), 1,
      aux_sym_select_statement_token5,
    STATE(78), 1,
      sym_where_spec,
    STATE(140), 1,
      sym_order_spec,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1489] = 3,
    ACTIONS(190), 1,
      sym__hex_digit,
    STATE(42), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 18,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1516] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(86), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(193), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [1545] = 15,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(837), 1,
      sym_function_args,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(536), 2,
      sym_function_call,
      sym_constant,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1596] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(203), 1,
      aux_sym_select_statement_token4,
    ACTIONS(205), 1,
      aux_sym_select_statement_token5,
    STATE(79), 1,
      sym_where_spec,
    STATE(138), 1,
      sym_order_spec,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1631] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(207), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1657] = 1,
    ACTIONS(209), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1679] = 1,
    ACTIONS(211), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1701] = 3,
    ACTIONS(213), 1,
      sym__hex_digit,
    STATE(56), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(156), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1727] = 1,
    ACTIONS(215), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1749] = 1,
    ACTIONS(217), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1771] = 1,
    ACTIONS(219), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1793] = 1,
    ACTIONS(221), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1815] = 1,
    ACTIONS(223), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1837] = 1,
    ACTIONS(146), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
  [1859] = 3,
    ACTIONS(225), 1,
      sym__hex_digit,
    STATE(56), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1885] = 1,
    ACTIONS(228), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1907] = 1,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_list_roles_token3,
      aux_sym_create_keyspace_token1,
  [1929] = 2,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(232), 18,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [1953] = 1,
    ACTIONS(234), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [1975] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(62), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(236), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2001] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(240), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2027] = 1,
    ACTIONS(242), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2049] = 3,
    STATE(144), 1,
      sym_order_direction,
    ACTIONS(246), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(244), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2075] = 1,
    ACTIONS(248), 19,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2097] = 3,
    ACTIONS(250), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(242), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2123] = 1,
    ACTIONS(253), 18,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2144] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(203), 1,
      aux_sym_select_statement_token4,
    ACTIONS(205), 1,
      aux_sym_select_statement_token5,
    STATE(138), 1,
      sym_order_spec,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2173] = 2,
    ACTIONS(257), 1,
      aux_sym_relation_element_token1,
    ACTIONS(255), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [2196] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(259), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2221] = 5,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_if_exist_token1,
    STATE(133), 1,
      sym_if_not_exist,
    STATE(192), 1,
      sym_using_ttl_timestamp,
    ACTIONS(261), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2250] = 5,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_if_exist_token1,
    STATE(126), 1,
      sym_if_not_exist,
    STATE(242), 1,
      sym_using_ttl_timestamp,
    ACTIONS(267), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2279] = 5,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_if_exist_token1,
    STATE(153), 1,
      sym_if_not_exist,
    STATE(203), 1,
      sym_using_ttl_timestamp,
    ACTIONS(269), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2308] = 1,
    ACTIONS(232), 18,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [2329] = 5,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_if_exist_token1,
    STATE(119), 1,
      sym_if_not_exist,
    STATE(198), 1,
      sym_using_ttl_timestamp,
    ACTIONS(271), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2358] = 1,
    ACTIONS(142), 18,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_keyspace_token1,
  [2379] = 5,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_if_exist_token1,
    STATE(155), 1,
      sym_if_not_exist,
    STATE(243), 1,
      sym_using_ttl_timestamp,
    ACTIONS(273), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2408] = 5,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    STATE(152), 1,
      sym_order_spec,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2437] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(277), 1,
      aux_sym_select_statement_token4,
    ACTIONS(279), 1,
      aux_sym_select_statement_token5,
    STATE(141), 1,
      sym_order_spec,
    ACTIONS(275), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2466] = 13,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(706), 1,
      sym_function_args,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(536), 2,
      sym_function_call,
      sym_constant,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2511] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(201), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(281), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2535] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(287), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(285), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2561] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(268), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(289), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2585] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(253), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(291), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2609] = 1,
    ACTIONS(293), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [2629] = 1,
    ACTIONS(295), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [2649] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(233), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(297), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2673] = 3,
    ACTIONS(299), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(236), 15,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2697] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_0X,
    ACTIONS(303), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(48), 2,
      sym_function_call,
      sym_constant,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2739] = 3,
    ACTIONS(307), 1,
      aux_sym_relation_elements_token1,
    STATE(90), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(305), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [2763] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(249), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(310), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2787] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(220), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(312), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2811] = 1,
    ACTIONS(314), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [2831] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(318), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(316), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2857] = 3,
    ACTIONS(299), 1,
      aux_sym_relation_elements_token1,
    STATE(100), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(240), 15,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2881] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(261), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(320), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2905] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(218), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(322), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [2929] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      sym_object_name,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(48), 2,
      sym_function_call,
      sym_constant,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2971] = 1,
    ACTIONS(326), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [2991] = 3,
    ACTIONS(328), 1,
      aux_sym_relation_elements_token1,
    STATE(100), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(242), 15,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3015] = 1,
    ACTIONS(331), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3035] = 1,
    ACTIONS(333), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3055] = 13,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(372), 1,
      sym_constant,
    STATE(651), 1,
      sym_assignment_tuple,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3099] = 3,
    ACTIONS(337), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(335), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [3123] = 1,
    ACTIONS(339), 17,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3143] = 1,
    ACTIONS(341), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3163] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(345), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(343), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3189] = 1,
    ACTIONS(347), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3209] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(205), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3235] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(150), 1,
      sym__hex_4digit,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(349), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(148), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(563), 2,
      sym_function_call,
      sym_constant,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3277] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(200), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(351), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3301] = 4,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(279), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(275), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3327] = 3,
    ACTIONS(337), 1,
      aux_sym_relation_elements_token1,
    STATE(90), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(353), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [3351] = 3,
    ACTIONS(283), 1,
      aux_sym_if_exist_token1,
    STATE(255), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(355), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3375] = 1,
    ACTIONS(357), 17,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3395] = 2,
    ACTIONS(361), 1,
      aux_sym_priviledge_token2,
    ACTIONS(359), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3417] = 3,
    ACTIONS(365), 1,
      aux_sym_create_index_token3,
    ACTIONS(367), 1,
      aux_sym_list_roles_token2,
    ACTIONS(363), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3440] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_0X,
    ACTIONS(369), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3481] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(242), 1,
      sym_using_ttl_timestamp,
    ACTIONS(267), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3504] = 1,
    ACTIONS(371), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [3523] = 1,
    ACTIONS(373), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3542] = 3,
    ACTIONS(377), 1,
      aux_sym_list_roles_token2,
    ACTIONS(379), 1,
      aux_sym_list_roles_token3,
    ACTIONS(375), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3565] = 1,
    ACTIONS(359), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3584] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(395), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3625] = 3,
    ACTIONS(385), 1,
      aux_sym_create_keyspace_token1,
    STATE(208), 1,
      sym_with_element,
    ACTIONS(383), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3648] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_using_ttl_timestamp,
    ACTIONS(261), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3671] = 2,
    ACTIONS(389), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(387), 15,
      ts_builtin_sym_end,
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
      aux_sym_list_roles_token1,
  [3692] = 2,
    ACTIONS(391), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(387), 15,
      ts_builtin_sym_end,
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
      aux_sym_list_roles_token1,
  [3713] = 3,
    ACTIONS(385), 1,
      aux_sym_create_keyspace_token1,
    STATE(191), 1,
      sym_with_element,
    ACTIONS(393), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3736] = 3,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(395), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3759] = 2,
    ACTIONS(401), 2,
      aux_sym_role_with_options_token3,
      aux_sym_create_user_token1,
    ACTIONS(399), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3780] = 1,
    ACTIONS(403), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [3799] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(203), 1,
      sym_using_ttl_timestamp,
    ACTIONS(269), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3822] = 3,
    ACTIONS(407), 1,
      aux_sym_create_keyspace_token1,
    STATE(219), 1,
      sym_role_with,
    ACTIONS(405), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3845] = 3,
    ACTIONS(407), 1,
      aux_sym_create_keyspace_token1,
    STATE(193), 1,
      sym_role_with,
    ACTIONS(409), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3868] = 3,
    ACTIONS(413), 1,
      aux_sym_relation_elements_token1,
    STATE(143), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(411), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3891] = 1,
    ACTIONS(415), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3910] = 3,
    ACTIONS(277), 1,
      aux_sym_select_statement_token4,
    ACTIONS(279), 1,
      aux_sym_select_statement_token5,
    ACTIONS(275), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3933] = 1,
    ACTIONS(417), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
  [3952] = 3,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3975] = 3,
    ACTIONS(345), 1,
      aux_sym_select_statement_token5,
    ACTIONS(419), 1,
      aux_sym_select_statement_token4,
    ACTIONS(343), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [3998] = 3,
    ACTIONS(385), 1,
      aux_sym_create_keyspace_token1,
    STATE(259), 1,
      sym_with_element,
    ACTIONS(421), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4021] = 3,
    ACTIONS(413), 1,
      aux_sym_relation_elements_token1,
    STATE(156), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(423), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4044] = 1,
    ACTIONS(425), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4063] = 1,
    ACTIONS(427), 16,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4082] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(429), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4105] = 3,
    ACTIONS(436), 1,
      aux_sym_clustering_order_token1,
    STATE(247), 1,
      sym_clustering_order,
    ACTIONS(434), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4128] = 3,
    ACTIONS(385), 1,
      aux_sym_create_keyspace_token1,
    STATE(246), 1,
      sym_with_element,
    ACTIONS(438), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4151] = 2,
    ACTIONS(442), 2,
      aux_sym_role_with_options_token3,
      aux_sym_create_user_token1,
    ACTIONS(440), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4172] = 3,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(444), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4195] = 1,
    ACTIONS(305), 16,
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
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
  [4214] = 3,
    ACTIONS(203), 1,
      aux_sym_select_statement_token4,
    ACTIONS(205), 1,
      aux_sym_select_statement_token5,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4237] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(243), 1,
      sym_using_ttl_timestamp,
    ACTIONS(273), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4260] = 12,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    ACTIONS(446), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4301] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(187), 1,
      sym_using_ttl_timestamp,
    ACTIONS(448), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4324] = 3,
    ACTIONS(452), 1,
      aux_sym_relation_elements_token1,
    STATE(156), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(450), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4347] = 1,
    ACTIONS(455), 15,
      ts_builtin_sym_end,
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
      aux_sym_list_roles_token1,
  [4365] = 1,
    ACTIONS(457), 15,
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
      aux_sym_list_roles_token1,
  [4383] = 2,
    ACTIONS(461), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(459), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4403] = 1,
    ACTIONS(450), 15,
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
      aux_sym_list_roles_token1,
  [4421] = 2,
    ACTIONS(465), 1,
      aux_sym_list_roles_token3,
    ACTIONS(463), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4441] = 2,
    ACTIONS(469), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(467), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4461] = 1,
    ACTIONS(471), 15,
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
      aux_sym_list_roles_token1,
  [4479] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(756), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4517] = 1,
    ACTIONS(473), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_keyspace_token1,
  [4535] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(48), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4573] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(372), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4611] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(493), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4649] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(158), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4687] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4725] = 1,
    ACTIONS(429), 15,
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
      aux_sym_list_roles_token1,
  [4743] = 1,
    ACTIONS(475), 15,
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
      aux_sym_list_roles_token1,
  [4761] = 1,
    ACTIONS(477), 15,
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
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4779] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(48), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4817] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(580), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4855] = 2,
    ACTIONS(481), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(479), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4875] = 2,
    ACTIONS(485), 1,
      aux_sym_list_roles_token2,
    ACTIONS(483), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4895] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(646), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4933] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(52), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4971] = 2,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(473), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [4991] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5029] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(145), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5067] = 2,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(471), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5087] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(514), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5125] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(318), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5163] = 11,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      sym__hex_4digit,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__dec_digit,
    ACTIONS(132), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(52), 1,
      sym_constant,
    ACTIONS(120), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(28), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5201] = 1,
    ACTIONS(487), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5218] = 1,
    ACTIONS(489), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5235] = 1,
    ACTIONS(491), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5252] = 1,
    ACTIONS(493), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5269] = 1,
    ACTIONS(383), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5286] = 1,
    ACTIONS(269), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5303] = 1,
    ACTIONS(495), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5320] = 1,
    ACTIONS(497), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5337] = 1,
    ACTIONS(499), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5354] = 1,
    ACTIONS(501), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5371] = 1,
    ACTIONS(440), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5388] = 1,
    ACTIONS(267), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5405] = 1,
    ACTIONS(503), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5422] = 1,
    ACTIONS(312), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5439] = 1,
    ACTIONS(505), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5456] = 1,
    ACTIONS(316), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5473] = 1,
    ACTIONS(273), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5490] = 2,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    ACTIONS(507), 13,
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
      aux_sym_list_roles_token1,
  [5509] = 1,
    ACTIONS(434), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5526] = 1,
    ACTIONS(511), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5543] = 1,
    ACTIONS(513), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5560] = 1,
    ACTIONS(438), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5577] = 1,
    ACTIONS(343), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5594] = 1,
    ACTIONS(515), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5611] = 1,
    ACTIONS(517), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5628] = 1,
    ACTIONS(519), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5645] = 1,
    ACTIONS(521), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5662] = 1,
    ACTIONS(523), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5679] = 1,
    ACTIONS(525), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5696] = 1,
    ACTIONS(527), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5713] = 1,
    ACTIONS(529), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5730] = 1,
    ACTIONS(351), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5747] = 1,
    ACTIONS(409), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5764] = 1,
    ACTIONS(355), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5781] = 1,
    ACTIONS(531), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5798] = 1,
    ACTIONS(533), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5815] = 1,
    ACTIONS(535), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5832] = 1,
    ACTIONS(537), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5849] = 1,
    ACTIONS(539), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5866] = 1,
    ACTIONS(541), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5883] = 1,
    ACTIONS(543), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5900] = 1,
    ACTIONS(545), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5917] = 1,
    ACTIONS(547), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5934] = 1,
    ACTIONS(549), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5951] = 1,
    ACTIONS(551), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5968] = 1,
    ACTIONS(553), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [5985] = 1,
    ACTIONS(310), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6002] = 1,
    ACTIONS(555), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6019] = 1,
    ACTIONS(557), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6036] = 1,
    ACTIONS(559), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6053] = 1,
    ACTIONS(561), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6070] = 1,
    ACTIONS(563), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6087] = 1,
    ACTIONS(285), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6104] = 1,
    ACTIONS(565), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6121] = 1,
    ACTIONS(567), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6138] = 1,
    ACTIONS(261), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6155] = 1,
    ACTIONS(448), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6172] = 1,
    ACTIONS(569), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6189] = 1,
    ACTIONS(571), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6206] = 1,
    ACTIONS(421), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6223] = 1,
    ACTIONS(573), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6240] = 1,
    ACTIONS(575), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6257] = 1,
    ACTIONS(281), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6274] = 1,
    ACTIONS(577), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6291] = 1,
    ACTIONS(579), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6308] = 1,
    ACTIONS(581), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6325] = 1,
    ACTIONS(297), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6342] = 1,
    ACTIONS(583), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6359] = 1,
    ACTIONS(320), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6376] = 1,
    ACTIONS(585), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6393] = 1,
    ACTIONS(483), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6410] = 1,
    ACTIONS(587), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6427] = 1,
    ACTIONS(589), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6444] = 1,
    ACTIONS(591), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6461] = 1,
    ACTIONS(289), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6478] = 1,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6495] = 1,
    ACTIONS(593), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6512] = 1,
    ACTIONS(595), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6529] = 1,
    ACTIONS(597), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6546] = 1,
    ACTIONS(599), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6563] = 1,
    ACTIONS(467), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6580] = 1,
    ACTIONS(601), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6597] = 1,
    ACTIONS(603), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6614] = 1,
    ACTIONS(605), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6631] = 1,
    ACTIONS(275), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6648] = 1,
    ACTIONS(607), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6665] = 1,
    ACTIONS(609), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
  [6682] = 1,
    ACTIONS(611), 13,
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
      aux_sym_list_roles_token1,
  [6698] = 4,
    ACTIONS(615), 1,
      aux_sym_priviledge_token1,
    ACTIONS(617), 1,
      aux_sym_resource_token5,
    STATE(117), 1,
      sym_priviledge,
    ACTIONS(613), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [6718] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(623), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(625), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(627), 1,
      aux_sym_index_full_spec_token1,
    STATE(857), 1,
      sym_index_column_spec,
    STATE(843), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [6743] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(623), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(625), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(627), 1,
      aux_sym_index_full_spec_token1,
    STATE(751), 1,
      sym_index_column_spec,
    STATE(843), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [6768] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(623), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(625), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(627), 1,
      aux_sym_index_full_spec_token1,
    STATE(825), 1,
      sym_index_column_spec,
    STATE(843), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [6793] = 3,
    ACTIONS(615), 1,
      aux_sym_priviledge_token1,
    STATE(799), 1,
      sym_priviledge,
    ACTIONS(613), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [6810] = 3,
    ACTIONS(615), 1,
      aux_sym_priviledge_token1,
    STATE(796), 1,
      sym_priviledge,
    ACTIONS(613), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [6827] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(623), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(625), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(627), 1,
      aux_sym_index_full_spec_token1,
    STATE(727), 1,
      sym_index_column_spec,
    STATE(843), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [6852] = 10,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(633), 1,
      aux_sym_truncate_token2,
    ACTIONS(635), 1,
      aux_sym_priviledge_token1,
    ACTIONS(637), 1,
      aux_sym_resource_token2,
    ACTIONS(639), 1,
      aux_sym_resource_token3,
    ACTIONS(641), 1,
      aux_sym_resource_token6,
    STATE(101), 1,
      sym_table,
    STATE(177), 1,
      sym_resource,
    STATE(716), 1,
      sym_keyspace,
  [6883] = 10,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(633), 1,
      aux_sym_truncate_token2,
    ACTIONS(635), 1,
      aux_sym_priviledge_token1,
    ACTIONS(637), 1,
      aux_sym_resource_token2,
    ACTIONS(639), 1,
      aux_sym_resource_token3,
    ACTIONS(641), 1,
      aux_sym_resource_token6,
    STATE(101), 1,
      sym_table,
    STATE(716), 1,
      sym_keyspace,
    STATE(767), 1,
      sym_resource,
  [6914] = 10,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(633), 1,
      aux_sym_truncate_token2,
    ACTIONS(635), 1,
      aux_sym_priviledge_token1,
    ACTIONS(637), 1,
      aux_sym_resource_token2,
    ACTIONS(639), 1,
      aux_sym_resource_token3,
    ACTIONS(641), 1,
      aux_sym_resource_token6,
    STATE(101), 1,
      sym_table,
    STATE(685), 1,
      sym_resource,
    STATE(716), 1,
      sym_keyspace,
  [6945] = 8,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
      sym__dec_digit,
    STATE(43), 1,
      aux_sym__decimal_literal,
    STATE(120), 2,
      sym_option_hash,
      sym_table_option_value,
    STATE(132), 2,
      sym__string_literal,
      sym__float_literal,
  [6972] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(623), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(625), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(627), 1,
      aux_sym_index_full_spec_token1,
    STATE(675), 1,
      sym_index_column_spec,
    STATE(843), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [6997] = 3,
    ACTIONS(647), 1,
      sym__hex_digit,
    STATE(287), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [7013] = 6,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      aux_sym_relation_element_token1,
    ACTIONS(660), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(656), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(654), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7035] = 9,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym_object_name,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    ACTIONS(666), 1,
      sym__dquote,
    STATE(163), 1,
      sym__string_literal,
    STATE(241), 1,
      sym_index_name,
    STATE(300), 1,
      sym_if_exist,
    STATE(769), 1,
      sym_keyspace,
  [7063] = 6,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      aux_sym_relation_element_token1,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(674), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(672), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(670), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7085] = 3,
    ACTIONS(676), 1,
      sym__hex_digit,
    STATE(287), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(156), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [7101] = 7,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(630), 1,
      sym_column,
    STATE(722), 1,
      sym_primary_key_definition,
    STATE(724), 1,
      sym_partition_key,
    STATE(723), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [7125] = 8,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym_object_name,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(684), 1,
      aux_sym_create_index_token3,
    STATE(163), 1,
      sym__string_literal,
    STATE(308), 1,
      sym_if_not_exist,
    STATE(692), 1,
      sym_index_name,
  [7150] = 5,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      sym__dec_digit,
    STATE(376), 1,
      aux_sym__decimal_literal,
    STATE(638), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [7168] = 6,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(645), 1,
      sym__dec_digit,
    STATE(43), 1,
      aux_sym__decimal_literal,
    STATE(743), 2,
      sym__string_literal,
      sym__float_literal,
  [7188] = 6,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_object_name,
    STATE(61), 1,
      sym_relation_element,
    STATE(67), 1,
      sym_relation_elements,
    STATE(325), 1,
      sym_function_call,
    STATE(57), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [7208] = 6,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_object_name,
    STATE(67), 1,
      sym_relation_elements,
    STATE(88), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(57), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [7228] = 7,
    ACTIONS(694), 1,
      aux_sym_select_statement_token2,
    ACTIONS(696), 1,
      aux_sym_select_statement_token3,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(700), 1,
      sym_object_name,
    STATE(425), 1,
      sym_select_element,
    STATE(427), 1,
      sym_function_call,
    STATE(551), 1,
      sym_select_elements,
  [7250] = 7,
    ACTIONS(702), 1,
      aux_sym_truncate_token2,
    ACTIONS(704), 1,
      aux_sym_create_index_token2,
    ACTIONS(706), 1,
      aux_sym_resource_token2,
    ACTIONS(708), 1,
      aux_sym_resource_token3,
    ACTIONS(710), 1,
      aux_sym_resource_token6,
    ACTIONS(712), 1,
      aux_sym_drop_user_token1,
    ACTIONS(714), 1,
      aux_sym_create_function_token1,
  [7272] = 7,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym_object_name,
    ACTIONS(666), 1,
      sym__dquote,
    STATE(163), 1,
      sym__string_literal,
    STATE(228), 1,
      sym_index_name,
    STATE(755), 1,
      sym_keyspace,
  [7294] = 1,
    ACTIONS(716), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
  [7303] = 6,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    STATE(386), 1,
      sym_if_not_exist,
    STATE(704), 1,
      sym_table,
    STATE(708), 1,
      sym_keyspace,
  [7322] = 5,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_object_name,
    STATE(63), 1,
      sym_relation_element,
    STATE(344), 1,
      sym_function_call,
    STATE(57), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [7339] = 6,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(700), 1,
      sym_object_name,
    ACTIONS(718), 1,
      aux_sym_select_statement_token3,
    STATE(425), 1,
      sym_select_element,
    STATE(427), 1,
      sym_function_call,
    STATE(600), 1,
      sym_select_elements,
  [7358] = 2,
    ACTIONS(722), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(720), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [7369] = 6,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(367), 1,
      sym_if_not_exist,
    STATE(671), 1,
      sym_function,
    STATE(679), 1,
      sym_keyspace,
  [7388] = 3,
    ACTIONS(728), 1,
      anon_sym_LT,
    STATE(394), 1,
      sym_data_type_definition,
    ACTIONS(726), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
  [7401] = 6,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym_object_name,
    ACTIONS(730), 1,
      aux_sym_create_index_token3,
    STATE(163), 1,
      sym__string_literal,
    STATE(681), 1,
      sym_index_name,
  [7420] = 6,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    STATE(245), 1,
      sym_table,
    STATE(369), 1,
      sym_if_exist,
    STATE(663), 1,
      sym_keyspace,
  [7439] = 6,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(235), 1,
      sym_function,
    STATE(373), 1,
      sym_if_exist,
    STATE(709), 1,
      sym_keyspace,
  [7458] = 2,
    ACTIONS(734), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(732), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [7469] = 5,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_object_name,
    STATE(63), 1,
      sym_relation_element,
    STATE(325), 1,
      sym_function_call,
    STATE(57), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [7486] = 6,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(736), 1,
      sym_object_name,
    STATE(190), 1,
      sym_user,
    STATE(379), 1,
      sym_if_exist,
    STATE(712), 1,
      sym_keyspace,
  [7505] = 6,
    ACTIONS(738), 1,
      aux_sym_truncate_token2,
    ACTIONS(740), 1,
      aux_sym_create_index_token2,
    ACTIONS(742), 1,
      aux_sym_resource_token2,
    ACTIONS(744), 1,
      aux_sym_resource_token3,
    ACTIONS(746), 1,
      aux_sym_resource_token6,
    ACTIONS(748), 1,
      aux_sym_drop_user_token1,
  [7524] = 6,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(384), 1,
      sym_if_not_exist,
    STATE(757), 1,
      sym_keyspace,
    STATE(821), 1,
      sym_function,
  [7543] = 6,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(750), 1,
      aux_sym_primary_key_column_token1,
    STATE(16), 1,
      sym_column,
    STATE(588), 1,
      sym_column_definition,
    STATE(761), 1,
      sym_primary_key_element,
  [7562] = 6,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    ACTIONS(750), 1,
      aux_sym_primary_key_column_token1,
    STATE(16), 1,
      sym_column,
    STATE(588), 1,
      sym_column_definition,
    STATE(792), 1,
      sym_primary_key_element,
  [7581] = 6,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(528), 1,
      aux_sym_relation_element_repeat2,
    STATE(529), 1,
      sym_assignment_tuple,
  [7600] = 1,
    ACTIONS(756), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [7608] = 5,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(758), 1,
      sym__dec_digit,
    STATE(383), 1,
      aux_sym__decimal_literal,
    STATE(629), 1,
      sym__string_literal,
  [7624] = 5,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    ACTIONS(760), 1,
      aux_sym_truncate_token2,
    STATE(248), 1,
      sym_table,
    STATE(833), 1,
      sym_keyspace,
  [7640] = 5,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(71), 1,
      sym_insert_values_spec,
    STATE(466), 1,
      sym_insert_column_spec,
  [7656] = 2,
    ACTIONS(770), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(768), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7666] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(431), 1,
      sym_column_definition,
    STATE(778), 1,
      sym_column_definition_list,
  [7682] = 2,
    ACTIONS(774), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(772), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7692] = 5,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(425), 1,
      sym_select_element,
    STATE(427), 1,
      sym_function_call,
    STATE(600), 1,
      sym_select_elements,
  [7708] = 2,
    ACTIONS(778), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(477), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [7718] = 4,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym_DOT,
    ACTIONS(784), 1,
      aux_sym_select_element_token1,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7732] = 4,
    ACTIONS(786), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(790), 1,
      aux_sym_role_with_options_token4,
    STATE(171), 1,
      sym_role_with_options,
    ACTIONS(788), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [7746] = 3,
    ACTIONS(794), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(473), 1,
      sym_using_timestamp_spec,
    ACTIONS(792), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [7758] = 5,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym_object_name,
    STATE(163), 1,
      sym__string_literal,
    STATE(189), 1,
      sym_index_name,
  [7774] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(431), 1,
      sym_column_definition,
    STATE(854), 1,
      sym_column_definition_list,
  [7790] = 4,
    ACTIONS(786), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(790), 1,
      aux_sym_role_with_options_token4,
    STATE(150), 1,
      sym_role_with_options,
    ACTIONS(788), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [7804] = 5,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(487), 1,
      sym_if_not_exist,
    STATE(690), 1,
      sym_keyspace,
  [7820] = 5,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(73), 1,
      sym_insert_values_spec,
    STATE(533), 1,
      sym_insert_column_spec,
  [7836] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(431), 1,
      sym_column_definition,
    STATE(863), 1,
      sym_column_definition_list,
  [7852] = 5,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(72), 1,
      sym_insert_values_spec,
    STATE(497), 1,
      sym_insert_column_spec,
  [7868] = 5,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(240), 1,
      sym_keyspace,
    STATE(498), 1,
      sym_if_exist,
  [7884] = 1,
    ACTIONS(798), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [7892] = 2,
    ACTIONS(802), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(800), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7902] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(448), 1,
      sym_clustering_key,
    STATE(587), 1,
      sym_column,
    STATE(823), 1,
      sym_clustering_key_list,
  [7918] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      aux_sym_from_spec_token1,
    STATE(375), 1,
      sym_from_spec,
    STATE(433), 1,
      sym_delete_column_item,
    STATE(605), 1,
      sym_delete_column_list,
  [7934] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(431), 1,
      sym_column_definition,
    STATE(759), 1,
      sym_column_definition_list,
  [7950] = 2,
    ACTIONS(810), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(808), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7960] = 1,
    ACTIONS(812), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [7968] = 5,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(425), 1,
      sym_select_element,
    STATE(427), 1,
      sym_function_call,
    STATE(592), 1,
      sym_select_elements,
  [7984] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(448), 1,
      sym_clustering_key,
    STATE(587), 1,
      sym_column,
    STATE(788), 1,
      sym_clustering_key_list,
  [8000] = 1,
    ACTIONS(814), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [8008] = 5,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(816), 1,
      sym__dec_digit,
    STATE(538), 1,
      aux_sym__decimal_literal,
    STATE(850), 1,
      sym__string_literal,
  [8024] = 1,
    ACTIONS(818), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [8032] = 5,
    ACTIONS(804), 1,
      sym_object_name,
    ACTIONS(806), 1,
      aux_sym_from_spec_token1,
    STATE(413), 1,
      sym_from_spec,
    STATE(433), 1,
      sym_delete_column_item,
    STATE(556), 1,
      sym_delete_column_list,
  [8048] = 5,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym_object_name,
    STATE(163), 1,
      sym__string_literal,
    STATE(224), 1,
      sym_index_name,
  [8064] = 3,
    ACTIONS(794), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(518), 1,
      sym_using_timestamp_spec,
    ACTIONS(820), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8076] = 3,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(825), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8088] = 5,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(457), 1,
      sym_partition_key,
    STATE(607), 1,
      sym_column,
    STATE(762), 1,
      sym_partition_key_list,
  [8104] = 5,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
    STATE(509), 1,
      sym_insert_column_spec,
  [8120] = 1,
    ACTIONS(827), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [8128] = 1,
    ACTIONS(829), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [8136] = 4,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(627), 1,
      sym_replication_list_item,
    STATE(739), 1,
      sym__string_literal,
  [8149] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
    STATE(377), 1,
      aux_sym_update_repeat1,
  [8162] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(83), 1,
      sym_where_spec,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [8175] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(111), 1,
      sym_where_spec,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [8188] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(111), 1,
      sym_where_spec,
    STATE(404), 1,
      aux_sym_update_repeat1,
  [8201] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(665), 1,
      sym_table,
    STATE(677), 1,
      sym_keyspace,
  [8214] = 4,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(616), 1,
      sym_option_hash_item,
    STATE(729), 1,
      sym__string_literal,
  [8227] = 3,
    ACTIONS(837), 1,
      aux_sym_primary_key_column_token1,
    STATE(594), 1,
      sym_primary_key_column,
    ACTIONS(835), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8238] = 4,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(695), 1,
      sym_keyspace,
    STATE(705), 1,
      sym_function,
  [8251] = 1,
    ACTIONS(839), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
  [8258] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(225), 1,
      sym_table,
    STATE(752), 1,
      sym_keyspace,
  [8271] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(437), 1,
      sym_table,
    STATE(817), 1,
      sym_keyspace,
  [8284] = 1,
    ACTIONS(841), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
  [8291] = 1,
    ACTIONS(825), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8298] = 4,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(232), 1,
      sym_function,
    STATE(764), 1,
      sym_keyspace,
  [8311] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
    STATE(361), 1,
      aux_sym_update_repeat1,
  [8324] = 4,
    ACTIONS(794), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
    STATE(591), 1,
      sym_using_timestamp_spec,
  [8337] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [8348] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(96), 1,
      sym_where_spec,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [8361] = 4,
    ACTIONS(845), 1,
      aux_sym_timestamp_token1,
    ACTIONS(847), 1,
      aux_sym_ttl_token1,
    STATE(127), 1,
      sym_ttl,
    STATE(128), 1,
      sym_timestamp,
  [8374] = 4,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(736), 1,
      sym_object_name,
    STATE(236), 1,
      sym_user,
    STATE(856), 1,
      sym_keyspace,
  [8387] = 4,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(488), 1,
      sym_replication_list_item,
    STATE(739), 1,
      sym__string_literal,
  [8400] = 4,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(588), 1,
      sym_column_definition,
  [8413] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(337), 1,
      sym_table,
    STATE(696), 1,
      sym_keyspace,
  [8426] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(849), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8437] = 4,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(758), 1,
      sym_keyspace,
    STATE(807), 1,
      sym_function,
  [8450] = 4,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_function_args_repeat1,
  [8463] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(698), 1,
      sym_table,
    STATE(713), 1,
      sym_keyspace,
  [8476] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [8489] = 4,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(506), 1,
      sym_option_hash_item,
    STATE(729), 1,
      sym__string_literal,
  [8502] = 4,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(513), 1,
      sym_replication_list_item,
    STATE(739), 1,
      sym__string_literal,
  [8515] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(516), 1,
      sym_table,
    STATE(770), 1,
      sym_keyspace,
  [8528] = 1,
    ACTIONS(855), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [8535] = 3,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(805), 1,
      sym_order_direction,
    ACTIONS(246), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [8546] = 4,
    ACTIONS(859), 1,
      sym_object_name,
    ACTIONS(861), 1,
      aux_sym_if_exist_token2,
    STATE(136), 1,
      sym_if_condition,
    STATE(238), 1,
      sym_if_condition_list,
  [8559] = 1,
    ACTIONS(863), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_function_token4,
      aux_sym_primary_key_column_token1,
  [8566] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
    STATE(521), 1,
      aux_sym_assignment_tuple_repeat1,
  [8579] = 4,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(578), 1,
      sym_partition_key,
    STATE(607), 1,
      sym_column,
  [8592] = 4,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(568), 1,
      sym_clustering_key,
    STATE(587), 1,
      sym_column,
  [8605] = 4,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(421), 1,
      sym_column,
    STATE(872), 1,
      sym_column_list,
  [8618] = 4,
    ACTIONS(664), 1,
      aux_sym_if_exist_token1,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(229), 1,
      sym_role,
    STATE(641), 1,
      sym_if_exist,
  [8631] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(831), 1,
      sym_table,
    STATE(834), 1,
      sym_keyspace,
  [8644] = 4,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(546), 1,
      sym_if_not_exist,
    STATE(670), 1,
      sym_user,
  [8657] = 4,
    ACTIONS(794), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(91), 1,
      sym_where_spec,
    STATE(659), 1,
      sym_using_timestamp_spec,
  [8670] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(810), 1,
      sym_keyspace,
    STATE(852), 1,
      sym_table,
  [8683] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(92), 1,
      sym_where_spec,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [8696] = 4,
    ACTIONS(682), 1,
      aux_sym_if_exist_token1,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(134), 1,
      sym_role,
    STATE(658), 1,
      sym_if_not_exist,
  [8709] = 2,
    ACTIONS(875), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(877), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [8718] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(92), 1,
      sym_where_spec,
    STATE(387), 1,
      aux_sym_update_repeat1,
  [8731] = 2,
    ACTIONS(879), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [8740] = 4,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(724), 1,
      sym_object_name,
    STATE(102), 1,
      sym_function,
    STATE(691), 1,
      sym_keyspace,
  [8753] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(258), 1,
      sym_table,
    STATE(717), 1,
      sym_keyspace,
  [8766] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(356), 1,
      sym_table,
    STATE(725), 1,
      sym_keyspace,
  [8779] = 4,
    ACTIONS(629), 1,
      sym_object_name,
    ACTIONS(631), 1,
      sym__dquote,
    STATE(102), 1,
      sym_table,
    STATE(700), 1,
      sym_keyspace,
  [8792] = 4,
    ACTIONS(794), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
    STATE(611), 1,
      sym_using_timestamp_spec,
  [8805] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(97), 1,
      sym_where_spec,
    STATE(362), 1,
      aux_sym_update_repeat1,
  [8818] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_GT,
    STATE(492), 1,
      aux_sym_data_type_definition_repeat1,
  [8828] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_create_function_repeat1,
  [8838] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_column_list_repeat1,
  [8848] = 3,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(102), 1,
      sym_keyspace,
  [8858] = 3,
    ACTIONS(893), 1,
      aux_sym_resource_token1,
    ACTIONS(895), 1,
      aux_sym_resource_token4,
    ACTIONS(897), 1,
      aux_sym_resource_token5,
  [8868] = 2,
    ACTIONS(901), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(899), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [8876] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_column_list_repeat1,
  [8886] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      aux_sym_expression_list_repeat1,
  [8896] = 3,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(272), 1,
      sym_keyspace,
  [8906] = 3,
    ACTIONS(909), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(911), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(913), 1,
      aux_sym_update_token1,
  [8916] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_from_spec_token1,
    STATE(455), 1,
      aux_sym_select_elements_repeat1,
  [8926] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(919), 1,
      aux_sym_update_token2,
    STATE(720), 1,
      sym_using_ttl_timestamp,
  [8936] = 2,
    ACTIONS(784), 1,
      aux_sym_select_element_token1,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8944] = 2,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(921), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [8952] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_column_definition_list_repeat1,
  [8962] = 1,
    ACTIONS(98), 3,
      anon_sym_RPAREN,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [8968] = 3,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_column_definition_list_repeat1,
  [8978] = 1,
    ACTIONS(110), 3,
      anon_sym_RPAREN,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [8984] = 3,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      aux_sym_from_spec_token1,
    STATE(469), 1,
      aux_sym_delete_column_list_repeat1,
  [8994] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(855), 1,
      sym_table,
  [9004] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(852), 1,
      sym_table,
  [9014] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_clustering_key_list_repeat1,
  [9024] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(946), 1,
      aux_sym_update_token2,
    STATE(668), 1,
      sym_using_ttl_timestamp,
  [9034] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(853), 1,
      sym_table,
  [9044] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_clustering_key_list_repeat1,
  [9054] = 3,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(446), 1,
      sym_param,
  [9064] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(789), 1,
      sym_return_mode,
  [9074] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_partition_key_list_repeat1,
  [9084] = 3,
    ACTIONS(954), 1,
      sym_object_name,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_param,
  [9094] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(820), 1,
      sym_return_mode,
  [9104] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(744), 1,
      sym_return_mode,
  [9114] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      aux_sym_create_function_repeat1,
  [9124] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      aux_sym_create_function_repeat1,
  [9134] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_clustering_key_list_repeat1,
  [9144] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_partition_key_list_repeat1,
  [9154] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [9164] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(800), 1,
      sym_return_mode,
  [9174] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [9184] = 3,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 1,
      sym__string_literal,
  [9194] = 3,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(427), 1,
      sym_function_call,
    STATE(589), 1,
      sym_select_element,
  [9204] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      aux_sym_from_spec_token1,
    STATE(532), 1,
      aux_sym_select_elements_repeat1,
  [9214] = 3,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(131), 1,
      sym__string_literal,
  [9224] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_partition_key_list_repeat1,
  [9234] = 3,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 1,
      sym__string_literal,
  [9244] = 3,
    ACTIONS(979), 1,
      sym_object_name,
    ACTIONS(981), 1,
      sym__dquote,
    STATE(392), 1,
      sym_column,
  [9254] = 3,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_RBRACE,
    STATE(460), 1,
      aux_sym_assignment_map_repeat1,
  [9264] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_relation_element_repeat2,
  [9274] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(226), 1,
      sym_table,
  [9284] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(194), 1,
      sym_table,
  [9294] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      aux_sym_create_function_repeat1,
  [9304] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [9314] = 3,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(73), 1,
      sym_insert_values_spec,
  [9324] = 3,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_option_hash_repeat1,
  [9334] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(773), 1,
      sym_return_mode,
  [9344] = 3,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      aux_sym_from_spec_token1,
    STATE(523), 1,
      aux_sym_delete_column_list_repeat1,
  [9354] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_create_keyspace_repeat1,
  [9364] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_create_keyspace_repeat1,
  [9374] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [9384] = 1,
    ACTIONS(820), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9390] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(199), 1,
      sym_table,
  [9400] = 3,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_GT,
    STATE(475), 1,
      aux_sym_data_type_definition_repeat1,
  [9410] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      aux_sym_where_spec_token1,
    STATE(476), 1,
      aux_sym_update_repeat1,
  [9420] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    STATE(460), 1,
      aux_sym_assignment_map_repeat1,
  [9430] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(93), 1,
      sym_table,
  [9440] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_relation_element_repeat2,
  [9450] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_relation_element_repeat2,
  [9460] = 3,
    ACTIONS(954), 1,
      sym_object_name,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_param,
  [9470] = 3,
    ACTIONS(954), 1,
      sym_object_name,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      sym_param,
  [9480] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      aux_sym_create_function_repeat1,
  [9490] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_option_hash_repeat1,
  [9500] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [9510] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(737), 1,
      sym_return_mode,
  [9520] = 3,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(693), 1,
      sym_keyspace,
  [9530] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    STATE(470), 1,
      aux_sym_create_keyspace_repeat1,
  [9540] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_create_keyspace_repeat1,
  [9550] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(108), 1,
      sym_table,
  [9560] = 3,
    ACTIONS(1038), 1,
      sym_object_name,
    STATE(151), 1,
      sym_table_option_item,
    STATE(661), 1,
      sym_table_option_name,
  [9570] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_GT,
    STATE(475), 1,
      aux_sym_data_type_definition_repeat1,
  [9580] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    STATE(477), 1,
      aux_sym_assignment_map_repeat1,
  [9590] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(335), 1,
      sym_table,
  [9600] = 3,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_relation_element_repeat2,
  [9610] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_relation_element_repeat2,
  [9620] = 3,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(71), 1,
      sym_insert_values_spec,
  [9630] = 3,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(230), 1,
      sym_keyspace,
  [9640] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      aux_sym_relation_element_repeat2,
  [9650] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      aux_sym_relation_element_repeat1,
  [9660] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1058), 1,
      aux_sym_update_token2,
    STATE(684), 1,
      sym_using_ttl_timestamp,
  [9670] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      aux_sym_relation_element_repeat1,
  [9680] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(426), 1,
      sym_table,
  [9690] = 3,
    ACTIONS(954), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym_param,
  [9700] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(866), 1,
      sym_table,
  [9710] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_option_hash_repeat1,
  [9720] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_create_function_repeat1,
  [9730] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(195), 1,
      sym_table,
  [9740] = 3,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(72), 1,
      sym_insert_values_spec,
  [9750] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [9760] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(683), 1,
      sym_return_mode,
  [9770] = 3,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_column_list_repeat1,
  [9780] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    STATE(489), 1,
      aux_sym_create_keyspace_repeat1,
  [9790] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
  [9800] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(501), 1,
      sym_table,
  [9810] = 3,
    ACTIONS(263), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1077), 1,
      aux_sym_update_token2,
    STATE(738), 1,
      sym_using_ttl_timestamp,
  [9820] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(322), 1,
      sym_table,
  [9830] = 1,
    ACTIONS(1079), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9836] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      aux_sym_expression_list_repeat1,
  [9846] = 3,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      aux_sym_expression_list_repeat1,
  [9856] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_assignment_tuple_repeat1,
  [9866] = 3,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_function_args_repeat1,
  [9876] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      aux_sym_from_spec_token1,
    STATE(523), 1,
      aux_sym_delete_column_list_repeat1,
  [9886] = 3,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      aux_sym_relation_element_repeat1,
  [9896] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
    STATE(354), 1,
      aux_sym_assignment_tuple_repeat1,
  [9906] = 3,
    ACTIONS(1101), 1,
      sym__hex_digit,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(526), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [9916] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_assignment_tuple_repeat1,
  [9926] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_relation_element_repeat2,
  [9936] = 3,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_relation_element_repeat2,
  [9946] = 3,
    ACTIONS(619), 1,
      sym_object_name,
    ACTIONS(621), 1,
      sym__dquote,
    STATE(623), 1,
      sym_column,
  [9956] = 3,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_column_definition_list_repeat1,
  [9966] = 3,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      aux_sym_from_spec_token1,
    STATE(532), 1,
      aux_sym_select_elements_repeat1,
  [9976] = 3,
    ACTIONS(762), 1,
      aux_sym_select_statement_token3,
    ACTIONS(766), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
  [9986] = 3,
    ACTIONS(666), 1,
      sym__dquote,
    ACTIONS(796), 1,
      sym_object_name,
    STATE(115), 1,
      sym_keyspace,
  [9996] = 3,
    ACTIONS(1118), 1,
      sym__hex_digit,
    ACTIONS(1120), 1,
      anon_sym_SQUOTE,
    STATE(526), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [10006] = 3,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_function_args_repeat1,
  [10016] = 2,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(1122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10024] = 3,
    ACTIONS(80), 1,
      sym__dec_digit,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [10034] = 3,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_function_args_repeat1,
  [10044] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [10054] = 3,
    ACTIONS(937), 1,
      sym_object_name,
    ACTIONS(939), 1,
      sym__dquote,
    STATE(676), 1,
      sym_table,
  [10064] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_create_function_repeat1,
  [10074] = 3,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(507), 1,
      sym_param,
  [10084] = 3,
    ACTIONS(956), 1,
      aux_sym_create_function_token3,
    ACTIONS(958), 1,
      aux_sym_return_mode_token1,
    STATE(736), 1,
      sym_return_mode,
  [10094] = 2,
    ACTIONS(1134), 1,
      sym__dec_digit,
    STATE(112), 1,
      aux_sym__decimal_literal,
  [10101] = 2,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(726), 1,
      sym_user,
  [10108] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(363), 1,
      sym_assignment_element,
  [10115] = 2,
    ACTIONS(1138), 1,
      anon_sym_EQ,
    ACTIONS(1140), 1,
      anon_sym_LBRACK,
  [10122] = 2,
    ACTIONS(1142), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [10129] = 2,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(210), 1,
      sym_user,
  [10136] = 2,
    ACTIONS(1144), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [10143] = 1,
    ACTIONS(1132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10148] = 2,
    ACTIONS(1146), 1,
      sym__hex_digit,
    STATE(37), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [10155] = 2,
    ACTIONS(1148), 1,
      sym__hex_digit,
    STATE(49), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [10162] = 2,
    ACTIONS(1150), 1,
      sym_object_name,
    STATE(47), 1,
      sym_from_spec_element,
  [10169] = 2,
    ACTIONS(1144), 1,
      aux_sym_from_spec_token1,
    STATE(375), 1,
      sym_from_spec,
  [10176] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(211), 1,
      sym_code_block,
  [10183] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(215), 1,
      sym_code_block,
  [10190] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(845), 1,
      sym_language,
  [10197] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(222), 1,
      sym_code_block,
  [10204] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(719), 1,
      sym_function,
  [10211] = 2,
    ACTIONS(1158), 1,
      sym__dec_digit,
    STATE(109), 1,
      aux_sym__decimal_literal,
  [10218] = 1,
    ACTIONS(1122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10223] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(841), 1,
      sym_language,
  [10230] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(227), 1,
      sym_code_block,
  [10237] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(836), 1,
      sym_language,
  [10244] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(231), 1,
      sym_code_block,
  [10251] = 1,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10256] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(807), 1,
      sym_function,
  [10263] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(829), 1,
      sym_language,
  [10270] = 2,
    ACTIONS(1160), 1,
      sym__hex_digit,
    STATE(291), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [10277] = 2,
    ACTIONS(1162), 1,
      sym__dec_digit,
    STATE(46), 1,
      aux_sym__decimal_literal,
  [10284] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(374), 1,
      sym_assignment_element,
  [10291] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(250), 1,
      sym_code_block,
  [10298] = 2,
    ACTIONS(1118), 1,
      sym__hex_digit,
    STATE(535), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [10305] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(244), 1,
      sym_function,
  [10312] = 2,
    ACTIONS(1164), 1,
      sym__dec_digit,
    STATE(82), 1,
      aux_sym__decimal_literal,
  [10319] = 1,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10324] = 2,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(499), 1,
      sym_assignment_tuple,
  [10331] = 1,
    ACTIONS(1166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10336] = 2,
    ACTIONS(1168), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
  [10343] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(263), 1,
      sym_code_block,
  [10350] = 1,
    ACTIONS(1170), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10355] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(814), 1,
      sym_language,
  [10362] = 1,
    ACTIONS(1172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10367] = 2,
    ACTIONS(1174), 1,
      aux_sym_durable_writes_token1,
    STATE(264), 1,
      sym_durable_writes,
  [10374] = 1,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10379] = 1,
    ACTIONS(1111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10384] = 1,
    ACTIONS(1116), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10389] = 1,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10394] = 2,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(91), 1,
      sym_where_spec,
  [10401] = 2,
    ACTIONS(1144), 1,
      aux_sym_from_spec_token1,
    STATE(45), 1,
      sym_from_spec,
  [10408] = 1,
    ACTIONS(1095), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10413] = 1,
    ACTIONS(1180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10418] = 1,
    ACTIONS(1086), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10423] = 2,
    ACTIONS(954), 1,
      sym_object_name,
    STATE(552), 1,
      sym_param,
  [10430] = 1,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10435] = 1,
    ACTIONS(1184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10440] = 2,
    ACTIONS(1152), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(273), 1,
      sym_code_block,
  [10447] = 2,
    ACTIONS(1144), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [10454] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(793), 1,
      sym_language,
  [10461] = 2,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_option_hash,
  [10468] = 1,
    ACTIONS(1104), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [10473] = 2,
    ACTIONS(1174), 1,
      aux_sym_durable_writes_token1,
    STATE(270), 1,
      sym_durable_writes,
  [10480] = 2,
    ACTIONS(1144), 1,
      aux_sym_from_spec_token1,
    STATE(402), 1,
      sym_from_spec,
  [10487] = 1,
    ACTIONS(1186), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [10492] = 1,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10497] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(842), 1,
      sym_function,
  [10504] = 2,
    ACTIONS(845), 1,
      aux_sym_timestamp_token1,
    STATE(391), 1,
      sym_timestamp,
  [10511] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(257), 1,
      sym_role,
  [10518] = 2,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
  [10525] = 1,
    ACTIONS(1190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10530] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(360), 1,
      sym_assignment_element,
  [10537] = 2,
    ACTIONS(804), 1,
      sym_object_name,
    STATE(593), 1,
      sym_delete_column_item,
  [10544] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(161), 1,
      sym_role,
  [10551] = 1,
    ACTIONS(997), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10556] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(774), 1,
      sym_language,
  [10563] = 1,
    ACTIONS(1192), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10568] = 1,
    ACTIONS(875), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10573] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(223), 1,
      sym_function,
  [10580] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(102), 1,
      sym_role,
  [10587] = 1,
    ACTIONS(1020), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10592] = 1,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10597] = 2,
    ACTIONS(873), 1,
      sym_object_name,
    STATE(221), 1,
      sym_user,
  [10604] = 2,
    ACTIONS(1194), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [10611] = 2,
    ACTIONS(1174), 1,
      aux_sym_durable_writes_token1,
    STATE(267), 1,
      sym_durable_writes,
  [10618] = 1,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10623] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(407), 1,
      sym_assignment_element,
  [10630] = 1,
    ACTIONS(849), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10635] = 2,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
  [10642] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(414), 1,
      sym_assignment_element,
  [10649] = 2,
    ACTIONS(847), 1,
      aux_sym_ttl_token1,
    STATE(157), 1,
      sym_ttl,
  [10656] = 2,
    ACTIONS(859), 1,
      sym_object_name,
    STATE(160), 1,
      sym_if_condition,
  [10663] = 2,
    ACTIONS(1198), 1,
      sym_object_name,
    STATE(137), 1,
      sym_order_spec_element,
  [10670] = 2,
    ACTIONS(1200), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [10677] = 1,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10682] = 2,
    ACTIONS(845), 1,
      aux_sym_timestamp_token1,
    STATE(157), 1,
      sym_timestamp,
  [10689] = 1,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10694] = 1,
    ACTIONS(1015), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10699] = 2,
    ACTIONS(1204), 1,
      sym__dec_digit,
    STATE(472), 1,
      aux_sym__decimal_literal,
  [10706] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(234), 1,
      sym_role,
  [10713] = 2,
    ACTIONS(1206), 1,
      sym__dec_digit,
    STATE(107), 1,
      aux_sym__decimal_literal,
  [10720] = 1,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10725] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(93), 1,
      sym_function,
  [10732] = 2,
    ACTIONS(1136), 1,
      sym_object_name,
    STATE(622), 1,
      sym_assignment_element,
  [10739] = 1,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10744] = 2,
    ACTIONS(1156), 1,
      sym_object_name,
    STATE(821), 1,
      sym_function,
  [10751] = 2,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(479), 1,
      sym_assignment_tuple,
  [10758] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(742), 1,
      sym_language,
  [10765] = 2,
    ACTIONS(1212), 1,
      sym__dec_digit,
    STATE(94), 1,
      aux_sym__decimal_literal,
  [10772] = 1,
    ACTIONS(1047), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10777] = 2,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(651), 1,
      sym_assignment_tuple,
  [10784] = 1,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10789] = 1,
    ACTIONS(1056), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10794] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(214), 1,
      sym_role,
  [10801] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(213), 1,
      sym_role,
  [10808] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(212), 1,
      sym_role,
  [10815] = 2,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(135), 1,
      sym_role,
  [10822] = 2,
    ACTIONS(833), 1,
      aux_sym_where_spec_token1,
    STATE(81), 1,
      sym_where_spec,
  [10829] = 1,
    ACTIONS(1216), 1,
      aux_sym_create_function_token4,
  [10833] = 1,
    ACTIONS(1218), 1,
      anon_sym_EQ,
  [10837] = 1,
    ACTIONS(1220), 1,
      sym__hex_4digit,
  [10841] = 1,
    ACTIONS(1222), 1,
      anon_sym_DOT,
  [10845] = 1,
    ACTIONS(1224), 1,
      sym_object_name,
  [10849] = 1,
    ACTIONS(1226), 1,
      anon_sym_LPAREN,
  [10853] = 1,
    ACTIONS(1228), 1,
      aux_sym_order_spec_token2,
  [10857] = 1,
    ACTIONS(1230), 1,
      aux_sym_if_exist_token2,
  [10861] = 1,
    ACTIONS(1077), 1,
      aux_sym_update_token2,
  [10865] = 1,
    ACTIONS(1232), 1,
      aux_sym_resource_token3,
  [10869] = 1,
    ACTIONS(1234), 1,
      aux_sym_create_keyspace_token1,
  [10873] = 1,
    ACTIONS(1236), 1,
      anon_sym_LPAREN,
  [10877] = 1,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
  [10881] = 1,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
  [10885] = 1,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [10889] = 1,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
  [10893] = 1,
    ACTIONS(1246), 1,
      anon_sym_LPAREN,
  [10897] = 1,
    ACTIONS(1248), 1,
      anon_sym_DOT,
  [10901] = 1,
    ACTIONS(1250), 1,
      aux_sym_select_statement_token6,
  [10905] = 1,
    ACTIONS(1252), 1,
      anon_sym_DOT,
  [10909] = 1,
    ACTIONS(1254), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10913] = 1,
    ACTIONS(1256), 1,
      aux_sym_create_index_token3,
  [10917] = 1,
    ACTIONS(1258), 1,
      aux_sym_create_keyspace_token2,
  [10921] = 1,
    ACTIONS(1260), 1,
      aux_sym_create_function_token3,
  [10925] = 1,
    ACTIONS(1262), 1,
      aux_sym_update_token2,
  [10929] = 1,
    ACTIONS(1264), 1,
      aux_sym_grant_token2,
  [10933] = 1,
    ACTIONS(1266), 1,
      aux_sym_create_function_token4,
  [10937] = 1,
    ACTIONS(1268), 1,
      aux_sym_return_mode_token2,
  [10941] = 1,
    ACTIONS(1270), 1,
      aux_sym_create_function_token3,
  [10945] = 1,
    ACTIONS(1272), 1,
      anon_sym_LPAREN,
  [10949] = 1,
    ACTIONS(1274), 1,
      aux_sym_create_keyspace_token1,
  [10953] = 1,
    ACTIONS(1276), 1,
      anon_sym_DOT,
  [10957] = 1,
    ACTIONS(1278), 1,
      aux_sym_create_index_token3,
  [10961] = 1,
    ACTIONS(1280), 1,
      aux_sym_create_keyspace_token1,
  [10965] = 1,
    ACTIONS(1254), 1,
      anon_sym_SQUOTE,
  [10969] = 1,
    ACTIONS(1282), 1,
      anon_sym_DOT,
  [10973] = 1,
    ACTIONS(1284), 1,
      anon_sym_DOT,
  [10977] = 1,
    ACTIONS(1286), 1,
      aux_sym__string_literal_token2,
  [10981] = 1,
    ACTIONS(1288), 1,
      anon_sym_LPAREN,
  [10985] = 1,
    ACTIONS(1290), 1,
      aux_sym__string_literal_token1,
  [10989] = 1,
    ACTIONS(1292), 1,
      anon_sym_DOT,
  [10993] = 1,
    ACTIONS(1294), 1,
      sym__hex_4digit,
  [10997] = 1,
    ACTIONS(1296), 1,
      aux_sym_select_statement_token6,
  [11001] = 1,
    ACTIONS(1298), 1,
      anon_sym_DASH,
  [11005] = 1,
    ACTIONS(1300), 1,
      anon_sym_LPAREN,
  [11009] = 1,
    ACTIONS(1302), 1,
      anon_sym_LPAREN,
  [11013] = 1,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [11017] = 1,
    ACTIONS(1306), 1,
      aux_sym_select_statement_token6,
  [11021] = 1,
    ACTIONS(1308), 1,
      anon_sym_DOT,
  [11025] = 1,
    ACTIONS(1310), 1,
      anon_sym_DOT,
  [11029] = 1,
    ACTIONS(1312), 1,
      aux_sym_resource_token2,
  [11033] = 1,
    ACTIONS(1314), 1,
      aux_sym_select_statement_token6,
  [11037] = 1,
    ACTIONS(1316), 1,
      anon_sym_DOT,
  [11041] = 1,
    ACTIONS(1318), 1,
      anon_sym_DOT,
  [11045] = 1,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
  [11049] = 1,
    ACTIONS(1322), 1,
      aux_sym_if_not_exist_token1,
  [11053] = 1,
    ACTIONS(1324), 1,
      anon_sym_DOT,
  [11057] = 1,
    ACTIONS(1326), 1,
      anon_sym_DOT,
  [11061] = 1,
    ACTIONS(1328), 1,
      sym__dquote,
  [11065] = 1,
    ACTIONS(1330), 1,
      anon_sym_LPAREN,
  [11069] = 1,
    ACTIONS(1058), 1,
      aux_sym_update_token2,
  [11073] = 1,
    ACTIONS(1332), 1,
      aux_sym_if_exist_token2,
  [11077] = 1,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [11081] = 1,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [11085] = 1,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
  [11089] = 1,
    ACTIONS(1340), 1,
      anon_sym_DOT,
  [11093] = 1,
    ACTIONS(1342), 1,
      aux_sym_create_keyspace_token1,
  [11097] = 1,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [11101] = 1,
    ACTIONS(1346), 1,
      sym_object_name,
  [11105] = 1,
    ACTIONS(1348), 1,
      anon_sym_COLON,
  [11109] = 1,
    ACTIONS(1350), 1,
      anon_sym_LBRACE,
  [11113] = 1,
    ACTIONS(1352), 1,
      aux_sym_return_mode_token2,
  [11117] = 1,
    ACTIONS(1354), 1,
      aux_sym_constant_token1,
  [11121] = 1,
    ACTIONS(1356), 1,
      anon_sym_LPAREN,
  [11125] = 1,
    ACTIONS(1358), 1,
      sym__dquote,
  [11129] = 1,
    ACTIONS(1360), 1,
      aux_sym_create_function_token4,
  [11133] = 1,
    ACTIONS(1362), 1,
      aux_sym_create_function_token3,
  [11137] = 1,
    ACTIONS(1364), 1,
      aux_sym_create_function_token3,
  [11141] = 1,
    ACTIONS(919), 1,
      aux_sym_update_token2,
  [11145] = 1,
    ACTIONS(1366), 1,
      anon_sym_COLON,
  [11149] = 1,
    ACTIONS(1368), 1,
      aux_sym_create_function_token3,
  [11153] = 1,
    ACTIONS(1370), 1,
      aux_sym_select_element_token1,
  [11157] = 1,
    ACTIONS(1372), 1,
      aux_sym_select_element_token1,
  [11161] = 1,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
  [11165] = 1,
    ACTIONS(1376), 1,
      aux_sym_create_function_token3,
  [11169] = 1,
    ACTIONS(1378), 1,
      sym__dquote,
  [11173] = 1,
    ACTIONS(1380), 1,
      aux_sym_role_with_options_token1,
  [11177] = 1,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
  [11181] = 1,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [11185] = 1,
    ACTIONS(1386), 1,
      anon_sym_EQ,
  [11189] = 1,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
  [11193] = 1,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
  [11197] = 1,
    ACTIONS(1392), 1,
      anon_sym_DOT,
  [11201] = 1,
    ACTIONS(1394), 1,
      sym__hex_4digit,
  [11205] = 1,
    ACTIONS(1396), 1,
      sym_object_name,
  [11209] = 1,
    ACTIONS(1398), 1,
      anon_sym_DOT,
  [11213] = 1,
    ACTIONS(1400), 1,
      anon_sym_COLON,
  [11217] = 1,
    ACTIONS(1402), 1,
      anon_sym_DOT,
  [11221] = 1,
    ACTIONS(1404), 1,
      anon_sym_DOT,
  [11225] = 1,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
  [11229] = 1,
    ACTIONS(1408), 1,
      anon_sym_DASH,
  [11233] = 1,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
  [11237] = 1,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
  [11241] = 1,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
  [11245] = 1,
    ACTIONS(1416), 1,
      anon_sym_DOT,
  [11249] = 1,
    ACTIONS(1396), 1,
      anon_sym_STAR,
  [11253] = 1,
    ACTIONS(1418), 1,
      aux_sym_durable_writes_token2,
  [11257] = 1,
    ACTIONS(1420), 1,
      aux_sym_from_spec_token1,
  [11261] = 1,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
  [11265] = 1,
    ACTIONS(1424), 1,
      anon_sym_DOT,
  [11269] = 1,
    ACTIONS(1426), 1,
      anon_sym_DOT,
  [11273] = 1,
    ACTIONS(1428), 1,
      aux_sym_create_function_token4,
  [11277] = 1,
    ACTIONS(1430), 1,
      aux_sym_order_spec_token1,
  [11281] = 1,
    ACTIONS(1432), 1,
      aux_sym_create_function_token3,
  [11285] = 1,
    ACTIONS(1434), 1,
      aux_sym_select_element_token1,
  [11289] = 1,
    ACTIONS(1436), 1,
      anon_sym_EQ,
  [11293] = 1,
    ACTIONS(1438), 1,
      anon_sym_LPAREN,
  [11297] = 1,
    ACTIONS(1440), 1,
      sym__boolean_literal,
  [11301] = 1,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
  [11305] = 1,
    ACTIONS(1444), 1,
      aux_sym_role_with_options_token1,
  [11309] = 1,
    ACTIONS(1446), 1,
      sym__hex_4digit,
  [11313] = 1,
    ACTIONS(1448), 1,
      anon_sym_EQ,
  [11317] = 1,
    ACTIONS(1450), 1,
      aux_sym_insert_statement_token2,
  [11321] = 1,
    ACTIONS(1452), 1,
      anon_sym_EQ,
  [11325] = 1,
    ACTIONS(1454), 1,
      anon_sym_EQ,
  [11329] = 1,
    ACTIONS(1456), 1,
      aux_sym_relalationContainsKey_token2,
  [11333] = 1,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
  [11337] = 1,
    ACTIONS(1460), 1,
      aux_sym_relalationContainsKey_token2,
  [11341] = 1,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
  [11345] = 1,
    ACTIONS(1464), 1,
      aux_sym_create_function_token3,
  [11349] = 1,
    ACTIONS(1466), 1,
      anon_sym_EQ,
  [11353] = 1,
    ACTIONS(1468), 1,
      aux_sym_create_index_token3,
  [11357] = 1,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
  [11361] = 1,
    ACTIONS(1472), 1,
      aux_sym_select_element_token1,
  [11365] = 1,
    ACTIONS(1474), 1,
      sym_object_name,
  [11369] = 1,
    ACTIONS(1476), 1,
      aux_sym_create_function_token4,
  [11373] = 1,
    ACTIONS(1478), 1,
      aux_sym_create_index_token3,
  [11377] = 1,
    ACTIONS(1480), 1,
      aux_sym_select_statement_token6,
  [11381] = 1,
    ACTIONS(1482), 1,
      aux_sym__string_literal_token2,
  [11385] = 1,
    ACTIONS(1484), 1,
      aux_sym_create_index_token3,
  [11389] = 1,
    ACTIONS(1486), 1,
      aux_sym_create_function_token3,
  [11393] = 1,
    ACTIONS(1488), 1,
      aux_sym_constant_token1,
  [11397] = 1,
    ACTIONS(1490), 1,
      sym__hex_4digit,
  [11401] = 1,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
  [11405] = 1,
    ACTIONS(1494), 1,
      sym_object_name,
  [11409] = 1,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
  [11413] = 1,
    ACTIONS(1498), 1,
      anon_sym_LPAREN,
  [11417] = 1,
    ACTIONS(1500), 1,
      anon_sym_LPAREN,
  [11421] = 1,
    ACTIONS(1502), 1,
      anon_sym_GT,
  [11425] = 1,
    ACTIONS(1504), 1,
      anon_sym_LBRACE,
  [11429] = 1,
    ACTIONS(1506), 1,
      anon_sym_DOT,
  [11433] = 1,
    ACTIONS(1508), 1,
      sym__boolean_literal,
  [11437] = 1,
    ACTIONS(1510), 1,
      anon_sym_DASH,
  [11441] = 1,
    ACTIONS(1512), 1,
      anon_sym_DASH,
  [11445] = 1,
    ACTIONS(1514), 1,
      aux_sym_select_element_token1,
  [11449] = 1,
    ACTIONS(1516), 1,
      aux_sym_select_statement_token6,
  [11453] = 1,
    ACTIONS(1518), 1,
      aux_sym_create_function_token4,
  [11457] = 1,
    ACTIONS(1520), 1,
      anon_sym_DOT,
  [11461] = 1,
    ACTIONS(1522), 1,
      anon_sym_DOLLAR_DOLLAR,
  [11465] = 1,
    ACTIONS(1524), 1,
      sym_object_name,
  [11469] = 1,
    ACTIONS(1526), 1,
      aux_sym_create_function_token3,
  [11473] = 1,
    ACTIONS(1528), 1,
      anon_sym_LPAREN,
  [11477] = 1,
    ACTIONS(1530), 1,
      aux_sym_create_function_token2,
  [11481] = 1,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
  [11485] = 1,
    ACTIONS(1534), 1,
      sym_object_name,
  [11489] = 1,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
  [11493] = 1,
    ACTIONS(1538), 1,
      aux_sym_create_keyspace_token2,
  [11497] = 1,
    ACTIONS(1540), 1,
      anon_sym_GT,
  [11501] = 1,
    ACTIONS(1542), 1,
      sym_object_name,
  [11505] = 1,
    ACTIONS(1544), 1,
      aux_sym_select_element_token1,
  [11509] = 1,
    ACTIONS(1546), 1,
      anon_sym_EQ,
  [11513] = 1,
    ACTIONS(1548), 1,
      anon_sym_LPAREN,
  [11517] = 1,
    ACTIONS(1550), 1,
      aux_sym_create_function_token4,
  [11521] = 1,
    ACTIONS(1552), 1,
      anon_sym_DOT,
  [11525] = 1,
    ACTIONS(1554), 1,
      anon_sym_DOT,
  [11529] = 1,
    ACTIONS(1556), 1,
      sym_object_name,
  [11533] = 1,
    ACTIONS(1558), 1,
      aux_sym_select_element_token1,
  [11537] = 1,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
  [11541] = 1,
    ACTIONS(1562), 1,
      aux_sym_create_function_token4,
  [11545] = 1,
    ACTIONS(1564), 1,
      sym_object_name,
  [11549] = 1,
    ACTIONS(1566), 1,
      sym__hex_4digit,
  [11553] = 1,
    ACTIONS(1568), 1,
      aux_sym_select_element_token1,
  [11557] = 1,
    ACTIONS(1570), 1,
      anon_sym_LPAREN,
  [11561] = 1,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
  [11565] = 1,
    ACTIONS(1574), 1,
      aux_sym_select_statement_token6,
  [11569] = 1,
    ACTIONS(1576), 1,
      aux_sym_select_element_token1,
  [11573] = 1,
    ACTIONS(1578), 1,
      anon_sym_LPAREN,
  [11577] = 1,
    ACTIONS(1580), 1,
      aux_sym_order_spec_token2,
  [11581] = 1,
    ACTIONS(1582), 1,
      aux_sym_begin_batch_token4,
  [11585] = 1,
    ACTIONS(1584), 1,
      anon_sym_LPAREN,
  [11589] = 1,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
  [11593] = 1,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
  [11597] = 1,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
  [11601] = 1,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [11605] = 1,
    ACTIONS(1592), 1,
      anon_sym_RPAREN,
  [11609] = 1,
    ACTIONS(1594), 1,
      anon_sym_LPAREN,
  [11613] = 1,
    ACTIONS(1596), 1,
      anon_sym_DOT,
  [11617] = 1,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
  [11621] = 1,
    ACTIONS(1600), 1,
      aux_sym_if_exist_token2,
  [11625] = 1,
    ACTIONS(1602), 1,
      sym__dquote,
  [11629] = 1,
    ACTIONS(1604), 1,
      sym_object_name,
  [11633] = 1,
    ACTIONS(1606), 1,
      aux_sym_if_not_exist_token1,
  [11637] = 1,
    ACTIONS(1608), 1,
      sym__hex_digit,
  [11641] = 1,
    ACTIONS(1610), 1,
      anon_sym_RPAREN,
  [11645] = 1,
    ACTIONS(1612), 1,
      sym_object_name,
  [11649] = 1,
    ACTIONS(1614), 1,
      sym_object_name,
  [11653] = 1,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
  [11657] = 1,
    ACTIONS(1618), 1,
      aux_sym_constant_token1,
  [11661] = 1,
    ACTIONS(1620), 1,
      ts_builtin_sym_end,
  [11665] = 1,
    ACTIONS(1622), 1,
      sym__dquote,
  [11669] = 1,
    ACTIONS(1624), 1,
      aux_sym_create_index_token3,
  [11673] = 1,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
  [11677] = 1,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
  [11681] = 1,
    ACTIONS(1628), 1,
      sym_object_name,
  [11685] = 1,
    ACTIONS(1630), 1,
      aux_sym_insert_statement_token2,
  [11689] = 1,
    ACTIONS(1632), 1,
      anon_sym_RPAREN,
  [11693] = 1,
    ACTIONS(1634), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 215,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 405,
  [SMALL_STATE(12)] = 442,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 545,
  [SMALL_STATE(16)] = 582,
  [SMALL_STATE(17)] = 619,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 689,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 800,
  [SMALL_STATE(23)] = 837,
  [SMALL_STATE(24)] = 870,
  [SMALL_STATE(25)] = 903,
  [SMALL_STATE(26)] = 937,
  [SMALL_STATE(27)] = 967,
  [SMALL_STATE(28)] = 997,
  [SMALL_STATE(29)] = 1027,
  [SMALL_STATE(30)] = 1061,
  [SMALL_STATE(31)] = 1118,
  [SMALL_STATE(32)] = 1172,
  [SMALL_STATE(33)] = 1200,
  [SMALL_STATE(34)] = 1228,
  [SMALL_STATE(35)] = 1253,
  [SMALL_STATE(36)] = 1278,
  [SMALL_STATE(37)] = 1330,
  [SMALL_STATE(38)] = 1357,
  [SMALL_STATE(39)] = 1382,
  [SMALL_STATE(40)] = 1417,
  [SMALL_STATE(41)] = 1454,
  [SMALL_STATE(42)] = 1489,
  [SMALL_STATE(43)] = 1516,
  [SMALL_STATE(44)] = 1545,
  [SMALL_STATE(45)] = 1596,
  [SMALL_STATE(46)] = 1631,
  [SMALL_STATE(47)] = 1657,
  [SMALL_STATE(48)] = 1679,
  [SMALL_STATE(49)] = 1701,
  [SMALL_STATE(50)] = 1727,
  [SMALL_STATE(51)] = 1749,
  [SMALL_STATE(52)] = 1771,
  [SMALL_STATE(53)] = 1793,
  [SMALL_STATE(54)] = 1815,
  [SMALL_STATE(55)] = 1837,
  [SMALL_STATE(56)] = 1859,
  [SMALL_STATE(57)] = 1885,
  [SMALL_STATE(58)] = 1907,
  [SMALL_STATE(59)] = 1929,
  [SMALL_STATE(60)] = 1953,
  [SMALL_STATE(61)] = 1975,
  [SMALL_STATE(62)] = 2001,
  [SMALL_STATE(63)] = 2027,
  [SMALL_STATE(64)] = 2049,
  [SMALL_STATE(65)] = 2075,
  [SMALL_STATE(66)] = 2097,
  [SMALL_STATE(67)] = 2123,
  [SMALL_STATE(68)] = 2144,
  [SMALL_STATE(69)] = 2173,
  [SMALL_STATE(70)] = 2196,
  [SMALL_STATE(71)] = 2221,
  [SMALL_STATE(72)] = 2250,
  [SMALL_STATE(73)] = 2279,
  [SMALL_STATE(74)] = 2308,
  [SMALL_STATE(75)] = 2329,
  [SMALL_STATE(76)] = 2358,
  [SMALL_STATE(77)] = 2379,
  [SMALL_STATE(78)] = 2408,
  [SMALL_STATE(79)] = 2437,
  [SMALL_STATE(80)] = 2466,
  [SMALL_STATE(81)] = 2511,
  [SMALL_STATE(82)] = 2535,
  [SMALL_STATE(83)] = 2561,
  [SMALL_STATE(84)] = 2585,
  [SMALL_STATE(85)] = 2609,
  [SMALL_STATE(86)] = 2629,
  [SMALL_STATE(87)] = 2649,
  [SMALL_STATE(88)] = 2673,
  [SMALL_STATE(89)] = 2697,
  [SMALL_STATE(90)] = 2739,
  [SMALL_STATE(91)] = 2763,
  [SMALL_STATE(92)] = 2787,
  [SMALL_STATE(93)] = 2811,
  [SMALL_STATE(94)] = 2831,
  [SMALL_STATE(95)] = 2857,
  [SMALL_STATE(96)] = 2881,
  [SMALL_STATE(97)] = 2905,
  [SMALL_STATE(98)] = 2929,
  [SMALL_STATE(99)] = 2971,
  [SMALL_STATE(100)] = 2991,
  [SMALL_STATE(101)] = 3015,
  [SMALL_STATE(102)] = 3035,
  [SMALL_STATE(103)] = 3055,
  [SMALL_STATE(104)] = 3099,
  [SMALL_STATE(105)] = 3123,
  [SMALL_STATE(106)] = 3143,
  [SMALL_STATE(107)] = 3163,
  [SMALL_STATE(108)] = 3189,
  [SMALL_STATE(109)] = 3209,
  [SMALL_STATE(110)] = 3235,
  [SMALL_STATE(111)] = 3277,
  [SMALL_STATE(112)] = 3301,
  [SMALL_STATE(113)] = 3327,
  [SMALL_STATE(114)] = 3351,
  [SMALL_STATE(115)] = 3375,
  [SMALL_STATE(116)] = 3395,
  [SMALL_STATE(117)] = 3417,
  [SMALL_STATE(118)] = 3440,
  [SMALL_STATE(119)] = 3481,
  [SMALL_STATE(120)] = 3504,
  [SMALL_STATE(121)] = 3523,
  [SMALL_STATE(122)] = 3542,
  [SMALL_STATE(123)] = 3565,
  [SMALL_STATE(124)] = 3584,
  [SMALL_STATE(125)] = 3625,
  [SMALL_STATE(126)] = 3648,
  [SMALL_STATE(127)] = 3671,
  [SMALL_STATE(128)] = 3692,
  [SMALL_STATE(129)] = 3713,
  [SMALL_STATE(130)] = 3736,
  [SMALL_STATE(131)] = 3759,
  [SMALL_STATE(132)] = 3780,
  [SMALL_STATE(133)] = 3799,
  [SMALL_STATE(134)] = 3822,
  [SMALL_STATE(135)] = 3845,
  [SMALL_STATE(136)] = 3868,
  [SMALL_STATE(137)] = 3891,
  [SMALL_STATE(138)] = 3910,
  [SMALL_STATE(139)] = 3933,
  [SMALL_STATE(140)] = 3952,
  [SMALL_STATE(141)] = 3975,
  [SMALL_STATE(142)] = 3998,
  [SMALL_STATE(143)] = 4021,
  [SMALL_STATE(144)] = 4044,
  [SMALL_STATE(145)] = 4063,
  [SMALL_STATE(146)] = 4082,
  [SMALL_STATE(147)] = 4105,
  [SMALL_STATE(148)] = 4128,
  [SMALL_STATE(149)] = 4151,
  [SMALL_STATE(150)] = 4172,
  [SMALL_STATE(151)] = 4195,
  [SMALL_STATE(152)] = 4214,
  [SMALL_STATE(153)] = 4237,
  [SMALL_STATE(154)] = 4260,
  [SMALL_STATE(155)] = 4301,
  [SMALL_STATE(156)] = 4324,
  [SMALL_STATE(157)] = 4347,
  [SMALL_STATE(158)] = 4365,
  [SMALL_STATE(159)] = 4383,
  [SMALL_STATE(160)] = 4403,
  [SMALL_STATE(161)] = 4421,
  [SMALL_STATE(162)] = 4441,
  [SMALL_STATE(163)] = 4461,
  [SMALL_STATE(164)] = 4479,
  [SMALL_STATE(165)] = 4517,
  [SMALL_STATE(166)] = 4535,
  [SMALL_STATE(167)] = 4573,
  [SMALL_STATE(168)] = 4611,
  [SMALL_STATE(169)] = 4649,
  [SMALL_STATE(170)] = 4687,
  [SMALL_STATE(171)] = 4725,
  [SMALL_STATE(172)] = 4743,
  [SMALL_STATE(173)] = 4761,
  [SMALL_STATE(174)] = 4779,
  [SMALL_STATE(175)] = 4817,
  [SMALL_STATE(176)] = 4855,
  [SMALL_STATE(177)] = 4875,
  [SMALL_STATE(178)] = 4895,
  [SMALL_STATE(179)] = 4933,
  [SMALL_STATE(180)] = 4971,
  [SMALL_STATE(181)] = 4991,
  [SMALL_STATE(182)] = 5029,
  [SMALL_STATE(183)] = 5067,
  [SMALL_STATE(184)] = 5087,
  [SMALL_STATE(185)] = 5125,
  [SMALL_STATE(186)] = 5163,
  [SMALL_STATE(187)] = 5201,
  [SMALL_STATE(188)] = 5218,
  [SMALL_STATE(189)] = 5235,
  [SMALL_STATE(190)] = 5252,
  [SMALL_STATE(191)] = 5269,
  [SMALL_STATE(192)] = 5286,
  [SMALL_STATE(193)] = 5303,
  [SMALL_STATE(194)] = 5320,
  [SMALL_STATE(195)] = 5337,
  [SMALL_STATE(196)] = 5354,
  [SMALL_STATE(197)] = 5371,
  [SMALL_STATE(198)] = 5388,
  [SMALL_STATE(199)] = 5405,
  [SMALL_STATE(200)] = 5422,
  [SMALL_STATE(201)] = 5439,
  [SMALL_STATE(202)] = 5456,
  [SMALL_STATE(203)] = 5473,
  [SMALL_STATE(204)] = 5490,
  [SMALL_STATE(205)] = 5509,
  [SMALL_STATE(206)] = 5526,
  [SMALL_STATE(207)] = 5543,
  [SMALL_STATE(208)] = 5560,
  [SMALL_STATE(209)] = 5577,
  [SMALL_STATE(210)] = 5594,
  [SMALL_STATE(211)] = 5611,
  [SMALL_STATE(212)] = 5628,
  [SMALL_STATE(213)] = 5645,
  [SMALL_STATE(214)] = 5662,
  [SMALL_STATE(215)] = 5679,
  [SMALL_STATE(216)] = 5696,
  [SMALL_STATE(217)] = 5713,
  [SMALL_STATE(218)] = 5730,
  [SMALL_STATE(219)] = 5747,
  [SMALL_STATE(220)] = 5764,
  [SMALL_STATE(221)] = 5781,
  [SMALL_STATE(222)] = 5798,
  [SMALL_STATE(223)] = 5815,
  [SMALL_STATE(224)] = 5832,
  [SMALL_STATE(225)] = 5849,
  [SMALL_STATE(226)] = 5866,
  [SMALL_STATE(227)] = 5883,
  [SMALL_STATE(228)] = 5900,
  [SMALL_STATE(229)] = 5917,
  [SMALL_STATE(230)] = 5934,
  [SMALL_STATE(231)] = 5951,
  [SMALL_STATE(232)] = 5968,
  [SMALL_STATE(233)] = 5985,
  [SMALL_STATE(234)] = 6002,
  [SMALL_STATE(235)] = 6019,
  [SMALL_STATE(236)] = 6036,
  [SMALL_STATE(237)] = 6053,
  [SMALL_STATE(238)] = 6070,
  [SMALL_STATE(239)] = 6087,
  [SMALL_STATE(240)] = 6104,
  [SMALL_STATE(241)] = 6121,
  [SMALL_STATE(242)] = 6138,
  [SMALL_STATE(243)] = 6155,
  [SMALL_STATE(244)] = 6172,
  [SMALL_STATE(245)] = 6189,
  [SMALL_STATE(246)] = 6206,
  [SMALL_STATE(247)] = 6223,
  [SMALL_STATE(248)] = 6240,
  [SMALL_STATE(249)] = 6257,
  [SMALL_STATE(250)] = 6274,
  [SMALL_STATE(251)] = 6291,
  [SMALL_STATE(252)] = 6308,
  [SMALL_STATE(253)] = 6325,
  [SMALL_STATE(254)] = 6342,
  [SMALL_STATE(255)] = 6359,
  [SMALL_STATE(256)] = 6376,
  [SMALL_STATE(257)] = 6393,
  [SMALL_STATE(258)] = 6410,
  [SMALL_STATE(259)] = 6427,
  [SMALL_STATE(260)] = 6444,
  [SMALL_STATE(261)] = 6461,
  [SMALL_STATE(262)] = 6478,
  [SMALL_STATE(263)] = 6495,
  [SMALL_STATE(264)] = 6512,
  [SMALL_STATE(265)] = 6529,
  [SMALL_STATE(266)] = 6546,
  [SMALL_STATE(267)] = 6563,
  [SMALL_STATE(268)] = 6580,
  [SMALL_STATE(269)] = 6597,
  [SMALL_STATE(270)] = 6614,
  [SMALL_STATE(271)] = 6631,
  [SMALL_STATE(272)] = 6648,
  [SMALL_STATE(273)] = 6665,
  [SMALL_STATE(274)] = 6682,
  [SMALL_STATE(275)] = 6698,
  [SMALL_STATE(276)] = 6718,
  [SMALL_STATE(277)] = 6743,
  [SMALL_STATE(278)] = 6768,
  [SMALL_STATE(279)] = 6793,
  [SMALL_STATE(280)] = 6810,
  [SMALL_STATE(281)] = 6827,
  [SMALL_STATE(282)] = 6852,
  [SMALL_STATE(283)] = 6883,
  [SMALL_STATE(284)] = 6914,
  [SMALL_STATE(285)] = 6945,
  [SMALL_STATE(286)] = 6972,
  [SMALL_STATE(287)] = 6997,
  [SMALL_STATE(288)] = 7013,
  [SMALL_STATE(289)] = 7035,
  [SMALL_STATE(290)] = 7063,
  [SMALL_STATE(291)] = 7085,
  [SMALL_STATE(292)] = 7101,
  [SMALL_STATE(293)] = 7125,
  [SMALL_STATE(294)] = 7150,
  [SMALL_STATE(295)] = 7168,
  [SMALL_STATE(296)] = 7188,
  [SMALL_STATE(297)] = 7208,
  [SMALL_STATE(298)] = 7228,
  [SMALL_STATE(299)] = 7250,
  [SMALL_STATE(300)] = 7272,
  [SMALL_STATE(301)] = 7294,
  [SMALL_STATE(302)] = 7303,
  [SMALL_STATE(303)] = 7322,
  [SMALL_STATE(304)] = 7339,
  [SMALL_STATE(305)] = 7358,
  [SMALL_STATE(306)] = 7369,
  [SMALL_STATE(307)] = 7388,
  [SMALL_STATE(308)] = 7401,
  [SMALL_STATE(309)] = 7420,
  [SMALL_STATE(310)] = 7439,
  [SMALL_STATE(311)] = 7458,
  [SMALL_STATE(312)] = 7469,
  [SMALL_STATE(313)] = 7486,
  [SMALL_STATE(314)] = 7505,
  [SMALL_STATE(315)] = 7524,
  [SMALL_STATE(316)] = 7543,
  [SMALL_STATE(317)] = 7562,
  [SMALL_STATE(318)] = 7581,
  [SMALL_STATE(319)] = 7600,
  [SMALL_STATE(320)] = 7608,
  [SMALL_STATE(321)] = 7624,
  [SMALL_STATE(322)] = 7640,
  [SMALL_STATE(323)] = 7656,
  [SMALL_STATE(324)] = 7666,
  [SMALL_STATE(325)] = 7682,
  [SMALL_STATE(326)] = 7692,
  [SMALL_STATE(327)] = 7708,
  [SMALL_STATE(328)] = 7718,
  [SMALL_STATE(329)] = 7732,
  [SMALL_STATE(330)] = 7746,
  [SMALL_STATE(331)] = 7758,
  [SMALL_STATE(332)] = 7774,
  [SMALL_STATE(333)] = 7790,
  [SMALL_STATE(334)] = 7804,
  [SMALL_STATE(335)] = 7820,
  [SMALL_STATE(336)] = 7836,
  [SMALL_STATE(337)] = 7852,
  [SMALL_STATE(338)] = 7868,
  [SMALL_STATE(339)] = 7884,
  [SMALL_STATE(340)] = 7892,
  [SMALL_STATE(341)] = 7902,
  [SMALL_STATE(342)] = 7918,
  [SMALL_STATE(343)] = 7934,
  [SMALL_STATE(344)] = 7950,
  [SMALL_STATE(345)] = 7960,
  [SMALL_STATE(346)] = 7968,
  [SMALL_STATE(347)] = 7984,
  [SMALL_STATE(348)] = 8000,
  [SMALL_STATE(349)] = 8008,
  [SMALL_STATE(350)] = 8024,
  [SMALL_STATE(351)] = 8032,
  [SMALL_STATE(352)] = 8048,
  [SMALL_STATE(353)] = 8064,
  [SMALL_STATE(354)] = 8076,
  [SMALL_STATE(355)] = 8088,
  [SMALL_STATE(356)] = 8104,
  [SMALL_STATE(357)] = 8120,
  [SMALL_STATE(358)] = 8128,
  [SMALL_STATE(359)] = 8136,
  [SMALL_STATE(360)] = 8149,
  [SMALL_STATE(361)] = 8162,
  [SMALL_STATE(362)] = 8175,
  [SMALL_STATE(363)] = 8188,
  [SMALL_STATE(364)] = 8201,
  [SMALL_STATE(365)] = 8214,
  [SMALL_STATE(366)] = 8227,
  [SMALL_STATE(367)] = 8238,
  [SMALL_STATE(368)] = 8251,
  [SMALL_STATE(369)] = 8258,
  [SMALL_STATE(370)] = 8271,
  [SMALL_STATE(371)] = 8284,
  [SMALL_STATE(372)] = 8291,
  [SMALL_STATE(373)] = 8298,
  [SMALL_STATE(374)] = 8311,
  [SMALL_STATE(375)] = 8324,
  [SMALL_STATE(376)] = 8337,
  [SMALL_STATE(377)] = 8348,
  [SMALL_STATE(378)] = 8361,
  [SMALL_STATE(379)] = 8374,
  [SMALL_STATE(380)] = 8387,
  [SMALL_STATE(381)] = 8400,
  [SMALL_STATE(382)] = 8413,
  [SMALL_STATE(383)] = 8426,
  [SMALL_STATE(384)] = 8437,
  [SMALL_STATE(385)] = 8450,
  [SMALL_STATE(386)] = 8463,
  [SMALL_STATE(387)] = 8476,
  [SMALL_STATE(388)] = 8489,
  [SMALL_STATE(389)] = 8502,
  [SMALL_STATE(390)] = 8515,
  [SMALL_STATE(391)] = 8528,
  [SMALL_STATE(392)] = 8535,
  [SMALL_STATE(393)] = 8546,
  [SMALL_STATE(394)] = 8559,
  [SMALL_STATE(395)] = 8566,
  [SMALL_STATE(396)] = 8579,
  [SMALL_STATE(397)] = 8592,
  [SMALL_STATE(398)] = 8605,
  [SMALL_STATE(399)] = 8618,
  [SMALL_STATE(400)] = 8631,
  [SMALL_STATE(401)] = 8644,
  [SMALL_STATE(402)] = 8657,
  [SMALL_STATE(403)] = 8670,
  [SMALL_STATE(404)] = 8683,
  [SMALL_STATE(405)] = 8696,
  [SMALL_STATE(406)] = 8709,
  [SMALL_STATE(407)] = 8718,
  [SMALL_STATE(408)] = 8731,
  [SMALL_STATE(409)] = 8740,
  [SMALL_STATE(410)] = 8753,
  [SMALL_STATE(411)] = 8766,
  [SMALL_STATE(412)] = 8779,
  [SMALL_STATE(413)] = 8792,
  [SMALL_STATE(414)] = 8805,
  [SMALL_STATE(415)] = 8818,
  [SMALL_STATE(416)] = 8828,
  [SMALL_STATE(417)] = 8838,
  [SMALL_STATE(418)] = 8848,
  [SMALL_STATE(419)] = 8858,
  [SMALL_STATE(420)] = 8868,
  [SMALL_STATE(421)] = 8876,
  [SMALL_STATE(422)] = 8886,
  [SMALL_STATE(423)] = 8896,
  [SMALL_STATE(424)] = 8906,
  [SMALL_STATE(425)] = 8916,
  [SMALL_STATE(426)] = 8926,
  [SMALL_STATE(427)] = 8936,
  [SMALL_STATE(428)] = 8944,
  [SMALL_STATE(429)] = 8952,
  [SMALL_STATE(430)] = 8962,
  [SMALL_STATE(431)] = 8968,
  [SMALL_STATE(432)] = 8978,
  [SMALL_STATE(433)] = 8984,
  [SMALL_STATE(434)] = 8994,
  [SMALL_STATE(435)] = 9004,
  [SMALL_STATE(436)] = 9014,
  [SMALL_STATE(437)] = 9024,
  [SMALL_STATE(438)] = 9034,
  [SMALL_STATE(439)] = 9044,
  [SMALL_STATE(440)] = 9054,
  [SMALL_STATE(441)] = 9064,
  [SMALL_STATE(442)] = 9074,
  [SMALL_STATE(443)] = 9084,
  [SMALL_STATE(444)] = 9094,
  [SMALL_STATE(445)] = 9104,
  [SMALL_STATE(446)] = 9114,
  [SMALL_STATE(447)] = 9124,
  [SMALL_STATE(448)] = 9134,
  [SMALL_STATE(449)] = 9144,
  [SMALL_STATE(450)] = 9154,
  [SMALL_STATE(451)] = 9164,
  [SMALL_STATE(452)] = 9174,
  [SMALL_STATE(453)] = 9184,
  [SMALL_STATE(454)] = 9194,
  [SMALL_STATE(455)] = 9204,
  [SMALL_STATE(456)] = 9214,
  [SMALL_STATE(457)] = 9224,
  [SMALL_STATE(458)] = 9234,
  [SMALL_STATE(459)] = 9244,
  [SMALL_STATE(460)] = 9254,
  [SMALL_STATE(461)] = 9264,
  [SMALL_STATE(462)] = 9274,
  [SMALL_STATE(463)] = 9284,
  [SMALL_STATE(464)] = 9294,
  [SMALL_STATE(465)] = 9304,
  [SMALL_STATE(466)] = 9314,
  [SMALL_STATE(467)] = 9324,
  [SMALL_STATE(468)] = 9334,
  [SMALL_STATE(469)] = 9344,
  [SMALL_STATE(470)] = 9354,
  [SMALL_STATE(471)] = 9364,
  [SMALL_STATE(472)] = 9374,
  [SMALL_STATE(473)] = 9384,
  [SMALL_STATE(474)] = 9390,
  [SMALL_STATE(475)] = 9400,
  [SMALL_STATE(476)] = 9410,
  [SMALL_STATE(477)] = 9420,
  [SMALL_STATE(478)] = 9430,
  [SMALL_STATE(479)] = 9440,
  [SMALL_STATE(480)] = 9450,
  [SMALL_STATE(481)] = 9460,
  [SMALL_STATE(482)] = 9470,
  [SMALL_STATE(483)] = 9480,
  [SMALL_STATE(484)] = 9490,
  [SMALL_STATE(485)] = 9500,
  [SMALL_STATE(486)] = 9510,
  [SMALL_STATE(487)] = 9520,
  [SMALL_STATE(488)] = 9530,
  [SMALL_STATE(489)] = 9540,
  [SMALL_STATE(490)] = 9550,
  [SMALL_STATE(491)] = 9560,
  [SMALL_STATE(492)] = 9570,
  [SMALL_STATE(493)] = 9580,
  [SMALL_STATE(494)] = 9590,
  [SMALL_STATE(495)] = 9600,
  [SMALL_STATE(496)] = 9610,
  [SMALL_STATE(497)] = 9620,
  [SMALL_STATE(498)] = 9630,
  [SMALL_STATE(499)] = 9640,
  [SMALL_STATE(500)] = 9650,
  [SMALL_STATE(501)] = 9660,
  [SMALL_STATE(502)] = 9670,
  [SMALL_STATE(503)] = 9680,
  [SMALL_STATE(504)] = 9690,
  [SMALL_STATE(505)] = 9700,
  [SMALL_STATE(506)] = 9710,
  [SMALL_STATE(507)] = 9720,
  [SMALL_STATE(508)] = 9730,
  [SMALL_STATE(509)] = 9740,
  [SMALL_STATE(510)] = 9750,
  [SMALL_STATE(511)] = 9760,
  [SMALL_STATE(512)] = 9770,
  [SMALL_STATE(513)] = 9780,
  [SMALL_STATE(514)] = 9790,
  [SMALL_STATE(515)] = 9800,
  [SMALL_STATE(516)] = 9810,
  [SMALL_STATE(517)] = 9820,
  [SMALL_STATE(518)] = 9830,
  [SMALL_STATE(519)] = 9836,
  [SMALL_STATE(520)] = 9846,
  [SMALL_STATE(521)] = 9856,
  [SMALL_STATE(522)] = 9866,
  [SMALL_STATE(523)] = 9876,
  [SMALL_STATE(524)] = 9886,
  [SMALL_STATE(525)] = 9896,
  [SMALL_STATE(526)] = 9906,
  [SMALL_STATE(527)] = 9916,
  [SMALL_STATE(528)] = 9926,
  [SMALL_STATE(529)] = 9936,
  [SMALL_STATE(530)] = 9946,
  [SMALL_STATE(531)] = 9956,
  [SMALL_STATE(532)] = 9966,
  [SMALL_STATE(533)] = 9976,
  [SMALL_STATE(534)] = 9986,
  [SMALL_STATE(535)] = 9996,
  [SMALL_STATE(536)] = 10006,
  [SMALL_STATE(537)] = 10016,
  [SMALL_STATE(538)] = 10024,
  [SMALL_STATE(539)] = 10034,
  [SMALL_STATE(540)] = 10044,
  [SMALL_STATE(541)] = 10054,
  [SMALL_STATE(542)] = 10064,
  [SMALL_STATE(543)] = 10074,
  [SMALL_STATE(544)] = 10084,
  [SMALL_STATE(545)] = 10094,
  [SMALL_STATE(546)] = 10101,
  [SMALL_STATE(547)] = 10108,
  [SMALL_STATE(548)] = 10115,
  [SMALL_STATE(549)] = 10122,
  [SMALL_STATE(550)] = 10129,
  [SMALL_STATE(551)] = 10136,
  [SMALL_STATE(552)] = 10143,
  [SMALL_STATE(553)] = 10148,
  [SMALL_STATE(554)] = 10155,
  [SMALL_STATE(555)] = 10162,
  [SMALL_STATE(556)] = 10169,
  [SMALL_STATE(557)] = 10176,
  [SMALL_STATE(558)] = 10183,
  [SMALL_STATE(559)] = 10190,
  [SMALL_STATE(560)] = 10197,
  [SMALL_STATE(561)] = 10204,
  [SMALL_STATE(562)] = 10211,
  [SMALL_STATE(563)] = 10218,
  [SMALL_STATE(564)] = 10223,
  [SMALL_STATE(565)] = 10230,
  [SMALL_STATE(566)] = 10237,
  [SMALL_STATE(567)] = 10244,
  [SMALL_STATE(568)] = 10251,
  [SMALL_STATE(569)] = 10256,
  [SMALL_STATE(570)] = 10263,
  [SMALL_STATE(571)] = 10270,
  [SMALL_STATE(572)] = 10277,
  [SMALL_STATE(573)] = 10284,
  [SMALL_STATE(574)] = 10291,
  [SMALL_STATE(575)] = 10298,
  [SMALL_STATE(576)] = 10305,
  [SMALL_STATE(577)] = 10312,
  [SMALL_STATE(578)] = 10319,
  [SMALL_STATE(579)] = 10324,
  [SMALL_STATE(580)] = 10331,
  [SMALL_STATE(581)] = 10336,
  [SMALL_STATE(582)] = 10343,
  [SMALL_STATE(583)] = 10350,
  [SMALL_STATE(584)] = 10355,
  [SMALL_STATE(585)] = 10362,
  [SMALL_STATE(586)] = 10367,
  [SMALL_STATE(587)] = 10374,
  [SMALL_STATE(588)] = 10379,
  [SMALL_STATE(589)] = 10384,
  [SMALL_STATE(590)] = 10389,
  [SMALL_STATE(591)] = 10394,
  [SMALL_STATE(592)] = 10401,
  [SMALL_STATE(593)] = 10408,
  [SMALL_STATE(594)] = 10413,
  [SMALL_STATE(595)] = 10418,
  [SMALL_STATE(596)] = 10423,
  [SMALL_STATE(597)] = 10430,
  [SMALL_STATE(598)] = 10435,
  [SMALL_STATE(599)] = 10440,
  [SMALL_STATE(600)] = 10447,
  [SMALL_STATE(601)] = 10454,
  [SMALL_STATE(602)] = 10461,
  [SMALL_STATE(603)] = 10468,
  [SMALL_STATE(604)] = 10473,
  [SMALL_STATE(605)] = 10480,
  [SMALL_STATE(606)] = 10487,
  [SMALL_STATE(607)] = 10492,
  [SMALL_STATE(608)] = 10497,
  [SMALL_STATE(609)] = 10504,
  [SMALL_STATE(610)] = 10511,
  [SMALL_STATE(611)] = 10518,
  [SMALL_STATE(612)] = 10525,
  [SMALL_STATE(613)] = 10530,
  [SMALL_STATE(614)] = 10537,
  [SMALL_STATE(615)] = 10544,
  [SMALL_STATE(616)] = 10551,
  [SMALL_STATE(617)] = 10556,
  [SMALL_STATE(618)] = 10563,
  [SMALL_STATE(619)] = 10568,
  [SMALL_STATE(620)] = 10573,
  [SMALL_STATE(621)] = 10580,
  [SMALL_STATE(622)] = 10587,
  [SMALL_STATE(623)] = 10592,
  [SMALL_STATE(624)] = 10597,
  [SMALL_STATE(625)] = 10604,
  [SMALL_STATE(626)] = 10611,
  [SMALL_STATE(627)] = 10618,
  [SMALL_STATE(628)] = 10623,
  [SMALL_STATE(629)] = 10630,
  [SMALL_STATE(630)] = 10635,
  [SMALL_STATE(631)] = 10642,
  [SMALL_STATE(632)] = 10649,
  [SMALL_STATE(633)] = 10656,
  [SMALL_STATE(634)] = 10663,
  [SMALL_STATE(635)] = 10670,
  [SMALL_STATE(636)] = 10677,
  [SMALL_STATE(637)] = 10682,
  [SMALL_STATE(638)] = 10689,
  [SMALL_STATE(639)] = 10694,
  [SMALL_STATE(640)] = 10699,
  [SMALL_STATE(641)] = 10706,
  [SMALL_STATE(642)] = 10713,
  [SMALL_STATE(643)] = 10720,
  [SMALL_STATE(644)] = 10725,
  [SMALL_STATE(645)] = 10732,
  [SMALL_STATE(646)] = 10739,
  [SMALL_STATE(647)] = 10744,
  [SMALL_STATE(648)] = 10751,
  [SMALL_STATE(649)] = 10758,
  [SMALL_STATE(650)] = 10765,
  [SMALL_STATE(651)] = 10772,
  [SMALL_STATE(652)] = 10777,
  [SMALL_STATE(653)] = 10784,
  [SMALL_STATE(654)] = 10789,
  [SMALL_STATE(655)] = 10794,
  [SMALL_STATE(656)] = 10801,
  [SMALL_STATE(657)] = 10808,
  [SMALL_STATE(658)] = 10815,
  [SMALL_STATE(659)] = 10822,
  [SMALL_STATE(660)] = 10829,
  [SMALL_STATE(661)] = 10833,
  [SMALL_STATE(662)] = 10837,
  [SMALL_STATE(663)] = 10841,
  [SMALL_STATE(664)] = 10845,
  [SMALL_STATE(665)] = 10849,
  [SMALL_STATE(666)] = 10853,
  [SMALL_STATE(667)] = 10857,
  [SMALL_STATE(668)] = 10861,
  [SMALL_STATE(669)] = 10865,
  [SMALL_STATE(670)] = 10869,
  [SMALL_STATE(671)] = 10873,
  [SMALL_STATE(672)] = 10877,
  [SMALL_STATE(673)] = 10881,
  [SMALL_STATE(674)] = 10885,
  [SMALL_STATE(675)] = 10889,
  [SMALL_STATE(676)] = 10893,
  [SMALL_STATE(677)] = 10897,
  [SMALL_STATE(678)] = 10901,
  [SMALL_STATE(679)] = 10905,
  [SMALL_STATE(680)] = 10909,
  [SMALL_STATE(681)] = 10913,
  [SMALL_STATE(682)] = 10917,
  [SMALL_STATE(683)] = 10921,
  [SMALL_STATE(684)] = 10925,
  [SMALL_STATE(685)] = 10929,
  [SMALL_STATE(686)] = 10933,
  [SMALL_STATE(687)] = 10937,
  [SMALL_STATE(688)] = 10941,
  [SMALL_STATE(689)] = 10945,
  [SMALL_STATE(690)] = 10949,
  [SMALL_STATE(691)] = 10953,
  [SMALL_STATE(692)] = 10957,
  [SMALL_STATE(693)] = 10961,
  [SMALL_STATE(694)] = 10965,
  [SMALL_STATE(695)] = 10969,
  [SMALL_STATE(696)] = 10973,
  [SMALL_STATE(697)] = 10977,
  [SMALL_STATE(698)] = 10981,
  [SMALL_STATE(699)] = 10985,
  [SMALL_STATE(700)] = 10989,
  [SMALL_STATE(701)] = 10993,
  [SMALL_STATE(702)] = 10997,
  [SMALL_STATE(703)] = 11001,
  [SMALL_STATE(704)] = 11005,
  [SMALL_STATE(705)] = 11009,
  [SMALL_STATE(706)] = 11013,
  [SMALL_STATE(707)] = 11017,
  [SMALL_STATE(708)] = 11021,
  [SMALL_STATE(709)] = 11025,
  [SMALL_STATE(710)] = 11029,
  [SMALL_STATE(711)] = 11033,
  [SMALL_STATE(712)] = 11037,
  [SMALL_STATE(713)] = 11041,
  [SMALL_STATE(714)] = 11045,
  [SMALL_STATE(715)] = 11049,
  [SMALL_STATE(716)] = 11053,
  [SMALL_STATE(717)] = 11057,
  [SMALL_STATE(718)] = 11061,
  [SMALL_STATE(719)] = 11065,
  [SMALL_STATE(720)] = 11069,
  [SMALL_STATE(721)] = 11073,
  [SMALL_STATE(722)] = 11077,
  [SMALL_STATE(723)] = 11081,
  [SMALL_STATE(724)] = 11085,
  [SMALL_STATE(725)] = 11089,
  [SMALL_STATE(726)] = 11093,
  [SMALL_STATE(727)] = 11097,
  [SMALL_STATE(728)] = 11101,
  [SMALL_STATE(729)] = 11105,
  [SMALL_STATE(730)] = 11109,
  [SMALL_STATE(731)] = 11113,
  [SMALL_STATE(732)] = 11117,
  [SMALL_STATE(733)] = 11121,
  [SMALL_STATE(734)] = 11125,
  [SMALL_STATE(735)] = 11129,
  [SMALL_STATE(736)] = 11133,
  [SMALL_STATE(737)] = 11137,
  [SMALL_STATE(738)] = 11141,
  [SMALL_STATE(739)] = 11145,
  [SMALL_STATE(740)] = 11149,
  [SMALL_STATE(741)] = 11153,
  [SMALL_STATE(742)] = 11157,
  [SMALL_STATE(743)] = 11161,
  [SMALL_STATE(744)] = 11165,
  [SMALL_STATE(745)] = 11169,
  [SMALL_STATE(746)] = 11173,
  [SMALL_STATE(747)] = 11177,
  [SMALL_STATE(748)] = 11181,
  [SMALL_STATE(749)] = 11185,
  [SMALL_STATE(750)] = 11189,
  [SMALL_STATE(751)] = 11193,
  [SMALL_STATE(752)] = 11197,
  [SMALL_STATE(753)] = 11201,
  [SMALL_STATE(754)] = 11205,
  [SMALL_STATE(755)] = 11209,
  [SMALL_STATE(756)] = 11213,
  [SMALL_STATE(757)] = 11217,
  [SMALL_STATE(758)] = 11221,
  [SMALL_STATE(759)] = 11225,
  [SMALL_STATE(760)] = 11229,
  [SMALL_STATE(761)] = 11233,
  [SMALL_STATE(762)] = 11237,
  [SMALL_STATE(763)] = 11241,
  [SMALL_STATE(764)] = 11245,
  [SMALL_STATE(765)] = 11249,
  [SMALL_STATE(766)] = 11253,
  [SMALL_STATE(767)] = 11257,
  [SMALL_STATE(768)] = 11261,
  [SMALL_STATE(769)] = 11265,
  [SMALL_STATE(770)] = 11269,
  [SMALL_STATE(771)] = 11273,
  [SMALL_STATE(772)] = 11277,
  [SMALL_STATE(773)] = 11281,
  [SMALL_STATE(774)] = 11285,
  [SMALL_STATE(775)] = 11289,
  [SMALL_STATE(776)] = 11293,
  [SMALL_STATE(777)] = 11297,
  [SMALL_STATE(778)] = 11301,
  [SMALL_STATE(779)] = 11305,
  [SMALL_STATE(780)] = 11309,
  [SMALL_STATE(781)] = 11313,
  [SMALL_STATE(782)] = 11317,
  [SMALL_STATE(783)] = 11321,
  [SMALL_STATE(784)] = 11325,
  [SMALL_STATE(785)] = 11329,
  [SMALL_STATE(786)] = 11333,
  [SMALL_STATE(787)] = 11337,
  [SMALL_STATE(788)] = 11341,
  [SMALL_STATE(789)] = 11345,
  [SMALL_STATE(790)] = 11349,
  [SMALL_STATE(791)] = 11353,
  [SMALL_STATE(792)] = 11357,
  [SMALL_STATE(793)] = 11361,
  [SMALL_STATE(794)] = 11365,
  [SMALL_STATE(795)] = 11369,
  [SMALL_STATE(796)] = 11373,
  [SMALL_STATE(797)] = 11377,
  [SMALL_STATE(798)] = 11381,
  [SMALL_STATE(799)] = 11385,
  [SMALL_STATE(800)] = 11389,
  [SMALL_STATE(801)] = 11393,
  [SMALL_STATE(802)] = 11397,
  [SMALL_STATE(803)] = 11401,
  [SMALL_STATE(804)] = 11405,
  [SMALL_STATE(805)] = 11409,
  [SMALL_STATE(806)] = 11413,
  [SMALL_STATE(807)] = 11417,
  [SMALL_STATE(808)] = 11421,
  [SMALL_STATE(809)] = 11425,
  [SMALL_STATE(810)] = 11429,
  [SMALL_STATE(811)] = 11433,
  [SMALL_STATE(812)] = 11437,
  [SMALL_STATE(813)] = 11441,
  [SMALL_STATE(814)] = 11445,
  [SMALL_STATE(815)] = 11449,
  [SMALL_STATE(816)] = 11453,
  [SMALL_STATE(817)] = 11457,
  [SMALL_STATE(818)] = 11461,
  [SMALL_STATE(819)] = 11465,
  [SMALL_STATE(820)] = 11469,
  [SMALL_STATE(821)] = 11473,
  [SMALL_STATE(822)] = 11477,
  [SMALL_STATE(823)] = 11481,
  [SMALL_STATE(824)] = 11485,
  [SMALL_STATE(825)] = 11489,
  [SMALL_STATE(826)] = 11493,
  [SMALL_STATE(827)] = 11497,
  [SMALL_STATE(828)] = 11501,
  [SMALL_STATE(829)] = 11505,
  [SMALL_STATE(830)] = 11509,
  [SMALL_STATE(831)] = 11513,
  [SMALL_STATE(832)] = 11517,
  [SMALL_STATE(833)] = 11521,
  [SMALL_STATE(834)] = 11525,
  [SMALL_STATE(835)] = 11529,
  [SMALL_STATE(836)] = 11533,
  [SMALL_STATE(837)] = 11537,
  [SMALL_STATE(838)] = 11541,
  [SMALL_STATE(839)] = 11545,
  [SMALL_STATE(840)] = 11549,
  [SMALL_STATE(841)] = 11553,
  [SMALL_STATE(842)] = 11557,
  [SMALL_STATE(843)] = 11561,
  [SMALL_STATE(844)] = 11565,
  [SMALL_STATE(845)] = 11569,
  [SMALL_STATE(846)] = 11573,
  [SMALL_STATE(847)] = 11577,
  [SMALL_STATE(848)] = 11581,
  [SMALL_STATE(849)] = 11585,
  [SMALL_STATE(850)] = 11589,
  [SMALL_STATE(851)] = 11593,
  [SMALL_STATE(852)] = 11597,
  [SMALL_STATE(853)] = 11601,
  [SMALL_STATE(854)] = 11605,
  [SMALL_STATE(855)] = 11609,
  [SMALL_STATE(856)] = 11613,
  [SMALL_STATE(857)] = 11617,
  [SMALL_STATE(858)] = 11621,
  [SMALL_STATE(859)] = 11625,
  [SMALL_STATE(860)] = 11629,
  [SMALL_STATE(861)] = 11633,
  [SMALL_STATE(862)] = 11637,
  [SMALL_STATE(863)] = 11641,
  [SMALL_STATE(864)] = 11645,
  [SMALL_STATE(865)] = 11649,
  [SMALL_STATE(866)] = 11653,
  [SMALL_STATE(867)] = 11657,
  [SMALL_STATE(868)] = 11661,
  [SMALL_STATE(869)] = 11665,
  [SMALL_STATE(870)] = 11669,
  [SMALL_STATE(871)] = 11673,
  [SMALL_STATE(872)] = 11677,
  [SMALL_STATE(873)] = 11681,
  [SMALL_STATE(874)] = 11685,
  [SMALL_STATE(875)] = 11689,
  [SMALL_STATE(876)] = 11693,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(874),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(423),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 22),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 22),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 12),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 12),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 8),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 21),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 19),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(312),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 15),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(491),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(303),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 25),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(329),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(633),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 13),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 23),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 23),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 27),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 11),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 6),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 23),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 23),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 13),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 23),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(287),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 13),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(167),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(397),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(396),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(164),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(365),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_keyspace_repeat1, 2), SHIFT_REPEAT(359),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_keyspace_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(25),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(645),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(652),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(794),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(530),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(31),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(614),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(862),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(381),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(454),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(110),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(596),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 20),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 26),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 24),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1620] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
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
