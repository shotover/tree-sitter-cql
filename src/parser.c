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
#define STATE_COUNT 1029
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 307
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
  sym_drop_user = 214,
  sym_user = 215,
  sym_create_function = 216,
  sym_param = 217,
  sym_data_type = 218,
  sym_data_type_name = 219,
  sym_data_type_definition = 220,
  sym_return_mode = 221,
  sym_language = 222,
  sym_create_keyspace = 223,
  sym_replication_list_item = 224,
  sym_durable_writes = 225,
  sym_create_role = 226,
  sym_role_with = 227,
  sym_role_with_options = 228,
  sym_option_hash = 229,
  sym_option_hash_item = 230,
  sym_create_table = 231,
  sym_column_definition_list = 232,
  sym_column_definition = 233,
  sym_primary_key_column = 234,
  sym_primary_key_element = 235,
  sym_primary_key_definition = 236,
  sym_single_primary_key = 237,
  sym_compound_key = 238,
  sym_partition_key = 239,
  sym_clustering_key_list = 240,
  sym_clustering_key = 241,
  sym_composite_key = 242,
  sym_partition_key_list = 243,
  sym_with_element = 244,
  sym_table_options = 245,
  sym_table_option_item = 246,
  sym_table_option_name = 247,
  sym_table_option_value = 248,
  sym_clustering_order = 249,
  sym_order_direction = 250,
  sym_create_trigger = 251,
  sym_trigger = 252,
  sym_trigger_class = 253,
  sym_create_type = 254,
  sym_type_member_column_list = 255,
  sym_create_user = 256,
  sym_alter_keyspace = 257,
  sym_replication_list = 258,
  sym_alter_role = 259,
  sym_alter_table = 260,
  sym_alter_table_operation = 261,
  sym_alter_table_add = 262,
  sym_alter_table_column_definition = 263,
  sym_alter_table_drop_columns = 264,
  sym_alter_table_drop_column_list = 265,
  sym_alter_table_drop_compact_storage = 266,
  sym_alter_table_rename = 267,
  sym_alter_table_with = 268,
  sym_alter_type = 269,
  sym_type = 270,
  sym_alter_type_operation = 271,
  sym_alter_type_alter_type = 272,
  sym_alter_type_add = 273,
  sym_alter_type_rename = 274,
  sym_alter_type_rename_list = 275,
  sym_alter_type_rename_item = 276,
  sym_alter_user = 277,
  sym_user_password = 278,
  sym_user_super_user = 279,
  sym_apply_batch = 280,
  aux_sym_source_file_repeat1 = 281,
  aux_sym_select_elements_repeat1 = 282,
  aux_sym_function_args_repeat1 = 283,
  aux_sym__hexadecimal_literal_repeat1 = 284,
  aux_sym__hexadecimal_literal_repeat2 = 285,
  aux_sym_relation_elements_repeat1 = 286,
  aux_sym_relation_element_repeat1 = 287,
  aux_sym_relation_element_repeat2 = 288,
  aux_sym_assignment_tuple_repeat1 = 289,
  aux_sym_delete_column_list_repeat1 = 290,
  aux_sym_if_condition_list_repeat1 = 291,
  aux_sym_column_list_repeat1 = 292,
  aux_sym_expression_list_repeat1 = 293,
  aux_sym_assignment_map_repeat1 = 294,
  aux_sym_update_repeat1 = 295,
  aux_sym_create_function_repeat1 = 296,
  aux_sym_data_type_definition_repeat1 = 297,
  aux_sym_role_with_repeat1 = 298,
  aux_sym_option_hash_repeat1 = 299,
  aux_sym_column_definition_list_repeat1 = 300,
  aux_sym_clustering_key_list_repeat1 = 301,
  aux_sym_partition_key_list_repeat1 = 302,
  aux_sym_table_options_repeat1 = 303,
  aux_sym_type_member_column_list_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_type_rename_list_repeat1 = 306,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 307,
  anon_alias_sym_ALL_ROLES = 308,
  anon_alias_sym_CONTAINS = 309,
  anon_alias_sym_DROP_INDEX = 310,
  anon_alias_sym_IF = 311,
  anon_alias_sym_ORDER_BY = 312,
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
  [40] = 23,
  [41] = 41,
  [42] = 19,
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
  [57] = 51,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 43,
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
  [94] = 68,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 56,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 74,
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
  [185] = 180,
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
  [297] = 209,
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
  [326] = 321,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 322,
  [332] = 332,
  [333] = 329,
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
  [352] = 43,
  [353] = 353,
  [354] = 353,
  [355] = 355,
  [356] = 356,
  [357] = 51,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 360,
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
  [379] = 376,
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
  [406] = 403,
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
  [425] = 411,
  [426] = 426,
  [427] = 427,
  [428] = 197,
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
  [498] = 249,
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
  [520] = 511,
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
  [637] = 170,
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
  [656] = 655,
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
  [751] = 655,
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
  [1010] = 785,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 947,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 921,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 1011,
  [1024] = 1024,
  [1025] = 1025,
  [1026] = 1026,
  [1027] = 1027,
  [1028] = 1021,
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
          lookahead == 'a') ADVANCE(603);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(531);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(507);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(628);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(519);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          lookahead == 'n') ADVANCE(630);
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
          lookahead == 'd') ADVANCE(542);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(607);
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
          lookahead == 'j') ADVANCE(607);
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
          lookahead == 'c') ADVANCE(548);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
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
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
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
          lookahead == 'a') ADVANCE(495);
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
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(528);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 521:
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
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(640);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
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
          lookahead == 'i') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
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
          lookahead == 'i') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
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
          lookahead == 'l') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
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
          lookahead == 'l') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
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
          lookahead == 'l') ADVANCE(609);
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
          lookahead == 'z') ADVANCE(504);
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
          lookahead == 'm') ADVANCE(508);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
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
          lookahead == 'u') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(485);
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
          lookahead == 'n') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
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
          lookahead == 'o') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
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
          lookahead == 'p') ADVANCE(503);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(482);
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
          lookahead == 'p') ADVANCE(489);
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
          lookahead == 'r') ADVANCE(493);
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
          lookahead == 'r') ADVANCE(613);
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
          lookahead == 'r') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
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
          lookahead == 's') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
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
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
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
          lookahead == 't') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(613);
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
          lookahead == 'y') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(610);
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
  [35] = {.lex_state = 423},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 423},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 424},
  [40] = {.lex_state = 424},
  [41] = {.lex_state = 424},
  [42] = {.lex_state = 424},
  [43] = {.lex_state = 426},
  [44] = {.lex_state = 423},
  [45] = {.lex_state = 423},
  [46] = {.lex_state = 423},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 423},
  [50] = {.lex_state = 425},
  [51] = {.lex_state = 426},
  [52] = {.lex_state = 423},
  [53] = {.lex_state = 423},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 423},
  [56] = {.lex_state = 423},
  [57] = {.lex_state = 427},
  [58] = {.lex_state = 423},
  [59] = {.lex_state = 423},
  [60] = {.lex_state = 423},
  [61] = {.lex_state = 423},
  [62] = {.lex_state = 427},
  [63] = {.lex_state = 423},
  [64] = {.lex_state = 423},
  [65] = {.lex_state = 423},
  [66] = {.lex_state = 423},
  [67] = {.lex_state = 423},
  [68] = {.lex_state = 423},
  [69] = {.lex_state = 423},
  [70] = {.lex_state = 423},
  [71] = {.lex_state = 423},
  [72] = {.lex_state = 424},
  [73] = {.lex_state = 423},
  [74] = {.lex_state = 423},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 423},
  [77] = {.lex_state = 423},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 423},
  [81] = {.lex_state = 423},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 423},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 423},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 423},
  [91] = {.lex_state = 423},
  [92] = {.lex_state = 423},
  [93] = {.lex_state = 423},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 423},
  [96] = {.lex_state = 423},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 423},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 423},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 423},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 423},
  [112] = {.lex_state = 423},
  [113] = {.lex_state = 423},
  [114] = {.lex_state = 423},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 423},
  [117] = {.lex_state = 423},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 423},
  [121] = {.lex_state = 423},
  [122] = {.lex_state = 423},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 423},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 423},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 423},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 423},
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
  [174] = {.lex_state = 423},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 424},
  [183] = {.lex_state = 0},
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
  [198] = {.lex_state = 3},
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
  [209] = {.lex_state = 424},
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
  [297] = {.lex_state = 424},
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
  [317] = {.lex_state = 424},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 424},
  [322] = {.lex_state = 424},
  [323] = {.lex_state = 424},
  [324] = {.lex_state = 424},
  [325] = {.lex_state = 424},
  [326] = {.lex_state = 424},
  [327] = {.lex_state = 424},
  [328] = {.lex_state = 424},
  [329] = {.lex_state = 424},
  [330] = {.lex_state = 424},
  [331] = {.lex_state = 424},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 424},
  [334] = {.lex_state = 424},
  [335] = {.lex_state = 424},
  [336] = {.lex_state = 424},
  [337] = {.lex_state = 17},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 1},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 423},
  [345] = {.lex_state = 423},
  [346] = {.lex_state = 423},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 1},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 1},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 423},
  [354] = {.lex_state = 423},
  [355] = {.lex_state = 144},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 423},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 423},
  [362] = {.lex_state = 423},
  [363] = {.lex_state = 144},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 423},
  [368] = {.lex_state = 423},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 10},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 423},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 423},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 423},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 423},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 423},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 1},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 424},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 423},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 1},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 423},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 423},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 423},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 423},
  [514] = {.lex_state = 423},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 423},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 6},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 423},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 423},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 423},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 423},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 423},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 423},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 423},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 423},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 423},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 423},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 423},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 423},
  [587] = {.lex_state = 1},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 1},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 1},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 1},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 423},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 1},
  [603] = {.lex_state = 1},
  [604] = {.lex_state = 1},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 1},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 423},
  [616] = {.lex_state = 1},
  [617] = {.lex_state = 1},
  [618] = {.lex_state = 1},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 1},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 1},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 423},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 1},
  [627] = {.lex_state = 1},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 423},
  [634] = {.lex_state = 1},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 6},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 1},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 1},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 1},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 423},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 1},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 423},
  [655] = {.lex_state = 6},
  [656] = {.lex_state = 6},
  [657] = {.lex_state = 423},
  [658] = {.lex_state = 1},
  [659] = {.lex_state = 423},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 1},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 1},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 423},
  [668] = {.lex_state = 1},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 1},
  [676] = {.lex_state = 1},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 6},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 423},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 1},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 1},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 1},
  [692] = {.lex_state = 1},
  [693] = {.lex_state = 423},
  [694] = {.lex_state = 1},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 1},
  [697] = {.lex_state = 1},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 1},
  [701] = {.lex_state = 423},
  [702] = {.lex_state = 423},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 1},
  [705] = {.lex_state = 1},
  [706] = {.lex_state = 423},
  [707] = {.lex_state = 423},
  [708] = {.lex_state = 1},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 423},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 1},
  [713] = {.lex_state = 423},
  [714] = {.lex_state = 1},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 1},
  [718] = {.lex_state = 1},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 1},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 1},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 423},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 1},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 1},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 1},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 1},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 1},
  [737] = {.lex_state = 1},
  [738] = {.lex_state = 423},
  [739] = {.lex_state = 423},
  [740] = {.lex_state = 1},
  [741] = {.lex_state = 1},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 423},
  [745] = {.lex_state = 1},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 1},
  [748] = {.lex_state = 423},
  [749] = {.lex_state = 423},
  [750] = {.lex_state = 6},
  [751] = {.lex_state = 6},
  [752] = {.lex_state = 1},
  [753] = {.lex_state = 1},
  [754] = {.lex_state = 1},
  [755] = {.lex_state = 423},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 423},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 423},
  [766] = {.lex_state = 1},
  [767] = {.lex_state = 1},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 423},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 1},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 424},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 423},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 1},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 426},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 423},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 424},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 1},
  [804] = {.lex_state = 1},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 423},
  [814] = {.lex_state = 423},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 423},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 423},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 424},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 424},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 423},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 423},
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
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 423},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 423},
  [892] = {.lex_state = 423},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 423},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 423},
  [899] = {.lex_state = 424},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 1},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 424},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 423},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 424},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 1},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 423},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 424},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 5},
  [935] = {.lex_state = 460},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 423},
  [945] = {.lex_state = 423},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 5},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 424},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 423},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 423},
  [963] = {.lex_state = 424},
  [964] = {.lex_state = 423},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 6},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 1},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 423},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 423},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 423},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 424},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 423},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 1},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 1},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 1},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 423},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 423},
  [1015] = {.lex_state = 1},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 1},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 424},
  [1021] = {.lex_state = 1},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 423},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 424},
  [1028] = {.lex_state = 1},
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
    [sym_source_file] = STATE(1024),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(205),
    [sym_delete_statement] = STATE(205),
    [sym_begin_batch] = STATE(509),
    [sym_insert_statement] = STATE(205),
    [sym_truncate] = STATE(205),
    [sym_create_index] = STATE(205),
    [sym_drop_index] = STATE(205),
    [sym_update] = STATE(205),
    [sym_use] = STATE(205),
    [sym_grant] = STATE(205),
    [sym_revoke] = STATE(205),
    [sym_list_roles] = STATE(205),
    [sym_list_permissions] = STATE(205),
    [sym_drop_function] = STATE(205),
    [sym_drop_keyspace] = STATE(205),
    [sym_drop_role] = STATE(205),
    [sym_drop_table] = STATE(205),
    [sym_drop_trigger] = STATE(205),
    [sym_drop_user] = STATE(205),
    [sym_create_function] = STATE(205),
    [sym_create_keyspace] = STATE(205),
    [sym_create_role] = STATE(205),
    [sym_create_table] = STATE(205),
    [sym_create_trigger] = STATE(205),
    [sym_create_type] = STATE(205),
    [sym_create_user] = STATE(205),
    [sym_alter_keyspace] = STATE(205),
    [sym_alter_role] = STATE(205),
    [sym_alter_table] = STATE(205),
    [sym_alter_type] = STATE(205),
    [sym_alter_user] = STATE(205),
    [sym_apply_batch] = STATE(205),
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
    STATE(509), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(205), 31,
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
  [86] = 18,
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
    STATE(509), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(205), 31,
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
  [172] = 3,
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
  [213] = 4,
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
  [255] = 1,
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
  [291] = 3,
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
  [330] = 4,
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
  [371] = 3,
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
  [410] = 2,
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
  [445] = 2,
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
  [480] = 2,
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
  [515] = 1,
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
  [547] = 1,
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
  [579] = 1,
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
  [611] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
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
  [648] = 2,
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
  [681] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(695), 1,
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
  [718] = 2,
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
  [751] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
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
  [788] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(171), 1,
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
  [825] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(837), 1,
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
  [862] = 2,
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
  [895] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(558), 1,
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
  [932] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(885), 1,
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
  [969] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(482), 1,
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
  [1006] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(966), 1,
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
  [1043] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(982), 1,
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
  [1080] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(988), 1,
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
  [1117] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(900), 1,
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
  [1154] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(273), 1,
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
  [1191] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(132), 1,
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
  [1228] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(48), 1,
      sym_data_type_name,
    STATE(133), 1,
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
  [1265] = 2,
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
  [1298] = 1,
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
  [1328] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(722), 1,
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
  [1362] = 1,
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
  [1392] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(601), 1,
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
  [1426] = 16,
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
    STATE(515), 1,
      sym_expression,
    STATE(1019), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(651), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1483] = 1,
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
  [1509] = 15,
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
    STATE(743), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(651), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1563] = 1,
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
  [1589] = 3,
    ACTIONS(160), 1,
      sym__hex_digit,
    STATE(51), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(158), 20,
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
  [1618] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(162), 19,
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
  [1649] = 2,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(164), 21,
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
  [1676] = 7,
    ACTIONS(170), 1,
      aux_sym_select_statement_token4,
    ACTIONS(172), 1,
      aux_sym_select_statement_token5,
    ACTIONS(174), 1,
      aux_sym_where_spec_token1,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    STATE(91), 1,
      sym_where_spec,
    STATE(138), 1,
      sym_order_spec,
    ACTIONS(168), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1713] = 1,
    ACTIONS(178), 22,
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
  [1738] = 3,
    ACTIONS(182), 1,
      anon_sym_LT,
    STATE(79), 1,
      sym_data_type_definition,
    ACTIONS(180), 20,
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
  [1767] = 7,
    ACTIONS(174), 1,
      aux_sym_where_spec_token1,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    ACTIONS(186), 1,
      aux_sym_select_statement_token4,
    ACTIONS(188), 1,
      aux_sym_select_statement_token5,
    STATE(84), 1,
      sym_where_spec,
    STATE(143), 1,
      sym_order_spec,
    ACTIONS(184), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1804] = 8,
    ACTIONS(194), 1,
      sym_object_name,
    ACTIONS(196), 1,
      aux_sym_clustering_order_token1,
    STATE(101), 1,
      sym_table_option_item,
    STATE(174), 1,
      sym_table_options,
    STATE(245), 1,
      sym_clustering_order,
    STATE(835), 1,
      sym_table_option_name,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(192), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1843] = 3,
    ACTIONS(200), 1,
      sym__hex_digit,
    STATE(51), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(198), 20,
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
  [1872] = 7,
    ACTIONS(174), 1,
      aux_sym_where_spec_token1,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(81), 1,
      sym_where_spec,
    STATE(134), 1,
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
  [1909] = 1,
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
  [1933] = 15,
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
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(757), 1,
      sym_constant,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(442), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1985] = 1,
    ACTIONS(219), 21,
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
  [2009] = 3,
    ACTIONS(223), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(221), 19,
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
  [2037] = 3,
    ACTIONS(225), 1,
      sym__hex_digit,
    STATE(57), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(198), 19,
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
  [2065] = 1,
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
  [2089] = 1,
    ACTIONS(230), 21,
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
  [2113] = 1,
    ACTIONS(232), 21,
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
  [2137] = 1,
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
  [2161] = 3,
    ACTIONS(236), 1,
      sym__hex_digit,
    STATE(57), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(158), 19,
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
  [2189] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(238), 20,
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
  [2215] = 1,
    ACTIONS(240), 21,
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
  [2239] = 1,
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
  [2263] = 1,
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
  [2287] = 1,
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
  [2311] = 3,
    ACTIONS(246), 1,
      aux_sym_relation_elements_token1,
    STATE(68), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(230), 19,
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
  [2339] = 1,
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
  [2363] = 3,
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
  [2391] = 1,
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
  [2415] = 3,
    STATE(176), 1,
      sym_order_direction,
    ACTIONS(257), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(255), 18,
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
  [2443] = 1,
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
  [2467] = 3,
    ACTIONS(223), 1,
      aux_sym_relation_elements_token1,
    STATE(68), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(261), 19,
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
  [2495] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(135), 1,
      sym_if_not_exist,
    STATE(282), 1,
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
  [2526] = 3,
    ACTIONS(88), 1,
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
  [2553] = 1,
    ACTIONS(238), 20,
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
  [2576] = 1,
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
  [2599] = 1,
    ACTIONS(273), 20,
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
  [2622] = 2,
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
  [2647] = 5,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    ACTIONS(186), 1,
      aux_sym_select_statement_token4,
    ACTIONS(188), 1,
      aux_sym_select_statement_token5,
    STATE(143), 1,
      sym_order_spec,
    ACTIONS(184), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2678] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(167), 1,
      sym_if_not_exist,
    STATE(254), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2709] = 15,
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
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(816), 1,
      sym_function_args,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(576), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2760] = 5,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    ACTIONS(289), 1,
      aux_sym_select_statement_token4,
    ACTIONS(291), 1,
      aux_sym_select_statement_token5,
    STATE(129), 1,
      sym_order_spec,
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
  [2791] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(130), 1,
      sym_if_not_exist,
    STATE(203), 1,
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
  [2822] = 1,
    ACTIONS(295), 20,
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
  [2845] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(144), 1,
      sym_if_not_exist,
    STATE(287), 1,
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
  [2876] = 1,
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
  [2899] = 5,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(267), 1,
      aux_sym_if_exist_token1,
    STATE(160), 1,
      sym_if_not_exist,
    STATE(220), 1,
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
  [2930] = 1,
    ACTIONS(301), 20,
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
  [2953] = 5,
    ACTIONS(176), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(134), 1,
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
  [2984] = 1,
    ACTIONS(303), 19,
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
  [3006] = 1,
    ACTIONS(305), 19,
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
  [3028] = 3,
    ACTIONS(307), 1,
      aux_sym_relation_elements_token1,
    STATE(94), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(230), 17,
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
  [3054] = 1,
    ACTIONS(310), 19,
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
  [3076] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(291), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3104] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(226), 2,
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
  [3130] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(200), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(316), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3156] = 3,
    STATE(305), 1,
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
  [3182] = 3,
    STATE(250), 1,
      sym_user_super_user,
    ACTIONS(320), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3208] = 3,
    ACTIONS(326), 1,
      aux_sym_relation_elements_token1,
    STATE(121), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(324), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3234] = 3,
    ACTIONS(328), 1,
      aux_sym_relation_elements_token1,
    STATE(107), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(221), 17,
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
  [3260] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(201), 2,
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
  [3286] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(257), 2,
      sym_if_exist,
      sym_if_spec,
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
  [3312] = 1,
    ACTIONS(334), 19,
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
  [3334] = 1,
    ACTIONS(336), 19,
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
  [3356] = 3,
    ACTIONS(328), 1,
      aux_sym_relation_elements_token1,
    STATE(94), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(261), 17,
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
  [3382] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(340), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3410] = 3,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(342), 17,
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
  [3436] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(253), 2,
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
  [3462] = 1,
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
  [3484] = 4,
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
  [3512] = 1,
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
  [3534] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(359), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3562] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(263), 2,
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
  [3588] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(188), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(184), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3616] = 1,
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
  [3638] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(229), 2,
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
  [3664] = 2,
    ACTIONS(369), 1,
      aux_sym_priviledge_token2,
    ACTIONS(367), 18,
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
  [3688] = 3,
    ACTIONS(373), 1,
      aux_sym_relation_elements_token1,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(371), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3714] = 3,
    ACTIONS(326), 1,
      aux_sym_relation_elements_token1,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(376), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3740] = 1,
    ACTIONS(378), 19,
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
  [3762] = 3,
    STATE(216), 1,
      sym_user_super_user,
    ACTIONS(320), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3788] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(291), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3814] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(233), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3840] = 1,
    ACTIONS(386), 19,
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
  [3862] = 3,
    ACTIONS(314), 1,
      aux_sym_if_exist_token1,
    STATE(298), 2,
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
  [3888] = 3,
    ACTIONS(392), 1,
      aux_sym_create_keyspace_token1,
    STATE(243), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3913] = 3,
    ACTIONS(359), 1,
      aux_sym_select_statement_token5,
    ACTIONS(394), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3938] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(282), 1,
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
  [3963] = 3,
    ACTIONS(398), 1,
      aux_sym_relation_elements_token1,
    STATE(131), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3988] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(401), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4013] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(405), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4038] = 3,
    ACTIONS(186), 1,
      aux_sym_select_statement_token4,
    ACTIONS(188), 1,
      aux_sym_select_statement_token5,
    ACTIONS(184), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4063] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(254), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4088] = 13,
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
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(939), 1,
      sym_function_args,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(576), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4133] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(407), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4158] = 3,
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
  [4183] = 1,
    ACTIONS(411), 18,
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
  [4204] = 3,
    ACTIONS(392), 1,
      aux_sym_create_keyspace_token1,
    STATE(307), 1,
      sym_with_element,
    ACTIONS(413), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4229] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(415), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [4275] = 3,
    ACTIONS(289), 1,
      aux_sym_select_statement_token4,
    ACTIONS(291), 1,
      aux_sym_select_statement_token5,
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
  [4300] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(203), 1,
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
  [4325] = 1,
    ACTIONS(371), 18,
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
  [4346] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4371] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4392] = 2,
    ACTIONS(430), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4415] = 2,
    ACTIONS(432), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4438] = 1,
    ACTIONS(367), 18,
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
  [4459] = 3,
    ACTIONS(392), 1,
      aux_sym_create_keyspace_token1,
    STATE(288), 1,
      sym_with_element,
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
  [4484] = 3,
    ACTIONS(392), 1,
      aux_sym_create_keyspace_token1,
    STATE(215), 1,
      sym_with_element,
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
  [4509] = 1,
    ACTIONS(438), 18,
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
  [4530] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_type_member_column_list_repeat1,
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
  [4555] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_type_member_column_list_repeat1,
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
  [4580] = 3,
    ACTIONS(446), 1,
      aux_sym_relation_elements_token1,
    STATE(159), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4605] = 1,
    ACTIONS(448), 18,
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
  [4626] = 1,
    ACTIONS(450), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4647] = 3,
    ACTIONS(454), 1,
      aux_sym_relation_elements_token1,
    STATE(159), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(452), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4672] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(318), 1,
      sym_using_ttl_timestamp,
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
  [4697] = 1,
    ACTIONS(459), 18,
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
  [4718] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_role_with_repeat1,
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
  [4743] = 1,
    ACTIONS(463), 18,
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
  [4764] = 3,
    ACTIONS(467), 1,
      aux_sym_create_keyspace_token1,
    STATE(248), 1,
      sym_role_with,
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
  [4789] = 3,
    ACTIONS(471), 1,
      aux_sym_list_roles_token2,
    ACTIONS(473), 1,
      aux_sym_list_roles_token3,
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
  [4814] = 3,
    ACTIONS(467), 1,
      aux_sym_create_keyspace_token1,
    STATE(303), 1,
      sym_role_with,
    ACTIONS(475), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4839] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(220), 1,
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
  [4864] = 3,
    ACTIONS(446), 1,
      aux_sym_relation_elements_token1,
    STATE(156), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4889] = 3,
    ACTIONS(481), 1,
      aux_sym_relation_elements_token1,
    STATE(131), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4914] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(170), 1,
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
  [4939] = 1,
    ACTIONS(486), 18,
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
  [4960] = 3,
    ACTIONS(467), 1,
      aux_sym_create_keyspace_token1,
    STATE(268), 1,
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
  [4985] = 3,
    ACTIONS(481), 1,
      aux_sym_relation_elements_token1,
    STATE(169), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5010] = 3,
    ACTIONS(494), 1,
      aux_sym_clustering_order_token1,
    STATE(213), 1,
      sym_clustering_order,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5035] = 3,
    ACTIONS(498), 1,
      aux_sym_create_index_token3,
    ACTIONS(500), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5060] = 1,
    ACTIONS(502), 18,
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
  [5081] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_column_list_repeat1,
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
  [5106] = 1,
    ACTIONS(506), 17,
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
  [5126] = 1,
    ACTIONS(508), 17,
      ts_builtin_sym_end,
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
  [5146] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_0X,
    ACTIONS(512), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(53), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5188] = 2,
    ACTIONS(516), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5210] = 13,
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
    STATE(453), 1,
      sym_constant,
    STATE(761), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5254] = 2,
    ACTIONS(520), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5276] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5296] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(512), 1,
      sym_object_name,
    ACTIONS(522), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(53), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5338] = 1,
    ACTIONS(524), 17,
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
  [5358] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5380] = 1,
    ACTIONS(528), 17,
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
  [5400] = 1,
    ACTIONS(396), 17,
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
  [5420] = 2,
    ACTIONS(532), 1,
      aux_sym_list_roles_token3,
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
  [5442] = 2,
    ACTIONS(536), 1,
      aux_sym_list_roles_token2,
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
  [5464] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
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
  [5486] = 2,
    ACTIONS(540), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5508] = 1,
    ACTIONS(415), 17,
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
  [5528] = 1,
    ACTIONS(542), 17,
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
  [5548] = 1,
    ACTIONS(526), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5568] = 1,
    ACTIONS(544), 17,
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
  [5588] = 12,
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
    ACTIONS(213), 1,
      sym__hex_4digit,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_object_name,
    STATE(8), 1,
      aux_sym__decimal_literal,
    ACTIONS(211), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(660), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5630] = 1,
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
  [5649] = 1,
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
  [5668] = 1,
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
  [5687] = 1,
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
  [5706] = 1,
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
  [5725] = 1,
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
  [5744] = 2,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(554), 15,
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
  [5765] = 1,
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
  [5784] = 1,
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
  [5803] = 1,
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
  [5822] = 12,
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
    ACTIONS(522), 1,
      anon_sym_0X,
    ACTIONS(562), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(67), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5863] = 1,
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
  [5882] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5901] = 1,
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
  [5920] = 1,
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
  [5939] = 1,
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
  [5958] = 1,
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
  [5977] = 1,
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
  [5996] = 1,
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
  [6015] = 1,
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
  [6034] = 1,
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
  [6053] = 1,
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
  [6072] = 1,
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
  [6091] = 1,
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
  [6110] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6129] = 1,
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
  [6148] = 1,
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
  [6167] = 1,
    ACTIONS(316), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6186] = 1,
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
  [6205] = 1,
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
  [6224] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6243] = 1,
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
  [6262] = 1,
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
  [6281] = 1,
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
  [6300] = 1,
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
  [6319] = 1,
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
  [6338] = 1,
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
  [6357] = 1,
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
  [6376] = 1,
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
  [6395] = 1,
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
  [6414] = 1,
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
  [6433] = 1,
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
  [6452] = 1,
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
  [6471] = 1,
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
  [6490] = 1,
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
  [6509] = 1,
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
  [6528] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6547] = 1,
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
  [6566] = 1,
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
  [6585] = 1,
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
  [6604] = 1,
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
  [6623] = 1,
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
  [6642] = 1,
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
  [6661] = 1,
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
  [6680] = 1,
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
  [6699] = 1,
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
  [6718] = 1,
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
  [6737] = 1,
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
  [6756] = 1,
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
  [6775] = 1,
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
  [6794] = 1,
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
  [6813] = 1,
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
  [6832] = 1,
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
  [6851] = 1,
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
  [6870] = 1,
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
  [6889] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6908] = 1,
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
  [6927] = 1,
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
  [6946] = 1,
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
  [6965] = 1,
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
  [6984] = 1,
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
  [7003] = 1,
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
  [7022] = 1,
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
  [7041] = 1,
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
  [7060] = 1,
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
  [7079] = 1,
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
  [7098] = 1,
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
  [7117] = 1,
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
  [7136] = 1,
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
  [7155] = 1,
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
  [7174] = 1,
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
  [7193] = 1,
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
  [7212] = 1,
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
  [7231] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7250] = 1,
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
  [7269] = 1,
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
  [7288] = 1,
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
  [7307] = 1,
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
  [7326] = 1,
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
  [7345] = 1,
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
  [7364] = 1,
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
  [7383] = 1,
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
  [7402] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7421] = 1,
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
  [7440] = 1,
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
  [7459] = 1,
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
  [7478] = 1,
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
  [7497] = 1,
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
  [7516] = 12,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    ACTIONS(702), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(67), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7557] = 1,
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
  [7576] = 1,
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
  [7595] = 1,
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
  [7614] = 1,
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
  [7633] = 1,
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
  [7652] = 1,
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
  [7671] = 1,
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
  [7690] = 1,
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
  [7709] = 1,
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
  [7728] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7747] = 1,
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
  [7766] = 1,
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
  [7785] = 1,
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
  [7804] = 1,
    ACTIONS(184), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7823] = 1,
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
  [7842] = 1,
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
  [7861] = 1,
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
  [7880] = 1,
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
  [7899] = 1,
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
  [7918] = 12,
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
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(444), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7959] = 1,
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
  [7978] = 1,
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
  [7997] = 1,
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
  [8016] = 11,
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
    ACTIONS(522), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(53), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8054] = 11,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    STATE(8), 1,
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
  [8092] = 11,
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
    STATE(375), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8130] = 11,
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
    STATE(453), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8168] = 11,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(163), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8206] = 11,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(53), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8244] = 11,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    STATE(8), 1,
      aux_sym__decimal_literal,
    STATE(178), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8282] = 11,
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
    STATE(731), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8320] = 11,
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
    ACTIONS(522), 1,
      anon_sym_0X,
    STATE(8), 1,
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
  [8358] = 11,
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
    STATE(682), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8396] = 11,
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
    ACTIONS(522), 1,
      anon_sym_0X,
    STATE(8), 1,
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
  [8434] = 1,
    ACTIONS(744), 15,
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
  [8452] = 11,
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
    ACTIONS(510), 1,
      anon_sym_0X,
    STATE(8), 1,
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
  [8490] = 11,
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
    STATE(639), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8528] = 11,
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
    STATE(908), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8566] = 11,
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
    STATE(578), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8604] = 4,
    ACTIONS(748), 1,
      aux_sym_priviledge_token1,
    ACTIONS(750), 1,
      aux_sym_resource_token5,
    STATE(175), 1,
      sym_priviledge,
    ACTIONS(746), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8624] = 3,
    ACTIONS(748), 1,
      aux_sym_priviledge_token1,
    STATE(1001), 1,
      sym_priviledge,
    ACTIONS(746), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8641] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(756), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(758), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(760), 1,
      aux_sym_index_full_spec_token1,
    STATE(994), 1,
      sym_index_column_spec,
    STATE(967), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8666] = 3,
    ACTIONS(748), 1,
      aux_sym_priviledge_token1,
    STATE(996), 1,
      sym_priviledge,
    ACTIONS(746), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8683] = 10,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_truncate_token2,
    ACTIONS(768), 1,
      aux_sym_priviledge_token1,
    ACTIONS(770), 1,
      aux_sym_resource_token2,
    ACTIONS(772), 1,
      aux_sym_resource_token3,
    ACTIONS(774), 1,
      aux_sym_resource_token6,
    STATE(93), 1,
      sym_table,
    STATE(776), 1,
      sym_keyspace,
    STATE(945), 1,
      sym_resource,
  [8714] = 10,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_truncate_token2,
    ACTIONS(768), 1,
      aux_sym_priviledge_token1,
    ACTIONS(770), 1,
      aux_sym_resource_token2,
    ACTIONS(772), 1,
      aux_sym_resource_token3,
    ACTIONS(774), 1,
      aux_sym_resource_token6,
    STATE(93), 1,
      sym_table,
    STATE(776), 1,
      sym_keyspace,
    STATE(910), 1,
      sym_resource,
  [8745] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(756), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(758), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(760), 1,
      aux_sym_index_full_spec_token1,
    STATE(826), 1,
      sym_index_column_spec,
    STATE(967), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8770] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 1,
      sym__dec_digit,
    STATE(44), 1,
      aux_sym__decimal_literal,
    STATE(147), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(153), 2,
      sym_option_hash,
      sym_table_option_value,
  [8797] = 6,
    ACTIONS(780), 1,
      aux_sym_drop_index_token1,
    ACTIONS(782), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(784), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(786), 1,
      aux_sym_alter_table_rename_token1,
    STATE(300), 1,
      sym_alter_table_operation,
    STATE(301), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8820] = 6,
    ACTIONS(780), 1,
      aux_sym_drop_index_token1,
    ACTIONS(782), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(784), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(786), 1,
      aux_sym_alter_table_rename_token1,
    STATE(231), 1,
      sym_alter_table_operation,
    STATE(301), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8843] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(756), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(758), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(760), 1,
      aux_sym_index_full_spec_token1,
    STATE(961), 1,
      sym_index_column_spec,
    STATE(967), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8868] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(756), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(758), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(760), 1,
      aux_sym_index_full_spec_token1,
    STATE(815), 1,
      sym_index_column_spec,
    STATE(967), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8893] = 10,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(766), 1,
      aux_sym_truncate_token2,
    ACTIONS(768), 1,
      aux_sym_priviledge_token1,
    ACTIONS(770), 1,
      aux_sym_resource_token2,
    ACTIONS(772), 1,
      aux_sym_resource_token3,
    ACTIONS(774), 1,
      aux_sym_resource_token6,
    STATE(93), 1,
      sym_table,
    STATE(191), 1,
      sym_resource,
    STATE(776), 1,
      sym_keyspace,
  [8924] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(756), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(758), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(760), 1,
      aux_sym_index_full_spec_token1,
    STATE(878), 1,
      sym_index_column_spec,
    STATE(967), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8949] = 7,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(719), 1,
      sym_column,
    STATE(873), 1,
      sym_primary_key_definition,
    STATE(875), 1,
      sym_partition_key,
    STATE(874), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [8973] = 3,
    ACTIONS(790), 1,
      sym__hex_digit,
    STATE(357), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(158), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [8989] = 6,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      aux_sym_relation_element_token1,
    ACTIONS(802), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(798), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(796), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9011] = 6,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      aux_sym_relation_element_token1,
    ACTIONS(804), 1,
      anon_sym_DOT,
    ACTIONS(810), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(808), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(806), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9033] = 9,
    ACTIONS(812), 1,
      aux_sym_truncate_token2,
    ACTIONS(814), 1,
      aux_sym_create_index_token2,
    ACTIONS(816), 1,
      aux_sym_resource_token2,
    ACTIONS(818), 1,
      aux_sym_resource_token3,
    ACTIONS(820), 1,
      aux_sym_resource_token6,
    ACTIONS(822), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(824), 1,
      aux_sym_drop_type_token1,
    ACTIONS(826), 1,
      aux_sym_drop_user_token1,
    ACTIONS(828), 1,
      aux_sym_create_function_token1,
  [9061] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(830), 1,
      sym_object_name,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(834), 1,
      sym__dquote,
    STATE(188), 1,
      sym__string_literal,
    STATE(312), 1,
      sym_index_name,
    STATE(366), 1,
      sym_if_exist,
    STATE(884), 1,
      sym_keyspace,
  [9089] = 3,
    ACTIONS(836), 1,
      sym__hex_digit,
    STATE(357), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(198), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [9105] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      sym_object_name,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(843), 1,
      aux_sym_create_index_token3,
    STATE(188), 1,
      sym__string_literal,
    STATE(380), 1,
      sym_if_not_exist,
    STATE(933), 1,
      sym_index_name,
  [9130] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(778), 1,
      sym__dec_digit,
    STATE(44), 1,
      aux_sym__decimal_literal,
    STATE(893), 2,
      sym__string_literal,
      sym__float_literal,
  [9150] = 6,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      sym_object_name,
    STATE(90), 1,
      sym_relation_elements,
    STATE(102), 1,
      sym_relation_element,
    STATE(425), 1,
      sym_function_call,
    STATE(61), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9170] = 5,
    ACTIONS(849), 1,
      aux_sym_priviledge_token3,
    ACTIONS(851), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(853), 1,
      aux_sym_alter_table_rename_token1,
    STATE(242), 1,
      sym_alter_type_operation,
    STATE(309), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9188] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(855), 1,
      sym__dec_digit,
    STATE(438), 1,
      aux_sym__decimal_literal,
    STATE(768), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [9206] = 7,
    ACTIONS(857), 1,
      aux_sym_truncate_token2,
    ACTIONS(859), 1,
      aux_sym_create_index_token2,
    ACTIONS(861), 1,
      aux_sym_resource_token2,
    ACTIONS(863), 1,
      aux_sym_resource_token3,
    ACTIONS(865), 1,
      aux_sym_resource_token6,
    ACTIONS(867), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(869), 1,
      aux_sym_drop_user_token1,
  [9228] = 7,
    ACTIONS(871), 1,
      aux_sym_select_statement_token2,
    ACTIONS(873), 1,
      aux_sym_select_statement_token3,
    ACTIONS(875), 1,
      anon_sym_STAR,
    ACTIONS(877), 1,
      sym_object_name,
    STATE(510), 1,
      sym_select_element,
    STATE(513), 1,
      sym_function_call,
    STATE(650), 1,
      sym_select_elements,
  [9250] = 6,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      sym_object_name,
    STATE(56), 1,
      sym_relation_element,
    STATE(90), 1,
      sym_relation_elements,
    STATE(411), 1,
      sym_function_call,
    STATE(61), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9270] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(830), 1,
      sym_object_name,
    ACTIONS(834), 1,
      sym__dquote,
    STATE(188), 1,
      sym__string_literal,
    STATE(265), 1,
      sym_index_name,
    STATE(876), 1,
      sym_keyspace,
  [9292] = 5,
    ACTIONS(849), 1,
      aux_sym_priviledge_token3,
    ACTIONS(851), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(853), 1,
      aux_sym_alter_table_rename_token1,
    STATE(308), 1,
      sym_alter_type_operation,
    STATE(309), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [9310] = 2,
    ACTIONS(883), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(881), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [9321] = 6,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(286), 1,
      sym_function,
    STATE(445), 1,
      sym_if_exist,
    STATE(877), 1,
      sym_keyspace,
  [9340] = 6,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(502), 1,
      sym_if_not_exist,
    STATE(903), 1,
      sym_type,
    STATE(904), 1,
      sym_keyspace,
  [9359] = 6,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(889), 1,
      sym_object_name,
    STATE(470), 1,
      sym_if_exist,
    STATE(868), 1,
      sym_trigger,
    STATE(871), 1,
      sym_keyspace,
  [9378] = 6,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    STATE(319), 1,
      sym_table,
    STATE(473), 1,
      sym_if_exist,
    STATE(886), 1,
      sym_keyspace,
  [9397] = 6,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(489), 1,
      sym_if_not_exist,
    STATE(919), 1,
      sym_function,
    STATE(923), 1,
      sym_keyspace,
  [9416] = 6,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(889), 1,
      sym_object_name,
    STATE(496), 1,
      sym_if_not_exist,
    STATE(906), 1,
      sym_trigger,
    STATE(909), 1,
      sym_keyspace,
  [9435] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(610), 1,
      aux_sym_relation_element_repeat2,
    STATE(611), 1,
      sym_assignment_tuple,
  [9454] = 5,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      sym_object_name,
    STATE(59), 1,
      sym_relation_element,
    STATE(411), 1,
      sym_function_call,
    STATE(61), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9471] = 6,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    STATE(471), 1,
      sym_if_not_exist,
    STATE(936), 1,
      sym_table,
    STATE(943), 1,
      sym_keyspace,
  [9490] = 6,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(895), 1,
      sym_object_name,
    STATE(278), 1,
      sym_user,
    STATE(450), 1,
      sym_if_exist,
    STATE(865), 1,
      sym_keyspace,
  [9509] = 5,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      sym_object_name,
    STATE(59), 1,
      sym_relation_element,
    STATE(425), 1,
      sym_function_call,
    STATE(61), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [9526] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      sym_object_name,
    ACTIONS(897), 1,
      aux_sym_create_index_token3,
    STATE(188), 1,
      sym__string_literal,
    STATE(806), 1,
      sym_index_name,
  [9545] = 6,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(479), 1,
      sym_if_not_exist,
    STATE(840), 1,
      sym_keyspace,
    STATE(965), 1,
      sym_function,
  [9564] = 6,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(899), 1,
      aux_sym_primary_key_column_token1,
    STATE(26), 1,
      sym_column,
    STATE(653), 1,
      sym_column_definition,
    STATE(1018), 1,
      sym_primary_key_element,
  [9583] = 6,
    ACTIONS(875), 1,
      anon_sym_STAR,
    ACTIONS(877), 1,
      sym_object_name,
    ACTIONS(901), 1,
      aux_sym_select_statement_token3,
    STATE(510), 1,
      sym_select_element,
    STATE(513), 1,
      sym_function_call,
    STATE(667), 1,
      sym_select_elements,
  [9602] = 6,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    ACTIONS(899), 1,
      aux_sym_primary_key_column_token1,
    STATE(26), 1,
      sym_column,
    STATE(653), 1,
      sym_column_definition,
    STATE(820), 1,
      sym_primary_key_element,
  [9621] = 2,
    ACTIONS(905), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(903), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [9632] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      sym_object_name,
    STATE(188), 1,
      sym__string_literal,
    STATE(218), 1,
      sym_index_name,
  [9648] = 5,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(541), 1,
      sym_if_not_exist,
    STATE(931), 1,
      sym_keyspace,
  [9664] = 1,
    ACTIONS(909), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9672] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(911), 1,
      sym__dec_digit,
    STATE(579), 1,
      aux_sym__decimal_literal,
    STATE(811), 1,
      sym__string_literal,
  [9688] = 5,
    ACTIONS(913), 1,
      sym_object_name,
    ACTIONS(915), 1,
      aux_sym_from_spec_token1,
    STATE(465), 1,
      sym_from_spec,
    STATE(518), 1,
      sym_delete_column_item,
    STATE(654), 1,
      sym_delete_column_list,
  [9704] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(917), 4,
      anon_sym_LPAREN,
      aux_sym_priviledge_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [9714] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(600), 1,
      sym_replication_list_item,
    STATE(794), 1,
      sym_replication_list,
    STATE(802), 1,
      sym__string_literal,
  [9730] = 5,
    ACTIONS(875), 1,
      anon_sym_STAR,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(510), 1,
      sym_select_element,
    STATE(513), 1,
      sym_function_call,
    STATE(739), 1,
      sym_select_elements,
  [9746] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(85), 1,
      sym_insert_values_spec,
    STATE(559), 1,
      sym_insert_column_spec,
  [9762] = 5,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    ACTIONS(927), 1,
      aux_sym_truncate_token2,
    STATE(224), 1,
      sym_table,
    STATE(1007), 1,
      sym_keyspace,
  [9778] = 5,
    ACTIONS(913), 1,
      sym_object_name,
    ACTIONS(915), 1,
      aux_sym_from_spec_token1,
    STATE(461), 1,
      sym_from_spec,
    STATE(518), 1,
      sym_delete_column_item,
    STATE(738), 1,
      sym_delete_column_list,
  [9794] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(600), 1,
      sym_replication_list_item,
    STATE(797), 1,
      sym_replication_list,
    STATE(802), 1,
      sym__string_literal,
  [9810] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      sym_object_name,
    STATE(188), 1,
      sym__string_literal,
    STATE(244), 1,
      sym_index_name,
  [9826] = 1,
    ACTIONS(929), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9834] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(82), 1,
      sym_insert_values_spec,
    STATE(613), 1,
      sym_insert_column_spec,
  [9850] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(536), 1,
      sym_clustering_key,
    STATE(686), 1,
      sym_column,
    STATE(940), 1,
      sym_clustering_key_list,
  [9866] = 5,
    ACTIONS(931), 1,
      aux_sym_truncate_token2,
    ACTIONS(933), 1,
      aux_sym_resource_token2,
    ACTIONS(935), 1,
      aux_sym_resource_token6,
    ACTIONS(937), 1,
      aux_sym_drop_type_token1,
    ACTIONS(939), 1,
      aux_sym_drop_user_token1,
  [9882] = 2,
    ACTIONS(943), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(941), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9892] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
    STATE(636), 1,
      sym_column_definition,
    STATE(1016), 1,
      sym_column_definition_list,
  [9908] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
    STATE(636), 1,
      sym_column_definition,
    STATE(819), 1,
      sym_column_definition_list,
  [9924] = 2,
    ACTIONS(947), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(945), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9934] = 1,
    ACTIONS(949), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9942] = 5,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(168), 1,
      sym_alter_type_rename_item,
    STATE(214), 1,
      sym_alter_type_rename_list,
    STATE(849), 1,
      sym_column,
  [9958] = 5,
    ACTIONS(875), 1,
      anon_sym_STAR,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(510), 1,
      sym_select_element,
    STATE(513), 1,
      sym_function_call,
    STATE(667), 1,
      sym_select_elements,
  [9974] = 4,
    ACTIONS(955), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(959), 1,
      aux_sym_role_with_options_token4,
    STATE(162), 1,
      sym_role_with_options,
    ACTIONS(957), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [9988] = 2,
    ACTIONS(963), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(961), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9998] = 1,
    ACTIONS(965), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10006] = 4,
    ACTIONS(955), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(959), 1,
      aux_sym_role_with_options_token4,
    STATE(194), 1,
      sym_role_with_options,
    ACTIONS(957), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [10020] = 4,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_DOT,
    ACTIONS(971), 1,
      aux_sym_select_element_token1,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10034] = 5,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    ACTIONS(973), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(177), 1,
      sym_column,
    STATE(227), 1,
      sym_alter_table_drop_column_list,
  [10050] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
    STATE(636), 1,
      sym_column_definition,
    STATE(1000), 1,
      sym_column_definition_list,
  [10066] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(975), 1,
      sym__dec_digit,
    STATE(492), 1,
      aux_sym__decimal_literal,
    STATE(716), 1,
      sym__string_literal,
  [10082] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
    STATE(508), 1,
      sym_insert_column_spec,
  [10098] = 3,
    ACTIONS(979), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(530), 1,
      sym_using_timestamp_spec,
    ACTIONS(977), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10110] = 1,
    ACTIONS(981), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10118] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(600), 1,
      sym_replication_list_item,
    STATE(802), 1,
      sym__string_literal,
    STATE(832), 1,
      sym_replication_list,
  [10134] = 1,
    ACTIONS(983), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10142] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
    STATE(636), 1,
      sym_column_definition,
    STATE(990), 1,
      sym_column_definition_list,
  [10158] = 3,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(988), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10170] = 2,
    ACTIONS(992), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(990), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10180] = 5,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(293), 1,
      sym_keyspace,
    STATE(557), 1,
      sym_if_exist,
  [10196] = 3,
    ACTIONS(979), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(588), 1,
      sym_using_timestamp_spec,
    ACTIONS(994), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10208] = 2,
    ACTIONS(996), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(544), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [10218] = 1,
    ACTIONS(998), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [10226] = 5,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(87), 1,
      sym_insert_values_spec,
    STATE(590), 1,
      sym_insert_column_spec,
  [10242] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(536), 1,
      sym_clustering_key,
    STATE(686), 1,
      sym_column,
    STATE(973), 1,
      sym_clustering_key_list,
  [10258] = 5,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(545), 1,
      sym_partition_key,
    STATE(698), 1,
      sym_column,
    STATE(914), 1,
      sym_partition_key_list,
  [10274] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(985), 1,
      sym_table,
    STATE(987), 1,
      sym_keyspace,
  [10287] = 3,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(956), 1,
      sym_order_direction,
    ACTIONS(257), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [10298] = 4,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1002), 1,
      sym_object_name,
    STATE(700), 1,
      sym_if_not_exist,
    STATE(777), 1,
      sym_user,
  [10311] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [10324] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
    STATE(468), 1,
      aux_sym_update_repeat1,
  [10337] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [10348] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(117), 1,
      sym_table,
    STATE(801), 1,
      sym_keyspace,
  [10361] = 4,
    ACTIONS(841), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(164), 1,
      sym_role,
    STATE(694), 1,
      sym_if_not_exist,
  [10374] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(673), 1,
      sym_clustering_key,
    STATE(686), 1,
      sym_column,
  [10387] = 2,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1014), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10396] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(463), 1,
      aux_sym_update_repeat1,
  [10409] = 4,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
    STATE(607), 1,
      aux_sym_assignment_tuple_repeat1,
  [10422] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(269), 1,
      sym_function,
    STATE(879), 1,
      sym_keyspace,
  [10435] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(499), 1,
      aux_sym_update_repeat1,
  [10448] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(302), 1,
      sym_table,
    STATE(917), 1,
      sym_keyspace,
  [10461] = 4,
    ACTIONS(1022), 1,
      sym_object_name,
    ACTIONS(1024), 1,
      aux_sym_if_exist_token2,
    STATE(173), 1,
      sym_if_condition,
    STATE(296), 1,
      sym_if_condition_list,
  [10474] = 1,
    ACTIONS(1026), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10481] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(895), 1,
      sym_object_name,
    STATE(277), 1,
      sym_user,
    STATE(888), 1,
      sym_keyspace,
  [10494] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(292), 1,
      sym_table,
    STATE(955), 1,
      sym_keyspace,
  [10507] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(117), 1,
      sym_function,
    STATE(808), 1,
      sym_keyspace,
  [10520] = 1,
    ACTIONS(988), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10527] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(642), 1,
      sym_column,
    STATE(1012), 1,
      sym_column_list,
  [10540] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(104), 1,
      sym_where_spec,
    STATE(456), 1,
      aux_sym_update_repeat1,
  [10553] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [10566] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(430), 1,
      sym_table,
    STATE(960), 1,
      sym_keyspace,
  [10579] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(118), 1,
      sym_where_spec,
    STATE(436), 1,
      aux_sym_update_repeat1,
  [10592] = 4,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_function_args_repeat1,
  [10605] = 4,
    ACTIONS(832), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(283), 1,
      sym_role,
    STATE(718), 1,
      sym_if_exist,
  [10618] = 4,
    ACTIONS(979), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
    STATE(764), 1,
      sym_using_timestamp_spec,
  [10631] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(680), 1,
      sym_partition_key,
    STATE(698), 1,
      sym_column,
  [10644] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(104), 1,
      sym_where_spec,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [10657] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(222), 1,
      sym_table,
    STATE(842), 1,
      sym_keyspace,
  [10670] = 4,
    ACTIONS(979), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(97), 1,
      sym_where_spec,
    STATE(674), 1,
      sym_using_timestamp_spec,
  [10683] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(715), 1,
      sym_replication_list_item,
    STATE(802), 1,
      sym__string_literal,
  [10696] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(948), 1,
      sym_type_member_column_list,
  [10709] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [10722] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(259), 1,
      sym__string_literal,
    STATE(316), 1,
      sym_trigger_class,
  [10735] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(889), 1,
      sym_object_name,
    STATE(881), 1,
      sym_keyspace,
    STATE(883), 1,
      sym_trigger,
  [10748] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(778), 1,
      sym_table,
    STATE(780), 1,
      sym_keyspace,
  [10761] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(789), 1,
      sym_keyspace,
    STATE(796), 1,
      sym_table,
  [10774] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(262), 1,
      sym_table,
    STATE(774), 1,
      sym_keyspace,
  [10787] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(703), 1,
      sym_option_hash_item,
    STATE(775), 1,
      sym__string_literal,
  [10800] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
    STATE(653), 1,
      sym_column_definition,
  [10813] = 4,
    ACTIONS(1032), 1,
      sym_object_name,
    STATE(101), 1,
      sym_table_option_item,
    STATE(225), 1,
      sym_table_options,
    STATE(835), 1,
      sym_table_option_name,
  [10826] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(33), 1,
      sym_column,
    STATE(221), 1,
      sym_alter_table_column_definition,
  [10839] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(596), 1,
      sym_option_hash_item,
    STATE(775), 1,
      sym__string_literal,
  [10852] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(861), 1,
      sym_keyspace,
    STATE(937), 1,
      sym_function,
  [10865] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(234), 1,
      sym_table,
    STATE(784), 1,
      sym_keyspace,
  [10878] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(345), 1,
      sym_table,
    STATE(855), 1,
      sym_keyspace,
  [10891] = 3,
    ACTIONS(1036), 1,
      aux_sym_primary_key_column_token1,
    STATE(647), 1,
      sym_primary_key_column,
    ACTIONS(1034), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10902] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(779), 1,
      sym_type_member_column_list,
  [10915] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(394), 1,
      sym_table,
    STATE(954), 1,
      sym_keyspace,
  [10928] = 4,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(184), 1,
      sym_alter_type_rename_item,
    STATE(849), 1,
      sym_column,
  [10941] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(880), 1,
      sym_type_member_column_list,
  [10954] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(256), 1,
      sym_trigger_class,
    STATE(259), 1,
      sym__string_literal,
  [10967] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(238), 1,
      sym_trigger_class,
    STATE(259), 1,
      sym__string_literal,
  [10980] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(885), 1,
      sym_object_name,
    STATE(827), 1,
      sym_keyspace,
    STATE(829), 1,
      sym_function,
  [10993] = 1,
    ACTIONS(917), 4,
      anon_sym_LPAREN,
      aux_sym_priviledge_token3,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
  [11000] = 4,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(24), 1,
      sym_column,
    STATE(845), 1,
      sym_type_member_column_list,
  [11013] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(1038), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11024] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 1,
      sym_trigger_class,
    STATE(259), 1,
      sym__string_literal,
  [11037] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(524), 1,
      sym_table,
    STATE(1005), 1,
      sym_keyspace,
  [11050] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(367), 1,
      sym_type,
    STATE(852), 1,
      sym_keyspace,
  [11063] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(889), 1,
      sym_object_name,
    STATE(841), 1,
      sym_keyspace,
    STATE(846), 1,
      sym_trigger,
  [11076] = 4,
    ACTIONS(979), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(103), 1,
      sym_where_spec,
    STATE(720), 1,
      sym_using_timestamp_spec,
  [11089] = 2,
    ACTIONS(1040), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [11098] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(127), 1,
      sym_where_spec,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [11111] = 4,
    ACTIONS(1042), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1044), 1,
      aux_sym_ttl_token1,
    STATE(148), 1,
      sym_ttl,
    STATE(149), 1,
      sym_timestamp,
  [11124] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(570), 1,
      sym_table,
    STATE(843), 1,
      sym_keyspace,
  [11137] = 4,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(853), 1,
      sym_keyspace,
    STATE(860), 1,
      sym_type,
  [11150] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(239), 1,
      sym_table,
    STATE(791), 1,
      sym_keyspace,
  [11163] = 4,
    ACTIONS(762), 1,
      sym_object_name,
    ACTIONS(764), 1,
      sym__dquote,
    STATE(952), 1,
      sym_keyspace,
    STATE(984), 1,
      sym_table,
  [11176] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_create_function_repeat1,
  [11186] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [11196] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(247), 1,
      sym_keyspace,
  [11206] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(82), 1,
      sym_insert_values_spec,
  [11216] = 3,
    ACTIONS(1052), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1054), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1056), 1,
      aux_sym_update_token1,
  [11226] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      aux_sym_from_spec_token1,
    STATE(527), 1,
      aux_sym_select_elements_repeat1,
  [11236] = 3,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(142), 1,
      sym_column,
  [11246] = 3,
    ACTIONS(1062), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_column_list_repeat1,
  [11256] = 2,
    ACTIONS(971), 1,
      aux_sym_select_element_token1,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11264] = 2,
    ACTIONS(1068), 1,
      anon_sym_LBRACK,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11272] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      aux_sym_expression_list_repeat1,
  [11282] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_create_function_repeat1,
  [11292] = 3,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_relation_element_repeat1,
  [11302] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      aux_sym_from_spec_token1,
    STATE(529), 1,
      aux_sym_delete_column_list_repeat1,
  [11312] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      aux_sym_function_args_repeat1,
  [11322] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(142), 1,
      sym_column,
  [11332] = 2,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(1087), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11340] = 3,
    ACTIONS(1089), 1,
      sym__hex_digit,
    ACTIONS(1092), 1,
      anon_sym_SQUOTE,
    STATE(522), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [11350] = 3,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_column_definition_list_repeat1,
  [11360] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1098), 1,
      aux_sym_update_token2,
    STATE(857), 1,
      sym_using_ttl_timestamp,
  [11370] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(854), 1,
      sym_keyspace,
  [11380] = 3,
    ACTIONS(919), 1,
      sym_object_name,
    STATE(513), 1,
      sym_function_call,
    STATE(744), 1,
      sym_select_element,
  [11390] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      aux_sym_from_spec_token1,
    STATE(574), 1,
      aux_sym_select_elements_repeat1,
  [11400] = 3,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_clustering_key_list_repeat1,
  [11410] = 3,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      aux_sym_from_spec_token1,
    STATE(586), 1,
      aux_sym_delete_column_list_repeat1,
  [11420] = 1,
    ACTIONS(994), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11426] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_clustering_key_list_repeat1,
  [11436] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(997), 1,
      sym_table,
  [11446] = 3,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_partition_key_list_repeat1,
  [11456] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(970), 1,
      sym_return_mode,
  [11466] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(235), 1,
      sym_table,
  [11476] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_clustering_key_list_repeat1,
  [11486] = 3,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(1130), 1,
      sym_object_name,
    STATE(632), 1,
      sym_param,
  [11496] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_partition_key_list_repeat1,
  [11506] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(978), 1,
      sym_return_mode,
  [11516] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      aux_sym_create_function_repeat1,
  [11526] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(817), 1,
      sym_keyspace,
  [11536] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [11546] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(951), 1,
      sym_return_mode,
  [11556] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(1138), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11564] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_partition_key_list_repeat1,
  [11574] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [11584] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(195), 1,
      sym__string_literal,
  [11594] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(434), 1,
      sym_column,
  [11604] = 3,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_assignment_map_repeat1,
  [11614] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [11624] = 2,
    ACTIONS(1153), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1151), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [11632] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      aux_sym_create_function_repeat1,
  [11642] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_option_hash_repeat1,
  [11652] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(924), 1,
      sym_return_mode,
  [11662] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1160), 1,
      aux_sym_update_token2,
    STATE(867), 1,
      sym_using_ttl_timestamp,
  [11672] = 3,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      aux_sym_replication_list_repeat1,
  [11682] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(267), 1,
      sym_keyspace,
  [11692] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      aux_sym_type_member_column_list_repeat1,
  [11702] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
  [11712] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(400), 1,
      sym_table,
  [11722] = 3,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_GT,
    STATE(561), 1,
      aux_sym_data_type_definition_repeat1,
  [11732] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_assignment_map_repeat1,
  [11742] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(614), 1,
      sym_table,
  [11752] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_relation_element_repeat2,
  [11762] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [11772] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(320), 1,
      sym_table,
  [11782] = 3,
    ACTIONS(1130), 1,
      sym_object_name,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_param,
  [11792] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_create_function_repeat1,
  [11802] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_option_hash_repeat1,
  [11812] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1186), 1,
      aux_sym_update_token2,
    STATE(957), 1,
      sym_using_ttl_timestamp,
  [11822] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [11832] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(887), 1,
      sym_return_mode,
  [11842] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(302), 1,
      sym_table,
  [11852] = 3,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      aux_sym_from_spec_token1,
    STATE(574), 1,
      aux_sym_select_elements_repeat1,
  [11862] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      aux_sym_replication_list_repeat1,
  [11872] = 3,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_function_args_repeat1,
  [11882] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_GT,
    STATE(561), 1,
      aux_sym_data_type_definition_repeat1,
  [11892] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    STATE(562), 1,
      aux_sym_assignment_map_repeat1,
  [11902] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1203), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [11912] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(92), 1,
      sym_table,
  [11922] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1205), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [11932] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [11942] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [11952] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      aux_sym_relation_element_repeat2,
  [11962] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      aux_sym_where_spec_token1,
    STATE(585), 1,
      aux_sym_update_repeat1,
  [11972] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      aux_sym_from_spec_token1,
    STATE(586), 1,
      aux_sym_delete_column_list_repeat1,
  [11982] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(122), 1,
      sym_table,
  [11992] = 1,
    ACTIONS(1226), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11998] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(418), 1,
      sym_table,
  [12008] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(85), 1,
      sym_insert_values_spec,
  [12018] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(285), 1,
      sym_table,
  [12028] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(295), 1,
      sym_table,
  [12038] = 3,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    ACTIONS(1130), 1,
      sym_object_name,
    STATE(568), 1,
      sym_param,
  [12048] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(992), 1,
      sym_table,
  [12058] = 3,
    ACTIONS(1032), 1,
      sym_object_name,
    STATE(145), 1,
      sym_table_option_item,
    STATE(835), 1,
      sym_table_option_name,
  [12068] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_option_hash_repeat1,
  [12078] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [12088] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(834), 1,
      sym_return_mode,
  [12098] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(276), 1,
      sym_column,
  [12108] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    STATE(575), 1,
      aux_sym_replication_list_repeat1,
  [12118] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_GT,
    STATE(577), 1,
      aux_sym_data_type_definition_repeat1,
  [12128] = 3,
    ACTIONS(1130), 1,
      sym_object_name,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym_param,
  [12138] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(217), 1,
      sym_table,
  [12148] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(186), 1,
      sym_column,
  [12158] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_expression_list_repeat1,
  [12168] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(158), 1,
      sym__string_literal,
  [12178] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RBRACE,
    STATE(424), 1,
      aux_sym_assignment_tuple_repeat1,
  [12188] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_assignment_tuple_repeat1,
  [12198] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_assignment_tuple_repeat1,
  [12208] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_relation_element_repeat2,
  [12218] = 3,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_relation_element_repeat2,
  [12228] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(246), 1,
      sym_table,
  [12238] = 3,
    ACTIONS(921), 1,
      aux_sym_select_statement_token3,
    ACTIONS(925), 1,
      aux_sym_insert_values_spec_token1,
    STATE(89), 1,
      sym_insert_values_spec,
  [12248] = 3,
    ACTIONS(265), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1247), 1,
      aux_sym_update_token2,
    STATE(782), 1,
      sym_using_ttl_timestamp,
  [12258] = 3,
    ACTIONS(1249), 1,
      aux_sym_resource_token1,
    ACTIONS(1251), 1,
      aux_sym_resource_token4,
    ACTIONS(1253), 1,
      aux_sym_resource_token5,
  [12268] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(117), 1,
      sym_keyspace,
  [12278] = 3,
    ACTIONS(834), 1,
      sym__dquote,
    ACTIONS(907), 1,
      sym_object_name,
    STATE(95), 1,
      sym_keyspace,
  [12288] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(346), 1,
      sym_table,
  [12298] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(773), 1,
      sym_column,
  [12308] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(234), 1,
      sym_table,
  [12318] = 3,
    ACTIONS(951), 1,
      sym_object_name,
    ACTIONS(953), 1,
      sym__dquote,
    STATE(848), 1,
      sym_column,
  [12328] = 3,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(32), 1,
      sym_column,
  [12338] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_type_member_column_list_repeat1,
  [12348] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(928), 1,
      sym_return_mode,
  [12358] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_relation_element_repeat1,
  [12368] = 3,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(1130), 1,
      sym_object_name,
    STATE(540), 1,
      sym_param,
  [12378] = 3,
    ACTIONS(752), 1,
      sym_object_name,
    ACTIONS(754), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
  [12388] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(555), 1,
      sym_table,
  [12398] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [12408] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_create_function_repeat1,
  [12418] = 3,
    ACTIONS(1130), 1,
      sym_object_name,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_param,
  [12428] = 3,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_create_function_repeat1,
  [12438] = 3,
    ACTIONS(1122), 1,
      aux_sym_create_function_token3,
    ACTIONS(1124), 1,
      aux_sym_return_mode_token1,
    STATE(795), 1,
      sym_return_mode,
  [12448] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(984), 1,
      sym_table,
  [12458] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(1003), 1,
      sym_table,
  [12468] = 3,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      aux_sym_column_definition_list_repeat1,
  [12478] = 3,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      aux_sym_column_list_repeat1,
  [12488] = 3,
    ACTIONS(1276), 1,
      sym__hex_digit,
    ACTIONS(1278), 1,
      anon_sym_SQUOTE,
    STATE(522), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [12498] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_RBRACK,
    STATE(608), 1,
      aux_sym_assignment_tuple_repeat1,
  [12508] = 3,
    ACTIONS(1113), 1,
      sym_object_name,
    ACTIONS(1115), 1,
      sym__dquote,
    STATE(805), 1,
      sym_table,
  [12518] = 3,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      aux_sym_function_args_repeat1,
  [12528] = 3,
    ACTIONS(1062), 1,
      anon_sym_COMMA,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_column_list_repeat1,
  [12538] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_column_definition_list_repeat1,
  [12548] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_expression_list_repeat1,
  [12558] = 3,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_relation_element_repeat1,
  [12568] = 2,
    ACTIONS(1002), 1,
      sym_object_name,
    STATE(228), 1,
      sym_user,
  [12575] = 1,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12580] = 2,
    ACTIONS(1022), 1,
      sym_object_name,
    STATE(189), 1,
      sym_if_condition,
  [12587] = 1,
    ACTIONS(1297), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [12592] = 2,
    ACTIONS(1299), 1,
      aux_sym_from_spec_token1,
    STATE(46), 1,
      sym_from_spec,
  [12599] = 1,
    ACTIONS(1301), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12604] = 2,
    ACTIONS(1303), 1,
      sym_object_name,
    STATE(64), 1,
      sym_from_spec_element,
  [12611] = 1,
    ACTIONS(1289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12616] = 2,
    ACTIONS(1299), 1,
      aux_sym_from_spec_token1,
    STATE(461), 1,
      sym_from_spec,
  [12623] = 2,
    ACTIONS(1305), 1,
      sym__hex_digit,
    STATE(43), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12630] = 2,
    ACTIONS(1307), 1,
      sym__hex_digit,
    STATE(62), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12637] = 1,
    ACTIONS(1309), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12642] = 2,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(139), 1,
      sym_order_spec_element,
  [12649] = 2,
    ACTIONS(1313), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [12656] = 1,
    ACTIONS(1087), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12661] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(166), 1,
      sym_role,
  [12668] = 2,
    ACTIONS(1002), 1,
      sym_object_name,
    STATE(851), 1,
      sym_user,
  [12675] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(251), 1,
      sym_code_block,
  [12682] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(260), 1,
      sym_code_block,
  [12689] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(995), 1,
      sym_language,
  [12696] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(261), 1,
      sym_code_block,
  [12703] = 2,
    ACTIONS(1299), 1,
      aux_sym_from_spec_token1,
    STATE(52), 1,
      sym_from_spec,
  [12710] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(991), 1,
      sym_language,
  [12717] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(272), 1,
      sym_code_block,
  [12724] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(986), 1,
      sym_language,
  [12731] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(274), 1,
      sym_code_block,
  [12738] = 2,
    ACTIONS(1042), 1,
      aux_sym_timestamp_token1,
    STATE(449), 1,
      sym_timestamp,
  [12745] = 1,
    ACTIONS(1105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12750] = 2,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(98), 1,
      sym_where_spec,
  [12757] = 2,
    ACTIONS(913), 1,
      sym_object_name,
    STATE(765), 1,
      sym_delete_column_item,
  [12764] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(979), 1,
      sym_language,
  [12771] = 1,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12776] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(279), 1,
      sym_code_block,
  [12783] = 1,
    ACTIONS(1092), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [12788] = 1,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12793] = 2,
    ACTIONS(1319), 1,
      sym__dec_digit,
    STATE(96), 1,
      aux_sym__decimal_literal,
  [12800] = 1,
    ACTIONS(1321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12805] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(937), 1,
      sym_function,
  [12812] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(284), 1,
      sym_code_block,
  [12819] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(964), 1,
      sym_language,
  [12826] = 1,
    ACTIONS(1325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12831] = 2,
    ACTIONS(1327), 1,
      aux_sym_role_with_options_token1,
    STATE(100), 1,
      sym_user_password,
  [12838] = 1,
    ACTIONS(1329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12843] = 2,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(290), 1,
      sym_code_block,
  [12850] = 1,
    ACTIONS(1260), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12855] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(944), 1,
      sym_language,
  [12862] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(783), 1,
      sym_function,
  [12869] = 2,
    ACTIONS(1331), 1,
      aux_sym_durable_writes_token1,
    STATE(294), 1,
      sym_durable_writes,
  [12876] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(172), 1,
      sym_role,
  [12883] = 1,
    ACTIONS(1333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12888] = 2,
    ACTIONS(1335), 1,
      sym_object_name,
    STATE(361), 1,
      sym_type,
  [12895] = 2,
    ACTIONS(1130), 1,
      sym_object_name,
    STATE(677), 1,
      sym_param,
  [12902] = 1,
    ACTIONS(1337), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12907] = 2,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym_option_hash,
  [12914] = 2,
    ACTIONS(1002), 1,
      sym_object_name,
    STATE(862), 1,
      sym_user,
  [12921] = 2,
    ACTIONS(1331), 1,
      aux_sym_durable_writes_token1,
    STATE(304), 1,
      sym_durable_writes,
  [12928] = 2,
    ACTIONS(1339), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [12935] = 1,
    ACTIONS(1158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12940] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(117), 1,
      sym_role,
  [12947] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(925), 1,
      sym_language,
  [12954] = 2,
    ACTIONS(1341), 1,
      sym__dec_digit,
    STATE(114), 1,
      aux_sym__decimal_literal,
  [12961] = 2,
    ACTIONS(1343), 1,
      sym__dec_digit,
    STATE(112), 1,
      aux_sym__decimal_literal,
  [12968] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(437), 1,
      sym_assignment_element,
  [12975] = 2,
    ACTIONS(1347), 1,
      anon_sym_EQ,
    ACTIONS(1349), 1,
      anon_sym_LBRACK,
  [12982] = 2,
    ACTIONS(1351), 1,
      sym__dec_digit,
    STATE(76), 1,
      aux_sym__decimal_literal,
  [12989] = 1,
    ACTIONS(1138), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [12994] = 2,
    ACTIONS(1002), 1,
      sym_object_name,
    STATE(236), 1,
      sym_user,
  [13001] = 2,
    ACTIONS(1331), 1,
      aux_sym_durable_writes_token1,
    STATE(310), 1,
      sym_durable_writes,
  [13008] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(792), 1,
      sym_trigger,
  [13015] = 1,
    ACTIONS(1165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13020] = 1,
    ACTIONS(1038), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13025] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(241), 1,
      sym_function,
  [13032] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(271), 1,
      sym_role,
  [13039] = 2,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [13046] = 2,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(115), 1,
      sym_where_spec,
  [13053] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(446), 1,
      sym_assignment_element,
  [13060] = 1,
    ACTIONS(1172), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13065] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(255), 1,
      sym_role,
  [13072] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(252), 1,
      sym_role,
  [13079] = 2,
    ACTIONS(1357), 1,
      sym__dec_digit,
    STATE(108), 1,
      aux_sym__decimal_literal,
  [13086] = 1,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13091] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(584), 1,
      sym_assignment_tuple,
  [13098] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(926), 1,
      sym_function,
  [13105] = 2,
    ACTIONS(1327), 1,
      aux_sym_role_with_options_token1,
    STATE(123), 1,
      sym_user_password,
  [13112] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(458), 1,
      sym_assignment_element,
  [13119] = 1,
    ACTIONS(1361), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13124] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(190), 1,
      sym_role,
  [13131] = 1,
    ACTIONS(1363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13136] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(896), 1,
      sym_trigger,
  [13143] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(314), 1,
      sym_role,
  [13150] = 2,
    ACTIONS(1335), 1,
      sym_object_name,
    STATE(882), 1,
      sym_type,
  [13157] = 2,
    ACTIONS(1335), 1,
      sym_object_name,
    STATE(850), 1,
      sym_type,
  [13164] = 2,
    ACTIONS(1299), 1,
      aux_sym_from_spec_token1,
    STATE(497), 1,
      sym_from_spec,
  [13171] = 2,
    ACTIONS(1299), 1,
      aux_sym_from_spec_token1,
    STATE(49), 1,
      sym_from_spec,
  [13178] = 2,
    ACTIONS(1317), 1,
      sym_object_name,
    STATE(892), 1,
      sym_language,
  [13185] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(872), 1,
      sym_trigger,
  [13192] = 2,
    ACTIONS(1327), 1,
      aux_sym_role_with_options_token1,
    STATE(99), 1,
      sym_user_password,
  [13199] = 1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13204] = 1,
    ACTIONS(1191), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13209] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(219), 1,
      sym_function,
  [13216] = 1,
    ACTIONS(1365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13221] = 2,
    ACTIONS(1353), 1,
      sym_object_name,
    STATE(844), 1,
      sym_trigger,
  [13228] = 1,
    ACTIONS(1367), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13233] = 2,
    ACTIONS(1369), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [13240] = 2,
    ACTIONS(1276), 1,
      sym__hex_digit,
    STATE(638), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [13247] = 2,
    ACTIONS(1371), 1,
      sym__hex_digit,
    STATE(352), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [13254] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(455), 1,
      sym_assignment_element,
  [13261] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(965), 1,
      sym_function,
  [13268] = 2,
    ACTIONS(1010), 1,
      sym_object_name,
    STATE(230), 1,
      sym_role,
  [13275] = 2,
    ACTIONS(1373), 1,
      sym__dec_digit,
    STATE(116), 1,
      aux_sym__decimal_literal,
  [13282] = 1,
    ACTIONS(1375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13287] = 1,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13292] = 1,
    ACTIONS(1219), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13297] = 1,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13302] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(761), 1,
      sym_assignment_tuple,
  [13309] = 1,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13314] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(564), 1,
      sym_assignment_tuple,
  [13321] = 2,
    ACTIONS(1379), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [13328] = 2,
    ACTIONS(1006), 1,
      aux_sym_where_spec_token1,
    STATE(103), 1,
      sym_where_spec,
  [13335] = 1,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13340] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(758), 1,
      sym_assignment_element,
  [13347] = 2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(122), 1,
      sym_function,
  [13354] = 1,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13359] = 2,
    ACTIONS(1381), 1,
      sym__dec_digit,
    STATE(581), 1,
      aux_sym__decimal_literal,
  [13366] = 2,
    ACTIONS(1042), 1,
      aux_sym_timestamp_token1,
    STATE(179), 1,
      sym_timestamp,
  [13373] = 2,
    ACTIONS(1044), 1,
      aux_sym_ttl_token1,
    STATE(179), 1,
      sym_ttl,
  [13380] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(443), 1,
      sym_assignment_element,
  [13387] = 1,
    ACTIONS(1383), 1,
      aux_sym_grant_token2,
  [13391] = 1,
    ACTIONS(1385), 1,
      anon_sym_DOT,
  [13395] = 1,
    ACTIONS(1387), 1,
      anon_sym_COLON,
  [13399] = 1,
    ACTIONS(1389), 1,
      anon_sym_DOT,
  [13403] = 1,
    ACTIONS(1391), 1,
      aux_sym_create_keyspace_token1,
  [13407] = 1,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
  [13411] = 1,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
  [13415] = 1,
    ACTIONS(1397), 1,
      anon_sym_DOT,
  [13419] = 1,
    ACTIONS(1399), 1,
      aux_sym_return_mode_token2,
  [13423] = 1,
    ACTIONS(1160), 1,
      aux_sym_update_token2,
  [13427] = 1,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
  [13431] = 1,
    ACTIONS(1403), 1,
      anon_sym_DOT,
  [13435] = 1,
    ACTIONS(1405), 1,
      aux_sym_if_exist_token2,
  [13439] = 1,
    ACTIONS(1407), 1,
      aux_sym_constant_token1,
  [13443] = 1,
    ACTIONS(1409), 1,
      sym_object_name,
  [13447] = 1,
    ACTIONS(1411), 1,
      anon_sym_DOLLAR_DOLLAR,
  [13451] = 1,
    ACTIONS(1413), 1,
      anon_sym_DOT,
  [13455] = 1,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
  [13459] = 1,
    ACTIONS(1417), 1,
      anon_sym_DOT,
  [13463] = 1,
    ACTIONS(1419), 1,
      aux_sym_create_index_token3,
  [13467] = 1,
    ACTIONS(1421), 1,
      aux_sym_resource_token2,
  [13471] = 1,
    ACTIONS(1423), 1,
      anon_sym_RBRACE,
  [13475] = 1,
    ACTIONS(1425), 1,
      aux_sym_create_function_token3,
  [13479] = 1,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
  [13483] = 1,
    ACTIONS(1429), 1,
      anon_sym_RBRACE,
  [13487] = 1,
    ACTIONS(1431), 1,
      aux_sym_select_statement_token6,
  [13491] = 1,
    ACTIONS(1433), 1,
      anon_sym_LBRACE,
  [13495] = 1,
    ACTIONS(1435), 1,
      sym__hex_4digit,
  [13499] = 1,
    ACTIONS(1437), 1,
      anon_sym_DOT,
  [13503] = 1,
    ACTIONS(1439), 1,
      anon_sym_COLON,
  [13507] = 1,
    ACTIONS(1441), 1,
      sym_object_name,
  [13511] = 1,
    ACTIONS(1443), 1,
      sym_object_name,
  [13515] = 1,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
  [13519] = 1,
    ACTIONS(1447), 1,
      aux_sym_create_index_token3,
  [13523] = 1,
    ACTIONS(1449), 1,
      aux_sym_create_keyspace_token2,
  [13527] = 1,
    ACTIONS(1451), 1,
      anon_sym_DOT,
  [13531] = 1,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
  [13535] = 1,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
  [13539] = 1,
    ACTIONS(1203), 1,
      anon_sym_RBRACK,
  [13543] = 1,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [13547] = 1,
    ACTIONS(1459), 1,
      aux_sym_order_spec_token2,
  [13551] = 1,
    ACTIONS(1461), 1,
      aux_sym_select_statement_token6,
  [13555] = 1,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
  [13559] = 1,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
  [13563] = 1,
    ACTIONS(1467), 1,
      aux_sym_create_keyspace_token1,
  [13567] = 1,
    ACTIONS(1469), 1,
      aux_sym_order_spec_token2,
  [13571] = 1,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [13575] = 1,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [13579] = 1,
    ACTIONS(1475), 1,
      anon_sym_LPAREN,
  [13583] = 1,
    ACTIONS(1477), 1,
      anon_sym_DASH,
  [13587] = 1,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
  [13591] = 1,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
  [13595] = 1,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [13599] = 1,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
  [13603] = 1,
    ACTIONS(1487), 1,
      anon_sym_DOT,
  [13607] = 1,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
  [13611] = 1,
    ACTIONS(1491), 1,
      anon_sym_LPAREN,
  [13615] = 1,
    ACTIONS(1493), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [13619] = 1,
    ACTIONS(1495), 1,
      anon_sym_EQ,
  [13623] = 1,
    ACTIONS(1497), 1,
      anon_sym_RBRACE,
  [13627] = 1,
    ACTIONS(1499), 1,
      aux_sym_order_spec_token1,
  [13631] = 1,
    ACTIONS(1501), 1,
      aux_sym_create_function_token3,
  [13635] = 1,
    ACTIONS(1503), 1,
      anon_sym_EQ,
  [13639] = 1,
    ACTIONS(1505), 1,
      aux_sym_relalationContainsKey_token2,
  [13643] = 1,
    ACTIONS(1507), 1,
      aux_sym_create_function_token4,
  [13647] = 1,
    ACTIONS(1509), 1,
      aux_sym_return_mode_token2,
  [13651] = 1,
    ACTIONS(1511), 1,
      aux_sym_create_function_token3,
  [13655] = 1,
    ACTIONS(1513), 1,
      anon_sym_DOT,
  [13659] = 1,
    ACTIONS(1515), 1,
      anon_sym_DOT,
  [13663] = 1,
    ACTIONS(1517), 1,
      anon_sym_DOT,
  [13667] = 1,
    ACTIONS(1519), 1,
      anon_sym_DOT,
  [13671] = 1,
    ACTIONS(1521), 1,
      aux_sym_create_index_token3,
  [13675] = 1,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [13679] = 1,
    ACTIONS(1525), 1,
      aux_sym_using_timestamp_spec_token1,
  [13683] = 1,
    ACTIONS(1527), 1,
      anon_sym_EQ,
  [13687] = 1,
    ACTIONS(1529), 1,
      aux_sym_drop_type_token1,
  [13691] = 1,
    ACTIONS(1531), 1,
      aux_sym_grant_token2,
  [13695] = 1,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
  [13699] = 1,
    ACTIONS(1535), 1,
      aux_sym_create_keyspace_token1,
  [13703] = 1,
    ACTIONS(1537), 1,
      anon_sym_DOT,
  [13707] = 1,
    ACTIONS(1539), 1,
      anon_sym_DOT,
  [13711] = 1,
    ACTIONS(1541), 1,
      aux_sym_create_keyspace_token1,
  [13715] = 1,
    ACTIONS(1543), 1,
      anon_sym_DOT,
  [13719] = 1,
    ACTIONS(1545), 1,
      sym__dquote,
  [13723] = 1,
    ACTIONS(1186), 1,
      aux_sym_update_token2,
  [13727] = 1,
    ACTIONS(1547), 1,
      aux_sym_select_statement_token6,
  [13731] = 1,
    ACTIONS(1549), 1,
      anon_sym_DASH,
  [13735] = 1,
    ACTIONS(1551), 1,
      anon_sym_LPAREN,
  [13739] = 1,
    ACTIONS(1553), 1,
      anon_sym_DOT,
  [13743] = 1,
    ACTIONS(1555), 1,
      aux_sym_create_keyspace_token1,
  [13747] = 1,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [13751] = 1,
    ACTIONS(1559), 1,
      anon_sym_DASH,
  [13755] = 1,
    ACTIONS(1561), 1,
      anon_sym_DOT,
  [13759] = 1,
    ACTIONS(1411), 1,
      anon_sym_SQUOTE,
  [13763] = 1,
    ACTIONS(1563), 1,
      aux_sym_update_token2,
  [13767] = 1,
    ACTIONS(1565), 1,
      aux_sym_create_index_token3,
  [13771] = 1,
    ACTIONS(1567), 1,
      aux_sym_select_statement_token6,
  [13775] = 1,
    ACTIONS(1569), 1,
      anon_sym_LPAREN,
  [13779] = 1,
    ACTIONS(1571), 1,
      anon_sym_DOT,
  [13783] = 1,
    ACTIONS(1573), 1,
      aux_sym_using_timestamp_spec_token1,
  [13787] = 1,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
  [13791] = 1,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
  [13795] = 1,
    ACTIONS(1579), 1,
      anon_sym_COMMA,
  [13799] = 1,
    ACTIONS(1581), 1,
      anon_sym_DOT,
  [13803] = 1,
    ACTIONS(1583), 1,
      anon_sym_DOT,
  [13807] = 1,
    ACTIONS(1585), 1,
      anon_sym_RPAREN,
  [13811] = 1,
    ACTIONS(1587), 1,
      anon_sym_DOT,
  [13815] = 1,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
  [13819] = 1,
    ACTIONS(1591), 1,
      anon_sym_DOT,
  [13823] = 1,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
  [13827] = 1,
    ACTIONS(1595), 1,
      aux_sym_create_index_token3,
  [13831] = 1,
    ACTIONS(1597), 1,
      anon_sym_DOT,
  [13835] = 1,
    ACTIONS(1599), 1,
      aux_sym_create_function_token4,
  [13839] = 1,
    ACTIONS(1601), 1,
      anon_sym_DOT,
  [13843] = 1,
    ACTIONS(1603), 1,
      aux_sym_create_function_token3,
  [13847] = 1,
    ACTIONS(1605), 1,
      anon_sym_DOT,
  [13851] = 1,
    ACTIONS(1607), 1,
      aux_sym_select_statement_token6,
  [13855] = 1,
    ACTIONS(1609), 1,
      aux_sym_create_function_token3,
  [13859] = 1,
    ACTIONS(1611), 1,
      aux_sym_select_element_token1,
  [13863] = 1,
    ACTIONS(1613), 1,
      aux_sym_select_element_token1,
  [13867] = 1,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
  [13871] = 1,
    ACTIONS(1617), 1,
      anon_sym_EQ,
  [13875] = 1,
    ACTIONS(1619), 1,
      aux_sym_if_exist_token2,
  [13879] = 1,
    ACTIONS(1621), 1,
      aux_sym_using_timestamp_spec_token1,
  [13883] = 1,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
  [13887] = 1,
    ACTIONS(1623), 1,
      aux_sym_select_statement_token6,
  [13891] = 1,
    ACTIONS(1625), 1,
      aux_sym_resource_token3,
  [13895] = 1,
    ACTIONS(1627), 1,
      aux_sym_create_function_token4,
  [13899] = 1,
    ACTIONS(1629), 1,
      anon_sym_EQ,
  [13903] = 1,
    ACTIONS(1631), 1,
      sym_object_name,
  [13907] = 1,
    ACTIONS(1633), 1,
      anon_sym_LPAREN,
  [13911] = 1,
    ACTIONS(1635), 1,
      anon_sym_DOT,
  [13915] = 1,
    ACTIONS(1637), 1,
      sym__hex_4digit,
  [13919] = 1,
    ACTIONS(1639), 1,
      aux_sym_using_timestamp_spec_token1,
  [13923] = 1,
    ACTIONS(1641), 1,
      anon_sym_DASH,
  [13927] = 1,
    ACTIONS(1643), 1,
      anon_sym_COLON,
  [13931] = 1,
    ACTIONS(1645), 1,
      anon_sym_DOT,
  [13935] = 1,
    ACTIONS(1647), 1,
      aux_sym_grant_token2,
  [13939] = 1,
    ACTIONS(1649), 1,
      sym__boolean_literal,
  [13943] = 1,
    ACTIONS(1651), 1,
      anon_sym_EQ,
  [13947] = 1,
    ACTIONS(1653), 1,
      sym__hex_4digit,
  [13951] = 1,
    ACTIONS(1655), 1,
      anon_sym_RPAREN,
  [13955] = 1,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
  [13959] = 1,
    ACTIONS(1659), 1,
      aux_sym_create_keyspace_token2,
  [13963] = 1,
    ACTIONS(1661), 1,
      anon_sym_DOT,
  [13967] = 1,
    ACTIONS(1663), 1,
      aux_sym_durable_writes_token2,
  [13971] = 1,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
  [13975] = 1,
    ACTIONS(1667), 1,
      anon_sym_EQ,
  [13979] = 1,
    ACTIONS(1669), 1,
      sym_object_name,
  [13983] = 1,
    ACTIONS(1671), 1,
      aux_sym_create_function_token4,
  [13987] = 1,
    ACTIONS(1673), 1,
      anon_sym_DOT,
  [13991] = 1,
    ACTIONS(1675), 1,
      aux_sym_create_function_token3,
  [13995] = 1,
    ACTIONS(1677), 1,
      aux_sym_select_element_token1,
  [13999] = 1,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
  [14003] = 1,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
  [14007] = 1,
    ACTIONS(1683), 1,
      aux_sym_create_function_token3,
  [14011] = 1,
    ACTIONS(1685), 1,
      aux_sym_create_index_token3,
  [14015] = 1,
    ACTIONS(1687), 1,
      aux_sym_constant_token1,
  [14019] = 1,
    ACTIONS(1689), 1,
      aux_sym_create_keyspace_token1,
  [14023] = 1,
    ACTIONS(1691), 1,
      sym__hex_4digit,
  [14027] = 1,
    ACTIONS(1693), 1,
      aux_sym_create_index_token3,
  [14031] = 1,
    ACTIONS(1695), 1,
      aux_sym__string_literal_token2,
  [14035] = 1,
    ACTIONS(1697), 1,
      aux_sym__string_literal_token1,
  [14039] = 1,
    ACTIONS(1699), 1,
      anon_sym_LPAREN,
  [14043] = 1,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
  [14047] = 1,
    ACTIONS(1703), 1,
      anon_sym_COMMA,
  [14051] = 1,
    ACTIONS(1705), 1,
      anon_sym_RPAREN,
  [14055] = 1,
    ACTIONS(1707), 1,
      anon_sym_RPAREN,
  [14059] = 1,
    ACTIONS(1709), 1,
      anon_sym_GT,
  [14063] = 1,
    ACTIONS(1711), 1,
      anon_sym_EQ,
  [14067] = 1,
    ACTIONS(1713), 1,
      anon_sym_DOT,
  [14071] = 1,
    ACTIONS(1715), 1,
      aux_sym_select_element_token1,
  [14075] = 1,
    ACTIONS(1717), 1,
      aux_sym_from_spec_token1,
  [14079] = 1,
    ACTIONS(1719), 1,
      aux_sym_create_function_token4,
  [14083] = 1,
    ACTIONS(1721), 1,
      aux_sym_if_not_exist_token1,
  [14087] = 1,
    ACTIONS(1723), 1,
      anon_sym_RPAREN,
  [14091] = 1,
    ACTIONS(1725), 1,
      aux_sym__string_literal_token2,
  [14095] = 1,
    ACTIONS(1727), 1,
      anon_sym_LBRACE,
  [14099] = 1,
    ACTIONS(1729), 1,
      aux_sym_create_function_token3,
  [14103] = 1,
    ACTIONS(1731), 1,
      anon_sym_DOT,
  [14107] = 1,
    ACTIONS(1733), 1,
      sym__hex_4digit,
  [14111] = 1,
    ACTIONS(1735), 1,
      anon_sym_DOT,
  [14115] = 1,
    ACTIONS(1737), 1,
      anon_sym_DOT,
  [14119] = 1,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
  [14123] = 1,
    ACTIONS(1247), 1,
      aux_sym_update_token2,
  [14127] = 1,
    ACTIONS(1741), 1,
      aux_sym_select_statement_token6,
  [14131] = 1,
    ACTIONS(1743), 1,
      sym__dquote,
  [14135] = 1,
    ACTIONS(1745), 1,
      anon_sym_DOT,
  [14139] = 1,
    ACTIONS(1747), 1,
      anon_sym_RPAREN,
  [14143] = 1,
    ACTIONS(1749), 1,
      sym__boolean_literal,
  [14147] = 1,
    ACTIONS(1751), 1,
      sym__hex_4digit,
  [14151] = 1,
    ACTIONS(1753), 1,
      aux_sym_select_element_token1,
  [14155] = 1,
    ACTIONS(1755), 1,
      anon_sym_LPAREN,
  [14159] = 1,
    ACTIONS(1757), 1,
      aux_sym_create_function_token4,
  [14163] = 1,
    ACTIONS(1759), 1,
      anon_sym_RPAREN,
  [14167] = 1,
    ACTIONS(1761), 1,
      anon_sym_DOLLAR_DOLLAR,
  [14171] = 1,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
  [14175] = 1,
    ACTIONS(1765), 1,
      aux_sym_create_function_token3,
  [14179] = 1,
    ACTIONS(1767), 1,
      sym__hex_digit,
  [14183] = 1,
    ACTIONS(1769), 1,
      aux_sym_constant_token1,
  [14187] = 1,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
  [14191] = 1,
    ACTIONS(1773), 1,
      aux_sym_create_index_token3,
  [14195] = 1,
    ACTIONS(1775), 1,
      anon_sym_LPAREN,
  [14199] = 1,
    ACTIONS(1777), 1,
      aux_sym_create_keyspace_token2,
  [14203] = 1,
    ACTIONS(1779), 1,
      sym_object_name,
  [14207] = 1,
    ACTIONS(1781), 1,
      aux_sym_create_function_token3,
  [14211] = 1,
    ACTIONS(1783), 1,
      aux_sym_select_element_token1,
  [14215] = 1,
    ACTIONS(1785), 1,
      anon_sym_GT,
  [14219] = 1,
    ACTIONS(1779), 1,
      anon_sym_STAR,
  [14223] = 1,
    ACTIONS(1787), 1,
      aux_sym_create_function_token4,
  [14227] = 1,
    ACTIONS(1789), 1,
      anon_sym_LPAREN,
  [14231] = 1,
    ACTIONS(1791), 1,
      anon_sym_LPAREN,
  [14235] = 1,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
  [14239] = 1,
    ACTIONS(1795), 1,
      aux_sym_select_element_token1,
  [14243] = 1,
    ACTIONS(1797), 1,
      anon_sym_DOT,
  [14247] = 1,
    ACTIONS(1799), 1,
      aux_sym_create_function_token4,
  [14251] = 1,
    ACTIONS(1801), 1,
      anon_sym_LBRACE,
  [14255] = 1,
    ACTIONS(1803), 1,
      anon_sym_RPAREN,
  [14259] = 1,
    ACTIONS(1805), 1,
      aux_sym_select_element_token1,
  [14263] = 1,
    ACTIONS(1807), 1,
      anon_sym_LPAREN,
  [14267] = 1,
    ACTIONS(1809), 1,
      aux_sym_insert_statement_token2,
  [14271] = 1,
    ACTIONS(1811), 1,
      anon_sym_RPAREN,
  [14275] = 1,
    ACTIONS(1813), 1,
      aux_sym_select_element_token1,
  [14279] = 1,
    ACTIONS(1815), 1,
      aux_sym_create_index_token3,
  [14283] = 1,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [14287] = 1,
    ACTIONS(1819), 1,
      sym__dquote,
  [14291] = 1,
    ACTIONS(1821), 1,
      sym_object_name,
  [14295] = 1,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
  [14299] = 1,
    ACTIONS(1825), 1,
      aux_sym_create_index_token3,
  [14303] = 1,
    ACTIONS(1827), 1,
      sym_object_name,
  [14307] = 1,
    ACTIONS(1829), 1,
      anon_sym_LPAREN,
  [14311] = 1,
    ACTIONS(1831), 1,
      sym_object_name,
  [14315] = 1,
    ACTIONS(1833), 1,
      anon_sym_DOT,
  [14319] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_function_token2,
  [14323] = 1,
    ACTIONS(1837), 1,
      anon_sym_DOT,
  [14327] = 1,
    ACTIONS(1839), 1,
      sym_object_name,
  [14331] = 1,
    ACTIONS(1841), 1,
      sym_object_name,
  [14335] = 1,
    ACTIONS(1843), 1,
      aux_sym_if_exist_token2,
  [14339] = 1,
    ACTIONS(1845), 1,
      sym__dquote,
  [14343] = 1,
    ACTIONS(1847), 1,
      anon_sym_RPAREN,
  [14347] = 1,
    ACTIONS(1849), 1,
      aux_sym_if_not_exist_token1,
  [14351] = 1,
    ACTIONS(1851), 1,
      aux_sym_begin_batch_token4,
  [14355] = 1,
    ACTIONS(1853), 1,
      sym_object_name,
  [14359] = 1,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
  [14363] = 1,
    ACTIONS(1857), 1,
      sym_object_name,
  [14367] = 1,
    ACTIONS(1859), 1,
      anon_sym_RPAREN,
  [14371] = 1,
    ACTIONS(1861), 1,
      anon_sym_RPAREN,
  [14375] = 1,
    ACTIONS(1863), 1,
      aux_sym_relalationContainsKey_token2,
  [14379] = 1,
    ACTIONS(1865), 1,
      sym_object_name,
  [14383] = 1,
    ACTIONS(1867), 1,
      anon_sym_LPAREN,
  [14387] = 1,
    ACTIONS(1869), 1,
      sym__dquote,
  [14391] = 1,
    ACTIONS(1871), 1,
      ts_builtin_sym_end,
  [14395] = 1,
    ACTIONS(1873), 1,
      aux_sym_begin_batch_token4,
  [14399] = 1,
    ACTIONS(1875), 1,
      anon_sym_EQ,
  [14403] = 1,
    ACTIONS(1877), 1,
      aux_sym_insert_statement_token2,
  [14407] = 1,
    ACTIONS(1879), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 255,
  [SMALL_STATE(7)] = 291,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 547,
  [SMALL_STATE(15)] = 579,
  [SMALL_STATE(16)] = 611,
  [SMALL_STATE(17)] = 648,
  [SMALL_STATE(18)] = 681,
  [SMALL_STATE(19)] = 718,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 825,
  [SMALL_STATE(23)] = 862,
  [SMALL_STATE(24)] = 895,
  [SMALL_STATE(25)] = 932,
  [SMALL_STATE(26)] = 969,
  [SMALL_STATE(27)] = 1006,
  [SMALL_STATE(28)] = 1043,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1117,
  [SMALL_STATE(31)] = 1154,
  [SMALL_STATE(32)] = 1191,
  [SMALL_STATE(33)] = 1228,
  [SMALL_STATE(34)] = 1265,
  [SMALL_STATE(35)] = 1298,
  [SMALL_STATE(36)] = 1328,
  [SMALL_STATE(37)] = 1362,
  [SMALL_STATE(38)] = 1392,
  [SMALL_STATE(39)] = 1426,
  [SMALL_STATE(40)] = 1483,
  [SMALL_STATE(41)] = 1509,
  [SMALL_STATE(42)] = 1563,
  [SMALL_STATE(43)] = 1589,
  [SMALL_STATE(44)] = 1618,
  [SMALL_STATE(45)] = 1649,
  [SMALL_STATE(46)] = 1676,
  [SMALL_STATE(47)] = 1713,
  [SMALL_STATE(48)] = 1738,
  [SMALL_STATE(49)] = 1767,
  [SMALL_STATE(50)] = 1804,
  [SMALL_STATE(51)] = 1843,
  [SMALL_STATE(52)] = 1872,
  [SMALL_STATE(53)] = 1909,
  [SMALL_STATE(54)] = 1933,
  [SMALL_STATE(55)] = 1985,
  [SMALL_STATE(56)] = 2009,
  [SMALL_STATE(57)] = 2037,
  [SMALL_STATE(58)] = 2065,
  [SMALL_STATE(59)] = 2089,
  [SMALL_STATE(60)] = 2113,
  [SMALL_STATE(61)] = 2137,
  [SMALL_STATE(62)] = 2161,
  [SMALL_STATE(63)] = 2189,
  [SMALL_STATE(64)] = 2215,
  [SMALL_STATE(65)] = 2239,
  [SMALL_STATE(66)] = 2263,
  [SMALL_STATE(67)] = 2287,
  [SMALL_STATE(68)] = 2311,
  [SMALL_STATE(69)] = 2339,
  [SMALL_STATE(70)] = 2363,
  [SMALL_STATE(71)] = 2391,
  [SMALL_STATE(72)] = 2415,
  [SMALL_STATE(73)] = 2443,
  [SMALL_STATE(74)] = 2467,
  [SMALL_STATE(75)] = 2495,
  [SMALL_STATE(76)] = 2526,
  [SMALL_STATE(77)] = 2553,
  [SMALL_STATE(78)] = 2576,
  [SMALL_STATE(79)] = 2599,
  [SMALL_STATE(80)] = 2622,
  [SMALL_STATE(81)] = 2647,
  [SMALL_STATE(82)] = 2678,
  [SMALL_STATE(83)] = 2709,
  [SMALL_STATE(84)] = 2760,
  [SMALL_STATE(85)] = 2791,
  [SMALL_STATE(86)] = 2822,
  [SMALL_STATE(87)] = 2845,
  [SMALL_STATE(88)] = 2876,
  [SMALL_STATE(89)] = 2899,
  [SMALL_STATE(90)] = 2930,
  [SMALL_STATE(91)] = 2953,
  [SMALL_STATE(92)] = 2984,
  [SMALL_STATE(93)] = 3006,
  [SMALL_STATE(94)] = 3028,
  [SMALL_STATE(95)] = 3054,
  [SMALL_STATE(96)] = 3076,
  [SMALL_STATE(97)] = 3104,
  [SMALL_STATE(98)] = 3130,
  [SMALL_STATE(99)] = 3156,
  [SMALL_STATE(100)] = 3182,
  [SMALL_STATE(101)] = 3208,
  [SMALL_STATE(102)] = 3234,
  [SMALL_STATE(103)] = 3260,
  [SMALL_STATE(104)] = 3286,
  [SMALL_STATE(105)] = 3312,
  [SMALL_STATE(106)] = 3334,
  [SMALL_STATE(107)] = 3356,
  [SMALL_STATE(108)] = 3382,
  [SMALL_STATE(109)] = 3410,
  [SMALL_STATE(110)] = 3436,
  [SMALL_STATE(111)] = 3462,
  [SMALL_STATE(112)] = 3484,
  [SMALL_STATE(113)] = 3512,
  [SMALL_STATE(114)] = 3534,
  [SMALL_STATE(115)] = 3562,
  [SMALL_STATE(116)] = 3588,
  [SMALL_STATE(117)] = 3616,
  [SMALL_STATE(118)] = 3638,
  [SMALL_STATE(119)] = 3664,
  [SMALL_STATE(120)] = 3688,
  [SMALL_STATE(121)] = 3714,
  [SMALL_STATE(122)] = 3740,
  [SMALL_STATE(123)] = 3762,
  [SMALL_STATE(124)] = 3788,
  [SMALL_STATE(125)] = 3814,
  [SMALL_STATE(126)] = 3840,
  [SMALL_STATE(127)] = 3862,
  [SMALL_STATE(128)] = 3888,
  [SMALL_STATE(129)] = 3913,
  [SMALL_STATE(130)] = 3938,
  [SMALL_STATE(131)] = 3963,
  [SMALL_STATE(132)] = 3988,
  [SMALL_STATE(133)] = 4013,
  [SMALL_STATE(134)] = 4038,
  [SMALL_STATE(135)] = 4063,
  [SMALL_STATE(136)] = 4088,
  [SMALL_STATE(137)] = 4133,
  [SMALL_STATE(138)] = 4158,
  [SMALL_STATE(139)] = 4183,
  [SMALL_STATE(140)] = 4204,
  [SMALL_STATE(141)] = 4229,
  [SMALL_STATE(142)] = 4254,
  [SMALL_STATE(143)] = 4275,
  [SMALL_STATE(144)] = 4300,
  [SMALL_STATE(145)] = 4325,
  [SMALL_STATE(146)] = 4346,
  [SMALL_STATE(147)] = 4371,
  [SMALL_STATE(148)] = 4392,
  [SMALL_STATE(149)] = 4415,
  [SMALL_STATE(150)] = 4438,
  [SMALL_STATE(151)] = 4459,
  [SMALL_STATE(152)] = 4484,
  [SMALL_STATE(153)] = 4509,
  [SMALL_STATE(154)] = 4530,
  [SMALL_STATE(155)] = 4555,
  [SMALL_STATE(156)] = 4580,
  [SMALL_STATE(157)] = 4605,
  [SMALL_STATE(158)] = 4626,
  [SMALL_STATE(159)] = 4647,
  [SMALL_STATE(160)] = 4672,
  [SMALL_STATE(161)] = 4697,
  [SMALL_STATE(162)] = 4718,
  [SMALL_STATE(163)] = 4743,
  [SMALL_STATE(164)] = 4764,
  [SMALL_STATE(165)] = 4789,
  [SMALL_STATE(166)] = 4814,
  [SMALL_STATE(167)] = 4839,
  [SMALL_STATE(168)] = 4864,
  [SMALL_STATE(169)] = 4889,
  [SMALL_STATE(170)] = 4914,
  [SMALL_STATE(171)] = 4939,
  [SMALL_STATE(172)] = 4960,
  [SMALL_STATE(173)] = 4985,
  [SMALL_STATE(174)] = 5010,
  [SMALL_STATE(175)] = 5035,
  [SMALL_STATE(176)] = 5060,
  [SMALL_STATE(177)] = 5081,
  [SMALL_STATE(178)] = 5106,
  [SMALL_STATE(179)] = 5126,
  [SMALL_STATE(180)] = 5146,
  [SMALL_STATE(181)] = 5188,
  [SMALL_STATE(182)] = 5210,
  [SMALL_STATE(183)] = 5254,
  [SMALL_STATE(184)] = 5276,
  [SMALL_STATE(185)] = 5296,
  [SMALL_STATE(186)] = 5338,
  [SMALL_STATE(187)] = 5358,
  [SMALL_STATE(188)] = 5380,
  [SMALL_STATE(189)] = 5400,
  [SMALL_STATE(190)] = 5420,
  [SMALL_STATE(191)] = 5442,
  [SMALL_STATE(192)] = 5464,
  [SMALL_STATE(193)] = 5486,
  [SMALL_STATE(194)] = 5508,
  [SMALL_STATE(195)] = 5528,
  [SMALL_STATE(196)] = 5548,
  [SMALL_STATE(197)] = 5568,
  [SMALL_STATE(198)] = 5588,
  [SMALL_STATE(199)] = 5630,
  [SMALL_STATE(200)] = 5649,
  [SMALL_STATE(201)] = 5668,
  [SMALL_STATE(202)] = 5687,
  [SMALL_STATE(203)] = 5706,
  [SMALL_STATE(204)] = 5725,
  [SMALL_STATE(205)] = 5744,
  [SMALL_STATE(206)] = 5765,
  [SMALL_STATE(207)] = 5784,
  [SMALL_STATE(208)] = 5803,
  [SMALL_STATE(209)] = 5822,
  [SMALL_STATE(210)] = 5863,
  [SMALL_STATE(211)] = 5882,
  [SMALL_STATE(212)] = 5901,
  [SMALL_STATE(213)] = 5920,
  [SMALL_STATE(214)] = 5939,
  [SMALL_STATE(215)] = 5958,
  [SMALL_STATE(216)] = 5977,
  [SMALL_STATE(217)] = 5996,
  [SMALL_STATE(218)] = 6015,
  [SMALL_STATE(219)] = 6034,
  [SMALL_STATE(220)] = 6053,
  [SMALL_STATE(221)] = 6072,
  [SMALL_STATE(222)] = 6091,
  [SMALL_STATE(223)] = 6110,
  [SMALL_STATE(224)] = 6129,
  [SMALL_STATE(225)] = 6148,
  [SMALL_STATE(226)] = 6167,
  [SMALL_STATE(227)] = 6186,
  [SMALL_STATE(228)] = 6205,
  [SMALL_STATE(229)] = 6224,
  [SMALL_STATE(230)] = 6243,
  [SMALL_STATE(231)] = 6262,
  [SMALL_STATE(232)] = 6281,
  [SMALL_STATE(233)] = 6300,
  [SMALL_STATE(234)] = 6319,
  [SMALL_STATE(235)] = 6338,
  [SMALL_STATE(236)] = 6357,
  [SMALL_STATE(237)] = 6376,
  [SMALL_STATE(238)] = 6395,
  [SMALL_STATE(239)] = 6414,
  [SMALL_STATE(240)] = 6433,
  [SMALL_STATE(241)] = 6452,
  [SMALL_STATE(242)] = 6471,
  [SMALL_STATE(243)] = 6490,
  [SMALL_STATE(244)] = 6509,
  [SMALL_STATE(245)] = 6528,
  [SMALL_STATE(246)] = 6547,
  [SMALL_STATE(247)] = 6566,
  [SMALL_STATE(248)] = 6585,
  [SMALL_STATE(249)] = 6604,
  [SMALL_STATE(250)] = 6623,
  [SMALL_STATE(251)] = 6642,
  [SMALL_STATE(252)] = 6661,
  [SMALL_STATE(253)] = 6680,
  [SMALL_STATE(254)] = 6699,
  [SMALL_STATE(255)] = 6718,
  [SMALL_STATE(256)] = 6737,
  [SMALL_STATE(257)] = 6756,
  [SMALL_STATE(258)] = 6775,
  [SMALL_STATE(259)] = 6794,
  [SMALL_STATE(260)] = 6813,
  [SMALL_STATE(261)] = 6832,
  [SMALL_STATE(262)] = 6851,
  [SMALL_STATE(263)] = 6870,
  [SMALL_STATE(264)] = 6889,
  [SMALL_STATE(265)] = 6908,
  [SMALL_STATE(266)] = 6927,
  [SMALL_STATE(267)] = 6946,
  [SMALL_STATE(268)] = 6965,
  [SMALL_STATE(269)] = 6984,
  [SMALL_STATE(270)] = 7003,
  [SMALL_STATE(271)] = 7022,
  [SMALL_STATE(272)] = 7041,
  [SMALL_STATE(273)] = 7060,
  [SMALL_STATE(274)] = 7079,
  [SMALL_STATE(275)] = 7098,
  [SMALL_STATE(276)] = 7117,
  [SMALL_STATE(277)] = 7136,
  [SMALL_STATE(278)] = 7155,
  [SMALL_STATE(279)] = 7174,
  [SMALL_STATE(280)] = 7193,
  [SMALL_STATE(281)] = 7212,
  [SMALL_STATE(282)] = 7231,
  [SMALL_STATE(283)] = 7250,
  [SMALL_STATE(284)] = 7269,
  [SMALL_STATE(285)] = 7288,
  [SMALL_STATE(286)] = 7307,
  [SMALL_STATE(287)] = 7326,
  [SMALL_STATE(288)] = 7345,
  [SMALL_STATE(289)] = 7364,
  [SMALL_STATE(290)] = 7383,
  [SMALL_STATE(291)] = 7402,
  [SMALL_STATE(292)] = 7421,
  [SMALL_STATE(293)] = 7440,
  [SMALL_STATE(294)] = 7459,
  [SMALL_STATE(295)] = 7478,
  [SMALL_STATE(296)] = 7497,
  [SMALL_STATE(297)] = 7516,
  [SMALL_STATE(298)] = 7557,
  [SMALL_STATE(299)] = 7576,
  [SMALL_STATE(300)] = 7595,
  [SMALL_STATE(301)] = 7614,
  [SMALL_STATE(302)] = 7633,
  [SMALL_STATE(303)] = 7652,
  [SMALL_STATE(304)] = 7671,
  [SMALL_STATE(305)] = 7690,
  [SMALL_STATE(306)] = 7709,
  [SMALL_STATE(307)] = 7728,
  [SMALL_STATE(308)] = 7747,
  [SMALL_STATE(309)] = 7766,
  [SMALL_STATE(310)] = 7785,
  [SMALL_STATE(311)] = 7804,
  [SMALL_STATE(312)] = 7823,
  [SMALL_STATE(313)] = 7842,
  [SMALL_STATE(314)] = 7861,
  [SMALL_STATE(315)] = 7880,
  [SMALL_STATE(316)] = 7899,
  [SMALL_STATE(317)] = 7918,
  [SMALL_STATE(318)] = 7959,
  [SMALL_STATE(319)] = 7978,
  [SMALL_STATE(320)] = 7997,
  [SMALL_STATE(321)] = 8016,
  [SMALL_STATE(322)] = 8054,
  [SMALL_STATE(323)] = 8092,
  [SMALL_STATE(324)] = 8130,
  [SMALL_STATE(325)] = 8168,
  [SMALL_STATE(326)] = 8206,
  [SMALL_STATE(327)] = 8244,
  [SMALL_STATE(328)] = 8282,
  [SMALL_STATE(329)] = 8320,
  [SMALL_STATE(330)] = 8358,
  [SMALL_STATE(331)] = 8396,
  [SMALL_STATE(332)] = 8434,
  [SMALL_STATE(333)] = 8452,
  [SMALL_STATE(334)] = 8490,
  [SMALL_STATE(335)] = 8528,
  [SMALL_STATE(336)] = 8566,
  [SMALL_STATE(337)] = 8604,
  [SMALL_STATE(338)] = 8624,
  [SMALL_STATE(339)] = 8641,
  [SMALL_STATE(340)] = 8666,
  [SMALL_STATE(341)] = 8683,
  [SMALL_STATE(342)] = 8714,
  [SMALL_STATE(343)] = 8745,
  [SMALL_STATE(344)] = 8770,
  [SMALL_STATE(345)] = 8797,
  [SMALL_STATE(346)] = 8820,
  [SMALL_STATE(347)] = 8843,
  [SMALL_STATE(348)] = 8868,
  [SMALL_STATE(349)] = 8893,
  [SMALL_STATE(350)] = 8924,
  [SMALL_STATE(351)] = 8949,
  [SMALL_STATE(352)] = 8973,
  [SMALL_STATE(353)] = 8989,
  [SMALL_STATE(354)] = 9011,
  [SMALL_STATE(355)] = 9033,
  [SMALL_STATE(356)] = 9061,
  [SMALL_STATE(357)] = 9089,
  [SMALL_STATE(358)] = 9105,
  [SMALL_STATE(359)] = 9130,
  [SMALL_STATE(360)] = 9150,
  [SMALL_STATE(361)] = 9170,
  [SMALL_STATE(362)] = 9188,
  [SMALL_STATE(363)] = 9206,
  [SMALL_STATE(364)] = 9228,
  [SMALL_STATE(365)] = 9250,
  [SMALL_STATE(366)] = 9270,
  [SMALL_STATE(367)] = 9292,
  [SMALL_STATE(368)] = 9310,
  [SMALL_STATE(369)] = 9321,
  [SMALL_STATE(370)] = 9340,
  [SMALL_STATE(371)] = 9359,
  [SMALL_STATE(372)] = 9378,
  [SMALL_STATE(373)] = 9397,
  [SMALL_STATE(374)] = 9416,
  [SMALL_STATE(375)] = 9435,
  [SMALL_STATE(376)] = 9454,
  [SMALL_STATE(377)] = 9471,
  [SMALL_STATE(378)] = 9490,
  [SMALL_STATE(379)] = 9509,
  [SMALL_STATE(380)] = 9526,
  [SMALL_STATE(381)] = 9545,
  [SMALL_STATE(382)] = 9564,
  [SMALL_STATE(383)] = 9583,
  [SMALL_STATE(384)] = 9602,
  [SMALL_STATE(385)] = 9621,
  [SMALL_STATE(386)] = 9632,
  [SMALL_STATE(387)] = 9648,
  [SMALL_STATE(388)] = 9664,
  [SMALL_STATE(389)] = 9672,
  [SMALL_STATE(390)] = 9688,
  [SMALL_STATE(391)] = 9704,
  [SMALL_STATE(392)] = 9714,
  [SMALL_STATE(393)] = 9730,
  [SMALL_STATE(394)] = 9746,
  [SMALL_STATE(395)] = 9762,
  [SMALL_STATE(396)] = 9778,
  [SMALL_STATE(397)] = 9794,
  [SMALL_STATE(398)] = 9810,
  [SMALL_STATE(399)] = 9826,
  [SMALL_STATE(400)] = 9834,
  [SMALL_STATE(401)] = 9850,
  [SMALL_STATE(402)] = 9866,
  [SMALL_STATE(403)] = 9882,
  [SMALL_STATE(404)] = 9892,
  [SMALL_STATE(405)] = 9908,
  [SMALL_STATE(406)] = 9924,
  [SMALL_STATE(407)] = 9934,
  [SMALL_STATE(408)] = 9942,
  [SMALL_STATE(409)] = 9958,
  [SMALL_STATE(410)] = 9974,
  [SMALL_STATE(411)] = 9988,
  [SMALL_STATE(412)] = 9998,
  [SMALL_STATE(413)] = 10006,
  [SMALL_STATE(414)] = 10020,
  [SMALL_STATE(415)] = 10034,
  [SMALL_STATE(416)] = 10050,
  [SMALL_STATE(417)] = 10066,
  [SMALL_STATE(418)] = 10082,
  [SMALL_STATE(419)] = 10098,
  [SMALL_STATE(420)] = 10110,
  [SMALL_STATE(421)] = 10118,
  [SMALL_STATE(422)] = 10134,
  [SMALL_STATE(423)] = 10142,
  [SMALL_STATE(424)] = 10158,
  [SMALL_STATE(425)] = 10170,
  [SMALL_STATE(426)] = 10180,
  [SMALL_STATE(427)] = 10196,
  [SMALL_STATE(428)] = 10208,
  [SMALL_STATE(429)] = 10218,
  [SMALL_STATE(430)] = 10226,
  [SMALL_STATE(431)] = 10242,
  [SMALL_STATE(432)] = 10258,
  [SMALL_STATE(433)] = 10274,
  [SMALL_STATE(434)] = 10287,
  [SMALL_STATE(435)] = 10298,
  [SMALL_STATE(436)] = 10311,
  [SMALL_STATE(437)] = 10324,
  [SMALL_STATE(438)] = 10337,
  [SMALL_STATE(439)] = 10348,
  [SMALL_STATE(440)] = 10361,
  [SMALL_STATE(441)] = 10374,
  [SMALL_STATE(442)] = 10387,
  [SMALL_STATE(443)] = 10396,
  [SMALL_STATE(444)] = 10409,
  [SMALL_STATE(445)] = 10422,
  [SMALL_STATE(446)] = 10435,
  [SMALL_STATE(447)] = 10448,
  [SMALL_STATE(448)] = 10461,
  [SMALL_STATE(449)] = 10474,
  [SMALL_STATE(450)] = 10481,
  [SMALL_STATE(451)] = 10494,
  [SMALL_STATE(452)] = 10507,
  [SMALL_STATE(453)] = 10520,
  [SMALL_STATE(454)] = 10527,
  [SMALL_STATE(455)] = 10540,
  [SMALL_STATE(456)] = 10553,
  [SMALL_STATE(457)] = 10566,
  [SMALL_STATE(458)] = 10579,
  [SMALL_STATE(459)] = 10592,
  [SMALL_STATE(460)] = 10605,
  [SMALL_STATE(461)] = 10618,
  [SMALL_STATE(462)] = 10631,
  [SMALL_STATE(463)] = 10644,
  [SMALL_STATE(464)] = 10657,
  [SMALL_STATE(465)] = 10670,
  [SMALL_STATE(466)] = 10683,
  [SMALL_STATE(467)] = 10696,
  [SMALL_STATE(468)] = 10709,
  [SMALL_STATE(469)] = 10722,
  [SMALL_STATE(470)] = 10735,
  [SMALL_STATE(471)] = 10748,
  [SMALL_STATE(472)] = 10761,
  [SMALL_STATE(473)] = 10774,
  [SMALL_STATE(474)] = 10787,
  [SMALL_STATE(475)] = 10800,
  [SMALL_STATE(476)] = 10813,
  [SMALL_STATE(477)] = 10826,
  [SMALL_STATE(478)] = 10839,
  [SMALL_STATE(479)] = 10852,
  [SMALL_STATE(480)] = 10865,
  [SMALL_STATE(481)] = 10878,
  [SMALL_STATE(482)] = 10891,
  [SMALL_STATE(483)] = 10902,
  [SMALL_STATE(484)] = 10915,
  [SMALL_STATE(485)] = 10928,
  [SMALL_STATE(486)] = 10941,
  [SMALL_STATE(487)] = 10954,
  [SMALL_STATE(488)] = 10967,
  [SMALL_STATE(489)] = 10980,
  [SMALL_STATE(490)] = 10993,
  [SMALL_STATE(491)] = 11000,
  [SMALL_STATE(492)] = 11013,
  [SMALL_STATE(493)] = 11024,
  [SMALL_STATE(494)] = 11037,
  [SMALL_STATE(495)] = 11050,
  [SMALL_STATE(496)] = 11063,
  [SMALL_STATE(497)] = 11076,
  [SMALL_STATE(498)] = 11089,
  [SMALL_STATE(499)] = 11098,
  [SMALL_STATE(500)] = 11111,
  [SMALL_STATE(501)] = 11124,
  [SMALL_STATE(502)] = 11137,
  [SMALL_STATE(503)] = 11150,
  [SMALL_STATE(504)] = 11163,
  [SMALL_STATE(505)] = 11176,
  [SMALL_STATE(506)] = 11186,
  [SMALL_STATE(507)] = 11196,
  [SMALL_STATE(508)] = 11206,
  [SMALL_STATE(509)] = 11216,
  [SMALL_STATE(510)] = 11226,
  [SMALL_STATE(511)] = 11236,
  [SMALL_STATE(512)] = 11246,
  [SMALL_STATE(513)] = 11256,
  [SMALL_STATE(514)] = 11264,
  [SMALL_STATE(515)] = 11272,
  [SMALL_STATE(516)] = 11282,
  [SMALL_STATE(517)] = 11292,
  [SMALL_STATE(518)] = 11302,
  [SMALL_STATE(519)] = 11312,
  [SMALL_STATE(520)] = 11322,
  [SMALL_STATE(521)] = 11332,
  [SMALL_STATE(522)] = 11340,
  [SMALL_STATE(523)] = 11350,
  [SMALL_STATE(524)] = 11360,
  [SMALL_STATE(525)] = 11370,
  [SMALL_STATE(526)] = 11380,
  [SMALL_STATE(527)] = 11390,
  [SMALL_STATE(528)] = 11400,
  [SMALL_STATE(529)] = 11410,
  [SMALL_STATE(530)] = 11420,
  [SMALL_STATE(531)] = 11426,
  [SMALL_STATE(532)] = 11436,
  [SMALL_STATE(533)] = 11446,
  [SMALL_STATE(534)] = 11456,
  [SMALL_STATE(535)] = 11466,
  [SMALL_STATE(536)] = 11476,
  [SMALL_STATE(537)] = 11486,
  [SMALL_STATE(538)] = 11496,
  [SMALL_STATE(539)] = 11506,
  [SMALL_STATE(540)] = 11516,
  [SMALL_STATE(541)] = 11526,
  [SMALL_STATE(542)] = 11536,
  [SMALL_STATE(543)] = 11546,
  [SMALL_STATE(544)] = 11556,
  [SMALL_STATE(545)] = 11564,
  [SMALL_STATE(546)] = 11574,
  [SMALL_STATE(547)] = 11584,
  [SMALL_STATE(548)] = 11594,
  [SMALL_STATE(549)] = 11604,
  [SMALL_STATE(550)] = 11614,
  [SMALL_STATE(551)] = 11624,
  [SMALL_STATE(552)] = 11632,
  [SMALL_STATE(553)] = 11642,
  [SMALL_STATE(554)] = 11652,
  [SMALL_STATE(555)] = 11662,
  [SMALL_STATE(556)] = 11672,
  [SMALL_STATE(557)] = 11682,
  [SMALL_STATE(558)] = 11692,
  [SMALL_STATE(559)] = 11702,
  [SMALL_STATE(560)] = 11712,
  [SMALL_STATE(561)] = 11722,
  [SMALL_STATE(562)] = 11732,
  [SMALL_STATE(563)] = 11742,
  [SMALL_STATE(564)] = 11752,
  [SMALL_STATE(565)] = 11762,
  [SMALL_STATE(566)] = 11772,
  [SMALL_STATE(567)] = 11782,
  [SMALL_STATE(568)] = 11792,
  [SMALL_STATE(569)] = 11802,
  [SMALL_STATE(570)] = 11812,
  [SMALL_STATE(571)] = 11822,
  [SMALL_STATE(572)] = 11832,
  [SMALL_STATE(573)] = 11842,
  [SMALL_STATE(574)] = 11852,
  [SMALL_STATE(575)] = 11862,
  [SMALL_STATE(576)] = 11872,
  [SMALL_STATE(577)] = 11882,
  [SMALL_STATE(578)] = 11892,
  [SMALL_STATE(579)] = 11902,
  [SMALL_STATE(580)] = 11912,
  [SMALL_STATE(581)] = 11922,
  [SMALL_STATE(582)] = 11932,
  [SMALL_STATE(583)] = 11942,
  [SMALL_STATE(584)] = 11952,
  [SMALL_STATE(585)] = 11962,
  [SMALL_STATE(586)] = 11972,
  [SMALL_STATE(587)] = 11982,
  [SMALL_STATE(588)] = 11992,
  [SMALL_STATE(589)] = 11998,
  [SMALL_STATE(590)] = 12008,
  [SMALL_STATE(591)] = 12018,
  [SMALL_STATE(592)] = 12028,
  [SMALL_STATE(593)] = 12038,
  [SMALL_STATE(594)] = 12048,
  [SMALL_STATE(595)] = 12058,
  [SMALL_STATE(596)] = 12068,
  [SMALL_STATE(597)] = 12078,
  [SMALL_STATE(598)] = 12088,
  [SMALL_STATE(599)] = 12098,
  [SMALL_STATE(600)] = 12108,
  [SMALL_STATE(601)] = 12118,
  [SMALL_STATE(602)] = 12128,
  [SMALL_STATE(603)] = 12138,
  [SMALL_STATE(604)] = 12148,
  [SMALL_STATE(605)] = 12158,
  [SMALL_STATE(606)] = 12168,
  [SMALL_STATE(607)] = 12178,
  [SMALL_STATE(608)] = 12188,
  [SMALL_STATE(609)] = 12198,
  [SMALL_STATE(610)] = 12208,
  [SMALL_STATE(611)] = 12218,
  [SMALL_STATE(612)] = 12228,
  [SMALL_STATE(613)] = 12238,
  [SMALL_STATE(614)] = 12248,
  [SMALL_STATE(615)] = 12258,
  [SMALL_STATE(616)] = 12268,
  [SMALL_STATE(617)] = 12278,
  [SMALL_STATE(618)] = 12288,
  [SMALL_STATE(619)] = 12298,
  [SMALL_STATE(620)] = 12308,
  [SMALL_STATE(621)] = 12318,
  [SMALL_STATE(622)] = 12328,
  [SMALL_STATE(623)] = 12338,
  [SMALL_STATE(624)] = 12348,
  [SMALL_STATE(625)] = 12358,
  [SMALL_STATE(626)] = 12368,
  [SMALL_STATE(627)] = 12378,
  [SMALL_STATE(628)] = 12388,
  [SMALL_STATE(629)] = 12398,
  [SMALL_STATE(630)] = 12408,
  [SMALL_STATE(631)] = 12418,
  [SMALL_STATE(632)] = 12428,
  [SMALL_STATE(633)] = 12438,
  [SMALL_STATE(634)] = 12448,
  [SMALL_STATE(635)] = 12458,
  [SMALL_STATE(636)] = 12468,
  [SMALL_STATE(637)] = 12478,
  [SMALL_STATE(638)] = 12488,
  [SMALL_STATE(639)] = 12498,
  [SMALL_STATE(640)] = 12508,
  [SMALL_STATE(641)] = 12518,
  [SMALL_STATE(642)] = 12528,
  [SMALL_STATE(643)] = 12538,
  [SMALL_STATE(644)] = 12548,
  [SMALL_STATE(645)] = 12558,
  [SMALL_STATE(646)] = 12568,
  [SMALL_STATE(647)] = 12575,
  [SMALL_STATE(648)] = 12580,
  [SMALL_STATE(649)] = 12587,
  [SMALL_STATE(650)] = 12592,
  [SMALL_STATE(651)] = 12599,
  [SMALL_STATE(652)] = 12604,
  [SMALL_STATE(653)] = 12611,
  [SMALL_STATE(654)] = 12616,
  [SMALL_STATE(655)] = 12623,
  [SMALL_STATE(656)] = 12630,
  [SMALL_STATE(657)] = 12637,
  [SMALL_STATE(658)] = 12642,
  [SMALL_STATE(659)] = 12649,
  [SMALL_STATE(660)] = 12656,
  [SMALL_STATE(661)] = 12661,
  [SMALL_STATE(662)] = 12668,
  [SMALL_STATE(663)] = 12675,
  [SMALL_STATE(664)] = 12682,
  [SMALL_STATE(665)] = 12689,
  [SMALL_STATE(666)] = 12696,
  [SMALL_STATE(667)] = 12703,
  [SMALL_STATE(668)] = 12710,
  [SMALL_STATE(669)] = 12717,
  [SMALL_STATE(670)] = 12724,
  [SMALL_STATE(671)] = 12731,
  [SMALL_STATE(672)] = 12738,
  [SMALL_STATE(673)] = 12745,
  [SMALL_STATE(674)] = 12750,
  [SMALL_STATE(675)] = 12757,
  [SMALL_STATE(676)] = 12764,
  [SMALL_STATE(677)] = 12771,
  [SMALL_STATE(678)] = 12776,
  [SMALL_STATE(679)] = 12783,
  [SMALL_STATE(680)] = 12788,
  [SMALL_STATE(681)] = 12793,
  [SMALL_STATE(682)] = 12800,
  [SMALL_STATE(683)] = 12805,
  [SMALL_STATE(684)] = 12812,
  [SMALL_STATE(685)] = 12819,
  [SMALL_STATE(686)] = 12826,
  [SMALL_STATE(687)] = 12831,
  [SMALL_STATE(688)] = 12838,
  [SMALL_STATE(689)] = 12843,
  [SMALL_STATE(690)] = 12850,
  [SMALL_STATE(691)] = 12855,
  [SMALL_STATE(692)] = 12862,
  [SMALL_STATE(693)] = 12869,
  [SMALL_STATE(694)] = 12876,
  [SMALL_STATE(695)] = 12883,
  [SMALL_STATE(696)] = 12888,
  [SMALL_STATE(697)] = 12895,
  [SMALL_STATE(698)] = 12902,
  [SMALL_STATE(699)] = 12907,
  [SMALL_STATE(700)] = 12914,
  [SMALL_STATE(701)] = 12921,
  [SMALL_STATE(702)] = 12928,
  [SMALL_STATE(703)] = 12935,
  [SMALL_STATE(704)] = 12940,
  [SMALL_STATE(705)] = 12947,
  [SMALL_STATE(706)] = 12954,
  [SMALL_STATE(707)] = 12961,
  [SMALL_STATE(708)] = 12968,
  [SMALL_STATE(709)] = 12975,
  [SMALL_STATE(710)] = 12982,
  [SMALL_STATE(711)] = 12989,
  [SMALL_STATE(712)] = 12994,
  [SMALL_STATE(713)] = 13001,
  [SMALL_STATE(714)] = 13008,
  [SMALL_STATE(715)] = 13015,
  [SMALL_STATE(716)] = 13020,
  [SMALL_STATE(717)] = 13025,
  [SMALL_STATE(718)] = 13032,
  [SMALL_STATE(719)] = 13039,
  [SMALL_STATE(720)] = 13046,
  [SMALL_STATE(721)] = 13053,
  [SMALL_STATE(722)] = 13060,
  [SMALL_STATE(723)] = 13065,
  [SMALL_STATE(724)] = 13072,
  [SMALL_STATE(725)] = 13079,
  [SMALL_STATE(726)] = 13086,
  [SMALL_STATE(727)] = 13091,
  [SMALL_STATE(728)] = 13098,
  [SMALL_STATE(729)] = 13105,
  [SMALL_STATE(730)] = 13112,
  [SMALL_STATE(731)] = 13119,
  [SMALL_STATE(732)] = 13124,
  [SMALL_STATE(733)] = 13131,
  [SMALL_STATE(734)] = 13136,
  [SMALL_STATE(735)] = 13143,
  [SMALL_STATE(736)] = 13150,
  [SMALL_STATE(737)] = 13157,
  [SMALL_STATE(738)] = 13164,
  [SMALL_STATE(739)] = 13171,
  [SMALL_STATE(740)] = 13178,
  [SMALL_STATE(741)] = 13185,
  [SMALL_STATE(742)] = 13192,
  [SMALL_STATE(743)] = 13199,
  [SMALL_STATE(744)] = 13204,
  [SMALL_STATE(745)] = 13209,
  [SMALL_STATE(746)] = 13216,
  [SMALL_STATE(747)] = 13221,
  [SMALL_STATE(748)] = 13228,
  [SMALL_STATE(749)] = 13233,
  [SMALL_STATE(750)] = 13240,
  [SMALL_STATE(751)] = 13247,
  [SMALL_STATE(752)] = 13254,
  [SMALL_STATE(753)] = 13261,
  [SMALL_STATE(754)] = 13268,
  [SMALL_STATE(755)] = 13275,
  [SMALL_STATE(756)] = 13282,
  [SMALL_STATE(757)] = 13287,
  [SMALL_STATE(758)] = 13292,
  [SMALL_STATE(759)] = 13297,
  [SMALL_STATE(760)] = 13302,
  [SMALL_STATE(761)] = 13309,
  [SMALL_STATE(762)] = 13314,
  [SMALL_STATE(763)] = 13321,
  [SMALL_STATE(764)] = 13328,
  [SMALL_STATE(765)] = 13335,
  [SMALL_STATE(766)] = 13340,
  [SMALL_STATE(767)] = 13347,
  [SMALL_STATE(768)] = 13354,
  [SMALL_STATE(769)] = 13359,
  [SMALL_STATE(770)] = 13366,
  [SMALL_STATE(771)] = 13373,
  [SMALL_STATE(772)] = 13380,
  [SMALL_STATE(773)] = 13387,
  [SMALL_STATE(774)] = 13391,
  [SMALL_STATE(775)] = 13395,
  [SMALL_STATE(776)] = 13399,
  [SMALL_STATE(777)] = 13403,
  [SMALL_STATE(778)] = 13407,
  [SMALL_STATE(779)] = 13411,
  [SMALL_STATE(780)] = 13415,
  [SMALL_STATE(781)] = 13419,
  [SMALL_STATE(782)] = 13423,
  [SMALL_STATE(783)] = 13427,
  [SMALL_STATE(784)] = 13431,
  [SMALL_STATE(785)] = 13435,
  [SMALL_STATE(786)] = 13439,
  [SMALL_STATE(787)] = 13443,
  [SMALL_STATE(788)] = 13447,
  [SMALL_STATE(789)] = 13451,
  [SMALL_STATE(790)] = 13455,
  [SMALL_STATE(791)] = 13459,
  [SMALL_STATE(792)] = 13463,
  [SMALL_STATE(793)] = 13467,
  [SMALL_STATE(794)] = 13471,
  [SMALL_STATE(795)] = 13475,
  [SMALL_STATE(796)] = 13479,
  [SMALL_STATE(797)] = 13483,
  [SMALL_STATE(798)] = 13487,
  [SMALL_STATE(799)] = 13491,
  [SMALL_STATE(800)] = 13495,
  [SMALL_STATE(801)] = 13499,
  [SMALL_STATE(802)] = 13503,
  [SMALL_STATE(803)] = 13507,
  [SMALL_STATE(804)] = 13511,
  [SMALL_STATE(805)] = 13515,
  [SMALL_STATE(806)] = 13519,
  [SMALL_STATE(807)] = 13523,
  [SMALL_STATE(808)] = 13527,
  [SMALL_STATE(809)] = 13531,
  [SMALL_STATE(810)] = 13535,
  [SMALL_STATE(811)] = 13539,
  [SMALL_STATE(812)] = 13543,
  [SMALL_STATE(813)] = 13547,
  [SMALL_STATE(814)] = 13551,
  [SMALL_STATE(815)] = 13555,
  [SMALL_STATE(816)] = 13559,
  [SMALL_STATE(817)] = 13563,
  [SMALL_STATE(818)] = 13567,
  [SMALL_STATE(819)] = 13571,
  [SMALL_STATE(820)] = 13575,
  [SMALL_STATE(821)] = 13579,
  [SMALL_STATE(822)] = 13583,
  [SMALL_STATE(823)] = 13587,
  [SMALL_STATE(824)] = 13591,
  [SMALL_STATE(825)] = 13595,
  [SMALL_STATE(826)] = 13599,
  [SMALL_STATE(827)] = 13603,
  [SMALL_STATE(828)] = 13607,
  [SMALL_STATE(829)] = 13611,
  [SMALL_STATE(830)] = 13615,
  [SMALL_STATE(831)] = 13619,
  [SMALL_STATE(832)] = 13623,
  [SMALL_STATE(833)] = 13627,
  [SMALL_STATE(834)] = 13631,
  [SMALL_STATE(835)] = 13635,
  [SMALL_STATE(836)] = 13639,
  [SMALL_STATE(837)] = 13643,
  [SMALL_STATE(838)] = 13647,
  [SMALL_STATE(839)] = 13651,
  [SMALL_STATE(840)] = 13655,
  [SMALL_STATE(841)] = 13659,
  [SMALL_STATE(842)] = 13663,
  [SMALL_STATE(843)] = 13667,
  [SMALL_STATE(844)] = 13671,
  [SMALL_STATE(845)] = 13675,
  [SMALL_STATE(846)] = 13679,
  [SMALL_STATE(847)] = 13683,
  [SMALL_STATE(848)] = 13687,
  [SMALL_STATE(849)] = 13691,
  [SMALL_STATE(850)] = 13695,
  [SMALL_STATE(851)] = 13699,
  [SMALL_STATE(852)] = 13703,
  [SMALL_STATE(853)] = 13707,
  [SMALL_STATE(854)] = 13711,
  [SMALL_STATE(855)] = 13715,
  [SMALL_STATE(856)] = 13719,
  [SMALL_STATE(857)] = 13723,
  [SMALL_STATE(858)] = 13727,
  [SMALL_STATE(859)] = 13731,
  [SMALL_STATE(860)] = 13735,
  [SMALL_STATE(861)] = 13739,
  [SMALL_STATE(862)] = 13743,
  [SMALL_STATE(863)] = 13747,
  [SMALL_STATE(864)] = 13751,
  [SMALL_STATE(865)] = 13755,
  [SMALL_STATE(866)] = 13759,
  [SMALL_STATE(867)] = 13763,
  [SMALL_STATE(868)] = 13767,
  [SMALL_STATE(869)] = 13771,
  [SMALL_STATE(870)] = 13775,
  [SMALL_STATE(871)] = 13779,
  [SMALL_STATE(872)] = 13783,
  [SMALL_STATE(873)] = 13787,
  [SMALL_STATE(874)] = 13791,
  [SMALL_STATE(875)] = 13795,
  [SMALL_STATE(876)] = 13799,
  [SMALL_STATE(877)] = 13803,
  [SMALL_STATE(878)] = 13807,
  [SMALL_STATE(879)] = 13811,
  [SMALL_STATE(880)] = 13815,
  [SMALL_STATE(881)] = 13819,
  [SMALL_STATE(882)] = 13823,
  [SMALL_STATE(883)] = 13827,
  [SMALL_STATE(884)] = 13831,
  [SMALL_STATE(885)] = 13835,
  [SMALL_STATE(886)] = 13839,
  [SMALL_STATE(887)] = 13843,
  [SMALL_STATE(888)] = 13847,
  [SMALL_STATE(889)] = 13851,
  [SMALL_STATE(890)] = 13855,
  [SMALL_STATE(891)] = 13859,
  [SMALL_STATE(892)] = 13863,
  [SMALL_STATE(893)] = 13867,
  [SMALL_STATE(894)] = 13871,
  [SMALL_STATE(895)] = 13875,
  [SMALL_STATE(896)] = 13879,
  [SMALL_STATE(897)] = 13883,
  [SMALL_STATE(898)] = 13887,
  [SMALL_STATE(899)] = 13891,
  [SMALL_STATE(900)] = 13895,
  [SMALL_STATE(901)] = 13899,
  [SMALL_STATE(902)] = 13903,
  [SMALL_STATE(903)] = 13907,
  [SMALL_STATE(904)] = 13911,
  [SMALL_STATE(905)] = 13915,
  [SMALL_STATE(906)] = 13919,
  [SMALL_STATE(907)] = 13923,
  [SMALL_STATE(908)] = 13927,
  [SMALL_STATE(909)] = 13931,
  [SMALL_STATE(910)] = 13935,
  [SMALL_STATE(911)] = 13939,
  [SMALL_STATE(912)] = 13943,
  [SMALL_STATE(913)] = 13947,
  [SMALL_STATE(914)] = 13951,
  [SMALL_STATE(915)] = 13955,
  [SMALL_STATE(916)] = 13959,
  [SMALL_STATE(917)] = 13963,
  [SMALL_STATE(918)] = 13967,
  [SMALL_STATE(919)] = 13971,
  [SMALL_STATE(920)] = 13975,
  [SMALL_STATE(921)] = 13979,
  [SMALL_STATE(922)] = 13983,
  [SMALL_STATE(923)] = 13987,
  [SMALL_STATE(924)] = 13991,
  [SMALL_STATE(925)] = 13995,
  [SMALL_STATE(926)] = 13999,
  [SMALL_STATE(927)] = 14003,
  [SMALL_STATE(928)] = 14007,
  [SMALL_STATE(929)] = 14011,
  [SMALL_STATE(930)] = 14015,
  [SMALL_STATE(931)] = 14019,
  [SMALL_STATE(932)] = 14023,
  [SMALL_STATE(933)] = 14027,
  [SMALL_STATE(934)] = 14031,
  [SMALL_STATE(935)] = 14035,
  [SMALL_STATE(936)] = 14039,
  [SMALL_STATE(937)] = 14043,
  [SMALL_STATE(938)] = 14047,
  [SMALL_STATE(939)] = 14051,
  [SMALL_STATE(940)] = 14055,
  [SMALL_STATE(941)] = 14059,
  [SMALL_STATE(942)] = 14063,
  [SMALL_STATE(943)] = 14067,
  [SMALL_STATE(944)] = 14071,
  [SMALL_STATE(945)] = 14075,
  [SMALL_STATE(946)] = 14079,
  [SMALL_STATE(947)] = 14083,
  [SMALL_STATE(948)] = 14087,
  [SMALL_STATE(949)] = 14091,
  [SMALL_STATE(950)] = 14095,
  [SMALL_STATE(951)] = 14099,
  [SMALL_STATE(952)] = 14103,
  [SMALL_STATE(953)] = 14107,
  [SMALL_STATE(954)] = 14111,
  [SMALL_STATE(955)] = 14115,
  [SMALL_STATE(956)] = 14119,
  [SMALL_STATE(957)] = 14123,
  [SMALL_STATE(958)] = 14127,
  [SMALL_STATE(959)] = 14131,
  [SMALL_STATE(960)] = 14135,
  [SMALL_STATE(961)] = 14139,
  [SMALL_STATE(962)] = 14143,
  [SMALL_STATE(963)] = 14147,
  [SMALL_STATE(964)] = 14151,
  [SMALL_STATE(965)] = 14155,
  [SMALL_STATE(966)] = 14159,
  [SMALL_STATE(967)] = 14163,
  [SMALL_STATE(968)] = 14167,
  [SMALL_STATE(969)] = 14171,
  [SMALL_STATE(970)] = 14175,
  [SMALL_STATE(971)] = 14179,
  [SMALL_STATE(972)] = 14183,
  [SMALL_STATE(973)] = 14187,
  [SMALL_STATE(974)] = 14191,
  [SMALL_STATE(975)] = 14195,
  [SMALL_STATE(976)] = 14199,
  [SMALL_STATE(977)] = 14203,
  [SMALL_STATE(978)] = 14207,
  [SMALL_STATE(979)] = 14211,
  [SMALL_STATE(980)] = 14215,
  [SMALL_STATE(981)] = 14219,
  [SMALL_STATE(982)] = 14223,
  [SMALL_STATE(983)] = 14227,
  [SMALL_STATE(984)] = 14231,
  [SMALL_STATE(985)] = 14235,
  [SMALL_STATE(986)] = 14239,
  [SMALL_STATE(987)] = 14243,
  [SMALL_STATE(988)] = 14247,
  [SMALL_STATE(989)] = 14251,
  [SMALL_STATE(990)] = 14255,
  [SMALL_STATE(991)] = 14259,
  [SMALL_STATE(992)] = 14263,
  [SMALL_STATE(993)] = 14267,
  [SMALL_STATE(994)] = 14271,
  [SMALL_STATE(995)] = 14275,
  [SMALL_STATE(996)] = 14279,
  [SMALL_STATE(997)] = 14283,
  [SMALL_STATE(998)] = 14287,
  [SMALL_STATE(999)] = 14291,
  [SMALL_STATE(1000)] = 14295,
  [SMALL_STATE(1001)] = 14299,
  [SMALL_STATE(1002)] = 14303,
  [SMALL_STATE(1003)] = 14307,
  [SMALL_STATE(1004)] = 14311,
  [SMALL_STATE(1005)] = 14315,
  [SMALL_STATE(1006)] = 14319,
  [SMALL_STATE(1007)] = 14323,
  [SMALL_STATE(1008)] = 14327,
  [SMALL_STATE(1009)] = 14331,
  [SMALL_STATE(1010)] = 14335,
  [SMALL_STATE(1011)] = 14339,
  [SMALL_STATE(1012)] = 14343,
  [SMALL_STATE(1013)] = 14347,
  [SMALL_STATE(1014)] = 14351,
  [SMALL_STATE(1015)] = 14355,
  [SMALL_STATE(1016)] = 14359,
  [SMALL_STATE(1017)] = 14363,
  [SMALL_STATE(1018)] = 14367,
  [SMALL_STATE(1019)] = 14371,
  [SMALL_STATE(1020)] = 14375,
  [SMALL_STATE(1021)] = 14379,
  [SMALL_STATE(1022)] = 14383,
  [SMALL_STATE(1023)] = 14387,
  [SMALL_STATE(1024)] = 14391,
  [SMALL_STATE(1025)] = 14395,
  [SMALL_STATE(1026)] = 14399,
  [SMALL_STATE(1027)] = 14403,
  [SMALL_STATE(1028)] = 14407,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(390),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(551),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1027),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(395),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(494),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(507),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(337),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1025),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 13),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 13),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 24),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(51),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 21),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(376),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 23),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(379),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(627),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(595),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(648),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 20),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(413),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(485),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 8),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(520),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 25),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 25),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 7),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 7),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 28),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 12),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 25),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 25),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 25),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(357),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(324),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(198),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(971),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(441),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(462),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(335),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(474),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(466),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(36),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(526),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(760),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(766),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(675),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(41),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1015),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(697),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(511),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(475),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 22),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 19),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 27),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1871] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
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
