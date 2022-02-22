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
#define STATE_COUNT 477
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 2
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 14

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
  sym_source_file = 74,
  sym__statement = 75,
  sym_select_statement = 76,
  sym_select_elements = 77,
  sym_select_element = 78,
  sym_function_call = 79,
  sym_function_args = 80,
  sym_constant = 81,
  sym__uuid = 82,
  sym__string_literal = 83,
  aux_sym__decimal_literal = 84,
  sym__float_literal = 85,
  sym__hexadecimal_literal = 86,
  sym_from_spec = 87,
  sym_from_spec_element = 88,
  sym_where_spec = 89,
  sym_relation_elements = 90,
  sym_relation_element = 91,
  sym_assignment_tuple = 92,
  sym_relalationContainsKey = 93,
  sym_relalationContains = 94,
  sym_order_spec = 95,
  sym_order_spec_element = 96,
  sym_delete_statement = 97,
  sym_begin_batch = 98,
  sym_delete_column_list = 99,
  sym_delete_column_item = 100,
  sym_using_timestamp_spec = 101,
  sym_timestamp = 102,
  sym_if_exist = 103,
  sym_if_spec = 104,
  sym_if_condition_list = 105,
  sym_if_condition = 106,
  sym_insert_statement = 107,
  sym_keyspace = 108,
  sym_table = 109,
  sym_insert_column_spec = 110,
  sym_column_list = 111,
  sym_column = 112,
  sym_insert_values_spec = 113,
  sym_expression_list = 114,
  sym_expression = 115,
  sym_assignment_map = 116,
  sym_assignment_set = 117,
  sym_assignment_list = 118,
  sym_if_not_exist = 119,
  sym_using_ttl_timestamp = 120,
  sym_ttl = 121,
  sym_truncate = 122,
  sym_create_index = 123,
  sym_index_name = 124,
  sym_index_column_spec = 125,
  sym_index_keys_spec = 126,
  sym_index_entries_s_spec = 127,
  sym_index_full_spec = 128,
  sym_drop_index = 129,
  sym_update = 130,
  sym_assignment_element = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_select_elements_repeat1 = 133,
  aux_sym_function_args_repeat1 = 134,
  aux_sym__hexadecimal_literal_repeat1 = 135,
  aux_sym__hexadecimal_literal_repeat2 = 136,
  aux_sym_relation_elements_repeat1 = 137,
  aux_sym_relation_element_repeat1 = 138,
  aux_sym_relation_element_repeat2 = 139,
  aux_sym_assignment_tuple_repeat1 = 140,
  aux_sym_delete_column_list_repeat1 = 141,
  aux_sym_if_condition_list_repeat1 = 142,
  aux_sym_column_list_repeat1 = 143,
  aux_sym_expression_list_repeat1 = 144,
  aux_sym_assignment_map_repeat1 = 145,
  aux_sym_update_repeat1 = 146,
  anon_alias_sym_CONTAINS = 147,
  anon_alias_sym_IF = 148,
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
  [aux_sym_drop_index_token1] = "DROP_INDEX",
  [aux_sym_update_token1] = "UPDATE",
  [aux_sym_update_token2] = "SET",
  [anon_sym_PLUS] = "+",
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
  [anon_alias_sym_CONTAINS] = "CONTAINS",
  [anon_alias_sym_IF] = "IF",
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
  [anon_alias_sym_CONTAINS] = anon_alias_sym_CONTAINS,
  [anon_alias_sym_IF] = anon_alias_sym_IF,
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
  [anon_alias_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_IF] = {
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
  field_table = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_column] = "column",
  [field_content] = "content",
  [field_function] = "function",
  [field_keyspace] = "keyspace",
  [field_table] = "table",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyspace, 0},
  [1] =
    {field_table, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_keyspace, 0},
    {field_keyspace, 1},
    {field_keyspace, 2},
  [6] =
    {field_table, 0},
    {field_table, 1},
    {field_table, 2},
  [9] =
    {field_arguments, 2},
    {field_function, 0},
  [11] =
    {field_column, 0},
  [12] =
    {field_content, 1},
  [13] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = aux_sym_drop_index_token1,
  },
  [8] = {
    [0] = anon_alias_sym_IF,
  },
  [11] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
  },
  [12] = {
    [1] = anon_alias_sym_CONTAINS,
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 40,
  [43] = 25,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 38,
  [53] = 53,
  [54] = 39,
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
  [86] = 48,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 66,
  [93] = 93,
  [94] = 60,
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
  [167] = 35,
  [168] = 168,
  [169] = 25,
  [170] = 170,
  [171] = 171,
  [172] = 168,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
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
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 204,
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
  [223] = 121,
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
  [243] = 137,
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
  [351] = 348,
  [352] = 352,
  [353] = 353,
  [354] = 348,
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
  [460] = 427,
  [461] = 461,
  [462] = 411,
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
  [476] = 466,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(176);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(199);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(139);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == 'X') ADVANCE(221);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(222);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(210);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 61:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 70:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 72:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 99:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 162:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 164:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 166:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(212);
      END_STATE();
    case 172:
      if (eof) ADVANCE(176);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(79);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 173:
      if (eof) ADVANCE(176);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 174:
      if (eof) ADVANCE(176);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 175:
      if (eof) ADVANCE(176);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(240);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(231);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 172},
  [3] = {.lex_state = 172},
  [4] = {.lex_state = 172},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 173},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 173},
  [13] = {.lex_state = 172},
  [14] = {.lex_state = 172},
  [15] = {.lex_state = 172},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 173},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 174},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 172},
  [29] = {.lex_state = 173},
  [30] = {.lex_state = 173},
  [31] = {.lex_state = 172},
  [32] = {.lex_state = 172},
  [33] = {.lex_state = 173},
  [34] = {.lex_state = 172},
  [35] = {.lex_state = 174},
  [36] = {.lex_state = 173},
  [37] = {.lex_state = 172},
  [38] = {.lex_state = 173},
  [39] = {.lex_state = 173},
  [40] = {.lex_state = 173},
  [41] = {.lex_state = 175},
  [42] = {.lex_state = 173},
  [43] = {.lex_state = 175},
  [44] = {.lex_state = 172},
  [45] = {.lex_state = 173},
  [46] = {.lex_state = 173},
  [47] = {.lex_state = 172},
  [48] = {.lex_state = 172},
  [49] = {.lex_state = 172},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 173},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 173},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 173},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 173},
  [62] = {.lex_state = 173},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 172},
  [65] = {.lex_state = 173},
  [66] = {.lex_state = 172},
  [67] = {.lex_state = 172},
  [68] = {.lex_state = 173},
  [69] = {.lex_state = 173},
  [70] = {.lex_state = 172},
  [71] = {.lex_state = 172},
  [72] = {.lex_state = 172},
  [73] = {.lex_state = 172},
  [74] = {.lex_state = 172},
  [75] = {.lex_state = 172},
  [76] = {.lex_state = 172},
  [77] = {.lex_state = 172},
  [78] = {.lex_state = 172},
  [79] = {.lex_state = 173},
  [80] = {.lex_state = 172},
  [81] = {.lex_state = 172},
  [82] = {.lex_state = 172},
  [83] = {.lex_state = 172},
  [84] = {.lex_state = 172},
  [85] = {.lex_state = 172},
  [86] = {.lex_state = 172},
  [87] = {.lex_state = 172},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 172},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 172},
  [92] = {.lex_state = 172},
  [93] = {.lex_state = 172},
  [94] = {.lex_state = 172},
  [95] = {.lex_state = 172},
  [96] = {.lex_state = 172},
  [97] = {.lex_state = 172},
  [98] = {.lex_state = 172},
  [99] = {.lex_state = 172},
  [100] = {.lex_state = 172},
  [101] = {.lex_state = 172},
  [102] = {.lex_state = 172},
  [103] = {.lex_state = 172},
  [104] = {.lex_state = 172},
  [105] = {.lex_state = 172},
  [106] = {.lex_state = 172},
  [107] = {.lex_state = 172},
  [108] = {.lex_state = 172},
  [109] = {.lex_state = 172},
  [110] = {.lex_state = 172},
  [111] = {.lex_state = 172},
  [112] = {.lex_state = 172},
  [113] = {.lex_state = 172},
  [114] = {.lex_state = 172},
  [115] = {.lex_state = 172},
  [116] = {.lex_state = 172},
  [117] = {.lex_state = 172},
  [118] = {.lex_state = 172},
  [119] = {.lex_state = 172},
  [120] = {.lex_state = 172},
  [121] = {.lex_state = 172},
  [122] = {.lex_state = 172},
  [123] = {.lex_state = 172},
  [124] = {.lex_state = 172},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 172},
  [127] = {.lex_state = 172},
  [128] = {.lex_state = 172},
  [129] = {.lex_state = 172},
  [130] = {.lex_state = 172},
  [131] = {.lex_state = 172},
  [132] = {.lex_state = 172},
  [133] = {.lex_state = 172},
  [134] = {.lex_state = 172},
  [135] = {.lex_state = 172},
  [136] = {.lex_state = 172},
  [137] = {.lex_state = 172},
  [138] = {.lex_state = 172},
  [139] = {.lex_state = 172},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 172},
  [142] = {.lex_state = 172},
  [143] = {.lex_state = 172},
  [144] = {.lex_state = 172},
  [145] = {.lex_state = 172},
  [146] = {.lex_state = 172},
  [147] = {.lex_state = 172},
  [148] = {.lex_state = 172},
  [149] = {.lex_state = 172},
  [150] = {.lex_state = 172},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 172},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 172},
  [155] = {.lex_state = 172},
  [156] = {.lex_state = 172},
  [157] = {.lex_state = 172},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 172},
  [160] = {.lex_state = 172},
  [161] = {.lex_state = 172},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 172},
  [164] = {.lex_state = 172},
  [165] = {.lex_state = 172},
  [166] = {.lex_state = 172},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 172},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 172},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 172},
  [191] = {.lex_state = 172},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 172},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 172},
  [213] = {.lex_state = 172},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 172},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 172},
  [247] = {.lex_state = 172},
  [248] = {.lex_state = 172},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 172},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 172},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 172},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 172},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 172},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 172},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 172},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 172},
  [292] = {.lex_state = 172},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 172},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 172},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 172},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 172},
  [314] = {.lex_state = 172},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 172},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 172},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 172},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 172},
  [338] = {.lex_state = 1},
  [339] = {.lex_state = 172},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 172},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 172},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 172},
  [350] = {.lex_state = 172},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 172},
  [353] = {.lex_state = 172},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 172},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 172},
  [362] = {.lex_state = 172},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 172},
  [368] = {.lex_state = 172},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 172},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 172},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 172},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 172},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 173},
  [399] = {.lex_state = 172},
  [400] = {.lex_state = 172},
  [401] = {.lex_state = 172},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 173},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 172},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 4},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 208},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 172},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 172},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 173},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 173},
  [448] = {.lex_state = 172},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 173},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 172},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 172},
  [460] = {.lex_state = 172},
  [461] = {.lex_state = 173},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 5},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 172},
  [474] = {.lex_state = 172},
  [475] = {.lex_state = 172},
  [476] = {.lex_state = 1},
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
    [aux_sym_from_spec_token1] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(471),
    [sym__statement] = STATE(18),
    [sym_select_statement] = STATE(126),
    [sym_delete_statement] = STATE(126),
    [sym_begin_batch] = STATE(247),
    [sym_insert_statement] = STATE(126),
    [sym_truncate] = STATE(126),
    [sym_create_index] = STATE(126),
    [sym_drop_index] = STATE(126),
    [sym_update] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
    [aux_sym_insert_statement_token1] = ACTIONS(11),
    [aux_sym_truncate_token1] = ACTIONS(13),
    [aux_sym_create_index_token1] = ACTIONS(15),
    [aux_sym_drop_index_token1] = ACTIONS(17),
    [aux_sym_update_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(23), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(21), 25,
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
  [34] = 4,
    ACTIONS(28), 1,
      anon_sym_DOT,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(26), 23,
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
  [69] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(34), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(32), 23,
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
  [104] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(36), 23,
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
  [136] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(38), 23,
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
  [168] = 16,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(287), 1,
      sym_expression,
    STATE(445), 1,
      sym_expression_list,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(325), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [225] = 2,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 22,
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
  [254] = 2,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 22,
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
  [283] = 2,
    ACTIONS(72), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 22,
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
  [312] = 1,
    ACTIONS(74), 24,
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
  [339] = 15,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(357), 1,
      sym_expression,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(325), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [393] = 1,
    ACTIONS(76), 23,
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
  [419] = 1,
    ACTIONS(78), 23,
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
  [445] = 1,
    ACTIONS(32), 23,
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
  [471] = 15,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(315), 1,
      sym_constant,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(214), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [523] = 15,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_STAR,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(389), 1,
      sym_function_args,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(301), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [574] = 12,
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
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_begin_batch,
    STATE(19), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(126), 7,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
      sym_update,
  [618] = 12,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      aux_sym_select_statement_token1,
    ACTIONS(101), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(104), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(107), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(110), 1,
      aux_sym_truncate_token1,
    ACTIONS(113), 1,
      aux_sym_create_index_token1,
    ACTIONS(116), 1,
      aux_sym_drop_index_token1,
    ACTIONS(119), 1,
      aux_sym_update_token1,
    STATE(247), 1,
      sym_begin_batch,
    STATE(19), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(126), 7,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
      sym_update,
  [662] = 13,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(405), 1,
      sym_function_args,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(301), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [707] = 13,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(225), 1,
      sym_constant,
    STATE(329), 1,
      sym_assignment_tuple,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [751] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(363), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [793] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    ACTIONS(126), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(49), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [835] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_object_name,
    ACTIONS(128), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(49), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [877] = 3,
    ACTIONS(132), 1,
      sym__hex_digit,
    STATE(35), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(130), 14,
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
  [900] = 7,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    ACTIONS(140), 1,
      aux_sym_where_spec_token1,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    STATE(72), 1,
      sym_where_spec,
    STATE(115), 1,
      sym_order_spec,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [931] = 7,
    ACTIONS(140), 1,
      aux_sym_where_spec_token1,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    ACTIONS(146), 1,
      aux_sym_select_statement_token4,
    ACTIONS(148), 1,
      aux_sym_select_statement_token5,
    STATE(76), 1,
      sym_where_spec,
    STATE(101), 1,
      sym_order_spec,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [962] = 2,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(150), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
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
  [983] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(236), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1024] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    ACTIONS(156), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1065] = 2,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(158), 15,
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
  [1086] = 2,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(162), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
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
  [1107] = 12,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_0X,
    ACTIONS(166), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1148] = 7,
    ACTIONS(140), 1,
      aux_sym_where_spec_token1,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    ACTIONS(170), 1,
      aux_sym_select_statement_token4,
    ACTIONS(172), 1,
      aux_sym_select_statement_token5,
    STATE(71), 1,
      sym_where_spec,
    STATE(109), 1,
      sym_order_spec,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [1179] = 3,
    ACTIONS(176), 1,
      sym__hex_digit,
    STATE(35), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 14,
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
  [1202] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(180), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1240] = 1,
    ACTIONS(179), 15,
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
  [1258] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(56), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1296] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1334] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1372] = 3,
    ACTIONS(181), 1,
      sym__hex_digit,
    STATE(41), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 13,
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
  [1394] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1432] = 3,
    ACTIONS(184), 1,
      sym__hex_digit,
    STATE(41), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(130), 13,
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
  [1454] = 1,
    ACTIONS(186), 15,
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
  [1472] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(340), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1510] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(331), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1548] = 1,
    ACTIONS(188), 15,
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
  [1566] = 3,
    ACTIONS(192), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(190), 13,
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
  [1588] = 1,
    ACTIONS(194), 15,
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
  [1606] = 1,
    ACTIONS(196), 15,
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
  [1624] = 1,
    ACTIONS(198), 15,
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
  [1642] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(56), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1680] = 1,
    ACTIONS(200), 15,
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
  [1698] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1736] = 1,
    ACTIONS(202), 15,
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
  [1754] = 1,
    ACTIONS(204), 15,
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
  [1772] = 1,
    ACTIONS(206), 15,
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
  [1790] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(442), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1828] = 1,
    ACTIONS(208), 15,
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
  [1846] = 3,
    ACTIONS(210), 1,
      aux_sym_relation_elements_token1,
    STATE(60), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(206), 13,
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
  [1868] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(122), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1906] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(100), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1944] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(213), 13,
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
  [1966] = 1,
    ACTIONS(162), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
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
  [1984] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(283), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2022] = 3,
    ACTIONS(192), 1,
      aux_sym_relation_elements_token1,
    STATE(60), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(215), 13,
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
  [2044] = 1,
    ACTIONS(150), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
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
  [2062] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(225), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2100] = 11,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(46), 1,
      sym__hex_4digit,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(245), 1,
      sym_constant,
    ACTIONS(42), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [2138] = 1,
    ACTIONS(217), 14,
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
  [2155] = 5,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    ACTIONS(146), 1,
      aux_sym_select_statement_token4,
    ACTIONS(148), 1,
      aux_sym_select_statement_token5,
    STATE(101), 1,
      sym_order_spec,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2180] = 5,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    ACTIONS(221), 1,
      aux_sym_select_statement_token4,
    ACTIONS(223), 1,
      aux_sym_select_statement_token5,
    STATE(106), 1,
      sym_order_spec,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2205] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(111), 1,
      sym_if_not_exist,
    STATE(142), 1,
      sym_using_ttl_timestamp,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2230] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(231), 12,
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
  [2251] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(113), 1,
      sym_if_not_exist,
    STATE(134), 1,
      sym_using_ttl_timestamp,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2276] = 5,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    ACTIONS(142), 1,
      aux_sym_order_spec_token1,
    STATE(115), 1,
      sym_order_spec,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2301] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(105), 1,
      sym_if_not_exist,
    STATE(147), 1,
      sym_using_ttl_timestamp,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2326] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(102), 1,
      sym_if_not_exist,
    STATE(133), 1,
      sym_using_ttl_timestamp,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2351] = 2,
    ACTIONS(241), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(239), 12,
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
  [2370] = 5,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(229), 1,
      aux_sym_if_exist_token1,
    STATE(108), 1,
      sym_if_not_exist,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2395] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(157), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2415] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(155), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2435] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(123), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2455] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(144), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(253), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2475] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(257), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2497] = 3,
    ACTIONS(259), 1,
      aux_sym_relation_elements_token1,
    STATE(92), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(190), 11,
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
  [2517] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2539] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(263), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2561] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(132), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2581] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(223), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2603] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(163), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2623] = 3,
    ACTIONS(259), 1,
      aux_sym_relation_elements_token1,
    STATE(94), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(215), 11,
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
  [2643] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(145), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2663] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(94), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(206), 11,
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
  [2683] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(127), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(274), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2703] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(156), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2723] = 3,
    ACTIONS(247), 1,
      aux_sym_if_exist_token1,
    STATE(128), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(278), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2743] = 4,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(282), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(280), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2765] = 3,
    ACTIONS(286), 1,
      aux_sym_relation_elements_token1,
    STATE(116), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(284), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2784] = 1,
    ACTIONS(288), 12,
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
  [2799] = 3,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2818] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(164), 1,
      sym_using_ttl_timestamp,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2837] = 2,
    ACTIONS(294), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(292), 11,
      ts_builtin_sym_end,
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
  [2854] = 2,
    ACTIONS(296), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(292), 11,
      ts_builtin_sym_end,
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
  [2871] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(134), 1,
      sym_using_ttl_timestamp,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2890] = 3,
    ACTIONS(263), 1,
      aux_sym_select_statement_token5,
    ACTIONS(298), 1,
      aux_sym_select_statement_token4,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2909] = 1,
    ACTIONS(300), 12,
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
  [2924] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(133), 1,
      sym_using_ttl_timestamp,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2943] = 3,
    ACTIONS(146), 1,
      aux_sym_select_statement_token4,
    ACTIONS(148), 1,
      aux_sym_select_statement_token5,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2962] = 1,
    ACTIONS(302), 12,
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
  [2977] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(147), 1,
      sym_using_ttl_timestamp,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [2996] = 1,
    ACTIONS(304), 12,
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
  [3011] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3030] = 3,
    ACTIONS(286), 1,
      aux_sym_relation_elements_token1,
    STATE(99), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(306), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3049] = 3,
    ACTIONS(221), 1,
      aux_sym_select_statement_token4,
    ACTIONS(223), 1,
      aux_sym_select_statement_token5,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3068] = 3,
    ACTIONS(310), 1,
      aux_sym_relation_elements_token1,
    STATE(116), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(308), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3087] = 2,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(313), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3103] = 1,
    ACTIONS(308), 11,
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
  [3117] = 1,
    ACTIONS(315), 11,
      ts_builtin_sym_end,
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
  [3131] = 1,
    ACTIONS(313), 11,
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
  [3145] = 1,
    ACTIONS(317), 11,
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
  [3159] = 1,
    ACTIONS(319), 11,
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
  [3173] = 1,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3186] = 1,
    ACTIONS(321), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3199] = 7,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    ACTIONS(327), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(329), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(331), 1,
      aux_sym_index_full_spec_token1,
    STATE(416), 1,
      sym_index_column_spec,
    STATE(433), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [3224] = 2,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3239] = 1,
    ACTIONS(253), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3252] = 1,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3265] = 1,
    ACTIONS(337), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3278] = 1,
    ACTIONS(339), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3291] = 1,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3304] = 1,
    ACTIONS(341), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3317] = 1,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3330] = 1,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3343] = 1,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3356] = 1,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3369] = 1,
    ACTIONS(343), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3382] = 1,
    ACTIONS(345), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3395] = 1,
    ACTIONS(347), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3408] = 1,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3421] = 1,
    ACTIONS(280), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3434] = 1,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3447] = 1,
    ACTIONS(349), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3460] = 1,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3473] = 1,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3486] = 1,
    ACTIONS(351), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3499] = 1,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3512] = 1,
    ACTIONS(353), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3525] = 1,
    ACTIONS(355), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3538] = 1,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3551] = 7,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    ACTIONS(327), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(329), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(331), 1,
      aux_sym_index_full_spec_token1,
    STATE(434), 1,
      sym_index_column_spec,
    STATE(433), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [3576] = 1,
    ACTIONS(357), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3589] = 7,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    ACTIONS(327), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(329), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(331), 1,
      aux_sym_index_full_spec_token1,
    STATE(380), 1,
      sym_index_column_spec,
    STATE(433), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [3614] = 1,
    ACTIONS(359), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3627] = 1,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3640] = 1,
    ACTIONS(361), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3653] = 1,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3666] = 7,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    ACTIONS(327), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(329), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(331), 1,
      aux_sym_index_full_spec_token1,
    STATE(432), 1,
      sym_index_column_spec,
    STATE(433), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [3691] = 1,
    ACTIONS(363), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3704] = 1,
    ACTIONS(365), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3717] = 1,
    ACTIONS(367), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3730] = 7,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    ACTIONS(327), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(329), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(331), 1,
      aux_sym_index_full_spec_token1,
    STATE(390), 1,
      sym_index_column_spec,
    STATE(433), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [3755] = 1,
    ACTIONS(278), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3768] = 1,
    ACTIONS(369), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3781] = 1,
    ACTIONS(371), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3794] = 1,
    ACTIONS(373), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3807] = 3,
    ACTIONS(375), 1,
      sym__hex_digit,
    STATE(167), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(174), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3823] = 6,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      aux_sym_relation_element_token1,
    ACTIONS(388), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(384), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3845] = 3,
    ACTIONS(390), 1,
      sym__hex_digit,
    STATE(167), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(130), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3861] = 1,
    ACTIONS(392), 9,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
  [3873] = 9,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      sym_object_name,
    ACTIONS(396), 1,
      aux_sym_if_exist_token1,
    ACTIONS(398), 1,
      sym__dquote,
    STATE(120), 1,
      sym__string_literal,
    STATE(129), 1,
      sym_index_name,
    STATE(178), 1,
      sym_if_exist,
    STATE(395), 1,
      sym_keyspace,
  [3901] = 6,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      aux_sym_relation_element_token1,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(402), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3923] = 8,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      sym_object_name,
    ACTIONS(410), 1,
      aux_sym_if_exist_token1,
    ACTIONS(412), 1,
      aux_sym_create_index_token3,
    STATE(120), 1,
      sym__string_literal,
    STATE(185), 1,
      sym_if_not_exist,
    STATE(374), 1,
      sym_index_name,
  [3948] = 7,
    ACTIONS(414), 1,
      aux_sym_select_statement_token2,
    ACTIONS(416), 1,
      aux_sym_select_statement_token3,
    ACTIONS(418), 1,
      anon_sym_STAR,
    ACTIONS(420), 1,
      sym_object_name,
    STATE(248), 1,
      sym_select_element,
    STATE(252), 1,
      sym_function_call,
    STATE(370), 1,
      sym_select_elements,
  [3970] = 6,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_object_name,
    STATE(48), 1,
      sym_relation_element,
    STATE(70), 1,
      sym_relation_elements,
    STATE(201), 1,
      sym_function_call,
    STATE(59), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3990] = 6,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym_object_name,
    STATE(70), 1,
      sym_relation_elements,
    STATE(86), 1,
      sym_relation_element,
    STATE(202), 1,
      sym_function_call,
    STATE(59), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [4010] = 5,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      sym__dec_digit,
    STATE(228), 1,
      aux_sym__decimal_literal,
    STATE(342), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [4028] = 7,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      sym_object_name,
    ACTIONS(398), 1,
      sym__dquote,
    STATE(120), 1,
      sym__string_literal,
    STATE(149), 1,
      sym_index_name,
    STATE(444), 1,
      sym_keyspace,
  [4050] = 5,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym_object_name,
    STATE(57), 1,
      sym_relation_element,
    STATE(202), 1,
      sym_function_call,
    STATE(59), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [4067] = 6,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(253), 1,
      aux_sym_relation_element_repeat2,
    STATE(256), 1,
      sym_assignment_tuple,
  [4086] = 5,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_object_name,
    STATE(57), 1,
      sym_relation_element,
    STATE(201), 1,
      sym_function_call,
    STATE(59), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [4103] = 2,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [4114] = 6,
    ACTIONS(418), 1,
      anon_sym_STAR,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(438), 1,
      aux_sym_select_statement_token3,
    STATE(248), 1,
      sym_select_element,
    STATE(252), 1,
      sym_function_call,
    STATE(337), 1,
      sym_select_elements,
  [4133] = 2,
    ACTIONS(442), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [4144] = 6,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      sym_object_name,
    ACTIONS(444), 1,
      aux_sym_create_index_token3,
    STATE(120), 1,
      sym__string_literal,
    STATE(430), 1,
      sym_index_name,
  [4163] = 5,
    ACTIONS(446), 1,
      sym_object_name,
    ACTIONS(448), 1,
      aux_sym_from_spec_token1,
    STATE(221), 1,
      sym_from_spec,
    STATE(270), 1,
      sym_delete_column_item,
    STATE(350), 1,
      sym_delete_column_list,
  [4179] = 1,
    ACTIONS(450), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4187] = 1,
    ACTIONS(452), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4195] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4207] = 3,
    ACTIONS(461), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(246), 1,
      sym_using_timestamp_spec,
    ACTIONS(459), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [4219] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_DOT,
    ACTIONS(467), 1,
      aux_sym_select_element_token1,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4233] = 5,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
    STATE(268), 1,
      sym_insert_column_spec,
  [4249] = 5,
    ACTIONS(418), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      sym_object_name,
    STATE(248), 1,
      sym_select_element,
    STATE(252), 1,
      sym_function_call,
    STATE(337), 1,
      sym_select_elements,
  [4265] = 1,
    ACTIONS(477), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4273] = 5,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      sym_object_name,
    STATE(120), 1,
      sym__string_literal,
    STATE(159), 1,
      sym_index_name,
  [4289] = 5,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(73), 1,
      sym_insert_values_spec,
    STATE(294), 1,
      sym_insert_column_spec,
  [4305] = 5,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(479), 1,
      sym__dec_digit,
    STATE(280), 1,
      aux_sym__decimal_literal,
    STATE(402), 1,
      sym__string_literal,
  [4321] = 5,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
    STATE(277), 1,
      sym_insert_column_spec,
  [4337] = 5,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(80), 1,
      sym_insert_values_spec,
    STATE(262), 1,
      sym_insert_column_spec,
  [4353] = 1,
    ACTIONS(481), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4361] = 2,
    ACTIONS(485), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(483), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4371] = 2,
    ACTIONS(489), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4381] = 1,
    ACTIONS(491), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4389] = 2,
    ACTIONS(495), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(493), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4399] = 5,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    ACTIONS(501), 1,
      aux_sym_truncate_token2,
    STATE(124), 1,
      sym_table,
    STATE(453), 1,
      sym_keyspace,
  [4415] = 5,
    ACTIONS(418), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      sym_object_name,
    STATE(248), 1,
      sym_select_element,
    STATE(252), 1,
      sym_function_call,
    STATE(339), 1,
      sym_select_elements,
  [4431] = 2,
    ACTIONS(505), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(503), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4441] = 1,
    ACTIONS(507), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4449] = 1,
    ACTIONS(509), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [4457] = 5,
    ACTIONS(446), 1,
      sym_object_name,
    ACTIONS(448), 1,
      aux_sym_from_spec_token1,
    STATE(216), 1,
      sym_from_spec,
    STATE(270), 1,
      sym_delete_column_item,
    STATE(353), 1,
      sym_delete_column_list,
  [4473] = 5,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      sym_object_name,
    STATE(120), 1,
      sym__string_literal,
    STATE(139), 1,
      sym_index_name,
  [4489] = 3,
    ACTIONS(461), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(292), 1,
      sym_using_timestamp_spec,
    ACTIONS(511), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [4501] = 1,
    ACTIONS(513), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [4508] = 2,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4517] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(276), 1,
      sym_table,
    STATE(452), 1,
      sym_keyspace,
  [4530] = 4,
    ACTIONS(461), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(95), 1,
      sym_where_spec,
    STATE(322), 1,
      sym_using_timestamp_spec,
  [4543] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(196), 1,
      sym_table,
    STATE(423), 1,
      sym_keyspace,
  [4556] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(431), 1,
      sym_keyspace,
    STATE(441), 1,
      sym_table,
  [4569] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(152), 1,
      sym_table,
    STATE(419), 1,
      sym_keyspace,
  [4582] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(249), 1,
      sym_table,
    STATE(376), 1,
      sym_keyspace,
  [4595] = 4,
    ACTIONS(461), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
    STATE(327), 1,
      sym_using_timestamp_spec,
  [4608] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_where_spec,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [4621] = 2,
    ACTIONS(317), 2,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
    ACTIONS(523), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
  [4630] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(428), 1,
      sym_keyspace,
    STATE(429), 1,
      sym_table,
  [4643] = 1,
    ACTIONS(457), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4650] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_where_spec,
    STATE(222), 1,
      aux_sym_update_repeat1,
  [4663] = 4,
    ACTIONS(525), 1,
      aux_sym_timestamp_token1,
    ACTIONS(527), 1,
      aux_sym_ttl_token1,
    STATE(103), 1,
      sym_ttl,
    STATE(104), 1,
      sym_timestamp,
  [4676] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [4687] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_where_spec,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [4700] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_where_spec,
    STATE(239), 1,
      aux_sym_update_repeat1,
  [4713] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_where_spec,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [4726] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(192), 1,
      sym_table,
    STATE(451), 1,
      sym_keyspace,
  [4739] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_function_args_repeat1,
  [4752] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_where_spec,
    STATE(231), 1,
      aux_sym_update_repeat1,
  [4765] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_where_spec,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [4778] = 4,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_COLON,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_assignment_tuple_repeat1,
  [4791] = 4,
    ACTIONS(461), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(81), 1,
      sym_where_spec,
    STATE(344), 1,
      sym_using_timestamp_spec,
  [4804] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_where_spec,
    STATE(235), 1,
      aux_sym_update_repeat1,
  [4817] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_where_spec,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [4830] = 4,
    ACTIONS(497), 1,
      sym_object_name,
    ACTIONS(499), 1,
      sym__dquote,
    STATE(464), 1,
      sym_table,
    STATE(472), 1,
      sym_keyspace,
  [4843] = 4,
    ACTIONS(541), 1,
      sym_object_name,
    ACTIONS(543), 1,
      aux_sym_if_exist_token2,
    STATE(114), 1,
      sym_if_condition,
    STATE(130), 1,
      sym_if_condition_list,
  [4856] = 4,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    STATE(273), 1,
      sym_column,
    STATE(378), 1,
      sym_column_list,
  [4869] = 2,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [4878] = 4,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_where_spec,
    STATE(229), 1,
      aux_sym_update_repeat1,
  [4891] = 3,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      aux_sym_assignment_map_repeat1,
  [4901] = 1,
    ACTIONS(511), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [4907] = 3,
    ACTIONS(551), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(553), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(555), 1,
      aux_sym_update_token1,
  [4917] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      aux_sym_from_spec_token1,
    STATE(291), 1,
      aux_sym_select_elements_repeat1,
  [4927] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(561), 1,
      aux_sym_update_token2,
    STATE(454), 1,
      sym_using_ttl_timestamp,
  [4937] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_assignment_tuple_repeat1,
  [4947] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_assignment_tuple_repeat1,
  [4957] = 2,
    ACTIONS(467), 1,
      aux_sym_select_element_token1,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4965] = 3,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_relation_element_repeat2,
  [4975] = 2,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4983] = 3,
    ACTIONS(573), 1,
      sym__hex_digit,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4993] = 3,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_relation_element_repeat2,
  [5003] = 2,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5011] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      aux_sym_from_spec_token1,
    STATE(258), 1,
      aux_sym_select_elements_repeat1,
  [5021] = 3,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_function_args_repeat1,
  [5031] = 3,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_relation_element_repeat1,
  [5041] = 2,
    ACTIONS(594), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(592), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [5049] = 3,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(78), 1,
      sym_insert_values_spec,
  [5059] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(596), 1,
      aux_sym_update_token2,
    STATE(422), 1,
      sym_using_ttl_timestamp,
  [5069] = 3,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_expression_list_repeat1,
  [5079] = 3,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_relation_element_repeat1,
  [5089] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_args_repeat1,
  [5099] = 3,
    ACTIONS(607), 1,
      sym__hex_digit,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [5109] = 3,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(75), 1,
      sym_insert_values_spec,
  [5119] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(441), 1,
      sym_table,
  [5129] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      aux_sym_from_spec_token1,
    STATE(298), 1,
      aux_sym_delete_column_list_repeat1,
  [5139] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(386), 1,
      sym_table,
  [5149] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(199), 1,
      sym_table,
  [5159] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_column_list_repeat1,
  [5169] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(263), 1,
      sym_table,
  [5179] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(288), 1,
      sym_table,
  [5189] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(623), 1,
      aux_sym_update_token2,
    STATE(387), 1,
      sym_using_ttl_timestamp,
  [5199] = 3,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(80), 1,
      sym_insert_values_spec,
  [5209] = 3,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_expression_list_repeat1,
  [5219] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_relation_element_repeat2,
  [5229] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__decimal_literal,
  [5239] = 3,
    ACTIONS(323), 1,
      sym_object_name,
    ACTIONS(325), 1,
      sym__dquote,
    STATE(341), 1,
      sym_column,
  [5249] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_column_list_repeat1,
  [5259] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_assignment_tuple_repeat1,
  [5269] = 3,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_column_list_repeat1,
  [5279] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      aux_sym_from_spec_token1,
    STATE(285), 1,
      aux_sym_delete_column_list_repeat1,
  [5289] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      aux_sym_assignment_map_repeat1,
  [5299] = 3,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_expression_list_repeat1,
  [5309] = 3,
    ACTIONS(227), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(654), 1,
      aux_sym_update_token2,
    STATE(446), 1,
      sym_using_ttl_timestamp,
  [5319] = 3,
    ACTIONS(475), 1,
      sym_object_name,
    STATE(252), 1,
      sym_function_call,
    STATE(368), 1,
      sym_select_element,
  [5329] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_relation_element_repeat2,
  [5339] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      aux_sym_from_spec_token1,
    STATE(258), 1,
      aux_sym_select_elements_repeat1,
  [5349] = 1,
    ACTIONS(660), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [5355] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(198), 1,
      sym_table,
  [5365] = 3,
    ACTIONS(469), 1,
      aux_sym_select_statement_token3,
    ACTIONS(473), 1,
      aux_sym_insert_values_spec_token1,
    STATE(77), 1,
      sym_insert_values_spec,
  [5375] = 3,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      aux_sym_assignment_map_repeat1,
  [5385] = 3,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_relation_element_repeat1,
  [5395] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(391), 1,
      sym_table,
  [5405] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      aux_sym_from_spec_token1,
    STATE(285), 1,
      aux_sym_delete_column_list_repeat1,
  [5415] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_relation_element_repeat2,
  [5425] = 3,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_relation_element_repeat2,
  [5435] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_function_args_repeat1,
  [5445] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(148), 1,
      sym_table,
  [5455] = 3,
    ACTIONS(30), 1,
      sym__dec_digit,
    ACTIONS(678), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__decimal_literal,
  [5465] = 3,
    ACTIONS(611), 1,
      sym_object_name,
    ACTIONS(613), 1,
      sym__dquote,
    STATE(138), 1,
      sym_table,
  [5475] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_relation_element_repeat2,
  [5485] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_relation_element_repeat2,
  [5495] = 3,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      aux_sym_where_spec_token1,
    STATE(307), 1,
      aux_sym_update_repeat1,
  [5505] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      aux_sym_assignment_tuple_repeat1,
  [5515] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(311), 1,
      sym_assignment_element,
  [5522] = 2,
    ACTIONS(691), 1,
      sym__dec_digit,
    STATE(74), 1,
      aux_sym__decimal_literal,
  [5529] = 1,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [5534] = 2,
    ACTIONS(525), 1,
      aux_sym_timestamp_token1,
    STATE(119), 1,
      sym_timestamp,
  [5541] = 2,
    ACTIONS(693), 1,
      sym__dec_digit,
    STATE(98), 1,
      aux_sym__decimal_literal,
  [5548] = 2,
    ACTIONS(695), 1,
      sym__dec_digit,
    STATE(85), 1,
      aux_sym__decimal_literal,
  [5555] = 1,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [5560] = 1,
    ACTIONS(697), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5565] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(234), 1,
      sym_assignment_element,
  [5572] = 1,
    ACTIONS(699), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5577] = 1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5582] = 1,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5587] = 2,
    ACTIONS(446), 1,
      sym_object_name,
    STATE(326), 1,
      sym_delete_column_item,
  [5594] = 2,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
  [5601] = 2,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym_assignment_tuple,
  [5608] = 2,
    ACTIONS(525), 1,
      aux_sym_timestamp_token1,
    STATE(213), 1,
      sym_timestamp,
  [5615] = 1,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5620] = 1,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [5625] = 2,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(81), 1,
      sym_where_spec,
  [5632] = 2,
    ACTIONS(705), 1,
      sym__dec_digit,
    STATE(63), 1,
      aux_sym__decimal_literal,
  [5639] = 1,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5644] = 1,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5649] = 1,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5654] = 2,
    ACTIONS(541), 1,
      sym_object_name,
    STATE(118), 1,
      sym_if_condition,
  [5661] = 2,
    ACTIONS(711), 1,
      sym__dec_digit,
    STATE(303), 1,
      aux_sym__decimal_literal,
  [5668] = 2,
    ACTIONS(713), 1,
      anon_sym_EQ,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
  [5675] = 1,
    ACTIONS(717), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [5680] = 2,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_assignment_tuple,
  [5687] = 2,
    ACTIONS(719), 1,
      aux_sym_from_spec_token1,
    STATE(27), 1,
      sym_from_spec,
  [5694] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(230), 1,
      sym_assignment_element,
  [5701] = 2,
    ACTIONS(719), 1,
      aux_sym_from_spec_token1,
    STATE(26), 1,
      sym_from_spec,
  [5708] = 1,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [5713] = 1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5718] = 1,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [5723] = 2,
    ACTIONS(723), 1,
      sym__dec_digit,
    STATE(87), 1,
      aux_sym__decimal_literal,
  [5730] = 2,
    ACTIONS(519), 1,
      aux_sym_where_spec_token1,
    STATE(89), 1,
      sym_where_spec,
  [5737] = 2,
    ACTIONS(725), 1,
      sym__dec_digit,
    STATE(90), 1,
      aux_sym__decimal_literal,
  [5744] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(238), 1,
      sym_assignment_element,
  [5751] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(244), 1,
      sym_assignment_element,
  [5758] = 2,
    ACTIONS(727), 1,
      sym__hex_digit,
    STATE(43), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [5765] = 2,
    ACTIONS(729), 1,
      sym__dec_digit,
    STATE(88), 1,
      aux_sym__decimal_literal,
  [5772] = 2,
    ACTIONS(719), 1,
      aux_sym_from_spec_token1,
    STATE(237), 1,
      sym_from_spec,
  [5779] = 2,
    ACTIONS(731), 1,
      sym__hex_digit,
    STATE(25), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [5786] = 2,
    ACTIONS(733), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [5793] = 2,
    ACTIONS(719), 1,
      aux_sym_from_spec_token1,
    STATE(221), 1,
      sym_from_spec,
  [5800] = 2,
    ACTIONS(735), 1,
      sym__hex_digit,
    STATE(169), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [5807] = 2,
    ACTIONS(737), 1,
      sym_object_name,
    STATE(112), 1,
      sym_order_spec_element,
  [5814] = 2,
    ACTIONS(689), 1,
      sym_object_name,
    STATE(226), 1,
      sym_assignment_element,
  [5821] = 1,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5826] = 2,
    ACTIONS(607), 1,
      sym__hex_digit,
    STATE(267), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [5833] = 1,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [5838] = 2,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_assignment_tuple,
  [5845] = 2,
    ACTIONS(741), 1,
      sym__dec_digit,
    STATE(3), 1,
      aux_sym__decimal_literal,
  [5852] = 1,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [5857] = 1,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5862] = 1,
    ACTIONS(745), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5867] = 2,
    ACTIONS(747), 1,
      sym_object_name,
    STATE(53), 1,
      sym_from_spec_element,
  [5874] = 1,
    ACTIONS(576), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [5879] = 2,
    ACTIONS(749), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
  [5886] = 1,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [5891] = 2,
    ACTIONS(527), 1,
      aux_sym_ttl_token1,
    STATE(119), 1,
      sym_ttl,
  [5898] = 2,
    ACTIONS(719), 1,
      aux_sym_from_spec_token1,
    STATE(34), 1,
      sym_from_spec,
  [5905] = 1,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5910] = 1,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
  [5914] = 1,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
  [5918] = 1,
    ACTIONS(757), 1,
      aux_sym_create_index_token3,
  [5922] = 1,
    ACTIONS(759), 1,
      anon_sym_DASH,
  [5926] = 1,
    ACTIONS(761), 1,
      anon_sym_DOT,
  [5930] = 1,
    ACTIONS(763), 1,
      aux_sym_select_statement_token6,
  [5934] = 1,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [5938] = 1,
    ACTIONS(767), 1,
      aux_sym_select_statement_token6,
  [5942] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [5946] = 1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [5950] = 1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [5954] = 1,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [5958] = 1,
    ACTIONS(777), 1,
      anon_sym_EQ,
  [5962] = 1,
    ACTIONS(779), 1,
      sym_object_name,
  [5966] = 1,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
  [5970] = 1,
    ACTIONS(561), 1,
      aux_sym_update_token2,
  [5974] = 1,
    ACTIONS(783), 1,
      anon_sym_DASH,
  [5978] = 1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [5982] = 1,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
  [5986] = 1,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
  [5990] = 1,
    ACTIONS(791), 1,
      sym_object_name,
  [5994] = 1,
    ACTIONS(793), 1,
      sym_object_name,
  [5998] = 1,
    ACTIONS(795), 1,
      sym_object_name,
  [6002] = 1,
    ACTIONS(797), 1,
      anon_sym_DOT,
  [6006] = 1,
    ACTIONS(799), 1,
      aux_sym_select_statement_token6,
  [6010] = 1,
    ACTIONS(801), 1,
      sym_object_name,
  [6014] = 1,
    ACTIONS(803), 1,
      sym__hex_4digit,
  [6018] = 1,
    ACTIONS(805), 1,
      aux_sym_select_statement_token6,
  [6022] = 1,
    ACTIONS(807), 1,
      aux_sym_order_spec_token2,
  [6026] = 1,
    ACTIONS(809), 1,
      aux_sym_if_exist_token2,
  [6030] = 1,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
  [6034] = 1,
    ACTIONS(811), 1,
      sym_object_name,
  [6038] = 1,
    ACTIONS(813), 1,
      sym_object_name,
  [6042] = 1,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [6046] = 1,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
  [6050] = 1,
    ACTIONS(819), 1,
      anon_sym_LPAREN,
  [6054] = 1,
    ACTIONS(821), 1,
      sym__hex_4digit,
  [6058] = 1,
    ACTIONS(823), 1,
      sym__dquote,
  [6062] = 1,
    ACTIONS(825), 1,
      aux_sym_select_statement_token6,
  [6066] = 1,
    ACTIONS(827), 1,
      aux_sym_if_not_exist_token1,
  [6070] = 1,
    ACTIONS(829), 1,
      aux_sym__string_literal_token2,
  [6074] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [6078] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [6082] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [6086] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [6090] = 1,
    ACTIONS(839), 1,
      aux_sym__string_literal_token1,
  [6094] = 1,
    ACTIONS(841), 1,
      sym_object_name,
  [6098] = 1,
    ACTIONS(843), 1,
      anon_sym_DOT,
  [6102] = 1,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
  [6106] = 1,
    ACTIONS(847), 1,
      sym__dquote,
  [6110] = 1,
    ACTIONS(849), 1,
      aux_sym_update_token2,
  [6114] = 1,
    ACTIONS(851), 1,
      anon_sym_DOT,
  [6118] = 1,
    ACTIONS(853), 1,
      aux_sym_select_statement_token6,
  [6122] = 1,
    ACTIONS(855), 1,
      anon_sym_DASH,
  [6126] = 1,
    ACTIONS(845), 1,
      anon_sym_DOLLAR_DOLLAR,
  [6130] = 1,
    ACTIONS(857), 1,
      aux_sym_if_exist_token2,
  [6134] = 1,
    ACTIONS(859), 1,
      anon_sym_DOT,
  [6138] = 1,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
  [6142] = 1,
    ACTIONS(863), 1,
      aux_sym_create_index_token3,
  [6146] = 1,
    ACTIONS(865), 1,
      anon_sym_DOT,
  [6150] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [6154] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [6158] = 1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [6162] = 1,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
  [6166] = 1,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
  [6170] = 1,
    ACTIONS(877), 1,
      sym_object_name,
  [6174] = 1,
    ACTIONS(877), 1,
      anon_sym_STAR,
  [6178] = 1,
    ACTIONS(879), 1,
      sym__hex_4digit,
  [6182] = 1,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
  [6186] = 1,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
  [6190] = 1,
    ACTIONS(885), 1,
      anon_sym_COLON,
  [6194] = 1,
    ACTIONS(887), 1,
      sym__dquote,
  [6198] = 1,
    ACTIONS(889), 1,
      anon_sym_DOT,
  [6202] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [6206] = 1,
    ACTIONS(596), 1,
      aux_sym_update_token2,
  [6210] = 1,
    ACTIONS(893), 1,
      sym__hex_4digit,
  [6214] = 1,
    ACTIONS(895), 1,
      aux_sym_insert_statement_token2,
  [6218] = 1,
    ACTIONS(897), 1,
      sym__dquote,
  [6222] = 1,
    ACTIONS(899), 1,
      sym__hex_4digit,
  [6226] = 1,
    ACTIONS(901), 1,
      anon_sym_DOT,
  [6230] = 1,
    ACTIONS(903), 1,
      anon_sym_DOT,
  [6234] = 1,
    ACTIONS(905), 1,
      anon_sym_DOT,
  [6238] = 1,
    ACTIONS(654), 1,
      aux_sym_update_token2,
  [6242] = 1,
    ACTIONS(907), 1,
      sym_object_name,
  [6246] = 1,
    ACTIONS(152), 1,
      anon_sym_DOT,
  [6250] = 1,
    ACTIONS(909), 1,
      aux_sym_begin_batch_token4,
  [6254] = 1,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
  [6258] = 1,
    ACTIONS(911), 1,
      aux_sym_select_statement_token6,
  [6262] = 1,
    ACTIONS(913), 1,
      aux_sym_if_exist_token2,
  [6266] = 1,
    ACTIONS(915), 1,
      sym__hex_4digit,
  [6270] = 1,
    ACTIONS(917), 1,
      aux_sym_if_not_exist_token1,
  [6274] = 1,
    ACTIONS(919), 1,
      sym__hex_digit,
  [6278] = 1,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
  [6282] = 1,
    ACTIONS(923), 1,
      sym_object_name,
  [6286] = 1,
    ACTIONS(925), 1,
      sym_object_name,
  [6290] = 1,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
  [6294] = 1,
    ACTIONS(929), 1,
      anon_sym_DASH,
  [6298] = 1,
    ACTIONS(931), 1,
      anon_sym_EQ,
  [6302] = 1,
    ACTIONS(933), 1,
      sym_object_name,
  [6306] = 1,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
  [6310] = 1,
    ACTIONS(937), 1,
      anon_sym_DOT,
  [6314] = 1,
    ACTIONS(939), 1,
      aux_sym_create_index_token2,
  [6318] = 1,
    ACTIONS(941), 1,
      aux_sym_create_index_token2,
  [6322] = 1,
    ACTIONS(943), 1,
      aux_sym_insert_statement_token2,
  [6326] = 1,
    ACTIONS(945), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 574,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 751,
  [SMALL_STATE(23)] = 793,
  [SMALL_STATE(24)] = 835,
  [SMALL_STATE(25)] = 877,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 931,
  [SMALL_STATE(28)] = 962,
  [SMALL_STATE(29)] = 983,
  [SMALL_STATE(30)] = 1024,
  [SMALL_STATE(31)] = 1065,
  [SMALL_STATE(32)] = 1086,
  [SMALL_STATE(33)] = 1107,
  [SMALL_STATE(34)] = 1148,
  [SMALL_STATE(35)] = 1179,
  [SMALL_STATE(36)] = 1202,
  [SMALL_STATE(37)] = 1240,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1296,
  [SMALL_STATE(40)] = 1334,
  [SMALL_STATE(41)] = 1372,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1432,
  [SMALL_STATE(44)] = 1454,
  [SMALL_STATE(45)] = 1472,
  [SMALL_STATE(46)] = 1510,
  [SMALL_STATE(47)] = 1548,
  [SMALL_STATE(48)] = 1566,
  [SMALL_STATE(49)] = 1588,
  [SMALL_STATE(50)] = 1606,
  [SMALL_STATE(51)] = 1624,
  [SMALL_STATE(52)] = 1642,
  [SMALL_STATE(53)] = 1680,
  [SMALL_STATE(54)] = 1698,
  [SMALL_STATE(55)] = 1736,
  [SMALL_STATE(56)] = 1754,
  [SMALL_STATE(57)] = 1772,
  [SMALL_STATE(58)] = 1790,
  [SMALL_STATE(59)] = 1828,
  [SMALL_STATE(60)] = 1846,
  [SMALL_STATE(61)] = 1868,
  [SMALL_STATE(62)] = 1906,
  [SMALL_STATE(63)] = 1944,
  [SMALL_STATE(64)] = 1966,
  [SMALL_STATE(65)] = 1984,
  [SMALL_STATE(66)] = 2022,
  [SMALL_STATE(67)] = 2044,
  [SMALL_STATE(68)] = 2062,
  [SMALL_STATE(69)] = 2100,
  [SMALL_STATE(70)] = 2138,
  [SMALL_STATE(71)] = 2155,
  [SMALL_STATE(72)] = 2180,
  [SMALL_STATE(73)] = 2205,
  [SMALL_STATE(74)] = 2230,
  [SMALL_STATE(75)] = 2251,
  [SMALL_STATE(76)] = 2276,
  [SMALL_STATE(77)] = 2301,
  [SMALL_STATE(78)] = 2326,
  [SMALL_STATE(79)] = 2351,
  [SMALL_STATE(80)] = 2370,
  [SMALL_STATE(81)] = 2395,
  [SMALL_STATE(82)] = 2415,
  [SMALL_STATE(83)] = 2435,
  [SMALL_STATE(84)] = 2455,
  [SMALL_STATE(85)] = 2475,
  [SMALL_STATE(86)] = 2497,
  [SMALL_STATE(87)] = 2517,
  [SMALL_STATE(88)] = 2539,
  [SMALL_STATE(89)] = 2561,
  [SMALL_STATE(90)] = 2581,
  [SMALL_STATE(91)] = 2603,
  [SMALL_STATE(92)] = 2623,
  [SMALL_STATE(93)] = 2643,
  [SMALL_STATE(94)] = 2663,
  [SMALL_STATE(95)] = 2683,
  [SMALL_STATE(96)] = 2703,
  [SMALL_STATE(97)] = 2723,
  [SMALL_STATE(98)] = 2743,
  [SMALL_STATE(99)] = 2765,
  [SMALL_STATE(100)] = 2784,
  [SMALL_STATE(101)] = 2799,
  [SMALL_STATE(102)] = 2818,
  [SMALL_STATE(103)] = 2837,
  [SMALL_STATE(104)] = 2854,
  [SMALL_STATE(105)] = 2871,
  [SMALL_STATE(106)] = 2890,
  [SMALL_STATE(107)] = 2909,
  [SMALL_STATE(108)] = 2924,
  [SMALL_STATE(109)] = 2943,
  [SMALL_STATE(110)] = 2962,
  [SMALL_STATE(111)] = 2977,
  [SMALL_STATE(112)] = 2996,
  [SMALL_STATE(113)] = 3011,
  [SMALL_STATE(114)] = 3030,
  [SMALL_STATE(115)] = 3049,
  [SMALL_STATE(116)] = 3068,
  [SMALL_STATE(117)] = 3087,
  [SMALL_STATE(118)] = 3103,
  [SMALL_STATE(119)] = 3117,
  [SMALL_STATE(120)] = 3131,
  [SMALL_STATE(121)] = 3145,
  [SMALL_STATE(122)] = 3159,
  [SMALL_STATE(123)] = 3173,
  [SMALL_STATE(124)] = 3186,
  [SMALL_STATE(125)] = 3199,
  [SMALL_STATE(126)] = 3224,
  [SMALL_STATE(127)] = 3239,
  [SMALL_STATE(128)] = 3252,
  [SMALL_STATE(129)] = 3265,
  [SMALL_STATE(130)] = 3278,
  [SMALL_STATE(131)] = 3291,
  [SMALL_STATE(132)] = 3304,
  [SMALL_STATE(133)] = 3317,
  [SMALL_STATE(134)] = 3330,
  [SMALL_STATE(135)] = 3343,
  [SMALL_STATE(136)] = 3356,
  [SMALL_STATE(137)] = 3369,
  [SMALL_STATE(138)] = 3382,
  [SMALL_STATE(139)] = 3395,
  [SMALL_STATE(140)] = 3408,
  [SMALL_STATE(141)] = 3421,
  [SMALL_STATE(142)] = 3434,
  [SMALL_STATE(143)] = 3447,
  [SMALL_STATE(144)] = 3460,
  [SMALL_STATE(145)] = 3473,
  [SMALL_STATE(146)] = 3486,
  [SMALL_STATE(147)] = 3499,
  [SMALL_STATE(148)] = 3512,
  [SMALL_STATE(149)] = 3525,
  [SMALL_STATE(150)] = 3538,
  [SMALL_STATE(151)] = 3551,
  [SMALL_STATE(152)] = 3576,
  [SMALL_STATE(153)] = 3589,
  [SMALL_STATE(154)] = 3614,
  [SMALL_STATE(155)] = 3627,
  [SMALL_STATE(156)] = 3640,
  [SMALL_STATE(157)] = 3653,
  [SMALL_STATE(158)] = 3666,
  [SMALL_STATE(159)] = 3691,
  [SMALL_STATE(160)] = 3704,
  [SMALL_STATE(161)] = 3717,
  [SMALL_STATE(162)] = 3730,
  [SMALL_STATE(163)] = 3755,
  [SMALL_STATE(164)] = 3768,
  [SMALL_STATE(165)] = 3781,
  [SMALL_STATE(166)] = 3794,
  [SMALL_STATE(167)] = 3807,
  [SMALL_STATE(168)] = 3823,
  [SMALL_STATE(169)] = 3845,
  [SMALL_STATE(170)] = 3861,
  [SMALL_STATE(171)] = 3873,
  [SMALL_STATE(172)] = 3901,
  [SMALL_STATE(173)] = 3923,
  [SMALL_STATE(174)] = 3948,
  [SMALL_STATE(175)] = 3970,
  [SMALL_STATE(176)] = 3990,
  [SMALL_STATE(177)] = 4010,
  [SMALL_STATE(178)] = 4028,
  [SMALL_STATE(179)] = 4050,
  [SMALL_STATE(180)] = 4067,
  [SMALL_STATE(181)] = 4086,
  [SMALL_STATE(182)] = 4103,
  [SMALL_STATE(183)] = 4114,
  [SMALL_STATE(184)] = 4133,
  [SMALL_STATE(185)] = 4144,
  [SMALL_STATE(186)] = 4163,
  [SMALL_STATE(187)] = 4179,
  [SMALL_STATE(188)] = 4187,
  [SMALL_STATE(189)] = 4195,
  [SMALL_STATE(190)] = 4207,
  [SMALL_STATE(191)] = 4219,
  [SMALL_STATE(192)] = 4233,
  [SMALL_STATE(193)] = 4249,
  [SMALL_STATE(194)] = 4265,
  [SMALL_STATE(195)] = 4273,
  [SMALL_STATE(196)] = 4289,
  [SMALL_STATE(197)] = 4305,
  [SMALL_STATE(198)] = 4321,
  [SMALL_STATE(199)] = 4337,
  [SMALL_STATE(200)] = 4353,
  [SMALL_STATE(201)] = 4361,
  [SMALL_STATE(202)] = 4371,
  [SMALL_STATE(203)] = 4381,
  [SMALL_STATE(204)] = 4389,
  [SMALL_STATE(205)] = 4399,
  [SMALL_STATE(206)] = 4415,
  [SMALL_STATE(207)] = 4431,
  [SMALL_STATE(208)] = 4441,
  [SMALL_STATE(209)] = 4449,
  [SMALL_STATE(210)] = 4457,
  [SMALL_STATE(211)] = 4473,
  [SMALL_STATE(212)] = 4489,
  [SMALL_STATE(213)] = 4501,
  [SMALL_STATE(214)] = 4508,
  [SMALL_STATE(215)] = 4517,
  [SMALL_STATE(216)] = 4530,
  [SMALL_STATE(217)] = 4543,
  [SMALL_STATE(218)] = 4556,
  [SMALL_STATE(219)] = 4569,
  [SMALL_STATE(220)] = 4582,
  [SMALL_STATE(221)] = 4595,
  [SMALL_STATE(222)] = 4608,
  [SMALL_STATE(223)] = 4621,
  [SMALL_STATE(224)] = 4630,
  [SMALL_STATE(225)] = 4643,
  [SMALL_STATE(226)] = 4650,
  [SMALL_STATE(227)] = 4663,
  [SMALL_STATE(228)] = 4676,
  [SMALL_STATE(229)] = 4687,
  [SMALL_STATE(230)] = 4700,
  [SMALL_STATE(231)] = 4713,
  [SMALL_STATE(232)] = 4726,
  [SMALL_STATE(233)] = 4739,
  [SMALL_STATE(234)] = 4752,
  [SMALL_STATE(235)] = 4765,
  [SMALL_STATE(236)] = 4778,
  [SMALL_STATE(237)] = 4791,
  [SMALL_STATE(238)] = 4804,
  [SMALL_STATE(239)] = 4817,
  [SMALL_STATE(240)] = 4830,
  [SMALL_STATE(241)] = 4843,
  [SMALL_STATE(242)] = 4856,
  [SMALL_STATE(243)] = 4869,
  [SMALL_STATE(244)] = 4878,
  [SMALL_STATE(245)] = 4891,
  [SMALL_STATE(246)] = 4901,
  [SMALL_STATE(247)] = 4907,
  [SMALL_STATE(248)] = 4917,
  [SMALL_STATE(249)] = 4927,
  [SMALL_STATE(250)] = 4937,
  [SMALL_STATE(251)] = 4947,
  [SMALL_STATE(252)] = 4957,
  [SMALL_STATE(253)] = 4965,
  [SMALL_STATE(254)] = 4975,
  [SMALL_STATE(255)] = 4983,
  [SMALL_STATE(256)] = 4993,
  [SMALL_STATE(257)] = 5003,
  [SMALL_STATE(258)] = 5011,
  [SMALL_STATE(259)] = 5021,
  [SMALL_STATE(260)] = 5031,
  [SMALL_STATE(261)] = 5041,
  [SMALL_STATE(262)] = 5049,
  [SMALL_STATE(263)] = 5059,
  [SMALL_STATE(264)] = 5069,
  [SMALL_STATE(265)] = 5079,
  [SMALL_STATE(266)] = 5089,
  [SMALL_STATE(267)] = 5099,
  [SMALL_STATE(268)] = 5109,
  [SMALL_STATE(269)] = 5119,
  [SMALL_STATE(270)] = 5129,
  [SMALL_STATE(271)] = 5139,
  [SMALL_STATE(272)] = 5149,
  [SMALL_STATE(273)] = 5159,
  [SMALL_STATE(274)] = 5169,
  [SMALL_STATE(275)] = 5179,
  [SMALL_STATE(276)] = 5189,
  [SMALL_STATE(277)] = 5199,
  [SMALL_STATE(278)] = 5209,
  [SMALL_STATE(279)] = 5219,
  [SMALL_STATE(280)] = 5229,
  [SMALL_STATE(281)] = 5239,
  [SMALL_STATE(282)] = 5249,
  [SMALL_STATE(283)] = 5259,
  [SMALL_STATE(284)] = 5269,
  [SMALL_STATE(285)] = 5279,
  [SMALL_STATE(286)] = 5289,
  [SMALL_STATE(287)] = 5299,
  [SMALL_STATE(288)] = 5309,
  [SMALL_STATE(289)] = 5319,
  [SMALL_STATE(290)] = 5329,
  [SMALL_STATE(291)] = 5339,
  [SMALL_STATE(292)] = 5349,
  [SMALL_STATE(293)] = 5355,
  [SMALL_STATE(294)] = 5365,
  [SMALL_STATE(295)] = 5375,
  [SMALL_STATE(296)] = 5385,
  [SMALL_STATE(297)] = 5395,
  [SMALL_STATE(298)] = 5405,
  [SMALL_STATE(299)] = 5415,
  [SMALL_STATE(300)] = 5425,
  [SMALL_STATE(301)] = 5435,
  [SMALL_STATE(302)] = 5445,
  [SMALL_STATE(303)] = 5455,
  [SMALL_STATE(304)] = 5465,
  [SMALL_STATE(305)] = 5475,
  [SMALL_STATE(306)] = 5485,
  [SMALL_STATE(307)] = 5495,
  [SMALL_STATE(308)] = 5505,
  [SMALL_STATE(309)] = 5515,
  [SMALL_STATE(310)] = 5522,
  [SMALL_STATE(311)] = 5529,
  [SMALL_STATE(312)] = 5534,
  [SMALL_STATE(313)] = 5541,
  [SMALL_STATE(314)] = 5548,
  [SMALL_STATE(315)] = 5555,
  [SMALL_STATE(316)] = 5560,
  [SMALL_STATE(317)] = 5565,
  [SMALL_STATE(318)] = 5572,
  [SMALL_STATE(319)] = 5577,
  [SMALL_STATE(320)] = 5582,
  [SMALL_STATE(321)] = 5587,
  [SMALL_STATE(322)] = 5594,
  [SMALL_STATE(323)] = 5601,
  [SMALL_STATE(324)] = 5608,
  [SMALL_STATE(325)] = 5615,
  [SMALL_STATE(326)] = 5620,
  [SMALL_STATE(327)] = 5625,
  [SMALL_STATE(328)] = 5632,
  [SMALL_STATE(329)] = 5639,
  [SMALL_STATE(330)] = 5644,
  [SMALL_STATE(331)] = 5649,
  [SMALL_STATE(332)] = 5654,
  [SMALL_STATE(333)] = 5661,
  [SMALL_STATE(334)] = 5668,
  [SMALL_STATE(335)] = 5675,
  [SMALL_STATE(336)] = 5680,
  [SMALL_STATE(337)] = 5687,
  [SMALL_STATE(338)] = 5694,
  [SMALL_STATE(339)] = 5701,
  [SMALL_STATE(340)] = 5708,
  [SMALL_STATE(341)] = 5713,
  [SMALL_STATE(342)] = 5718,
  [SMALL_STATE(343)] = 5723,
  [SMALL_STATE(344)] = 5730,
  [SMALL_STATE(345)] = 5737,
  [SMALL_STATE(346)] = 5744,
  [SMALL_STATE(347)] = 5751,
  [SMALL_STATE(348)] = 5758,
  [SMALL_STATE(349)] = 5765,
  [SMALL_STATE(350)] = 5772,
  [SMALL_STATE(351)] = 5779,
  [SMALL_STATE(352)] = 5786,
  [SMALL_STATE(353)] = 5793,
  [SMALL_STATE(354)] = 5800,
  [SMALL_STATE(355)] = 5807,
  [SMALL_STATE(356)] = 5814,
  [SMALL_STATE(357)] = 5821,
  [SMALL_STATE(358)] = 5826,
  [SMALL_STATE(359)] = 5833,
  [SMALL_STATE(360)] = 5838,
  [SMALL_STATE(361)] = 5845,
  [SMALL_STATE(362)] = 5852,
  [SMALL_STATE(363)] = 5857,
  [SMALL_STATE(364)] = 5862,
  [SMALL_STATE(365)] = 5867,
  [SMALL_STATE(366)] = 5874,
  [SMALL_STATE(367)] = 5879,
  [SMALL_STATE(368)] = 5886,
  [SMALL_STATE(369)] = 5891,
  [SMALL_STATE(370)] = 5898,
  [SMALL_STATE(371)] = 5905,
  [SMALL_STATE(372)] = 5910,
  [SMALL_STATE(373)] = 5914,
  [SMALL_STATE(374)] = 5918,
  [SMALL_STATE(375)] = 5922,
  [SMALL_STATE(376)] = 5926,
  [SMALL_STATE(377)] = 5930,
  [SMALL_STATE(378)] = 5934,
  [SMALL_STATE(379)] = 5938,
  [SMALL_STATE(380)] = 5942,
  [SMALL_STATE(381)] = 5946,
  [SMALL_STATE(382)] = 5950,
  [SMALL_STATE(383)] = 5954,
  [SMALL_STATE(384)] = 5958,
  [SMALL_STATE(385)] = 5962,
  [SMALL_STATE(386)] = 5966,
  [SMALL_STATE(387)] = 5970,
  [SMALL_STATE(388)] = 5974,
  [SMALL_STATE(389)] = 5978,
  [SMALL_STATE(390)] = 5982,
  [SMALL_STATE(391)] = 5986,
  [SMALL_STATE(392)] = 5990,
  [SMALL_STATE(393)] = 5994,
  [SMALL_STATE(394)] = 5998,
  [SMALL_STATE(395)] = 6002,
  [SMALL_STATE(396)] = 6006,
  [SMALL_STATE(397)] = 6010,
  [SMALL_STATE(398)] = 6014,
  [SMALL_STATE(399)] = 6018,
  [SMALL_STATE(400)] = 6022,
  [SMALL_STATE(401)] = 6026,
  [SMALL_STATE(402)] = 6030,
  [SMALL_STATE(403)] = 6034,
  [SMALL_STATE(404)] = 6038,
  [SMALL_STATE(405)] = 6042,
  [SMALL_STATE(406)] = 6046,
  [SMALL_STATE(407)] = 6050,
  [SMALL_STATE(408)] = 6054,
  [SMALL_STATE(409)] = 6058,
  [SMALL_STATE(410)] = 6062,
  [SMALL_STATE(411)] = 6066,
  [SMALL_STATE(412)] = 6070,
  [SMALL_STATE(413)] = 6074,
  [SMALL_STATE(414)] = 6078,
  [SMALL_STATE(415)] = 6082,
  [SMALL_STATE(416)] = 6086,
  [SMALL_STATE(417)] = 6090,
  [SMALL_STATE(418)] = 6094,
  [SMALL_STATE(419)] = 6098,
  [SMALL_STATE(420)] = 6102,
  [SMALL_STATE(421)] = 6106,
  [SMALL_STATE(422)] = 6110,
  [SMALL_STATE(423)] = 6114,
  [SMALL_STATE(424)] = 6118,
  [SMALL_STATE(425)] = 6122,
  [SMALL_STATE(426)] = 6126,
  [SMALL_STATE(427)] = 6130,
  [SMALL_STATE(428)] = 6134,
  [SMALL_STATE(429)] = 6138,
  [SMALL_STATE(430)] = 6142,
  [SMALL_STATE(431)] = 6146,
  [SMALL_STATE(432)] = 6150,
  [SMALL_STATE(433)] = 6154,
  [SMALL_STATE(434)] = 6158,
  [SMALL_STATE(435)] = 6162,
  [SMALL_STATE(436)] = 6166,
  [SMALL_STATE(437)] = 6170,
  [SMALL_STATE(438)] = 6174,
  [SMALL_STATE(439)] = 6178,
  [SMALL_STATE(440)] = 6182,
  [SMALL_STATE(441)] = 6186,
  [SMALL_STATE(442)] = 6190,
  [SMALL_STATE(443)] = 6194,
  [SMALL_STATE(444)] = 6198,
  [SMALL_STATE(445)] = 6202,
  [SMALL_STATE(446)] = 6206,
  [SMALL_STATE(447)] = 6210,
  [SMALL_STATE(448)] = 6214,
  [SMALL_STATE(449)] = 6218,
  [SMALL_STATE(450)] = 6222,
  [SMALL_STATE(451)] = 6226,
  [SMALL_STATE(452)] = 6230,
  [SMALL_STATE(453)] = 6234,
  [SMALL_STATE(454)] = 6238,
  [SMALL_STATE(455)] = 6242,
  [SMALL_STATE(456)] = 6246,
  [SMALL_STATE(457)] = 6250,
  [SMALL_STATE(458)] = 6254,
  [SMALL_STATE(459)] = 6258,
  [SMALL_STATE(460)] = 6262,
  [SMALL_STATE(461)] = 6266,
  [SMALL_STATE(462)] = 6270,
  [SMALL_STATE(463)] = 6274,
  [SMALL_STATE(464)] = 6278,
  [SMALL_STATE(465)] = 6282,
  [SMALL_STATE(466)] = 6286,
  [SMALL_STATE(467)] = 6290,
  [SMALL_STATE(468)] = 6294,
  [SMALL_STATE(469)] = 6298,
  [SMALL_STATE(470)] = 6302,
  [SMALL_STATE(471)] = 6306,
  [SMALL_STATE(472)] = 6310,
  [SMALL_STATE(473)] = 6314,
  [SMALL_STATE(474)] = 6318,
  [SMALL_STATE(475)] = 6322,
  [SMALL_STATE(476)] = 6326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(475),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(473),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(41),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 12),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(181),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(179),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(332),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 11),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(167),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(68),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 11),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(463),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(289),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(22),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(12),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(281),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(321),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(58),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(465),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(323),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(309),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 13),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 9),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [935] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
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
