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
#define STATE_COUNT 927
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 290
#define ALIAS_COUNT 6
#define TOKEN_COUNT 139
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
  aux_sym_alter_table_add_token1 = 133,
  aux_sym_alter_table_drop_compact_storage_token1 = 134,
  aux_sym_alter_table_drop_compact_storage_token2 = 135,
  aux_sym_alter_table_rename_token1 = 136,
  aux_sym_user_super_user_token1 = 137,
  aux_sym_apply_batch_token1 = 138,
  sym_source_file = 139,
  sym__statement = 140,
  sym_select_statement = 141,
  sym_select_elements = 142,
  sym_select_element = 143,
  sym_function_call = 144,
  sym_function_args = 145,
  sym_constant = 146,
  sym__uuid = 147,
  sym__string_literal = 148,
  aux_sym__decimal_literal = 149,
  sym__float_literal = 150,
  sym__hexadecimal_literal = 151,
  sym_code_block = 152,
  sym_from_spec = 153,
  sym_from_spec_element = 154,
  sym_where_spec = 155,
  sym_relation_elements = 156,
  sym_relation_element = 157,
  sym_assignment_tuple = 158,
  sym_relalationContainsKey = 159,
  sym_relalationContains = 160,
  sym_order_spec = 161,
  sym_order_spec_element = 162,
  sym_delete_statement = 163,
  sym_begin_batch = 164,
  sym_delete_column_list = 165,
  sym_delete_column_item = 166,
  sym_using_timestamp_spec = 167,
  sym_timestamp = 168,
  sym_if_exist = 169,
  sym_if_spec = 170,
  sym_if_condition_list = 171,
  sym_if_condition = 172,
  sym_insert_statement = 173,
  sym_keyspace = 174,
  sym_table = 175,
  sym_insert_column_spec = 176,
  sym_column_list = 177,
  sym_column = 178,
  sym_insert_values_spec = 179,
  sym_expression_list = 180,
  sym_expression = 181,
  sym_assignment_map = 182,
  sym_assignment_set = 183,
  sym_assignment_list = 184,
  sym_if_not_exist = 185,
  sym_using_ttl_timestamp = 186,
  sym_ttl = 187,
  sym_truncate = 188,
  sym_create_index = 189,
  sym_index_name = 190,
  sym_index_column_spec = 191,
  sym_index_keys_spec = 192,
  sym_index_entries_s_spec = 193,
  sym_index_full_spec = 194,
  sym_drop_index = 195,
  sym_update = 196,
  sym_assignment_element = 197,
  sym_use = 198,
  sym_grant = 199,
  sym_priviledge = 200,
  sym_resource = 201,
  sym_role = 202,
  sym_function = 203,
  sym_revoke = 204,
  sym_list_roles = 205,
  sym_list_permissions = 206,
  sym_drop_function = 207,
  sym_drop_keyspace = 208,
  sym_drop_role = 209,
  sym_drop_table = 210,
  sym_drop_user = 211,
  sym_user = 212,
  sym_create_function = 213,
  sym_param = 214,
  sym_data_type = 215,
  sym_data_type_name = 216,
  sym_data_type_definition = 217,
  sym_return_mode = 218,
  sym_language = 219,
  sym_create_keyspace = 220,
  sym_replication_list_item = 221,
  sym_durable_writes = 222,
  sym_create_role = 223,
  sym_role_with = 224,
  sym_role_with_options = 225,
  sym_option_hash = 226,
  sym_option_hash_item = 227,
  sym_create_table = 228,
  sym_column_definition_list = 229,
  sym_column_definition = 230,
  sym_primary_key_column = 231,
  sym_primary_key_element = 232,
  sym_primary_key_definition = 233,
  sym_single_primary_key = 234,
  sym_compound_key = 235,
  sym_partition_key = 236,
  sym_clustering_key_list = 237,
  sym_clustering_key = 238,
  sym_composite_key = 239,
  sym_partition_key_list = 240,
  sym_with_element = 241,
  sym_table_options = 242,
  sym_table_option_item = 243,
  sym_table_option_name = 244,
  sym_table_option_value = 245,
  sym_clustering_order = 246,
  sym_order_direction = 247,
  sym_create_user = 248,
  sym_alter_keyspace = 249,
  sym_replication_list = 250,
  sym_alter_role = 251,
  sym_alter_table = 252,
  sym_alter_table_operation = 253,
  sym_alter_table_add = 254,
  sym_alter_table_column_definition = 255,
  sym_alter_table_drop_columns = 256,
  sym_alter_table_drop_column_list = 257,
  sym_alter_table_drop_compact_storage = 258,
  sym_alter_table_rename = 259,
  sym_alter_table_with = 260,
  sym_alter_user = 261,
  sym_user_password = 262,
  sym_user_super_user = 263,
  sym_apply_batch = 264,
  aux_sym_source_file_repeat1 = 265,
  aux_sym_select_elements_repeat1 = 266,
  aux_sym_function_args_repeat1 = 267,
  aux_sym__hexadecimal_literal_repeat1 = 268,
  aux_sym__hexadecimal_literal_repeat2 = 269,
  aux_sym_relation_elements_repeat1 = 270,
  aux_sym_relation_element_repeat1 = 271,
  aux_sym_relation_element_repeat2 = 272,
  aux_sym_assignment_tuple_repeat1 = 273,
  aux_sym_delete_column_list_repeat1 = 274,
  aux_sym_if_condition_list_repeat1 = 275,
  aux_sym_column_list_repeat1 = 276,
  aux_sym_expression_list_repeat1 = 277,
  aux_sym_assignment_map_repeat1 = 278,
  aux_sym_update_repeat1 = 279,
  aux_sym_create_function_repeat1 = 280,
  aux_sym_data_type_definition_repeat1 = 281,
  aux_sym_role_with_repeat1 = 282,
  aux_sym_option_hash_repeat1 = 283,
  aux_sym_column_definition_list_repeat1 = 284,
  aux_sym_clustering_key_list_repeat1 = 285,
  aux_sym_partition_key_list_repeat1 = 286,
  aux_sym_table_options_repeat1 = 287,
  aux_sym_replication_list_repeat1 = 288,
  aux_sym_alter_table_column_definition_repeat1 = 289,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 290,
  anon_alias_sym_ALL_ROLES = 291,
  anon_alias_sym_CONTAINS = 292,
  anon_alias_sym_DROP_INDEX = 293,
  anon_alias_sym_IF = 294,
  anon_alias_sym_ORDER_BY = 295,
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
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_table_column_definition_repeat1] = "alter_table_column_definition_repeat1",
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
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_table_column_definition_repeat1] = aux_sym_alter_table_column_definition_repeat1,
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
  [aux_sym_replication_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_table_column_definition_repeat1] = {
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
  [18] = {.index = 15, .length = 1},
  [21] = {.index = 16, .length = 1},
  [23] = {.index = 17, .length = 3},
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
    {field_option, 0},
  [16] =
    {field_param_name, 0},
  [17] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
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
  [19] = {
    [0] = anon_alias_sym_ORDER_BY,
    [1] = anon_alias_sym_ORDER_BY,
  },
  [20] = {
    [1] = anon_alias_sym_CONTAINS,
  },
  [22] = {
    [2] = aux_sym_relalationContainsKey_token1,
  },
  [24] = {
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 30,
  [57] = 57,
  [58] = 58,
  [59] = 40,
  [60] = 18,
  [61] = 41,
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
  [89] = 50,
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
  [100] = 51,
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
  [118] = 64,
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
  [182] = 172,
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
  [281] = 266,
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
  [292] = 291,
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
  [303] = 298,
  [304] = 304,
  [305] = 305,
  [306] = 301,
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
  [321] = 40,
  [322] = 322,
  [323] = 41,
  [324] = 324,
  [325] = 325,
  [326] = 325,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 332,
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
  [349] = 341,
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
  [360] = 357,
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
  [381] = 173,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 374,
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
  [409] = 214,
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
  [482] = 470,
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
  [560] = 157,
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
  [684] = 643,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 643,
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
  [908] = 783,
  [909] = 909,
  [910] = 910,
  [911] = 779,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 780,
  [916] = 916,
  [917] = 917,
  [918] = 909,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 762,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(418);
      if (lookahead == '"') ADVANCE(659);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '+') ADVANCE(676);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '.') ADVANCE(430);
      if (lookahead == '0') ADVANCE(440);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == '<') ADVANCE(635);
      if (lookahead == '=') ADVANCE(634);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(651);
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '{') ADVANCE(661);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(442);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(439);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(328);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(14);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(659);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(520);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(567);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(466);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(541);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(468);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(659);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead == 'X') ADVANCE(463);
      if (lookahead == '[') ADVANCE(651);
      if (lookahead == '{') ADVANCE(661);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(629);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(452);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(458);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(645);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(721);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(655);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(655);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(655);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(695);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 139:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(695);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      END_STATE();
    case 142:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 144:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(427);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(726);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(386);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 151:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 152:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(717);
      END_STATE();
    case 157:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(650);
      END_STATE();
    case 158:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 159:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 190:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(631);
      END_STATE();
    case 219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 275:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(705);
      END_STATE();
    case 276:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(673);
      END_STATE();
    case 277:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(654);
      END_STATE();
    case 278:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 279:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 280:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 281:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 282:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 283:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 284:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 286:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 288:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 289:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 376:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 377:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 380:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 382:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 383:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 384:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 385:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 391:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 392:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 393:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(426);
      END_STATE();
    case 394:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 395:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(669);
      END_STATE();
    case 396:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(348);
      END_STATE();
    case 397:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 398:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 399:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(643);
      END_STATE();
    case 400:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(733);
      END_STATE();
    case 401:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(686);
      END_STATE();
    case 402:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(725);
      END_STATE();
    case 403:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(642);
      END_STATE();
    case 404:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 405:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 406:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 407:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 408:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 409:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 410:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 411:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 412:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(454);
      END_STATE();
    case 413:
      if (eof) ADVANCE(418);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '.') ADVANCE(430);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == '<') ADVANCE(635);
      if (lookahead == '=') ADVANCE(634);
      if (lookahead == '>') ADVANCE(636);
      if (lookahead == '[') ADVANCE(651);
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '{') ADVANCE(661);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(26);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(328);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(27);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(413)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 414:
      if (eof) ADVANCE(418);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(651);
      if (lookahead == '{') ADVANCE(661);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(414)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 415:
      if (eof) ADVANCE(418);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(510);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(498);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 416:
      if (eof) ADVANCE(418);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(441);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(439);
      END_STATE();
    case 417:
      if (eof) ADVANCE(418);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(441);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(439);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(645);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(412);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(628);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(517);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(467);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(477);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(630);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(630);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(475);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(628);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(638);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_create_function_token3);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_create_function_token4);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_durable_writes_token2);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 733:
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
  [4] = {.lex_state = 413},
  [5] = {.lex_state = 413},
  [6] = {.lex_state = 413},
  [7] = {.lex_state = 413},
  [8] = {.lex_state = 413},
  [9] = {.lex_state = 413},
  [10] = {.lex_state = 413},
  [11] = {.lex_state = 413},
  [12] = {.lex_state = 413},
  [13] = {.lex_state = 413},
  [14] = {.lex_state = 413},
  [15] = {.lex_state = 413},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 413},
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
  [29] = {.lex_state = 413},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 413},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 413},
  [36] = {.lex_state = 414},
  [37] = {.lex_state = 414},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 415},
  [40] = {.lex_state = 416},
  [41] = {.lex_state = 416},
  [42] = {.lex_state = 413},
  [43] = {.lex_state = 413},
  [44] = {.lex_state = 413},
  [45] = {.lex_state = 413},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 413},
  [48] = {.lex_state = 413},
  [49] = {.lex_state = 413},
  [50] = {.lex_state = 413},
  [51] = {.lex_state = 413},
  [52] = {.lex_state = 413},
  [53] = {.lex_state = 413},
  [54] = {.lex_state = 413},
  [55] = {.lex_state = 413},
  [56] = {.lex_state = 414},
  [57] = {.lex_state = 413},
  [58] = {.lex_state = 413},
  [59] = {.lex_state = 417},
  [60] = {.lex_state = 414},
  [61] = {.lex_state = 417},
  [62] = {.lex_state = 413},
  [63] = {.lex_state = 413},
  [64] = {.lex_state = 413},
  [65] = {.lex_state = 413},
  [66] = {.lex_state = 413},
  [67] = {.lex_state = 413},
  [68] = {.lex_state = 413},
  [69] = {.lex_state = 413},
  [70] = {.lex_state = 414},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 413},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 413},
  [76] = {.lex_state = 413},
  [77] = {.lex_state = 413},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 413},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 413},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 413},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 413},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 413},
  [91] = {.lex_state = 413},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 413},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 413},
  [96] = {.lex_state = 413},
  [97] = {.lex_state = 413},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 413},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 413},
  [103] = {.lex_state = 413},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 413},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 413},
  [110] = {.lex_state = 413},
  [111] = {.lex_state = 413},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 413},
  [114] = {.lex_state = 413},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 413},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 413},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
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
  [156] = {.lex_state = 413},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 413},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 413},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 413},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 414},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
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
  [182] = {.lex_state = 3},
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
  [234] = {.lex_state = 414},
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
  [266] = {.lex_state = 414},
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
  [281] = {.lex_state = 414},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 414},
  [292] = {.lex_state = 414},
  [293] = {.lex_state = 414},
  [294] = {.lex_state = 414},
  [295] = {.lex_state = 414},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 414},
  [298] = {.lex_state = 414},
  [299] = {.lex_state = 414},
  [300] = {.lex_state = 414},
  [301] = {.lex_state = 414},
  [302] = {.lex_state = 414},
  [303] = {.lex_state = 414},
  [304] = {.lex_state = 414},
  [305] = {.lex_state = 414},
  [306] = {.lex_state = 414},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 413},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 413},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 413},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 413},
  [326] = {.lex_state = 413},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 141},
  [331] = {.lex_state = 413},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 413},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 1},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 413},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 141},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 1},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 413},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 1},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 413},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 413},
  [388] = {.lex_state = 413},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 413},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 413},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 414},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 413},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 413},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 6},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 413},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 413},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 413},
  [488] = {.lex_state = 1},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 1},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 413},
  [494] = {.lex_state = 413},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 413},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 6},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 413},
  [511] = {.lex_state = 413},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 413},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 413},
  [539] = {.lex_state = 413},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 413},
  [542] = {.lex_state = 413},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 413},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 413},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 1},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 413},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 413},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 413},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 413},
  [585] = {.lex_state = 413},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 413},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 413},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 1},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 1},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 1},
  [603] = {.lex_state = 1},
  [604] = {.lex_state = 413},
  [605] = {.lex_state = 413},
  [606] = {.lex_state = 1},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 1},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 413},
  [617] = {.lex_state = 413},
  [618] = {.lex_state = 1},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 413},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 1},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 1},
  [633] = {.lex_state = 413},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 413},
  [637] = {.lex_state = 1},
  [638] = {.lex_state = 413},
  [639] = {.lex_state = 1},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 1},
  [643] = {.lex_state = 6},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 1},
  [646] = {.lex_state = 413},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 1},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 6},
  [653] = {.lex_state = 1},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 413},
  [657] = {.lex_state = 1},
  [658] = {.lex_state = 413},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 1},
  [663] = {.lex_state = 413},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 1},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 1},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 1},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 413},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 413},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 413},
  [676] = {.lex_state = 413},
  [677] = {.lex_state = 413},
  [678] = {.lex_state = 1},
  [679] = {.lex_state = 413},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 1},
  [682] = {.lex_state = 1},
  [683] = {.lex_state = 1},
  [684] = {.lex_state = 6},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 6},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 1},
  [693] = {.lex_state = 1},
  [694] = {.lex_state = 1},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 6},
  [698] = {.lex_state = 413},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 414},
  [701] = {.lex_state = 1},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 413},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 413},
  [708] = {.lex_state = 414},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 413},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 414},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 413},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
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
  [740] = {.lex_state = 414},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 413},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 414},
  [748] = {.lex_state = 413},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 6},
  [751] = {.lex_state = 5},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 450},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 413},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 413},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 1},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 413},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 413},
  [791] = {.lex_state = 413},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 1},
  [794] = {.lex_state = 1},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 1},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 414},
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
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 1},
  [819] = {.lex_state = 1},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 413},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 413},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 414},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 414},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 1},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 1},
  [842] = {.lex_state = 413},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 413},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 5},
  [848] = {.lex_state = 414},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 414},
  [852] = {.lex_state = 413},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 414},
  [858] = {.lex_state = 413},
  [859] = {.lex_state = 1},
  [860] = {.lex_state = 413},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 413},
  [863] = {.lex_state = 1},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 413},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 413},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 416},
  [877] = {.lex_state = 413},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 413},
  [884] = {.lex_state = 413},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 413},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 413},
  [894] = {.lex_state = 0},
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
  [908] = {.lex_state = 413},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 414},
  [922] = {.lex_state = 1},
  [923] = {.lex_state = 414},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 1},
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
    [sym_source_file] = STATE(831),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(206),
    [sym_delete_statement] = STATE(206),
    [sym_begin_batch] = STATE(554),
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
    [sym_drop_function] = STATE(206),
    [sym_drop_keyspace] = STATE(206),
    [sym_drop_role] = STATE(206),
    [sym_drop_table] = STATE(206),
    [sym_drop_user] = STATE(206),
    [sym_create_function] = STATE(206),
    [sym_create_keyspace] = STATE(206),
    [sym_create_role] = STATE(206),
    [sym_create_table] = STATE(206),
    [sym_create_user] = STATE(206),
    [sym_alter_keyspace] = STATE(206),
    [sym_alter_role] = STATE(206),
    [sym_alter_table] = STATE(206),
    [sym_alter_user] = STATE(206),
    [sym_apply_batch] = STATE(206),
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
    STATE(554), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(206), 27,
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
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_user,
      sym_apply_batch,
  [82] = 18,
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
    STATE(554), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(206), 27,
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
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_user,
      sym_apply_batch,
  [164] = 3,
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
  [205] = 1,
    ACTIONS(84), 33,
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
  [241] = 4,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(86), 30,
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
  [283] = 3,
    ACTIONS(90), 1,
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
  [322] = 4,
    ACTIONS(90), 1,
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
  [363] = 3,
    ACTIONS(90), 1,
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
  [402] = 2,
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
  [437] = 2,
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
  [472] = 2,
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
  [507] = 1,
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
  [539] = 1,
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
  [571] = 1,
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
  [603] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(140), 1,
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
  [640] = 2,
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
  [673] = 2,
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
  [706] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(844), 1,
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
  [743] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(880), 1,
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
  [780] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(425), 1,
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
  [817] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(820), 1,
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
  [854] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(659), 1,
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
  [891] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(714), 1,
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
  [928] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(886), 1,
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
  [965] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
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
  [1002] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(864), 1,
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
  [1039] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(739), 1,
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
  [1076] = 2,
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
  [1109] = 2,
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
  [1142] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(38), 1,
      sym_data_type_name,
    STATE(188), 1,
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
  [1179] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(503), 1,
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
  [1213] = 1,
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
  [1243] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(626), 1,
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
  [1277] = 1,
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
  [1307] = 16,
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
    STATE(474), 1,
      sym_expression,
    STATE(910), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(685), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1364] = 15,
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
    STATE(651), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(685), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1418] = 3,
    ACTIONS(160), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym_data_type_definition,
    ACTIONS(158), 20,
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
  [1447] = 8,
    ACTIONS(166), 1,
      sym_object_name,
    ACTIONS(168), 1,
      aux_sym_clustering_order_token1,
    STATE(117), 1,
      sym_table_option_item,
    STATE(156), 1,
      sym_table_options,
    STATE(189), 1,
      sym_clustering_order,
    STATE(867), 1,
      sym_table_option_name,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(164), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1486] = 3,
    ACTIONS(172), 1,
      sym__hex_digit,
    STATE(40), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(170), 20,
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
  [1515] = 3,
    ACTIONS(177), 1,
      sym__hex_digit,
    STATE(40), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(175), 20,
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
  [1544] = 7,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    ACTIONS(185), 1,
      aux_sym_where_spec_token1,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    STATE(76), 1,
      sym_where_spec,
    STATE(135), 1,
      sym_order_spec,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1581] = 2,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(189), 21,
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
  [1608] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(193), 19,
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
  [1639] = 7,
    ACTIONS(185), 1,
      aux_sym_where_spec_token1,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(82), 1,
      sym_where_spec,
    STATE(161), 1,
      sym_order_spec,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1676] = 1,
    ACTIONS(201), 22,
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
  [1701] = 7,
    ACTIONS(185), 1,
      aux_sym_where_spec_token1,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(84), 1,
      sym_where_spec,
    STATE(145), 1,
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
  [1738] = 1,
    ACTIONS(209), 21,
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
  [1762] = 1,
    ACTIONS(211), 21,
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
  [1786] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(50), 1,
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
  [1814] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(50), 1,
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
  [1842] = 1,
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
  [1866] = 1,
    ACTIONS(224), 21,
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
  [1890] = 1,
    ACTIONS(226), 21,
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
  [1914] = 1,
    ACTIONS(228), 21,
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
  [1938] = 1,
    ACTIONS(132), 21,
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
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [1962] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(230), 20,
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
  [1988] = 1,
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
  [2012] = 3,
    ACTIONS(232), 1,
      sym__hex_digit,
    STATE(59), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(170), 19,
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
  [2040] = 1,
    ACTIONS(124), 21,
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
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [2064] = 3,
    ACTIONS(235), 1,
      sym__hex_digit,
    STATE(59), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(175), 19,
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
  [2092] = 1,
    ACTIONS(237), 21,
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
  [2116] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(239), 19,
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
  [2144] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(51), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(241), 19,
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
  [2172] = 1,
    ACTIONS(243), 21,
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
  [2196] = 1,
    ACTIONS(245), 21,
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
  [2220] = 1,
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
  [2244] = 1,
    ACTIONS(247), 21,
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
  [2268] = 1,
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
  [2292] = 3,
    STATE(143), 1,
      sym_order_direction,
    ACTIONS(253), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(251), 18,
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
  [2320] = 15,
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
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(648), 1,
      sym_constant,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(449), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2372] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(126), 1,
      sym_if_not_exist,
    STATE(259), 1,
      sym_using_ttl_timestamp,
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
  [2403] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(269), 18,
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
  [2430] = 1,
    ACTIONS(271), 20,
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
  [2453] = 2,
    ACTIONS(275), 1,
      aux_sym_relation_element_token1,
    ACTIONS(273), 19,
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
  [2478] = 5,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    ACTIONS(279), 1,
      aux_sym_select_statement_token4,
    ACTIONS(281), 1,
      aux_sym_select_statement_token5,
    STATE(142), 1,
      sym_order_spec,
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
  [2509] = 1,
    ACTIONS(283), 20,
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
  [2532] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(168), 1,
      sym_if_not_exist,
    STATE(277), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2563] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(159), 1,
      sym_if_not_exist,
    STATE(210), 1,
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
  [2594] = 1,
    ACTIONS(130), 20,
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
  [2617] = 15,
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
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_STAR,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(870), 1,
      sym_function_args,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(525), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2668] = 5,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    STATE(135), 1,
      sym_order_spec,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2699] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(149), 1,
      sym_if_not_exist,
    STATE(289), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2730] = 5,
    ACTIONS(187), 1,
      aux_sym_order_spec_token1,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(161), 1,
      sym_order_spec,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2761] = 1,
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
  [2784] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(134), 1,
      sym_if_not_exist,
    STATE(225), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2815] = 1,
    ACTIONS(230), 20,
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
  [2838] = 1,
    ACTIONS(301), 20,
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
  [2861] = 3,
    ACTIONS(303), 1,
      aux_sym_relation_elements_token1,
    STATE(89), 1,
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
  [2887] = 1,
    ACTIONS(306), 19,
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
  [2909] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(310), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2937] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(237), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2963] = 1,
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
  [2985] = 3,
    STATE(191), 1,
      sym_user_super_user,
    ACTIONS(320), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3011] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(324), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3039] = 1,
    ACTIONS(326), 19,
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
  [3061] = 1,
    ACTIONS(328), 19,
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
  [3083] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(197), 2,
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
  [3109] = 1,
    ACTIONS(332), 19,
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
  [3131] = 3,
    ACTIONS(334), 1,
      aux_sym_relation_elements_token1,
    STATE(89), 1,
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
  [3157] = 3,
    STATE(199), 1,
      sym_user_super_user,
    ACTIONS(320), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3183] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3211] = 3,
    ACTIONS(340), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3237] = 2,
    ACTIONS(345), 1,
      aux_sym_priviledge_token2,
    ACTIONS(343), 18,
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
  [3261] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(200), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3287] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(201), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3313] = 1,
    ACTIONS(351), 19,
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
  [3335] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(205), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3361] = 1,
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
  [3383] = 3,
    ACTIONS(359), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(357), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3409] = 1,
    ACTIONS(361), 19,
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
  [3431] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(269), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(363), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3457] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(367), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3485] = 1,
    ACTIONS(369), 19,
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
  [3507] = 1,
    ACTIONS(371), 19,
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
  [3529] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(227), 2,
      sym_if_exist,
      sym_if_spec,
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
  [3555] = 3,
    ACTIONS(359), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(375), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3581] = 3,
    ACTIONS(334), 1,
      aux_sym_relation_elements_token1,
    STATE(100), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(241), 17,
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
  [3607] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(216), 2,
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
  [3633] = 3,
    STATE(258), 1,
      sym_user_super_user,
    ACTIONS(320), 2,
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
  [3659] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(231), 2,
      sym_if_exist,
      sym_if_spec,
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
  [3685] = 4,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(281), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3713] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(275), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3739] = 3,
    ACTIONS(387), 1,
      aux_sym_create_keyspace_token1,
    STATE(257), 1,
      sym_with_element,
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
  [3764] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(389), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3789] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(215), 1,
      sym_using_ttl_timestamp,
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
  [3814] = 1,
    ACTIONS(396), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3835] = 3,
    ACTIONS(400), 1,
      aux_sym_list_roles_token2,
    ACTIONS(402), 1,
      aux_sym_list_roles_token3,
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
  [3860] = 3,
    ACTIONS(406), 1,
      aux_sym_relation_elements_token1,
    STATE(148), 1,
      aux_sym_if_condition_list_repeat1,
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
  [3885] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_role_with_repeat1,
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
  [3910] = 3,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3935] = 13,
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
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(293), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(839), 1,
      sym_function_args,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(525), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3980] = 1,
    ACTIONS(418), 18,
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
  [4001] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(289), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4026] = 3,
    ACTIONS(279), 1,
      aux_sym_select_statement_token4,
    ACTIONS(281), 1,
      aux_sym_select_statement_token5,
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
  [4051] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(235), 1,
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
  [4076] = 3,
    ACTIONS(387), 1,
      aux_sym_create_keyspace_token1,
    STATE(223), 1,
      sym_with_element,
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
  [4101] = 1,
    ACTIONS(343), 18,
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
  [4122] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4147] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4172] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4197] = 3,
    ACTIONS(367), 1,
      aux_sym_select_statement_token5,
    ACTIONS(436), 1,
      aux_sym_select_statement_token4,
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
  [4222] = 1,
    ACTIONS(438), 18,
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
  [4243] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(267), 1,
      sym_role_with,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4268] = 3,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4293] = 1,
    ACTIONS(442), 18,
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
  [4314] = 2,
    ACTIONS(446), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(444), 17,
      ts_builtin_sym_end,
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
  [4337] = 3,
    ACTIONS(450), 1,
      aux_sym_relation_elements_token1,
    STATE(148), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4362] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(277), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4387] = 1,
    ACTIONS(453), 18,
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
  [4408] = 3,
    ACTIONS(422), 1,
      aux_sym_create_keyspace_token1,
    STATE(274), 1,
      sym_role_with,
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
  [4433] = 1,
    ACTIONS(457), 18,
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
  [4454] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_role_with_repeat1,
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
  [4479] = 3,
    ACTIONS(387), 1,
      aux_sym_create_keyspace_token1,
    STATE(285), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4504] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4529] = 3,
    ACTIONS(470), 1,
      aux_sym_clustering_order_token1,
    STATE(249), 1,
      sym_clustering_order,
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
  [4554] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_column_list_repeat1,
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
  [4579] = 2,
    ACTIONS(475), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(444), 17,
      ts_builtin_sym_end,
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
  [4602] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(225), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4627] = 1,
    ACTIONS(338), 18,
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
  [4648] = 3,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4673] = 1,
    ACTIONS(477), 18,
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
  [4694] = 1,
    ACTIONS(479), 18,
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
  [4715] = 3,
    ACTIONS(406), 1,
      aux_sym_relation_elements_token1,
    STATE(129), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4740] = 1,
    ACTIONS(483), 18,
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
  [4761] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4786] = 3,
    ACTIONS(387), 1,
      aux_sym_create_keyspace_token1,
    STATE(252), 1,
      sym_with_element,
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
  [4811] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(259), 1,
      sym_using_ttl_timestamp,
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
  [4836] = 13,
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
    STATE(399), 1,
      sym_constant,
    STATE(587), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4880] = 1,
    ACTIONS(489), 17,
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
  [4900] = 12,
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
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(695), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4942] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_0X,
    ACTIONS(495), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(69), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4984] = 1,
    ACTIONS(497), 17,
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
  [5004] = 1,
    ACTIONS(389), 17,
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
  [5024] = 2,
    ACTIONS(501), 1,
      aux_sym_list_roles_token2,
    ACTIONS(499), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5046] = 2,
    ACTIONS(505), 1,
      aux_sym_list_roles_token3,
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
  [5068] = 1,
    ACTIONS(507), 17,
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
  [5088] = 2,
    ACTIONS(511), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(509), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5110] = 1,
    ACTIONS(513), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5130] = 2,
    ACTIONS(517), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5152] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5172] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(257), 1,
      sym__hex_4digit,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      sym_object_name,
    ACTIONS(519), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(255), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(69), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5214] = 1,
    ACTIONS(521), 17,
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
  [5234] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
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
  [5256] = 1,
    ACTIONS(523), 17,
      ts_builtin_sym_end,
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
  [5276] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
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
  [5298] = 2,
    ACTIONS(527), 1,
      aux_sym_relation_elements_token1,
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
  [5320] = 1,
    ACTIONS(529), 17,
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
  [5340] = 1,
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
  [5359] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5378] = 1,
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
  [5397] = 1,
    ACTIONS(533), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5416] = 1,
    ACTIONS(535), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5435] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5454] = 1,
    ACTIONS(539), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5473] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5492] = 1,
    ACTIONS(363), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5511] = 1,
    ACTIONS(543), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5530] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5549] = 1,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5568] = 1,
    ACTIONS(547), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5587] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5606] = 1,
    ACTIONS(551), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5625] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5644] = 1,
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
  [5663] = 2,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(555), 15,
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
  [5684] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5703] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5722] = 1,
    ACTIONS(563), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5741] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5760] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5779] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5798] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5817] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5836] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5855] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5874] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5893] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5912] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5931] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5950] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5969] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5988] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6007] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6026] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6045] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6064] = 1,
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
  [6083] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6102] = 1,
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
  [6121] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6140] = 1,
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
  [6159] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6178] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
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
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(431), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6238] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6257] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6276] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6295] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6314] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6333] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6352] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6371] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6390] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6409] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6428] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6447] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6466] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6485] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6504] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6523] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6542] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6561] = 1,
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
  [6580] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6599] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6618] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6637] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6656] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6675] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6694] = 1,
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
  [6713] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6732] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6751] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6770] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6789] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6808] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6827] = 12,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    ACTIONS(653), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(68), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6868] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6887] = 1,
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
  [6906] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6925] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6944] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6963] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6982] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7001] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7020] = 1,
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
  [7039] = 1,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7077] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7096] = 1,
    ACTIONS(499), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7134] = 12,
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
    ACTIONS(519), 1,
      anon_sym_0X,
    ACTIONS(671), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(68), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7232] = 1,
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
  [7251] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7270] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7289] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7308] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7327] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7346] = 11,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(69), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7384] = 11,
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
    ACTIONS(519), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(69), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7422] = 11,
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
    STATE(620), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7460] = 11,
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
    STATE(476), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7498] = 11,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(183), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7536] = 1,
    ACTIONS(687), 15,
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
  [7554] = 11,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(163), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7592] = 11,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7630] = 11,
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
    STATE(399), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7668] = 11,
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
    STATE(806), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7706] = 11,
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
    ACTIONS(493), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7744] = 11,
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
    STATE(562), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7782] = 11,
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
    ACTIONS(519), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(54), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7820] = 11,
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
    STATE(345), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7858] = 11,
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
    STATE(640), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7896] = 11,
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
    ACTIONS(519), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7934] = 4,
    ACTIONS(691), 1,
      aux_sym_priviledge_token1,
    ACTIONS(693), 1,
      aux_sym_resource_token5,
    STATE(131), 1,
      sym_priviledge,
    ACTIONS(689), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [7954] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      sym__dec_digit,
    STATE(44), 1,
      aux_sym__decimal_literal,
    STATE(162), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(165), 2,
      sym_option_hash,
      sym_table_option_value,
  [7981] = 10,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(703), 1,
      aux_sym_truncate_token2,
    ACTIONS(705), 1,
      aux_sym_priviledge_token1,
    ACTIONS(707), 1,
      aux_sym_resource_token2,
    ACTIONS(709), 1,
      aux_sym_resource_token3,
    ACTIONS(711), 1,
      aux_sym_resource_token6,
    STATE(109), 1,
      sym_table,
    STATE(703), 1,
      sym_resource,
    STATE(706), 1,
      sym_keyspace,
  [8012] = 6,
    ACTIONS(713), 1,
      aux_sym_drop_index_token1,
    ACTIONS(715), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(717), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(719), 1,
      aux_sym_alter_table_rename_token1,
    STATE(244), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8035] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(725), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(727), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(729), 1,
      aux_sym_index_full_spec_token1,
    STATE(738), 1,
      sym_index_column_spec,
    STATE(899), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8060] = 10,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(703), 1,
      aux_sym_truncate_token2,
    ACTIONS(705), 1,
      aux_sym_priviledge_token1,
    ACTIONS(707), 1,
      aux_sym_resource_token2,
    ACTIONS(709), 1,
      aux_sym_resource_token3,
    ACTIONS(711), 1,
      aux_sym_resource_token6,
    STATE(109), 1,
      sym_table,
    STATE(175), 1,
      sym_resource,
    STATE(706), 1,
      sym_keyspace,
  [8091] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(725), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(727), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(729), 1,
      aux_sym_index_full_spec_token1,
    STATE(728), 1,
      sym_index_column_spec,
    STATE(899), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8116] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(725), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(727), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(729), 1,
      aux_sym_index_full_spec_token1,
    STATE(897), 1,
      sym_index_column_spec,
    STATE(899), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8141] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(725), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(727), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(729), 1,
      aux_sym_index_full_spec_token1,
    STATE(777), 1,
      sym_index_column_spec,
    STATE(899), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8166] = 6,
    ACTIONS(713), 1,
      aux_sym_drop_index_token1,
    ACTIONS(715), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(717), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(719), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8189] = 3,
    ACTIONS(691), 1,
      aux_sym_priviledge_token1,
    STATE(907), 1,
      sym_priviledge,
    ACTIONS(689), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8206] = 10,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(703), 1,
      aux_sym_truncate_token2,
    ACTIONS(705), 1,
      aux_sym_priviledge_token1,
    ACTIONS(707), 1,
      aux_sym_resource_token2,
    ACTIONS(709), 1,
      aux_sym_resource_token3,
    ACTIONS(711), 1,
      aux_sym_resource_token6,
    STATE(109), 1,
      sym_table,
    STATE(706), 1,
      sym_keyspace,
    STATE(710), 1,
      sym_resource,
  [8237] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(725), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(727), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(729), 1,
      aux_sym_index_full_spec_token1,
    STATE(815), 1,
      sym_index_column_spec,
    STATE(899), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8262] = 3,
    ACTIONS(691), 1,
      aux_sym_priviledge_token1,
    STATE(878), 1,
      sym_priviledge,
    ACTIONS(689), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8279] = 3,
    ACTIONS(731), 1,
      sym__hex_digit,
    STATE(321), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(170), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [8295] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(734), 1,
      sym_object_name,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    ACTIONS(738), 1,
      sym__dquote,
    STATE(170), 1,
      sym__string_literal,
    STATE(196), 1,
      sym_index_name,
    STATE(328), 1,
      sym_if_exist,
    STATE(798), 1,
      sym_keyspace,
  [8323] = 3,
    ACTIONS(740), 1,
      sym__hex_digit,
    STATE(321), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(175), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [8339] = 7,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(624), 1,
      sym_column,
    STATE(772), 1,
      sym_primary_key_definition,
    STATE(774), 1,
      sym_partition_key,
    STATE(773), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [8363] = 6,
    ACTIONS(744), 1,
      anon_sym_DOT,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      aux_sym_relation_element_token1,
    ACTIONS(754), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(750), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(748), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8385] = 6,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      aux_sym_relation_element_token1,
    ACTIONS(756), 1,
      anon_sym_DOT,
    ACTIONS(762), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(760), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(758), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8407] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(768), 1,
      aux_sym_create_index_token3,
    STATE(170), 1,
      sym__string_literal,
    STATE(344), 1,
      sym_if_not_exist,
    STATE(898), 1,
      sym_index_name,
  [8432] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(734), 1,
      sym_object_name,
    ACTIONS(738), 1,
      sym__dquote,
    STATE(170), 1,
      sym__string_literal,
    STATE(243), 1,
      sym_index_name,
    STATE(729), 1,
      sym_keyspace,
  [8454] = 7,
    ACTIONS(770), 1,
      aux_sym_select_statement_token2,
    ACTIONS(772), 1,
      aux_sym_select_statement_token3,
    ACTIONS(774), 1,
      anon_sym_STAR,
    ACTIONS(776), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(538), 1,
      sym_select_element,
    STATE(636), 1,
      sym_select_elements,
  [8476] = 7,
    ACTIONS(778), 1,
      aux_sym_truncate_token2,
    ACTIONS(780), 1,
      aux_sym_create_index_token2,
    ACTIONS(782), 1,
      aux_sym_resource_token2,
    ACTIONS(784), 1,
      aux_sym_resource_token3,
    ACTIONS(786), 1,
      aux_sym_resource_token6,
    ACTIONS(788), 1,
      aux_sym_drop_user_token1,
    ACTIONS(790), 1,
      aux_sym_create_function_token1,
  [8498] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(697), 1,
      sym__dec_digit,
    STATE(44), 1,
      aux_sym__decimal_literal,
    STATE(792), 2,
      sym__string_literal,
      sym__float_literal,
  [8518] = 6,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym_object_name,
    STATE(77), 1,
      sym_relation_elements,
    STATE(118), 1,
      sym_relation_element,
    STATE(374), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8538] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      sym__dec_digit,
    STATE(407), 1,
      aux_sym__decimal_literal,
    STATE(691), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8556] = 6,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(64), 1,
      sym_relation_element,
    STATE(77), 1,
      sym_relation_elements,
    STATE(386), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8576] = 6,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    STATE(433), 1,
      sym_if_not_exist,
    STATE(768), 1,
      sym_table,
    STATE(771), 1,
      sym_keyspace,
  [8595] = 6,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    STATE(212), 1,
      sym_table,
    STATE(432), 1,
      sym_if_exist,
    STATE(887), 1,
      sym_keyspace,
  [8614] = 6,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(395), 1,
      sym_if_not_exist,
    STATE(814), 1,
      sym_function,
    STATE(835), 1,
      sym_keyspace,
  [8633] = 6,
    ACTIONS(774), 1,
      anon_sym_STAR,
    ACTIONS(776), 1,
      sym_object_name,
    ACTIONS(802), 1,
      aux_sym_select_statement_token3,
    STATE(511), 1,
      sym_function_call,
    STATE(538), 1,
      sym_select_element,
    STATE(658), 1,
      sym_select_elements,
  [8652] = 2,
    ACTIONS(806), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(804), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [8663] = 6,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(808), 1,
      sym_object_name,
    STATE(253), 1,
      sym_user,
    STATE(412), 1,
      sym_if_exist,
    STATE(920), 1,
      sym_keyspace,
  [8682] = 5,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_object_name,
    STATE(67), 1,
      sym_relation_element,
    STATE(386), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8699] = 6,
    ACTIONS(810), 1,
      aux_sym_truncate_token2,
    ACTIONS(812), 1,
      aux_sym_create_index_token2,
    ACTIONS(814), 1,
      aux_sym_resource_token2,
    ACTIONS(816), 1,
      aux_sym_resource_token3,
    ACTIONS(818), 1,
      aux_sym_resource_token6,
    ACTIONS(820), 1,
      aux_sym_drop_user_token1,
  [8718] = 6,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(217), 1,
      sym_function,
    STATE(439), 1,
      sym_if_exist,
    STATE(924), 1,
      sym_keyspace,
  [8737] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(764), 1,
      sym_object_name,
    ACTIONS(822), 1,
      aux_sym_create_index_token3,
    STATE(170), 1,
      sym__string_literal,
    STATE(756), 1,
      sym_index_name,
  [8756] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(513), 1,
      aux_sym_relation_element_repeat2,
    STATE(517), 1,
      sym_assignment_tuple,
  [8775] = 6,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(428), 1,
      sym_if_not_exist,
    STATE(712), 1,
      sym_keyspace,
    STATE(800), 1,
      sym_function,
  [8794] = 6,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(828), 1,
      aux_sym_primary_key_column_token1,
    STATE(21), 1,
      sym_column,
    STATE(582), 1,
      sym_column_definition,
    STATE(745), 1,
      sym_primary_key_element,
  [8813] = 6,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    ACTIONS(828), 1,
      aux_sym_primary_key_column_token1,
    STATE(21), 1,
      sym_column,
    STATE(582), 1,
      sym_column_definition,
    STATE(824), 1,
      sym_primary_key_element,
  [8832] = 5,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym_object_name,
    STATE(67), 1,
      sym_relation_element,
    STATE(374), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8849] = 2,
    ACTIONS(832), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(830), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [8860] = 5,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(83), 1,
      sym_insert_values_spec,
    STATE(467), 1,
      sym_insert_column_spec,
  [8876] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(549), 1,
      sym_clustering_key,
    STATE(607), 1,
      sym_column,
    STATE(838), 1,
      sym_clustering_key_list,
  [8892] = 4,
    ACTIONS(840), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(844), 1,
      aux_sym_role_with_options_token4,
    STATE(174), 1,
      sym_role_with_options,
    ACTIONS(842), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [8906] = 5,
    ACTIONS(774), 1,
      anon_sym_STAR,
    ACTIONS(846), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(538), 1,
      sym_select_element,
    STATE(658), 1,
      sym_select_elements,
  [8922] = 3,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(851), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8934] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(544), 1,
      sym_column_definition,
    STATE(742), 1,
      sym_column_definition_list,
  [8950] = 2,
    ACTIONS(855), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(853), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8960] = 5,
    ACTIONS(857), 1,
      sym_object_name,
    ACTIONS(859), 1,
      aux_sym_from_spec_token1,
    STATE(419), 1,
      sym_from_spec,
    STATE(466), 1,
      sym_delete_column_item,
    STATE(677), 1,
      sym_delete_column_list,
  [8976] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(486), 1,
      sym_replication_list_item,
    STATE(704), 1,
      sym_replication_list,
    STATE(721), 1,
      sym__string_literal,
  [8992] = 2,
    ACTIONS(863), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(861), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9002] = 3,
    ACTIONS(867), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(515), 1,
      sym_using_timestamp_spec,
    ACTIONS(865), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9014] = 1,
    ACTIONS(869), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9022] = 5,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(457), 1,
      sym_if_not_exist,
    STATE(732), 1,
      sym_keyspace,
  [9038] = 1,
    ACTIONS(873), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9046] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(544), 1,
      sym_column_definition,
    STATE(796), 1,
      sym_column_definition_list,
  [9062] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(764), 1,
      sym_object_name,
    STATE(170), 1,
      sym__string_literal,
    STATE(226), 1,
      sym_index_name,
  [9078] = 1,
    ACTIONS(875), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9086] = 5,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    ACTIONS(877), 1,
      aux_sym_truncate_token2,
    STATE(270), 1,
      sym_table,
    STATE(759), 1,
      sym_keyspace,
  [9102] = 1,
    ACTIONS(879), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9110] = 5,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(203), 1,
      sym_keyspace,
    STATE(453), 1,
      sym_if_exist,
  [9126] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(544), 1,
      sym_column_definition,
    STATE(832), 1,
      sym_column_definition_list,
  [9142] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(486), 1,
      sym_replication_list_item,
    STATE(719), 1,
      sym_replication_list,
    STATE(721), 1,
      sym__string_literal,
  [9158] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(570), 1,
      sym_partition_key,
    STATE(591), 1,
      sym_column,
    STATE(812), 1,
      sym_partition_key_list,
  [9174] = 2,
    ACTIONS(883), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(881), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9184] = 4,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      aux_sym_select_element_token1,
    ACTIONS(885), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9198] = 5,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(86), 1,
      sym_insert_values_spec,
    STATE(451), 1,
      sym_insert_column_spec,
  [9214] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(486), 1,
      sym_replication_list_item,
    STATE(721), 1,
      sym__string_literal,
    STATE(734), 1,
      sym_replication_list,
  [9230] = 5,
    ACTIONS(774), 1,
      anon_sym_STAR,
    ACTIONS(846), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(538), 1,
      sym_select_element,
    STATE(676), 1,
      sym_select_elements,
  [9246] = 1,
    ACTIONS(891), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9254] = 5,
    ACTIONS(857), 1,
      sym_object_name,
    ACTIONS(859), 1,
      aux_sym_from_spec_token1,
    STATE(404), 1,
      sym_from_spec,
    STATE(466), 1,
      sym_delete_column_item,
    STATE(675), 1,
      sym_delete_column_list,
  [9270] = 2,
    ACTIONS(893), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [9280] = 4,
    ACTIONS(840), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(844), 1,
      aux_sym_role_with_options_token4,
    STATE(153), 1,
      sym_role_with_options,
    ACTIONS(842), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [9294] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(549), 1,
      sym_clustering_key,
    STATE(607), 1,
      sym_column,
    STATE(871), 1,
      sym_clustering_key_list,
  [9310] = 5,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(79), 1,
      sym_insert_values_spec,
    STATE(552), 1,
      sym_insert_column_spec,
  [9326] = 5,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(544), 1,
      sym_column_definition,
    STATE(905), 1,
      sym_column_definition_list,
  [9342] = 2,
    ACTIONS(897), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(895), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9352] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(899), 1,
      sym__dec_digit,
    STATE(541), 1,
      aux_sym__decimal_literal,
    STATE(853), 1,
      sym__string_literal,
  [9368] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(901), 1,
      sym__dec_digit,
    STATE(427), 1,
      aux_sym__decimal_literal,
    STATE(622), 1,
      sym__string_literal,
  [9384] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(764), 1,
      sym_object_name,
    STATE(170), 1,
      sym__string_literal,
    STATE(284), 1,
      sym_index_name,
  [9400] = 5,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
    STATE(522), 1,
      sym_insert_column_spec,
  [9416] = 1,
    ACTIONS(903), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9424] = 5,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(907), 1,
      sym__dquote,
    ACTIONS(909), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(141), 1,
      sym_column,
    STATE(264), 1,
      sym_alter_table_drop_column_list,
  [9440] = 1,
    ACTIONS(911), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9448] = 3,
    ACTIONS(867), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(577), 1,
      sym_using_timestamp_spec,
    ACTIONS(913), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9460] = 4,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(882), 1,
      sym_keyspace,
    STATE(892), 1,
      sym_function,
  [9473] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(416), 1,
      aux_sym_update_repeat1,
  [9486] = 4,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(97), 1,
      sym_function,
    STATE(879), 1,
      sym_keyspace,
  [9499] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(97), 1,
      sym_table,
    STATE(843), 1,
      sym_keyspace,
  [9512] = 1,
    ACTIONS(851), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9519] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(384), 1,
      sym_table,
    STATE(805), 1,
      sym_keyspace,
  [9532] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(92), 1,
      sym_where_spec,
    STATE(418), 1,
      aux_sym_update_repeat1,
  [9545] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(376), 1,
      sym_table,
    STATE(717), 1,
      sym_keyspace,
  [9558] = 4,
    ACTIONS(919), 1,
      aux_sym_timestamp_token1,
    ACTIONS(921), 1,
      aux_sym_ttl_token1,
    STATE(147), 1,
      sym_ttl,
    STATE(158), 1,
      sym_timestamp,
  [9571] = 4,
    ACTIONS(867), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(108), 1,
      sym_where_spec,
    STATE(614), 1,
      sym_using_timestamp_spec,
  [9584] = 4,
    ACTIONS(923), 1,
      sym_object_name,
    STATE(117), 1,
      sym_table_option_item,
    STATE(261), 1,
      sym_table_options,
    STATE(867), 1,
      sym_table_option_name,
  [9597] = 4,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(16), 1,
      sym_column,
    STATE(255), 1,
      sym_alter_table_column_definition,
  [9610] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [9621] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(123), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [9634] = 2,
    ACTIONS(927), 1,
      anon_sym_SQUOTE,
    ACTIONS(571), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [9643] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [9656] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(619), 1,
      sym_replication_list_item,
    STATE(721), 1,
      sym__string_literal,
  [9669] = 4,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(808), 1,
      sym_object_name,
    STATE(250), 1,
      sym_user,
    STATE(722), 1,
      sym_keyspace,
  [9682] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(211), 1,
      sym_table,
    STATE(782), 1,
      sym_keyspace,
  [9695] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(612), 1,
      sym_option_hash_item,
    STATE(713), 1,
      sym__string_literal,
  [9708] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
    STATE(408), 1,
      aux_sym_update_repeat1,
  [9721] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(106), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [9734] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(709), 1,
      sym_keyspace,
    STATE(801), 1,
      sym_table,
  [9747] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [9760] = 4,
    ACTIONS(867), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(116), 1,
      sym_where_spec,
    STATE(590), 1,
      sym_using_timestamp_spec,
  [9773] = 4,
    ACTIONS(867), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
    STATE(634), 1,
      sym_using_timestamp_spec,
  [9786] = 4,
    ACTIONS(736), 1,
      aux_sym_if_exist_token1,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(230), 1,
      sym_role,
    STATE(694), 1,
      sym_if_exist,
  [9799] = 4,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(582), 1,
      sym_column_definition,
  [9812] = 4,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_function_args_repeat1,
  [9825] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(763), 1,
      sym_table,
    STATE(764), 1,
      sym_keyspace,
  [9838] = 3,
    ACTIONS(937), 1,
      aux_sym_primary_key_column_token1,
    STATE(592), 1,
      sym_primary_key_column,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9849] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(483), 1,
      sym_table,
    STATE(903), 1,
      sym_keyspace,
  [9862] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(939), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9873] = 4,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(749), 1,
      sym_function,
    STATE(752), 1,
      sym_keyspace,
  [9886] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(123), 1,
      sym_where_spec,
    STATE(437), 1,
      aux_sym_update_repeat1,
  [9899] = 4,
    ACTIONS(941), 1,
      aux_sym_truncate_token2,
    ACTIONS(943), 1,
      aux_sym_resource_token2,
    ACTIONS(945), 1,
      aux_sym_resource_token6,
    ACTIONS(947), 1,
      aux_sym_drop_user_token1,
  [9912] = 4,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_assignment_tuple_repeat1,
  [9925] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(240), 1,
      sym_table,
    STATE(731), 1,
      sym_keyspace,
  [9938] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(775), 1,
      sym_table,
    STATE(776), 1,
      sym_keyspace,
  [9951] = 4,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(595), 1,
      sym_if_not_exist,
    STATE(833), 1,
      sym_user,
  [9964] = 4,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(607), 1,
      sym_column,
    STATE(628), 1,
      sym_clustering_key,
  [9977] = 4,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(450), 1,
      sym_column,
    STATE(781), 1,
      sym_column_list,
  [9990] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(121), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [10003] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(121), 1,
      sym_where_spec,
    STATE(410), 1,
      aux_sym_update_repeat1,
  [10016] = 4,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(800), 1,
      sym_object_name,
    STATE(246), 1,
      sym_function,
    STATE(724), 1,
      sym_keyspace,
  [10029] = 4,
    ACTIONS(766), 1,
      aux_sym_if_exist_token1,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(136), 1,
      sym_role,
    STATE(603), 1,
      sym_if_not_exist,
  [10042] = 4,
    ACTIONS(957), 1,
      sym_object_name,
    ACTIONS(959), 1,
      aux_sym_if_exist_token2,
    STATE(164), 1,
      sym_if_condition,
    STATE(236), 1,
      sym_if_condition_list,
  [10055] = 1,
    ACTIONS(961), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10062] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(536), 1,
      sym_table,
    STATE(850), 1,
      sym_keyspace,
  [10075] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(316), 1,
      sym_table,
    STATE(914), 1,
      sym_keyspace,
  [10088] = 3,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      sym_order_direction,
    ACTIONS(253), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [10099] = 4,
    ACTIONS(699), 1,
      sym_object_name,
    ACTIONS(701), 1,
      sym__dquote,
    STATE(896), 1,
      sym_keyspace,
    STATE(904), 1,
      sym_table,
  [10112] = 4,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(591), 1,
      sym_column,
    STATE(621), 1,
      sym_partition_key,
  [10125] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(472), 1,
      sym_option_hash_item,
    STATE(713), 1,
      sym__string_literal,
  [10138] = 2,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(967), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10147] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_column_list_repeat1,
  [10157] = 3,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(83), 1,
      sym_insert_values_spec,
  [10167] = 3,
    ACTIONS(973), 1,
      aux_sym_resource_token1,
    ACTIONS(975), 1,
      aux_sym_resource_token4,
    ACTIONS(977), 1,
      aux_sym_resource_token5,
  [10177] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(245), 1,
      sym_keyspace,
  [10187] = 3,
    ACTIONS(846), 1,
      sym_object_name,
    STATE(511), 1,
      sym_function_call,
    STATE(673), 1,
      sym_select_element,
  [10197] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(97), 1,
      sym_keyspace,
  [10207] = 2,
    ACTIONS(981), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(979), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10215] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(754), 1,
      sym_keyspace,
  [10225] = 3,
    ACTIONS(983), 1,
      sym__hex_digit,
    ACTIONS(986), 1,
      anon_sym_SQUOTE,
    STATE(458), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [10235] = 2,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    ACTIONS(988), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10243] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      aux_sym_relation_element_repeat2,
  [10253] = 3,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_function_args_repeat1,
  [10263] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(310), 1,
      sym_table,
  [10273] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(484), 1,
      sym_table,
  [10283] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_relation_element_repeat1,
  [10293] = 3,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(907), 1,
      sym__dquote,
    STATE(874), 1,
      sym_column,
  [10303] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      aux_sym_from_spec_token1,
    STATE(556), 1,
      aux_sym_delete_column_list_repeat1,
  [10313] = 3,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
  [10323] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_relation_element_repeat2,
  [10333] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(500), 1,
      sym_param,
  [10343] = 3,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(150), 1,
      sym_column,
  [10353] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_column_list_repeat1,
  [10363] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_option_hash_repeat1,
  [10373] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_relation_element_repeat2,
  [10383] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      aux_sym_expression_list_repeat1,
  [10393] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(204), 1,
      sym_table,
  [10403] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      aux_sym_assignment_map_repeat1,
  [10413] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      aux_sym_create_function_repeat1,
  [10423] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(913), 1,
      sym_keyspace,
  [10433] = 3,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      aux_sym_column_definition_list_repeat1,
  [10443] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [10453] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(736), 1,
      sym_return_mode,
  [10463] = 3,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(907), 1,
      sym__dquote,
    STATE(150), 1,
      sym_column,
  [10473] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1044), 1,
      aux_sym_update_token2,
    STATE(730), 1,
      sym_using_ttl_timestamp,
  [10483] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1046), 1,
      aux_sym_update_token2,
    STATE(837), 1,
      sym_using_ttl_timestamp,
  [10493] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(254), 1,
      sym_keyspace,
  [10503] = 3,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_replication_list_repeat1,
  [10513] = 3,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      aux_sym_from_spec_token1,
    STATE(487), 1,
      aux_sym_select_elements_repeat1,
  [10523] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(817), 1,
      sym_table,
  [10533] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_GT,
    STATE(529), 1,
      aux_sym_data_type_definition_repeat1,
  [10543] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(280), 1,
      sym_table,
  [10553] = 3,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    STATE(535), 1,
      aux_sym_replication_list_repeat1,
  [10563] = 3,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_param,
  [10573] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(786), 1,
      sym_return_mode,
  [10583] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(810), 1,
      sym_return_mode,
  [10593] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_create_function_repeat1,
  [10603] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [10613] = 3,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      sym_param,
  [10623] = 2,
    ACTIONS(1071), 1,
      anon_sym_LBRACK,
    ACTIONS(1069), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10631] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_option_hash_repeat1,
  [10641] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_create_function_repeat1,
  [10651] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [10661] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(177), 1,
      sym__string_literal,
  [10671] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_GT,
    STATE(489), 1,
      aux_sym_data_type_definition_repeat1,
  [10681] = 3,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      sym_param,
  [10691] = 3,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_expression_list_repeat1,
  [10701] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_assignment_tuple_repeat1,
  [10711] = 3,
    ACTIONS(1084), 1,
      sym__hex_digit,
    ACTIONS(1086), 1,
      anon_sym_SQUOTE,
    STATE(458), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [10721] = 3,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_function_args_repeat1,
  [10731] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_assignment_tuple_repeat1,
  [10741] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [10751] = 2,
    ACTIONS(889), 1,
      aux_sym_select_element_token1,
    ACTIONS(885), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10759] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_assignment_tuple_repeat1,
  [10769] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_relation_element_repeat2,
  [10779] = 3,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      aux_sym_where_spec_token1,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [10789] = 1,
    ACTIONS(1101), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10795] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(93), 1,
      sym_table,
  [10805] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_relation_element_repeat2,
  [10815] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_relation_element_repeat2,
  [10825] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(390), 1,
      sym_table,
  [10835] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym_relation_element_repeat1,
  [10845] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_relation_element_repeat2,
  [10855] = 3,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(72), 1,
      sym_insert_values_spec,
  [10865] = 3,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      aux_sym_from_spec_token1,
    STATE(487), 1,
      aux_sym_select_elements_repeat1,
  [10875] = 3,
    ACTIONS(923), 1,
      sym_object_name,
    STATE(160), 1,
      sym_table_option_item,
    STATE(867), 1,
      sym_table_option_name,
  [10885] = 3,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_function_args_repeat1,
  [10895] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_clustering_key_list_repeat1,
  [10905] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
    STATE(558), 1,
      aux_sym_assignment_map_repeat1,
  [10915] = 3,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(907), 1,
      sym__dquote,
    STATE(256), 1,
      sym_column,
  [10925] = 3,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_GT,
    STATE(529), 1,
      aux_sym_data_type_definition_repeat1,
  [10935] = 3,
    ACTIONS(721), 1,
      sym_object_name,
    ACTIONS(723), 1,
      sym__dquote,
    STATE(31), 1,
      sym_column,
  [10945] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(219), 1,
      sym_table,
  [10955] = 3,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_clustering_key_list_repeat1,
  [10965] = 3,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_partition_key_list_repeat1,
  [10975] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(787), 1,
      sym_table,
  [10985] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    STATE(535), 1,
      aux_sym_replication_list_repeat1,
  [10995] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1137), 1,
      aux_sym_update_token2,
    STATE(917), 1,
      sym_using_ttl_timestamp,
  [11005] = 3,
    ACTIONS(738), 1,
      sym__dquote,
    ACTIONS(871), 1,
      sym_object_name,
    STATE(107), 1,
      sym_keyspace,
  [11015] = 3,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      aux_sym_from_spec_token1,
    STATE(523), 1,
      aux_sym_select_elements_repeat1,
  [11025] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(868), 1,
      sym_return_mode,
  [11035] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(90), 1,
      sym_table,
  [11045] = 3,
    ACTIONS(90), 1,
      sym__dec_digit,
    ACTIONS(1141), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [11055] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(822), 1,
      sym_return_mode,
  [11065] = 3,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_option_hash_repeat1,
  [11075] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      aux_sym_column_definition_list_repeat1,
  [11085] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(906), 1,
      sym_table,
  [11095] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [11105] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(569), 1,
      sym_table,
  [11115] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_relation_element_repeat1,
  [11125] = 3,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      aux_sym_clustering_key_list_repeat1,
  [11135] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(904), 1,
      sym_table,
  [11145] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_create_function_repeat1,
  [11155] = 3,
    ACTIONS(834), 1,
      aux_sym_select_statement_token3,
    ACTIONS(838), 1,
      aux_sym_insert_values_spec_token1,
    STATE(86), 1,
      sym_insert_values_spec,
  [11165] = 3,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [11175] = 3,
    ACTIONS(1166), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1168), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1170), 1,
      aux_sym_update_token1,
  [11185] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_relation_element_repeat2,
  [11195] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      aux_sym_from_spec_token1,
    STATE(580), 1,
      aux_sym_delete_column_list_repeat1,
  [11205] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_partition_key_list_repeat1,
  [11215] = 3,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    STATE(558), 1,
      aux_sym_assignment_map_repeat1,
  [11225] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [11235] = 3,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_column_list_repeat1,
  [11245] = 3,
    ACTIONS(905), 1,
      sym_object_name,
    ACTIONS(907), 1,
      sym__dquote,
    STATE(445), 1,
      sym_column,
  [11255] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    STATE(509), 1,
      aux_sym_assignment_tuple_repeat1,
  [11265] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(232), 1,
      sym_table,
  [11275] = 3,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      sym_param,
  [11285] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 1,
      sym__string_literal,
  [11295] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      aux_sym_create_function_repeat1,
  [11305] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_expression_list_repeat1,
  [11315] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(718), 1,
      sym_return_mode,
  [11325] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1194), 1,
      aux_sym_update_token2,
    STATE(855), 1,
      sym_using_ttl_timestamp,
  [11335] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_partition_key_list_repeat1,
  [11345] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(723), 1,
      sym_table,
  [11355] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_create_function_repeat1,
  [11365] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(849), 1,
      sym_return_mode,
  [11375] = 3,
    ACTIONS(997), 1,
      sym_object_name,
    ACTIONS(999), 1,
      sym__dquote,
    STATE(351), 1,
      sym_table,
  [11385] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_create_function_repeat1,
  [11395] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      aux_sym_column_definition_list_repeat1,
  [11405] = 1,
    ACTIONS(865), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11411] = 3,
    ACTIONS(1040), 1,
      aux_sym_create_function_token3,
    ACTIONS(1042), 1,
      aux_sym_return_mode_token1,
    STATE(885), 1,
      sym_return_mode,
  [11421] = 3,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_param,
  [11431] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      aux_sym_from_spec_token1,
    STATE(580), 1,
      aux_sym_delete_column_list_repeat1,
  [11441] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(194), 1,
      sym_code_block,
  [11448] = 1,
    ACTIONS(1205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11453] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(842), 1,
      sym_language,
  [11460] = 2,
    ACTIONS(1216), 1,
      aux_sym_durable_writes_token1,
    STATE(195), 1,
      sym_durable_writes,
  [11467] = 1,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11472] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(892), 1,
      sym_function,
  [11479] = 1,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11484] = 2,
    ACTIONS(1220), 1,
      sym__dec_digit,
    STATE(113), 1,
      aux_sym__decimal_literal,
  [11491] = 1,
    ACTIONS(1222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11496] = 2,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
  [11503] = 1,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11508] = 1,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11513] = 2,
    ACTIONS(1228), 1,
      sym__dec_digit,
    STATE(63), 1,
      aux_sym__decimal_literal,
  [11520] = 2,
    ACTIONS(1230), 1,
      aux_sym_role_with_options_token1,
    STATE(101), 1,
      sym_user_password,
  [11527] = 2,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(743), 1,
      sym_user,
  [11534] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(220), 1,
      sym_function,
  [11541] = 2,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(218), 1,
      sym_user,
  [11548] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(429), 1,
      sym_assignment_element,
  [11555] = 2,
    ACTIONS(921), 1,
      aux_sym_ttl_token1,
    STATE(185), 1,
      sym_ttl,
  [11562] = 1,
    ACTIONS(1164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11567] = 2,
    ACTIONS(919), 1,
      aux_sym_timestamp_token1,
    STATE(185), 1,
      sym_timestamp,
  [11574] = 2,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(585), 1,
      sym_delete_column_item,
  [11581] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(144), 1,
      sym_role,
  [11588] = 2,
    ACTIONS(1216), 1,
      aux_sym_durable_writes_token1,
    STATE(202), 1,
      sym_durable_writes,
  [11595] = 2,
    ACTIONS(1234), 1,
      sym__dec_digit,
    STATE(510), 1,
      aux_sym__decimal_literal,
  [11602] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(647), 1,
      sym_assignment_element,
  [11609] = 1,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11614] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(711), 1,
      sym_function,
  [11621] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(862), 1,
      sym_language,
  [11628] = 1,
    ACTIONS(1157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11633] = 2,
    ACTIONS(919), 1,
      aux_sym_timestamp_token1,
    STATE(442), 1,
      sym_timestamp,
  [11640] = 1,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11645] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(823), 1,
      sym_language,
  [11652] = 2,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(116), 1,
      sym_where_spec,
  [11659] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(224), 1,
      sym_code_block,
  [11666] = 2,
    ACTIONS(1216), 1,
      aux_sym_durable_writes_token1,
    STATE(207), 1,
      sym_durable_writes,
  [11673] = 2,
    ACTIONS(1238), 1,
      sym__dec_digit,
    STATE(91), 1,
      aux_sym__decimal_literal,
  [11680] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(238), 1,
      sym_role,
  [11687] = 1,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11692] = 1,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11697] = 1,
    ACTIONS(1130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11702] = 1,
    ACTIONS(939), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11707] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(282), 1,
      sym_code_block,
  [11714] = 2,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [11721] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(877), 1,
      sym_language,
  [11728] = 1,
    ACTIONS(1121), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11733] = 2,
    ACTIONS(1244), 1,
      sym__dec_digit,
    STATE(102), 1,
      aux_sym__decimal_literal,
  [11740] = 1,
    ACTIONS(1114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11745] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(396), 1,
      sym_assignment_element,
  [11752] = 1,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11757] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(190), 1,
      sym_role,
  [11764] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(265), 1,
      sym_role,
  [11771] = 2,
    ACTIONS(1248), 1,
      sym__dec_digit,
    STATE(95), 1,
      aux_sym__decimal_literal,
  [11778] = 2,
    ACTIONS(917), 1,
      aux_sym_where_spec_token1,
    STATE(112), 1,
      sym_where_spec,
  [11785] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(460), 1,
      sym_assignment_tuple,
  [11792] = 2,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(47), 1,
      sym_from_spec,
  [11799] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(814), 1,
      sym_function,
  [11806] = 1,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11811] = 2,
    ACTIONS(1254), 1,
      sym_object_name,
    STATE(133), 1,
      sym_order_spec_element,
  [11818] = 1,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11823] = 1,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11828] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(93), 1,
      sym_function,
  [11835] = 2,
    ACTIONS(1260), 1,
      sym__hex_digit,
    STATE(323), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [11842] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(262), 1,
      sym_code_block,
  [11849] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(884), 1,
      sym_language,
  [11856] = 2,
    ACTIONS(1262), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [11863] = 1,
    ACTIONS(1099), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11868] = 1,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11873] = 1,
    ACTIONS(1264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [11878] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(438), 1,
      sym_assignment_element,
  [11885] = 1,
    ACTIONS(1080), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11890] = 2,
    ACTIONS(1084), 1,
      sym__hex_digit,
    STATE(507), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [11897] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(797), 1,
      sym_function,
  [11904] = 1,
    ACTIONS(1266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11909] = 2,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_option_hash,
  [11916] = 2,
    ACTIONS(1268), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
  [11923] = 2,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(600), 1,
      sym_param,
  [11930] = 2,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(45), 1,
      sym_from_spec,
  [11937] = 1,
    ACTIONS(1270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11942] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(247), 1,
      sym_code_block,
  [11949] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(791), 1,
      sym_language,
  [11956] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(889), 1,
      sym_language,
  [11963] = 2,
    ACTIONS(1272), 1,
      sym__dec_digit,
    STATE(122), 1,
      aux_sym__decimal_literal,
  [11970] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(241), 1,
      sym_code_block,
  [11977] = 2,
    ACTIONS(1274), 1,
      sym_object_name,
    STATE(49), 1,
      sym_from_spec_element,
  [11984] = 2,
    ACTIONS(1230), 1,
      aux_sym_role_with_options_token1,
    STATE(94), 1,
      sym_user_password,
  [11991] = 2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(893), 1,
      sym_language,
  [11998] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(233), 1,
      sym_code_block,
  [12005] = 2,
    ACTIONS(1218), 1,
      sym_object_name,
    STATE(287), 1,
      sym_function,
  [12012] = 2,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(290), 1,
      sym_user,
  [12019] = 1,
    ACTIONS(1276), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12024] = 2,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(263), 1,
      sym_code_block,
  [12031] = 1,
    ACTIONS(1055), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12036] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(415), 1,
      sym_assignment_element,
  [12043] = 2,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(419), 1,
      sym_from_spec,
  [12050] = 2,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [12057] = 2,
    ACTIONS(1250), 1,
      aux_sym_from_spec_token1,
    STATE(420), 1,
      sym_from_spec,
  [12064] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(279), 1,
      sym_role,
  [12071] = 2,
    ACTIONS(1278), 1,
      sym__dec_digit,
    STATE(73), 1,
      aux_sym__decimal_literal,
  [12078] = 2,
    ACTIONS(1280), 1,
      anon_sym_EQ,
    ACTIONS(1282), 1,
      anon_sym_LBRACK,
  [12085] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(151), 1,
      sym_role,
  [12092] = 2,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(912), 1,
      sym_user,
  [12099] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(176), 1,
      sym_role,
  [12106] = 2,
    ACTIONS(1284), 1,
      sym__hex_digit,
    STATE(61), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12113] = 1,
    ACTIONS(1286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12118] = 1,
    ACTIONS(1288), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [12123] = 1,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12128] = 2,
    ACTIONS(1292), 1,
      sym__hex_digit,
    STATE(41), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12135] = 2,
    ACTIONS(1230), 1,
      aux_sym_role_with_options_token1,
    STATE(120), 1,
      sym_user_password,
  [12142] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(587), 1,
      sym_assignment_tuple,
  [12149] = 1,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12154] = 2,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(181), 1,
      sym_if_condition,
  [12161] = 2,
    ACTIONS(1232), 1,
      sym_object_name,
    STATE(401), 1,
      sym_assignment_element,
  [12168] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(248), 1,
      sym_role,
  [12175] = 1,
    ACTIONS(988), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12180] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(521), 1,
      sym_assignment_tuple,
  [12187] = 1,
    ACTIONS(986), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [12192] = 2,
    ACTIONS(1294), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [12199] = 2,
    ACTIONS(929), 1,
      sym_object_name,
    STATE(97), 1,
      sym_role,
  [12206] = 1,
    ACTIONS(1296), 1,
      aux_sym_relalationContainsKey_token2,
  [12210] = 1,
    ACTIONS(1298), 1,
      sym_object_name,
  [12214] = 1,
    ACTIONS(1300), 1,
      aux_sym_create_keyspace_token2,
  [12218] = 1,
    ACTIONS(1302), 1,
      aux_sym_grant_token2,
  [12222] = 1,
    ACTIONS(1304), 1,
      anon_sym_RBRACE,
  [12226] = 1,
    ACTIONS(1306), 1,
      aux_sym_begin_batch_token4,
  [12230] = 1,
    ACTIONS(1308), 1,
      anon_sym_DOT,
  [12234] = 1,
    ACTIONS(1310), 1,
      aux_sym_select_statement_token6,
  [12238] = 1,
    ACTIONS(1312), 1,
      sym__hex_4digit,
  [12242] = 1,
    ACTIONS(1314), 1,
      anon_sym_DOT,
  [12246] = 1,
    ACTIONS(1316), 1,
      aux_sym_from_spec_token1,
  [12250] = 1,
    ACTIONS(1318), 1,
      anon_sym_LPAREN,
  [12254] = 1,
    ACTIONS(1320), 1,
      anon_sym_DOT,
  [12258] = 1,
    ACTIONS(1322), 1,
      anon_sym_COLON,
  [12262] = 1,
    ACTIONS(1324), 1,
      aux_sym_create_function_token4,
  [12266] = 1,
    ACTIONS(1326), 1,
      aux_sym_return_mode_token2,
  [12270] = 1,
    ACTIONS(1328), 1,
      aux_sym_constant_token1,
  [12274] = 1,
    ACTIONS(1330), 1,
      anon_sym_DOT,
  [12278] = 1,
    ACTIONS(1332), 1,
      aux_sym_create_function_token3,
  [12282] = 1,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
  [12286] = 1,
    ACTIONS(1336), 1,
      aux_sym_order_spec_token2,
  [12290] = 1,
    ACTIONS(1338), 1,
      anon_sym_COLON,
  [12294] = 1,
    ACTIONS(1340), 1,
      anon_sym_DOT,
  [12298] = 1,
    ACTIONS(1342), 1,
      anon_sym_LPAREN,
  [12302] = 1,
    ACTIONS(1344), 1,
      anon_sym_DOT,
  [12306] = 1,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [12310] = 1,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
  [12314] = 1,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
  [12318] = 1,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [12322] = 1,
    ACTIONS(1354), 1,
      anon_sym_DOT,
  [12326] = 1,
    ACTIONS(1046), 1,
      aux_sym_update_token2,
  [12330] = 1,
    ACTIONS(1356), 1,
      anon_sym_DOT,
  [12334] = 1,
    ACTIONS(1358), 1,
      aux_sym_create_keyspace_token1,
  [12338] = 1,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [12342] = 1,
    ACTIONS(1362), 1,
      anon_sym_RBRACE,
  [12346] = 1,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [12350] = 1,
    ACTIONS(1366), 1,
      aux_sym_create_function_token3,
  [12354] = 1,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
  [12358] = 1,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
  [12362] = 1,
    ACTIONS(1372), 1,
      aux_sym_create_function_token4,
  [12366] = 1,
    ACTIONS(1374), 1,
      aux_sym_return_mode_token2,
  [12370] = 1,
    ACTIONS(1376), 1,
      aux_sym_create_function_token3,
  [12374] = 1,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [12378] = 1,
    ACTIONS(1380), 1,
      aux_sym_create_keyspace_token1,
  [12382] = 1,
    ACTIONS(1382), 1,
      aux_sym_select_statement_token6,
  [12386] = 1,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [12390] = 1,
    ACTIONS(1386), 1,
      anon_sym_LPAREN,
  [12394] = 1,
    ACTIONS(1388), 1,
      sym__hex_4digit,
  [12398] = 1,
    ACTIONS(1390), 1,
      aux_sym_order_spec_token1,
  [12402] = 1,
    ACTIONS(1392), 1,
      anon_sym_LPAREN,
  [12406] = 1,
    ACTIONS(1394), 1,
      sym__hex_digit,
  [12410] = 1,
    ACTIONS(1396), 1,
      aux_sym__string_literal_token2,
  [12414] = 1,
    ACTIONS(1398), 1,
      anon_sym_DOT,
  [12418] = 1,
    ACTIONS(1400), 1,
      aux_sym__string_literal_token1,
  [12422] = 1,
    ACTIONS(1402), 1,
      aux_sym_create_keyspace_token1,
  [12426] = 1,
    ACTIONS(1404), 1,
      aux_sym_create_keyspace_token2,
  [12430] = 1,
    ACTIONS(1406), 1,
      aux_sym_create_index_token3,
  [12434] = 1,
    ACTIONS(1408), 1,
      aux_sym_select_statement_token6,
  [12438] = 1,
    ACTIONS(1410), 1,
      anon_sym_DASH,
  [12442] = 1,
    ACTIONS(1412), 1,
      anon_sym_DOT,
  [12446] = 1,
    ACTIONS(1414), 1,
      anon_sym_LPAREN,
  [12450] = 1,
    ACTIONS(1416), 1,
      anon_sym_DASH,
  [12454] = 1,
    ACTIONS(1418), 1,
      sym_object_name,
  [12458] = 1,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
  [12462] = 1,
    ACTIONS(1422), 1,
      anon_sym_DOT,
  [12466] = 1,
    ACTIONS(1424), 1,
      aux_sym_select_statement_token6,
  [12470] = 1,
    ACTIONS(1426), 1,
      anon_sym_LPAREN,
  [12474] = 1,
    ACTIONS(1428), 1,
      anon_sym_DOLLAR_DOLLAR,
  [12478] = 1,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
  [12482] = 1,
    ACTIONS(1432), 1,
      anon_sym_LPAREN,
  [12486] = 1,
    ACTIONS(1428), 1,
      anon_sym_SQUOTE,
  [12490] = 1,
    ACTIONS(1434), 1,
      anon_sym_DOT,
  [12494] = 1,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
  [12498] = 1,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
  [12502] = 1,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
  [12506] = 1,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
  [12510] = 1,
    ACTIONS(1444), 1,
      anon_sym_DOT,
  [12514] = 1,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
  [12518] = 1,
    ACTIONS(1448), 1,
      anon_sym_EQ,
  [12522] = 1,
    ACTIONS(1450), 1,
      aux_sym_if_not_exist_token1,
  [12526] = 1,
    ACTIONS(1452), 1,
      sym_object_name,
  [12530] = 1,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
  [12534] = 1,
    ACTIONS(1456), 1,
      anon_sym_DOT,
  [12538] = 1,
    ACTIONS(1458), 1,
      aux_sym_if_exist_token2,
  [12542] = 1,
    ACTIONS(1460), 1,
      aux_sym_create_function_token4,
  [12546] = 1,
    ACTIONS(1462), 1,
      sym__dquote,
  [12550] = 1,
    ACTIONS(1464), 1,
      aux_sym_create_function_token3,
  [12554] = 1,
    ACTIONS(1466), 1,
      anon_sym_LPAREN,
  [12558] = 1,
    ACTIONS(1468), 1,
      anon_sym_EQ,
  [12562] = 1,
    ACTIONS(1470), 1,
      aux_sym_create_function_token3,
  [12566] = 1,
    ACTIONS(1472), 1,
      aux_sym_select_element_token1,
  [12570] = 1,
    ACTIONS(1474), 1,
      aux_sym_select_element_token1,
  [12574] = 1,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
  [12578] = 1,
    ACTIONS(1478), 1,
      sym_object_name,
  [12582] = 1,
    ACTIONS(1480), 1,
      sym_object_name,
  [12586] = 1,
    ACTIONS(1482), 1,
      sym__dquote,
  [12590] = 1,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
  [12594] = 1,
    ACTIONS(1486), 1,
      anon_sym_LPAREN,
  [12598] = 1,
    ACTIONS(1488), 1,
      anon_sym_DOT,
  [12602] = 1,
    ACTIONS(1490), 1,
      sym_object_name,
  [12606] = 1,
    ACTIONS(1492), 1,
      anon_sym_LPAREN,
  [12610] = 1,
    ACTIONS(1494), 1,
      anon_sym_LPAREN,
  [12614] = 1,
    ACTIONS(1496), 1,
      anon_sym_GT,
  [12618] = 1,
    ACTIONS(1498), 1,
      sym__hex_4digit,
  [12622] = 1,
    ACTIONS(1500), 1,
      aux_sym_create_keyspace_token2,
  [12626] = 1,
    ACTIONS(1502), 1,
      anon_sym_DOT,
  [12630] = 1,
    ACTIONS(1504), 1,
      anon_sym_COLON,
  [12634] = 1,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
  [12638] = 1,
    ACTIONS(1508), 1,
      aux_sym_constant_token1,
  [12642] = 1,
    ACTIONS(1510), 1,
      aux_sym_create_index_token3,
  [12646] = 1,
    ACTIONS(1512), 1,
      aux_sym_create_function_token3,
  [12650] = 1,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
  [12654] = 1,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
  [12658] = 1,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
  [12662] = 1,
    ACTIONS(1520), 1,
      anon_sym_LPAREN,
  [12666] = 1,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
  [12670] = 1,
    ACTIONS(1524), 1,
      aux_sym_durable_writes_token2,
  [12674] = 1,
    ACTIONS(1526), 1,
      anon_sym_LPAREN,
  [12678] = 1,
    ACTIONS(1528), 1,
      sym_object_name,
  [12682] = 1,
    ACTIONS(1530), 1,
      sym_object_name,
  [12686] = 1,
    ACTIONS(1532), 1,
      aux_sym_create_function_token4,
  [12690] = 1,
    ACTIONS(1534), 1,
      aux_sym_select_statement_token6,
  [12694] = 1,
    ACTIONS(1536), 1,
      aux_sym_create_function_token3,
  [12698] = 1,
    ACTIONS(1538), 1,
      aux_sym_select_element_token1,
  [12702] = 1,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
  [12706] = 1,
    ACTIONS(1542), 1,
      aux_sym_relalationContainsKey_token2,
  [12710] = 1,
    ACTIONS(1544), 1,
      anon_sym_EQ,
  [12714] = 1,
    ACTIONS(1546), 1,
      anon_sym_EQ,
  [12718] = 1,
    ACTIONS(1548), 1,
      aux_sym_create_function_token2,
  [12722] = 1,
    ACTIONS(1550), 1,
      anon_sym_EQ,
  [12726] = 1,
    ACTIONS(1552), 1,
      sym__hex_4digit,
  [12730] = 1,
    ACTIONS(1554), 1,
      ts_builtin_sym_end,
  [12734] = 1,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
  [12738] = 1,
    ACTIONS(1558), 1,
      aux_sym_create_keyspace_token1,
  [12742] = 1,
    ACTIONS(1560), 1,
      sym_object_name,
  [12746] = 1,
    ACTIONS(1562), 1,
      anon_sym_DOT,
  [12750] = 1,
    ACTIONS(1564), 1,
      anon_sym_COMMA,
  [12754] = 1,
    ACTIONS(1194), 1,
      aux_sym_update_token2,
  [12758] = 1,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
  [12762] = 1,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
  [12766] = 1,
    ACTIONS(1570), 1,
      anon_sym_EQ,
  [12770] = 1,
    ACTIONS(1572), 1,
      sym_object_name,
  [12774] = 1,
    ACTIONS(1574), 1,
      aux_sym_select_element_token1,
  [12778] = 1,
    ACTIONS(1576), 1,
      anon_sym_DOT,
  [12782] = 1,
    ACTIONS(1578), 1,
      aux_sym_create_function_token4,
  [12786] = 1,
    ACTIONS(1580), 1,
      aux_sym_begin_batch_token4,
  [12790] = 1,
    ACTIONS(1582), 1,
      anon_sym_LPAREN,
  [12794] = 1,
    ACTIONS(1584), 1,
      aux_sym__string_literal_token2,
  [12798] = 1,
    ACTIONS(1586), 1,
      sym__hex_4digit,
  [12802] = 1,
    ACTIONS(1588), 1,
      aux_sym_create_function_token3,
  [12806] = 1,
    ACTIONS(1590), 1,
      anon_sym_DOT,
  [12810] = 1,
    ACTIONS(1592), 1,
      sym__hex_4digit,
  [12814] = 1,
    ACTIONS(1594), 1,
      aux_sym_select_statement_token6,
  [12818] = 1,
    ACTIONS(1141), 1,
      anon_sym_RBRACK,
  [12822] = 1,
    ACTIONS(1596), 1,
      anon_sym_RPAREN,
  [12826] = 1,
    ACTIONS(1598), 1,
      aux_sym_update_token2,
  [12830] = 1,
    ACTIONS(1600), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [12834] = 1,
    ACTIONS(1602), 1,
      aux_sym_resource_token3,
  [12838] = 1,
    ACTIONS(1604), 1,
      aux_sym_order_spec_token2,
  [12842] = 1,
    ACTIONS(1606), 1,
      sym_object_name,
  [12846] = 1,
    ACTIONS(1608), 1,
      sym__boolean_literal,
  [12850] = 1,
    ACTIONS(1610), 1,
      anon_sym_EQ,
  [12854] = 1,
    ACTIONS(1612), 1,
      aux_sym_select_element_token1,
  [12858] = 1,
    ACTIONS(1614), 1,
      sym_object_name,
  [12862] = 1,
    ACTIONS(1616), 1,
      aux_sym_create_function_token4,
  [12866] = 1,
    ACTIONS(1618), 1,
      aux_sym_select_statement_token6,
  [12870] = 1,
    ACTIONS(1620), 1,
      anon_sym_DOLLAR_DOLLAR,
  [12874] = 1,
    ACTIONS(1622), 1,
      anon_sym_EQ,
  [12878] = 1,
    ACTIONS(1624), 1,
      aux_sym_create_function_token3,
  [12882] = 1,
    ACTIONS(1626), 1,
      aux_sym_if_exist_token2,
  [12886] = 1,
    ACTIONS(1628), 1,
      anon_sym_RPAREN,
  [12890] = 1,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
  [12894] = 1,
    ACTIONS(1632), 1,
      anon_sym_LBRACE,
  [12898] = 1,
    ACTIONS(1614), 1,
      anon_sym_STAR,
  [12902] = 1,
    ACTIONS(1634), 1,
      aux_sym_grant_token2,
  [12906] = 1,
    ACTIONS(1636), 1,
      anon_sym_EQ,
  [12910] = 1,
    ACTIONS(1638), 1,
      aux_sym_resource_token2,
  [12914] = 1,
    ACTIONS(1640), 1,
      aux_sym_select_element_token1,
  [12918] = 1,
    ACTIONS(1642), 1,
      aux_sym_create_index_token3,
  [12922] = 1,
    ACTIONS(1644), 1,
      anon_sym_DOT,
  [12926] = 1,
    ACTIONS(1646), 1,
      aux_sym_create_function_token4,
  [12930] = 1,
    ACTIONS(1648), 1,
      anon_sym_DASH,
  [12934] = 1,
    ACTIONS(1650), 1,
      anon_sym_DOT,
  [12938] = 1,
    ACTIONS(1652), 1,
      sym__boolean_literal,
  [12942] = 1,
    ACTIONS(1654), 1,
      aux_sym_select_element_token1,
  [12946] = 1,
    ACTIONS(1656), 1,
      aux_sym_create_function_token3,
  [12950] = 1,
    ACTIONS(1658), 1,
      aux_sym_create_function_token4,
  [12954] = 1,
    ACTIONS(1660), 1,
      anon_sym_DOT,
  [12958] = 1,
    ACTIONS(1662), 1,
      aux_sym_create_index_token3,
  [12962] = 1,
    ACTIONS(1664), 1,
      aux_sym_select_element_token1,
  [12966] = 1,
    ACTIONS(1666), 1,
      aux_sym_constant_token1,
  [12970] = 1,
    ACTIONS(1668), 1,
      anon_sym_RPAREN,
  [12974] = 1,
    ACTIONS(1670), 1,
      anon_sym_LPAREN,
  [12978] = 1,
    ACTIONS(1672), 1,
      aux_sym_select_element_token1,
  [12982] = 1,
    ACTIONS(1674), 1,
      anon_sym_GT,
  [12986] = 1,
    ACTIONS(1676), 1,
      anon_sym_LBRACE,
  [12990] = 1,
    ACTIONS(1678), 1,
      anon_sym_DOT,
  [12994] = 1,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
  [12998] = 1,
    ACTIONS(1682), 1,
      aux_sym_create_index_token3,
  [13002] = 1,
    ACTIONS(1684), 1,
      anon_sym_RPAREN,
  [13006] = 1,
    ACTIONS(1686), 1,
      anon_sym_LPAREN,
  [13010] = 1,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [13014] = 1,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
  [13018] = 1,
    ACTIONS(1692), 1,
      anon_sym_DOT,
  [13022] = 1,
    ACTIONS(1694), 1,
      anon_sym_LPAREN,
  [13026] = 1,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [13030] = 1,
    ACTIONS(1698), 1,
      anon_sym_LPAREN,
  [13034] = 1,
    ACTIONS(1700), 1,
      aux_sym_create_index_token3,
  [13038] = 1,
    ACTIONS(1702), 1,
      aux_sym_if_exist_token2,
  [13042] = 1,
    ACTIONS(1704), 1,
      sym__dquote,
  [13046] = 1,
    ACTIONS(1706), 1,
      anon_sym_RPAREN,
  [13050] = 1,
    ACTIONS(1708), 1,
      aux_sym_if_not_exist_token1,
  [13054] = 1,
    ACTIONS(1710), 1,
      aux_sym_create_keyspace_token1,
  [13058] = 1,
    ACTIONS(1712), 1,
      aux_sym_create_keyspace_token1,
  [13062] = 1,
    ACTIONS(1714), 1,
      anon_sym_DOT,
  [13066] = 1,
    ACTIONS(1716), 1,
      sym_object_name,
  [13070] = 1,
    ACTIONS(1718), 1,
      sym__dquote,
  [13074] = 1,
    ACTIONS(1044), 1,
      aux_sym_update_token2,
  [13078] = 1,
    ACTIONS(1720), 1,
      sym__dquote,
  [13082] = 1,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
  [13086] = 1,
    ACTIONS(1722), 1,
      anon_sym_DOT,
  [13090] = 1,
    ACTIONS(1724), 1,
      aux_sym_insert_statement_token2,
  [13094] = 1,
    ACTIONS(1726), 1,
      sym_object_name,
  [13098] = 1,
    ACTIONS(1728), 1,
      aux_sym_insert_statement_token2,
  [13102] = 1,
    ACTIONS(1730), 1,
      anon_sym_DOT,
  [13106] = 1,
    ACTIONS(1732), 1,
      anon_sym_DASH,
  [13110] = 1,
    ACTIONS(1734), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 241,
  [SMALL_STATE(7)] = 283,
  [SMALL_STATE(8)] = 322,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 472,
  [SMALL_STATE(13)] = 507,
  [SMALL_STATE(14)] = 539,
  [SMALL_STATE(15)] = 571,
  [SMALL_STATE(16)] = 603,
  [SMALL_STATE(17)] = 640,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 817,
  [SMALL_STATE(23)] = 854,
  [SMALL_STATE(24)] = 891,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 965,
  [SMALL_STATE(27)] = 1002,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1076,
  [SMALL_STATE(30)] = 1109,
  [SMALL_STATE(31)] = 1142,
  [SMALL_STATE(32)] = 1179,
  [SMALL_STATE(33)] = 1213,
  [SMALL_STATE(34)] = 1243,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1307,
  [SMALL_STATE(37)] = 1364,
  [SMALL_STATE(38)] = 1418,
  [SMALL_STATE(39)] = 1447,
  [SMALL_STATE(40)] = 1486,
  [SMALL_STATE(41)] = 1515,
  [SMALL_STATE(42)] = 1544,
  [SMALL_STATE(43)] = 1581,
  [SMALL_STATE(44)] = 1608,
  [SMALL_STATE(45)] = 1639,
  [SMALL_STATE(46)] = 1676,
  [SMALL_STATE(47)] = 1701,
  [SMALL_STATE(48)] = 1738,
  [SMALL_STATE(49)] = 1762,
  [SMALL_STATE(50)] = 1786,
  [SMALL_STATE(51)] = 1814,
  [SMALL_STATE(52)] = 1842,
  [SMALL_STATE(53)] = 1866,
  [SMALL_STATE(54)] = 1890,
  [SMALL_STATE(55)] = 1914,
  [SMALL_STATE(56)] = 1938,
  [SMALL_STATE(57)] = 1962,
  [SMALL_STATE(58)] = 1988,
  [SMALL_STATE(59)] = 2012,
  [SMALL_STATE(60)] = 2040,
  [SMALL_STATE(61)] = 2064,
  [SMALL_STATE(62)] = 2092,
  [SMALL_STATE(63)] = 2116,
  [SMALL_STATE(64)] = 2144,
  [SMALL_STATE(65)] = 2172,
  [SMALL_STATE(66)] = 2196,
  [SMALL_STATE(67)] = 2220,
  [SMALL_STATE(68)] = 2244,
  [SMALL_STATE(69)] = 2268,
  [SMALL_STATE(70)] = 2292,
  [SMALL_STATE(71)] = 2320,
  [SMALL_STATE(72)] = 2372,
  [SMALL_STATE(73)] = 2403,
  [SMALL_STATE(74)] = 2430,
  [SMALL_STATE(75)] = 2453,
  [SMALL_STATE(76)] = 2478,
  [SMALL_STATE(77)] = 2509,
  [SMALL_STATE(78)] = 2532,
  [SMALL_STATE(79)] = 2563,
  [SMALL_STATE(80)] = 2594,
  [SMALL_STATE(81)] = 2617,
  [SMALL_STATE(82)] = 2668,
  [SMALL_STATE(83)] = 2699,
  [SMALL_STATE(84)] = 2730,
  [SMALL_STATE(85)] = 2761,
  [SMALL_STATE(86)] = 2784,
  [SMALL_STATE(87)] = 2815,
  [SMALL_STATE(88)] = 2838,
  [SMALL_STATE(89)] = 2861,
  [SMALL_STATE(90)] = 2887,
  [SMALL_STATE(91)] = 2909,
  [SMALL_STATE(92)] = 2937,
  [SMALL_STATE(93)] = 2963,
  [SMALL_STATE(94)] = 2985,
  [SMALL_STATE(95)] = 3011,
  [SMALL_STATE(96)] = 3039,
  [SMALL_STATE(97)] = 3061,
  [SMALL_STATE(98)] = 3083,
  [SMALL_STATE(99)] = 3109,
  [SMALL_STATE(100)] = 3131,
  [SMALL_STATE(101)] = 3157,
  [SMALL_STATE(102)] = 3183,
  [SMALL_STATE(103)] = 3211,
  [SMALL_STATE(104)] = 3237,
  [SMALL_STATE(105)] = 3261,
  [SMALL_STATE(106)] = 3287,
  [SMALL_STATE(107)] = 3313,
  [SMALL_STATE(108)] = 3335,
  [SMALL_STATE(109)] = 3361,
  [SMALL_STATE(110)] = 3383,
  [SMALL_STATE(111)] = 3409,
  [SMALL_STATE(112)] = 3431,
  [SMALL_STATE(113)] = 3457,
  [SMALL_STATE(114)] = 3485,
  [SMALL_STATE(115)] = 3507,
  [SMALL_STATE(116)] = 3529,
  [SMALL_STATE(117)] = 3555,
  [SMALL_STATE(118)] = 3581,
  [SMALL_STATE(119)] = 3607,
  [SMALL_STATE(120)] = 3633,
  [SMALL_STATE(121)] = 3659,
  [SMALL_STATE(122)] = 3685,
  [SMALL_STATE(123)] = 3713,
  [SMALL_STATE(124)] = 3739,
  [SMALL_STATE(125)] = 3764,
  [SMALL_STATE(126)] = 3789,
  [SMALL_STATE(127)] = 3814,
  [SMALL_STATE(128)] = 3835,
  [SMALL_STATE(129)] = 3860,
  [SMALL_STATE(130)] = 3885,
  [SMALL_STATE(131)] = 3910,
  [SMALL_STATE(132)] = 3935,
  [SMALL_STATE(133)] = 3980,
  [SMALL_STATE(134)] = 4001,
  [SMALL_STATE(135)] = 4026,
  [SMALL_STATE(136)] = 4051,
  [SMALL_STATE(137)] = 4076,
  [SMALL_STATE(138)] = 4101,
  [SMALL_STATE(139)] = 4122,
  [SMALL_STATE(140)] = 4147,
  [SMALL_STATE(141)] = 4172,
  [SMALL_STATE(142)] = 4197,
  [SMALL_STATE(143)] = 4222,
  [SMALL_STATE(144)] = 4243,
  [SMALL_STATE(145)] = 4268,
  [SMALL_STATE(146)] = 4293,
  [SMALL_STATE(147)] = 4314,
  [SMALL_STATE(148)] = 4337,
  [SMALL_STATE(149)] = 4362,
  [SMALL_STATE(150)] = 4387,
  [SMALL_STATE(151)] = 4408,
  [SMALL_STATE(152)] = 4433,
  [SMALL_STATE(153)] = 4454,
  [SMALL_STATE(154)] = 4479,
  [SMALL_STATE(155)] = 4504,
  [SMALL_STATE(156)] = 4529,
  [SMALL_STATE(157)] = 4554,
  [SMALL_STATE(158)] = 4579,
  [SMALL_STATE(159)] = 4602,
  [SMALL_STATE(160)] = 4627,
  [SMALL_STATE(161)] = 4648,
  [SMALL_STATE(162)] = 4673,
  [SMALL_STATE(163)] = 4694,
  [SMALL_STATE(164)] = 4715,
  [SMALL_STATE(165)] = 4740,
  [SMALL_STATE(166)] = 4761,
  [SMALL_STATE(167)] = 4786,
  [SMALL_STATE(168)] = 4811,
  [SMALL_STATE(169)] = 4836,
  [SMALL_STATE(170)] = 4880,
  [SMALL_STATE(171)] = 4900,
  [SMALL_STATE(172)] = 4942,
  [SMALL_STATE(173)] = 4984,
  [SMALL_STATE(174)] = 5004,
  [SMALL_STATE(175)] = 5024,
  [SMALL_STATE(176)] = 5046,
  [SMALL_STATE(177)] = 5068,
  [SMALL_STATE(178)] = 5088,
  [SMALL_STATE(179)] = 5110,
  [SMALL_STATE(180)] = 5130,
  [SMALL_STATE(181)] = 5152,
  [SMALL_STATE(182)] = 5172,
  [SMALL_STATE(183)] = 5214,
  [SMALL_STATE(184)] = 5234,
  [SMALL_STATE(185)] = 5256,
  [SMALL_STATE(186)] = 5276,
  [SMALL_STATE(187)] = 5298,
  [SMALL_STATE(188)] = 5320,
  [SMALL_STATE(189)] = 5340,
  [SMALL_STATE(190)] = 5359,
  [SMALL_STATE(191)] = 5378,
  [SMALL_STATE(192)] = 5397,
  [SMALL_STATE(193)] = 5416,
  [SMALL_STATE(194)] = 5435,
  [SMALL_STATE(195)] = 5454,
  [SMALL_STATE(196)] = 5473,
  [SMALL_STATE(197)] = 5492,
  [SMALL_STATE(198)] = 5511,
  [SMALL_STATE(199)] = 5530,
  [SMALL_STATE(200)] = 5549,
  [SMALL_STATE(201)] = 5568,
  [SMALL_STATE(202)] = 5587,
  [SMALL_STATE(203)] = 5606,
  [SMALL_STATE(204)] = 5625,
  [SMALL_STATE(205)] = 5644,
  [SMALL_STATE(206)] = 5663,
  [SMALL_STATE(207)] = 5684,
  [SMALL_STATE(208)] = 5703,
  [SMALL_STATE(209)] = 5722,
  [SMALL_STATE(210)] = 5741,
  [SMALL_STATE(211)] = 5760,
  [SMALL_STATE(212)] = 5779,
  [SMALL_STATE(213)] = 5798,
  [SMALL_STATE(214)] = 5817,
  [SMALL_STATE(215)] = 5836,
  [SMALL_STATE(216)] = 5855,
  [SMALL_STATE(217)] = 5874,
  [SMALL_STATE(218)] = 5893,
  [SMALL_STATE(219)] = 5912,
  [SMALL_STATE(220)] = 5931,
  [SMALL_STATE(221)] = 5950,
  [SMALL_STATE(222)] = 5969,
  [SMALL_STATE(223)] = 5988,
  [SMALL_STATE(224)] = 6007,
  [SMALL_STATE(225)] = 6026,
  [SMALL_STATE(226)] = 6045,
  [SMALL_STATE(227)] = 6064,
  [SMALL_STATE(228)] = 6083,
  [SMALL_STATE(229)] = 6102,
  [SMALL_STATE(230)] = 6121,
  [SMALL_STATE(231)] = 6140,
  [SMALL_STATE(232)] = 6159,
  [SMALL_STATE(233)] = 6178,
  [SMALL_STATE(234)] = 6197,
  [SMALL_STATE(235)] = 6238,
  [SMALL_STATE(236)] = 6257,
  [SMALL_STATE(237)] = 6276,
  [SMALL_STATE(238)] = 6295,
  [SMALL_STATE(239)] = 6314,
  [SMALL_STATE(240)] = 6333,
  [SMALL_STATE(241)] = 6352,
  [SMALL_STATE(242)] = 6371,
  [SMALL_STATE(243)] = 6390,
  [SMALL_STATE(244)] = 6409,
  [SMALL_STATE(245)] = 6428,
  [SMALL_STATE(246)] = 6447,
  [SMALL_STATE(247)] = 6466,
  [SMALL_STATE(248)] = 6485,
  [SMALL_STATE(249)] = 6504,
  [SMALL_STATE(250)] = 6523,
  [SMALL_STATE(251)] = 6542,
  [SMALL_STATE(252)] = 6561,
  [SMALL_STATE(253)] = 6580,
  [SMALL_STATE(254)] = 6599,
  [SMALL_STATE(255)] = 6618,
  [SMALL_STATE(256)] = 6637,
  [SMALL_STATE(257)] = 6656,
  [SMALL_STATE(258)] = 6675,
  [SMALL_STATE(259)] = 6694,
  [SMALL_STATE(260)] = 6713,
  [SMALL_STATE(261)] = 6732,
  [SMALL_STATE(262)] = 6751,
  [SMALL_STATE(263)] = 6770,
  [SMALL_STATE(264)] = 6789,
  [SMALL_STATE(265)] = 6808,
  [SMALL_STATE(266)] = 6827,
  [SMALL_STATE(267)] = 6868,
  [SMALL_STATE(268)] = 6887,
  [SMALL_STATE(269)] = 6906,
  [SMALL_STATE(270)] = 6925,
  [SMALL_STATE(271)] = 6944,
  [SMALL_STATE(272)] = 6963,
  [SMALL_STATE(273)] = 6982,
  [SMALL_STATE(274)] = 7001,
  [SMALL_STATE(275)] = 7020,
  [SMALL_STATE(276)] = 7039,
  [SMALL_STATE(277)] = 7058,
  [SMALL_STATE(278)] = 7077,
  [SMALL_STATE(279)] = 7096,
  [SMALL_STATE(280)] = 7115,
  [SMALL_STATE(281)] = 7134,
  [SMALL_STATE(282)] = 7175,
  [SMALL_STATE(283)] = 7194,
  [SMALL_STATE(284)] = 7213,
  [SMALL_STATE(285)] = 7232,
  [SMALL_STATE(286)] = 7251,
  [SMALL_STATE(287)] = 7270,
  [SMALL_STATE(288)] = 7289,
  [SMALL_STATE(289)] = 7308,
  [SMALL_STATE(290)] = 7327,
  [SMALL_STATE(291)] = 7346,
  [SMALL_STATE(292)] = 7384,
  [SMALL_STATE(293)] = 7422,
  [SMALL_STATE(294)] = 7460,
  [SMALL_STATE(295)] = 7498,
  [SMALL_STATE(296)] = 7536,
  [SMALL_STATE(297)] = 7554,
  [SMALL_STATE(298)] = 7592,
  [SMALL_STATE(299)] = 7630,
  [SMALL_STATE(300)] = 7668,
  [SMALL_STATE(301)] = 7706,
  [SMALL_STATE(302)] = 7744,
  [SMALL_STATE(303)] = 7782,
  [SMALL_STATE(304)] = 7820,
  [SMALL_STATE(305)] = 7858,
  [SMALL_STATE(306)] = 7896,
  [SMALL_STATE(307)] = 7934,
  [SMALL_STATE(308)] = 7954,
  [SMALL_STATE(309)] = 7981,
  [SMALL_STATE(310)] = 8012,
  [SMALL_STATE(311)] = 8035,
  [SMALL_STATE(312)] = 8060,
  [SMALL_STATE(313)] = 8091,
  [SMALL_STATE(314)] = 8116,
  [SMALL_STATE(315)] = 8141,
  [SMALL_STATE(316)] = 8166,
  [SMALL_STATE(317)] = 8189,
  [SMALL_STATE(318)] = 8206,
  [SMALL_STATE(319)] = 8237,
  [SMALL_STATE(320)] = 8262,
  [SMALL_STATE(321)] = 8279,
  [SMALL_STATE(322)] = 8295,
  [SMALL_STATE(323)] = 8323,
  [SMALL_STATE(324)] = 8339,
  [SMALL_STATE(325)] = 8363,
  [SMALL_STATE(326)] = 8385,
  [SMALL_STATE(327)] = 8407,
  [SMALL_STATE(328)] = 8432,
  [SMALL_STATE(329)] = 8454,
  [SMALL_STATE(330)] = 8476,
  [SMALL_STATE(331)] = 8498,
  [SMALL_STATE(332)] = 8518,
  [SMALL_STATE(333)] = 8538,
  [SMALL_STATE(334)] = 8556,
  [SMALL_STATE(335)] = 8576,
  [SMALL_STATE(336)] = 8595,
  [SMALL_STATE(337)] = 8614,
  [SMALL_STATE(338)] = 8633,
  [SMALL_STATE(339)] = 8652,
  [SMALL_STATE(340)] = 8663,
  [SMALL_STATE(341)] = 8682,
  [SMALL_STATE(342)] = 8699,
  [SMALL_STATE(343)] = 8718,
  [SMALL_STATE(344)] = 8737,
  [SMALL_STATE(345)] = 8756,
  [SMALL_STATE(346)] = 8775,
  [SMALL_STATE(347)] = 8794,
  [SMALL_STATE(348)] = 8813,
  [SMALL_STATE(349)] = 8832,
  [SMALL_STATE(350)] = 8849,
  [SMALL_STATE(351)] = 8860,
  [SMALL_STATE(352)] = 8876,
  [SMALL_STATE(353)] = 8892,
  [SMALL_STATE(354)] = 8906,
  [SMALL_STATE(355)] = 8922,
  [SMALL_STATE(356)] = 8934,
  [SMALL_STATE(357)] = 8950,
  [SMALL_STATE(358)] = 8960,
  [SMALL_STATE(359)] = 8976,
  [SMALL_STATE(360)] = 8992,
  [SMALL_STATE(361)] = 9002,
  [SMALL_STATE(362)] = 9014,
  [SMALL_STATE(363)] = 9022,
  [SMALL_STATE(364)] = 9038,
  [SMALL_STATE(365)] = 9046,
  [SMALL_STATE(366)] = 9062,
  [SMALL_STATE(367)] = 9078,
  [SMALL_STATE(368)] = 9086,
  [SMALL_STATE(369)] = 9102,
  [SMALL_STATE(370)] = 9110,
  [SMALL_STATE(371)] = 9126,
  [SMALL_STATE(372)] = 9142,
  [SMALL_STATE(373)] = 9158,
  [SMALL_STATE(374)] = 9174,
  [SMALL_STATE(375)] = 9184,
  [SMALL_STATE(376)] = 9198,
  [SMALL_STATE(377)] = 9214,
  [SMALL_STATE(378)] = 9230,
  [SMALL_STATE(379)] = 9246,
  [SMALL_STATE(380)] = 9254,
  [SMALL_STATE(381)] = 9270,
  [SMALL_STATE(382)] = 9280,
  [SMALL_STATE(383)] = 9294,
  [SMALL_STATE(384)] = 9310,
  [SMALL_STATE(385)] = 9326,
  [SMALL_STATE(386)] = 9342,
  [SMALL_STATE(387)] = 9352,
  [SMALL_STATE(388)] = 9368,
  [SMALL_STATE(389)] = 9384,
  [SMALL_STATE(390)] = 9400,
  [SMALL_STATE(391)] = 9416,
  [SMALL_STATE(392)] = 9424,
  [SMALL_STATE(393)] = 9440,
  [SMALL_STATE(394)] = 9448,
  [SMALL_STATE(395)] = 9460,
  [SMALL_STATE(396)] = 9473,
  [SMALL_STATE(397)] = 9486,
  [SMALL_STATE(398)] = 9499,
  [SMALL_STATE(399)] = 9512,
  [SMALL_STATE(400)] = 9519,
  [SMALL_STATE(401)] = 9532,
  [SMALL_STATE(402)] = 9545,
  [SMALL_STATE(403)] = 9558,
  [SMALL_STATE(404)] = 9571,
  [SMALL_STATE(405)] = 9584,
  [SMALL_STATE(406)] = 9597,
  [SMALL_STATE(407)] = 9610,
  [SMALL_STATE(408)] = 9621,
  [SMALL_STATE(409)] = 9634,
  [SMALL_STATE(410)] = 9643,
  [SMALL_STATE(411)] = 9656,
  [SMALL_STATE(412)] = 9669,
  [SMALL_STATE(413)] = 9682,
  [SMALL_STATE(414)] = 9695,
  [SMALL_STATE(415)] = 9708,
  [SMALL_STATE(416)] = 9721,
  [SMALL_STATE(417)] = 9734,
  [SMALL_STATE(418)] = 9747,
  [SMALL_STATE(419)] = 9760,
  [SMALL_STATE(420)] = 9773,
  [SMALL_STATE(421)] = 9786,
  [SMALL_STATE(422)] = 9799,
  [SMALL_STATE(423)] = 9812,
  [SMALL_STATE(424)] = 9825,
  [SMALL_STATE(425)] = 9838,
  [SMALL_STATE(426)] = 9849,
  [SMALL_STATE(427)] = 9862,
  [SMALL_STATE(428)] = 9873,
  [SMALL_STATE(429)] = 9886,
  [SMALL_STATE(430)] = 9899,
  [SMALL_STATE(431)] = 9912,
  [SMALL_STATE(432)] = 9925,
  [SMALL_STATE(433)] = 9938,
  [SMALL_STATE(434)] = 9951,
  [SMALL_STATE(435)] = 9964,
  [SMALL_STATE(436)] = 9977,
  [SMALL_STATE(437)] = 9990,
  [SMALL_STATE(438)] = 10003,
  [SMALL_STATE(439)] = 10016,
  [SMALL_STATE(440)] = 10029,
  [SMALL_STATE(441)] = 10042,
  [SMALL_STATE(442)] = 10055,
  [SMALL_STATE(443)] = 10062,
  [SMALL_STATE(444)] = 10075,
  [SMALL_STATE(445)] = 10088,
  [SMALL_STATE(446)] = 10099,
  [SMALL_STATE(447)] = 10112,
  [SMALL_STATE(448)] = 10125,
  [SMALL_STATE(449)] = 10138,
  [SMALL_STATE(450)] = 10147,
  [SMALL_STATE(451)] = 10157,
  [SMALL_STATE(452)] = 10167,
  [SMALL_STATE(453)] = 10177,
  [SMALL_STATE(454)] = 10187,
  [SMALL_STATE(455)] = 10197,
  [SMALL_STATE(456)] = 10207,
  [SMALL_STATE(457)] = 10215,
  [SMALL_STATE(458)] = 10225,
  [SMALL_STATE(459)] = 10235,
  [SMALL_STATE(460)] = 10243,
  [SMALL_STATE(461)] = 10253,
  [SMALL_STATE(462)] = 10263,
  [SMALL_STATE(463)] = 10273,
  [SMALL_STATE(464)] = 10283,
  [SMALL_STATE(465)] = 10293,
  [SMALL_STATE(466)] = 10303,
  [SMALL_STATE(467)] = 10313,
  [SMALL_STATE(468)] = 10323,
  [SMALL_STATE(469)] = 10333,
  [SMALL_STATE(470)] = 10343,
  [SMALL_STATE(471)] = 10353,
  [SMALL_STATE(472)] = 10363,
  [SMALL_STATE(473)] = 10373,
  [SMALL_STATE(474)] = 10383,
  [SMALL_STATE(475)] = 10393,
  [SMALL_STATE(476)] = 10403,
  [SMALL_STATE(477)] = 10413,
  [SMALL_STATE(478)] = 10423,
  [SMALL_STATE(479)] = 10433,
  [SMALL_STATE(480)] = 10443,
  [SMALL_STATE(481)] = 10453,
  [SMALL_STATE(482)] = 10463,
  [SMALL_STATE(483)] = 10473,
  [SMALL_STATE(484)] = 10483,
  [SMALL_STATE(485)] = 10493,
  [SMALL_STATE(486)] = 10503,
  [SMALL_STATE(487)] = 10513,
  [SMALL_STATE(488)] = 10523,
  [SMALL_STATE(489)] = 10533,
  [SMALL_STATE(490)] = 10543,
  [SMALL_STATE(491)] = 10553,
  [SMALL_STATE(492)] = 10563,
  [SMALL_STATE(493)] = 10573,
  [SMALL_STATE(494)] = 10583,
  [SMALL_STATE(495)] = 10593,
  [SMALL_STATE(496)] = 10603,
  [SMALL_STATE(497)] = 10613,
  [SMALL_STATE(498)] = 10623,
  [SMALL_STATE(499)] = 10631,
  [SMALL_STATE(500)] = 10641,
  [SMALL_STATE(501)] = 10651,
  [SMALL_STATE(502)] = 10661,
  [SMALL_STATE(503)] = 10671,
  [SMALL_STATE(504)] = 10681,
  [SMALL_STATE(505)] = 10691,
  [SMALL_STATE(506)] = 10701,
  [SMALL_STATE(507)] = 10711,
  [SMALL_STATE(508)] = 10721,
  [SMALL_STATE(509)] = 10731,
  [SMALL_STATE(510)] = 10741,
  [SMALL_STATE(511)] = 10751,
  [SMALL_STATE(512)] = 10759,
  [SMALL_STATE(513)] = 10769,
  [SMALL_STATE(514)] = 10779,
  [SMALL_STATE(515)] = 10789,
  [SMALL_STATE(516)] = 10795,
  [SMALL_STATE(517)] = 10805,
  [SMALL_STATE(518)] = 10815,
  [SMALL_STATE(519)] = 10825,
  [SMALL_STATE(520)] = 10835,
  [SMALL_STATE(521)] = 10845,
  [SMALL_STATE(522)] = 10855,
  [SMALL_STATE(523)] = 10865,
  [SMALL_STATE(524)] = 10875,
  [SMALL_STATE(525)] = 10885,
  [SMALL_STATE(526)] = 10895,
  [SMALL_STATE(527)] = 10905,
  [SMALL_STATE(528)] = 10915,
  [SMALL_STATE(529)] = 10925,
  [SMALL_STATE(530)] = 10935,
  [SMALL_STATE(531)] = 10945,
  [SMALL_STATE(532)] = 10955,
  [SMALL_STATE(533)] = 10965,
  [SMALL_STATE(534)] = 10975,
  [SMALL_STATE(535)] = 10985,
  [SMALL_STATE(536)] = 10995,
  [SMALL_STATE(537)] = 11005,
  [SMALL_STATE(538)] = 11015,
  [SMALL_STATE(539)] = 11025,
  [SMALL_STATE(540)] = 11035,
  [SMALL_STATE(541)] = 11045,
  [SMALL_STATE(542)] = 11055,
  [SMALL_STATE(543)] = 11065,
  [SMALL_STATE(544)] = 11075,
  [SMALL_STATE(545)] = 11085,
  [SMALL_STATE(546)] = 11095,
  [SMALL_STATE(547)] = 11105,
  [SMALL_STATE(548)] = 11115,
  [SMALL_STATE(549)] = 11125,
  [SMALL_STATE(550)] = 11135,
  [SMALL_STATE(551)] = 11145,
  [SMALL_STATE(552)] = 11155,
  [SMALL_STATE(553)] = 11165,
  [SMALL_STATE(554)] = 11175,
  [SMALL_STATE(555)] = 11185,
  [SMALL_STATE(556)] = 11195,
  [SMALL_STATE(557)] = 11205,
  [SMALL_STATE(558)] = 11215,
  [SMALL_STATE(559)] = 11225,
  [SMALL_STATE(560)] = 11235,
  [SMALL_STATE(561)] = 11245,
  [SMALL_STATE(562)] = 11255,
  [SMALL_STATE(563)] = 11265,
  [SMALL_STATE(564)] = 11275,
  [SMALL_STATE(565)] = 11285,
  [SMALL_STATE(566)] = 11295,
  [SMALL_STATE(567)] = 11305,
  [SMALL_STATE(568)] = 11315,
  [SMALL_STATE(569)] = 11325,
  [SMALL_STATE(570)] = 11335,
  [SMALL_STATE(571)] = 11345,
  [SMALL_STATE(572)] = 11355,
  [SMALL_STATE(573)] = 11365,
  [SMALL_STATE(574)] = 11375,
  [SMALL_STATE(575)] = 11385,
  [SMALL_STATE(576)] = 11395,
  [SMALL_STATE(577)] = 11405,
  [SMALL_STATE(578)] = 11411,
  [SMALL_STATE(579)] = 11421,
  [SMALL_STATE(580)] = 11431,
  [SMALL_STATE(581)] = 11441,
  [SMALL_STATE(582)] = 11448,
  [SMALL_STATE(583)] = 11453,
  [SMALL_STATE(584)] = 11460,
  [SMALL_STATE(585)] = 11467,
  [SMALL_STATE(586)] = 11472,
  [SMALL_STATE(587)] = 11479,
  [SMALL_STATE(588)] = 11484,
  [SMALL_STATE(589)] = 11491,
  [SMALL_STATE(590)] = 11496,
  [SMALL_STATE(591)] = 11503,
  [SMALL_STATE(592)] = 11508,
  [SMALL_STATE(593)] = 11513,
  [SMALL_STATE(594)] = 11520,
  [SMALL_STATE(595)] = 11527,
  [SMALL_STATE(596)] = 11534,
  [SMALL_STATE(597)] = 11541,
  [SMALL_STATE(598)] = 11548,
  [SMALL_STATE(599)] = 11555,
  [SMALL_STATE(600)] = 11562,
  [SMALL_STATE(601)] = 11567,
  [SMALL_STATE(602)] = 11574,
  [SMALL_STATE(603)] = 11581,
  [SMALL_STATE(604)] = 11588,
  [SMALL_STATE(605)] = 11595,
  [SMALL_STATE(606)] = 11602,
  [SMALL_STATE(607)] = 11609,
  [SMALL_STATE(608)] = 11614,
  [SMALL_STATE(609)] = 11621,
  [SMALL_STATE(610)] = 11628,
  [SMALL_STATE(611)] = 11633,
  [SMALL_STATE(612)] = 11640,
  [SMALL_STATE(613)] = 11645,
  [SMALL_STATE(614)] = 11652,
  [SMALL_STATE(615)] = 11659,
  [SMALL_STATE(616)] = 11666,
  [SMALL_STATE(617)] = 11673,
  [SMALL_STATE(618)] = 11680,
  [SMALL_STATE(619)] = 11687,
  [SMALL_STATE(620)] = 11692,
  [SMALL_STATE(621)] = 11697,
  [SMALL_STATE(622)] = 11702,
  [SMALL_STATE(623)] = 11707,
  [SMALL_STATE(624)] = 11714,
  [SMALL_STATE(625)] = 11721,
  [SMALL_STATE(626)] = 11728,
  [SMALL_STATE(627)] = 11733,
  [SMALL_STATE(628)] = 11740,
  [SMALL_STATE(629)] = 11745,
  [SMALL_STATE(630)] = 11752,
  [SMALL_STATE(631)] = 11757,
  [SMALL_STATE(632)] = 11764,
  [SMALL_STATE(633)] = 11771,
  [SMALL_STATE(634)] = 11778,
  [SMALL_STATE(635)] = 11785,
  [SMALL_STATE(636)] = 11792,
  [SMALL_STATE(637)] = 11799,
  [SMALL_STATE(638)] = 11806,
  [SMALL_STATE(639)] = 11811,
  [SMALL_STATE(640)] = 11818,
  [SMALL_STATE(641)] = 11823,
  [SMALL_STATE(642)] = 11828,
  [SMALL_STATE(643)] = 11835,
  [SMALL_STATE(644)] = 11842,
  [SMALL_STATE(645)] = 11849,
  [SMALL_STATE(646)] = 11856,
  [SMALL_STATE(647)] = 11863,
  [SMALL_STATE(648)] = 11868,
  [SMALL_STATE(649)] = 11873,
  [SMALL_STATE(650)] = 11878,
  [SMALL_STATE(651)] = 11885,
  [SMALL_STATE(652)] = 11890,
  [SMALL_STATE(653)] = 11897,
  [SMALL_STATE(654)] = 11904,
  [SMALL_STATE(655)] = 11909,
  [SMALL_STATE(656)] = 11916,
  [SMALL_STATE(657)] = 11923,
  [SMALL_STATE(658)] = 11930,
  [SMALL_STATE(659)] = 11937,
  [SMALL_STATE(660)] = 11942,
  [SMALL_STATE(661)] = 11949,
  [SMALL_STATE(662)] = 11956,
  [SMALL_STATE(663)] = 11963,
  [SMALL_STATE(664)] = 11970,
  [SMALL_STATE(665)] = 11977,
  [SMALL_STATE(666)] = 11984,
  [SMALL_STATE(667)] = 11991,
  [SMALL_STATE(668)] = 11998,
  [SMALL_STATE(669)] = 12005,
  [SMALL_STATE(670)] = 12012,
  [SMALL_STATE(671)] = 12019,
  [SMALL_STATE(672)] = 12024,
  [SMALL_STATE(673)] = 12031,
  [SMALL_STATE(674)] = 12036,
  [SMALL_STATE(675)] = 12043,
  [SMALL_STATE(676)] = 12050,
  [SMALL_STATE(677)] = 12057,
  [SMALL_STATE(678)] = 12064,
  [SMALL_STATE(679)] = 12071,
  [SMALL_STATE(680)] = 12078,
  [SMALL_STATE(681)] = 12085,
  [SMALL_STATE(682)] = 12092,
  [SMALL_STATE(683)] = 12099,
  [SMALL_STATE(684)] = 12106,
  [SMALL_STATE(685)] = 12113,
  [SMALL_STATE(686)] = 12118,
  [SMALL_STATE(687)] = 12123,
  [SMALL_STATE(688)] = 12128,
  [SMALL_STATE(689)] = 12135,
  [SMALL_STATE(690)] = 12142,
  [SMALL_STATE(691)] = 12149,
  [SMALL_STATE(692)] = 12154,
  [SMALL_STATE(693)] = 12161,
  [SMALL_STATE(694)] = 12168,
  [SMALL_STATE(695)] = 12175,
  [SMALL_STATE(696)] = 12180,
  [SMALL_STATE(697)] = 12187,
  [SMALL_STATE(698)] = 12192,
  [SMALL_STATE(699)] = 12199,
  [SMALL_STATE(700)] = 12206,
  [SMALL_STATE(701)] = 12210,
  [SMALL_STATE(702)] = 12214,
  [SMALL_STATE(703)] = 12218,
  [SMALL_STATE(704)] = 12222,
  [SMALL_STATE(705)] = 12226,
  [SMALL_STATE(706)] = 12230,
  [SMALL_STATE(707)] = 12234,
  [SMALL_STATE(708)] = 12238,
  [SMALL_STATE(709)] = 12242,
  [SMALL_STATE(710)] = 12246,
  [SMALL_STATE(711)] = 12250,
  [SMALL_STATE(712)] = 12254,
  [SMALL_STATE(713)] = 12258,
  [SMALL_STATE(714)] = 12262,
  [SMALL_STATE(715)] = 12266,
  [SMALL_STATE(716)] = 12270,
  [SMALL_STATE(717)] = 12274,
  [SMALL_STATE(718)] = 12278,
  [SMALL_STATE(719)] = 12282,
  [SMALL_STATE(720)] = 12286,
  [SMALL_STATE(721)] = 12290,
  [SMALL_STATE(722)] = 12294,
  [SMALL_STATE(723)] = 12298,
  [SMALL_STATE(724)] = 12302,
  [SMALL_STATE(725)] = 12306,
  [SMALL_STATE(726)] = 12310,
  [SMALL_STATE(727)] = 12314,
  [SMALL_STATE(728)] = 12318,
  [SMALL_STATE(729)] = 12322,
  [SMALL_STATE(730)] = 12326,
  [SMALL_STATE(731)] = 12330,
  [SMALL_STATE(732)] = 12334,
  [SMALL_STATE(733)] = 12338,
  [SMALL_STATE(734)] = 12342,
  [SMALL_STATE(735)] = 12346,
  [SMALL_STATE(736)] = 12350,
  [SMALL_STATE(737)] = 12354,
  [SMALL_STATE(738)] = 12358,
  [SMALL_STATE(739)] = 12362,
  [SMALL_STATE(740)] = 12366,
  [SMALL_STATE(741)] = 12370,
  [SMALL_STATE(742)] = 12374,
  [SMALL_STATE(743)] = 12378,
  [SMALL_STATE(744)] = 12382,
  [SMALL_STATE(745)] = 12386,
  [SMALL_STATE(746)] = 12390,
  [SMALL_STATE(747)] = 12394,
  [SMALL_STATE(748)] = 12398,
  [SMALL_STATE(749)] = 12402,
  [SMALL_STATE(750)] = 12406,
  [SMALL_STATE(751)] = 12410,
  [SMALL_STATE(752)] = 12414,
  [SMALL_STATE(753)] = 12418,
  [SMALL_STATE(754)] = 12422,
  [SMALL_STATE(755)] = 12426,
  [SMALL_STATE(756)] = 12430,
  [SMALL_STATE(757)] = 12434,
  [SMALL_STATE(758)] = 12438,
  [SMALL_STATE(759)] = 12442,
  [SMALL_STATE(760)] = 12446,
  [SMALL_STATE(761)] = 12450,
  [SMALL_STATE(762)] = 12454,
  [SMALL_STATE(763)] = 12458,
  [SMALL_STATE(764)] = 12462,
  [SMALL_STATE(765)] = 12466,
  [SMALL_STATE(766)] = 12470,
  [SMALL_STATE(767)] = 12474,
  [SMALL_STATE(768)] = 12478,
  [SMALL_STATE(769)] = 12482,
  [SMALL_STATE(770)] = 12486,
  [SMALL_STATE(771)] = 12490,
  [SMALL_STATE(772)] = 12494,
  [SMALL_STATE(773)] = 12498,
  [SMALL_STATE(774)] = 12502,
  [SMALL_STATE(775)] = 12506,
  [SMALL_STATE(776)] = 12510,
  [SMALL_STATE(777)] = 12514,
  [SMALL_STATE(778)] = 12518,
  [SMALL_STATE(779)] = 12522,
  [SMALL_STATE(780)] = 12526,
  [SMALL_STATE(781)] = 12530,
  [SMALL_STATE(782)] = 12534,
  [SMALL_STATE(783)] = 12538,
  [SMALL_STATE(784)] = 12542,
  [SMALL_STATE(785)] = 12546,
  [SMALL_STATE(786)] = 12550,
  [SMALL_STATE(787)] = 12554,
  [SMALL_STATE(788)] = 12558,
  [SMALL_STATE(789)] = 12562,
  [SMALL_STATE(790)] = 12566,
  [SMALL_STATE(791)] = 12570,
  [SMALL_STATE(792)] = 12574,
  [SMALL_STATE(793)] = 12578,
  [SMALL_STATE(794)] = 12582,
  [SMALL_STATE(795)] = 12586,
  [SMALL_STATE(796)] = 12590,
  [SMALL_STATE(797)] = 12594,
  [SMALL_STATE(798)] = 12598,
  [SMALL_STATE(799)] = 12602,
  [SMALL_STATE(800)] = 12606,
  [SMALL_STATE(801)] = 12610,
  [SMALL_STATE(802)] = 12614,
  [SMALL_STATE(803)] = 12618,
  [SMALL_STATE(804)] = 12622,
  [SMALL_STATE(805)] = 12626,
  [SMALL_STATE(806)] = 12630,
  [SMALL_STATE(807)] = 12634,
  [SMALL_STATE(808)] = 12638,
  [SMALL_STATE(809)] = 12642,
  [SMALL_STATE(810)] = 12646,
  [SMALL_STATE(811)] = 12650,
  [SMALL_STATE(812)] = 12654,
  [SMALL_STATE(813)] = 12658,
  [SMALL_STATE(814)] = 12662,
  [SMALL_STATE(815)] = 12666,
  [SMALL_STATE(816)] = 12670,
  [SMALL_STATE(817)] = 12674,
  [SMALL_STATE(818)] = 12678,
  [SMALL_STATE(819)] = 12682,
  [SMALL_STATE(820)] = 12686,
  [SMALL_STATE(821)] = 12690,
  [SMALL_STATE(822)] = 12694,
  [SMALL_STATE(823)] = 12698,
  [SMALL_STATE(824)] = 12702,
  [SMALL_STATE(825)] = 12706,
  [SMALL_STATE(826)] = 12710,
  [SMALL_STATE(827)] = 12714,
  [SMALL_STATE(828)] = 12718,
  [SMALL_STATE(829)] = 12722,
  [SMALL_STATE(830)] = 12726,
  [SMALL_STATE(831)] = 12730,
  [SMALL_STATE(832)] = 12734,
  [SMALL_STATE(833)] = 12738,
  [SMALL_STATE(834)] = 12742,
  [SMALL_STATE(835)] = 12746,
  [SMALL_STATE(836)] = 12750,
  [SMALL_STATE(837)] = 12754,
  [SMALL_STATE(838)] = 12758,
  [SMALL_STATE(839)] = 12762,
  [SMALL_STATE(840)] = 12766,
  [SMALL_STATE(841)] = 12770,
  [SMALL_STATE(842)] = 12774,
  [SMALL_STATE(843)] = 12778,
  [SMALL_STATE(844)] = 12782,
  [SMALL_STATE(845)] = 12786,
  [SMALL_STATE(846)] = 12790,
  [SMALL_STATE(847)] = 12794,
  [SMALL_STATE(848)] = 12798,
  [SMALL_STATE(849)] = 12802,
  [SMALL_STATE(850)] = 12806,
  [SMALL_STATE(851)] = 12810,
  [SMALL_STATE(852)] = 12814,
  [SMALL_STATE(853)] = 12818,
  [SMALL_STATE(854)] = 12822,
  [SMALL_STATE(855)] = 12826,
  [SMALL_STATE(856)] = 12830,
  [SMALL_STATE(857)] = 12834,
  [SMALL_STATE(858)] = 12838,
  [SMALL_STATE(859)] = 12842,
  [SMALL_STATE(860)] = 12846,
  [SMALL_STATE(861)] = 12850,
  [SMALL_STATE(862)] = 12854,
  [SMALL_STATE(863)] = 12858,
  [SMALL_STATE(864)] = 12862,
  [SMALL_STATE(865)] = 12866,
  [SMALL_STATE(866)] = 12870,
  [SMALL_STATE(867)] = 12874,
  [SMALL_STATE(868)] = 12878,
  [SMALL_STATE(869)] = 12882,
  [SMALL_STATE(870)] = 12886,
  [SMALL_STATE(871)] = 12890,
  [SMALL_STATE(872)] = 12894,
  [SMALL_STATE(873)] = 12898,
  [SMALL_STATE(874)] = 12902,
  [SMALL_STATE(875)] = 12906,
  [SMALL_STATE(876)] = 12910,
  [SMALL_STATE(877)] = 12914,
  [SMALL_STATE(878)] = 12918,
  [SMALL_STATE(879)] = 12922,
  [SMALL_STATE(880)] = 12926,
  [SMALL_STATE(881)] = 12930,
  [SMALL_STATE(882)] = 12934,
  [SMALL_STATE(883)] = 12938,
  [SMALL_STATE(884)] = 12942,
  [SMALL_STATE(885)] = 12946,
  [SMALL_STATE(886)] = 12950,
  [SMALL_STATE(887)] = 12954,
  [SMALL_STATE(888)] = 12958,
  [SMALL_STATE(889)] = 12962,
  [SMALL_STATE(890)] = 12966,
  [SMALL_STATE(891)] = 12970,
  [SMALL_STATE(892)] = 12974,
  [SMALL_STATE(893)] = 12978,
  [SMALL_STATE(894)] = 12982,
  [SMALL_STATE(895)] = 12986,
  [SMALL_STATE(896)] = 12990,
  [SMALL_STATE(897)] = 12994,
  [SMALL_STATE(898)] = 12998,
  [SMALL_STATE(899)] = 13002,
  [SMALL_STATE(900)] = 13006,
  [SMALL_STATE(901)] = 13010,
  [SMALL_STATE(902)] = 13014,
  [SMALL_STATE(903)] = 13018,
  [SMALL_STATE(904)] = 13022,
  [SMALL_STATE(905)] = 13026,
  [SMALL_STATE(906)] = 13030,
  [SMALL_STATE(907)] = 13034,
  [SMALL_STATE(908)] = 13038,
  [SMALL_STATE(909)] = 13042,
  [SMALL_STATE(910)] = 13046,
  [SMALL_STATE(911)] = 13050,
  [SMALL_STATE(912)] = 13054,
  [SMALL_STATE(913)] = 13058,
  [SMALL_STATE(914)] = 13062,
  [SMALL_STATE(915)] = 13066,
  [SMALL_STATE(916)] = 13070,
  [SMALL_STATE(917)] = 13074,
  [SMALL_STATE(918)] = 13078,
  [SMALL_STATE(919)] = 13082,
  [SMALL_STATE(920)] = 13086,
  [SMALL_STATE(921)] = 13090,
  [SMALL_STATE(922)] = 13094,
  [SMALL_STATE(923)] = 13098,
  [SMALL_STATE(924)] = 13102,
  [SMALL_STATE(925)] = 13106,
  [SMALL_STATE(926)] = 13110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(456),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(921),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(485),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(317),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(845),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 14),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 12),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 12),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 23),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 23),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(341),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 22),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(59),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 20),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 15),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(349),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(524),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 25),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(353),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 19),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 7),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(692),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(530),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(482),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 13),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 24),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 24),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 24),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 6),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 11),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 24),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 6),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 27),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 24),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(321),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(299),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 13),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(750),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(171),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(690),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(454),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(37),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(606),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(435),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(34),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(447),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(411),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(414),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(922),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(657),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(300),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(470),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(422),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(602),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 21),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 26),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1554] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 18),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
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
