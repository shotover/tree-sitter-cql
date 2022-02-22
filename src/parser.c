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
#define STATE_COUNT 976
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 295
#define ALIAS_COUNT 6
#define TOKEN_COUNT 140
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
  aux_sym_drop_user_token1 = 93,
  aux_sym_create_function_token1 = 94,
  aux_sym_create_function_token2 = 95,
  aux_sym_create_function_token3 = 96,
  aux_sym_create_function_token4 = 97,
  aux_sym_data_type_name_token1 = 98,
  aux_sym_data_type_name_token2 = 99,
  aux_sym_data_type_name_token3 = 100,
  aux_sym_data_type_name_token4 = 101,
  aux_sym_data_type_name_token5 = 102,
  aux_sym_data_type_name_token6 = 103,
  aux_sym_data_type_name_token7 = 104,
  aux_sym_data_type_name_token8 = 105,
  aux_sym_data_type_name_token9 = 106,
  aux_sym_data_type_name_token10 = 107,
  aux_sym_data_type_name_token11 = 108,
  aux_sym_data_type_name_token12 = 109,
  aux_sym_data_type_name_token13 = 110,
  aux_sym_data_type_name_token14 = 111,
  aux_sym_data_type_name_token15 = 112,
  aux_sym_data_type_name_token16 = 113,
  aux_sym_data_type_name_token17 = 114,
  aux_sym_data_type_name_token18 = 115,
  aux_sym_data_type_name_token19 = 116,
  aux_sym_data_type_name_token20 = 117,
  aux_sym_data_type_name_token21 = 118,
  aux_sym_data_type_name_token22 = 119,
  aux_sym_return_mode_token1 = 120,
  aux_sym_return_mode_token2 = 121,
  aux_sym_create_keyspace_token1 = 122,
  aux_sym_create_keyspace_token2 = 123,
  aux_sym_durable_writes_token1 = 124,
  aux_sym_durable_writes_token2 = 125,
  aux_sym_role_with_options_token1 = 126,
  aux_sym_role_with_options_token2 = 127,
  aux_sym_role_with_options_token3 = 128,
  aux_sym_role_with_options_token4 = 129,
  aux_sym_primary_key_column_token1 = 130,
  aux_sym_clustering_order_token1 = 131,
  aux_sym_order_direction_token1 = 132,
  aux_sym_order_direction_token2 = 133,
  aux_sym_alter_table_add_token1 = 134,
  aux_sym_alter_table_drop_compact_storage_token1 = 135,
  aux_sym_alter_table_drop_compact_storage_token2 = 136,
  aux_sym_alter_table_rename_token1 = 137,
  aux_sym_user_super_user_token1 = 138,
  aux_sym_apply_batch_token1 = 139,
  sym_source_file = 140,
  sym__statement = 141,
  sym_select_statement = 142,
  sym_select_elements = 143,
  sym_select_element = 144,
  sym_function_call = 145,
  sym_function_args = 146,
  sym_constant = 147,
  sym__uuid = 148,
  sym__string_literal = 149,
  aux_sym__decimal_literal = 150,
  sym__float_literal = 151,
  sym__hexadecimal_literal = 152,
  sym_code_block = 153,
  sym_from_spec = 154,
  sym_from_spec_element = 155,
  sym_where_spec = 156,
  sym_relation_elements = 157,
  sym_relation_element = 158,
  sym_assignment_tuple = 159,
  sym_relalationContainsKey = 160,
  sym_relalationContains = 161,
  sym_order_spec = 162,
  sym_order_spec_element = 163,
  sym_delete_statement = 164,
  sym_begin_batch = 165,
  sym_delete_column_list = 166,
  sym_delete_column_item = 167,
  sym_using_timestamp_spec = 168,
  sym_timestamp = 169,
  sym_if_exist = 170,
  sym_if_spec = 171,
  sym_if_condition_list = 172,
  sym_if_condition = 173,
  sym_insert_statement = 174,
  sym_keyspace = 175,
  sym_table = 176,
  sym_insert_column_spec = 177,
  sym_column_list = 178,
  sym_column = 179,
  sym_insert_values_spec = 180,
  sym_expression_list = 181,
  sym_expression = 182,
  sym_assignment_map = 183,
  sym_assignment_set = 184,
  sym_assignment_list = 185,
  sym_if_not_exist = 186,
  sym_using_ttl_timestamp = 187,
  sym_ttl = 188,
  sym_truncate = 189,
  sym_create_index = 190,
  sym_index_name = 191,
  sym_index_column_spec = 192,
  sym_index_keys_spec = 193,
  sym_index_entries_s_spec = 194,
  sym_index_full_spec = 195,
  sym_drop_index = 196,
  sym_update = 197,
  sym_assignment_element = 198,
  sym_use = 199,
  sym_grant = 200,
  sym_priviledge = 201,
  sym_resource = 202,
  sym_role = 203,
  sym_function = 204,
  sym_revoke = 205,
  sym_list_roles = 206,
  sym_list_permissions = 207,
  sym_drop_function = 208,
  sym_drop_keyspace = 209,
  sym_drop_role = 210,
  sym_drop_table = 211,
  sym_drop_trigger = 212,
  sym_drop_user = 213,
  sym_user = 214,
  sym_create_function = 215,
  sym_param = 216,
  sym_data_type = 217,
  sym_data_type_name = 218,
  sym_data_type_definition = 219,
  sym_return_mode = 220,
  sym_language = 221,
  sym_create_keyspace = 222,
  sym_replication_list_item = 223,
  sym_durable_writes = 224,
  sym_create_role = 225,
  sym_role_with = 226,
  sym_role_with_options = 227,
  sym_option_hash = 228,
  sym_option_hash_item = 229,
  sym_create_table = 230,
  sym_column_definition_list = 231,
  sym_column_definition = 232,
  sym_primary_key_column = 233,
  sym_primary_key_element = 234,
  sym_primary_key_definition = 235,
  sym_single_primary_key = 236,
  sym_compound_key = 237,
  sym_partition_key = 238,
  sym_clustering_key_list = 239,
  sym_clustering_key = 240,
  sym_composite_key = 241,
  sym_partition_key_list = 242,
  sym_with_element = 243,
  sym_table_options = 244,
  sym_table_option_item = 245,
  sym_table_option_name = 246,
  sym_table_option_value = 247,
  sym_clustering_order = 248,
  sym_order_direction = 249,
  sym_create_trigger = 250,
  sym_trigger = 251,
  sym_trigger_class = 252,
  sym_create_user = 253,
  sym_alter_keyspace = 254,
  sym_replication_list = 255,
  sym_alter_role = 256,
  sym_alter_table = 257,
  sym_alter_table_operation = 258,
  sym_alter_table_add = 259,
  sym_alter_table_column_definition = 260,
  sym_alter_table_drop_columns = 261,
  sym_alter_table_drop_column_list = 262,
  sym_alter_table_drop_compact_storage = 263,
  sym_alter_table_rename = 264,
  sym_alter_table_with = 265,
  sym_alter_user = 266,
  sym_user_password = 267,
  sym_user_super_user = 268,
  sym_apply_batch = 269,
  aux_sym_source_file_repeat1 = 270,
  aux_sym_select_elements_repeat1 = 271,
  aux_sym_function_args_repeat1 = 272,
  aux_sym__hexadecimal_literal_repeat1 = 273,
  aux_sym__hexadecimal_literal_repeat2 = 274,
  aux_sym_relation_elements_repeat1 = 275,
  aux_sym_relation_element_repeat1 = 276,
  aux_sym_relation_element_repeat2 = 277,
  aux_sym_assignment_tuple_repeat1 = 278,
  aux_sym_delete_column_list_repeat1 = 279,
  aux_sym_if_condition_list_repeat1 = 280,
  aux_sym_column_list_repeat1 = 281,
  aux_sym_expression_list_repeat1 = 282,
  aux_sym_assignment_map_repeat1 = 283,
  aux_sym_update_repeat1 = 284,
  aux_sym_create_function_repeat1 = 285,
  aux_sym_data_type_definition_repeat1 = 286,
  aux_sym_role_with_repeat1 = 287,
  aux_sym_option_hash_repeat1 = 288,
  aux_sym_column_definition_list_repeat1 = 289,
  aux_sym_clustering_key_list_repeat1 = 290,
  aux_sym_partition_key_list_repeat1 = 291,
  aux_sym_table_options_repeat1 = 292,
  aux_sym_replication_list_repeat1 = 293,
  aux_sym_alter_table_column_definition_repeat1 = 294,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 295,
  anon_alias_sym_ALL_ROLES = 296,
  anon_alias_sym_CONTAINS = 297,
  anon_alias_sym_DROP_INDEX = 298,
  anon_alias_sym_IF = 299,
  anon_alias_sym_ORDER_BY = 300,
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
  [aux_sym_drop_trigger_token1] = aux_sym_drop_trigger_token1,
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
  [aux_sym_drop_trigger_token1] = {
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
  [50] = 18,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 43,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 59,
  [60] = 22,
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
  [98] = 51,
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
  [109] = 57,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 53,
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
  [173] = 171,
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
  [262] = 219,
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
  [310] = 303,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 305,
  [315] = 307,
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
  [334] = 43,
  [335] = 44,
  [336] = 336,
  [337] = 332,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 341,
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
  [356] = 352,
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
  [374] = 367,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 370,
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
  [405] = 172,
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
  [461] = 222,
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
  [489] = 480,
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
  [596] = 127,
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
  [618] = 617,
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
  [642] = 617,
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
  [957] = 880,
  [958] = 958,
  [959] = 959,
  [960] = 798,
  [961] = 961,
  [962] = 962,
  [963] = 963,
  [964] = 777,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 958,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 747,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(425);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(437);
      if (lookahead == '0') ADVANCE(447);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == '<') ADVANCE(642);
      if (lookahead == '=') ADVANCE(641);
      if (lookahead == '>') ADVANCE(643);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(658);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '{') ADVANCE(668);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(449);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(335);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(527);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(503);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(591);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(621);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(623);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '0') ADVANCE(463);
      if (lookahead == 'X') ADVANCE(470);
      if (lookahead == '[') ADVANCE(658);
      if (lookahead == '{') ADVANCE(668);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(636);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(459);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(465);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(538);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(686);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(662);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(662);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 139:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(662);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(702);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(702);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(397);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      END_STATE();
    case 144:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(660);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(734);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 151:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 152:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 153:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(657);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 163:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 165:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 195:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 227:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(686);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 281:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 282:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(713);
      END_STATE();
    case 283:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(680);
      END_STATE();
    case 284:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(661);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 286:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 287:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 288:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(728);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(688);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(694);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 383:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 384:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 385:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 393:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 395:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 396:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 397:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 398:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 399:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 400:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      END_STATE();
    case 401:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 402:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(676);
      END_STATE();
    case 403:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 404:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 405:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 406:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(650);
      END_STATE();
    case 407:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 408:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 409:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(733);
      END_STATE();
    case 410:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(649);
      END_STATE();
    case 411:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 412:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 413:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 414:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(103);
      END_STATE();
    case 415:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 416:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 417:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 418:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(461);
      END_STATE();
    case 420:
      if (eof) ADVANCE(425);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(437);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == '<') ADVANCE(642);
      if (lookahead == '=') ADVANCE(641);
      if (lookahead == '>') ADVANCE(643);
      if (lookahead == '[') ADVANCE(658);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '{') ADVANCE(668);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(335);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(28);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 421:
      if (eof) ADVANCE(425);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '0') ADVANCE(463);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(658);
      if (lookahead == '{') ADVANCE(668);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 422:
      if (eof) ADVANCE(425);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(515);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(546);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(517);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 423:
      if (eof) ADVANCE(425);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(448);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 424:
      if (eof) ADVANCE(425);
      if (lookahead == ';') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(448);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(466);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(465);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(635);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(634);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(637);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(637);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(472);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(621);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(634);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(635);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(645);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(678);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_create_function_token3);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_create_function_token4);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token2);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_durable_writes_token2);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_primary_key_column_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 741:
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
  [4] = {.lex_state = 420},
  [5] = {.lex_state = 420},
  [6] = {.lex_state = 420},
  [7] = {.lex_state = 420},
  [8] = {.lex_state = 420},
  [9] = {.lex_state = 420},
  [10] = {.lex_state = 420},
  [11] = {.lex_state = 420},
  [12] = {.lex_state = 420},
  [13] = {.lex_state = 420},
  [14] = {.lex_state = 420},
  [15] = {.lex_state = 420},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 420},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 420},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 420},
  [34] = {.lex_state = 420},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 421},
  [37] = {.lex_state = 421},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 420},
  [40] = {.lex_state = 420},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 420},
  [43] = {.lex_state = 423},
  [44] = {.lex_state = 423},
  [45] = {.lex_state = 420},
  [46] = {.lex_state = 420},
  [47] = {.lex_state = 422},
  [48] = {.lex_state = 420},
  [49] = {.lex_state = 420},
  [50] = {.lex_state = 421},
  [51] = {.lex_state = 420},
  [52] = {.lex_state = 420},
  [53] = {.lex_state = 420},
  [54] = {.lex_state = 420},
  [55] = {.lex_state = 424},
  [56] = {.lex_state = 420},
  [57] = {.lex_state = 420},
  [58] = {.lex_state = 424},
  [59] = {.lex_state = 420},
  [60] = {.lex_state = 421},
  [61] = {.lex_state = 420},
  [62] = {.lex_state = 421},
  [63] = {.lex_state = 420},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 420},
  [66] = {.lex_state = 420},
  [67] = {.lex_state = 420},
  [68] = {.lex_state = 420},
  [69] = {.lex_state = 420},
  [70] = {.lex_state = 420},
  [71] = {.lex_state = 420},
  [72] = {.lex_state = 420},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 420},
  [78] = {.lex_state = 420},
  [79] = {.lex_state = 420},
  [80] = {.lex_state = 420},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 420},
  [85] = {.lex_state = 420},
  [86] = {.lex_state = 420},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 420},
  [90] = {.lex_state = 420},
  [91] = {.lex_state = 420},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 420},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 420},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 420},
  [102] = {.lex_state = 420},
  [103] = {.lex_state = 420},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 420},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 420},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 420},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 420},
  [116] = {.lex_state = 420},
  [117] = {.lex_state = 420},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 420},
  [121] = {.lex_state = 420},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 420},
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
  [139] = {.lex_state = 420},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 420},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 420},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 420},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
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
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
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
  [185] = {.lex_state = 421},
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
  [219] = {.lex_state = 421},
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
  [238] = {.lex_state = 421},
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
  [262] = {.lex_state = 421},
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
  [303] = {.lex_state = 421},
  [304] = {.lex_state = 421},
  [305] = {.lex_state = 421},
  [306] = {.lex_state = 421},
  [307] = {.lex_state = 421},
  [308] = {.lex_state = 421},
  [309] = {.lex_state = 421},
  [310] = {.lex_state = 421},
  [311] = {.lex_state = 421},
  [312] = {.lex_state = 421},
  [313] = {.lex_state = 421},
  [314] = {.lex_state = 421},
  [315] = {.lex_state = 421},
  [316] = {.lex_state = 421},
  [317] = {.lex_state = 421},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 420},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 2},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 420},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 420},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 17},
  [332] = {.lex_state = 420},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 420},
  [338] = {.lex_state = 143},
  [339] = {.lex_state = 1},
  [340] = {.lex_state = 420},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 143},
  [344] = {.lex_state = 420},
  [345] = {.lex_state = 1},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 1},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 420},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 420},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 420},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 420},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 420},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 421},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 420},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 1},
  [431] = {.lex_state = 1},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 420},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 6},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 420},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 420},
  [484] = {.lex_state = 420},
  [485] = {.lex_state = 420},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 420},
  [488] = {.lex_state = 420},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 420},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 420},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 6},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 420},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 420},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 420},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 420},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 420},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 420},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 420},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 1},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 420},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 6},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 1},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 1},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 1},
  [591] = {.lex_state = 420},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 420},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 420},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 1},
  [607] = {.lex_state = 420},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 420},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 1},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 420},
  [617] = {.lex_state = 6},
  [618] = {.lex_state = 6},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 420},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 420},
  [623] = {.lex_state = 1},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 420},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 420},
  [629] = {.lex_state = 420},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 1},
  [635] = {.lex_state = 420},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 1},
  [640] = {.lex_state = 6},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 6},
  [643] = {.lex_state = 1},
  [644] = {.lex_state = 6},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 1},
  [647] = {.lex_state = 420},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 1},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 420},
  [652] = {.lex_state = 1},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 420},
  [658] = {.lex_state = 420},
  [659] = {.lex_state = 1},
  [660] = {.lex_state = 420},
  [661] = {.lex_state = 420},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 1},
  [664] = {.lex_state = 1},
  [665] = {.lex_state = 1},
  [666] = {.lex_state = 420},
  [667] = {.lex_state = 1},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 1},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 420},
  [676] = {.lex_state = 420},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 1},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 1},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 1},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 1},
  [687] = {.lex_state = 1},
  [688] = {.lex_state = 420},
  [689] = {.lex_state = 1},
  [690] = {.lex_state = 1},
  [691] = {.lex_state = 1},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 420},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 1},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 420},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 1},
  [703] = {.lex_state = 1},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 420},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 1},
  [711] = {.lex_state = 1},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 1},
  [716] = {.lex_state = 420},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 1},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 1},
  [722] = {.lex_state = 1},
  [723] = {.lex_state = 1},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 1},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 1},
  [731] = {.lex_state = 420},
  [732] = {.lex_state = 1},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 421},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 420},
  [740] = {.lex_state = 421},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 420},
  [747] = {.lex_state = 1},
  [748] = {.lex_state = 421},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 421},
  [762] = {.lex_state = 423},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 420},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 1},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 1},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 5},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 420},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 421},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 457},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 1},
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
  [805] = {.lex_state = 420},
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
  [818] = {.lex_state = 0},
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
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 420},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 420},
  [839] = {.lex_state = 420},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 420},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 421},
  [852] = {.lex_state = 421},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 420},
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
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 421},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 420},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 420},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 421},
  [880] = {.lex_state = 420},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 1},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 420},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 5},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 421},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 1},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 1},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 420},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 420},
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
  [925] = {.lex_state = 420},
  [926] = {.lex_state = 420},
  [927] = {.lex_state = 6},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 421},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 420},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 420},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 1},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 420},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 1},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 420},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 420},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 420},
  [954] = {.lex_state = 1},
  [955] = {.lex_state = 1},
  [956] = {.lex_state = 1},
  [957] = {.lex_state = 420},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 420},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 421},
  [964] = {.lex_state = 1},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 420},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 421},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 1},
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
    [sym_source_file] = STATE(965),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(218),
    [sym_delete_statement] = STATE(218),
    [sym_begin_batch] = STATE(478),
    [sym_insert_statement] = STATE(218),
    [sym_truncate] = STATE(218),
    [sym_create_index] = STATE(218),
    [sym_drop_index] = STATE(218),
    [sym_update] = STATE(218),
    [sym_use] = STATE(218),
    [sym_grant] = STATE(218),
    [sym_revoke] = STATE(218),
    [sym_list_roles] = STATE(218),
    [sym_list_permissions] = STATE(218),
    [sym_drop_function] = STATE(218),
    [sym_drop_keyspace] = STATE(218),
    [sym_drop_role] = STATE(218),
    [sym_drop_table] = STATE(218),
    [sym_drop_trigger] = STATE(218),
    [sym_drop_user] = STATE(218),
    [sym_create_function] = STATE(218),
    [sym_create_keyspace] = STATE(218),
    [sym_create_role] = STATE(218),
    [sym_create_table] = STATE(218),
    [sym_create_trigger] = STATE(218),
    [sym_create_user] = STATE(218),
    [sym_alter_keyspace] = STATE(218),
    [sym_alter_role] = STATE(218),
    [sym_alter_table] = STATE(218),
    [sym_alter_user] = STATE(218),
    [sym_apply_batch] = STATE(218),
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
    STATE(478), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(218), 29,
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
      sym_create_user,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_user,
      sym_apply_batch,
  [84] = 18,
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
    STATE(478), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(218), 29,
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
      sym_create_user,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_user,
      sym_apply_batch,
  [168] = 3,
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
  [209] = 4,
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
  [251] = 1,
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
  [287] = 4,
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
  [328] = 3,
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
  [367] = 3,
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
  [406] = 2,
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
  [441] = 2,
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
  [476] = 2,
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
  [511] = 1,
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
  [543] = 1,
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
  [575] = 1,
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
  [607] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(785), 1,
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
  [644] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(181), 1,
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
  [681] = 2,
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
  [714] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(935), 1,
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
  [751] = 2,
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
  [784] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(151), 1,
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
  [821] = 2,
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
  [854] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(913), 1,
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
    STATE(41), 1,
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
  [928] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(760), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(832), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(471), 1,
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
    STATE(41), 1,
      sym_data_type_name,
    STATE(869), 1,
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
  [1076] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
      sym_data_type_name,
    STATE(678), 1,
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
  [1113] = 2,
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
  [1146] = 4,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(41), 1,
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
  [1183] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(707), 1,
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
  [1217] = 1,
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
  [1247] = 1,
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
  [1277] = 3,
    ACTIONS(116), 1,
      sym_object_name,
    STATE(572), 1,
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
  [1311] = 16,
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
    STATE(486), 1,
      sym_expression,
    STATE(961), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(615), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1368] = 15,
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
    STATE(693), 1,
      sym_expression,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(615), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1422] = 1,
    ACTIONS(158), 22,
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
  [1447] = 2,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(160), 21,
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
  [1474] = 7,
    ACTIONS(166), 1,
      aux_sym_select_statement_token4,
    ACTIONS(168), 1,
      aux_sym_select_statement_token5,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    STATE(80), 1,
      sym_where_spec,
    STATE(155), 1,
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
  [1511] = 3,
    ACTIONS(176), 1,
      anon_sym_LT,
    STATE(83), 1,
      sym_data_type_definition,
    ACTIONS(174), 20,
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
  [1540] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(180), 1,
      aux_sym_select_statement_token4,
    ACTIONS(182), 1,
      aux_sym_select_statement_token5,
    STATE(85), 1,
      sym_where_spec,
    STATE(158), 1,
      sym_order_spec,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1577] = 3,
    ACTIONS(186), 1,
      sym__hex_digit,
    STATE(44), 1,
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
  [1606] = 3,
    ACTIONS(190), 1,
      sym__hex_digit,
    STATE(44), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 20,
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
  [1635] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(94), 1,
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
  [1666] = 7,
    ACTIONS(170), 1,
      aux_sym_where_spec_token1,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(84), 1,
      sym_where_spec,
    STATE(159), 1,
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
  [1703] = 8,
    ACTIONS(205), 1,
      sym_object_name,
    ACTIONS(207), 1,
      aux_sym_clustering_order_token1,
    STATE(93), 1,
      sym_table_option_item,
    STATE(148), 1,
      sym_table_options,
    STATE(217), 1,
      sym_clustering_order,
    STATE(737), 1,
      sym_table_option_name,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(203), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1742] = 1,
    ACTIONS(209), 21,
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
  [1766] = 1,
    ACTIONS(211), 21,
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
  [1790] = 1,
    ACTIONS(120), 21,
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
  [1814] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(57), 1,
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
  [1842] = 1,
    ACTIONS(217), 21,
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
  [1866] = 3,
    ACTIONS(221), 1,
      aux_sym_relation_elements_token1,
    STATE(53), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(219), 19,
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
  [1894] = 1,
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
  [1918] = 3,
    ACTIONS(226), 1,
      sym__hex_digit,
    STATE(58), 1,
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
  [1946] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(228), 19,
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
  [1974] = 3,
    ACTIONS(215), 1,
      aux_sym_relation_elements_token1,
    STATE(53), 1,
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
  [2002] = 3,
    ACTIONS(232), 1,
      sym__hex_digit,
    STATE(58), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 19,
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
  [2030] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(235), 20,
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
  [2056] = 1,
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
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [2080] = 1,
    ACTIONS(237), 21,
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
  [2104] = 3,
    STATE(130), 1,
      sym_order_direction,
    ACTIONS(241), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(239), 18,
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
  [2132] = 1,
    ACTIONS(126), 21,
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
  [2156] = 15,
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
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(719), 1,
      sym_constant,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(457), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2208] = 1,
    ACTIONS(251), 21,
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
  [2232] = 1,
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
  [2256] = 1,
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
  [2280] = 1,
    ACTIONS(257), 21,
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
  [2304] = 1,
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
  [2328] = 1,
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
  [2352] = 1,
    ACTIONS(261), 21,
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
  [2376] = 2,
    ACTIONS(265), 1,
      aux_sym_relation_element_token1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [2401] = 5,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(271), 1,
      aux_sym_if_exist_token1,
    STATE(131), 1,
      sym_if_not_exist,
    STATE(212), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2432] = 5,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(271), 1,
      aux_sym_if_exist_token1,
    STATE(161), 1,
      sym_if_not_exist,
    STATE(225), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2463] = 5,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(271), 1,
      aux_sym_if_exist_token1,
    STATE(136), 1,
      sym_if_not_exist,
    STATE(272), 1,
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
  [2494] = 5,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(271), 1,
      aux_sym_if_exist_token1,
    STATE(146), 1,
      sym_if_not_exist,
    STATE(214), 1,
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
  [2525] = 1,
    ACTIONS(235), 20,
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
  [2548] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(279), 18,
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
  [2575] = 1,
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
  [2598] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(159), 1,
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
  [2629] = 1,
    ACTIONS(281), 20,
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
  [2652] = 15,
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
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(932), 1,
      sym_function_args,
    ACTIONS(243), 2,
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
  [2703] = 1,
    ACTIONS(289), 20,
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
  [2726] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(180), 1,
      aux_sym_select_statement_token4,
    ACTIONS(182), 1,
      aux_sym_select_statement_token5,
    STATE(158), 1,
      sym_order_spec,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2757] = 5,
    ACTIONS(172), 1,
      aux_sym_order_spec_token1,
    ACTIONS(293), 1,
      aux_sym_select_statement_token4,
    ACTIONS(295), 1,
      aux_sym_select_statement_token5,
    STATE(124), 1,
      sym_order_spec,
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
  [2788] = 1,
    ACTIONS(297), 20,
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
  [2811] = 5,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(271), 1,
      aux_sym_if_exist_token1,
    STATE(133), 1,
      sym_if_not_exist,
    STATE(192), 1,
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
  [2842] = 1,
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
  [2865] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(305), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [2893] = 1,
    ACTIONS(307), 19,
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
  [2915] = 1,
    ACTIONS(309), 19,
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
  [2937] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(210), 2,
      sym_if_exist,
      sym_if_spec,
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
  [2963] = 3,
    ACTIONS(317), 1,
      aux_sym_relation_elements_token1,
    STATE(106), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(315), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2989] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(224), 2,
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
  [3015] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(182), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3043] = 3,
    STATE(234), 1,
      sym_user_super_user,
    ACTIONS(323), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3069] = 3,
    STATE(269), 1,
      sym_user_super_user,
    ACTIONS(323), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3095] = 3,
    ACTIONS(327), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
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
  [3121] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(247), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(329), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3147] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(273), 2,
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
  [3173] = 1,
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
  [3195] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(295), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3223] = 1,
    ACTIONS(335), 19,
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
  [3245] = 3,
    STATE(252), 1,
      sym_user_super_user,
    ACTIONS(323), 2,
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
  [3271] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(279), 2,
      sym_if_exist,
      sym_if_spec,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3297] = 3,
    ACTIONS(317), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(341), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3323] = 2,
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
  [3347] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(206), 2,
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
  [3373] = 3,
    ACTIONS(327), 1,
      aux_sym_relation_elements_token1,
    STATE(118), 1,
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
  [3399] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(213), 2,
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
  [3425] = 1,
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
  [3447] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(244), 2,
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
  [3473] = 3,
    ACTIONS(357), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(355), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3499] = 1,
    ACTIONS(360), 19,
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
  [3521] = 1,
    ACTIONS(362), 19,
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
  [3543] = 1,
    ACTIONS(364), 19,
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
  [3565] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(368), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3593] = 3,
    ACTIONS(370), 1,
      aux_sym_relation_elements_token1,
    STATE(118), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(219), 17,
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
  [3619] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(243), 2,
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
  [3645] = 1,
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
  [3667] = 4,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(379), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [3695] = 3,
    ACTIONS(313), 1,
      aux_sym_if_exist_token1,
    STATE(287), 2,
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
  [3721] = 1,
    ACTIONS(383), 19,
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
  [3743] = 3,
    ACTIONS(305), 1,
      aux_sym_select_statement_token5,
    ACTIONS(385), 1,
      aux_sym_select_statement_token4,
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
  [3768] = 1,
    ACTIONS(387), 18,
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
  [3789] = 1,
    ACTIONS(389), 18,
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
  [3810] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3835] = 2,
    ACTIONS(398), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3858] = 3,
    ACTIONS(402), 1,
      aux_sym_create_keyspace_token1,
    STATE(241), 1,
      sym_role_with,
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
  [3883] = 1,
    ACTIONS(404), 18,
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
  [3904] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(272), 1,
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
  [3929] = 3,
    ACTIONS(408), 1,
      aux_sym_create_keyspace_token1,
    STATE(226), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3954] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(225), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3979] = 3,
    ACTIONS(412), 1,
      aux_sym_create_index_token3,
    ACTIONS(414), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4004] = 3,
    ACTIONS(418), 1,
      aux_sym_list_roles_token2,
    ACTIONS(420), 1,
      aux_sym_list_roles_token3,
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
  [4029] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(214), 1,
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
  [4054] = 3,
    ACTIONS(402), 1,
      aux_sym_create_keyspace_token1,
    STATE(291), 1,
      sym_role_with,
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
  [4079] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4104] = 1,
    ACTIONS(428), 18,
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
  [4125] = 2,
    ACTIONS(430), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4148] = 1,
    ACTIONS(432), 18,
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
  [4169] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(162), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4194] = 1,
    ACTIONS(355), 18,
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
  [4215] = 3,
    ACTIONS(440), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4240] = 3,
    ACTIONS(408), 1,
      aux_sym_create_keyspace_token1,
    STATE(189), 1,
      sym_with_element,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4265] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
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
  [4290] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(445), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4315] = 3,
    ACTIONS(452), 1,
      aux_sym_clustering_order_token1,
    STATE(227), 1,
      sym_clustering_order,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4340] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_role_with_repeat1,
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
  [4365] = 13,
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
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(881), 1,
      sym_function_args,
    ACTIONS(243), 2,
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
  [4410] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4435] = 1,
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
  [4456] = 3,
    ACTIONS(408), 1,
      aux_sym_create_keyspace_token1,
    STATE(258), 1,
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
  [4481] = 1,
    ACTIONS(463), 18,
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
  [4502] = 3,
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
  [4527] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_column_list_repeat1,
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
  [4552] = 3,
    ACTIONS(402), 1,
      aux_sym_create_keyspace_token1,
    STATE(195), 1,
      sym_role_with,
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
  [4577] = 3,
    ACTIONS(293), 1,
      aux_sym_select_statement_token4,
    ACTIONS(295), 1,
      aux_sym_select_statement_token5,
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
  [4602] = 3,
    ACTIONS(180), 1,
      aux_sym_select_statement_token4,
    ACTIONS(182), 1,
      aux_sym_select_statement_token5,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(471), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4648] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(274), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4673] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_role_with_repeat1,
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
  [4698] = 1,
    ACTIONS(477), 18,
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
  [4719] = 3,
    ACTIONS(408), 1,
      aux_sym_create_keyspace_token1,
    STATE(199), 1,
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
  [4744] = 1,
    ACTIONS(391), 18,
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
  [4765] = 3,
    ACTIONS(483), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
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
  [4790] = 3,
    ACTIONS(483), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
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
  [4815] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_column_list_repeat1,
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
  [4840] = 1,
    ACTIONS(454), 17,
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
  [4860] = 1,
    ACTIONS(438), 17,
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
  [4880] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_0X,
    ACTIONS(491), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(66), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4922] = 1,
    ACTIONS(493), 17,
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
  [4942] = 12,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(148), 1,
      sym__dec_digit,
    ACTIONS(150), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(66), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4984] = 12,
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
    ACTIONS(245), 1,
      sym__hex_4digit,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      sym_object_name,
    STATE(7), 1,
      aux_sym__decimal_literal,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(632), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5026] = 2,
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
  [5048] = 2,
    ACTIONS(134), 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5070] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(505), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5092] = 2,
    ACTIONS(509), 1,
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
  [5114] = 2,
    ACTIONS(513), 1,
      aux_sym_relation_elements_token1,
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
  [5136] = 2,
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
  [5158] = 1,
    ACTIONS(519), 17,
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
  [5178] = 1,
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
  [5198] = 1,
    ACTIONS(505), 17,
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
  [5218] = 1,
    ACTIONS(523), 17,
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
  [5238] = 13,
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
    STATE(420), 1,
      sym_constant,
    STATE(728), 1,
      sym_assignment_tuple,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5282] = 2,
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
  [5304] = 1,
    ACTIONS(503), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5324] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5344] = 1,
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
  [5363] = 1,
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
  [5382] = 1,
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
  [5401] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5420] = 1,
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
  [5439] = 1,
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
  [5458] = 1,
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
  [5477] = 1,
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
  [5496] = 1,
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
  [5515] = 1,
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
  [5534] = 1,
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
  [5553] = 1,
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
  [5572] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5591] = 1,
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
  [5610] = 1,
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
  [5629] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5648] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5667] = 1,
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
  [5686] = 1,
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
  [5705] = 1,
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
  [5724] = 1,
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
  [5743] = 1,
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
  [5762] = 1,
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
  [5781] = 1,
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
  [5800] = 1,
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
  [5819] = 1,
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
  [5838] = 1,
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
  [5857] = 1,
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
  [5876] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5895] = 2,
    ACTIONS(575), 1,
      anon_sym_SEMI,
    ACTIONS(573), 15,
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
  [5916] = 12,
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
    ACTIONS(489), 1,
      anon_sym_0X,
    ACTIONS(577), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(69), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [5957] = 1,
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
  [5976] = 1,
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
  [5995] = 1,
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
  [6014] = 1,
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
  [6033] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6052] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6071] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6090] = 1,
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
  [6109] = 1,
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
  [6128] = 1,
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
  [6147] = 1,
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
  [6166] = 1,
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
  [6185] = 1,
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
  [6204] = 1,
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
  [6223] = 1,
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
  [6242] = 1,
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
  [6261] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6280] = 1,
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
  [6299] = 12,
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
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(447), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6340] = 1,
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
  [6359] = 1,
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
  [6378] = 1,
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
  [6397] = 1,
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
  [6416] = 1,
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
  [6435] = 1,
    ACTIONS(329), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6454] = 1,
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
  [6473] = 1,
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
  [6492] = 1,
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
  [6511] = 1,
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
  [6530] = 1,
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
  [6549] = 1,
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
  [6568] = 1,
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
  [6587] = 1,
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
  [6606] = 1,
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
  [6625] = 1,
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
  [6644] = 1,
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
  [6663] = 1,
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
  [6682] = 1,
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
  [6701] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6720] = 1,
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
  [6739] = 1,
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
  [6758] = 1,
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
  [6777] = 12,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    ACTIONS(641), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(69), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [6818] = 1,
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
  [6837] = 1,
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
  [6856] = 1,
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
  [6875] = 1,
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
  [6894] = 1,
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
  [6913] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6932] = 1,
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
  [6951] = 1,
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
  [6970] = 1,
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
  [6989] = 1,
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
  [7008] = 1,
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
  [7027] = 1,
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
  [7046] = 1,
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
  [7065] = 1,
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
  [7084] = 1,
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
  [7103] = 1,
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
  [7122] = 1,
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
  [7141] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7160] = 1,
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
  [7179] = 1,
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
  [7198] = 1,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7217] = 1,
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
  [7236] = 1,
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
  [7255] = 1,
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
  [7274] = 1,
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
  [7293] = 1,
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
  [7312] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7331] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7350] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7369] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7388] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7407] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7426] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7445] = 1,
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
  [7464] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7483] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7502] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7521] = 1,
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
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7540] = 1,
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
  [7559] = 1,
    ACTIONS(709), 15,
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
  [7577] = 11,
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
    ACTIONS(489), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7615] = 11,
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
    STATE(347), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7653] = 11,
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
    ACTIONS(489), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(67), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7691] = 11,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(126), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7729] = 11,
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
    ACTIONS(489), 1,
      anon_sym_0X,
    STATE(7), 1,
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
  [7767] = 11,
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
    STATE(553), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7805] = 11,
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
    STATE(712), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7843] = 11,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7881] = 11,
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
    STATE(855), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7919] = 11,
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
    STATE(420), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7957] = 11,
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
    STATE(655), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [7995] = 11,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(67), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8033] = 11,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
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
  [8071] = 11,
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
    STATE(598), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8109] = 11,
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
    ACTIONS(495), 1,
      anon_sym_0X,
    STATE(7), 1,
      aux_sym__decimal_literal,
    STATE(182), 1,
      sym_constant,
    ACTIONS(138), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [8147] = 4,
    ACTIONS(713), 1,
      aux_sym_priviledge_token1,
    ACTIONS(715), 1,
      aux_sym_resource_token5,
    STATE(134), 1,
      sym_priviledge,
    ACTIONS(711), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8167] = 10,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(721), 1,
      aux_sym_truncate_token2,
    ACTIONS(723), 1,
      aux_sym_priviledge_token1,
    ACTIONS(725), 1,
      aux_sym_resource_token2,
    ACTIONS(727), 1,
      aux_sym_resource_token3,
    ACTIONS(729), 1,
      aux_sym_resource_token6,
    STATE(90), 1,
      sym_table,
    STATE(175), 1,
      sym_resource,
    STATE(850), 1,
      sym_keyspace,
  [8198] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(735), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(737), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(739), 1,
      aux_sym_index_full_spec_token1,
    STATE(774), 1,
      sym_index_column_spec,
    STATE(905), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8223] = 8,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      sym__dec_digit,
    STATE(45), 1,
      aux_sym__decimal_literal,
    STATE(139), 2,
      sym_option_hash,
      sym_table_option_value,
    STATE(141), 2,
      sym__string_literal,
      sym__float_literal,
  [8250] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(735), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(737), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(739), 1,
      aux_sym_index_full_spec_token1,
    STATE(818), 1,
      sym_index_column_spec,
    STATE(905), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8275] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(735), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(737), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(739), 1,
      aux_sym_index_full_spec_token1,
    STATE(899), 1,
      sym_index_column_spec,
    STATE(905), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8300] = 10,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(721), 1,
      aux_sym_truncate_token2,
    ACTIONS(723), 1,
      aux_sym_priviledge_token1,
    ACTIONS(725), 1,
      aux_sym_resource_token2,
    ACTIONS(727), 1,
      aux_sym_resource_token3,
    ACTIONS(729), 1,
      aux_sym_resource_token6,
    STATE(90), 1,
      sym_table,
    STATE(848), 1,
      sym_resource,
    STATE(850), 1,
      sym_keyspace,
  [8331] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(735), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(737), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(739), 1,
      aux_sym_index_full_spec_token1,
    STATE(825), 1,
      sym_index_column_spec,
    STATE(905), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8356] = 6,
    ACTIONS(745), 1,
      aux_sym_drop_index_token1,
    ACTIONS(747), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(749), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(751), 1,
      aux_sym_alter_table_rename_token1,
    STATE(275), 1,
      sym_alter_table_operation,
    STATE(289), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8379] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(735), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(737), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(739), 1,
      aux_sym_index_full_spec_token1,
    STATE(951), 1,
      sym_index_column_spec,
    STATE(905), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [8404] = 6,
    ACTIONS(745), 1,
      aux_sym_drop_index_token1,
    ACTIONS(747), 1,
      aux_sym_create_keyspace_token1,
    ACTIONS(749), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(751), 1,
      aux_sym_alter_table_rename_token1,
    STATE(288), 1,
      sym_alter_table_operation,
    STATE(289), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [8427] = 10,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(721), 1,
      aux_sym_truncate_token2,
    ACTIONS(723), 1,
      aux_sym_priviledge_token1,
    ACTIONS(725), 1,
      aux_sym_resource_token2,
    ACTIONS(727), 1,
      aux_sym_resource_token3,
    ACTIONS(729), 1,
      aux_sym_resource_token6,
    STATE(90), 1,
      sym_table,
    STATE(783), 1,
      sym_resource,
    STATE(850), 1,
      sym_keyspace,
  [8458] = 3,
    ACTIONS(713), 1,
      aux_sym_priviledge_token1,
    STATE(897), 1,
      sym_priviledge,
    ACTIONS(711), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8475] = 3,
    ACTIONS(713), 1,
      aux_sym_priviledge_token1,
    STATE(878), 1,
      sym_priviledge,
    ACTIONS(711), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [8492] = 6,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      aux_sym_relation_element_token1,
    ACTIONS(763), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(759), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(757), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8514] = 7,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(765), 1,
      anon_sym_LPAREN,
    STATE(704), 1,
      sym_column,
    STATE(820), 1,
      sym_primary_key_definition,
    STATE(822), 1,
      sym_partition_key,
    STATE(821), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [8538] = 3,
    ACTIONS(767), 1,
      sym__hex_digit,
    STATE(335), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(184), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [8554] = 3,
    ACTIONS(769), 1,
      sym__hex_digit,
    STATE(335), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(188), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [8570] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(776), 1,
      sym__dquote,
    STATE(183), 1,
      sym__string_literal,
    STATE(197), 1,
      sym_index_name,
    STATE(345), 1,
      sym_if_exist,
    STATE(778), 1,
      sym_keyspace,
  [8598] = 6,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      aux_sym_relation_element_token1,
    ACTIONS(778), 1,
      anon_sym_DOT,
    ACTIONS(784), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(782), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(780), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8620] = 8,
    ACTIONS(786), 1,
      aux_sym_truncate_token2,
    ACTIONS(788), 1,
      aux_sym_create_index_token2,
    ACTIONS(790), 1,
      aux_sym_resource_token2,
    ACTIONS(792), 1,
      aux_sym_resource_token3,
    ACTIONS(794), 1,
      aux_sym_resource_token6,
    ACTIONS(796), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(798), 1,
      aux_sym_drop_user_token1,
    ACTIONS(800), 1,
      aux_sym_create_function_token1,
  [8645] = 8,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym_object_name,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(806), 1,
      aux_sym_create_index_token3,
    STATE(183), 1,
      sym__string_literal,
    STATE(358), 1,
      sym_if_not_exist,
    STATE(775), 1,
      sym_index_name,
  [8670] = 5,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      sym__dec_digit,
    STATE(424), 1,
      aux_sym__decimal_literal,
    STATE(610), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [8688] = 6,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(86), 1,
      sym_relation_elements,
    STATE(370), 1,
      sym_function_call,
    STATE(54), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8708] = 6,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_elements,
    STATE(98), 1,
      sym_relation_element,
    STATE(383), 1,
      sym_function_call,
    STATE(54), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8728] = 7,
    ACTIONS(816), 1,
      aux_sym_truncate_token2,
    ACTIONS(818), 1,
      aux_sym_create_index_token2,
    ACTIONS(820), 1,
      aux_sym_resource_token2,
    ACTIONS(822), 1,
      aux_sym_resource_token3,
    ACTIONS(824), 1,
      aux_sym_resource_token6,
    ACTIONS(826), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(828), 1,
      aux_sym_drop_user_token1,
  [8750] = 6,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(743), 1,
      sym__dec_digit,
    STATE(45), 1,
      aux_sym__decimal_literal,
    STATE(840), 2,
      sym__string_literal,
      sym__float_literal,
  [8770] = 7,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(772), 1,
      sym_object_name,
    ACTIONS(776), 1,
      sym__dquote,
    STATE(183), 1,
      sym__string_literal,
    STATE(253), 1,
      sym_index_name,
    STATE(813), 1,
      sym_keyspace,
  [8792] = 7,
    ACTIONS(830), 1,
      aux_sym_select_statement_token2,
    ACTIONS(832), 1,
      aux_sym_select_statement_token3,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(836), 1,
      sym_object_name,
    STATE(484), 1,
      sym_select_element,
    STATE(487), 1,
      sym_function_call,
    STATE(620), 1,
      sym_select_elements,
  [8814] = 6,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(579), 1,
      aux_sym_relation_element_repeat2,
    STATE(581), 1,
      sym_assignment_tuple,
  [8833] = 6,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(842), 1,
      sym_object_name,
    STATE(428), 1,
      sym_if_exist,
    STATE(819), 1,
      sym_keyspace,
    STATE(830), 1,
      sym_trigger,
  [8852] = 6,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(844), 1,
      sym_object_name,
    STATE(276), 1,
      sym_user,
    STATE(430), 1,
      sym_if_exist,
    STATE(842), 1,
      sym_keyspace,
  [8871] = 2,
    ACTIONS(848), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(846), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [8882] = 6,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(216), 1,
      sym_function,
    STATE(426), 1,
      sym_if_exist,
    STATE(895), 1,
      sym_keyspace,
  [8901] = 5,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_object_name,
    STATE(70), 1,
      sym_relation_element,
    STATE(383), 1,
      sym_function_call,
    STATE(54), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8918] = 6,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(417), 1,
      sym_if_not_exist,
    STATE(764), 1,
      sym_function,
    STATE(768), 1,
      sym_keyspace,
  [8937] = 6,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(443), 1,
      sym_if_not_exist,
    STATE(907), 1,
      sym_keyspace,
    STATE(968), 1,
      sym_function,
  [8956] = 6,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(852), 1,
      aux_sym_primary_key_column_token1,
    STATE(27), 1,
      sym_column,
    STATE(612), 1,
      sym_column_definition,
    STATE(826), 1,
      sym_primary_key_element,
  [8975] = 5,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_object_name,
    STATE(70), 1,
      sym_relation_element,
    STATE(370), 1,
      sym_function_call,
    STATE(54), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [8992] = 6,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    ACTIONS(852), 1,
      aux_sym_primary_key_column_token1,
    STATE(27), 1,
      sym_column,
    STATE(612), 1,
      sym_column_definition,
    STATE(974), 1,
      sym_primary_key_element,
  [9011] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym_object_name,
    ACTIONS(854), 1,
      aux_sym_create_index_token3,
    STATE(183), 1,
      sym__string_literal,
    STATE(784), 1,
      sym_index_name,
  [9030] = 6,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    STATE(220), 1,
      sym_table,
    STATE(423), 1,
      sym_if_exist,
    STATE(736), 1,
      sym_keyspace,
  [9049] = 6,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(836), 1,
      sym_object_name,
    ACTIONS(856), 1,
      aux_sym_select_statement_token3,
    STATE(484), 1,
      sym_select_element,
    STATE(487), 1,
      sym_function_call,
    STATE(688), 1,
      sym_select_elements,
  [9068] = 6,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    STATE(411), 1,
      sym_if_not_exist,
    STATE(796), 1,
      sym_table,
    STATE(797), 1,
      sym_keyspace,
  [9087] = 2,
    ACTIONS(860), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [9098] = 6,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(842), 1,
      sym_object_name,
    STATE(421), 1,
      sym_if_not_exist,
    STATE(745), 1,
      sym_trigger,
    STATE(751), 1,
      sym_keyspace,
  [9117] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(513), 1,
      sym_column_definition,
    STATE(967), 1,
      sym_column_definition_list,
  [9133] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(862), 1,
      sym__dec_digit,
    STATE(441), 1,
      aux_sym__decimal_literal,
    STATE(701), 1,
      sym__string_literal,
  [9149] = 5,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    ACTIONS(864), 1,
      aux_sym_truncate_token2,
    STATE(270), 1,
      sym_table,
    STATE(931), 1,
      sym_keyspace,
  [9165] = 2,
    ACTIONS(868), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(866), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9175] = 4,
    ACTIONS(870), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(874), 1,
      aux_sym_role_with_options_token4,
    STATE(169), 1,
      sym_role_with_options,
    ACTIONS(872), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [9189] = 5,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      sym__dquote,
    ACTIONS(880), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(168), 1,
      sym_column,
    STATE(266), 1,
      sym_alter_table_drop_column_list,
  [9205] = 2,
    ACTIONS(884), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(882), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9215] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym_object_name,
    STATE(183), 1,
      sym__string_literal,
    STATE(200), 1,
      sym_index_name,
  [9231] = 5,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(484), 1,
      sym_select_element,
    STATE(487), 1,
      sym_function_call,
    STATE(688), 1,
      sym_select_elements,
  [9247] = 4,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(890), 1,
      anon_sym_DOT,
    ACTIONS(892), 1,
      aux_sym_select_element_token1,
    ACTIONS(888), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [9261] = 2,
    ACTIONS(896), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(894), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9271] = 3,
    ACTIONS(900), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(531), 1,
      sym_using_timestamp_spec,
    ACTIONS(898), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9283] = 5,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
    STATE(595), 1,
      sym_insert_column_spec,
  [9299] = 4,
    ACTIONS(870), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(874), 1,
      aux_sym_role_with_options_token4,
    STATE(142), 1,
      sym_role_with_options,
    ACTIONS(872), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [9313] = 5,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(547), 1,
      sym_if_not_exist,
    STATE(770), 1,
      sym_keyspace,
  [9329] = 5,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(87), 1,
      sym_insert_values_spec,
    STATE(473), 1,
      sym_insert_column_spec,
  [9345] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(513), 1,
      sym_column_definition,
    STATE(847), 1,
      sym_column_definition_list,
  [9361] = 5,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(205), 1,
      sym_keyspace,
    STATE(562), 1,
      sym_if_exist,
  [9377] = 1,
    ACTIONS(910), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9385] = 2,
    ACTIONS(914), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(912), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9395] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(513), 1,
      sym_column_definition,
    STATE(823), 1,
      sym_column_definition_list,
  [9411] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(505), 1,
      sym_clustering_key,
    STATE(662), 1,
      sym_column,
    STATE(920), 1,
      sym_clustering_key_list,
  [9427] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(569), 1,
      sym_replication_list_item,
    STATE(794), 1,
      sym_replication_list,
    STATE(799), 1,
      sym__string_literal,
  [9443] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(569), 1,
      sym_replication_list_item,
    STATE(742), 1,
      sym_replication_list,
    STATE(799), 1,
      sym__string_literal,
  [9459] = 1,
    ACTIONS(916), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9467] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym_object_name,
    STATE(183), 1,
      sym__string_literal,
    STATE(249), 1,
      sym_index_name,
  [9483] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(513), 1,
      sym_column_definition,
    STATE(922), 1,
      sym_column_definition_list,
  [9499] = 1,
    ACTIONS(918), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9507] = 5,
    ACTIONS(920), 1,
      sym_object_name,
    ACTIONS(922), 1,
      aux_sym_from_spec_token1,
    STATE(419), 1,
      sym_from_spec,
    STATE(492), 1,
      sym_delete_column_item,
    STATE(666), 1,
      sym_delete_column_list,
  [9523] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(569), 1,
      sym_replication_list_item,
    STATE(780), 1,
      sym_replication_list,
    STATE(799), 1,
      sym__string_literal,
  [9539] = 3,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(927), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9551] = 5,
    ACTIONS(834), 1,
      anon_sym_STAR,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(484), 1,
      sym_select_element,
    STATE(487), 1,
      sym_function_call,
    STATE(661), 1,
      sym_select_elements,
  [9567] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(505), 1,
      sym_clustering_key,
    STATE(662), 1,
      sym_column,
    STATE(887), 1,
      sym_clustering_key_list,
  [9583] = 1,
    ACTIONS(929), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9591] = 5,
    ACTIONS(920), 1,
      sym_object_name,
    ACTIONS(922), 1,
      aux_sym_from_spec_token1,
    STATE(462), 1,
      sym_from_spec,
    STATE(492), 1,
      sym_delete_column_item,
    STATE(626), 1,
      sym_delete_column_list,
  [9607] = 5,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(931), 1,
      sym__dec_digit,
    STATE(604), 1,
      aux_sym__decimal_literal,
    STATE(962), 1,
      sym__string_literal,
  [9623] = 1,
    ACTIONS(933), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9631] = 5,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(76), 1,
      sym_insert_values_spec,
    STATE(476), 1,
      sym_insert_column_spec,
  [9647] = 5,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(514), 1,
      sym_partition_key,
    STATE(680), 1,
      sym_column,
    STATE(861), 1,
      sym_partition_key_list,
  [9663] = 3,
    ACTIONS(900), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(593), 1,
      sym_using_timestamp_spec,
    ACTIONS(935), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [9675] = 1,
    ACTIONS(937), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9683] = 2,
    ACTIONS(939), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [9693] = 5,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(73), 1,
      sym_insert_values_spec,
    STATE(589), 1,
      sym_insert_column_spec,
  [9709] = 1,
    ACTIONS(941), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [9717] = 3,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(903), 1,
      sym_order_direction,
    ACTIONS(241), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [9728] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(565), 1,
      sym_option_hash_item,
    STATE(756), 1,
      sym__string_literal,
  [9741] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(122), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [9754] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(853), 1,
      sym_table,
    STATE(856), 1,
      sym_keyspace,
  [9767] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(99), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [9780] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(99), 1,
      sym_where_spec,
    STATE(453), 1,
      aux_sym_update_repeat1,
  [9793] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(695), 1,
      sym_option_hash_item,
    STATE(756), 1,
      sym__string_literal,
  [9806] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(790), 1,
      sym_table,
    STATE(833), 1,
      sym_keyspace,
  [9819] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(700), 1,
      sym_replication_list_item,
    STATE(799), 1,
      sym__string_literal,
  [9832] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(738), 1,
      sym_keyspace,
    STATE(749), 1,
      sym_function,
  [9845] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(894), 1,
      sym_keyspace,
    STATE(918), 1,
      sym_table,
  [9858] = 4,
    ACTIONS(900), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(94), 1,
      sym_where_spec,
    STATE(653), 1,
      sym_using_timestamp_spec,
  [9871] = 1,
    ACTIONS(927), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9878] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(842), 1,
      sym_object_name,
    STATE(757), 1,
      sym_keyspace,
    STATE(767), 1,
      sym_trigger,
  [9891] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(100), 1,
      sym_where_spec,
    STATE(410), 1,
      aux_sym_update_repeat1,
  [9904] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(250), 1,
      sym_table,
    STATE(811), 1,
      sym_keyspace,
  [9917] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(949), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [9928] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(100), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [9941] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(257), 1,
      sym_function,
    STATE(835), 1,
      sym_keyspace,
  [9954] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(246), 1,
      sym_table,
    STATE(808), 1,
      sym_keyspace,
  [9967] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(842), 1,
      sym_object_name,
    STATE(829), 1,
      sym_keyspace,
    STATE(845), 1,
      sym_trigger,
  [9980] = 4,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(612), 1,
      sym_column_definition,
  [9993] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(844), 1,
      sym_object_name,
    STATE(265), 1,
      sym_user,
    STATE(949), 1,
      sym_keyspace,
  [10006] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(587), 1,
      sym_table,
    STATE(886), 1,
      sym_keyspace,
  [10019] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(116), 1,
      sym_table,
    STATE(733), 1,
      sym_keyspace,
  [10032] = 4,
    ACTIONS(951), 1,
      aux_sym_timestamp_token1,
    ACTIONS(953), 1,
      aux_sym_ttl_token1,
    STATE(128), 1,
      sym_timestamp,
    STATE(140), 1,
      sym_ttl,
  [10045] = 4,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(654), 1,
      sym_partition_key,
    STATE(680), 1,
      sym_column,
  [10058] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(376), 1,
      sym_table,
    STATE(765), 1,
      sym_keyspace,
  [10071] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(425), 1,
      aux_sym_update_repeat1,
  [10084] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(119), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [10097] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(196), 1,
      sym_table,
    STATE(750), 1,
      sym_keyspace,
  [10110] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(194), 1,
      sym__string_literal,
    STATE(204), 1,
      sym_trigger_class,
  [10123] = 4,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_function_args_repeat1,
  [10136] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(959), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10147] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(328), 1,
      sym_table,
    STATE(863), 1,
      sym_keyspace,
  [10160] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(816), 1,
      sym_keyspace,
    STATE(884), 1,
      sym_function,
  [10173] = 4,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(645), 1,
      sym_clustering_key,
    STATE(662), 1,
      sym_column,
  [10186] = 1,
    ACTIONS(961), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [10193] = 4,
    ACTIONS(963), 1,
      sym_object_name,
    ACTIONS(965), 1,
      aux_sym_if_exist_token2,
    STATE(166), 1,
      sym_if_condition,
    STATE(231), 1,
      sym_if_condition_list,
  [10206] = 4,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    STATE(574), 1,
      aux_sym_assignment_tuple_repeat1,
  [10219] = 4,
    ACTIONS(774), 1,
      aux_sym_if_exist_token1,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(267), 1,
      sym_role,
    STATE(711), 1,
      sym_if_exist,
  [10232] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(194), 1,
      sym__string_literal,
    STATE(260), 1,
      sym_trigger_class,
  [10245] = 4,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(730), 1,
      sym_if_not_exist,
    STATE(741), 1,
      sym_user,
  [10258] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(846), 1,
      sym_keyspace,
    STATE(972), 1,
      sym_table,
  [10271] = 4,
    ACTIONS(804), 1,
      aux_sym_if_exist_token1,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(129), 1,
      sym_role,
    STATE(721), 1,
      sym_if_not_exist,
  [10284] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [10297] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(256), 1,
      sym_table,
    STATE(801), 1,
      sym_keyspace,
  [10310] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(191), 1,
      sym_trigger_class,
    STATE(194), 1,
      sym__string_literal,
  [10323] = 4,
    ACTIONS(900), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
    STATE(668), 1,
      sym_using_timestamp_spec,
  [10336] = 2,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(979), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10345] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(437), 1,
      aux_sym_update_repeat1,
  [10358] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(294), 1,
      sym_table,
    STATE(919), 1,
      sym_keyspace,
  [10371] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(406), 1,
      sym_table,
    STATE(807), 1,
      sym_keyspace,
  [10384] = 2,
    ACTIONS(981), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [10393] = 4,
    ACTIONS(900), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(92), 1,
      sym_where_spec,
    STATE(698), 1,
      sym_using_timestamp_spec,
  [10406] = 4,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(542), 1,
      sym_column,
    STATE(779), 1,
      sym_column_list,
  [10419] = 4,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(21), 1,
      sym_column,
    STATE(290), 1,
      sym_alter_table_column_definition,
  [10432] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(194), 1,
      sym__string_literal,
    STATE(261), 1,
      sym_trigger_class,
  [10445] = 4,
    ACTIONS(983), 1,
      sym_object_name,
    STATE(93), 1,
      sym_table_option_item,
    STATE(282), 1,
      sym_table_options,
    STATE(737), 1,
      sym_table_option_name,
  [10458] = 4,
    ACTIONS(985), 1,
      aux_sym_truncate_token2,
    ACTIONS(987), 1,
      aux_sym_resource_token2,
    ACTIONS(989), 1,
      aux_sym_resource_token6,
    ACTIONS(991), 1,
      aux_sym_drop_user_token1,
  [10471] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(496), 1,
      sym_table,
    STATE(916), 1,
      sym_keyspace,
  [10484] = 4,
    ACTIONS(717), 1,
      sym_object_name,
    ACTIONS(719), 1,
      sym__dquote,
    STATE(203), 1,
      sym_table,
    STATE(864), 1,
      sym_keyspace,
  [10497] = 4,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(850), 1,
      sym_object_name,
    STATE(116), 1,
      sym_function,
    STATE(776), 1,
      sym_keyspace,
  [10510] = 3,
    ACTIONS(995), 1,
      aux_sym_primary_key_column_token1,
    STATE(625), 1,
      sym_primary_key_column,
    ACTIONS(993), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10521] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(112), 1,
      sym_where_spec,
    STATE(412), 1,
      aux_sym_update_repeat1,
  [10534] = 3,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(74), 1,
      sym_insert_values_spec,
  [10544] = 3,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(566), 1,
      sym_param,
  [10554] = 2,
    ACTIONS(1003), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1001), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [10562] = 3,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(87), 1,
      sym_insert_values_spec,
  [10572] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(297), 1,
      sym_keyspace,
  [10582] = 3,
    ACTIONS(1005), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1007), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1009), 1,
      aux_sym_update_token1,
  [10592] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym_param,
  [10602] = 3,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(165), 1,
      sym_column,
  [10612] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_column_list_repeat1,
  [10622] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(116), 1,
      sym_keyspace,
  [10632] = 3,
    ACTIONS(1017), 1,
      aux_sym_resource_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token4,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
  [10642] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      aux_sym_from_spec_token1,
    STATE(521), 1,
      aux_sym_select_elements_repeat1,
  [10652] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(875), 1,
      sym_return_mode,
  [10662] = 3,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_expression_list_repeat1,
  [10672] = 2,
    ACTIONS(892), 1,
      aux_sym_select_element_token1,
    ACTIONS(888), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10680] = 2,
    ACTIONS(1037), 1,
      anon_sym_LBRACK,
    ACTIONS(1035), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [10688] = 3,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      sym__dquote,
    STATE(165), 1,
      sym_column,
  [10698] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1039), 1,
      aux_sym_update_token2,
    STATE(831), 1,
      sym_using_ttl_timestamp,
  [10708] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_create_function_repeat1,
  [10718] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      aux_sym_from_spec_token1,
    STATE(528), 1,
      aux_sym_delete_column_list_repeat1,
  [10728] = 3,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_column_definition_list_repeat1,
  [10738] = 3,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_clustering_key_list_repeat1,
  [10748] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(160), 1,
      sym__string_literal,
  [10758] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1056), 1,
      aux_sym_update_token2,
    STATE(859), 1,
      sym_using_ttl_timestamp,
  [10768] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_clustering_key_list_repeat1,
  [10778] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(251), 1,
      sym_table,
  [10788] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_partition_key_list_repeat1,
  [10798] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(917), 1,
      sym_return_mode,
  [10808] = 3,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      sym__dquote,
    STATE(810), 1,
      sym_column,
  [10818] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(952), 1,
      sym_table,
  [10828] = 3,
    ACTIONS(1071), 1,
      sym__hex_digit,
    ACTIONS(1074), 1,
      anon_sym_SQUOTE,
    STATE(503), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [10838] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(873), 1,
      sym_keyspace,
  [10848] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_clustering_key_list_repeat1,
  [10858] = 3,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_partition_key_list_repeat1,
  [10868] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_param,
  [10878] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(947), 1,
      sym_table,
  [10888] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(941), 1,
      sym_return_mode,
  [10898] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_create_function_repeat1,
  [10908] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [10918] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(898), 1,
      sym_return_mode,
  [10928] = 3,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_column_definition_list_repeat1,
  [10938] = 3,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_partition_key_list_repeat1,
  [10948] = 3,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      sym__dquote,
    STATE(408), 1,
      sym_column,
  [10958] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [10968] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(184), 1,
      sym__string_literal,
  [10978] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    STATE(518), 1,
      aux_sym_assignment_map_repeat1,
  [10988] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_relation_element_repeat2,
  [10998] = 3,
    ACTIONS(886), 1,
      sym_object_name,
    STATE(487), 1,
      sym_function_call,
    STATE(660), 1,
      sym_select_element,
  [11008] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      aux_sym_from_spec_token1,
    STATE(591), 1,
      aux_sym_select_elements_repeat1,
  [11018] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(326), 1,
      sym_table,
  [11028] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_create_function_repeat1,
  [11038] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [11048] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_option_hash_repeat1,
  [11058] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(871), 1,
      sym_return_mode,
  [11068] = 3,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      aux_sym_replication_list_repeat1,
  [11078] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      aux_sym_from_spec_token1,
    STATE(594), 1,
      aux_sym_delete_column_list_repeat1,
  [11088] = 3,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_GT,
    STATE(529), 1,
      aux_sym_data_type_definition_repeat1,
  [11098] = 3,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    STATE(518), 1,
      aux_sym_assignment_map_repeat1,
  [11108] = 1,
    ACTIONS(935), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11114] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(198), 1,
      sym_table,
  [11124] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      aux_sym_relation_element_repeat2,
  [11134] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_relation_element_repeat2,
  [11144] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(223), 1,
      sym_table,
  [11154] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(271), 1,
      sym_table,
  [11164] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      sym_param,
  [11174] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(294), 1,
      sym_table,
  [11184] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      aux_sym_create_function_repeat1,
  [11194] = 3,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_relation_element_repeat1,
  [11204] = 3,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_option_hash_repeat1,
  [11214] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_column_list_repeat1,
  [11224] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [11234] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(834), 1,
      sym_return_mode,
  [11244] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      aux_sym_replication_list_repeat1,
  [11254] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [11264] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(854), 1,
      sym_keyspace,
  [11274] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(101), 1,
      sym_table,
  [11284] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_GT,
    STATE(529), 1,
      aux_sym_data_type_definition_repeat1,
  [11294] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      aux_sym_where_spec_token1,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [11304] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(1155), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [11312] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(111), 1,
      sym_table,
  [11322] = 3,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RBRACE,
    STATE(530), 1,
      aux_sym_assignment_map_repeat1,
  [11332] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_relation_element_repeat2,
  [11342] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_relation_element_repeat2,
  [11352] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      aux_sym_relation_element_repeat2,
  [11362] = 3,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_function_args_repeat1,
  [11372] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      sym_param,
  [11382] = 3,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_relation_element_repeat1,
  [11392] = 3,
    ACTIONS(983), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(737), 1,
      sym_table_option_name,
  [11402] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(242), 1,
      sym_table,
  [11412] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(255), 1,
      sym_keyspace,
  [11422] = 3,
    ACTIONS(999), 1,
      sym_object_name,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      sym_param,
  [11432] = 3,
    ACTIONS(876), 1,
      sym_object_name,
    ACTIONS(878), 1,
      sym__dquote,
    STATE(208), 1,
      sym_column,
  [11442] = 3,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      aux_sym_option_hash_repeat1,
  [11452] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_create_function_repeat1,
  [11462] = 3,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [11472] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(782), 1,
      sym_return_mode,
  [11482] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RBRACE,
    STATE(545), 1,
      aux_sym_replication_list_repeat1,
  [11492] = 2,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(1171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11500] = 3,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_function_args_repeat1,
  [11510] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_GT,
    STATE(549), 1,
      aux_sym_data_type_definition_repeat1,
  [11520] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_expression_list_repeat1,
  [11530] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      aux_sym_assignment_tuple_repeat1,
  [11540] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(490), 1,
      sym_table,
  [11550] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_assignment_tuple_repeat1,
  [11560] = 3,
    ACTIONS(1196), 1,
      sym__hex_digit,
    ACTIONS(1198), 1,
      anon_sym_SQUOTE,
    STATE(503), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [11570] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_assignment_tuple_repeat1,
  [11580] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_relation_element_repeat2,
  [11590] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(597), 1,
      sym_table,
  [11600] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_relation_element_repeat2,
  [11610] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(918), 1,
      sym_table,
  [11620] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(827), 1,
      sym_table,
  [11630] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_relation_element_repeat1,
  [11640] = 3,
    ACTIONS(731), 1,
      sym_object_name,
    ACTIONS(733), 1,
      sym__dquote,
    STATE(17), 1,
      sym_column,
  [11650] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(379), 1,
      sym_table,
  [11660] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1207), 1,
      aux_sym_update_token2,
    STATE(921), 1,
      sym_using_ttl_timestamp,
  [11670] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(209), 1,
      sym_table,
  [11680] = 3,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
  [11690] = 3,
    ACTIONS(776), 1,
      sym__dquote,
    ACTIONS(908), 1,
      sym_object_name,
    STATE(120), 1,
      sym_keyspace,
  [11700] = 3,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      aux_sym_from_spec_token1,
    STATE(591), 1,
      aux_sym_select_elements_repeat1,
  [11710] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(401), 1,
      sym_table,
  [11720] = 1,
    ACTIONS(1214), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11726] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      aux_sym_from_spec_token1,
    STATE(594), 1,
      aux_sym_delete_column_list_repeat1,
  [11736] = 3,
    ACTIONS(902), 1,
      aux_sym_select_statement_token3,
    ACTIONS(906), 1,
      aux_sym_insert_values_spec_token1,
    STATE(76), 1,
      sym_insert_values_spec,
  [11746] = 3,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(596), 1,
      aux_sym_column_list_repeat1,
  [11756] = 3,
    ACTIONS(269), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1224), 1,
      aux_sym_update_token2,
    STATE(795), 1,
      sym_using_ttl_timestamp,
  [11766] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    STATE(576), 1,
      aux_sym_assignment_tuple_repeat1,
  [11776] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(196), 1,
      sym_table,
  [11786] = 3,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_function_args_repeat1,
  [11796] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [11806] = 3,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_create_function_repeat1,
  [11816] = 3,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_expression_list_repeat1,
  [11826] = 3,
    ACTIONS(88), 1,
      sym__dec_digit,
    ACTIONS(1235), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [11836] = 3,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_column_definition_list_repeat1,
  [11846] = 3,
    ACTIONS(1062), 1,
      sym_object_name,
    ACTIONS(1064), 1,
      sym__dquote,
    STATE(804), 1,
      sym_table,
  [11856] = 3,
    ACTIONS(1027), 1,
      aux_sym_create_function_token3,
    ACTIONS(1029), 1,
      aux_sym_return_mode_token1,
    STATE(793), 1,
      sym_return_mode,
  [11866] = 3,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    STATE(567), 1,
      aux_sym_create_function_repeat1,
  [11876] = 2,
    ACTIONS(1242), 1,
      aux_sym_durable_writes_token1,
    STATE(285), 1,
      sym_durable_writes,
  [11883] = 1,
    ACTIONS(949), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [11888] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(116), 1,
      sym_role,
  [11895] = 1,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11900] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(884), 1,
      sym_function,
  [11907] = 1,
    ACTIONS(1246), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [11912] = 1,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11917] = 2,
    ACTIONS(1250), 1,
      sym__dec_digit,
    STATE(102), 1,
      aux_sym__decimal_literal,
  [11924] = 2,
    ACTIONS(1252), 1,
      sym__hex_digit,
    STATE(43), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [11931] = 2,
    ACTIONS(1254), 1,
      sym__hex_digit,
    STATE(55), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [11938] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(413), 1,
      sym_assignment_element,
  [11945] = 2,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(40), 1,
      sym_from_spec,
  [11952] = 2,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(1262), 1,
      anon_sym_LBRACK,
  [11959] = 2,
    ACTIONS(1264), 1,
      sym__dec_digit,
    STATE(78), 1,
      aux_sym__decimal_literal,
  [11966] = 2,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(207), 1,
      sym_user,
  [11973] = 2,
    ACTIONS(1266), 1,
      sym_object_name,
    STATE(48), 1,
      sym_from_spec_element,
  [11980] = 1,
    ACTIONS(1268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11985] = 2,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(419), 1,
      sym_from_spec,
  [11992] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(228), 1,
      sym_code_block,
  [11999] = 2,
    ACTIONS(1272), 1,
      sym__dec_digit,
    STATE(56), 1,
      aux_sym__decimal_literal,
  [12006] = 2,
    ACTIONS(1274), 1,
      sym__dec_digit,
    STATE(8), 1,
      aux_sym__decimal_literal,
  [12013] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(235), 1,
      sym_code_block,
  [12020] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(942), 1,
      sym_language,
  [12027] = 1,
    ACTIONS(1171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12032] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(236), 1,
      sym_code_block,
  [12039] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(938), 1,
      sym_language,
  [12046] = 2,
    ACTIONS(1278), 1,
      sym__dec_digit,
    STATE(95), 1,
      aux_sym__decimal_literal,
  [12053] = 1,
    ACTIONS(1231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12058] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(239), 1,
      sym_code_block,
  [12065] = 1,
    ACTIONS(1155), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [12070] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(933), 1,
      sym_language,
  [12077] = 1,
    ACTIONS(1074), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [12082] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(263), 1,
      sym_code_block,
  [12089] = 2,
    ACTIONS(1280), 1,
      sym__hex_digit,
    STATE(334), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [12096] = 2,
    ACTIONS(1282), 1,
      sym_object_name,
    STATE(788), 1,
      sym_trigger,
  [12103] = 2,
    ACTIONS(1196), 1,
      sym__hex_digit,
    STATE(577), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [12110] = 1,
    ACTIONS(1054), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12115] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(753), 1,
      sym_function,
  [12122] = 2,
    ACTIONS(1284), 1,
      sym__dec_digit,
    STATE(89), 1,
      aux_sym__decimal_literal,
  [12129] = 2,
    ACTIONS(1286), 1,
      aux_sym_role_with_options_token1,
    STATE(97), 1,
      sym_user_password,
  [12136] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(926), 1,
      sym_language,
  [12143] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(286), 1,
      sym_code_block,
  [12150] = 2,
    ACTIONS(1288), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [12157] = 2,
    ACTIONS(1290), 1,
      sym_object_name,
    STATE(154), 1,
      sym_order_spec_element,
  [12164] = 2,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(105), 1,
      sym_where_spec,
  [12171] = 1,
    ACTIONS(1069), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12176] = 1,
    ACTIONS(1292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12181] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(277), 1,
      sym_code_block,
  [12188] = 1,
    ACTIONS(1294), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12193] = 1,
    ACTIONS(1219), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12198] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(911), 1,
      sym_language,
  [12205] = 1,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12210] = 2,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [12217] = 1,
    ACTIONS(1296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12222] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(248), 1,
      sym_function,
  [12229] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(137), 1,
      sym_role,
  [12236] = 2,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(874), 1,
      sym_user,
  [12243] = 2,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(456), 1,
      sym_from_spec,
  [12250] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(296), 1,
      sym_role,
  [12257] = 2,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(108), 1,
      sym_where_spec,
  [12264] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(178), 1,
      sym_role,
  [12271] = 2,
    ACTIONS(1282), 1,
      sym_object_name,
    STATE(809), 1,
      sym_trigger,
  [12278] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(422), 1,
      sym_assignment_element,
  [12285] = 1,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12290] = 2,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(298), 1,
      sym_code_block,
  [12297] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(891), 1,
      sym_language,
  [12304] = 2,
    ACTIONS(1300), 1,
      sym__dec_digit,
    STATE(121), 1,
      aux_sym__decimal_literal,
  [12311] = 2,
    ACTIONS(1242), 1,
      aux_sym_durable_writes_token1,
    STATE(293), 1,
      sym_durable_writes,
  [12318] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(556), 1,
      sym_assignment_tuple,
  [12325] = 1,
    ACTIONS(1302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12330] = 2,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(636), 1,
      sym_param,
  [12337] = 1,
    ACTIONS(1304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12342] = 2,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_option_hash,
  [12349] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(472), 1,
      sym_assignment_element,
  [12356] = 1,
    ACTIONS(1306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12361] = 2,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(245), 1,
      sym_user,
  [12368] = 1,
    ACTIONS(1205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12373] = 2,
    ACTIONS(963), 1,
      sym_object_name,
    STATE(170), 1,
      sym_if_condition,
  [12380] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(232), 1,
      sym_role,
  [12387] = 2,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(46), 1,
      sym_from_spec,
  [12394] = 2,
    ACTIONS(1282), 1,
      sym_object_name,
    STATE(866), 1,
      sym_trigger,
  [12401] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(202), 1,
      sym_function,
  [12408] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(233), 1,
      sym_role,
  [12415] = 2,
    ACTIONS(951), 1,
      aux_sym_timestamp_token1,
    STATE(445), 1,
      sym_timestamp,
  [12422] = 1,
    ACTIONS(1190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12427] = 2,
    ACTIONS(1308), 1,
      sym__dec_digit,
    STATE(117), 1,
      aux_sym__decimal_literal,
  [12434] = 1,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12439] = 1,
    ACTIONS(1310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12444] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(872), 1,
      sym_language,
  [12451] = 2,
    ACTIONS(947), 1,
      aux_sym_where_spec_token1,
    STATE(94), 1,
      sym_where_spec,
  [12458] = 2,
    ACTIONS(1242), 1,
      aux_sym_durable_writes_token1,
    STATE(281), 1,
      sym_durable_writes,
  [12465] = 1,
    ACTIONS(1113), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12470] = 1,
    ACTIONS(959), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12475] = 2,
    ACTIONS(920), 1,
      sym_object_name,
    STATE(658), 1,
      sym_delete_column_item,
  [12482] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(924), 1,
      sym_function,
  [12489] = 2,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [12496] = 2,
    ACTIONS(953), 1,
      aux_sym_ttl_token1,
    STATE(188), 1,
      sym_ttl,
  [12503] = 2,
    ACTIONS(951), 1,
      aux_sym_timestamp_token1,
    STATE(188), 1,
      sym_timestamp,
  [12510] = 1,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12515] = 2,
    ACTIONS(1314), 1,
      sym__dec_digit,
    STATE(546), 1,
      aux_sym__decimal_literal,
  [12522] = 1,
    ACTIONS(1316), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12527] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(720), 1,
      sym_assignment_element,
  [12534] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(259), 1,
      sym_role,
  [12541] = 1,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12546] = 2,
    ACTIONS(1286), 1,
      aux_sym_role_with_options_token1,
    STATE(96), 1,
      sym_user_password,
  [12553] = 2,
    ACTIONS(1286), 1,
      aux_sym_role_with_options_token1,
    STATE(104), 1,
      sym_user_password,
  [12560] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(436), 1,
      sym_assignment_element,
  [12567] = 2,
    ACTIONS(1320), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [12574] = 1,
    ACTIONS(1322), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [12579] = 2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(839), 1,
      sym_language,
  [12586] = 1,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12591] = 1,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [12596] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(157), 1,
      sym_role,
  [12603] = 2,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(240), 1,
      sym_role,
  [12610] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(111), 1,
      sym_function,
  [12617] = 2,
    ACTIONS(1282), 1,
      sym_object_name,
    STATE(928), 1,
      sym_trigger,
  [12624] = 1,
    ACTIONS(1324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12629] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(728), 1,
      sym_assignment_tuple,
  [12636] = 2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(458), 1,
      sym_assignment_element,
  [12643] = 1,
    ACTIONS(1162), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12648] = 2,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(533), 1,
      sym_assignment_tuple,
  [12655] = 2,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(792), 1,
      sym_user,
  [12662] = 1,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12667] = 2,
    ACTIONS(1244), 1,
      sym_object_name,
    STATE(968), 1,
      sym_function,
  [12674] = 1,
    ACTIONS(1328), 1,
      anon_sym_DOT,
  [12678] = 1,
    ACTIONS(1330), 1,
      sym__hex_4digit,
  [12682] = 1,
    ACTIONS(1332), 1,
      sym_object_name,
  [12686] = 1,
    ACTIONS(1334), 1,
      anon_sym_DOT,
  [12690] = 1,
    ACTIONS(1336), 1,
      anon_sym_EQ,
  [12694] = 1,
    ACTIONS(1338), 1,
      anon_sym_DOT,
  [12698] = 1,
    ACTIONS(1340), 1,
      aux_sym_if_exist_token2,
  [12702] = 1,
    ACTIONS(1342), 1,
      aux_sym_resource_token3,
  [12706] = 1,
    ACTIONS(1344), 1,
      aux_sym_create_keyspace_token1,
  [12710] = 1,
    ACTIONS(1346), 1,
      anon_sym_RBRACE,
  [12714] = 1,
    ACTIONS(1348), 1,
      anon_sym_SQUOTE,
  [12718] = 1,
    ACTIONS(1350), 1,
      anon_sym_EQ,
  [12722] = 1,
    ACTIONS(1352), 1,
      aux_sym_using_timestamp_spec_token1,
  [12726] = 1,
    ACTIONS(1354), 1,
      aux_sym_select_statement_token6,
  [12730] = 1,
    ACTIONS(1356), 1,
      sym_object_name,
  [12734] = 1,
    ACTIONS(1358), 1,
      sym__hex_4digit,
  [12738] = 1,
    ACTIONS(1360), 1,
      anon_sym_LPAREN,
  [12742] = 1,
    ACTIONS(1362), 1,
      anon_sym_DOT,
  [12746] = 1,
    ACTIONS(1364), 1,
      anon_sym_DOT,
  [12750] = 1,
    ACTIONS(1366), 1,
      anon_sym_LPAREN,
  [12754] = 1,
    ACTIONS(1368), 1,
      anon_sym_LPAREN,
  [12758] = 1,
    ACTIONS(1370), 1,
      anon_sym_LBRACE,
  [12762] = 1,
    ACTIONS(1372), 1,
      aux_sym_create_keyspace_token2,
  [12766] = 1,
    ACTIONS(1374), 1,
      anon_sym_COLON,
  [12770] = 1,
    ACTIONS(1376), 1,
      anon_sym_DOT,
  [12774] = 1,
    ACTIONS(1378), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [12778] = 1,
    ACTIONS(1380), 1,
      anon_sym_EQ,
  [12782] = 1,
    ACTIONS(1382), 1,
      aux_sym_create_function_token4,
  [12786] = 1,
    ACTIONS(1384), 1,
      aux_sym_return_mode_token2,
  [12790] = 1,
    ACTIONS(1386), 1,
      aux_sym_resource_token2,
  [12794] = 1,
    ACTIONS(1388), 1,
      aux_sym_constant_token1,
  [12798] = 1,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
  [12802] = 1,
    ACTIONS(1392), 1,
      anon_sym_DOT,
  [12806] = 1,
    ACTIONS(1394), 1,
      aux_sym_order_spec_token2,
  [12810] = 1,
    ACTIONS(1396), 1,
      aux_sym_using_timestamp_spec_token1,
  [12814] = 1,
    ACTIONS(1398), 1,
      anon_sym_DOT,
  [12818] = 1,
    ACTIONS(1400), 1,
      sym_object_name,
  [12822] = 1,
    ACTIONS(1402), 1,
      aux_sym_create_keyspace_token1,
  [12826] = 1,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
  [12830] = 1,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
  [12834] = 1,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
  [12838] = 1,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
  [12842] = 1,
    ACTIONS(1412), 1,
      aux_sym_create_index_token3,
  [12846] = 1,
    ACTIONS(1414), 1,
      anon_sym_DOT,
  [12850] = 1,
    ACTIONS(1416), 1,
      sym_object_name,
  [12854] = 1,
    ACTIONS(1418), 1,
      anon_sym_DOT,
  [12858] = 1,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
  [12862] = 1,
    ACTIONS(1422), 1,
      anon_sym_RBRACE,
  [12866] = 1,
    ACTIONS(1424), 1,
      aux_sym__string_literal_token2,
  [12870] = 1,
    ACTIONS(1426), 1,
      aux_sym_create_function_token3,
  [12874] = 1,
    ACTIONS(1428), 1,
      aux_sym_from_spec_token1,
  [12878] = 1,
    ACTIONS(1430), 1,
      aux_sym_create_index_token3,
  [12882] = 1,
    ACTIONS(1432), 1,
      aux_sym_create_function_token4,
  [12886] = 1,
    ACTIONS(1434), 1,
      aux_sym_return_mode_token2,
  [12890] = 1,
    ACTIONS(1436), 1,
      aux_sym_create_function_token3,
  [12894] = 1,
    ACTIONS(1438), 1,
      aux_sym_using_timestamp_spec_token1,
  [12898] = 1,
    ACTIONS(1440), 1,
      aux_sym__string_literal_token1,
  [12902] = 1,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
  [12906] = 1,
    ACTIONS(1444), 1,
      sym_object_name,
  [12910] = 1,
    ACTIONS(1446), 1,
      aux_sym_create_keyspace_token1,
  [12914] = 1,
    ACTIONS(1448), 1,
      aux_sym_create_function_token3,
  [12918] = 1,
    ACTIONS(1450), 1,
      anon_sym_RBRACE,
  [12922] = 1,
    ACTIONS(1452), 1,
      aux_sym_update_token2,
  [12926] = 1,
    ACTIONS(1454), 1,
      anon_sym_LPAREN,
  [12930] = 1,
    ACTIONS(1456), 1,
      anon_sym_DOT,
  [12934] = 1,
    ACTIONS(1458), 1,
      aux_sym_if_not_exist_token1,
  [12938] = 1,
    ACTIONS(1460), 1,
      anon_sym_COLON,
  [12942] = 1,
    ACTIONS(1462), 1,
      aux_sym_create_keyspace_token2,
  [12946] = 1,
    ACTIONS(1464), 1,
      anon_sym_DOT,
  [12950] = 1,
    ACTIONS(1466), 1,
      sym__dquote,
  [12954] = 1,
    ACTIONS(1468), 1,
      sym__dquote,
  [12958] = 1,
    ACTIONS(1470), 1,
      anon_sym_LPAREN,
  [12962] = 1,
    ACTIONS(1472), 1,
      aux_sym_select_statement_token6,
  [12966] = 1,
    ACTIONS(1474), 1,
      anon_sym_DASH,
  [12970] = 1,
    ACTIONS(1476), 1,
      anon_sym_DOT,
  [12974] = 1,
    ACTIONS(1478), 1,
      anon_sym_DOT,
  [12978] = 1,
    ACTIONS(1480), 1,
      aux_sym_create_index_token3,
  [12982] = 1,
    ACTIONS(1482), 1,
      aux_sym_grant_token2,
  [12986] = 1,
    ACTIONS(1484), 1,
      anon_sym_DOT,
  [12990] = 1,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
  [12994] = 1,
    ACTIONS(1488), 1,
      anon_sym_DOT,
  [12998] = 1,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
  [13002] = 1,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
  [13006] = 1,
    ACTIONS(1494), 1,
      anon_sym_DOT,
  [13010] = 1,
    ACTIONS(1496), 1,
      anon_sym_LPAREN,
  [13014] = 1,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
  [13018] = 1,
    ACTIONS(1500), 1,
      anon_sym_DOT,
  [13022] = 1,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
  [13026] = 1,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
  [13030] = 1,
    ACTIONS(1506), 1,
      anon_sym_COMMA,
  [13034] = 1,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
  [13038] = 1,
    ACTIONS(1510), 1,
      anon_sym_EQ,
  [13042] = 1,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
  [13046] = 1,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
  [13050] = 1,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [13054] = 1,
    ACTIONS(1518), 1,
      anon_sym_LPAREN,
  [13058] = 1,
    ACTIONS(1520), 1,
      anon_sym_DOT,
  [13062] = 1,
    ACTIONS(1522), 1,
      aux_sym_create_index_token3,
  [13066] = 1,
    ACTIONS(1224), 1,
      aux_sym_update_token2,
  [13070] = 1,
    ACTIONS(1524), 1,
      aux_sym_create_function_token4,
  [13074] = 1,
    ACTIONS(1526), 1,
      anon_sym_DOT,
  [13078] = 1,
    ACTIONS(1528), 1,
      aux_sym_create_function_token3,
  [13082] = 1,
    ACTIONS(1530), 1,
      anon_sym_DOT,
  [13086] = 1,
    ACTIONS(1532), 1,
      aux_sym_order_spec_token1,
  [13090] = 1,
    ACTIONS(1534), 1,
      aux_sym_create_function_token3,
  [13094] = 1,
    ACTIONS(1536), 1,
      aux_sym_select_element_token1,
  [13098] = 1,
    ACTIONS(1538), 1,
      aux_sym_select_element_token1,
  [13102] = 1,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
  [13106] = 1,
    ACTIONS(1348), 1,
      anon_sym_DOLLAR_DOLLAR,
  [13110] = 1,
    ACTIONS(1542), 1,
      anon_sym_DOT,
  [13114] = 1,
    ACTIONS(1544), 1,
      aux_sym_select_statement_token6,
  [13118] = 1,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
  [13122] = 1,
    ACTIONS(1546), 1,
      aux_sym_create_index_token3,
  [13126] = 1,
    ACTIONS(1548), 1,
      anon_sym_DOT,
  [13130] = 1,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
  [13134] = 1,
    ACTIONS(1552), 1,
      aux_sym_grant_token2,
  [13138] = 1,
    ACTIONS(1332), 1,
      anon_sym_STAR,
  [13142] = 1,
    ACTIONS(1554), 1,
      anon_sym_DOT,
  [13146] = 1,
    ACTIONS(1556), 1,
      aux_sym_relalationContainsKey_token2,
  [13150] = 1,
    ACTIONS(1558), 1,
      sym__hex_4digit,
  [13154] = 1,
    ACTIONS(1560), 1,
      anon_sym_LPAREN,
  [13158] = 1,
    ACTIONS(1562), 1,
      aux_sym_create_keyspace_token1,
  [13162] = 1,
    ACTIONS(1564), 1,
      anon_sym_COLON,
  [13166] = 1,
    ACTIONS(1566), 1,
      anon_sym_DOT,
  [13170] = 1,
    ACTIONS(1568), 1,
      anon_sym_LPAREN,
  [13174] = 1,
    ACTIONS(1570), 1,
      sym__boolean_literal,
  [13178] = 1,
    ACTIONS(1207), 1,
      aux_sym_update_token2,
  [13182] = 1,
    ACTIONS(1572), 1,
      sym__dquote,
  [13186] = 1,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
  [13190] = 1,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
  [13194] = 1,
    ACTIONS(1578), 1,
      anon_sym_DOT,
  [13198] = 1,
    ACTIONS(1580), 1,
      anon_sym_DOT,
  [13202] = 1,
    ACTIONS(1582), 1,
      aux_sym_durable_writes_token2,
  [13206] = 1,
    ACTIONS(1584), 1,
      aux_sym_create_index_token3,
  [13210] = 1,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
  [13214] = 1,
    ACTIONS(1588), 1,
      anon_sym_DASH,
  [13218] = 1,
    ACTIONS(1590), 1,
      aux_sym_create_function_token4,
  [13222] = 1,
    ACTIONS(1592), 1,
      aux_sym_insert_statement_token2,
  [13226] = 1,
    ACTIONS(1594), 1,
      aux_sym_create_function_token3,
  [13230] = 1,
    ACTIONS(1596), 1,
      aux_sym_select_element_token1,
  [13234] = 1,
    ACTIONS(1598), 1,
      aux_sym_create_keyspace_token1,
  [13238] = 1,
    ACTIONS(1600), 1,
      aux_sym_create_keyspace_token1,
  [13242] = 1,
    ACTIONS(1602), 1,
      aux_sym_create_function_token3,
  [13246] = 1,
    ACTIONS(1604), 1,
      aux_sym_create_index_token3,
  [13250] = 1,
    ACTIONS(1606), 1,
      aux_sym_select_statement_token6,
  [13254] = 1,
    ACTIONS(1608), 1,
      aux_sym_create_index_token3,
  [13258] = 1,
    ACTIONS(1610), 1,
      sym__hex_4digit,
  [13262] = 1,
    ACTIONS(1612), 1,
      aux_sym_if_exist_token2,
  [13266] = 1,
    ACTIONS(1614), 1,
      anon_sym_RPAREN,
  [13270] = 1,
    ACTIONS(1616), 1,
      aux_sym_constant_token1,
  [13274] = 1,
    ACTIONS(1618), 1,
      sym_object_name,
  [13278] = 1,
    ACTIONS(1620), 1,
      anon_sym_LPAREN,
  [13282] = 1,
    ACTIONS(1622), 1,
      anon_sym_COMMA,
  [13286] = 1,
    ACTIONS(1624), 1,
      anon_sym_DOT,
  [13290] = 1,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
  [13294] = 1,
    ACTIONS(1628), 1,
      anon_sym_GT,
  [13298] = 1,
    ACTIONS(1630), 1,
      anon_sym_EQ,
  [13302] = 1,
    ACTIONS(1632), 1,
      anon_sym_LBRACE,
  [13306] = 1,
    ACTIONS(1634), 1,
      aux_sym_select_element_token1,
  [13310] = 1,
    ACTIONS(1636), 1,
      anon_sym_LPAREN,
  [13314] = 1,
    ACTIONS(1638), 1,
      aux_sym_create_function_token4,
  [13318] = 1,
    ACTIONS(1640), 1,
      anon_sym_DOT,
  [13322] = 1,
    ACTIONS(1642), 1,
      anon_sym_DOT,
  [13326] = 1,
    ACTIONS(1644), 1,
      aux_sym__string_literal_token2,
  [13330] = 1,
    ACTIONS(1646), 1,
      aux_sym_create_index_token3,
  [13334] = 1,
    ACTIONS(1648), 1,
      aux_sym_create_function_token3,
  [13338] = 1,
    ACTIONS(1650), 1,
      anon_sym_RPAREN,
  [13342] = 1,
    ACTIONS(1652), 1,
      sym__hex_4digit,
  [13346] = 1,
    ACTIONS(1654), 1,
      anon_sym_EQ,
  [13350] = 1,
    ACTIONS(1656), 1,
      sym_object_name,
  [13354] = 1,
    ACTIONS(1658), 1,
      anon_sym_RPAREN,
  [13358] = 1,
    ACTIONS(1660), 1,
      sym_object_name,
  [13362] = 1,
    ACTIONS(1662), 1,
      anon_sym_RPAREN,
  [13366] = 1,
    ACTIONS(1664), 1,
      anon_sym_LPAREN,
  [13370] = 1,
    ACTIONS(1666), 1,
      anon_sym_DOT,
  [13374] = 1,
    ACTIONS(1668), 1,
      anon_sym_LPAREN,
  [13378] = 1,
    ACTIONS(1670), 1,
      sym__boolean_literal,
  [13382] = 1,
    ACTIONS(1672), 1,
      anon_sym_RPAREN,
  [13386] = 1,
    ACTIONS(1674), 1,
      aux_sym_select_element_token1,
  [13390] = 1,
    ACTIONS(1676), 1,
      anon_sym_DASH,
  [13394] = 1,
    ACTIONS(1678), 1,
      aux_sym_create_function_token4,
  [13398] = 1,
    ACTIONS(1680), 1,
      anon_sym_LPAREN,
  [13402] = 1,
    ACTIONS(1682), 1,
      anon_sym_DOLLAR_DOLLAR,
  [13406] = 1,
    ACTIONS(1684), 1,
      anon_sym_DOT,
  [13410] = 1,
    ACTIONS(1686), 1,
      aux_sym_create_function_token3,
  [13414] = 1,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [13418] = 1,
    ACTIONS(1690), 1,
      anon_sym_DOT,
  [13422] = 1,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
  [13426] = 1,
    ACTIONS(1039), 1,
      aux_sym_update_token2,
  [13430] = 1,
    ACTIONS(1694), 1,
      anon_sym_RPAREN,
  [13434] = 1,
    ACTIONS(1696), 1,
      aux_sym_create_function_token2,
  [13438] = 1,
    ACTIONS(1698), 1,
      anon_sym_LPAREN,
  [13442] = 1,
    ACTIONS(1700), 1,
      aux_sym_select_statement_token6,
  [13446] = 1,
    ACTIONS(1702), 1,
      aux_sym_select_element_token1,
  [13450] = 1,
    ACTIONS(1704), 1,
      sym__hex_digit,
  [13454] = 1,
    ACTIONS(1706), 1,
      aux_sym_using_timestamp_spec_token1,
  [13458] = 1,
    ACTIONS(1708), 1,
      aux_sym_create_function_token4,
  [13462] = 1,
    ACTIONS(1710), 1,
      sym__hex_4digit,
  [13466] = 1,
    ACTIONS(1712), 1,
      anon_sym_DOT,
  [13470] = 1,
    ACTIONS(1714), 1,
      anon_sym_RPAREN,
  [13474] = 1,
    ACTIONS(1716), 1,
      aux_sym_select_element_token1,
  [13478] = 1,
    ACTIONS(1718), 1,
      anon_sym_DASH,
  [13482] = 1,
    ACTIONS(1720), 1,
      aux_sym_create_function_token4,
  [13486] = 1,
    ACTIONS(1722), 1,
      anon_sym_EQ,
  [13490] = 1,
    ACTIONS(1724), 1,
      aux_sym_constant_token1,
  [13494] = 1,
    ACTIONS(1726), 1,
      aux_sym_select_element_token1,
  [13498] = 1,
    ACTIONS(1728), 1,
      aux_sym_create_index_token3,
  [13502] = 1,
    ACTIONS(1730), 1,
      sym_object_name,
  [13506] = 1,
    ACTIONS(1732), 1,
      aux_sym_create_function_token3,
  [13510] = 1,
    ACTIONS(1734), 1,
      aux_sym_select_element_token1,
  [13514] = 1,
    ACTIONS(1736), 1,
      anon_sym_EQ,
  [13518] = 1,
    ACTIONS(1738), 1,
      sym_object_name,
  [13522] = 1,
    ACTIONS(1740), 1,
      anon_sym_EQ,
  [13526] = 1,
    ACTIONS(1742), 1,
      aux_sym_begin_batch_token4,
  [13530] = 1,
    ACTIONS(1744), 1,
      anon_sym_LPAREN,
  [13534] = 1,
    ACTIONS(1746), 1,
      anon_sym_LBRACE,
  [13538] = 1,
    ACTIONS(1748), 1,
      anon_sym_DOT,
  [13542] = 1,
    ACTIONS(1750), 1,
      aux_sym_select_statement_token6,
  [13546] = 1,
    ACTIONS(1752), 1,
      anon_sym_RPAREN,
  [13550] = 1,
    ACTIONS(1754), 1,
      anon_sym_LPAREN,
  [13554] = 1,
    ACTIONS(1756), 1,
      aux_sym_select_statement_token6,
  [13558] = 1,
    ACTIONS(1758), 1,
      sym_object_name,
  [13562] = 1,
    ACTIONS(1760), 1,
      sym_object_name,
  [13566] = 1,
    ACTIONS(1762), 1,
      sym_object_name,
  [13570] = 1,
    ACTIONS(1764), 1,
      aux_sym_if_exist_token2,
  [13574] = 1,
    ACTIONS(1766), 1,
      sym__dquote,
  [13578] = 1,
    ACTIONS(1768), 1,
      aux_sym_order_spec_token2,
  [13582] = 1,
    ACTIONS(1770), 1,
      aux_sym_if_not_exist_token1,
  [13586] = 1,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
  [13590] = 1,
    ACTIONS(1235), 1,
      anon_sym_RBRACK,
  [13594] = 1,
    ACTIONS(1774), 1,
      aux_sym_relalationContainsKey_token2,
  [13598] = 1,
    ACTIONS(1776), 1,
      sym_object_name,
  [13602] = 1,
    ACTIONS(1778), 1,
      ts_builtin_sym_end,
  [13606] = 1,
    ACTIONS(1780), 1,
      aux_sym_begin_batch_token4,
  [13610] = 1,
    ACTIONS(1782), 1,
      anon_sym_RPAREN,
  [13614] = 1,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
  [13618] = 1,
    ACTIONS(1786), 1,
      sym__dquote,
  [13622] = 1,
    ACTIONS(1788), 1,
      aux_sym_create_keyspace_token2,
  [13626] = 1,
    ACTIONS(1790), 1,
      anon_sym_GT,
  [13630] = 1,
    ACTIONS(1792), 1,
      anon_sym_LPAREN,
  [13634] = 1,
    ACTIONS(1794), 1,
      aux_sym_insert_statement_token2,
  [13638] = 1,
    ACTIONS(1796), 1,
      anon_sym_RPAREN,
  [13642] = 1,
    ACTIONS(1798), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 251,
  [SMALL_STATE(7)] = 287,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 511,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 681,
  [SMALL_STATE(19)] = 714,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 784,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 854,
  [SMALL_STATE(24)] = 891,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 965,
  [SMALL_STATE(27)] = 1002,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1076,
  [SMALL_STATE(30)] = 1113,
  [SMALL_STATE(31)] = 1146,
  [SMALL_STATE(32)] = 1183,
  [SMALL_STATE(33)] = 1217,
  [SMALL_STATE(34)] = 1247,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1368,
  [SMALL_STATE(38)] = 1422,
  [SMALL_STATE(39)] = 1447,
  [SMALL_STATE(40)] = 1474,
  [SMALL_STATE(41)] = 1511,
  [SMALL_STATE(42)] = 1540,
  [SMALL_STATE(43)] = 1577,
  [SMALL_STATE(44)] = 1606,
  [SMALL_STATE(45)] = 1635,
  [SMALL_STATE(46)] = 1666,
  [SMALL_STATE(47)] = 1703,
  [SMALL_STATE(48)] = 1742,
  [SMALL_STATE(49)] = 1766,
  [SMALL_STATE(50)] = 1790,
  [SMALL_STATE(51)] = 1814,
  [SMALL_STATE(52)] = 1842,
  [SMALL_STATE(53)] = 1866,
  [SMALL_STATE(54)] = 1894,
  [SMALL_STATE(55)] = 1918,
  [SMALL_STATE(56)] = 1946,
  [SMALL_STATE(57)] = 1974,
  [SMALL_STATE(58)] = 2002,
  [SMALL_STATE(59)] = 2030,
  [SMALL_STATE(60)] = 2056,
  [SMALL_STATE(61)] = 2080,
  [SMALL_STATE(62)] = 2104,
  [SMALL_STATE(63)] = 2132,
  [SMALL_STATE(64)] = 2156,
  [SMALL_STATE(65)] = 2208,
  [SMALL_STATE(66)] = 2232,
  [SMALL_STATE(67)] = 2256,
  [SMALL_STATE(68)] = 2280,
  [SMALL_STATE(69)] = 2304,
  [SMALL_STATE(70)] = 2328,
  [SMALL_STATE(71)] = 2352,
  [SMALL_STATE(72)] = 2376,
  [SMALL_STATE(73)] = 2401,
  [SMALL_STATE(74)] = 2432,
  [SMALL_STATE(75)] = 2463,
  [SMALL_STATE(76)] = 2494,
  [SMALL_STATE(77)] = 2525,
  [SMALL_STATE(78)] = 2548,
  [SMALL_STATE(79)] = 2575,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2629,
  [SMALL_STATE(82)] = 2652,
  [SMALL_STATE(83)] = 2703,
  [SMALL_STATE(84)] = 2726,
  [SMALL_STATE(85)] = 2757,
  [SMALL_STATE(86)] = 2788,
  [SMALL_STATE(87)] = 2811,
  [SMALL_STATE(88)] = 2842,
  [SMALL_STATE(89)] = 2865,
  [SMALL_STATE(90)] = 2893,
  [SMALL_STATE(91)] = 2915,
  [SMALL_STATE(92)] = 2937,
  [SMALL_STATE(93)] = 2963,
  [SMALL_STATE(94)] = 2989,
  [SMALL_STATE(95)] = 3015,
  [SMALL_STATE(96)] = 3043,
  [SMALL_STATE(97)] = 3069,
  [SMALL_STATE(98)] = 3095,
  [SMALL_STATE(99)] = 3121,
  [SMALL_STATE(100)] = 3147,
  [SMALL_STATE(101)] = 3173,
  [SMALL_STATE(102)] = 3195,
  [SMALL_STATE(103)] = 3223,
  [SMALL_STATE(104)] = 3245,
  [SMALL_STATE(105)] = 3271,
  [SMALL_STATE(106)] = 3297,
  [SMALL_STATE(107)] = 3323,
  [SMALL_STATE(108)] = 3347,
  [SMALL_STATE(109)] = 3373,
  [SMALL_STATE(110)] = 3399,
  [SMALL_STATE(111)] = 3425,
  [SMALL_STATE(112)] = 3447,
  [SMALL_STATE(113)] = 3473,
  [SMALL_STATE(114)] = 3499,
  [SMALL_STATE(115)] = 3521,
  [SMALL_STATE(116)] = 3543,
  [SMALL_STATE(117)] = 3565,
  [SMALL_STATE(118)] = 3593,
  [SMALL_STATE(119)] = 3619,
  [SMALL_STATE(120)] = 3645,
  [SMALL_STATE(121)] = 3667,
  [SMALL_STATE(122)] = 3695,
  [SMALL_STATE(123)] = 3721,
  [SMALL_STATE(124)] = 3743,
  [SMALL_STATE(125)] = 3768,
  [SMALL_STATE(126)] = 3789,
  [SMALL_STATE(127)] = 3810,
  [SMALL_STATE(128)] = 3835,
  [SMALL_STATE(129)] = 3858,
  [SMALL_STATE(130)] = 3883,
  [SMALL_STATE(131)] = 3904,
  [SMALL_STATE(132)] = 3929,
  [SMALL_STATE(133)] = 3954,
  [SMALL_STATE(134)] = 3979,
  [SMALL_STATE(135)] = 4004,
  [SMALL_STATE(136)] = 4029,
  [SMALL_STATE(137)] = 4054,
  [SMALL_STATE(138)] = 4079,
  [SMALL_STATE(139)] = 4104,
  [SMALL_STATE(140)] = 4125,
  [SMALL_STATE(141)] = 4148,
  [SMALL_STATE(142)] = 4169,
  [SMALL_STATE(143)] = 4194,
  [SMALL_STATE(144)] = 4215,
  [SMALL_STATE(145)] = 4240,
  [SMALL_STATE(146)] = 4265,
  [SMALL_STATE(147)] = 4290,
  [SMALL_STATE(148)] = 4315,
  [SMALL_STATE(149)] = 4340,
  [SMALL_STATE(150)] = 4365,
  [SMALL_STATE(151)] = 4410,
  [SMALL_STATE(152)] = 4435,
  [SMALL_STATE(153)] = 4456,
  [SMALL_STATE(154)] = 4481,
  [SMALL_STATE(155)] = 4502,
  [SMALL_STATE(156)] = 4527,
  [SMALL_STATE(157)] = 4552,
  [SMALL_STATE(158)] = 4577,
  [SMALL_STATE(159)] = 4602,
  [SMALL_STATE(160)] = 4627,
  [SMALL_STATE(161)] = 4648,
  [SMALL_STATE(162)] = 4673,
  [SMALL_STATE(163)] = 4698,
  [SMALL_STATE(164)] = 4719,
  [SMALL_STATE(165)] = 4744,
  [SMALL_STATE(166)] = 4765,
  [SMALL_STATE(167)] = 4790,
  [SMALL_STATE(168)] = 4815,
  [SMALL_STATE(169)] = 4840,
  [SMALL_STATE(170)] = 4860,
  [SMALL_STATE(171)] = 4880,
  [SMALL_STATE(172)] = 4922,
  [SMALL_STATE(173)] = 4942,
  [SMALL_STATE(174)] = 4984,
  [SMALL_STATE(175)] = 5026,
  [SMALL_STATE(176)] = 5048,
  [SMALL_STATE(177)] = 5070,
  [SMALL_STATE(178)] = 5092,
  [SMALL_STATE(179)] = 5114,
  [SMALL_STATE(180)] = 5136,
  [SMALL_STATE(181)] = 5158,
  [SMALL_STATE(182)] = 5178,
  [SMALL_STATE(183)] = 5198,
  [SMALL_STATE(184)] = 5218,
  [SMALL_STATE(185)] = 5238,
  [SMALL_STATE(186)] = 5282,
  [SMALL_STATE(187)] = 5304,
  [SMALL_STATE(188)] = 5324,
  [SMALL_STATE(189)] = 5344,
  [SMALL_STATE(190)] = 5363,
  [SMALL_STATE(191)] = 5382,
  [SMALL_STATE(192)] = 5401,
  [SMALL_STATE(193)] = 5420,
  [SMALL_STATE(194)] = 5439,
  [SMALL_STATE(195)] = 5458,
  [SMALL_STATE(196)] = 5477,
  [SMALL_STATE(197)] = 5496,
  [SMALL_STATE(198)] = 5515,
  [SMALL_STATE(199)] = 5534,
  [SMALL_STATE(200)] = 5553,
  [SMALL_STATE(201)] = 5572,
  [SMALL_STATE(202)] = 5591,
  [SMALL_STATE(203)] = 5610,
  [SMALL_STATE(204)] = 5629,
  [SMALL_STATE(205)] = 5648,
  [SMALL_STATE(206)] = 5667,
  [SMALL_STATE(207)] = 5686,
  [SMALL_STATE(208)] = 5705,
  [SMALL_STATE(209)] = 5724,
  [SMALL_STATE(210)] = 5743,
  [SMALL_STATE(211)] = 5762,
  [SMALL_STATE(212)] = 5781,
  [SMALL_STATE(213)] = 5800,
  [SMALL_STATE(214)] = 5819,
  [SMALL_STATE(215)] = 5838,
  [SMALL_STATE(216)] = 5857,
  [SMALL_STATE(217)] = 5876,
  [SMALL_STATE(218)] = 5895,
  [SMALL_STATE(219)] = 5916,
  [SMALL_STATE(220)] = 5957,
  [SMALL_STATE(221)] = 5976,
  [SMALL_STATE(222)] = 5995,
  [SMALL_STATE(223)] = 6014,
  [SMALL_STATE(224)] = 6033,
  [SMALL_STATE(225)] = 6052,
  [SMALL_STATE(226)] = 6071,
  [SMALL_STATE(227)] = 6090,
  [SMALL_STATE(228)] = 6109,
  [SMALL_STATE(229)] = 6128,
  [SMALL_STATE(230)] = 6147,
  [SMALL_STATE(231)] = 6166,
  [SMALL_STATE(232)] = 6185,
  [SMALL_STATE(233)] = 6204,
  [SMALL_STATE(234)] = 6223,
  [SMALL_STATE(235)] = 6242,
  [SMALL_STATE(236)] = 6261,
  [SMALL_STATE(237)] = 6280,
  [SMALL_STATE(238)] = 6299,
  [SMALL_STATE(239)] = 6340,
  [SMALL_STATE(240)] = 6359,
  [SMALL_STATE(241)] = 6378,
  [SMALL_STATE(242)] = 6397,
  [SMALL_STATE(243)] = 6416,
  [SMALL_STATE(244)] = 6435,
  [SMALL_STATE(245)] = 6454,
  [SMALL_STATE(246)] = 6473,
  [SMALL_STATE(247)] = 6492,
  [SMALL_STATE(248)] = 6511,
  [SMALL_STATE(249)] = 6530,
  [SMALL_STATE(250)] = 6549,
  [SMALL_STATE(251)] = 6568,
  [SMALL_STATE(252)] = 6587,
  [SMALL_STATE(253)] = 6606,
  [SMALL_STATE(254)] = 6625,
  [SMALL_STATE(255)] = 6644,
  [SMALL_STATE(256)] = 6663,
  [SMALL_STATE(257)] = 6682,
  [SMALL_STATE(258)] = 6701,
  [SMALL_STATE(259)] = 6720,
  [SMALL_STATE(260)] = 6739,
  [SMALL_STATE(261)] = 6758,
  [SMALL_STATE(262)] = 6777,
  [SMALL_STATE(263)] = 6818,
  [SMALL_STATE(264)] = 6837,
  [SMALL_STATE(265)] = 6856,
  [SMALL_STATE(266)] = 6875,
  [SMALL_STATE(267)] = 6894,
  [SMALL_STATE(268)] = 6913,
  [SMALL_STATE(269)] = 6932,
  [SMALL_STATE(270)] = 6951,
  [SMALL_STATE(271)] = 6970,
  [SMALL_STATE(272)] = 6989,
  [SMALL_STATE(273)] = 7008,
  [SMALL_STATE(274)] = 7027,
  [SMALL_STATE(275)] = 7046,
  [SMALL_STATE(276)] = 7065,
  [SMALL_STATE(277)] = 7084,
  [SMALL_STATE(278)] = 7103,
  [SMALL_STATE(279)] = 7122,
  [SMALL_STATE(280)] = 7141,
  [SMALL_STATE(281)] = 7160,
  [SMALL_STATE(282)] = 7179,
  [SMALL_STATE(283)] = 7198,
  [SMALL_STATE(284)] = 7217,
  [SMALL_STATE(285)] = 7236,
  [SMALL_STATE(286)] = 7255,
  [SMALL_STATE(287)] = 7274,
  [SMALL_STATE(288)] = 7293,
  [SMALL_STATE(289)] = 7312,
  [SMALL_STATE(290)] = 7331,
  [SMALL_STATE(291)] = 7350,
  [SMALL_STATE(292)] = 7369,
  [SMALL_STATE(293)] = 7388,
  [SMALL_STATE(294)] = 7407,
  [SMALL_STATE(295)] = 7426,
  [SMALL_STATE(296)] = 7445,
  [SMALL_STATE(297)] = 7464,
  [SMALL_STATE(298)] = 7483,
  [SMALL_STATE(299)] = 7502,
  [SMALL_STATE(300)] = 7521,
  [SMALL_STATE(301)] = 7540,
  [SMALL_STATE(302)] = 7559,
  [SMALL_STATE(303)] = 7577,
  [SMALL_STATE(304)] = 7615,
  [SMALL_STATE(305)] = 7653,
  [SMALL_STATE(306)] = 7691,
  [SMALL_STATE(307)] = 7729,
  [SMALL_STATE(308)] = 7767,
  [SMALL_STATE(309)] = 7805,
  [SMALL_STATE(310)] = 7843,
  [SMALL_STATE(311)] = 7881,
  [SMALL_STATE(312)] = 7919,
  [SMALL_STATE(313)] = 7957,
  [SMALL_STATE(314)] = 7995,
  [SMALL_STATE(315)] = 8033,
  [SMALL_STATE(316)] = 8071,
  [SMALL_STATE(317)] = 8109,
  [SMALL_STATE(318)] = 8147,
  [SMALL_STATE(319)] = 8167,
  [SMALL_STATE(320)] = 8198,
  [SMALL_STATE(321)] = 8223,
  [SMALL_STATE(322)] = 8250,
  [SMALL_STATE(323)] = 8275,
  [SMALL_STATE(324)] = 8300,
  [SMALL_STATE(325)] = 8331,
  [SMALL_STATE(326)] = 8356,
  [SMALL_STATE(327)] = 8379,
  [SMALL_STATE(328)] = 8404,
  [SMALL_STATE(329)] = 8427,
  [SMALL_STATE(330)] = 8458,
  [SMALL_STATE(331)] = 8475,
  [SMALL_STATE(332)] = 8492,
  [SMALL_STATE(333)] = 8514,
  [SMALL_STATE(334)] = 8538,
  [SMALL_STATE(335)] = 8554,
  [SMALL_STATE(336)] = 8570,
  [SMALL_STATE(337)] = 8598,
  [SMALL_STATE(338)] = 8620,
  [SMALL_STATE(339)] = 8645,
  [SMALL_STATE(340)] = 8670,
  [SMALL_STATE(341)] = 8688,
  [SMALL_STATE(342)] = 8708,
  [SMALL_STATE(343)] = 8728,
  [SMALL_STATE(344)] = 8750,
  [SMALL_STATE(345)] = 8770,
  [SMALL_STATE(346)] = 8792,
  [SMALL_STATE(347)] = 8814,
  [SMALL_STATE(348)] = 8833,
  [SMALL_STATE(349)] = 8852,
  [SMALL_STATE(350)] = 8871,
  [SMALL_STATE(351)] = 8882,
  [SMALL_STATE(352)] = 8901,
  [SMALL_STATE(353)] = 8918,
  [SMALL_STATE(354)] = 8937,
  [SMALL_STATE(355)] = 8956,
  [SMALL_STATE(356)] = 8975,
  [SMALL_STATE(357)] = 8992,
  [SMALL_STATE(358)] = 9011,
  [SMALL_STATE(359)] = 9030,
  [SMALL_STATE(360)] = 9049,
  [SMALL_STATE(361)] = 9068,
  [SMALL_STATE(362)] = 9087,
  [SMALL_STATE(363)] = 9098,
  [SMALL_STATE(364)] = 9117,
  [SMALL_STATE(365)] = 9133,
  [SMALL_STATE(366)] = 9149,
  [SMALL_STATE(367)] = 9165,
  [SMALL_STATE(368)] = 9175,
  [SMALL_STATE(369)] = 9189,
  [SMALL_STATE(370)] = 9205,
  [SMALL_STATE(371)] = 9215,
  [SMALL_STATE(372)] = 9231,
  [SMALL_STATE(373)] = 9247,
  [SMALL_STATE(374)] = 9261,
  [SMALL_STATE(375)] = 9271,
  [SMALL_STATE(376)] = 9283,
  [SMALL_STATE(377)] = 9299,
  [SMALL_STATE(378)] = 9313,
  [SMALL_STATE(379)] = 9329,
  [SMALL_STATE(380)] = 9345,
  [SMALL_STATE(381)] = 9361,
  [SMALL_STATE(382)] = 9377,
  [SMALL_STATE(383)] = 9385,
  [SMALL_STATE(384)] = 9395,
  [SMALL_STATE(385)] = 9411,
  [SMALL_STATE(386)] = 9427,
  [SMALL_STATE(387)] = 9443,
  [SMALL_STATE(388)] = 9459,
  [SMALL_STATE(389)] = 9467,
  [SMALL_STATE(390)] = 9483,
  [SMALL_STATE(391)] = 9499,
  [SMALL_STATE(392)] = 9507,
  [SMALL_STATE(393)] = 9523,
  [SMALL_STATE(394)] = 9539,
  [SMALL_STATE(395)] = 9551,
  [SMALL_STATE(396)] = 9567,
  [SMALL_STATE(397)] = 9583,
  [SMALL_STATE(398)] = 9591,
  [SMALL_STATE(399)] = 9607,
  [SMALL_STATE(400)] = 9623,
  [SMALL_STATE(401)] = 9631,
  [SMALL_STATE(402)] = 9647,
  [SMALL_STATE(403)] = 9663,
  [SMALL_STATE(404)] = 9675,
  [SMALL_STATE(405)] = 9683,
  [SMALL_STATE(406)] = 9693,
  [SMALL_STATE(407)] = 9709,
  [SMALL_STATE(408)] = 9717,
  [SMALL_STATE(409)] = 9728,
  [SMALL_STATE(410)] = 9741,
  [SMALL_STATE(411)] = 9754,
  [SMALL_STATE(412)] = 9767,
  [SMALL_STATE(413)] = 9780,
  [SMALL_STATE(414)] = 9793,
  [SMALL_STATE(415)] = 9806,
  [SMALL_STATE(416)] = 9819,
  [SMALL_STATE(417)] = 9832,
  [SMALL_STATE(418)] = 9845,
  [SMALL_STATE(419)] = 9858,
  [SMALL_STATE(420)] = 9871,
  [SMALL_STATE(421)] = 9878,
  [SMALL_STATE(422)] = 9891,
  [SMALL_STATE(423)] = 9904,
  [SMALL_STATE(424)] = 9917,
  [SMALL_STATE(425)] = 9928,
  [SMALL_STATE(426)] = 9941,
  [SMALL_STATE(427)] = 9954,
  [SMALL_STATE(428)] = 9967,
  [SMALL_STATE(429)] = 9980,
  [SMALL_STATE(430)] = 9993,
  [SMALL_STATE(431)] = 10006,
  [SMALL_STATE(432)] = 10019,
  [SMALL_STATE(433)] = 10032,
  [SMALL_STATE(434)] = 10045,
  [SMALL_STATE(435)] = 10058,
  [SMALL_STATE(436)] = 10071,
  [SMALL_STATE(437)] = 10084,
  [SMALL_STATE(438)] = 10097,
  [SMALL_STATE(439)] = 10110,
  [SMALL_STATE(440)] = 10123,
  [SMALL_STATE(441)] = 10136,
  [SMALL_STATE(442)] = 10147,
  [SMALL_STATE(443)] = 10160,
  [SMALL_STATE(444)] = 10173,
  [SMALL_STATE(445)] = 10186,
  [SMALL_STATE(446)] = 10193,
  [SMALL_STATE(447)] = 10206,
  [SMALL_STATE(448)] = 10219,
  [SMALL_STATE(449)] = 10232,
  [SMALL_STATE(450)] = 10245,
  [SMALL_STATE(451)] = 10258,
  [SMALL_STATE(452)] = 10271,
  [SMALL_STATE(453)] = 10284,
  [SMALL_STATE(454)] = 10297,
  [SMALL_STATE(455)] = 10310,
  [SMALL_STATE(456)] = 10323,
  [SMALL_STATE(457)] = 10336,
  [SMALL_STATE(458)] = 10345,
  [SMALL_STATE(459)] = 10358,
  [SMALL_STATE(460)] = 10371,
  [SMALL_STATE(461)] = 10384,
  [SMALL_STATE(462)] = 10393,
  [SMALL_STATE(463)] = 10406,
  [SMALL_STATE(464)] = 10419,
  [SMALL_STATE(465)] = 10432,
  [SMALL_STATE(466)] = 10445,
  [SMALL_STATE(467)] = 10458,
  [SMALL_STATE(468)] = 10471,
  [SMALL_STATE(469)] = 10484,
  [SMALL_STATE(470)] = 10497,
  [SMALL_STATE(471)] = 10510,
  [SMALL_STATE(472)] = 10521,
  [SMALL_STATE(473)] = 10534,
  [SMALL_STATE(474)] = 10544,
  [SMALL_STATE(475)] = 10554,
  [SMALL_STATE(476)] = 10562,
  [SMALL_STATE(477)] = 10572,
  [SMALL_STATE(478)] = 10582,
  [SMALL_STATE(479)] = 10592,
  [SMALL_STATE(480)] = 10602,
  [SMALL_STATE(481)] = 10612,
  [SMALL_STATE(482)] = 10622,
  [SMALL_STATE(483)] = 10632,
  [SMALL_STATE(484)] = 10642,
  [SMALL_STATE(485)] = 10652,
  [SMALL_STATE(486)] = 10662,
  [SMALL_STATE(487)] = 10672,
  [SMALL_STATE(488)] = 10680,
  [SMALL_STATE(489)] = 10688,
  [SMALL_STATE(490)] = 10698,
  [SMALL_STATE(491)] = 10708,
  [SMALL_STATE(492)] = 10718,
  [SMALL_STATE(493)] = 10728,
  [SMALL_STATE(494)] = 10738,
  [SMALL_STATE(495)] = 10748,
  [SMALL_STATE(496)] = 10758,
  [SMALL_STATE(497)] = 10768,
  [SMALL_STATE(498)] = 10778,
  [SMALL_STATE(499)] = 10788,
  [SMALL_STATE(500)] = 10798,
  [SMALL_STATE(501)] = 10808,
  [SMALL_STATE(502)] = 10818,
  [SMALL_STATE(503)] = 10828,
  [SMALL_STATE(504)] = 10838,
  [SMALL_STATE(505)] = 10848,
  [SMALL_STATE(506)] = 10858,
  [SMALL_STATE(507)] = 10868,
  [SMALL_STATE(508)] = 10878,
  [SMALL_STATE(509)] = 10888,
  [SMALL_STATE(510)] = 10898,
  [SMALL_STATE(511)] = 10908,
  [SMALL_STATE(512)] = 10918,
  [SMALL_STATE(513)] = 10928,
  [SMALL_STATE(514)] = 10938,
  [SMALL_STATE(515)] = 10948,
  [SMALL_STATE(516)] = 10958,
  [SMALL_STATE(517)] = 10968,
  [SMALL_STATE(518)] = 10978,
  [SMALL_STATE(519)] = 10988,
  [SMALL_STATE(520)] = 10998,
  [SMALL_STATE(521)] = 11008,
  [SMALL_STATE(522)] = 11018,
  [SMALL_STATE(523)] = 11028,
  [SMALL_STATE(524)] = 11038,
  [SMALL_STATE(525)] = 11048,
  [SMALL_STATE(526)] = 11058,
  [SMALL_STATE(527)] = 11068,
  [SMALL_STATE(528)] = 11078,
  [SMALL_STATE(529)] = 11088,
  [SMALL_STATE(530)] = 11098,
  [SMALL_STATE(531)] = 11108,
  [SMALL_STATE(532)] = 11114,
  [SMALL_STATE(533)] = 11124,
  [SMALL_STATE(534)] = 11134,
  [SMALL_STATE(535)] = 11144,
  [SMALL_STATE(536)] = 11154,
  [SMALL_STATE(537)] = 11164,
  [SMALL_STATE(538)] = 11174,
  [SMALL_STATE(539)] = 11184,
  [SMALL_STATE(540)] = 11194,
  [SMALL_STATE(541)] = 11204,
  [SMALL_STATE(542)] = 11214,
  [SMALL_STATE(543)] = 11224,
  [SMALL_STATE(544)] = 11234,
  [SMALL_STATE(545)] = 11244,
  [SMALL_STATE(546)] = 11254,
  [SMALL_STATE(547)] = 11264,
  [SMALL_STATE(548)] = 11274,
  [SMALL_STATE(549)] = 11284,
  [SMALL_STATE(550)] = 11294,
  [SMALL_STATE(551)] = 11304,
  [SMALL_STATE(552)] = 11312,
  [SMALL_STATE(553)] = 11322,
  [SMALL_STATE(554)] = 11332,
  [SMALL_STATE(555)] = 11342,
  [SMALL_STATE(556)] = 11352,
  [SMALL_STATE(557)] = 11362,
  [SMALL_STATE(558)] = 11372,
  [SMALL_STATE(559)] = 11382,
  [SMALL_STATE(560)] = 11392,
  [SMALL_STATE(561)] = 11402,
  [SMALL_STATE(562)] = 11412,
  [SMALL_STATE(563)] = 11422,
  [SMALL_STATE(564)] = 11432,
  [SMALL_STATE(565)] = 11442,
  [SMALL_STATE(566)] = 11452,
  [SMALL_STATE(567)] = 11462,
  [SMALL_STATE(568)] = 11472,
  [SMALL_STATE(569)] = 11482,
  [SMALL_STATE(570)] = 11492,
  [SMALL_STATE(571)] = 11500,
  [SMALL_STATE(572)] = 11510,
  [SMALL_STATE(573)] = 11520,
  [SMALL_STATE(574)] = 11530,
  [SMALL_STATE(575)] = 11540,
  [SMALL_STATE(576)] = 11550,
  [SMALL_STATE(577)] = 11560,
  [SMALL_STATE(578)] = 11570,
  [SMALL_STATE(579)] = 11580,
  [SMALL_STATE(580)] = 11590,
  [SMALL_STATE(581)] = 11600,
  [SMALL_STATE(582)] = 11610,
  [SMALL_STATE(583)] = 11620,
  [SMALL_STATE(584)] = 11630,
  [SMALL_STATE(585)] = 11640,
  [SMALL_STATE(586)] = 11650,
  [SMALL_STATE(587)] = 11660,
  [SMALL_STATE(588)] = 11670,
  [SMALL_STATE(589)] = 11680,
  [SMALL_STATE(590)] = 11690,
  [SMALL_STATE(591)] = 11700,
  [SMALL_STATE(592)] = 11710,
  [SMALL_STATE(593)] = 11720,
  [SMALL_STATE(594)] = 11726,
  [SMALL_STATE(595)] = 11736,
  [SMALL_STATE(596)] = 11746,
  [SMALL_STATE(597)] = 11756,
  [SMALL_STATE(598)] = 11766,
  [SMALL_STATE(599)] = 11776,
  [SMALL_STATE(600)] = 11786,
  [SMALL_STATE(601)] = 11796,
  [SMALL_STATE(602)] = 11806,
  [SMALL_STATE(603)] = 11816,
  [SMALL_STATE(604)] = 11826,
  [SMALL_STATE(605)] = 11836,
  [SMALL_STATE(606)] = 11846,
  [SMALL_STATE(607)] = 11856,
  [SMALL_STATE(608)] = 11866,
  [SMALL_STATE(609)] = 11876,
  [SMALL_STATE(610)] = 11883,
  [SMALL_STATE(611)] = 11888,
  [SMALL_STATE(612)] = 11895,
  [SMALL_STATE(613)] = 11900,
  [SMALL_STATE(614)] = 11907,
  [SMALL_STATE(615)] = 11912,
  [SMALL_STATE(616)] = 11917,
  [SMALL_STATE(617)] = 11924,
  [SMALL_STATE(618)] = 11931,
  [SMALL_STATE(619)] = 11938,
  [SMALL_STATE(620)] = 11945,
  [SMALL_STATE(621)] = 11952,
  [SMALL_STATE(622)] = 11959,
  [SMALL_STATE(623)] = 11966,
  [SMALL_STATE(624)] = 11973,
  [SMALL_STATE(625)] = 11980,
  [SMALL_STATE(626)] = 11985,
  [SMALL_STATE(627)] = 11992,
  [SMALL_STATE(628)] = 11999,
  [SMALL_STATE(629)] = 12006,
  [SMALL_STATE(630)] = 12013,
  [SMALL_STATE(631)] = 12020,
  [SMALL_STATE(632)] = 12027,
  [SMALL_STATE(633)] = 12032,
  [SMALL_STATE(634)] = 12039,
  [SMALL_STATE(635)] = 12046,
  [SMALL_STATE(636)] = 12053,
  [SMALL_STATE(637)] = 12058,
  [SMALL_STATE(638)] = 12065,
  [SMALL_STATE(639)] = 12070,
  [SMALL_STATE(640)] = 12077,
  [SMALL_STATE(641)] = 12082,
  [SMALL_STATE(642)] = 12089,
  [SMALL_STATE(643)] = 12096,
  [SMALL_STATE(644)] = 12103,
  [SMALL_STATE(645)] = 12110,
  [SMALL_STATE(646)] = 12115,
  [SMALL_STATE(647)] = 12122,
  [SMALL_STATE(648)] = 12129,
  [SMALL_STATE(649)] = 12136,
  [SMALL_STATE(650)] = 12143,
  [SMALL_STATE(651)] = 12150,
  [SMALL_STATE(652)] = 12157,
  [SMALL_STATE(653)] = 12164,
  [SMALL_STATE(654)] = 12171,
  [SMALL_STATE(655)] = 12176,
  [SMALL_STATE(656)] = 12181,
  [SMALL_STATE(657)] = 12188,
  [SMALL_STATE(658)] = 12193,
  [SMALL_STATE(659)] = 12198,
  [SMALL_STATE(660)] = 12205,
  [SMALL_STATE(661)] = 12210,
  [SMALL_STATE(662)] = 12217,
  [SMALL_STATE(663)] = 12222,
  [SMALL_STATE(664)] = 12229,
  [SMALL_STATE(665)] = 12236,
  [SMALL_STATE(666)] = 12243,
  [SMALL_STATE(667)] = 12250,
  [SMALL_STATE(668)] = 12257,
  [SMALL_STATE(669)] = 12264,
  [SMALL_STATE(670)] = 12271,
  [SMALL_STATE(671)] = 12278,
  [SMALL_STATE(672)] = 12285,
  [SMALL_STATE(673)] = 12290,
  [SMALL_STATE(674)] = 12297,
  [SMALL_STATE(675)] = 12304,
  [SMALL_STATE(676)] = 12311,
  [SMALL_STATE(677)] = 12318,
  [SMALL_STATE(678)] = 12325,
  [SMALL_STATE(679)] = 12330,
  [SMALL_STATE(680)] = 12337,
  [SMALL_STATE(681)] = 12342,
  [SMALL_STATE(682)] = 12349,
  [SMALL_STATE(683)] = 12356,
  [SMALL_STATE(684)] = 12361,
  [SMALL_STATE(685)] = 12368,
  [SMALL_STATE(686)] = 12373,
  [SMALL_STATE(687)] = 12380,
  [SMALL_STATE(688)] = 12387,
  [SMALL_STATE(689)] = 12394,
  [SMALL_STATE(690)] = 12401,
  [SMALL_STATE(691)] = 12408,
  [SMALL_STATE(692)] = 12415,
  [SMALL_STATE(693)] = 12422,
  [SMALL_STATE(694)] = 12427,
  [SMALL_STATE(695)] = 12434,
  [SMALL_STATE(696)] = 12439,
  [SMALL_STATE(697)] = 12444,
  [SMALL_STATE(698)] = 12451,
  [SMALL_STATE(699)] = 12458,
  [SMALL_STATE(700)] = 12465,
  [SMALL_STATE(701)] = 12470,
  [SMALL_STATE(702)] = 12475,
  [SMALL_STATE(703)] = 12482,
  [SMALL_STATE(704)] = 12489,
  [SMALL_STATE(705)] = 12496,
  [SMALL_STATE(706)] = 12503,
  [SMALL_STATE(707)] = 12510,
  [SMALL_STATE(708)] = 12515,
  [SMALL_STATE(709)] = 12522,
  [SMALL_STATE(710)] = 12527,
  [SMALL_STATE(711)] = 12534,
  [SMALL_STATE(712)] = 12541,
  [SMALL_STATE(713)] = 12546,
  [SMALL_STATE(714)] = 12553,
  [SMALL_STATE(715)] = 12560,
  [SMALL_STATE(716)] = 12567,
  [SMALL_STATE(717)] = 12574,
  [SMALL_STATE(718)] = 12579,
  [SMALL_STATE(719)] = 12586,
  [SMALL_STATE(720)] = 12591,
  [SMALL_STATE(721)] = 12596,
  [SMALL_STATE(722)] = 12603,
  [SMALL_STATE(723)] = 12610,
  [SMALL_STATE(724)] = 12617,
  [SMALL_STATE(725)] = 12624,
  [SMALL_STATE(726)] = 12629,
  [SMALL_STATE(727)] = 12636,
  [SMALL_STATE(728)] = 12643,
  [SMALL_STATE(729)] = 12648,
  [SMALL_STATE(730)] = 12655,
  [SMALL_STATE(731)] = 12662,
  [SMALL_STATE(732)] = 12667,
  [SMALL_STATE(733)] = 12674,
  [SMALL_STATE(734)] = 12678,
  [SMALL_STATE(735)] = 12682,
  [SMALL_STATE(736)] = 12686,
  [SMALL_STATE(737)] = 12690,
  [SMALL_STATE(738)] = 12694,
  [SMALL_STATE(739)] = 12698,
  [SMALL_STATE(740)] = 12702,
  [SMALL_STATE(741)] = 12706,
  [SMALL_STATE(742)] = 12710,
  [SMALL_STATE(743)] = 12714,
  [SMALL_STATE(744)] = 12718,
  [SMALL_STATE(745)] = 12722,
  [SMALL_STATE(746)] = 12726,
  [SMALL_STATE(747)] = 12730,
  [SMALL_STATE(748)] = 12734,
  [SMALL_STATE(749)] = 12738,
  [SMALL_STATE(750)] = 12742,
  [SMALL_STATE(751)] = 12746,
  [SMALL_STATE(752)] = 12750,
  [SMALL_STATE(753)] = 12754,
  [SMALL_STATE(754)] = 12758,
  [SMALL_STATE(755)] = 12762,
  [SMALL_STATE(756)] = 12766,
  [SMALL_STATE(757)] = 12770,
  [SMALL_STATE(758)] = 12774,
  [SMALL_STATE(759)] = 12778,
  [SMALL_STATE(760)] = 12782,
  [SMALL_STATE(761)] = 12786,
  [SMALL_STATE(762)] = 12790,
  [SMALL_STATE(763)] = 12794,
  [SMALL_STATE(764)] = 12798,
  [SMALL_STATE(765)] = 12802,
  [SMALL_STATE(766)] = 12806,
  [SMALL_STATE(767)] = 12810,
  [SMALL_STATE(768)] = 12814,
  [SMALL_STATE(769)] = 12818,
  [SMALL_STATE(770)] = 12822,
  [SMALL_STATE(771)] = 12826,
  [SMALL_STATE(772)] = 12830,
  [SMALL_STATE(773)] = 12834,
  [SMALL_STATE(774)] = 12838,
  [SMALL_STATE(775)] = 12842,
  [SMALL_STATE(776)] = 12846,
  [SMALL_STATE(777)] = 12850,
  [SMALL_STATE(778)] = 12854,
  [SMALL_STATE(779)] = 12858,
  [SMALL_STATE(780)] = 12862,
  [SMALL_STATE(781)] = 12866,
  [SMALL_STATE(782)] = 12870,
  [SMALL_STATE(783)] = 12874,
  [SMALL_STATE(784)] = 12878,
  [SMALL_STATE(785)] = 12882,
  [SMALL_STATE(786)] = 12886,
  [SMALL_STATE(787)] = 12890,
  [SMALL_STATE(788)] = 12894,
  [SMALL_STATE(789)] = 12898,
  [SMALL_STATE(790)] = 12902,
  [SMALL_STATE(791)] = 12906,
  [SMALL_STATE(792)] = 12910,
  [SMALL_STATE(793)] = 12914,
  [SMALL_STATE(794)] = 12918,
  [SMALL_STATE(795)] = 12922,
  [SMALL_STATE(796)] = 12926,
  [SMALL_STATE(797)] = 12930,
  [SMALL_STATE(798)] = 12934,
  [SMALL_STATE(799)] = 12938,
  [SMALL_STATE(800)] = 12942,
  [SMALL_STATE(801)] = 12946,
  [SMALL_STATE(802)] = 12950,
  [SMALL_STATE(803)] = 12954,
  [SMALL_STATE(804)] = 12958,
  [SMALL_STATE(805)] = 12962,
  [SMALL_STATE(806)] = 12966,
  [SMALL_STATE(807)] = 12970,
  [SMALL_STATE(808)] = 12974,
  [SMALL_STATE(809)] = 12978,
  [SMALL_STATE(810)] = 12982,
  [SMALL_STATE(811)] = 12986,
  [SMALL_STATE(812)] = 12990,
  [SMALL_STATE(813)] = 12994,
  [SMALL_STATE(814)] = 12998,
  [SMALL_STATE(815)] = 13002,
  [SMALL_STATE(816)] = 13006,
  [SMALL_STATE(817)] = 13010,
  [SMALL_STATE(818)] = 13014,
  [SMALL_STATE(819)] = 13018,
  [SMALL_STATE(820)] = 13022,
  [SMALL_STATE(821)] = 13026,
  [SMALL_STATE(822)] = 13030,
  [SMALL_STATE(823)] = 13034,
  [SMALL_STATE(824)] = 13038,
  [SMALL_STATE(825)] = 13042,
  [SMALL_STATE(826)] = 13046,
  [SMALL_STATE(827)] = 13050,
  [SMALL_STATE(828)] = 13054,
  [SMALL_STATE(829)] = 13058,
  [SMALL_STATE(830)] = 13062,
  [SMALL_STATE(831)] = 13066,
  [SMALL_STATE(832)] = 13070,
  [SMALL_STATE(833)] = 13074,
  [SMALL_STATE(834)] = 13078,
  [SMALL_STATE(835)] = 13082,
  [SMALL_STATE(836)] = 13086,
  [SMALL_STATE(837)] = 13090,
  [SMALL_STATE(838)] = 13094,
  [SMALL_STATE(839)] = 13098,
  [SMALL_STATE(840)] = 13102,
  [SMALL_STATE(841)] = 13106,
  [SMALL_STATE(842)] = 13110,
  [SMALL_STATE(843)] = 13114,
  [SMALL_STATE(844)] = 13118,
  [SMALL_STATE(845)] = 13122,
  [SMALL_STATE(846)] = 13126,
  [SMALL_STATE(847)] = 13130,
  [SMALL_STATE(848)] = 13134,
  [SMALL_STATE(849)] = 13138,
  [SMALL_STATE(850)] = 13142,
  [SMALL_STATE(851)] = 13146,
  [SMALL_STATE(852)] = 13150,
  [SMALL_STATE(853)] = 13154,
  [SMALL_STATE(854)] = 13158,
  [SMALL_STATE(855)] = 13162,
  [SMALL_STATE(856)] = 13166,
  [SMALL_STATE(857)] = 13170,
  [SMALL_STATE(858)] = 13174,
  [SMALL_STATE(859)] = 13178,
  [SMALL_STATE(860)] = 13182,
  [SMALL_STATE(861)] = 13186,
  [SMALL_STATE(862)] = 13190,
  [SMALL_STATE(863)] = 13194,
  [SMALL_STATE(864)] = 13198,
  [SMALL_STATE(865)] = 13202,
  [SMALL_STATE(866)] = 13206,
  [SMALL_STATE(867)] = 13210,
  [SMALL_STATE(868)] = 13214,
  [SMALL_STATE(869)] = 13218,
  [SMALL_STATE(870)] = 13222,
  [SMALL_STATE(871)] = 13226,
  [SMALL_STATE(872)] = 13230,
  [SMALL_STATE(873)] = 13234,
  [SMALL_STATE(874)] = 13238,
  [SMALL_STATE(875)] = 13242,
  [SMALL_STATE(876)] = 13246,
  [SMALL_STATE(877)] = 13250,
  [SMALL_STATE(878)] = 13254,
  [SMALL_STATE(879)] = 13258,
  [SMALL_STATE(880)] = 13262,
  [SMALL_STATE(881)] = 13266,
  [SMALL_STATE(882)] = 13270,
  [SMALL_STATE(883)] = 13274,
  [SMALL_STATE(884)] = 13278,
  [SMALL_STATE(885)] = 13282,
  [SMALL_STATE(886)] = 13286,
  [SMALL_STATE(887)] = 13290,
  [SMALL_STATE(888)] = 13294,
  [SMALL_STATE(889)] = 13298,
  [SMALL_STATE(890)] = 13302,
  [SMALL_STATE(891)] = 13306,
  [SMALL_STATE(892)] = 13310,
  [SMALL_STATE(893)] = 13314,
  [SMALL_STATE(894)] = 13318,
  [SMALL_STATE(895)] = 13322,
  [SMALL_STATE(896)] = 13326,
  [SMALL_STATE(897)] = 13330,
  [SMALL_STATE(898)] = 13334,
  [SMALL_STATE(899)] = 13338,
  [SMALL_STATE(900)] = 13342,
  [SMALL_STATE(901)] = 13346,
  [SMALL_STATE(902)] = 13350,
  [SMALL_STATE(903)] = 13354,
  [SMALL_STATE(904)] = 13358,
  [SMALL_STATE(905)] = 13362,
  [SMALL_STATE(906)] = 13366,
  [SMALL_STATE(907)] = 13370,
  [SMALL_STATE(908)] = 13374,
  [SMALL_STATE(909)] = 13378,
  [SMALL_STATE(910)] = 13382,
  [SMALL_STATE(911)] = 13386,
  [SMALL_STATE(912)] = 13390,
  [SMALL_STATE(913)] = 13394,
  [SMALL_STATE(914)] = 13398,
  [SMALL_STATE(915)] = 13402,
  [SMALL_STATE(916)] = 13406,
  [SMALL_STATE(917)] = 13410,
  [SMALL_STATE(918)] = 13414,
  [SMALL_STATE(919)] = 13418,
  [SMALL_STATE(920)] = 13422,
  [SMALL_STATE(921)] = 13426,
  [SMALL_STATE(922)] = 13430,
  [SMALL_STATE(923)] = 13434,
  [SMALL_STATE(924)] = 13438,
  [SMALL_STATE(925)] = 13442,
  [SMALL_STATE(926)] = 13446,
  [SMALL_STATE(927)] = 13450,
  [SMALL_STATE(928)] = 13454,
  [SMALL_STATE(929)] = 13458,
  [SMALL_STATE(930)] = 13462,
  [SMALL_STATE(931)] = 13466,
  [SMALL_STATE(932)] = 13470,
  [SMALL_STATE(933)] = 13474,
  [SMALL_STATE(934)] = 13478,
  [SMALL_STATE(935)] = 13482,
  [SMALL_STATE(936)] = 13486,
  [SMALL_STATE(937)] = 13490,
  [SMALL_STATE(938)] = 13494,
  [SMALL_STATE(939)] = 13498,
  [SMALL_STATE(940)] = 13502,
  [SMALL_STATE(941)] = 13506,
  [SMALL_STATE(942)] = 13510,
  [SMALL_STATE(943)] = 13514,
  [SMALL_STATE(944)] = 13518,
  [SMALL_STATE(945)] = 13522,
  [SMALL_STATE(946)] = 13526,
  [SMALL_STATE(947)] = 13530,
  [SMALL_STATE(948)] = 13534,
  [SMALL_STATE(949)] = 13538,
  [SMALL_STATE(950)] = 13542,
  [SMALL_STATE(951)] = 13546,
  [SMALL_STATE(952)] = 13550,
  [SMALL_STATE(953)] = 13554,
  [SMALL_STATE(954)] = 13558,
  [SMALL_STATE(955)] = 13562,
  [SMALL_STATE(956)] = 13566,
  [SMALL_STATE(957)] = 13570,
  [SMALL_STATE(958)] = 13574,
  [SMALL_STATE(959)] = 13578,
  [SMALL_STATE(960)] = 13582,
  [SMALL_STATE(961)] = 13586,
  [SMALL_STATE(962)] = 13590,
  [SMALL_STATE(963)] = 13594,
  [SMALL_STATE(964)] = 13598,
  [SMALL_STATE(965)] = 13602,
  [SMALL_STATE(966)] = 13606,
  [SMALL_STATE(967)] = 13610,
  [SMALL_STATE(968)] = 13614,
  [SMALL_STATE(969)] = 13618,
  [SMALL_STATE(970)] = 13622,
  [SMALL_STATE(971)] = 13626,
  [SMALL_STATE(972)] = 13630,
  [SMALL_STATE(973)] = 13634,
  [SMALL_STATE(974)] = 13638,
  [SMALL_STATE(975)] = 13642,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(475),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(973),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(468),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(477),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(467),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(966),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 13),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 10),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 24),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(356),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4, .production_id = 23),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 21),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 16),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(560),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(352),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 8),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(489),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(686),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(585),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(368),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3, .production_id = 20),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 25),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 7),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 25),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 25),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 7),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 7),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 25),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 25),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 28),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(908),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(335),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(312),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 14),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(444),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(434),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(927),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(311),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(414),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(416),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(32),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(710),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(726),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(174),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(37),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(769),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(520),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(702),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(480),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(679),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(429),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 22),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 19),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 27),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1778] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
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
