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
#define STATE_COUNT 573
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 7
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 23

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
  aux_sym_order_spec_element_token1 = 40,
  aux_sym_order_spec_element_token2 = 41,
  aux_sym_delete_statement_token1 = 42,
  aux_sym_begin_batch_token1 = 43,
  aux_sym_begin_batch_token2 = 44,
  aux_sym_begin_batch_token3 = 45,
  aux_sym_begin_batch_token4 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  aux_sym_using_timestamp_spec_token1 = 49,
  aux_sym_timestamp_token1 = 50,
  aux_sym_if_exist_token1 = 51,
  aux_sym_if_exist_token2 = 52,
  aux_sym_insert_statement_token1 = 53,
  aux_sym_insert_statement_token2 = 54,
  sym__dquote = 55,
  aux_sym_insert_values_spec_token1 = 56,
  anon_sym_LBRACE = 57,
  anon_sym_COLON = 58,
  anon_sym_RBRACE = 59,
  aux_sym_if_not_exist_token1 = 60,
  aux_sym_ttl_token1 = 61,
  aux_sym_truncate_token1 = 62,
  aux_sym_truncate_token2 = 63,
  aux_sym_create_index_token1 = 64,
  aux_sym_create_index_token2 = 65,
  aux_sym_create_index_token3 = 66,
  aux_sym_index_keys_spec_token1 = 67,
  aux_sym_index_entries_s_spec_token1 = 68,
  aux_sym_index_full_spec_token1 = 69,
  aux_sym_drop_index_token1 = 70,
  aux_sym_update_token1 = 71,
  aux_sym_update_token2 = 72,
  anon_sym_PLUS = 73,
  aux_sym_use_token1 = 74,
  aux_sym_grant_token1 = 75,
  aux_sym_grant_token2 = 76,
  aux_sym_priviledge_token1 = 77,
  aux_sym_priviledge_token2 = 78,
  aux_sym_priviledge_token3 = 79,
  aux_sym_priviledge_token4 = 80,
  aux_sym_priviledge_token5 = 81,
  aux_sym_priviledge_token6 = 82,
  aux_sym_priviledge_token7 = 83,
  aux_sym_resource_token1 = 84,
  aux_sym_resource_token2 = 85,
  aux_sym_resource_token3 = 86,
  aux_sym_resource_token4 = 87,
  aux_sym_resource_token5 = 88,
  aux_sym_resource_token6 = 89,
  aux_sym_revoke_token1 = 90,
  aux_sym_list_roles_token1 = 91,
  aux_sym_list_roles_token2 = 92,
  aux_sym_list_roles_token3 = 93,
  aux_sym_drop_user_token1 = 94,
  sym_source_file = 95,
  sym__statement = 96,
  sym_select_statement = 97,
  sym_select_elements = 98,
  sym_select_element = 99,
  sym_function_call = 100,
  sym_function_args = 101,
  sym_constant = 102,
  sym__uuid = 103,
  sym__string_literal = 104,
  aux_sym__decimal_literal = 105,
  sym__float_literal = 106,
  sym__hexadecimal_literal = 107,
  sym_from_spec = 108,
  sym_from_spec_element = 109,
  sym_where_spec = 110,
  sym_relation_elements = 111,
  sym_relation_element = 112,
  sym_assignment_tuple = 113,
  sym_relalationContainsKey = 114,
  sym_relalationContains = 115,
  sym_order_spec = 116,
  sym_order_spec_element = 117,
  sym_delete_statement = 118,
  sym_begin_batch = 119,
  sym_delete_column_list = 120,
  sym_delete_column_item = 121,
  sym_using_timestamp_spec = 122,
  sym_timestamp = 123,
  sym_if_exist = 124,
  sym_if_spec = 125,
  sym_if_condition_list = 126,
  sym_if_condition = 127,
  sym_insert_statement = 128,
  sym_keyspace = 129,
  sym_table = 130,
  sym_insert_column_spec = 131,
  sym_column_list = 132,
  sym_column = 133,
  sym_insert_values_spec = 134,
  sym_expression_list = 135,
  sym_expression = 136,
  sym_assignment_map = 137,
  sym_assignment_set = 138,
  sym_assignment_list = 139,
  sym_if_not_exist = 140,
  sym_using_ttl_timestamp = 141,
  sym_ttl = 142,
  sym_truncate = 143,
  sym_create_index = 144,
  sym_index_name = 145,
  sym_index_column_spec = 146,
  sym_index_keys_spec = 147,
  sym_index_entries_s_spec = 148,
  sym_index_full_spec = 149,
  sym_drop_index = 150,
  sym_update = 151,
  sym_assignment_element = 152,
  sym_use = 153,
  sym_grant = 154,
  sym_priviledge = 155,
  sym_resource = 156,
  sym_role = 157,
  sym_function = 158,
  sym_revoke = 159,
  sym_list_roles = 160,
  sym_list_permissions = 161,
  sym_drop_function = 162,
  sym_drop_keyspace = 163,
  sym_drop_role = 164,
  sym_drop_table = 165,
  sym_drop_user = 166,
  sym_user = 167,
  aux_sym_source_file_repeat1 = 168,
  aux_sym_select_elements_repeat1 = 169,
  aux_sym_function_args_repeat1 = 170,
  aux_sym__hexadecimal_literal_repeat1 = 171,
  aux_sym__hexadecimal_literal_repeat2 = 172,
  aux_sym_relation_elements_repeat1 = 173,
  aux_sym_relation_element_repeat1 = 174,
  aux_sym_relation_element_repeat2 = 175,
  aux_sym_assignment_tuple_repeat1 = 176,
  aux_sym_delete_column_list_repeat1 = 177,
  aux_sym_if_condition_list_repeat1 = 178,
  aux_sym_column_list_repeat1 = 179,
  aux_sym_expression_list_repeat1 = 180,
  aux_sym_assignment_map_repeat1 = 181,
  aux_sym_update_repeat1 = 182,
  anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE = 183,
  anon_alias_sym_ALL_ROLES = 184,
  anon_alias_sym_CONTAINS = 185,
  anon_alias_sym_CREATE = 186,
  anon_alias_sym_DROP_INDEX = 187,
  anon_alias_sym_IF = 188,
  anon_alias_sym_LIST = 189,
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
  [aux_sym_relalationContainsKey_token2] = "CONTAINS_KEY",
  [aux_sym_order_spec_token1] = "ORDER_BY",
  [aux_sym_order_spec_token2] = "ORDER_BY",
  [aux_sym_order_spec_element_token1] = "ASC",
  [aux_sym_order_spec_element_token2] = "DESC",
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
  [aux_sym_create_index_token1] = "CREATE_INDEX",
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
  [aux_sym_resource_token5] = "LIST_ROLES",
  [aux_sym_resource_token6] = "ROLE",
  [aux_sym_revoke_token1] = "REVOKE",
  [aux_sym_list_roles_token1] = "LIST_ROLES",
  [aux_sym_list_roles_token2] = "OF",
  [aux_sym_list_roles_token3] = "NORECURSIVE",
  [aux_sym_drop_user_token1] = "USER",
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
  [anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE] = "ALL_FUNCTIONS_IN_KEYSPACE",
  [anon_alias_sym_ALL_ROLES] = "ALL_ROLES",
  [anon_alias_sym_CONTAINS] = "CONTAINS",
  [anon_alias_sym_CREATE] = "CREATE",
  [anon_alias_sym_DROP_INDEX] = "DROP_INDEX",
  [anon_alias_sym_IF] = "IF",
  [anon_alias_sym_LIST] = "LIST",
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
  [aux_sym_relalationContainsKey_token2] = aux_sym_relalationContainsKey_token1,
  [aux_sym_order_spec_token1] = aux_sym_order_spec_token1,
  [aux_sym_order_spec_token2] = aux_sym_order_spec_token1,
  [aux_sym_order_spec_element_token1] = aux_sym_order_spec_element_token1,
  [aux_sym_order_spec_element_token2] = aux_sym_order_spec_element_token2,
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
  [aux_sym_create_index_token2] = aux_sym_create_index_token1,
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
  [aux_sym_list_roles_token1] = aux_sym_resource_token5,
  [aux_sym_list_roles_token2] = aux_sym_list_roles_token2,
  [aux_sym_list_roles_token3] = aux_sym_list_roles_token3,
  [aux_sym_drop_user_token1] = aux_sym_drop_user_token1,
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
  [anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE] = anon_alias_sym_ALL_FUNCTIONS_IN_KEYSPACE,
  [anon_alias_sym_ALL_ROLES] = anon_alias_sym_ALL_ROLES,
  [anon_alias_sym_CONTAINS] = anon_alias_sym_CONTAINS,
  [anon_alias_sym_CREATE] = anon_alias_sym_CREATE,
  [anon_alias_sym_DROP_INDEX] = anon_alias_sym_DROP_INDEX,
  [anon_alias_sym_IF] = anon_alias_sym_IF,
  [anon_alias_sym_LIST] = anon_alias_sym_LIST,
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
  [aux_sym_order_spec_element_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_spec_element_token2] = {
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
  [anon_alias_sym_CREATE] = {
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
  [anon_alias_sym_LIST] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_column = 2,
  field_content = 3,
  field_function = 4,
  field_keyspace = 5,
  field_role = 6,
  field_table = 7,
  field_user = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_column] = "column",
  [field_content] = "content",
  [field_function] = "function",
  [field_keyspace] = "keyspace",
  [field_role] = "role",
  [field_table] = "table",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [10] = {.index = 5, .length = 3},
  [11] = {.index = 8, .length = 3},
  [12] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 1},
  [15] = {.index = 14, .length = 1},
  [21] = {.index = 15, .length = 3},
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
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = anon_alias_sym_CREATE,
  },
  [4] = {
    [0] = anon_alias_sym_LIST,
  },
  [5] = {
    [0] = anon_alias_sym_DROP_INDEX,
    [1] = anon_alias_sym_DROP_INDEX,
  },
  [9] = {
    [0] = aux_sym_priviledge_token2,
  },
  [13] = {
    [0] = anon_alias_sym_IF,
  },
  [16] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
  },
  [17] = {
    [0] = aux_sym_resource_token1,
  },
  [18] = {
    [0] = aux_sym_resource_token4,
  },
  [19] = {
    [0] = anon_alias_sym_ALL_ROLES,
    [1] = anon_alias_sym_ALL_ROLES,
  },
  [20] = {
    [1] = anon_alias_sym_CONTAINS,
  },
  [22] = {
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
  [32] = 23,
  [33] = 28,
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
  [72] = 71,
  [73] = 45,
  [74] = 74,
  [75] = 75,
  [76] = 46,
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
  [92] = 31,
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
  [113] = 100,
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
  [136] = 134,
  [137] = 129,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
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
  [221] = 23,
  [222] = 28,
  [223] = 223,
  [224] = 220,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 234,
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
  [253] = 244,
  [254] = 254,
  [255] = 255,
  [256] = 247,
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
  [276] = 133,
  [277] = 277,
  [278] = 278,
  [279] = 161,
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
  [430] = 429,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 429,
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
  [556] = 514,
  [557] = 557,
  [558] = 471,
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
  [572] = 500,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '+') ADVANCE(437);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(393);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(310);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(307);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(228);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(182);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(343);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '0') ADVANCE(324);
      if (lookahead == 'X') ADVANCE(331);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(388);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(320);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(326);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(182);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 25:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 98:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 99:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(456);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      END_STATE();
    case 105:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 107:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(414);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      END_STATE();
    case 225:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 259:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 261:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 263:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 264:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 265:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 266:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 267:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 268:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 269:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(430);
      END_STATE();
    case 270:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 271:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 272:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 273:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(447);
      END_STATE();
    case 274:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(401);
      END_STATE();
    case 275:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 276:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 277:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(72);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 282:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(322);
      END_STATE();
    case 283:
      if (eof) ADVANCE(287);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(393);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(228);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 284:
      if (eof) ADVANCE(287);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '0') ADVANCE(324);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == 'X') ADVANCE(7);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(68);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(14);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 285:
      if (eof) ADVANCE(287);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(309);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(309);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(282);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(355);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(345);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(354);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(353);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(340);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(359);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
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
  [4] = {.lex_state = 283},
  [5] = {.lex_state = 283},
  [6] = {.lex_state = 283},
  [7] = {.lex_state = 283},
  [8] = {.lex_state = 283},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 283},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 283},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 284},
  [17] = {.lex_state = 283},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 284},
  [20] = {.lex_state = 283},
  [21] = {.lex_state = 283},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 286},
  [33] = {.lex_state = 286},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 283},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 283},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 283},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 283},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 283},
  [58] = {.lex_state = 284},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 283},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 283},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 283},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 283},
  [70] = {.lex_state = 283},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 283},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 283},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 283},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 284},
  [84] = {.lex_state = 283},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 283},
  [87] = {.lex_state = 283},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 283},
  [90] = {.lex_state = 283},
  [91] = {.lex_state = 283},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 283},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 284},
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
  [113] = {.lex_state = 284},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 284},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 284},
  [122] = {.lex_state = 284},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 284},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 284},
  [129] = {.lex_state = 284},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 284},
  [132] = {.lex_state = 284},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 284},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 284},
  [137] = {.lex_state = 284},
  [138] = {.lex_state = 284},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 284},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 284},
  [143] = {.lex_state = 284},
  [144] = {.lex_state = 284},
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
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 283},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 283},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 283},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 283},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 104},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 283},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 283},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 283},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 283},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 283},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 283},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 283},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 283},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 283},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 283},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 283},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 283},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 283},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 283},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 283},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 283},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 283},
  [389] = {.lex_state = 283},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 283},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 283},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 283},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 283},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 283},
  [415] = {.lex_state = 283},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 283},
  [426] = {.lex_state = 283},
  [427] = {.lex_state = 283},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 283},
  [432] = {.lex_state = 283},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 6},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 283},
  [441] = {.lex_state = 283},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 283},
  [445] = {.lex_state = 283},
  [446] = {.lex_state = 283},
  [447] = {.lex_state = 283},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 283},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 283},
  [463] = {.lex_state = 283},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 283},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 283},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 284},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 283},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 283},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 284},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 284},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 283},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 284},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 283},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 283},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 285},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 284},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 1},
  [543] = {.lex_state = 284},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 284},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 283},
  [554] = {.lex_state = 283},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 283},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 284},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 283},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 284},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 318},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 5},
  [572] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(551),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(160),
    [sym_delete_statement] = STATE(160),
    [sym_begin_batch] = STATE(341),
    [sym_insert_statement] = STATE(160),
    [sym_truncate] = STATE(160),
    [sym_create_index] = STATE(160),
    [sym_drop_index] = STATE(160),
    [sym_update] = STATE(160),
    [sym_use] = STATE(160),
    [sym_grant] = STATE(160),
    [sym_revoke] = STATE(160),
    [sym_list_roles] = STATE(160),
    [sym_list_permissions] = STATE(160),
    [sym_drop_function] = STATE(160),
    [sym_drop_keyspace] = STATE(160),
    [sym_drop_role] = STATE(160),
    [sym_drop_table] = STATE(160),
    [sym_drop_user] = STATE(160),
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
    STATE(341), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(160), 17,
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
  [66] = 16,
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
    STATE(341), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(160), 17,
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
  [132] = 3,
    ACTIONS(71), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(69), 29,
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
  [170] = 4,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(74), 27,
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
  [209] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 27,
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
  [248] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
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
  [284] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(86), 27,
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
  [320] = 2,
    ACTIONS(90), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 26,
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
  [353] = 2,
    ACTIONS(94), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 26,
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
  [386] = 1,
    ACTIONS(96), 28,
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
  [417] = 2,
    ACTIONS(100), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 26,
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
  [450] = 1,
    ACTIONS(102), 27,
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
  [480] = 1,
    ACTIONS(104), 27,
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
  [510] = 1,
    ACTIONS(80), 27,
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
  [540] = 16,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(362), 1,
      sym_expression,
    STATE(541), 1,
      sym_expression_list,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(391), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [597] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(128), 22,
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
  [625] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(132), 22,
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
  [653] = 15,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(437), 1,
      sym_expression,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(391), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [707] = 1,
    ACTIONS(132), 22,
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
  [732] = 1,
    ACTIONS(128), 22,
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
  [757] = 15,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(383), 1,
      sym_constant,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(283), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [809] = 3,
    ACTIONS(146), 1,
      sym__hex_digit,
    STATE(28), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(144), 18,
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
  [836] = 7,
    ACTIONS(150), 1,
      aux_sym_select_statement_token4,
    ACTIONS(152), 1,
      aux_sym_select_statement_token5,
    ACTIONS(154), 1,
      aux_sym_where_spec_token1,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    STATE(54), 1,
      sym_where_spec,
    STATE(102), 1,
      sym_order_spec,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [871] = 7,
    ACTIONS(154), 1,
      aux_sym_where_spec_token1,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    ACTIONS(160), 1,
      aux_sym_select_statement_token4,
    ACTIONS(162), 1,
      aux_sym_select_statement_token5,
    STATE(52), 1,
      sym_where_spec,
    STATE(99), 1,
      sym_order_spec,
    ACTIONS(158), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [906] = 15,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(561), 1,
      sym_function_args,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(329), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [957] = 2,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(170), 19,
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
  [982] = 3,
    ACTIONS(176), 1,
      sym__hex_digit,
    STATE(28), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 18,
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
  [1009] = 7,
    ACTIONS(154), 1,
      aux_sym_where_spec_token1,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    STATE(61), 1,
      sym_where_spec,
    STATE(119), 1,
      sym_order_spec,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1044] = 1,
    ACTIONS(185), 19,
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
  [1066] = 3,
    ACTIONS(189), 1,
      aux_sym_relation_elements_token1,
    STATE(45), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(187), 17,
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
  [1092] = 3,
    ACTIONS(191), 1,
      sym__hex_digit,
    STATE(33), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(144), 17,
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
  [1118] = 3,
    ACTIONS(193), 1,
      sym__hex_digit,
    STATE(33), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 17,
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
  [1144] = 1,
    ACTIONS(196), 19,
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
  [1166] = 1,
    ACTIONS(198), 19,
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
  [1188] = 1,
    ACTIONS(200), 19,
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
  [1210] = 1,
    ACTIONS(202), 19,
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
  [1232] = 1,
    ACTIONS(204), 19,
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
  [1254] = 1,
    ACTIONS(206), 19,
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
  [1276] = 1,
    ACTIONS(208), 19,
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
  [1298] = 1,
    ACTIONS(210), 19,
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
  [1320] = 1,
    ACTIONS(212), 19,
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
  [1342] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(214), 17,
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
  [1368] = 1,
    ACTIONS(216), 19,
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
  [1390] = 3,
    ACTIONS(189), 1,
      aux_sym_relation_elements_token1,
    STATE(46), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(218), 17,
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
  [1416] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(46), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(204), 17,
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
  [1442] = 1,
    ACTIONS(223), 18,
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
  [1463] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(108), 1,
      sym_if_not_exist,
    STATE(192), 1,
      sym_using_ttl_timestamp,
    ACTIONS(225), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1492] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(101), 1,
      sym_if_not_exist,
    STATE(200), 1,
      sym_using_ttl_timestamp,
    ACTIONS(231), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1521] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(103), 1,
      sym_if_not_exist,
    STATE(171), 1,
      sym_using_ttl_timestamp,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1550] = 2,
    ACTIONS(237), 1,
      aux_sym_relation_element_token1,
    ACTIONS(235), 17,
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
  [1573] = 5,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    STATE(119), 1,
      sym_order_spec,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1602] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(239), 16,
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
  [1627] = 5,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    ACTIONS(243), 1,
      aux_sym_select_statement_token4,
    ACTIONS(245), 1,
      aux_sym_select_statement_token5,
    STATE(116), 1,
      sym_order_spec,
    ACTIONS(241), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1656] = 1,
    ACTIONS(247), 18,
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
  [1677] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(118), 1,
      sym_if_not_exist,
    STATE(178), 1,
      sym_using_ttl_timestamp,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1706] = 1,
    ACTIONS(134), 18,
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
  [1727] = 2,
    ACTIONS(253), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(251), 16,
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
  [1750] = 13,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(490), 1,
      sym_function_args,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(329), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1795] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
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
  [1818] = 5,
    ACTIONS(150), 1,
      aux_sym_select_statement_token4,
    ACTIONS(152), 1,
      aux_sym_select_statement_token5,
    ACTIONS(156), 1,
      aux_sym_order_spec_token1,
    STATE(102), 1,
      sym_order_spec,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1847] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(97), 1,
      sym_if_not_exist,
    STATE(149), 1,
      sym_using_ttl_timestamp,
    ACTIONS(257), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1876] = 1,
    ACTIONS(259), 17,
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
  [1896] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(205), 2,
      sym_if_exist,
      sym_if_spec,
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
  [1920] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(159), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(265), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [1944] = 1,
    ACTIONS(267), 17,
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
  [1964] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(155), 2,
      sym_if_exist,
      sym_if_spec,
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
  [1988] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(176), 2,
      sym_if_exist,
      sym_if_spec,
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
  [2012] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(275), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
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
  [2038] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(152), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2064] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    ACTIONS(279), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(36), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2106] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      sym_object_name,
    ACTIONS(281), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(36), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2148] = 3,
    ACTIONS(283), 1,
      aux_sym_relation_elements_token1,
    STATE(76), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(218), 15,
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
  [2172] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(169), 2,
      sym_if_exist,
      sym_if_spec,
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
  [2196] = 1,
    ACTIONS(287), 17,
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
  [2216] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(76), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(204), 15,
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
  [2240] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(165), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(292), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2264] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(296), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(294), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2290] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(138), 1,
      sym__hex_4digit,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(136), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(435), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2332] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(166), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(300), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2356] = 1,
    ACTIONS(302), 17,
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
  [2376] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(182), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(304), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2400] = 13,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(277), 1,
      sym_constant,
    STATE(406), 1,
      sym_assignment_tuple,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2444] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(308), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(306), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2470] = 2,
    ACTIONS(312), 1,
      aux_sym_priviledge_token2,
    ACTIONS(310), 16,
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
  [2492] = 4,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(245), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(241), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2518] = 1,
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
  [2538] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(194), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(314), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2562] = 1,
    ACTIONS(130), 17,
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
  [2582] = 1,
    ACTIONS(316), 17,
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
  [2602] = 1,
    ACTIONS(318), 17,
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
  [2622] = 3,
    ACTIONS(283), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(187), 15,
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
  [2646] = 1,
    ACTIONS(320), 17,
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
  [2666] = 3,
    ACTIONS(263), 1,
      aux_sym_if_exist_token1,
    STATE(203), 2,
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
  [2690] = 3,
    ACTIONS(326), 1,
      aux_sym_relation_elements_token1,
    STATE(98), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(324), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2713] = 1,
    ACTIONS(328), 16,
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
  [2732] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(171), 1,
      sym_using_ttl_timestamp,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2755] = 3,
    ACTIONS(332), 1,
      aux_sym_relation_elements_token1,
    STATE(98), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(330), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2778] = 3,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(183), 1,
      aux_sym_select_statement_token5,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2801] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_0X,
    ACTIONS(335), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(37), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2842] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(178), 1,
      sym_using_ttl_timestamp,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2865] = 3,
    ACTIONS(243), 1,
      aux_sym_select_statement_token4,
    ACTIONS(245), 1,
      aux_sym_select_statement_token5,
    ACTIONS(241), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2888] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_using_ttl_timestamp,
    ACTIONS(225), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2911] = 1,
    ACTIONS(337), 16,
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
  [2930] = 1,
    ACTIONS(339), 16,
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
  [2949] = 1,
    ACTIONS(310), 16,
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
  [2968] = 3,
    ACTIONS(326), 1,
      aux_sym_relation_elements_token1,
    STATE(95), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(341), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [2991] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(174), 1,
      sym_using_ttl_timestamp,
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
  [3014] = 2,
    ACTIONS(347), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(345), 15,
      ts_builtin_sym_end,
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
  [3035] = 2,
    ACTIONS(349), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(345), 15,
      ts_builtin_sym_end,
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
  [3056] = 1,
    ACTIONS(351), 16,
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
  [3075] = 1,
    ACTIONS(353), 16,
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
  [3094] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    ACTIONS(355), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(37), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3135] = 3,
    ACTIONS(359), 1,
      aux_sym_list_roles_token2,
    ACTIONS(361), 1,
      aux_sym_list_roles_token3,
    ACTIONS(357), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3158] = 3,
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
  [3181] = 3,
    ACTIONS(296), 1,
      aux_sym_select_statement_token5,
    ACTIONS(369), 1,
      aux_sym_select_statement_token4,
    ACTIONS(294), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3204] = 12,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(304), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3245] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(149), 1,
      sym_using_ttl_timestamp,
    ACTIONS(257), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3268] = 3,
    ACTIONS(150), 1,
      aux_sym_select_statement_token4,
    ACTIONS(152), 1,
      aux_sym_select_statement_token5,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3291] = 1,
    ACTIONS(373), 16,
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
  [3310] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(394), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3348] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(538), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3386] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
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
  [3406] = 1,
    ACTIONS(377), 15,
      ts_builtin_sym_end,
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
  [3424] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(337), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3462] = 2,
    ACTIONS(381), 1,
      aux_sym_list_roles_token2,
    ACTIONS(379), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3482] = 2,
    ACTIONS(385), 1,
      aux_sym_list_roles_token3,
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
  [3502] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(236), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3540] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(36), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3578] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(387), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [3598] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(139), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3636] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(381), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3674] = 1,
    ACTIONS(389), 15,
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
  [3692] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(35), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3730] = 1,
    ACTIONS(375), 15,
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
  [3748] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(35), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3786] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(36), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3824] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(34), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3862] = 1,
    ACTIONS(391), 15,
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
  [3880] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(357), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3918] = 1,
    ACTIONS(330), 15,
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
  [3936] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(34), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [3974] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(105), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4012] = 11,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      sym__hex_4digit,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      sym__dec_digit,
    ACTIONS(120), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(277), 1,
      sym_constant,
    ACTIONS(108), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [4050] = 1,
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
  [4067] = 1,
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
  [4084] = 1,
    ACTIONS(397), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4101] = 1,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4118] = 1,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4135] = 1,
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
  [4152] = 1,
    ACTIONS(241), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4169] = 1,
    ACTIONS(401), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4186] = 1,
    ACTIONS(403), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4203] = 1,
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
  [4220] = 1,
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
  [4237] = 1,
    ACTIONS(294), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4254] = 1,
    ACTIONS(379), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4271] = 1,
    ACTIONS(407), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4288] = 1,
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
  [4305] = 2,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(411), 13,
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
  [4324] = 1,
    ACTIONS(415), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4341] = 1,
    ACTIONS(306), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4358] = 1,
    ACTIONS(417), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4375] = 1,
    ACTIONS(419), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4392] = 1,
    ACTIONS(265), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4409] = 1,
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
  [4426] = 1,
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
  [4443] = 1,
    ACTIONS(387), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4460] = 1,
    ACTIONS(314), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4477] = 1,
    ACTIONS(425), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4494] = 1,
    ACTIONS(225), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4511] = 1,
    ACTIONS(427), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4528] = 1,
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
  [4545] = 1,
    ACTIONS(431), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4562] = 1,
    ACTIONS(433), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4579] = 1,
    ACTIONS(300), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4596] = 1,
    ACTIONS(435), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4613] = 1,
    ACTIONS(257), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4630] = 1,
    ACTIONS(437), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4647] = 1,
    ACTIONS(439), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4664] = 1,
    ACTIONS(441), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4681] = 1,
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
  [4698] = 1,
    ACTIONS(443), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4715] = 1,
    ACTIONS(445), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4732] = 1,
    ACTIONS(447), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4749] = 1,
    ACTIONS(449), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4766] = 1,
    ACTIONS(451), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4783] = 1,
    ACTIONS(453), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4800] = 1,
    ACTIONS(455), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4817] = 1,
    ACTIONS(457), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4834] = 1,
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
  [4851] = 1,
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
  [4868] = 1,
    ACTIONS(461), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4885] = 1,
    ACTIONS(292), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4902] = 1,
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
  [4919] = 1,
    ACTIONS(465), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4936] = 1,
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
  [4953] = 1,
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
  [4970] = 1,
    ACTIONS(469), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [4987] = 1,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [5004] = 1,
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
  [5021] = 1,
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
  [5038] = 1,
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
  [5055] = 1,
    ACTIONS(475), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [5072] = 1,
    ACTIONS(304), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [5089] = 1,
    ACTIONS(477), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
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
  [5106] = 1,
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
  [5123] = 1,
    ACTIONS(481), 13,
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
  [5139] = 5,
    ACTIONS(485), 1,
      aux_sym_create_index_token1,
    ACTIONS(487), 1,
      aux_sym_priviledge_token1,
    ACTIONS(489), 1,
      aux_sym_resource_token5,
    STATE(115), 1,
      sym_priviledge,
    ACTIONS(483), 7,
      aux_sym_select_statement_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [5161] = 4,
    ACTIONS(485), 1,
      aux_sym_create_index_token1,
    ACTIONS(487), 1,
      aux_sym_priviledge_token1,
    STATE(496), 1,
      sym_priviledge,
    ACTIONS(483), 7,
      aux_sym_select_statement_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [5180] = 7,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    ACTIONS(495), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(497), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(499), 1,
      aux_sym_index_full_spec_token1,
    STATE(531), 1,
      sym_index_column_spec,
    STATE(533), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [5205] = 7,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    ACTIONS(495), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(497), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(499), 1,
      aux_sym_index_full_spec_token1,
    STATE(473), 1,
      sym_index_column_spec,
    STATE(533), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [5230] = 7,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    ACTIONS(495), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(497), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(499), 1,
      aux_sym_index_full_spec_token1,
    STATE(530), 1,
      sym_index_column_spec,
    STATE(533), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [5255] = 10,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    ACTIONS(505), 1,
      aux_sym_truncate_token2,
    ACTIONS(507), 1,
      aux_sym_priviledge_token1,
    ACTIONS(509), 1,
      aux_sym_resource_token2,
    ACTIONS(511), 1,
      aux_sym_resource_token3,
    ACTIONS(513), 1,
      aux_sym_resource_token6,
    STATE(63), 1,
      sym_table,
    STATE(461), 1,
      sym_keyspace,
    STATE(464), 1,
      sym_resource,
  [5286] = 10,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    ACTIONS(505), 1,
      aux_sym_truncate_token2,
    ACTIONS(507), 1,
      aux_sym_priviledge_token1,
    ACTIONS(509), 1,
      aux_sym_resource_token2,
    ACTIONS(511), 1,
      aux_sym_resource_token3,
    ACTIONS(513), 1,
      aux_sym_resource_token6,
    STATE(63), 1,
      sym_table,
    STATE(461), 1,
      sym_keyspace,
    STATE(463), 1,
      sym_resource,
  [5317] = 7,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    ACTIONS(495), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(497), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(499), 1,
      aux_sym_index_full_spec_token1,
    STATE(475), 1,
      sym_index_column_spec,
    STATE(533), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [5342] = 7,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    ACTIONS(495), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(497), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(499), 1,
      aux_sym_index_full_spec_token1,
    STATE(512), 1,
      sym_index_column_spec,
    STATE(533), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [5367] = 10,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    ACTIONS(505), 1,
      aux_sym_truncate_token2,
    ACTIONS(507), 1,
      aux_sym_priviledge_token1,
    ACTIONS(509), 1,
      aux_sym_resource_token2,
    ACTIONS(511), 1,
      aux_sym_resource_token3,
    ACTIONS(513), 1,
      aux_sym_resource_token6,
    STATE(63), 1,
      sym_table,
    STATE(126), 1,
      sym_resource,
    STATE(461), 1,
      sym_keyspace,
  [5398] = 4,
    ACTIONS(485), 1,
      aux_sym_create_index_token1,
    ACTIONS(487), 1,
      aux_sym_priviledge_token1,
    STATE(493), 1,
      sym_priviledge,
    ACTIONS(483), 7,
      aux_sym_select_statement_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [5417] = 6,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      aux_sym_relation_element_token1,
    ACTIONS(525), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(521), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5439] = 3,
    ACTIONS(527), 1,
      sym__hex_digit,
    STATE(222), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(144), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [5455] = 3,
    ACTIONS(529), 1,
      sym__hex_digit,
    STATE(222), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [5471] = 9,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(532), 1,
      sym_object_name,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    ACTIONS(536), 1,
      sym__dquote,
    STATE(135), 1,
      sym__string_literal,
    STATE(191), 1,
      sym_index_name,
    STATE(229), 1,
      sym_if_exist,
    STATE(529), 1,
      sym_keyspace,
  [5499] = 6,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      aux_sym_relation_element_token1,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(542), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(540), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5521] = 8,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_object_name,
    ACTIONS(548), 1,
      aux_sym_if_exist_token1,
    ACTIONS(550), 1,
      aux_sym_create_index_token3,
    STATE(135), 1,
      sym__string_literal,
    STATE(240), 1,
      sym_if_not_exist,
    STATE(568), 1,
      sym_index_name,
  [5546] = 7,
    ACTIONS(552), 1,
      aux_sym_select_statement_token2,
    ACTIONS(554), 1,
      aux_sym_select_statement_token3,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(558), 1,
      sym_object_name,
    STATE(360), 1,
      sym_function_call,
    STATE(367), 1,
      sym_select_element,
    STATE(389), 1,
      sym_select_elements,
  [5568] = 6,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(31), 1,
      sym_relation_element,
    STATE(55), 1,
      sym_relation_elements,
    STATE(247), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [5588] = 5,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      sym__dec_digit,
    STATE(272), 1,
      aux_sym__decimal_literal,
    STATE(382), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [5606] = 7,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(532), 1,
      sym_object_name,
    ACTIONS(536), 1,
      sym__dquote,
    STATE(135), 1,
      sym__string_literal,
    STATE(193), 1,
      sym_index_name,
    STATE(498), 1,
      sym_keyspace,
  [5628] = 6,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      sym_object_name,
    STATE(55), 1,
      sym_relation_elements,
    STATE(92), 1,
      sym_relation_element,
    STATE(256), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [5648] = 6,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(558), 1,
      sym_object_name,
    ACTIONS(568), 1,
      aux_sym_select_statement_token3,
    STATE(360), 1,
      sym_function_call,
    STATE(367), 1,
      sym_select_element,
    STATE(388), 1,
      sym_select_elements,
  [5667] = 2,
    ACTIONS(572), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(570), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [5678] = 6,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(574), 1,
      sym_object_name,
    STATE(207), 1,
      sym_function,
    STATE(280), 1,
      sym_if_exist,
    STATE(516), 1,
      sym_keyspace,
  [5697] = 5,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(38), 1,
      sym_relation_element,
    STATE(247), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [5714] = 5,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      sym_object_name,
    STATE(38), 1,
      sym_relation_element,
    STATE(256), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [5731] = 6,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_relation_element_repeat2,
    STATE(312), 1,
      sym_assignment_tuple,
    STATE(344), 1,
      aux_sym_assignment_tuple_repeat1,
  [5750] = 6,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    STATE(163), 1,
      sym_table,
    STATE(300), 1,
      sym_if_exist,
    STATE(555), 1,
      sym_keyspace,
  [5769] = 6,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(580), 1,
      sym_object_name,
    STATE(158), 1,
      sym_user,
    STATE(295), 1,
      sym_if_exist,
    STATE(506), 1,
      sym_keyspace,
  [5788] = 6,
    ACTIONS(582), 1,
      aux_sym_truncate_token2,
    ACTIONS(584), 1,
      aux_sym_create_index_token2,
    ACTIONS(586), 1,
      aux_sym_resource_token2,
    ACTIONS(588), 1,
      aux_sym_resource_token3,
    ACTIONS(590), 1,
      aux_sym_resource_token6,
    ACTIONS(592), 1,
      aux_sym_drop_user_token1,
  [5807] = 6,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_object_name,
    ACTIONS(594), 1,
      aux_sym_create_index_token3,
    STATE(135), 1,
      sym__string_literal,
    STATE(507), 1,
      sym_index_name,
  [5826] = 2,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(596), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [5837] = 5,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(56), 1,
      sym_insert_values_spec,
    STATE(316), 1,
      sym_insert_column_spec,
  [5853] = 5,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_object_name,
    STATE(135), 1,
      sym__string_literal,
    STATE(145), 1,
      sym_index_name,
  [5869] = 2,
    ACTIONS(608), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(606), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5879] = 5,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(610), 1,
      sym_object_name,
    STATE(202), 1,
      sym_keyspace,
    STATE(380), 1,
      sym_if_exist,
  [5895] = 1,
    ACTIONS(612), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [5903] = 2,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5913] = 5,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    ACTIONS(618), 1,
      aux_sym_truncate_token2,
    STATE(164), 1,
      sym_table,
    STATE(460), 1,
      sym_keyspace,
  [5929] = 5,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      sym_object_name,
    STATE(360), 1,
      sym_function_call,
    STATE(367), 1,
      sym_select_element,
    STATE(388), 1,
      sym_select_elements,
  [5945] = 5,
    ACTIONS(622), 1,
      sym_object_name,
    ACTIONS(624), 1,
      aux_sym_from_spec_token1,
    STATE(293), 1,
      sym_from_spec,
    STATE(347), 1,
      sym_delete_column_item,
    STATE(447), 1,
      sym_delete_column_list,
  [5961] = 5,
    ACTIONS(622), 1,
      sym_object_name,
    ACTIONS(624), 1,
      aux_sym_from_spec_token1,
    STATE(270), 1,
      sym_from_spec,
    STATE(347), 1,
      sym_delete_column_item,
    STATE(414), 1,
      sym_delete_column_list,
  [5977] = 5,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(50), 1,
      sym_insert_values_spec,
    STATE(313), 1,
      sym_insert_column_spec,
  [5993] = 2,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6003] = 5,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(49), 1,
      sym_insert_values_spec,
    STATE(370), 1,
      sym_insert_column_spec,
  [6019] = 3,
    ACTIONS(632), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(368), 1,
      sym_using_timestamp_spec,
    ACTIONS(630), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [6031] = 2,
    ACTIONS(636), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(634), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6041] = 1,
    ACTIONS(638), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6049] = 4,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(642), 1,
      anon_sym_DOT,
    ACTIONS(644), 1,
      aux_sym_select_element_token1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [6063] = 1,
    ACTIONS(646), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6071] = 1,
    ACTIONS(648), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6079] = 5,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(650), 1,
      sym__dec_digit,
    STATE(340), 1,
      aux_sym__decimal_literal,
    STATE(552), 1,
      sym__string_literal,
  [6095] = 1,
    ACTIONS(652), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6103] = 5,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(62), 1,
      sym_insert_values_spec,
    STATE(351), 1,
      sym_insert_column_spec,
  [6119] = 5,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_object_name,
    STATE(135), 1,
      sym__string_literal,
    STATE(187), 1,
      sym_index_name,
  [6135] = 5,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      sym_object_name,
    STATE(360), 1,
      sym_function_call,
    STATE(367), 1,
      sym_select_element,
    STATE(432), 1,
      sym_select_elements,
  [6151] = 1,
    ACTIONS(654), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6159] = 3,
    ACTIONS(632), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(342), 1,
      sym_using_timestamp_spec,
    ACTIONS(656), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [6171] = 1,
    ACTIONS(658), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [6179] = 3,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(663), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6191] = 4,
    ACTIONS(632), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(74), 1,
      sym_where_spec,
    STATE(412), 1,
      sym_using_timestamp_spec,
  [6204] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(93), 1,
      sym_table,
    STATE(563), 1,
      sym_keyspace,
  [6217] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [6228] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_where_spec,
    STATE(285), 1,
      aux_sym_update_repeat1,
  [6241] = 4,
    ACTIONS(534), 1,
      aux_sym_if_exist_token1,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(175), 1,
      sym_role,
    STATE(397), 1,
      sym_if_exist,
  [6254] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_where_spec,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [6267] = 2,
    ACTIONS(389), 2,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
    ACTIONS(673), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
  [6276] = 1,
    ACTIONS(663), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6283] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_where_spec,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [6296] = 2,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [6305] = 4,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(574), 1,
      sym_object_name,
    STATE(197), 1,
      sym_function,
    STATE(497), 1,
      sym_keyspace,
  [6318] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(456), 1,
      sym_keyspace,
    STATE(539), 1,
      sym_table,
  [6331] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(525), 1,
      sym_keyspace,
    STATE(526), 1,
      sym_table,
  [6344] = 2,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(679), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6353] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      sym_where_spec,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [6366] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_where_spec,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [6379] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_where_spec,
    STATE(301), 1,
      aux_sym_update_repeat1,
  [6392] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(254), 1,
      sym_table,
    STATE(550), 1,
      sym_keyspace,
  [6405] = 4,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    STATE(374), 1,
      sym_column,
    STATE(523), 1,
      sym_column_list,
  [6418] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      sym_where_spec,
    STATE(275), 1,
      aux_sym_update_repeat1,
  [6431] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(154), 1,
      sym_table,
    STATE(560), 1,
      sym_keyspace,
  [6444] = 4,
    ACTIONS(681), 1,
      sym_object_name,
    ACTIONS(683), 1,
      aux_sym_if_exist_token2,
    STATE(107), 1,
      sym_if_condition,
    STATE(185), 1,
      sym_if_condition_list,
  [6457] = 1,
    ACTIONS(685), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [6464] = 4,
    ACTIONS(632), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(88), 1,
      sym_where_spec,
    STATE(401), 1,
      sym_using_timestamp_spec,
  [6477] = 4,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(574), 1,
      sym_object_name,
    STATE(93), 1,
      sym_function,
    STATE(528), 1,
      sym_keyspace,
  [6490] = 4,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(580), 1,
      sym_object_name,
    STATE(201), 1,
      sym_user,
    STATE(491), 1,
      sym_keyspace,
  [6503] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(242), 1,
      sym_table,
    STATE(457), 1,
      sym_keyspace,
  [6516] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(333), 1,
      sym_table,
    STATE(459), 1,
      sym_keyspace,
  [6529] = 4,
    ACTIONS(632), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(77), 1,
      sym_where_spec,
    STATE(448), 1,
      sym_using_timestamp_spec,
  [6542] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(346), 1,
      sym_table,
    STATE(488), 1,
      sym_keyspace,
  [6555] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(190), 1,
      sym_table,
    STATE(505), 1,
      sym_keyspace,
  [6568] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_where_spec,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [6581] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_where_spec,
    STATE(284), 1,
      aux_sym_update_repeat1,
  [6594] = 4,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_function_args_repeat1,
  [6607] = 4,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_assignment_tuple_repeat1,
  [6620] = 4,
    ACTIONS(697), 1,
      aux_sym_timestamp_token1,
    ACTIONS(699), 1,
      aux_sym_ttl_token1,
    STATE(109), 1,
      sym_timestamp,
    STATE(110), 1,
      sym_ttl,
  [6633] = 4,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_where_spec,
    STATE(278), 1,
      aux_sym_update_repeat1,
  [6646] = 4,
    ACTIONS(501), 1,
      sym_object_name,
    ACTIONS(503), 1,
      sym__dquote,
    STATE(508), 1,
      sym_table,
    STATE(513), 1,
      sym_keyspace,
  [6659] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(343), 1,
      sym_table,
  [6669] = 3,
    ACTIONS(620), 1,
      sym_object_name,
    STATE(360), 1,
      sym_function_call,
    STATE(405), 1,
      sym_select_element,
  [6679] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(66), 1,
      sym_table,
  [6689] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_relation_element_repeat2,
  [6699] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_element_repeat2,
  [6709] = 3,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(48), 1,
      sym_insert_values_spec,
  [6719] = 3,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(610), 1,
      sym_object_name,
    STATE(75), 1,
      sym_keyspace,
  [6729] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(252), 1,
      sym_table,
  [6739] = 3,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(62), 1,
      sym_insert_values_spec,
  [6749] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(709), 1,
      aux_sym_update_token2,
    STATE(504), 1,
      sym_using_ttl_timestamp,
  [6759] = 3,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      aux_sym_from_spec_token1,
    STATE(318), 1,
      aux_sym_select_elements_repeat1,
  [6769] = 3,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(610), 1,
      sym_object_name,
    STATE(93), 1,
      sym_keyspace,
  [6779] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(539), 1,
      sym_table,
  [6789] = 2,
    ACTIONS(718), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(716), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [6797] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_assignment_tuple_repeat1,
  [6807] = 3,
    ACTIONS(722), 1,
      aux_sym_resource_token1,
    ACTIONS(724), 1,
      aux_sym_resource_token4,
    ACTIONS(726), 1,
      aux_sym_resource_token5,
  [6817] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(481), 1,
      sym_table,
  [6827] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      aux_sym_assignment_tuple_repeat1,
  [6837] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_expression_list_repeat1,
  [6847] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(180), 1,
      sym_table,
  [6857] = 3,
    ACTIONS(735), 1,
      sym__hex_digit,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [6867] = 3,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_function_args_repeat1,
  [6877] = 2,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6885] = 3,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_expression_list_repeat1,
  [6895] = 3,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_function_args_repeat1,
  [6905] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(749), 1,
      aux_sym_update_token2,
    STATE(470), 1,
      sym_using_ttl_timestamp,
  [6915] = 3,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(610), 1,
      sym_object_name,
    STATE(147), 1,
      sym_keyspace,
  [6925] = 3,
    ACTIONS(751), 1,
      sym__hex_digit,
    ACTIONS(753), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [6935] = 3,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_function_args_repeat1,
  [6945] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_assignment_tuple_repeat1,
  [6955] = 3,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_relation_element_repeat1,
  [6965] = 3,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_column_list_repeat1,
  [6975] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [6985] = 3,
    ACTIONS(770), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(772), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(774), 1,
      aux_sym_update_token1,
  [6995] = 1,
    ACTIONS(630), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [7001] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(776), 1,
      aux_sym_update_token2,
    STATE(547), 1,
      sym_using_ttl_timestamp,
  [7011] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_assignment_tuple_repeat1,
  [7021] = 3,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      aux_sym_from_spec_token1,
    STATE(363), 1,
      aux_sym_delete_column_list_repeat1,
  [7031] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(782), 1,
      aux_sym_update_token2,
    STATE(486), 1,
      sym_using_ttl_timestamp,
  [7041] = 3,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      aux_sym_from_spec_token1,
    STATE(345), 1,
      aux_sym_delete_column_list_repeat1,
  [7051] = 3,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_relation_element_repeat1,
  [7061] = 3,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      aux_sym_relation_element_repeat1,
  [7071] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_relation_element_repeat2,
  [7081] = 3,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(50), 1,
      sym_insert_values_spec,
  [7091] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_relation_element_repeat2,
  [7101] = 3,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_relation_element_repeat2,
  [7111] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(181), 1,
      sym_table,
  [7121] = 3,
    ACTIONS(491), 1,
      sym_object_name,
    ACTIONS(493), 1,
      sym__dquote,
    STATE(423), 1,
      sym_column,
  [7131] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_column_list_repeat1,
  [7141] = 3,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_assignment_map_repeat1,
  [7151] = 2,
    ACTIONS(812), 1,
      anon_sym_LBRACK,
    ACTIONS(810), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7159] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(81), 1,
      sym_table,
  [7169] = 2,
    ACTIONS(644), 1,
      aux_sym_select_element_token1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7177] = 3,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_assignment_map_repeat1,
  [7187] = 3,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_expression_list_repeat1,
  [7197] = 3,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      aux_sym_from_spec_token1,
    STATE(363), 1,
      aux_sym_delete_column_list_repeat1,
  [7207] = 3,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      aux_sym_where_spec_token1,
    STATE(364), 1,
      aux_sym_update_repeat1,
  [7217] = 3,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      aux_sym_from_spec_token1,
    STATE(318), 1,
      aux_sym_select_elements_repeat1,
  [7227] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_relation_element_repeat2,
  [7237] = 3,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      aux_sym_from_spec_token1,
    STATE(365), 1,
      aux_sym_select_elements_repeat1,
  [7247] = 1,
    ACTIONS(839), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [7253] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(263), 1,
      sym_table,
  [7263] = 3,
    ACTIONS(600), 1,
      aux_sym_select_statement_token3,
    ACTIONS(604), 1,
      aux_sym_insert_values_spec_token1,
    STATE(56), 1,
      sym_insert_values_spec,
  [7273] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(196), 1,
      sym_table,
  [7283] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(474), 1,
      sym_table,
  [7293] = 3,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_assignment_map_repeat1,
  [7303] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_column_list_repeat1,
  [7313] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(186), 1,
      sym_table,
  [7323] = 3,
    ACTIONS(78), 1,
      sym__dec_digit,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [7333] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_relation_element_repeat2,
  [7343] = 3,
    ACTIONS(701), 1,
      sym_object_name,
    ACTIONS(703), 1,
      sym__dquote,
    STATE(317), 1,
      sym_table,
  [7353] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_relation_element_repeat2,
  [7363] = 3,
    ACTIONS(536), 1,
      sym__dquote,
    ACTIONS(610), 1,
      sym_object_name,
    STATE(195), 1,
      sym_keyspace,
  [7373] = 1,
    ACTIONS(849), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7378] = 1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [7383] = 1,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [7388] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(204), 1,
      sym_role,
  [7395] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(306), 1,
      sym_assignment_element,
  [7402] = 1,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [7407] = 1,
    ACTIONS(853), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7412] = 2,
    ACTIONS(855), 1,
      aux_sym_from_spec_token1,
    STATE(29), 1,
      sym_from_spec,
  [7419] = 2,
    ACTIONS(855), 1,
      aux_sym_from_spec_token1,
    STATE(25), 1,
      sym_from_spec,
  [7426] = 2,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(189), 1,
      sym_function,
  [7433] = 1,
    ACTIONS(859), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7438] = 1,
    ACTIONS(824), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7443] = 2,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(81), 1,
      sym_function,
  [7450] = 1,
    ACTIONS(861), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [7455] = 1,
    ACTIONS(863), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7460] = 2,
    ACTIONS(865), 1,
      sym_object_name,
    STATE(44), 1,
      sym_from_spec_element,
  [7467] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(199), 1,
      sym_role,
  [7474] = 2,
    ACTIONS(867), 1,
      sym_object_name,
    STATE(146), 1,
      sym_user,
  [7481] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(289), 1,
      sym_assignment_element,
  [7488] = 1,
    ACTIONS(869), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [7493] = 2,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(77), 1,
      sym_where_spec,
  [7500] = 1,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7505] = 2,
    ACTIONS(873), 1,
      sym__dec_digit,
    STATE(84), 1,
      aux_sym__decimal_literal,
  [7512] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_assignment_tuple,
  [7519] = 1,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7524] = 1,
    ACTIONS(800), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7529] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(377), 1,
      sym_assignment_tuple,
  [7536] = 2,
    ACTIONS(697), 1,
      aux_sym_timestamp_token1,
    STATE(292), 1,
      sym_timestamp,
  [7543] = 1,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7548] = 2,
    ACTIONS(857), 1,
      sym_object_name,
    STATE(173), 1,
      sym_function,
  [7555] = 2,
    ACTIONS(875), 1,
      sym__dec_digit,
    STATE(43), 1,
      aux_sym__decimal_literal,
  [7562] = 2,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(88), 1,
      sym_where_spec,
  [7569] = 2,
    ACTIONS(867), 1,
      sym_object_name,
    STATE(167), 1,
      sym_user,
  [7576] = 2,
    ACTIONS(855), 1,
      aux_sym_from_spec_token1,
    STATE(293), 1,
      sym_from_spec,
  [7583] = 1,
    ACTIONS(877), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7588] = 2,
    ACTIONS(681), 1,
      sym_object_name,
    STATE(141), 1,
      sym_if_condition,
  [7595] = 2,
    ACTIONS(699), 1,
      aux_sym_ttl_token1,
    STATE(124), 1,
      sym_ttl,
  [7602] = 1,
    ACTIONS(879), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7607] = 2,
    ACTIONS(881), 1,
      sym_object_name,
    STATE(104), 1,
      sym_order_spec_element,
  [7614] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(286), 1,
      sym_assignment_element,
  [7621] = 2,
    ACTIONS(622), 1,
      sym_object_name,
    STATE(392), 1,
      sym_delete_column_item,
  [7628] = 1,
    ACTIONS(883), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7633] = 1,
    ACTIONS(766), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7638] = 2,
    ACTIONS(697), 1,
      aux_sym_timestamp_token1,
    STATE(124), 1,
      sym_timestamp,
  [7645] = 2,
    ACTIONS(885), 1,
      sym__dec_digit,
    STATE(8), 1,
      aux_sym__decimal_literal,
  [7652] = 2,
    ACTIONS(887), 1,
      sym__dec_digit,
    STATE(376), 1,
      aux_sym__decimal_literal,
  [7659] = 2,
    ACTIONS(889), 1,
      sym__dec_digit,
    STATE(53), 1,
      aux_sym__decimal_literal,
  [7666] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(386), 1,
      sym_assignment_element,
  [7673] = 2,
    ACTIONS(891), 1,
      sym__hex_digit,
    STATE(32), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [7680] = 2,
    ACTIONS(893), 1,
      sym__hex_digit,
    STATE(23), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [7687] = 2,
    ACTIONS(895), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [7694] = 2,
    ACTIONS(855), 1,
      aux_sym_from_spec_token1,
    STATE(24), 1,
      sym_from_spec,
  [7701] = 2,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
  [7708] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(302), 1,
      sym_assignment_element,
  [7715] = 1,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7720] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(127), 1,
      sym_role,
  [7727] = 1,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7732] = 1,
    ACTIONS(738), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [7737] = 2,
    ACTIONS(901), 1,
      sym__hex_digit,
    STATE(221), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [7744] = 2,
    ACTIONS(903), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [7751] = 2,
    ACTIONS(905), 1,
      sym__dec_digit,
    STATE(86), 1,
      aux_sym__decimal_literal,
  [7758] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(157), 1,
      sym_role,
  [7765] = 2,
    ACTIONS(751), 1,
      sym__hex_digit,
    STATE(335), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [7772] = 2,
    ACTIONS(907), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [7779] = 1,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [7784] = 2,
    ACTIONS(911), 1,
      sym__dec_digit,
    STATE(78), 1,
      aux_sym__decimal_literal,
  [7791] = 2,
    ACTIONS(855), 1,
      aux_sym_from_spec_token1,
    STATE(298), 1,
      sym_from_spec,
  [7798] = 2,
    ACTIONS(665), 1,
      aux_sym_where_spec_token1,
    STATE(65), 1,
      sym_where_spec,
  [7805] = 2,
    ACTIONS(851), 1,
      sym_object_name,
    STATE(273), 1,
      sym_assignment_element,
  [7812] = 2,
    ACTIONS(913), 1,
      sym__dec_digit,
    STATE(69), 1,
      aux_sym__decimal_literal,
  [7819] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_assignment_tuple,
  [7826] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(93), 1,
      sym_role,
  [7833] = 1,
    ACTIONS(915), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7838] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(183), 1,
      sym_role,
  [7845] = 2,
    ACTIONS(671), 1,
      sym_object_name,
    STATE(188), 1,
      sym_role,
  [7852] = 1,
    ACTIONS(917), 1,
      anon_sym_DOT,
  [7856] = 1,
    ACTIONS(919), 1,
      anon_sym_DOT,
  [7860] = 1,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
  [7864] = 1,
    ACTIONS(923), 1,
      anon_sym_DOT,
  [7868] = 1,
    ACTIONS(925), 1,
      anon_sym_DOT,
  [7872] = 1,
    ACTIONS(927), 1,
      anon_sym_DOT,
  [7876] = 1,
    ACTIONS(929), 1,
      aux_sym_select_statement_token6,
  [7880] = 1,
    ACTIONS(931), 1,
      aux_sym_from_spec_token1,
  [7884] = 1,
    ACTIONS(933), 1,
      aux_sym_grant_token2,
  [7888] = 1,
    ACTIONS(935), 1,
      anon_sym_EQ,
  [7892] = 1,
    ACTIONS(937), 1,
      anon_sym_DASH,
  [7896] = 1,
    ACTIONS(939), 1,
      sym_object_name,
  [7900] = 1,
    ACTIONS(941), 1,
      aux_sym_select_statement_token6,
  [7904] = 1,
    ACTIONS(943), 1,
      sym_object_name,
  [7908] = 1,
    ACTIONS(776), 1,
      aux_sym_update_token2,
  [7912] = 1,
    ACTIONS(945), 1,
      aux_sym_if_not_exist_token1,
  [7916] = 1,
    ACTIONS(947), 1,
      aux_sym_select_statement_token6,
  [7920] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [7924] = 1,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
  [7928] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [7932] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [7936] = 1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [7940] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [7944] = 1,
    ACTIONS(961), 1,
      sym_object_name,
  [7948] = 1,
    ACTIONS(963), 1,
      sym_object_name,
  [7952] = 1,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
  [7956] = 1,
    ACTIONS(967), 1,
      sym_object_name,
  [7960] = 1,
    ACTIONS(969), 1,
      sym__hex_4digit,
  [7964] = 1,
    ACTIONS(971), 1,
      sym__hex_digit,
  [7968] = 1,
    ACTIONS(973), 1,
      sym__dquote,
  [7972] = 1,
    ACTIONS(749), 1,
      aux_sym_update_token2,
  [7976] = 1,
    ACTIONS(975), 1,
      aux_sym_begin_batch_token4,
  [7980] = 1,
    ACTIONS(977), 1,
      anon_sym_DOT,
  [7984] = 1,
    ACTIONS(979), 1,
      sym_object_name,
  [7988] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [7992] = 1,
    ACTIONS(983), 1,
      anon_sym_DOT,
  [7996] = 1,
    ACTIONS(985), 1,
      aux_sym_select_statement_token6,
  [8000] = 1,
    ACTIONS(987), 1,
      aux_sym_create_index_token3,
  [8004] = 1,
    ACTIONS(989), 1,
      sym__hex_4digit,
  [8008] = 1,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
  [8012] = 1,
    ACTIONS(993), 1,
      aux_sym_create_index_token3,
  [8016] = 1,
    ACTIONS(995), 1,
      anon_sym_DOT,
  [8020] = 1,
    ACTIONS(997), 1,
      anon_sym_DOT,
  [8024] = 1,
    ACTIONS(999), 1,
      sym__hex_4digit,
  [8028] = 1,
    ACTIONS(1001), 1,
      sym_object_name,
  [8032] = 1,
    ACTIONS(1003), 1,
      aux_sym_select_statement_token6,
  [8036] = 1,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [8040] = 1,
    ACTIONS(1007), 1,
      aux_sym_insert_statement_token2,
  [8044] = 1,
    ACTIONS(1009), 1,
      aux_sym_update_token2,
  [8048] = 1,
    ACTIONS(1011), 1,
      anon_sym_DOT,
  [8052] = 1,
    ACTIONS(1013), 1,
      anon_sym_DOT,
  [8056] = 1,
    ACTIONS(1015), 1,
      aux_sym_create_index_token3,
  [8060] = 1,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [8064] = 1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [8068] = 1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [8072] = 1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [8076] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [8080] = 1,
    ACTIONS(1027), 1,
      anon_sym_DOT,
  [8084] = 1,
    ACTIONS(1029), 1,
      aux_sym_if_exist_token2,
  [8088] = 1,
    ACTIONS(1031), 1,
      anon_sym_EQ,
  [8092] = 1,
    ACTIONS(1033), 1,
      anon_sym_DOT,
  [8096] = 1,
    ACTIONS(1035), 1,
      sym_object_name,
  [8100] = 1,
    ACTIONS(1037), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8104] = 1,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
  [8108] = 1,
    ACTIONS(1039), 1,
      aux_sym_select_statement_token6,
  [8112] = 1,
    ACTIONS(1041), 1,
      anon_sym_DASH,
  [8116] = 1,
    ACTIONS(1043), 1,
      aux_sym_resource_token2,
  [8120] = 1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [8124] = 1,
    ACTIONS(1047), 1,
      sym__dquote,
  [8128] = 1,
    ACTIONS(1049), 1,
      anon_sym_DOT,
  [8132] = 1,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [8136] = 1,
    ACTIONS(1053), 1,
      sym_object_name,
  [8140] = 1,
    ACTIONS(1055), 1,
      anon_sym_DOT,
  [8144] = 1,
    ACTIONS(1057), 1,
      anon_sym_DOT,
  [8148] = 1,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
  [8152] = 1,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
  [8156] = 1,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
  [8160] = 1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [8164] = 1,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
  [8168] = 1,
    ACTIONS(1069), 1,
      sym__hex_4digit,
  [8172] = 1,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
  [8176] = 1,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
  [8180] = 1,
    ACTIONS(1075), 1,
      anon_sym_COLON,
  [8184] = 1,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
  [8188] = 1,
    ACTIONS(1079), 1,
      anon_sym_STAR,
  [8192] = 1,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
  [8196] = 1,
    ACTIONS(1079), 1,
      sym_object_name,
  [8200] = 1,
    ACTIONS(1083), 1,
      sym__hex_4digit,
  [8204] = 1,
    ACTIONS(1085), 1,
      sym__dquote,
  [8208] = 1,
    ACTIONS(1087), 1,
      sym_object_name,
  [8212] = 1,
    ACTIONS(1089), 1,
      sym__hex_4digit,
  [8216] = 1,
    ACTIONS(709), 1,
      aux_sym_update_token2,
  [8220] = 1,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
  [8224] = 1,
    ACTIONS(1091), 1,
      sym_object_name,
  [8228] = 1,
    ACTIONS(1093), 1,
      anon_sym_DOT,
  [8232] = 1,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
  [8236] = 1,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
  [8240] = 1,
    ACTIONS(1097), 1,
      aux_sym_order_spec_token2,
  [8244] = 1,
    ACTIONS(1099), 1,
      aux_sym_select_statement_token6,
  [8248] = 1,
    ACTIONS(1101), 1,
      anon_sym_DOT,
  [8252] = 1,
    ACTIONS(1103), 1,
      aux_sym_if_exist_token2,
  [8256] = 1,
    ACTIONS(1105), 1,
      sym_object_name,
  [8260] = 1,
    ACTIONS(1107), 1,
      aux_sym_if_not_exist_token1,
  [8264] = 1,
    ACTIONS(1109), 1,
      sym__dquote,
  [8268] = 1,
    ACTIONS(1111), 1,
      anon_sym_DOT,
  [8272] = 1,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
  [8276] = 1,
    ACTIONS(1115), 1,
      aux_sym_create_index_token2,
  [8280] = 1,
    ACTIONS(1117), 1,
      anon_sym_DOT,
  [8284] = 1,
    ACTIONS(1119), 1,
      aux_sym_if_exist_token2,
  [8288] = 1,
    ACTIONS(1121), 1,
      anon_sym_DASH,
  [8292] = 1,
    ACTIONS(1123), 1,
      anon_sym_DASH,
  [8296] = 1,
    ACTIONS(1125), 1,
      aux_sym_insert_statement_token2,
  [8300] = 1,
    ACTIONS(1127), 1,
      aux_sym_create_index_token3,
  [8304] = 1,
    ACTIONS(1129), 1,
      aux_sym__string_literal_token1,
  [8308] = 1,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
  [8312] = 1,
    ACTIONS(1133), 1,
      aux_sym__string_literal_token2,
  [8316] = 1,
    ACTIONS(1135), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 353,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 597,
  [SMALL_STATE(18)] = 625,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 732,
  [SMALL_STATE(22)] = 757,
  [SMALL_STATE(23)] = 809,
  [SMALL_STATE(24)] = 836,
  [SMALL_STATE(25)] = 871,
  [SMALL_STATE(26)] = 906,
  [SMALL_STATE(27)] = 957,
  [SMALL_STATE(28)] = 982,
  [SMALL_STATE(29)] = 1009,
  [SMALL_STATE(30)] = 1044,
  [SMALL_STATE(31)] = 1066,
  [SMALL_STATE(32)] = 1092,
  [SMALL_STATE(33)] = 1118,
  [SMALL_STATE(34)] = 1144,
  [SMALL_STATE(35)] = 1166,
  [SMALL_STATE(36)] = 1188,
  [SMALL_STATE(37)] = 1210,
  [SMALL_STATE(38)] = 1232,
  [SMALL_STATE(39)] = 1254,
  [SMALL_STATE(40)] = 1276,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1320,
  [SMALL_STATE(43)] = 1342,
  [SMALL_STATE(44)] = 1368,
  [SMALL_STATE(45)] = 1390,
  [SMALL_STATE(46)] = 1416,
  [SMALL_STATE(47)] = 1442,
  [SMALL_STATE(48)] = 1463,
  [SMALL_STATE(49)] = 1492,
  [SMALL_STATE(50)] = 1521,
  [SMALL_STATE(51)] = 1550,
  [SMALL_STATE(52)] = 1573,
  [SMALL_STATE(53)] = 1602,
  [SMALL_STATE(54)] = 1627,
  [SMALL_STATE(55)] = 1656,
  [SMALL_STATE(56)] = 1677,
  [SMALL_STATE(57)] = 1706,
  [SMALL_STATE(58)] = 1727,
  [SMALL_STATE(59)] = 1750,
  [SMALL_STATE(60)] = 1795,
  [SMALL_STATE(61)] = 1818,
  [SMALL_STATE(62)] = 1847,
  [SMALL_STATE(63)] = 1876,
  [SMALL_STATE(64)] = 1896,
  [SMALL_STATE(65)] = 1920,
  [SMALL_STATE(66)] = 1944,
  [SMALL_STATE(67)] = 1964,
  [SMALL_STATE(68)] = 1988,
  [SMALL_STATE(69)] = 2012,
  [SMALL_STATE(70)] = 2038,
  [SMALL_STATE(71)] = 2064,
  [SMALL_STATE(72)] = 2106,
  [SMALL_STATE(73)] = 2148,
  [SMALL_STATE(74)] = 2172,
  [SMALL_STATE(75)] = 2196,
  [SMALL_STATE(76)] = 2216,
  [SMALL_STATE(77)] = 2240,
  [SMALL_STATE(78)] = 2264,
  [SMALL_STATE(79)] = 2290,
  [SMALL_STATE(80)] = 2332,
  [SMALL_STATE(81)] = 2356,
  [SMALL_STATE(82)] = 2376,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2444,
  [SMALL_STATE(85)] = 2470,
  [SMALL_STATE(86)] = 2492,
  [SMALL_STATE(87)] = 2518,
  [SMALL_STATE(88)] = 2538,
  [SMALL_STATE(89)] = 2562,
  [SMALL_STATE(90)] = 2582,
  [SMALL_STATE(91)] = 2602,
  [SMALL_STATE(92)] = 2622,
  [SMALL_STATE(93)] = 2646,
  [SMALL_STATE(94)] = 2666,
  [SMALL_STATE(95)] = 2690,
  [SMALL_STATE(96)] = 2713,
  [SMALL_STATE(97)] = 2732,
  [SMALL_STATE(98)] = 2755,
  [SMALL_STATE(99)] = 2778,
  [SMALL_STATE(100)] = 2801,
  [SMALL_STATE(101)] = 2842,
  [SMALL_STATE(102)] = 2865,
  [SMALL_STATE(103)] = 2888,
  [SMALL_STATE(104)] = 2911,
  [SMALL_STATE(105)] = 2930,
  [SMALL_STATE(106)] = 2949,
  [SMALL_STATE(107)] = 2968,
  [SMALL_STATE(108)] = 2991,
  [SMALL_STATE(109)] = 3014,
  [SMALL_STATE(110)] = 3035,
  [SMALL_STATE(111)] = 3056,
  [SMALL_STATE(112)] = 3075,
  [SMALL_STATE(113)] = 3094,
  [SMALL_STATE(114)] = 3135,
  [SMALL_STATE(115)] = 3158,
  [SMALL_STATE(116)] = 3181,
  [SMALL_STATE(117)] = 3204,
  [SMALL_STATE(118)] = 3245,
  [SMALL_STATE(119)] = 3268,
  [SMALL_STATE(120)] = 3291,
  [SMALL_STATE(121)] = 3310,
  [SMALL_STATE(122)] = 3348,
  [SMALL_STATE(123)] = 3386,
  [SMALL_STATE(124)] = 3406,
  [SMALL_STATE(125)] = 3424,
  [SMALL_STATE(126)] = 3462,
  [SMALL_STATE(127)] = 3482,
  [SMALL_STATE(128)] = 3502,
  [SMALL_STATE(129)] = 3540,
  [SMALL_STATE(130)] = 3578,
  [SMALL_STATE(131)] = 3598,
  [SMALL_STATE(132)] = 3636,
  [SMALL_STATE(133)] = 3674,
  [SMALL_STATE(134)] = 3692,
  [SMALL_STATE(135)] = 3730,
  [SMALL_STATE(136)] = 3748,
  [SMALL_STATE(137)] = 3786,
  [SMALL_STATE(138)] = 3824,
  [SMALL_STATE(139)] = 3862,
  [SMALL_STATE(140)] = 3880,
  [SMALL_STATE(141)] = 3918,
  [SMALL_STATE(142)] = 3936,
  [SMALL_STATE(143)] = 3974,
  [SMALL_STATE(144)] = 4012,
  [SMALL_STATE(145)] = 4050,
  [SMALL_STATE(146)] = 4067,
  [SMALL_STATE(147)] = 4084,
  [SMALL_STATE(148)] = 4101,
  [SMALL_STATE(149)] = 4118,
  [SMALL_STATE(150)] = 4135,
  [SMALL_STATE(151)] = 4152,
  [SMALL_STATE(152)] = 4169,
  [SMALL_STATE(153)] = 4186,
  [SMALL_STATE(154)] = 4203,
  [SMALL_STATE(155)] = 4220,
  [SMALL_STATE(156)] = 4237,
  [SMALL_STATE(157)] = 4254,
  [SMALL_STATE(158)] = 4271,
  [SMALL_STATE(159)] = 4288,
  [SMALL_STATE(160)] = 4305,
  [SMALL_STATE(161)] = 4324,
  [SMALL_STATE(162)] = 4341,
  [SMALL_STATE(163)] = 4358,
  [SMALL_STATE(164)] = 4375,
  [SMALL_STATE(165)] = 4392,
  [SMALL_STATE(166)] = 4409,
  [SMALL_STATE(167)] = 4426,
  [SMALL_STATE(168)] = 4443,
  [SMALL_STATE(169)] = 4460,
  [SMALL_STATE(170)] = 4477,
  [SMALL_STATE(171)] = 4494,
  [SMALL_STATE(172)] = 4511,
  [SMALL_STATE(173)] = 4528,
  [SMALL_STATE(174)] = 4545,
  [SMALL_STATE(175)] = 4562,
  [SMALL_STATE(176)] = 4579,
  [SMALL_STATE(177)] = 4596,
  [SMALL_STATE(178)] = 4613,
  [SMALL_STATE(179)] = 4630,
  [SMALL_STATE(180)] = 4647,
  [SMALL_STATE(181)] = 4664,
  [SMALL_STATE(182)] = 4681,
  [SMALL_STATE(183)] = 4698,
  [SMALL_STATE(184)] = 4715,
  [SMALL_STATE(185)] = 4732,
  [SMALL_STATE(186)] = 4749,
  [SMALL_STATE(187)] = 4766,
  [SMALL_STATE(188)] = 4783,
  [SMALL_STATE(189)] = 4800,
  [SMALL_STATE(190)] = 4817,
  [SMALL_STATE(191)] = 4834,
  [SMALL_STATE(192)] = 4851,
  [SMALL_STATE(193)] = 4868,
  [SMALL_STATE(194)] = 4885,
  [SMALL_STATE(195)] = 4902,
  [SMALL_STATE(196)] = 4919,
  [SMALL_STATE(197)] = 4936,
  [SMALL_STATE(198)] = 4953,
  [SMALL_STATE(199)] = 4970,
  [SMALL_STATE(200)] = 4987,
  [SMALL_STATE(201)] = 5004,
  [SMALL_STATE(202)] = 5021,
  [SMALL_STATE(203)] = 5038,
  [SMALL_STATE(204)] = 5055,
  [SMALL_STATE(205)] = 5072,
  [SMALL_STATE(206)] = 5089,
  [SMALL_STATE(207)] = 5106,
  [SMALL_STATE(208)] = 5123,
  [SMALL_STATE(209)] = 5139,
  [SMALL_STATE(210)] = 5161,
  [SMALL_STATE(211)] = 5180,
  [SMALL_STATE(212)] = 5205,
  [SMALL_STATE(213)] = 5230,
  [SMALL_STATE(214)] = 5255,
  [SMALL_STATE(215)] = 5286,
  [SMALL_STATE(216)] = 5317,
  [SMALL_STATE(217)] = 5342,
  [SMALL_STATE(218)] = 5367,
  [SMALL_STATE(219)] = 5398,
  [SMALL_STATE(220)] = 5417,
  [SMALL_STATE(221)] = 5439,
  [SMALL_STATE(222)] = 5455,
  [SMALL_STATE(223)] = 5471,
  [SMALL_STATE(224)] = 5499,
  [SMALL_STATE(225)] = 5521,
  [SMALL_STATE(226)] = 5546,
  [SMALL_STATE(227)] = 5568,
  [SMALL_STATE(228)] = 5588,
  [SMALL_STATE(229)] = 5606,
  [SMALL_STATE(230)] = 5628,
  [SMALL_STATE(231)] = 5648,
  [SMALL_STATE(232)] = 5667,
  [SMALL_STATE(233)] = 5678,
  [SMALL_STATE(234)] = 5697,
  [SMALL_STATE(235)] = 5714,
  [SMALL_STATE(236)] = 5731,
  [SMALL_STATE(237)] = 5750,
  [SMALL_STATE(238)] = 5769,
  [SMALL_STATE(239)] = 5788,
  [SMALL_STATE(240)] = 5807,
  [SMALL_STATE(241)] = 5826,
  [SMALL_STATE(242)] = 5837,
  [SMALL_STATE(243)] = 5853,
  [SMALL_STATE(244)] = 5869,
  [SMALL_STATE(245)] = 5879,
  [SMALL_STATE(246)] = 5895,
  [SMALL_STATE(247)] = 5903,
  [SMALL_STATE(248)] = 5913,
  [SMALL_STATE(249)] = 5929,
  [SMALL_STATE(250)] = 5945,
  [SMALL_STATE(251)] = 5961,
  [SMALL_STATE(252)] = 5977,
  [SMALL_STATE(253)] = 5993,
  [SMALL_STATE(254)] = 6003,
  [SMALL_STATE(255)] = 6019,
  [SMALL_STATE(256)] = 6031,
  [SMALL_STATE(257)] = 6041,
  [SMALL_STATE(258)] = 6049,
  [SMALL_STATE(259)] = 6063,
  [SMALL_STATE(260)] = 6071,
  [SMALL_STATE(261)] = 6079,
  [SMALL_STATE(262)] = 6095,
  [SMALL_STATE(263)] = 6103,
  [SMALL_STATE(264)] = 6119,
  [SMALL_STATE(265)] = 6135,
  [SMALL_STATE(266)] = 6151,
  [SMALL_STATE(267)] = 6159,
  [SMALL_STATE(268)] = 6171,
  [SMALL_STATE(269)] = 6179,
  [SMALL_STATE(270)] = 6191,
  [SMALL_STATE(271)] = 6204,
  [SMALL_STATE(272)] = 6217,
  [SMALL_STATE(273)] = 6228,
  [SMALL_STATE(274)] = 6241,
  [SMALL_STATE(275)] = 6254,
  [SMALL_STATE(276)] = 6267,
  [SMALL_STATE(277)] = 6276,
  [SMALL_STATE(278)] = 6283,
  [SMALL_STATE(279)] = 6296,
  [SMALL_STATE(280)] = 6305,
  [SMALL_STATE(281)] = 6318,
  [SMALL_STATE(282)] = 6331,
  [SMALL_STATE(283)] = 6344,
  [SMALL_STATE(284)] = 6353,
  [SMALL_STATE(285)] = 6366,
  [SMALL_STATE(286)] = 6379,
  [SMALL_STATE(287)] = 6392,
  [SMALL_STATE(288)] = 6405,
  [SMALL_STATE(289)] = 6418,
  [SMALL_STATE(290)] = 6431,
  [SMALL_STATE(291)] = 6444,
  [SMALL_STATE(292)] = 6457,
  [SMALL_STATE(293)] = 6464,
  [SMALL_STATE(294)] = 6477,
  [SMALL_STATE(295)] = 6490,
  [SMALL_STATE(296)] = 6503,
  [SMALL_STATE(297)] = 6516,
  [SMALL_STATE(298)] = 6529,
  [SMALL_STATE(299)] = 6542,
  [SMALL_STATE(300)] = 6555,
  [SMALL_STATE(301)] = 6568,
  [SMALL_STATE(302)] = 6581,
  [SMALL_STATE(303)] = 6594,
  [SMALL_STATE(304)] = 6607,
  [SMALL_STATE(305)] = 6620,
  [SMALL_STATE(306)] = 6633,
  [SMALL_STATE(307)] = 6646,
  [SMALL_STATE(308)] = 6659,
  [SMALL_STATE(309)] = 6669,
  [SMALL_STATE(310)] = 6679,
  [SMALL_STATE(311)] = 6689,
  [SMALL_STATE(312)] = 6699,
  [SMALL_STATE(313)] = 6709,
  [SMALL_STATE(314)] = 6719,
  [SMALL_STATE(315)] = 6729,
  [SMALL_STATE(316)] = 6739,
  [SMALL_STATE(317)] = 6749,
  [SMALL_STATE(318)] = 6759,
  [SMALL_STATE(319)] = 6769,
  [SMALL_STATE(320)] = 6779,
  [SMALL_STATE(321)] = 6789,
  [SMALL_STATE(322)] = 6797,
  [SMALL_STATE(323)] = 6807,
  [SMALL_STATE(324)] = 6817,
  [SMALL_STATE(325)] = 6827,
  [SMALL_STATE(326)] = 6837,
  [SMALL_STATE(327)] = 6847,
  [SMALL_STATE(328)] = 6857,
  [SMALL_STATE(329)] = 6867,
  [SMALL_STATE(330)] = 6877,
  [SMALL_STATE(331)] = 6885,
  [SMALL_STATE(332)] = 6895,
  [SMALL_STATE(333)] = 6905,
  [SMALL_STATE(334)] = 6915,
  [SMALL_STATE(335)] = 6925,
  [SMALL_STATE(336)] = 6935,
  [SMALL_STATE(337)] = 6945,
  [SMALL_STATE(338)] = 6955,
  [SMALL_STATE(339)] = 6965,
  [SMALL_STATE(340)] = 6975,
  [SMALL_STATE(341)] = 6985,
  [SMALL_STATE(342)] = 6995,
  [SMALL_STATE(343)] = 7001,
  [SMALL_STATE(344)] = 7011,
  [SMALL_STATE(345)] = 7021,
  [SMALL_STATE(346)] = 7031,
  [SMALL_STATE(347)] = 7041,
  [SMALL_STATE(348)] = 7051,
  [SMALL_STATE(349)] = 7061,
  [SMALL_STATE(350)] = 7071,
  [SMALL_STATE(351)] = 7081,
  [SMALL_STATE(352)] = 7091,
  [SMALL_STATE(353)] = 7101,
  [SMALL_STATE(354)] = 7111,
  [SMALL_STATE(355)] = 7121,
  [SMALL_STATE(356)] = 7131,
  [SMALL_STATE(357)] = 7141,
  [SMALL_STATE(358)] = 7151,
  [SMALL_STATE(359)] = 7159,
  [SMALL_STATE(360)] = 7169,
  [SMALL_STATE(361)] = 7177,
  [SMALL_STATE(362)] = 7187,
  [SMALL_STATE(363)] = 7197,
  [SMALL_STATE(364)] = 7207,
  [SMALL_STATE(365)] = 7217,
  [SMALL_STATE(366)] = 7227,
  [SMALL_STATE(367)] = 7237,
  [SMALL_STATE(368)] = 7247,
  [SMALL_STATE(369)] = 7253,
  [SMALL_STATE(370)] = 7263,
  [SMALL_STATE(371)] = 7273,
  [SMALL_STATE(372)] = 7283,
  [SMALL_STATE(373)] = 7293,
  [SMALL_STATE(374)] = 7303,
  [SMALL_STATE(375)] = 7313,
  [SMALL_STATE(376)] = 7323,
  [SMALL_STATE(377)] = 7333,
  [SMALL_STATE(378)] = 7343,
  [SMALL_STATE(379)] = 7353,
  [SMALL_STATE(380)] = 7363,
  [SMALL_STATE(381)] = 7373,
  [SMALL_STATE(382)] = 7378,
  [SMALL_STATE(383)] = 7383,
  [SMALL_STATE(384)] = 7388,
  [SMALL_STATE(385)] = 7395,
  [SMALL_STATE(386)] = 7402,
  [SMALL_STATE(387)] = 7407,
  [SMALL_STATE(388)] = 7412,
  [SMALL_STATE(389)] = 7419,
  [SMALL_STATE(390)] = 7426,
  [SMALL_STATE(391)] = 7433,
  [SMALL_STATE(392)] = 7438,
  [SMALL_STATE(393)] = 7443,
  [SMALL_STATE(394)] = 7450,
  [SMALL_STATE(395)] = 7455,
  [SMALL_STATE(396)] = 7460,
  [SMALL_STATE(397)] = 7467,
  [SMALL_STATE(398)] = 7474,
  [SMALL_STATE(399)] = 7481,
  [SMALL_STATE(400)] = 7488,
  [SMALL_STATE(401)] = 7493,
  [SMALL_STATE(402)] = 7500,
  [SMALL_STATE(403)] = 7505,
  [SMALL_STATE(404)] = 7512,
  [SMALL_STATE(405)] = 7519,
  [SMALL_STATE(406)] = 7524,
  [SMALL_STATE(407)] = 7529,
  [SMALL_STATE(408)] = 7536,
  [SMALL_STATE(409)] = 7543,
  [SMALL_STATE(410)] = 7548,
  [SMALL_STATE(411)] = 7555,
  [SMALL_STATE(412)] = 7562,
  [SMALL_STATE(413)] = 7569,
  [SMALL_STATE(414)] = 7576,
  [SMALL_STATE(415)] = 7583,
  [SMALL_STATE(416)] = 7588,
  [SMALL_STATE(417)] = 7595,
  [SMALL_STATE(418)] = 7602,
  [SMALL_STATE(419)] = 7607,
  [SMALL_STATE(420)] = 7614,
  [SMALL_STATE(421)] = 7621,
  [SMALL_STATE(422)] = 7628,
  [SMALL_STATE(423)] = 7633,
  [SMALL_STATE(424)] = 7638,
  [SMALL_STATE(425)] = 7645,
  [SMALL_STATE(426)] = 7652,
  [SMALL_STATE(427)] = 7659,
  [SMALL_STATE(428)] = 7666,
  [SMALL_STATE(429)] = 7673,
  [SMALL_STATE(430)] = 7680,
  [SMALL_STATE(431)] = 7687,
  [SMALL_STATE(432)] = 7694,
  [SMALL_STATE(433)] = 7701,
  [SMALL_STATE(434)] = 7708,
  [SMALL_STATE(435)] = 7715,
  [SMALL_STATE(436)] = 7720,
  [SMALL_STATE(437)] = 7727,
  [SMALL_STATE(438)] = 7732,
  [SMALL_STATE(439)] = 7737,
  [SMALL_STATE(440)] = 7744,
  [SMALL_STATE(441)] = 7751,
  [SMALL_STATE(442)] = 7758,
  [SMALL_STATE(443)] = 7765,
  [SMALL_STATE(444)] = 7772,
  [SMALL_STATE(445)] = 7779,
  [SMALL_STATE(446)] = 7784,
  [SMALL_STATE(447)] = 7791,
  [SMALL_STATE(448)] = 7798,
  [SMALL_STATE(449)] = 7805,
  [SMALL_STATE(450)] = 7812,
  [SMALL_STATE(451)] = 7819,
  [SMALL_STATE(452)] = 7826,
  [SMALL_STATE(453)] = 7833,
  [SMALL_STATE(454)] = 7838,
  [SMALL_STATE(455)] = 7845,
  [SMALL_STATE(456)] = 7852,
  [SMALL_STATE(457)] = 7856,
  [SMALL_STATE(458)] = 7860,
  [SMALL_STATE(459)] = 7864,
  [SMALL_STATE(460)] = 7868,
  [SMALL_STATE(461)] = 7872,
  [SMALL_STATE(462)] = 7876,
  [SMALL_STATE(463)] = 7880,
  [SMALL_STATE(464)] = 7884,
  [SMALL_STATE(465)] = 7888,
  [SMALL_STATE(466)] = 7892,
  [SMALL_STATE(467)] = 7896,
  [SMALL_STATE(468)] = 7900,
  [SMALL_STATE(469)] = 7904,
  [SMALL_STATE(470)] = 7908,
  [SMALL_STATE(471)] = 7912,
  [SMALL_STATE(472)] = 7916,
  [SMALL_STATE(473)] = 7920,
  [SMALL_STATE(474)] = 7924,
  [SMALL_STATE(475)] = 7928,
  [SMALL_STATE(476)] = 7932,
  [SMALL_STATE(477)] = 7936,
  [SMALL_STATE(478)] = 7940,
  [SMALL_STATE(479)] = 7944,
  [SMALL_STATE(480)] = 7948,
  [SMALL_STATE(481)] = 7952,
  [SMALL_STATE(482)] = 7956,
  [SMALL_STATE(483)] = 7960,
  [SMALL_STATE(484)] = 7964,
  [SMALL_STATE(485)] = 7968,
  [SMALL_STATE(486)] = 7972,
  [SMALL_STATE(487)] = 7976,
  [SMALL_STATE(488)] = 7980,
  [SMALL_STATE(489)] = 7984,
  [SMALL_STATE(490)] = 7988,
  [SMALL_STATE(491)] = 7992,
  [SMALL_STATE(492)] = 7996,
  [SMALL_STATE(493)] = 8000,
  [SMALL_STATE(494)] = 8004,
  [SMALL_STATE(495)] = 8008,
  [SMALL_STATE(496)] = 8012,
  [SMALL_STATE(497)] = 8016,
  [SMALL_STATE(498)] = 8020,
  [SMALL_STATE(499)] = 8024,
  [SMALL_STATE(500)] = 8028,
  [SMALL_STATE(501)] = 8032,
  [SMALL_STATE(502)] = 8036,
  [SMALL_STATE(503)] = 8040,
  [SMALL_STATE(504)] = 8044,
  [SMALL_STATE(505)] = 8048,
  [SMALL_STATE(506)] = 8052,
  [SMALL_STATE(507)] = 8056,
  [SMALL_STATE(508)] = 8060,
  [SMALL_STATE(509)] = 8064,
  [SMALL_STATE(510)] = 8068,
  [SMALL_STATE(511)] = 8072,
  [SMALL_STATE(512)] = 8076,
  [SMALL_STATE(513)] = 8080,
  [SMALL_STATE(514)] = 8084,
  [SMALL_STATE(515)] = 8088,
  [SMALL_STATE(516)] = 8092,
  [SMALL_STATE(517)] = 8096,
  [SMALL_STATE(518)] = 8100,
  [SMALL_STATE(519)] = 8104,
  [SMALL_STATE(520)] = 8108,
  [SMALL_STATE(521)] = 8112,
  [SMALL_STATE(522)] = 8116,
  [SMALL_STATE(523)] = 8120,
  [SMALL_STATE(524)] = 8124,
  [SMALL_STATE(525)] = 8128,
  [SMALL_STATE(526)] = 8132,
  [SMALL_STATE(527)] = 8136,
  [SMALL_STATE(528)] = 8140,
  [SMALL_STATE(529)] = 8144,
  [SMALL_STATE(530)] = 8148,
  [SMALL_STATE(531)] = 8152,
  [SMALL_STATE(532)] = 8156,
  [SMALL_STATE(533)] = 8160,
  [SMALL_STATE(534)] = 8164,
  [SMALL_STATE(535)] = 8168,
  [SMALL_STATE(536)] = 8172,
  [SMALL_STATE(537)] = 8176,
  [SMALL_STATE(538)] = 8180,
  [SMALL_STATE(539)] = 8184,
  [SMALL_STATE(540)] = 8188,
  [SMALL_STATE(541)] = 8192,
  [SMALL_STATE(542)] = 8196,
  [SMALL_STATE(543)] = 8200,
  [SMALL_STATE(544)] = 8204,
  [SMALL_STATE(545)] = 8208,
  [SMALL_STATE(546)] = 8212,
  [SMALL_STATE(547)] = 8216,
  [SMALL_STATE(548)] = 8220,
  [SMALL_STATE(549)] = 8224,
  [SMALL_STATE(550)] = 8228,
  [SMALL_STATE(551)] = 8232,
  [SMALL_STATE(552)] = 8236,
  [SMALL_STATE(553)] = 8240,
  [SMALL_STATE(554)] = 8244,
  [SMALL_STATE(555)] = 8248,
  [SMALL_STATE(556)] = 8252,
  [SMALL_STATE(557)] = 8256,
  [SMALL_STATE(558)] = 8260,
  [SMALL_STATE(559)] = 8264,
  [SMALL_STATE(560)] = 8268,
  [SMALL_STATE(561)] = 8272,
  [SMALL_STATE(562)] = 8276,
  [SMALL_STATE(563)] = 8280,
  [SMALL_STATE(564)] = 8284,
  [SMALL_STATE(565)] = 8288,
  [SMALL_STATE(566)] = 8292,
  [SMALL_STATE(567)] = 8296,
  [SMALL_STATE(568)] = 8300,
  [SMALL_STATE(569)] = 8304,
  [SMALL_STATE(570)] = 8308,
  [SMALL_STATE(571)] = 8312,
  [SMALL_STATE(572)] = 8316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(567),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(562),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 15),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 11),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 10),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(33),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(234),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 17),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 22),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(235),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 19),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 18),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(416),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2, .production_id = 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 8),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 16),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 13),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(222),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(144),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 16),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(309),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(19),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(484),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(79),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(355),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(557),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(404),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(122),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(421),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(428),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 14),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 21),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1095] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
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
